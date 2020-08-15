// Mode 0 = X
// Mode 1 = Y

#include "\T1AM\Defines.hpp"

params ["_displayorcontrol", "_key", "_shift", "_ctrl", "_alt", "_mode"];

DEBUGLOG format ["EDIT AIMPOINT SPOTTER POS EVENT START | _this: %1", _this];

private _nr = ctrlText _displayorcontrol;
if (_nr == "") exitWith {};

DEBUGLOG format ["EDIT AIMPOINT SPOTTER POS EVENT 1 | _nr: %1", _nr];

_nr = [_nr] call T1AM_Fnc_GridToPos;
_nr = [_nr, 5, true] call T1AM_Fnc_ParseNumber;

DEBUGLOG "EDIT AIMPOINT SPOTTER POS EVENT 2";

if (_nr == -9999999) exitWith {
	private _str = "";
	switch (_mode) do {
		case (0) : {
			_displayorcontrol ctrlSetText (str T1AM_LastAimpointSpotterX);
			_str = "INVALID INPUT:\nSPOTTER X COORDINATE\n\nUSE NUMBERS ONLY. MAX 5 NUMBERS ALLOWED";
		};
		case (1) : {
			_displayorcontrol ctrlSetText (str T1AM_LastAimpointSpotterY);
			_str = "INVALID INPUT:\nSPOTTER Y COORDINATE\n\nUSE NUMBERS ONLY. MAX 5 NUMBERS ALLOWED";
		};
	};
	[0, _str, 5] spawn T1AM_Fnc_ShowMessage;
};

DEBUGLOG format ["EDIT AIMPOINT SPOTTER POS EVENT 3 | _nr: %1", _nr];


switch (_mode) do {
	case (0) : {
		_nr = [_nr] call T1AM_Fnc_FormatCoordinates;
		private _pos = [[_nr, str T1AM_LastAimpointSpotterY]] call T1AM_Fnc_MapGridToPos;
		T1AM_LastAimpointSpotterX = _pos select 0;
	};
	case (1) : {
		_nr = [_nr] call T1AM_Fnc_FormatCoordinates;
		private _pos = [[str T1AM_LastAimpointSpotterX, _nr]] call T1AM_Fnc_MapGridToPos;
		T1AM_LastAimpointSpotterY = _pos select 1;
	};
};

DEBUGLOG format ["EDIT AIMPOINT SPOTTER POS EVENT END | T1AM_LastAimpointSpotterX: %1 | T1AM_LastAimpointSpotterY: %2", T1AM_LastAimpointSpotterX, T1AM_LastAimpointSpotterY];