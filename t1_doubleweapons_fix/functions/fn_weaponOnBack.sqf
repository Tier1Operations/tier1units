/*
	Author: Vlad333000

	Description:
	Add weapon on back for unit

	Parameter(s):
		0 : OBJECT - unit
		1 (Optional):
			STRING - weapon type: "PRIMARY", "SECONDARY", "CURRENT" (default: "CURRENT")
			ARRAY in format [<weaponClassName>, [<attachment_1>, <attachment_2>, ..., <attachment_N>], [[<magazine_1>, <ammo>], [<magazine_2>, <ammo>], ..., [<magazine_N>, <ammo>]]] - weapon to add

	Returns:
	BOOL - add result
	
	Notes:
		*if mod functionality is disabled for this unit then weapon will never be added
		*for verify functionality check variable: <unit> getVariable ["DW_enable", missionNamespace getVariable ["DW_enable", true]]
		*for verify functionality for specific weapon type check variable: <unit> getVariable ["DW_enable_<weaponType>", missionNamespace getVariable ["DW_enable_<weaponType>", true]]
		*unit must be alive and local
*/
//Script name
scriptName _fnc_scriptName;

//Get params
private _unit	= param [0, objNull, [objNull]];
private _weapon	= param [1, "CURRENT", ["", []], [1, 2, 3]];

//Check params
if ((isNull _unit) || (!alive _unit)) exitWith {diag_log format ["%1: unit %2 is NULL or dead (%3)", _fnc_scriptName, _unit, damage _unit]; false};
if (!local _unit) exitWith {diag_log format ["%1: unit %2 is not local [%3/%4/%5/%6]", _fnc_scriptName, _unit, player, getPlayerUID player, profileName, clientOwner]; false};
if !((getText (configFile >> "CfgVehicles" >> (typeOf _unit) >> "simulation")) isEqualTo "soldier") exitWith {diag_log format ["%1: unit %2 is not soldier (%3)", _fnc_scriptName, _unit, getText (configFile >> "CfgVehicles" >> (typeOf _unit) >> "simulation")]; false};
if !(_unit getVariable ["DW_enable", missionNamespace getVariable ["DW_enable", true]]) exitWith {diag_log format ["%1: DW disabled for unit %2 by %3(Unit)/%4(Global)", _fnc_scriptName, _unit, _unit getVariable ["DW_enable", -1], missionNamespace getVariable ["DW_enable", true]]; false};

