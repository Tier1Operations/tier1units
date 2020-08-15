// Mode 0 = X
// Mode 1 = Y

#include "\T1AM\Defines.hpp"

params ["_displayorcontrol", "_key", "_shift", "_ctrl", "_alt", "_mode"];

DEBUGLOG format ["EDIT TRP POS EVENT START | _this: %1", _this];

private _nr = ctrlText _displayorcontrol;
if (_nr == "") exitWith {};

DEBUGLOG format ["EDIT TRP POS EVENT 1 | _nr: %1", _nr];

_nr = [_nr] call T1AM_Fnc_GridToPos;
_nr = [_nr, 5, true] call T1AM_Fnc_ParseNumber;

DEBUGLOG "EDIT TRP POS EVENT 2";

if (_nr == -9999999) exitWith {
	private _str = "";
	switch (_mode) do {
		case (0) : {
			_displayorcontrol ctrlSetText (str T1AM_LastTRPX);
			_str = "INVALID INPUT:\nTARGET X COORDINATE\n\nUSE NUMBERS ONLY. MAX 5 NUMBERS ALLOWED";
		};
		case (1) : {
			_displayorcontrol ctrlSetText (str T1AM_LastTRPY);
			_str = "INVALID INPUT:\nTARGET Y COORDINATE\n\nUSE NUMBERS ONLY. MAX 5 NUMBERS ALLOWED";
		};
	};
	[0, _str, 5] spawn T1AM_Fnc_ShowMessage;
};

DEBUGLOG format ["EDIT TRP POS EVENT 3 | _nr: %1", _nr];


switch (_mode) do {
	case (0) : {
		_nr = [_nr] call T1AM_Fnc_FormatCoordinates;
		private _pos = [[_nr, str T1AM_LastTRPY]] call T1AM_Fnc_MapGridToPos;
		T1AM_LastTRPX = _pos select 0;
	};
	case (1) : {
		_nr = [_nr] call T1AM_Fnc_FormatCoordinates;
		private _pos = [[str T1AM_LastTRPX, _nr]] call T1AM_Fnc_MapGridToPos;
		T1AM_LastTRPY = _pos select 1;
	};
};

DEBUGLOG format ["EDIT TRP POS EVENT END | T1AM_LastTRPX: %1 | T1AM_LastTRPY: %2", T1AM_LastTRPX, T1AM_LastTRPY];