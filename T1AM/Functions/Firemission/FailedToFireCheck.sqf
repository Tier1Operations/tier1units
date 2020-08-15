#include "\T1AM\Defines.hpp"

params ["_tube", "_asset"];

private _abort = false;

for [{_i = 0}, {_i < 15}, {_i = _i + 1}] do {
	sleep 1;
	if (_asset getVariable ["T1AM_endMission", false] or _asset getVariable ["T1AM_CheckFire", false] or _tube getVariable ["T1AM_concludingMission", false]) exitWith {_abort = true};
};

DEBUGLOG format["FAILED TO FIRE | AFTER LOOP | _tube: %1 | _asset: %2 | _abort: %3", _tube, _asset, _abort];

if (_abort) exitWith {};

if (!(_tube getVariable ["T1AM_hasFired", false])) then {
	_tube setVariable ["T1AM_failedToFire", true];		// This will abort the mission.
	DEBUGLOG format["FAILED TO FIRE | FAILED | _tube: %1 | _asset: %2 | _abort: %3", _tube, _asset, _abort];
};