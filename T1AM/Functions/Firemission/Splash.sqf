params ["_ETA","_asset","_action"];

private _spotter = _asset getVariable ["T1AM_controlledBy", objNull];

private _sleepDesignate = (_ETA - 20) max 0;
private _sleepSplash = (_ETA - _sleepDesignate - 5) max 1;

if (_sleepDesignate > 0) then {
	sleep _sleepDesignate;
	if (_action == 1 or _action == 4) then {
		[_asset,_spotter,"Designate, over.",14] call T1AM_Fnc_SendComms;
	};
};

sleep _sleepSplash;
[_asset,_spotter,"Splash, over.",11] call T1AM_Fnc_SendComms;