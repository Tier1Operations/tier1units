// Starts the artillery system
sleep 0.1;
if (((getMarkerPos "dtaTest") select 0) > 0) exitWith {hint "DTA TEST MODE ACTIVE"};

dtaReady = false;
dtaDebug = false;
dtaNoDelay = false;
dtaRealisticTimes = false;
dtaNoInitialInaccuracy = false;
dtaDisallowMapclick = false;
dtaTrackRounds = false;
dtaScriptMode = false;

if (isNil "DTA_turnOff") then {DTA_turnOff = false};
if (isNil "DTA_turnOffMiss") then {DTA_turnOffMiss = false};
if (isNil "DTA_turnOffRandomSpread") then {DTA_turnOffRandomSpread = false};

// Use this for the addon versions
#include "\a3\editor_f\Data\Scripts\dikCodes.h"
dta_fnc_KeyPressed = compile preprocessFile "DrongosArtillery\Misc\KeyPressed.sqf";
["Drongo's Artillery", "Show Dialog", ["Show Dialog", "Tool Tip"], {[] call dta_fnc_KeyPressed}, "", [DIK_UP, [false, false, false]]] call cba_fnc_addKeybind;
// End addon version

// For development debugging
//dtaScriptMode = true;

dtaKey = 0xDB;
if (dtaScriptMode) then {
	//dtaKey = 0xDB;findDisplay 46 displayAddEventHandler ["KeyDown", "if (_this select 1 == dtaKey) then {nul = [] execVM ""DrongosArtillery\Dialog\Check.sqf""};"];
	dtaDebug = true; dtaNoDelay = true; dtaRealisticTimes = true; dtaNoInitialInaccuracy = true;dtaTrackRounds = true;
};

// End script version

dtaPos = [0,0];
dtaX = 0;
dtaY = 0;
dtaAdjustX = 0;
dtaAdjustY = 0;
dtaElevation = 0;
// Has an aimpoint been entered?
dtaHaveAimpoint = false;
// The x/y values that are displayed to the player (not necessarily the true x/y value used by the system)
dtaXdisplay = 0;
dtaYdisplay = 0;
// The real (BIS) values
// Elevation ASL
dtaElevation = 0;

// Parent classes that show a unit inherits from an artillery piece
dtaArtyParents = ["StaticMortar","StaticCannon","MBT_01_mlrs_base_F","MBT_01_arty_base_F","B_MBT_01_mlrs_base_F","B_MBT_01_arty_base_F","O_MBT_02_arty_base_F","O_MBT_02_arty_F","I_MBT_01_arty_F","I_MBT_01_mlrs_F","rhs_2s3_tv","rhs_bm21_msv_01"];
//dtaArtyParentsRHS = ["rhs_bm21_msv_01","rhs_2s3_tv"];
// Acceptable radio types
dtaRadioTypes = ["ItemRadio"];

dtaSelectedAsset = grpNull;
dtaAssets = [];
dtaWarheadTypes = ["HE","Flare","Smoke","Guided","Cluster","Laser.G","Mine","AT mine","Rocket","WP","Chemical","Nuclear"];
dtaWarheadType = "";
dtaDispersion = 0;
dtaAngle = "Low";
//dtaWaitForAmmoDisplay = false;
dtaLastMission = "";
dtaLastAngle = "";
dtaLastRounds = 1;
dtaLastWarhead = "";
dtaLastFuse = "";
dtaLastAirburstHeight = "";
dtaLastSheaf = "";
dtaLastSheafX = 0;
dtaLastSheafY = 0;
dtaLastSheafLineDir = 0;
dtaLastSheafLineDist = 0;
dtaLastGPSX = -999999;
dtaLastGPSY = -999999;
dtaLastGPSZ_AGL = 0;
dtaLastAdjustX = 0;
dtaLastAdjustY = 0;
dtaControlRunning = false;


// Units that will be added to the arty computer, even though they normally wouldn't be supported.
// Used for special units.
if (isNil "dtaApproveVehiclesOverride") then {
	dtaApproveVehiclesOverride = ["B_Ship_MRLS_01_F"];
};


// Rounds that can be used for airburst fire.
if (isNil "dtaAirburstRounds") then {
	dtaAirburstRounds = ["8Rnd_82mm_Mo_shells","8Rnd_82mm_Mo_guided","8Rnd_82mm_Mo_LG","32Rnd_155mm_Mo_shells","2Rnd_155mm_Mo_guided","2Rnd_155mm_Mo_LG","12Rnd_230mm_rockets","rhs_1Rnd_m821_HE","RHS_mag_m1_he_12","rhs_mag_HE_2a33","rhs_mag_3vo18_10","rhs_mag_3of56_10","rhs_mag_155mm_m795_28"];
};


