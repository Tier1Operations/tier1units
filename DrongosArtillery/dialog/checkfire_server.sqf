params ["_asset"];
_asset setVariable ["DTA_CheckFire", true];
sleep (1.5 + random 2.5);
//DIAG_LOG format["CHECKING FIRE - _asset: %1", _asset];
[_asset,"Checking fire.","Beep"] call dta_fnc_SendComms;