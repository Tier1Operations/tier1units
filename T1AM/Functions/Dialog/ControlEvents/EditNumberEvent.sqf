params ["_displayorcontrol", "_key", "_shift", "_ctrl", "_alt", "_mode"];

DIAG_LOG format ["EDIT NUMBER EVENT START | _this: %1", _this];

private _nr = [ctrlText _displayorcontrol, 0, true] call T1AM_Fnc_ParseNumber;

DIAG_LOG format ["EDIT NUMBER EVENT 1 | _nr: %1", _nr];

if (_nr == -9999999) exitWith {};

DIAG_LOG "EDIT NUMBER EVENT 2";

switch (_mode) do {
	case (0) : {T1AM_LastAdjustX = _nr};
	case (1) : {T1AM_LastAdjustY = _nr};
	case (2) : {T1AM_LastRounds = _nr};
	case (3) : {T1AM_LastSheafX = _nr};
	case (4) : {T1AM_LastSheafY = _nr};
	case (5) : {
		if (_nr == 0) then {_nr = 360};
		T1AM_LastSheafDir = _nr;
	};
	case (6) : {T1AM_LastSheafDist = _nr};
};

DIAG_LOG "EDIT NUMBER EVENT END";