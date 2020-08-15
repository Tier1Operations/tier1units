#include "\T1AM\Defines.hpp"

params ["_asset"];
_asset setVariable ["T1AM_CheckFire", true];
sleep (2 + random 3);
DEBUGLOG format["CHECKING FIRE - _asset: %1", _asset];
[_asset,"Checking fire.","BEEP"] call T1AM_Fnc_SendComms;