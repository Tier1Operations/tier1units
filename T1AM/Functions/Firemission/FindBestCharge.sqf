// Function to find a firing angle that the unit can actually aim with.
params["_tube","_asset","_gunner","_posA","_chosenTargetPos","_gunAngle","_longRangeGuided","_chargesArrayLow","_chargesArrayHigh", "_abort", "_endMission", "_checkFire"];

DIAG_LOG format ["TUBE: %1 - FIND BEST CHARGE - _this: %2", _tube, _this];

private _x1 = _chosenTargetPos select 0;
private _y = _chosenTargetPos select 1;
private _chosenCharge = ["",0,0];
private _chargesArray = [];
private _chargeFound = false;
private _angleText = "";

if (_gunAngle == "HIGH") then {
	_chargesArray = _chargesArrayHigh;
	_angleText = "HIGH";
} else {
	_chargesArray = _chargesArrayLow;
	_angleText = "LOW";
};

DIAG_LOG format ["TUBE: %1 - FIND BEST CHARGE - _chargesArrayHigh: %2", _tube, _chargesArrayHigh];
DIAG_LOG format ["TUBE: %1 - FIND BEST CHARGE - _chargesArrayLow: %2", _tube, _chargesArrayLow];
DIAG_LOG format ["TUBE: %1 - FIND BEST CHARGE - _chargesArray: %2", _tube, _chargesArray];

private _array = [_tube, _asset, _gunner, _posA, _chosenTargetPos, _chargesArray, _x1, _y, _angleText, _chosenCharge, _chargeFound, _abort, _endMission, _checkFire] call T1AM_Fnc_findCharge;
_chosenCharge = _array select 0;
_chargeFound = _array select 1;
_abort = _array select 2;
_endMission = _array select 3;
_checkFire = _array select 4;

// If no good charge was found, and not long range guided, then try the other angle type.
if (!_chargeFound and !_longRangeGuided and !_abort and !_endMission and !_checkFire) then {
	if (_gunAngle == "HIGH") then {
		_chargesArray = _chargesArrayLow;
		_angleText = "LOW";
	} else {
		_chargesArray = _chargesArrayHigh;
		_angleText = "HIGH";
	};
	
	_array = [_tube, _asset, _gunner, _posA, _chosenTargetPos, _chargesArray, _x1, _y, _angleText, _chosenCharge, _chargeFound, _abort, _endMission, _checkFire] call T1AM_Fnc_findCharge;
	_chosenCharge = _array select 0;
	_chargeFound = _array select 1;
	_abort = _array select 2;
	_endMission = _array select 3;
	_checkFire = _array select 4;
	
	DIAG_LOG format ["TUBE: %1 - FIND BEST CHARGE - TRYING OTHER ANGLE - _chargesArray: %2", _tube, _chargesArray];
};


switch true do {
	case (_abort or _endMission or _checkFire) : {
		_chosenCharge = ["",0,0,"",false,true];
		DIAG_LOG format ["TUBE: %1 | FIND BEST CHARGE | ABORT | _chosenCharge: %2", _tube, _chosenCharge];
	};
	case (_chosenCharge select 0 == "") : {
		_chosenCharge = ["",0,0,"",false,false];
		DIAG_LOG format ["TUBE: %1 | FIND BEST CHARGE | NOTHING CHOSEN | _chosenCharge: %2", _tube, _chosenCharge];
	};
};

DIAG_LOG format ["TUBE: %1 | FIND BEST CHARGE | END | _chosenCharge: %2 | _abort: %3 | _endMission: %4 | _checkFire: %5", _tube, _chosenCharge, _abort, _endMission, _checkFire];

[_chosenCharge, _abort, _endMission, _checkFire]