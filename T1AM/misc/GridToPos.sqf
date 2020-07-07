// Turns a 5 digit grid coordinate into a position.
// Useful for transforming player input into actual pos that can be used by code.
// For example: 1 = 10000; 235 = 23500; 053 = 5300; 0015 = 150; 00075 = 75.

params ["_str"];

if (count _str > 0) then {
	// Check if Negative.
	private _isNegative = false;
	if (_str select [0,1] == "-") then {_isNegative = true};
	// Remove decimal.
	private _index = _str find ".";
	if (_index != -1) then {
		_str = _str select [0, _index];
	};
	// Add zeroes until it's a 5 digit coordinate.
	private _countTo = 5;
	if (_isNegative) then {_countTo = _countTo + 1};
	while {count _str < _countTo} do {
		_str = _str + "0";
	};
};

_str