// GPS guided. Will go for the chosen target pos.
if (isNil "dtaGPSGuidedTypes") then {
	dtaGPSGuidedTypes = ["8Rnd_82mm_Mo_guided"];
};


// Laser + GPS guided. GPS guided when it has no lock, which means it will go for the target pos.
// It will try to get a lock on a laser when projectile gets within 2000 meters of the target pos.
// Laser needs to be within 500 meters of the chosen target pos.
// If it gained a lock and then loses lock on the laser, it will go for the last known position of the laser.
if (isNil "dtaGPSLaserTypes") then {
	dtaGPSLaserTypes = ["2Rnd_155mm_Mo_LG","2Rnd_155mm_Mo_Cluster","6Rnd_155mm_Mo_mine","6Rnd_155mm_Mo_AT_mine","magazine_Missiles_Cruise_01_x18","magazine_Missiles_Cruise_01_Cluster_x18"];
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
if (isNil "dtaGPSSeekerTypes") then {
	dtaGPSSeekerTypes = ["2Rnd_155mm_Mo_guided"];
};


// Laser guided. A bit worse quality than the previous GPS/Laser, meaning it's a bit less accurate.
// Will go where the laser is.
// If it loses lock, it will randomly hit around the last known position of the laser.
if (isNil "dtaLaserTypes") then {
	dtaLaserTypes = ["8Rnd_82mm_Mo_LG","rhs_mag_LASER_2a33","rhs_mag_155mm_m712_2"];
};


// Not working
dtaWPTypes = ["DTA_10Rnd_155mm_Mo_wp","RDS_30Rnd_122mmWP_D30","RDS_30Rnd_105mmWP_M119"];
// Not working
dtaChemTypes = ["1Rnd_155mm_Mo_chem"];
// Not working
dtaNukeTypes = ["1Rnd_155mm_Mo_nuke"];

// For targets of special warhead types
dtaVictimsWP = [];
dtaVictimsChem = [];
dtaVictimsNuke = [];

// New controlled asset
dtaControlledAsset = grpNull;
// Which asset is the player currently controlling
dtaControlledAssetLocal = grpNull;
// All controlled assets
if (isNil "dtaControlledAssets") then {dtaControlledAssets = []};
// All busy assets
if (isNil "dtaAssetsBusy") then {dtaAssetsBusy = []};
// Array to be processed on the server
dtaNewFireMission = [];
// Which dialog should be opened by default? ("Assets","Aimpoint","Control")
dtaLastDialog = "Assets";
// Which tube of the selected asset is being used
dtaSelectedTube = objNull;
dtaSelectedTubeIndex = 0;

// Fire mission the player is currently working on
dtaFireMissionCurrent = [];

// What type of mission (FFE = Fire For Effect, SPOT = 1 Spotting round, PLOT = Plot mission, but to not execute it)
dtaMissionType = "";
// All fire missions performed so far (except spotting rounds)
if (isNil "dtaAllMissions") then {dtaAllMissions = []};
// Cut down plotting time for repeast or pre-plotted missions
dtaPrePlotted = false;
// Selected pre-plotted mission
dtaSelectedPrePlotted = [];

// Which audio set should each side use (US, Greek, Persian, None)
dtaAudioBLUFOR = "US";
dtaAudioREDFOR = "PER";
dtaAudioINDEP = "GRE";

// Restrict artillery users to certain types and classes?
if (isNil "dtaRestrictUsers") then {dtaRestrictUsers = false};
// If so, vehicle classes that are authorized (to be set by script)
if (isNil "dtaAuthorizedClasses") then {dtaAuthorizedClasses = []};
// If so, units that are authorized (to be set by script)
if (isNil "dtaAuthorizedUnits") then {dtaAuthorizedUnits = []};

// Groups, vehicles and classnames that are excluded from the system
if (isNil "dtaExclude") then {dtaExclude = []};


dta_fnc_HasRadio = compile preprocessFile "DrongosArtillery\Misc\HasRadio.sqf";
dta_fnc_ArtilleryGroupsBySide = compile preprocessFile "DrongosArtillery\Misc\GroupsBySide.sqf";
dta_fnc_ArtilleryAmmoCheck = compile preprocessFile "DrongosArtillery\Misc\ArtilleryAmmoCheck.sqf";
dta_fnc_GroupVehicles = compile preprocessFile "DrongosArtillery\Misc\GroupVehicles.sqf";
dta_fnc_GetDirection = compile preprocessFile "DrongosArtillery\Misc\GetDirection.sqf";
dta_fnc_VehicleName = compile preprocessFile "DrongosArtillery\Misc\VehicleName.sqf";
dta_fnc_TrimGroupName = compile preprocessFile "DrongosArtillery\Misc\TrimGroupName.sqf";
dta_fnc_GroupType = compile preprocessFile "DrongosArtillery\Misc\GroupType.sqf";
dta_fnc_SendComms = compile preprocessFile "DrongosArtillery\Misc\CommsSend.sqf";
dta_fnc_AmmoType = compile preprocessFile "DrongosArtillery\Misc\AmmoType.sqf";
dta_fnc_TubeType = compile preprocessFile "DrongosArtillery\Misc\TubeType.sqf";
dta_fnc_FormatCoordinates = compile preprocessFile "DrongosArtillery\Misc\FormatCoordinates.sqf";

dta_fnc_ProfileMortar = compile preprocessFile "DrongosArtillery\Profiles\Mortar.sqf";
dta_fnc_ProfileCannonLA = compile preprocessFile "DrongosArtillery\Profiles\CannonLA.sqf";
dta_fnc_ProfileCannonHA = compile preprocessFile "DrongosArtillery\Profiles\CannonHA.sqf";
dta_fnc_ProfileRocketsLA = compile preprocessFile "DrongosArtillery\Profiles\RocketsLA.sqf";
dta_fnc_ProfileRocketsHA = compile preprocessFile "DrongosArtillery\Profiles\RocketsHA.sqf";
dta_fnc_ProfileMK41 = compile preprocessFile "DrongosArtillery\Profiles\MK41.sqf";
dta_fnc_ProfileBM21 = compile preprocessFile "DrongosArtillery\Profiles\BM21.sqf";

dta_fnc_CircularSheaf = compile preprocessFile "DrongosArtillery\Sheafs\Circle.sqf";
dta_fnc_BoxSheaf = compile preprocessFile "DrongosArtillery\Sheafs\Box.sqf";
dta_fnc_LineSheaf = compile preprocessFile "DrongosArtillery\Sheafs\Line.sqf";

dta_fnc_SetAudio = compile preprocessFile "DrongosArtillery\Misc\SetAudio.sqf";

//dta_fnc_WPdamage = compile preprocessFile "DrongosArtillery\Special\WPdamage.sqf";
dta_fnc_ChemicalDamage = compile preprocessFile "DrongosArtillery\Special\ChemicalDamage.sqf";

dta_fnc_AssetType = compile preprocessFile "DrongosArtillery\Misc\AssetType.sqf";

dta_fnc_ExcludeGroup = compile preprocessFile "DrongosArtillery\Misc\ExcludeGroup.sqf";
dta_fnc_ExcludeVehicle = compile preprocessFile "DrongosArtillery\Misc\ExcludeVehicle.sqf";
dta_fnc_ExcludeVehicleClass = compile preprocessFile "DrongosArtillery\Misc\ExcludeVehicleClass.sqf";

dta_fnc_PlaceMarker = compile preprocessFile "DrongosArtillery\Misc\PlaceMarker.sqf";

dta_fnc_LoadMagazine = compile preprocessFile "DrongosArtillery\Misc\LoadMagazine.sqf";

dta_fnc_ParseNumber = compile preprocessFile "DrongosArtillery\Misc\ParseNumber.sqf";
dta_fnc_ApproveVehicles = compile preprocessFile "DrongosArtillery\Misc\ApproveVehicles.sqf";

dta_fnc_Adjust = compile preprocessFile "DrongosArtillery\Dialog\Adjust.sqf";
dta_fnc_DisplayWarheads = compile preprocessFile "DrongosArtillery\Dialog\DisplayWarheads.sqf";
dta_fnc_CheckFire_Player = compile preprocessFile "DrongosArtillery\Dialog\checkFire_Player.sqf";
dta_fnc_CheckFire_Server = compile preprocessFile "DrongosArtillery\Dialog\checkFire_Server.sqf";

dta_fnc_GetMapGridData = compile preprocessFile "DrongosArtillery\Misc\GetMapGridData.sqf";
dta_fnc_MapGridToPos = compile preprocessFile "DrongosArtillery\Misc\MapGridToPos.sqf";
dta_fnc_PosToMapGrid = compile preprocessFile "DrongosArtillery\Misc\PosToMapGrid.sqf";


call dta_fnc_GetMapGridData;
[] spawn dta_fnc_ApproveVehicles;


dtaReady = true;

// For testing
sleep 1;
if (dtaDebug) then {execVM "DrongosArtillery\Test\Init.sqf"};