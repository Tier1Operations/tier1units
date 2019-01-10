// Called from Asset Dialog
// Releases an asset from player control

_asset = "";
_asset = format ["%1",dtaControlledAssetLocal];
dtaHaveAimpoint = false;
dtaPrePlotted = false;
if (_asset == "<NULL-group>") exitWith {hint "No asset under control"};
if (_asset == "any") exitWith {hint "No asset under control"};

if (!(dtaControlledAssetLocal getVariable ["DTA_endMission", true])) then {
	sleep 1;
	[player,"End of mission.","EndOfMission"] call dta_fnc_SendComms;
} else {
	player sideChat "Asset released.";
};

dtaControlledAssetLocal setVariable ["DTA_endMission", true, true];
dtaControlledAssetLocal setVariable ["DTA_exactPos", nil, true];
dtaControlledAssetLocal setVariable ["DTA_controlledBy", nil, true];

dtaControlledAssets = dtaControlledAssets - [dtaControlledAssetLocal];
publicVariable "dtaControlledAssets";
dtaControlledAssetLocal = grpNull;
dtaSelectedTube = objNull;
dtaSelectedTubeIndex = 0;
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

closeDialog 0.3;
nul = [] execVM "DrongosArtillery\Dialog\Assets.sqf";