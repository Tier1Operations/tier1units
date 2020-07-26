params["_firedEHArray","_action","_pos","_gunAngle","_fuse","_infoDummy","_longRangeGuided","_arrayEnemySides","_GPSZAdjust","_elevationMod"];

//DIAG_LOG format["SPEC FIRED -- _firedEHArray: %1", _firedEHArray];
//DIAG_LOG format["SPEC FIRED -- _action: %1", _action];
//DIAG_LOG format["SPEC FIRED -- _pos: %1", _pos];
//DIAG_LOG format["SPEC FIRED -- _gunAngle: %1", _gunAngle];
//DIAG_LOG format["SPEC FIRED -- _fuse: %1", _fuse];
//DIAG_LOG format["SPEC FIRED -- _infoDummy: %1", _infoDummy];
//DIAG_LOG format["SPEC FIRED -- _longRangeGuided: %1", _longRangeGuided];
//DIAG_LOG format["SPEC FIRED -- _arrayEnemySides: %1", _arrayEnemySides];
//DIAG_LOG format["SPEC FIRED -- _GPSZAdjust: %1", _GPSZAdjust];
//DIAG_LOG format["SPEC FIRED -- _elevationMod: %1", _elevationMod];


// Convert NET ID to object data type.
_infoDummy = _infoDummy call BIS_fnc_objectFromNetId;


//DIAG_LOG format["SPEC FIRED -- _infoDummy CONVERTED: %1", _infoDummy];


// When doing a MIXED airburst, this will signal when it's not doing an airburst.
private _doAirburst = _infoDummy getVariable ["T1AM_doAirburst", false];

// If using a seeker and doing an airburst, then turn off the seeker functionality.
if (_action == 3 and _doAirburst) then {
	_action = 2;
};

// GPS + laser guided // GPS guided // GPS + discriminating (seeker) // Laser guided.
if (_action == 1 or {_action == 2} or {_action == 3} or {_action == 4}) then {
	[_firedEHArray,_pos,_gunAngle,_action,_fuse,_infoDummy,_doAirburst,_longRangeGuided,_arrayEnemySides,_GPSZAdjust,_elevationMod] spawn T1AM_Fnc_Guided;
};