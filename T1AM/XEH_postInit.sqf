// Starts the artillery system

T1AM_Ready = false;

if (isNil "T1AM_ModEnabled") then {T1AM_ModEnabled = true};
if (isNil "T1AM_AllowMapClick") then {T1AM_AllowMapClick = true};
if (isNil "T1AM_PrepTimes") then {T1AM_PrepTimes = 1};
if (isNil "T1AM_DEBUG_ShowRounds") then {T1AM_DEBUG_ShowRounds = false};
if (isNil "T1AM_Debug_Mode") then {T1AM_Debug_Mode = false};
if (isNil "T1AM_DEBUG_DisableRandomSpread") then {T1AM_DEBUG_DisableRandomSpread = false};
if (isNil "T1AM_DEBUG_DisableInitialMiss") then {T1AM_DEBUG_DisableInitialMiss = false};

// Assign button.
#include "\a3\editor_f\Data\Scripts\dikCodes.h"
["Tier 1 Artillery", "Show Dialog", ["Show Computer", "Opens the artillery computer."], {[0, [], 0] spawn T1AM_Fnc_LoadingScreen}, "", [DIK_UP, [false, false, false]]] call cba_fnc_addKeybind;

// Items that count as a radio.
T1AM_RadioTypes = ["ItemRadio"];

// Init vars.
T1AM_X = 0;			// Actual X pos where the shots will go.
T1AM_Y = 0;			// Actual Y pos where the shots will go.
T1AM_Xdisplay = 0;	// The X target coordinates displayed to the player. May not be accurate, on purpose.
T1AM_Ydisplay = 0;	// The Y target coordinates displayed to the player. May not be accurate, on purpose.
T1AM_Elevation = 0; // ASL elevation.
T1AM_HaveAimpoint = false;	// Used to decide if player has already picked a target pos when starting a new mission.
T1AM_SelectedAsset = grpNull;

// Vars used to remember what the player had selected in the arty computer,
// so that the same options can automatically be selected when closing and re-opening the arty computer.
T1AM_LastMission = "SPOT";
T1AM_LastAngle = "HIGH";
T1AM_LastRounds = 1;
T1AM_LastWarhead = "";
T1AM_LastFuse = "";
T1AM_LastAirburstHeight = "";
T1AM_LastSheaf = "";
T1AM_LastSheafX = 100;
T1AM_LastSheafY = 100;
T1AM_LastSheafDir = 0;
T1AM_LastSheafDist = 0;
T1AM_LastAdjustSpotterX = 0;
T1AM_LastAdjustSpotterY = 0;
T1AM_LastAdjustImpactX = 0;
T1AM_LastAdjustImpactY = 0;
T1AM_LastAdjustImpactRefX = 0;
T1AM_LastAdjustImpactRefY = 0;
T1AM_LastTRPX = 0;
T1AM_LastTRPY = 0;
T1AM_LastGPSX = -999999;
T1AM_LastGPSY = -999999;
T1AM_LastGPSZ_AGL = 0;
T1AM_LastAdjustCheckbox = 0;
T1AM_LastAdjustX = 0;
T1AM_LastAdjustY = 0;
T1AM_LastAimpointX = 0;
T1AM_LastAimpointY = 0;
T1AM_LastRemarks = "";


// Units that will be added to the arty computer, even though they normally wouldn't be added because of incompatibility.
// Used for special units that have been given custom code for support.
if (isNil "T1AM_ApproveVehiclesOverride") then {
	T1AM_ApproveVehiclesOverride = ["B_Ship_MRLS_01_F"];
};


// Rounds that can be used for airburst fire.
if (isNil "T1AM_AirburstRounds") then {
	T1AM_AirburstRounds = ["8Rnd_82mm_Mo_shells","8Rnd_82mm_Mo_guided","8Rnd_82mm_Mo_LG","32Rnd_155mm_Mo_shells","2Rnd_155mm_Mo_guided","2Rnd_155mm_Mo_LG","32Rnd_155mm_Mo_shells_O","2Rnd_155mm_Mo_guided_O","4Rnd_155mm_Mo_LG_O","12Rnd_230mm_rockets","RHS_mag_m1_he_12","rhs_mag_HE_2a33","rhs_mag_3vo18_10","rhs_mag_3of56_10","rhs_mag_155mm_m795_28","rhs_mag_m31_6"];
};


// GPS guided. Will go for the chosen target pos.
if (isNil "T1AM_GPSGuidedTypes") then {
	T1AM_GPSGuidedTypes = ["8Rnd_82mm_Mo_guided","rhs_mag_m30_6","rhs_mag_m31_6","rhs_mag_mgm140b_1","rhs_mag_mgm164_block2_1","rhs_mag_mgm164_block4_1"];
};


