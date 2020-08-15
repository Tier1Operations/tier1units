// End mission and/or relinquish control of asset. Reset asset.

#include "\T1AM\Defines.hpp"

private _asset = str T1AM_ControlledAssetLocal;

DEBUGLOG format["RELEASE ASSET START | _asset: %1", _asset];

if (_asset == "<NULL-group>" or _asset == "any") exitWith {
	T1AM_HaveAimpoint = false;
	T1AM_PrePlotted = false;
	private _str = "NO ASSET UNDER CONTROL";
	[0, _str, 5] spawn T1AM_Fnc_ShowMessage;
	DEBUGLOG format["RELEASE ASSET EXITWITH | _asset: %1 | _asset == ""<NULL-group>"": %2 | _asset == ""any"": %3", _asset, _asset == "<NULL-group>", _asset == "any"];
};

// If asset has performed at least 1 one mission, send an End Mission message.
private _asset = T1AM_ControlledAssetLocal;
private _endMission = _asset getVariable ["T1AM_endMission", true];
if (!_endMission) then {
	[4, [], 2] spawn T1AM_Fnc_LoadingScreen;
	DEBUGLOG format["RELEASE ASSET 1 | _asset: %1 | !_endMission: %2", _asset, !_endMission];
	
	[_asset] spawn {
		params ["_asset"];
		sleep (1 + random 2);
		[_asset,"End of mission.","ENDOFMISSION"] call T1AM_Fnc_SendComms;
	};
	
} else {
	DEBUGLOG format["RELEASE ASSET 2 | _asset: %1 | !_endMission: %2", _asset, !_endMission];
	[4, [], 3] spawn T1AM_Fnc_LoadingScreen;
};

call T1AM_Fnc_ResetVars;

DEBUGLOG format["RELEASE ASSET END | _asset: %1", _asset];