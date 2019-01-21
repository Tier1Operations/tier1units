//#include "script_component.hpp"
/*
 * Author: BaerMitUmlaut
 * Calculates the current metabolic costs for a unit.
 * Calculation is done according to the Pandolf/Wojtowicz formulas.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Speed <NUMBER>
 *
 * Return Value:
 * Metabolic cost <NUMBER>
 *
 * Example:
 * [player, 3.3] call ace_advanced_fatigue_fnc_getMetabolicCosts
 *
 * Public: No
 */
#define SIM_BODYMASS 70

params ["_unit", "_velocity"];

private _weight = 0;
{
	_weight = _weight + (_x select 4);
} forEach (_unit getvariable ["DW_weapons", []]);

private _gearMass = (((_unit getVariable ["ace_movement_totalLoad", loadAbs _unit]) + _weight) / 22.046) * ace_advanced_fatigue_loadFactor;

private _terrainAngle = asin (1 - ((surfaceNormal getPosASL _unit) select 2));
private _terrainGradient = (_terrainAngle / 45 min 1) * 5 * ace_advanced_fatigue_terrainGradientFactor;
private _duty = ace_advanced_fatigue_animDuty;

{
    if (_x isEqualType 0) then {
        _duty = _duty * _x;
    } else {
        _duty = _duty * (_unit call _x);
    };
} forEach (ace_advanced_fatigue_dutyList select 1);

if (ace_advanced_fatigue_isSwimming) then {
    _terrainGradient = 0;
};

if (_velocity > 2) then {
    (
        2.10 * SIM_BODYMASS
        + 4 * (SIM_BODYMASS + _gearMass) * ((_gearMass / SIM_BODYMASS) ^ 2)
        + (SIM_BODYMASS + _gearMass) * (0.90 * (_velocity ^ 2) + 0.66 * _velocity * _terrainGradient)
    ) * 0.23 * _duty
} else {
    (
        1.05 * SIM_BODYMASS
        + 4 * (SIM_BODYMASS + _gearMass) * ((_gearMass / SIM_BODYMASS) ^ 2)
        + (SIM_BODYMASS + _gearMass) * (1.15 * (_velocity ^ 2) + 0.66 * _velocity * _terrainGradient)
    ) * 0.23 * _duty
};
