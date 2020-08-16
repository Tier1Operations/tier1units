params ["_displayorcontrol", "_key", "_shift", "_ctrl", "_alt"];

//DIAG_LOG format ["EDIT AIMPOINT DIR EVENT | START | _this: %1", _this];

private _nr = [ctrlText _displayorcontrol, 0, false] call T1AM_Fnc_ParseNumber;

//DIAG_LOG format ["EDIT AIMPOINT DIR EVENT 1 | _nr: %1", _nr];

if (_nr == -9999999) exitWith {};

//DIAG_LOG "EDIT AIMPOINT DIR EVENT 2";

if (_nr == 0) then {_nr = 360};
T1AM_LastAimpointDir = _nr;

//DIAG_LOG "EDIT AIMPOINT DIR EVENT END";