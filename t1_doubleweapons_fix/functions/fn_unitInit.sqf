/*
	Author: Vlad333000

	Description:
	Init actions for unit

	Parameter(s):
		0: OBJECT - unit

	Returns:
		Nothing
	
	Notes:
		*Auto-inited on each created units
*/
// --------- Script name --------- //
scriptName _fnc_scriptName;

// --------- Get params --------- //
_unit = param [0, objNull, [objNull]];

// --------- Check params --------- //
if ((isNull _unit) || (!alive _unit)) exitWith { diag_log format ["%1: unit %2 is NULL or dead (%3)", _fnc_scriptName, _unit, damage _unit]};

if (isNil {_unit getVariable "DW_weapons"}) then {
	private _weapons = getArray (configFile >> "CfgVehicles" >> (typeOf _unit) >> "DW_weapons");
	
	private _weight = 0;
	{
		_weight = _weight + getNumber (configFile >> "CfgWeapons" >> (_x select 1) >> "WeaponSlotsInfo" >> "mass");
		
		{
			_weight = _weight + getNumber (configFile >> "CfgWeapons" >> _x >> "ItemInfo" >> "mass");
		} forEach (_x select 2);
		
		{
			if (count _x > 0) then {
				_weight = _weight + getNumber (configFile >> "CfgMagazines" >> (_x select 0) >> "mass");
			};
		} forEach (_x select 3);
	} forEach _weapons;
	
	if (_weight > 0) then {_weapons pushback _weight};
	_unit setVariable ["DW_weapons", _weapons, false];
};
if (isNil {_unit getVariable "DW_weapons_sync"}) then {_unit setVariable ["DW_weapons_sync", [], false]};
/* if (isNil {_unit getVariable "DW_mainActions"}) then { */_unit setVariable ["DW_mainActions", [], false]/* } */;
/* if (isNil {_unit getVariable "DW_weaponsActions"}) then { */_unit setVariable ["DW_weaponsActions", [], false]/* } */;
if (isNil {_unit getVariable "DW_weapons_holder"}) then {_unit setVariable ["DW_weapons_holder", [], false]};
if (isNil {_unit getVariable "DW_loadCoef"}) then {_unit setVariable ["DW_loadCoef", 1, false]};
if (isNil {_unit getVariable "DW_loadOld"}) then {_unit setVariable ["DW_loadOld", 0, false]};
if (isNil {_unit getVariable "DW_weaponsOld"}) then {_unit setVariable ["DW_weaponsOld", [], false]};
if (isNil {_unit getVariable "DW_forceWalk"}) then {_unit setVariable ["DW_forceWalk", false, false]};
if (isNil {_unit getVariable "DW_maxWeapons"}) then {if ((getNumber (configFile >> "CfgVehicles" >> (typeOf _unit) >> "DW_maxWeapons")) > 1) then {_unit setVariable ["DW_maxWeapons", getNumber (configFile >> "CfgVehicles" >> (typeOf _unit) >> "DW_maxWeapons"), false]}};
if (isNil {_unit getVariable "DW_maxWeaponsHeavy"}) then {if ((getNumber (configFile >> "CfgVehicles" >> (typeOf _unit) >> "DW_maxWeaponsHeavy")) > 1) then {_unit setVariable ["DW_maxWeaponsHeavy", getNumber (configFile >> "CfgVehicles" >> (typeOf _unit) >> "DW_maxWeaponsHeavy"), false]}};

if (!local _unit) exitWith { diag_log format ["%1: type %2 is not local [%3/%4/%5/%6]", _fnc_scriptName, _unit, player, getPlayerUID player, profileName, clientOwner]};

diag_log format ["%1: init %2", _fnc_scriptName, _unit];

_unit setUnitTrait ["loadCoef", 1.0, true];
_unit forceWalk false;