// End mission and/or relinquish control of asset. Reset asset.

params ["_playMessage"];

private _asset = T1AM_ControlledAssetLocal;

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
T1AM_LastSheafDir = 0;
T1AM_LastSheafDist = 0;
T1AM_LastGPSX = -999999;
T1AM_LastGPSY = -999999;
T1AM_LastGPSZ_AGL = 0;
T1AM_LastAdjustX = 0;
T1AM_LastAdjustY = 0;

[_playMessage, _asset] spawn {
	params ["_playMessage", "_asset"];
	if (_playMessage) then {
		sleep 1;
		[_asset,"End of mission.","EndOfMission"] call T1AM_Fnc_SendComms;
	};
};

[4, [], 2] spawn T1AM_Fnc_LoadingScreen;