switch (true) do
{
	case (_weapon isEqualType ""):
	{
		private _weaponClass = (switch (toUpper _weapon) do
			{
				case "PRIMARY":		{primaryWeapon _unit};
				case "SECONDARY":	{secondaryWeapon _unit};
				case "CURRENT": 	{currentWeapon _unit};
				default				{""};
			});
		
		if (_weaponClass == "") exitWith {diag_log format ["%1: is undefined type %2 or weapon is empty %3", _fnc_scriptName, _weapon, _weaponClass]; false};
		
		private _weaponType = (switch (getNumber (configFile >> "CfgWeapons" >> _weaponClass >> "type")) do
			{
				case 1:	{"PRIMARY"};
				case 4:	{"SECONDARY"};
				default	{""};
			});
		
		if (_weaponType == "") exitWith {diag_log format ["%1: undefined type %2 in config", _fnc_scriptName, _weaponClass]; false};
		if !(_unit getVariable [format ["DW_enable_%1", _weaponType], missionNamespace getVariable [format ["DW_enable_%1", _weaponType], true]]) exitWith {diag_log format ["%1: weapon with type %2 disabled for unit %3 by (%4(Unit)/%5(Global))", _fnc_scriptName, _weaponType, _unit, _unit getVariable [format ["DW_enable_%1", _weaponType], -1], missionNamespace getVariable [format ["DW_enable_%1", _weaponType], true]]; false};

		private _weaponAttachments	= [];
		private _weaponMagazines	= [];
		
		//Get weapon data
		{
			if ((_x select 0) isEqualTo _weaponClass) exitWith
			{
				{
					if !(_x isEqualTo _weaponClass) then
					{
						switch (true) do
						{
							case (_x isEqualType ""):	{_weaponAttachments pushBack _x};
							case (_x isEqualType []):	{_weaponMagazines pushBack _x};
							default						{diag_log format ["%1: undefined type of %2 in weapons items", _fnc_scriptName, _x]};
						};
					};
				} forEach _x;
			};
		} forEach (weaponsItems _unit);
		
		_unit removeWeapon _weaponClass;
		_weaponClass = [_weaponClass] call BIS_fnc_baseWeapon;
		
		private _weight = 0;
		_weight = _weight + getNumber (configFile >> "CfgWeapons" >> _weaponClass >> "WeaponSlotsInfo" >> "mass");
		
		{
			_weight = _weight + getNumber (configFile >> "CfgWeapons" >> _x >> "ItemInfo" >> "mass");
		} forEach _weaponAttachments;
		
		{
			if (count _x > 0) then {
				_weight = _weight + getNumber (configFile >> "CfgMagazines" >> (_x select 0) >> "mass");
			};
		} forEach _weaponMagazines;
		
		//Add weapon to variable
		if ((_unit getVariable ["DW_weapons", ""]) isEqualType "") then
		{
			diag_log format ["%1: %2 add variable %3", _fnc_scriptName, _unit, [[_weaponType, _weaponClass, _weaponAttachments, _weaponMagazines]]];
			_unit setVariable ["DW_weapons", [[_weaponType, _weaponClass, _weaponAttachments, _weaponMagazines, _weight]], false];
		} else {
			diag_log format ["%1: %2 add weapon %3", _fnc_scriptName, _unit, [_weaponType, _weaponClass, _weaponAttachments, _weaponMagazines]];
			(_unit getVariable ["DW_weapons", ""]) pushBack [_weaponType, _weaponClass, _weaponAttachments, _weaponMagazines, _weight];
		};
		
		//Return
		true;
	};
	case (_weapon isEqualType []):
	{
		//Get weapon data
		private _weaponClass		= [_weapon param [0, "", [""]]] call BIS_fnc_baseWeapon;
		private _weaponAttachments	= [];
		private _weaponMagazines	= [];
		
		//Check weapon
		if (_weaponClass == "") exitWith {diag_log format ["%1: weapon in %2 is empty", _fnc_scriptName, _weapon]; false};
				
		private _weaponType = (switch (getNumber (configFile >> "CfgWeapons" >> _weaponClass >> "type")) do
			{
				case 1:	{"PRIMARY"};
				case 4:	{"SECONDARY"};
				default	{""};
			});
		
		if (_weaponType == "") exitWith {diag_log format ["%1: undefined type %2 in config", _fnc_scriptName, _weaponClass]; false};
		if !(_unit getVariable [format ["DW_enable_%1", _weaponType], missionNamespace getVariable [format ["DW_enable_%1", _weaponType], true]]) exitWith {diag_log format ["%1: weapon with type %2 disabled for unit %3 by (%4(Unit)/%5(Global))", _fnc_scriptName, _weaponType, _unit, _unit getVariable [format ["DW_enable_%1", _weaponType], -1], missionNamespace getVariable [format ["DW_enable_%1", _weaponType], true]]; false};
		
		//Get attachments
		{
			_weaponAttachments pushBack (_x param [0, "", [""]]);
		} forEach (_weapon param [1, [], [[]]]);
		
		//Get magazines
		{
			_weaponMagazines pushBack [_x param [0, "", [""]], _x param [1, 0, [0]]];
		} forEach (_weapon param [2, [], [[]]]);
		
		//Add weapon to variable
		if ((_unit getVariable ["DW_weapons", ""]) isEqualType "") then
		{
			diag_log format ["%1: %2 add variable %3", _fnc_scriptName, _unit, [[_weaponType, _weaponClass, _weaponAttachments, _weaponMagazines]]];
			_unit setVariable ["DW_weapons", [[_weaponType, _weaponClass, _weaponAttachments, _weaponMagazines]], false];
		} else {
			diag_log format ["%1: %2 add weapon %3", _fnc_scriptName, _unit, [_weaponType, _weaponClass, _weaponAttachments, _weaponMagazines]];
			(_unit getVariable ["DW_weapons", ""]) pushBack [_weaponType, _weaponClass, _weaponAttachments, _weaponMagazines];
		};
		
		//Return
		true;
	};
	default
	{
		diag_log format ["%1: undefined type of %2", _fnc_scriptName, _weapon];
		
		//Return
		false
	};
};