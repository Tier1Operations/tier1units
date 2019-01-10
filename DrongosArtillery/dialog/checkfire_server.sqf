params ["_asset"];
_asset setVariable ["DTA_CheckFire", true];
sleep (1.5 + random 2.5);
//diag_log format["CHECKING FIRE - _asset: %1", _asset];
[_asset,"Checking fire.","Beep"] call dta_fnc_SendComms;