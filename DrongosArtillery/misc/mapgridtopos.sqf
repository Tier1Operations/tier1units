// Code originally created by PabstMirror.

private ["_inputStringArray","_getCenterOfGrid"];

_inputStringArray = _this select 0;
if (count _this > 1) then {
	_getCenterOfGrid = _this select 1;
} else {
	_getCenterOfGrid = true;
};

if (count dta_mapGridData == 0) exitWith {
    (_this call BIS_fnc_gridToPos) select 0;
};

private _offsetX = dta_mapGridData select 0;
private _realOffsetY = dta_mapGridData select 1;
private _stepXat5 = dta_mapGridData select 2;
private _stepYat5 = dta_mapGridData select 3;

private _xPart = _inputStringArray select 0;
private _yPart = _inputStringArray select 1;

private _xPos = ((parseNumber _xPart) * _stepXat5 * 10 ^ 0) + _offsetX;
private _yPos = ((parseNumber _yPart) * _stepYat5 * 10 ^ 0) + _realOffsetY;

if (_getCenterOfGrid) then {
    _xPos = _xPos + 0.5 * _stepXat5 * 10 ^ 0;
    _yPos = _yPos + 0.5 * _stepYat5 * 10 ^ 0;
};

[_xPos, _yPos, 0]