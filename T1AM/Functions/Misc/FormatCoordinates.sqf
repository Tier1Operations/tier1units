// Changes an integer/float into a 5-digit text value by adding zeroes.
// Zeroes are added in front of the number. The decimal number is removed.
// Numbers that already have 5 or more digits are untouched. For example, 650123 stays 650123.
// Useful for code position that is turned into coordinates shown to the player.
// For example, 23.6 becomes "00023", 913 becomes "00913".

params ["_nr"];

private _output = "";
private _affix = "";


// Remove decimal.
private _str = str _nr;
private _index = _str find ".";
if (_index != -1) then {
	_str = _str select [0, _index];
	_nr = parseNumber _str;
};


// Remember if it's a negative number. Then make it positive.
private _isNegative = false;
if (_nr < 0) then {_isNegative = true} else {_isNegative = false};
_nr = abs _nr;


// For numbers that can be shown normally.
if (_nr < 1000000) then {
	
	// This part is for smaller numbers which the game can show properly, without the e+ scientific notation.
	
	switch true do {
		case (_nr < 10) : {_affix = "0000"};
		case (_nr < 100) : {_affix = "000"};
		case (_nr < 1000) : {_affix = "00"};
		case (_nr < 10000) : {_affix = "0"};
	};
	_output = format ["%1%2", _affix, _nr];
	
} else {
	
	// For larger numbers we will try to preserve the original format.
	while {_nr >= 10} do {
		_nr = _nr / 10;
		_output = format ["%1%2", round ((_nr % floor _nr) * 10), _output];
		_nr = floor _nr;
	};
	_output = format ["%1%2", _nr, _output];
};


// Add the minus for negative numbers.
if (_isNegative) then {
	_output = "-" + _output;
};

DIAG_LOG format["FORMAT COORDINATES - _nr: %1 - _isNegative: %2 - _affix: %3 - _output: %4", _nr, _isNegative, _affix, _output];

_output