// Called from Asset Dialog
// Releases an asset from player control

private _asset = format ["%1",T1AM_ControlledAssetLocal];
T1AM_HaveAimpoint = false;
T1AM_PrePlotted = false;
if (_asset == "<NULL-group>") exitWith {hint "No asset under control"};
if (_asset == "any") exitWith {hint "No asset under control"};

closeDialog 0;
T1AM_ControlledAssetLocal setVariable ["T1AM_endMission", true, true];
T1AM_ControlledAssetLocal setVariable ["T1AM_exactPos", nil, true];
T1AM_ControlledAssetLocal setVariable ["T1AM_controlledBy", nil, true];
T1AM_ControlledAssets = T1AM_ControlledAssets - [T1AM_ControlledAssetLocal];
publicVariable "T1AM_ControlledAssets";
T1AM_ControlledAssetLocal = grpNull;
T1AM_LastDialog = "Assets";
T1AM_HaveAimpoint = false;
T1AM_PrePlotted = false;
T1AM_Angle = "LOW";
T1AM_FireMissionCurrent = [];
T1AM_SelectedTube = objNull;
T1AM_SelectedTubeIndex = 0;
T1AM_LastMission = "";
T1AM_LastAngle = "";
T1AM_LastRounds = 1;
T1AM_LastWarhead = "";
T1AM_LastFuse = "";
T1AM_LastAirburstHeight = "";
T1AM_LastSheaf = "";
T1AM_LastSheafX = 100;
T1AM_LastSheafY = 100;
T1AM_LastSheafLineDir = 0;
T1AM_LastSheafLineDist = 0;
T1AM_LastGPSX = -999999;
T1AM_LastGPSY = -999999;
T1AM_LastGPSZ_AGL = 0;
T1AM_LastAdjustX = 0;
T1AM_LastAdjustY = 0;
T1AM_ControlRunning = false;

[] spawn {
	if (!(T1AM_ControlledAssetLocal getVariable ["T1AM_endMission", true])) then {
		sleep 1;
		[player,"End of mission.","EndOfMission"] call T1AM_Fnc_SendComms;
	} else {
		player sideChat "Asset released.";
	};
};