params ["_asset"];
_asset setVariable ["T1AM_CheckFire", true];
sleep (2 + random 3);

//DIAG_LOG format["CHECKING FIRE - _asset: %1", _asset];

private _spotter = _asset getVariable ["T1AM_controlledBy", objNull];
[_asset,_spotter,"Checking fire, out.",0] call T1AM_Fnc_SendComms;