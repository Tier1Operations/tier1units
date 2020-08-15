#include "\T1AM\Defines.hpp"

params["_firedEHArray","_action","_pos","_gunAngle","_fuse","_infoDummy","_longRangeGuided","_arrayEnemySides","_GPSZAdjust","_elevationMod"];

DEBUGLOG format["SPEC FIRED -- _firedEHArray: %1", _firedEHArray];
DEBUGLOG format["SPEC FIRED -- _action: %1", _action];
DEBUGLOG format["SPEC FIRED -- _pos: %1", _pos];
DEBUGLOG format["SPEC FIRED -- _gunAngle: %1", _gunAngle];
DEBUGLOG format["SPEC FIRED -- _fuse: %1", _fuse];
DEBUGLOG format["SPEC FIRED -- _infoDummy: %1", _infoDummy];
DEBUGLOG format["SPEC FIRED -- _longRangeGuided: %1", _longRangeGuided];
DEBUGLOG format["SPEC FIRED -- _arrayEnemySides: %1", _arrayEnemySides];
DEBUGLOG format["SPEC FIRED -- _GPSZAdjust: %1", _GPSZAdjust];
DEBUGLOG format["SPEC FIRED -- _elevationMod: %1", _elevationMod];


// Convert NET ID to object data type.
_infoDummy = _infoDummy call BIS_fnc_objectFromNetId;


DEBUGLOG format["SPEC FIRED -- _infoDummy CONVERTED: %1", _infoDummy];


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