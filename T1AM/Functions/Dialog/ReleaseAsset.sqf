// End mission and/or relinquish control of asset. Reset asset.

private _asset = format ["%1",T1AM_ControlledAssetLocal];
T1AM_HaveAimpoint = false;
T1AM_PrePlotted = false;

if (_asset == "<NULL-group>" or _asset == "any") exitWith {
	private _str = "NO ASSET UNDER CONTROL";
	[0, _str, 5] spawn T1AM_Fnc_ShowMessage;
};

[4, [], 3] spawn T1AM_Fnc_LoadingScreen;

// If asset has performed at least 1 one mission, send an End Mission message.
private _asset = T1AM_ControlledAssetLocal;
private _endMission = _asset getVariable ["T1AM_endMission", true];
[_asset, _endMission] spawn {
	params ["_asset", "_endMission"];
	if (!_endMission) then {
		sleep 1;
		[_asset,"End of mission.","EndOfMission"] call T1AM_Fnc_SendComms;
	};
};

T1AM_ControlledAssetLocal setVariable ["T1AM_endMission", true, true];
T1AM_ControlledAssetLocal setVariable ["T1AM_exactPos", nil, true];
T1AM_ControlledAssetLocal setVariable ["T1AM_controlledBy", nil, true];
T1AM_ControlledAssets = T1AM_ControlledAssets - [T1AM_ControlledAssetLocal];
publicVariable "T1AM_ControlledAssets";
T1AM_ControlledAssetLocal = grpNull;
T1AM_LastDialog = "Assets";
//T1AM_HaveAimpoint = false;
//T1AM_PrePlotted = false;
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