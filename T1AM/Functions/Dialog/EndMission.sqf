// End mission and/or relinquish control of asset. Reset asset.

params ["_playMessage"];

onMapSingleClick "";

private _asset = T1AM_ControlledAssetLocal;

[4, [], 2] spawn T1AM_Fnc_LoadingScreen;

//DIAG_LOG format["END MISSION | _asset: %1 | _playMessage: %2", _asset, _playMessage];

private _spotter = _asset getVariable ["T1AM_controlledBy", objNull];
[_playMessage, _asset, _spotter] spawn {
	params ["_playMessage", "_asset", "_spotter"];
	if (_playMessage) then {
		sleep (1 + random 2);
		[_asset,_spotter,"End of mission, out.",1] call T1AM_Fnc_SendComms;
	};
};

call T1AM_Fnc_ResetVars;