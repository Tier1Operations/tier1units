_playMessage = _this select 0;

closeDialog 0;
//_asset = dtaSelectedAsset;
_asset = dtaControlledAssetLocal;
dtaControlledAssetLocal setVariable ["DTA_endMission", true, true];
dtaControlledAssetLocal setVariable ["DTA_exactPos", nil, true];
dtaControlledAssetLocal setVariable ["DTA_controlledBy", nil, true];
dtaControlledAssets = dtaControlledAssets - [_asset];
publicVariable "dtaControlledAssets";
dtaControlledAssetLocal = grpNull;
dtaLastDialog = "Assets";
dtaHaveAimpoint = false;
dtaPrePlotted = false;
dtaAngle = "LOW";
dtaFireMissionCurrent = [];
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

if (_playMessage) then {
	sleep 1;
	[player,"End of mission.","EndOfMission"] call dta_fnc_SendComms;
};