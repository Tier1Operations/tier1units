#include "\T1AM\Defines.hpp"

params ["_ETA","_asset"];

_ETA = (_ETA - 5) max 1;
sleep _ETA;
[_asset,"Splash, out.","SPLASH"] call T1AM_Fnc_SendComms;