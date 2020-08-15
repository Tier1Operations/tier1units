// This will remove everything 4 places past the decimal because on a ded server too much accuracy
// will get the FindCharge while loop stuck. This is because the AI is usually constantly changing aim,
// but it's only noticeable in the vector numbers.

#include "\T1AM\Defines.hpp"

params ["_array"];

private _arrayNew = [];
{
	private _str = str _x;
	private _index = _str find ".";
	if (_index == -1) then {
		_arrayNew append [_x];
	} else {
		_str = _str select [0, _index + 4];
		_arrayNew append [parseNumber _str];
	};
} forEach _array;

_arrayNew;