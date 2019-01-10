/*
 * Author: Glowbal
 * Updates the vitals. Is expected to be called every second.
 *
 * Arguments:
 * 0: The Unit <OBJECT>
 *
 * ReturnValue:
 * <NIL>
 *
 * Public: No
 */

//#include "script_component.hpp"

params ["_unit", "_interval"];
//TRACE_3("ACE_DEBUG",_unit,_interval,_unit);
if (_interval == 0) exitWith {};

private _lastTimeValuesSynced = _unit getVariable ["ace_medical_lastMomentValuesSynced", 0];
private _syncValues = (CBA_missionTime - _lastTimeValuesSynced >= (10 + floor(random(10))) && ace_medical_keepLocalSettingsSynced);
if (_syncValues) then {
    _unit setVariable ["ace_medical_lastMomentValuesSynced", CBA_missionTime];
};

private _bloodVolume = (_unit getVariable ["ace_medical_bloodVolume", 100]) + ([_unit, _syncValues] call ace_medical_fnc_getBloodVolumeChange);
_bloodVolume = _bloodVolume max 0;

_unit setVariable  ["ace_medical_bloodVolume", _bloodVolume, _syncValues];

//TRACE_3("ACE_DEBUG",_bloodVolume,_syncValues,_unit);
// Set variables for synchronizing information across the net
if (_bloodVolume < 100) then {
    if (_bloodVolume < 61) then {
        //TRACE_4("ACE_DEBUG",_bloodVolume,_unit getVariable "ace_medical_hasLostBlood",_syncValues,_unit);
        if (_unit getVariable ["ace_medical_hasLostBlood", 0] != 2) then {
            _unit setVariable ["ace_medical_hasLostBlood", 2, true];
        };
    } else {
        //TRACE_4("ACE_DEBUG", _bloodVolume,_unit getVariable "ace_medical_hasLostBlood",_syncValues,_unit);
        if (_unit getVariable ["ace_medical_hasLostBlood", 0] != 1) then {
            _unit setVariable ["ace_medical_hasLostBlood", 1, true];
        };
    };
} else {
    //TRACE_4("ACE_DEBUG",_bloodVolume,_unit getVariable "ace_medical_hasLostBlood",_syncValues,_unit);
    if (_unit getVariable ["ace_medical_hasLostBlood", 0] != 0) then {
        _unit setVariable ["ace_medical_hasLostBlood", 0, true];
    };
};

//TRACE_3("ACE_DEBUG",[_unit] call ace_medical_fnc_getBloodLoss,_unit getVariable "ace_medical_isBleeding",_unit);
if (([_unit] call ace_medical_fnc_getBloodLoss) > 0) then {
    if !(_unit getVariable ["ace_medical_isBleeding", false]) then {
        _unit setVariable ["ace_medical_isBleeding", true, true];
    };
} else {
    if (_unit getVariable ["ace_medical_isBleeding", false]) then {
        _unit setVariable ["ace_medical_isBleeding", false, true];
    };
};

private _painStatus = _unit getVariable ["ace_medical_pain", 0];
//TRACE_4("ACE_DEBUG",_painStatus,_unit getVariable "ace_medical_hasPain",_unit getVariable "ace_medical_painSuppress",_unit);
if (_painStatus > (_unit getVariable ["ace_medical_painSuppress", 0])) then {
    if !(_unit getVariable ["ace_medical_hasPain", false]) then {
        _unit setVariable ["ace_medical_hasPain", true, true];
    };
} else {
    if (_unit getVariable ["ace_medical_hasPain", false]) then {
        _unit setVariable ["ace_medical_hasPain", false, true];
    };
};

if (_bloodVolume < 30) exitWith {
    [_unit] call ace_medical_fnc_setDead;
};

if ([_unit] call ace_common_fnc_isAwake) then {
    if (_bloodVolume < 60) then {
        if (random(1) > 0.9) then {
            [_unit, true, 15 + random(20)] call ace_medical_fnc_setUnconscious;
        };
    };
};

if (ace_medical_level == 1) then {
    //TRACE_5("ACE_DEBUG_BASIC_VITALS",_painStatus,_unit getVariable "ace_medical_hasPain",_unit getVariable "ace_medical_morphine",_syncValues,_unit);
    // reduce pain
    if (_painStatus > 0) then {
        _unit setVariable ["ace_medical_pain", (_painStatus - 0.001 * _interval) max 0, _syncValues];
    };

    // reduce painkillers
    if (_unit getVariable ["ace_medical_morphine", 0] > 0) then {
        _unit setVariable ["ace_medical_morphine", ((_unit getVariable ["ace_medical_morphine", 0]) - 0.0015 * _interval) max 0, _syncValues];
    };
};

// handle advanced medical, with vitals
if (ace_medical_level >= 2) then {
    //TRACE_6("ACE_DEBUG_ADVANCED_VITALS",_painStatus,_bloodVolume, _unit getVariable "ace_medical_hasPain",_unit getVariable "ace_medical_morphine",_syncValues,_unit);

    // Handle pain due tourniquets, that have been applied more than 120 s ago
    private _oldTourniquets = (_unit getVariable ["ace_medical_tourniquets", []]) select {_x > 0 && {CBA_missionTime - _x > 120}};
    // Increase pain at a rate of 0.001 units/s per old tourniquet
    _painStatus = _painStatus + (count _oldTourniquets) * 0.001 * _interval;

    // Set the vitals
    private _heartRate = (_unit getVariable ["ace_medical_heartRate", 80]) + (([_unit] call ace_medical_fnc_getHeartRateChange) * _interval);
    _unit setVariable  ["ace_medical_heartRate", _heartRate max 0, _syncValues];

    private _bloodPressure = [_unit] call ace_medical_fnc_getBloodPressure;
    _unit setVariable  ["ace_medical_bloodPressure", _bloodPressure, _syncValues];

    _painReduce = [0.001, 0.002] select (_painStatus > 5);

    // @todo: replace this and the rest of the setVariable with ace_common_fnc_setApproximateVariablePublic
    _unit setVariable ["ace_medical_pain", (_painStatus - _painReduce * _interval) max 0, _syncValues];

    //TRACE_8("ACE_DEBUG_ADVANCED_VITALS",_painStatus,_painReduce,_heartRate,_bloodVolume,_bloodPressure,_interval,_syncValues,_unit);

    // Check vitals for medical status
    // TODO check for in revive state instead of variable
    _bloodPressure params ["_bloodPressureL", "_bloodPressureH"];

    if (!(_unit getVariable ["ace_medical_inCardiacArrest",false])) then {
        if (_heartRate < 10 || _bloodPressureH < 30 || _bloodVolume < 20) then {
            [_unit, true, 10+ random(20)] call ace_medical_fnc_setUnconscious; // safety check to ensure unconsciousness for units if they are not dead already.
        };

        if ((_bloodPressureH > 260)
            || {_bloodPressureL < 40 && ({_heartRate > 190})}
            || {(_bloodPressureH > 145 && {_heartRate > 150})}) then {

            if (random(1) > 0.7) then {
                [_unit] call ace_medical_fnc_setCardiacArrest;
            };
        };
        if (_heartRate > 200 || (_heartRate < 20)) then {
            [_unit] call ace_medical_fnc_setCardiacArrest;
        };
    };
};
