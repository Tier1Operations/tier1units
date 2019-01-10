// Changes an integer/float into a 5-digit text value. The number is made round.
// For example, 23.3 becomes "00023", 9130.8 becomes "09131".
// Numbers that already have 5 or more digits are untouched. For example, 650123 stays 650123.

private["_nr","_output","_prefix","_isNegative"];

_nr = _this select 0;
_output = "";
_prefix = "";

_nr = round _nr;
if (_nr < 0) then {_isNegative = true} else {_isNegative = false};
_nr = abs _nr;


if (_nr < 1000000) then {
	
	// This part is for smaller numbers which the game can show properly, without the e+ scientific notation.
	switch true do {
		case (_nr < 10) : {_prefix = "0000"};
		case (_nr < 100) : {_prefix = "000"};
		case (_nr < 1000) : {_prefix = "00"};
		case (_nr < 10000) : {_prefix = "0"};
	};
	
	_output = format ["%1%2",_prefix,_nr];
	
} else {
	
	// For larger numbers we will try to preserve the original format.
	while {_nr >= 10} do {
		_nr = _nr / 10;
		_output = format ["%1%2", round ((_nr % floor _nr) * 10), _output];
		_nr = floor _nr;
	};
	_output = format ["%1%2", _nr, _output];
};


if (_isNegative) then {
	_output = "-" + _output;
};

//diag_log format["FORMAT COORDINATES - _nr: %1 - _isNegative: %2 - _prefix: %3 - _output: %4", _nr, _isNegative, _prefix, _output];

_output