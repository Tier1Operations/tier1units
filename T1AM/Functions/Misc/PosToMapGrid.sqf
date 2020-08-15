// Code originally created by PabstMirror and VKing.

#include "\T1AM\Defines.hpp"

private ["_pos","_returnSingleString"];

_pos = _this select 0;
if (count _this > 1) then {
	_returnSingleString = _this select 1;
} else {
	_returnSingleString = false;
};

//Fallback, when map data is weird (letters)
if (T1AM_mapGridData isEqualTo []) exitWith {
    private _nativeGrid = mapGridPosition _pos;

    if (_returnSingleString) then {
        _nativeGrid
    } else {
        private _count = floor ((count _nativeGrid) / 2);
        [_nativeGrid select [0, _count], _nativeGrid select [_count, _count]]
    };
};

private _offsetX = T1AM_mapGridData select 0;
private _realOffsetY = T1AM_mapGridData select 1;
private _stepXat5 = T1AM_mapGridData select 2;
private _stepYat5 = T1AM_mapGridData select 3;

private _easting = floor (((_pos select 0) - _offsetX) / _stepXat5);
private _northing = floor (((_pos select 1) - _realOffsetY) / _stepYat5);

//Attempt to handle negative east/north (e.g.: moving west of map bounds)
if (_easting > 0) then {
    _easting = str _easting;
    while {count _easting < 5} do {_easting = "0" + _easting};
} else {
    _easting = str abs _easting;
    while {count _easting < 4} do {_easting = "0" + _easting};
    _easting = "-" + _easting;
};

if (_northing > 0) then {
    _northing = str _northing;
    while {count _northing < 5} do {_northing = "0" + _northing};
} else {
    _northing = str abs _northing;
    while {count _northing < 4} do {_northing = "0" + _northing};
    _northing = "-" + _northing;
};

if (_returnSingleString) then {
    _easting + _northing
} else {
    [_easting, _northing]
}; // return