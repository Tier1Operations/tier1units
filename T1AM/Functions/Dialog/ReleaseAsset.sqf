// End mission and/or relinquish control of asset. Reset asset.

private _asset = str T1AM_ControlledAssetLocal;

//DIAG_LOG format["RELEASE ASSET START | _asset: %1", _asset];

if (_asset == "<NULL-group>" or _asset == "any") exitWith {
	T1AM_HaveAimpoint = false;
	T1AM_PrePlotted = false;
	private _str = "NO ASSET UNDER CONTROL";
	[0, _str, 5] spawn T1AM_Fnc_ShowMessage;
	//DIAG_LOG format["RELEASE ASSET EXITWITH | _asset: %1 | _asset == ""<NULL-group>"": %2 | _asset == ""any"": %3", _asset, _asset == "<NULL-group>", _asset == "any"];
};

// If asset has performed at least 1 one mission, send an End Mission message.
private _asset = T1AM_ControlledAssetLocal;
private _endMission = _asset getVariable ["T1AM_endMission", true];
if (!_endMission) then {
	[4, [], 2] spawn T1AM_Fnc_LoadingScreen;
	//DIAG_LOG format["RELEASE ASSET 1 | _asset: %1 | !_endMission: %2", _asset, !_endMission];
	
	private _spotter = _asset getVariable ["T1AM_controlledBy", objNull];
	[_asset,_spotter] spawn {
		params ["_asset","_spotter"];
		sleep (1 + random 2);
		[_asset,_spotter,"End of mission, out.",1] call T1AM_Fnc_SendComms;
	};
	
} else {
	//DIAG_LOG format["RELEASE ASSET 2 | _asset: %1 | !_endMission: %2", _asset, !_endMission];
	[4, [], 3] spawn T1AM_Fnc_LoadingScreen;
};

call T1AM_Fnc_ResetVars;

//DIAG_LOG format["RELEASE ASSET END | _asset: %1", _asset];