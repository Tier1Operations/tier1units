// End mission and/or relinquish control of asset. Reset asset.

params ["_playMessage"];

private _asset = T1AM_ControlledAssetLocal;

[4, [], 2] spawn T1AM_Fnc_LoadingScreen;

DIAG_LOG format["END MISSION | _asset: %1 | _playMessage: %2", _asset, _playMessage];

[_playMessage, _asset] spawn {
	params ["_playMessage", "_asset"];
	if (_playMessage) then {
		sleep (1 + random 2);
		[_asset,"End of mission.","ENDOFMISSION"] call T1AM_Fnc_SendComms;
	};
};

call T1AM_Fnc_ResetVars;