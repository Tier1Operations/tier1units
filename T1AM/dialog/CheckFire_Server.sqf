params ["_asset"];
_asset setVariable ["T1AM_CheckFire", true];
sleep (1.5 + random 2.5);
//DIAG_LOG format["CHECKING FIRE - _asset: %1", _asset];
[_asset,"Checking fire.","Beep"] call T1AM_Fnc_SendComms;