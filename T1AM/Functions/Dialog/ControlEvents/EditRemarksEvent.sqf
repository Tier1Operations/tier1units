params ["_displayorcontrol", "_key", "_shift", "_ctrl", "_alt"];

DIAG_LOG format ["EDIT REMARKS EVENT START | _this: %1", _this];

private _str = ctrlText _displayorcontrol;

DIAG_LOG format ["EDIT REMARKS EVENT 1 | _str: %1 | count _str: %2", _str, count _str];

if (count _str > 15) exitWith {
	_displayorcontrol ctrlSetText T1AM_LastRemarks;
	_str = "INVALID INPUT:\nREMARKS\n\nMAX 15 CHARACTERS ALLOWED";
	[0, _str, 5] spawn T1AM_Fnc_ShowMessage;
};

T1AM_LastRemarks = _str;

DIAG_LOG "EDIT REMARKS EVENT END";