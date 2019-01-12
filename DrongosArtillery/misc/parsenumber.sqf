private _nr = _this select 0;

//diag_log format ["PARSENUMBER - START - _nr: %1", _nr];

if (_nr isEqualType "" and count _nr > 0) then {
	
	private _hasDot = false;
	private _hasE = false;
	private _abort = false;
	private _start = 0;
	
	// We will allow a minus sign at the start of the sequence.
	if (_nr select [0, 1] == "-") then {
		_start = 1;
		// We will also allow a dot behind the minus sign. We are so generous...
		if (_nr select [1, 1] == ".") then {_start = 2;_hasDot = true};
	};
	
	for "_i" from _start to ((count _nr)-1) do {
		
		switch (_nr select [_i, 1]) do {
			
			// We will allow the following characters to exist in the sequence.
			case "0" : {};
			case "1" : {};
			case "2" : {};
			case "3" : {};
			case "4" : {};
			case "5" : {};
			case "6" : {};
			case "7" : {};
			case "8" : {};
			case "9" : {};
			
			// We will allow one dot. A second dot is not allowed.
			case "." : {if (!_hasDot) then {_hasDot = true} else {_abort = true}};
			
			// We will allow one e+, for those large numbers.
			case "e" : {
				if (_nr select [_i+1, 1] == "+") then {
					if (!_hasE) then {
						_hasE = true;
						_i = _i + 1;	// Skip the next character because we know it's the corresponding +.
					} else {
						_abort = true;
					};
				} else {
					_abort = true;
				};
			};
			
			// If it's not one of the above characters, then it must be an illegal character. So, abort.
			default {_abort = true};
		};
		
		if (_abort) exitWith {
			//diag_log format ["PARSENUMBER - ABORTING - CHAR: %1", _nr select [_i, 1]];
		};
	};
	
	if (!_abort) then {_nr = parseNumber _nr} else {_nr = -9999999};
	
} else {
	//diag_log format["PARSENUMBER - IF FALSE - CHECK1: %1 - CHECK2: %2", _nr isEqualType "", count _nr];
	_nr = -9999999;
};

//diag_log format ["PARSENUMBER END - _nr: %1", _nr];

_nr