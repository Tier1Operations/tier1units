#include "\T1AM\Defines.hpp"

params ["_displayorcontrol", "_key", "_shift", "_ctrl", "_alt", "_mode"];

DEBUGLOG format ["EDIT NUMBER EVENT | START | _this: %1", _this];

private _nr = [ctrlText _displayorcontrol, 0, true] call T1AM_Fnc_ParseNumber;

DEBUGLOG format ["EDIT NUMBER EVENT 1 | _nr: %1", _nr];

if (_nr == -9999999) exitWith {};

DEBUGLOG "EDIT NUMBER EVENT 2";

switch (_mode) do {
	case (0) : {T1AM_LastAdjustX = _nr};
	case (1) : {T1AM_LastAdjustY = _nr};
	case (2) : {T1AM_LastRounds = _nr};
	case (3) : {T1AM_LastSheafX = _nr};
	case (4) : {T1AM_LastSheafY = _nr};
	case (5) : {T1AM_LastSheafDist = _nr};
	case (6) : {T1AM_LastAimpointDist = _nr};
};

DEBUGLOG "EDIT NUMBER EVENT END";