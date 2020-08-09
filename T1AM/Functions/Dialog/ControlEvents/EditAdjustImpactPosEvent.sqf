// Mode 0 = X
// Mode 1 = Y

params ["_displayorcontrol", "_key", "_shift", "_ctrl", "_alt", "_mode"];

DIAG_LOG format ["EDIT ADJUST IMPACT POS EVENT START | _this: %1", _this];

private _nr = ctrlText _displayorcontrol;
if (_nr == "") exitWith {};

DIAG_LOG format ["EDIT ADJUST IMPACT POS EVENT 1 | _nr: %1", _nr];

_nr = [_nr] call T1AM_Fnc_GridToPos;
_nr = [_nr, 5, true] call T1AM_Fnc_ParseNumber;

DIAG_LOG "EDIT ADJUST IMPACT POS EVENT 2";

if (_nr == -9999999) exitWith {
	private _str = "";
	switch (_mode) do {
		case (0) : {
			_displayorcontrol ctrlSetText (str T1AM_LastAdjustImpactX);
			_str = "INVALID INPUT:\nIMPACT X COORDINATE\n\nUSE NUMBERS ONLY. MAX 5 NUMBERS ALLOWED";
		};
		case (1) : {
			_displayorcontrol ctrlSetText (str T1AM_LastAdjustImpactY);
			_str = "INVALID INPUT:\nIMPACT Y COORDINATE\n\nUSE NUMBERS ONLY. MAX 5 NUMBERS ALLOWED";
		};
	};
	[0, _str, 5] spawn T1AM_Fnc_ShowMessage;
};

DIAG_LOG format ["EDIT ADJUST IMPACT POS EVENT 3 | _nr: %1", _nr];


switch (_mode) do {
	case (0) : {
		_nr = [_nr] call T1AM_Fnc_FormatCoordinates;
		private _pos = [[_nr, str T1AM_LastAdjustImpactY]] call T1AM_Fnc_MapGridToPos;
		T1AM_LastAdjustImpactX = _pos select 0;
	};
	case (1) : {
		_nr = [_nr] call T1AM_Fnc_FormatCoordinates;
		private _pos = [[str T1AM_LastAdjustImpactX, _nr]] call T1AM_Fnc_MapGridToPos;
		T1AM_LastAdjustImpactY = _pos select 1;
	};
};

DIAG_LOG format ["EDIT ADJUST IMPACT POS EVENT END | T1AM_LastAdjustImpactX: %1 | T1AM_LastAdjustImpactY: %2", T1AM_LastAdjustImpactX, T1AM_LastAdjustImpactY];