// Laser + GPS guided. GPS guided when it has no lock, which means it will go for the target pos.
// It will try to get a lock on a laser when projectile gets within 2000 meters of the target pos.
// Laser needs to be within 500 meters of the chosen target pos.
// If it gained a lock and then loses lock on the laser, it will go for the last known position of the laser.
if (isNil "T1AM_GPSLaserTypes") then {
	T1AM_GPSLaserTypes = ["2Rnd_155mm_Mo_LG","2Rnd_155mm_Mo_Cluster","6Rnd_155mm_Mo_mine","6Rnd_155mm_Mo_AT_mine","4Rnd_155mm_Mo_LG_O","2Rnd_155mm_Mo_Cluster_O","6Rnd_155mm_Mo_mine_O","6Rnd_155mm_Mo_AT_mine_O","magazine_Missiles_Cruise_01_x18","magazine_Missiles_Cruise_01_Cluster_x18"];
};


// Discriminating + GPS guided. GPS guided when it has no lock, which means it will go for the target pos.
// It will try to get a lock on an enemy vehicle when projectile gets within 2000 meters of the target pos.
// Target needs to be within 300 meters of the chosen target pos.
// Prioritizes targets in this order: armored vehicles > ground vehicle (static weapons not included) > slow moving aircraft > ship
// Then it will prioritize the target that is the closest to the target pos.
// It will not lock onto vehicles that in their config are set as the same faction as the spotter.
// It will also not lock onto civilian vehicles.
// If it loses lock, it will use GPS instead.
// If airburst is enabled, it will use GPS instead.
if (isNil "T1AM_GPSSeekerTypes") then {
	T1AM_GPSSeekerTypes = ["2Rnd_155mm_Mo_guided","2Rnd_155mm_Mo_guided_O"];
};


// Laser guided. A bit worse quality than the previous GPS/Laser, meaning it's a bit less accurate.
// Will go where the laser is.
// If it loses lock, it will randomly hit around the last known position of the laser.
if (isNil "T1AM_LaserTypes") then {
	T1AM_LaserTypes = ["8Rnd_82mm_Mo_LG","rhs_mag_LASER_2a33","rhs_mag_3of69m_2","rhs_mag_155mm_m712_2"];
};


// Groups, vehicles and classnames that are excluded from the system.
if (isNil "T1AM_Exclude") then {T1AM_Exclude = ["rhsgref_cdf_b_reg_d30_at","rhsgref_ins_d30_at","rhs_D30_at_msv","rhs_D30_at_vdv","rhs_D30_at_vmf","rhsgref_cdf_reg_d30_at","rhsgref_ins_g_d30_at","rhsgref_nat_d30_at","rhs_9k79","rhs_9k79_K","rhs_9k79_B"]};


// New controlled asset.
T1AM_ControlledAsset = grpNull;

// Which asset is the player currently controlling.
T1AM_ControlledAssetLocal = grpNull;

// All controlled assets.
if (isNil "T1AM_ControlledAssets") then {T1AM_ControlledAssets = []};

// All busy assets.
if (isNil "T1AM_AssetsBusy") then {T1AM_AssetsBusy = []};

// Which dialog should be opened by default? ("ASSETS","AIMPOINT","CONTROL")
T1AM_LastDialog = "ASSETS";

// Which tube of the selected asset is being used.
T1AM_SelectedTube = objNull;
T1AM_SelectedTubeIndex = 0;

// Fire mission the player is currently working on.
T1AM_FireMissionCurrent = [];

// All fire missions performed so far (except spotting rounds).
if (isNil "T1AM_AllMissions") then {T1AM_AllMissions = []};

// Cut down plotting time for repeat or pre-plotted missions.
T1AM_PrePlotted = false;

// Selected pre-plotted mission.
T1AM_SelectedPrePlotted = [];

// Which audio set should each side use (US, Greek, Persian, None).
T1AM_AudioBLUFOR = "US";
T1AM_AudioREDFOR = "PER";
T1AM_AudioINDEP = "GRE";

// Restrict artillery users to certain types and classes?
if (isNil "T1AM_AuthorizeEveryone") then {T1AM_AuthorizeEveryone = true};
// If so, vehicle classes that are authorized (config classes).
if (isNil "T1AM_AuthorizedClasses") then {T1AM_AuthorizedClasses = []};
// If so, units that are authorized (variables set by script or editor).
if (isNil "T1AM_AuthorizedVariables") then {T1AM_AuthorizedVariables = []};

call T1AM_Fnc_GetMapGridData;
[] spawn T1AM_Fnc_ApproveVehicles;


T1AM_Ready = true;