private ["_inputArray","_GPSZAdjust","_elevationMod","_action","_pos","_gunAngle","_fuse","_infoDummy","_longRangeGuided","_doAirburst","_arrayEnemySides"];

_firedEHArray = _this select 0;
_action = _this select 1;
_pos = _this select 2;
_gunAngle = _this select 3;
_fuse = _this select 4;
_infoDummy = _this select 5;
_longRangeGuided = _this select 6;
_arrayEnemySides = _this select 7;
_GPSZAdjust = _this select 8;
_elevationMod = _this select 9;

//diag_log format["FIRED -- _firedEHArray: %1", _firedEHArray];
//diag_log format["FIRED -- _action: %1", _action];
//diag_log format["FIRED -- _pos: %1", _pos];
//diag_log format["FIRED -- _gunAngle: %1", _gunAngle];
//diag_log format["FIRED -- _fuse: %1", _fuse];
//diag_log format["FIRED -- _infoDummy: %1", _infoDummy];
//diag_log format["FIRED -- _longRangeGuided: %1", _longRangeGuided];
//diag_log format["FIRED -- _arrayEnemySides: %1", _arrayEnemySides];
//diag_log format["FIRED -- _GPSZAdjust: %1", _GPSZAdjust];
//diag_log format["FIRED -- _elevationMod: %1", _elevationMod];


// Convert NET ID to object data type.
_infoDummy = _infoDummy call BIS_fnc_objectFromNetId;


//diag_log format["FIRED -- _infoDummy CONVERTED: %1", _infoDummy];


// When doing a MIXED airburst, this will signal when it's not doing an airburst.
_doAirburst = _infoDummy getVariable ["dta_doAirburst", false];

// If using a seeker and doing an airburst, then turn off the seeker functionality.
if (_action == 3 and _doAirburst) then {
	_action = 2;
};

// GPS + laser guided // GPS guided // GPS + discriminating (seeker) // Laser guided.
if (_action == 1 or {_action == 2} or {_action == 3} or {_action == 4}) exitWith {nul = [_firedEHArray,_pos,_gunAngle,_action,_fuse,_infoDummy,_doAirburst,_longRangeGuided,_arrayEnemySides,_GPSZAdjust,_elevationMod] execVM "DrongosArtillery\Special\Guided.sqf"};

// WP - not working.
if (_action == 5) exitWith {nul = [_firedEHArray,_pos] execVM "DrongosArtillery\Special\WP.sqf"};