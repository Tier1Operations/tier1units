//#include "script_component.hpp"
/*
 * Author: commy2
 * Returns the weight (from the loadAbs command) in lbs/kg (based on user option)
 *
 * Arguments:
 * 0: The Unit (usually the player) <OBJECT>
 * 1: Force a return type <SCALAR, BOOLEAN>
 *
 * Return Value:
 * The return value <NUMBER>
 *
 * Example:
 * [player] call ace_common_fnc_getWeight
 *
 * Public: No
 */

params ["_unit", ["_useImperial", false, [false, 0]]];

private _virtualLoad = 0;

{
    _virtualLoad = _virtualLoad + (_x getVariable ["ace_movement_vLoad", 0]);
} forEach [
    _unit,
    uniformContainer _unit,
    vestContainer _unit,
    backpackContainer _unit
];

private _weightDW = 0;
{
	_weightDW = _weightDW + (_x select 4);
} forEach (_unit getvariable ["DW_weapons", []]);

private _weight = (loadAbs _unit + _virtualLoad + _weightDW) * 0.1;

//Return
if (_useImperial in [true, 1]) then {
    format ["%1lb", (round (_weight * 100)) / 100]
} else {
    format ["%1kg", (round (_weight * (1/2.2046) * 100)) / 100]
};
