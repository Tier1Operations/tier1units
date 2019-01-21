/*
	Author: Vlad333000

	Description:
	Drop weapon from back

	Parameter(s):
		0 : OBJECT - unit
		1 (Optional):
			STRING - find first weapon with this type: "PRIMARY", "SECONDARY", "CURRENT" and get this weapon
			NUMBER - index in <unit> getVariable ["DW_weapons", []] or -1 to drop all weapons (default: -1)
			ARRAY in format [<weaponClassName>, [<attachment_1>, <attachment_2>, ..., <attachment_N>], [[<magazine_1>, <ammo>], [<magazine_2>, <ammo>], ..., [<magazine_N>, <ammo>]]] - weapon to drop
			BOOL - drop first heav weapon or drop first light weapon
		3 (Optional): BOOL - allow drop weapon to vehicle (default: true)

	Returns:
	OBJECT - where weapon stored
	
	Notes:
		*if mod functionality is disabled for this unit then weapon will never be droped
		*for verify functionality check variable: <unit> getVariable ["DW_enable", missionNamespace getVariable ["DW_enable", true]]
		*unit must be alive and local
*/
// --------- Script name --------- //
scriptName _fnc_scriptName;

//Get params
private _unit		= param [0, objNull, [objNull]];
private _weapon		= param [1, "CURRENT", [0, [], "", true], [3, 4]];
private _vehicle	= param [2, true, [true]];

//Check params
if (isNull _unit) exitWith {diag_log format ["%1: unit %2 is NULL", _fnc_scriptName, _unit]; objNull};
if (!local _unit) exitWith {diag_log format ["%1: unit %2 is not local [%3/%4/%5/%6]", _fnc_scriptName, _unit, player, getPlayerUID player, profileName, clientOwner]; objNull};
if !((getText (configFile >> "CfgVehicles" >> (typeOf _unit) >> "simulation")) isEqualTo "soldier") exitWith {diag_log format ["%1: unit %2 is not soldier (%3)", _fnc_scriptName, _unit, getText (configFile >> "CfgVehicles" >> (typeOf _unit) >> "simulation")]; objNull};
if !(_unit getVariable ["DW_enable", missionNamespace getVariable ["DW_enable", true]]) exitWith {diag_log format ["%1: DW disabled for unit %2 by %3(Unit)/%4(Global)", _fnc_scriptName, _unit, _unit getVariable ["DW_enable", -1], missionNamespace getVariable ["DW_enable", true]]; objNull};

private _hintMessage = {
	private _unitHint = _this select 0;
	private _weaponHint = _this select 1;
	if (_unitHint isEqualTo player) then
	{
		hint format ["You picked up too many weapons and had to drop the:\n%1", getText (configFile >> "CfgWeapons" >> _weaponHint >> "displayName")];
	} else {
		if (player isEqualTo (leader _unitHint)) then
		{
			hint format ["%1 picked up too many weapons and had to drop the:\n%2", name _unitHint, getText (configFile >> "CfgWeapons" >> _weaponHint >> "displayName")];
		};
	};
};

switch (true) do
{
	case (_weapon isEqualType ""):
	{
		private _weaponType = (if ((toUpper _weapon) == "CURRENT") then
			{
				(switch (getNumber (configFile >> "CfgWeapons" >> (currentWeapon _unit) >> "type")) do
					{
						case 1:	{"PRIMARY"};
						case 4:	{"SECONDARY"};
						default	{""};
					});
			} else {
				if ((toUpper _weapon) in ["PRIMARY", "SECONDARY"]) then
				{
					toUpper _weapon;
				} else {
					"";
				};
			});
		
		if (_weaponType == "") exitWith {diag_log format ["%1: undefined type for weapon %2", _fnc_scriptName, _weapon]; objNull};
		
		private _weaponClass = "";
		private _weaponAttachments = [];
		private _weaponMagazines = [];
		
		{
			if ((toUpper (_x param [0, "", [""]])) isEqualTo _weaponType) exitWith
			{
				_weaponClass = _x param [1, "", [""]];
				
				{
					_weaponAttachments pushBack ([_x] param [0, "", [""]]);
				} forEach (_x param [2, [], [[]]]);
				
				{
					_weaponMagazines pushBack [_x param [0, "", [""]], _x param [1, 0, [0]]];
				} forEach (_x param [3, [], [[]]]);
				
				(_unit getVariable ["DW_weapons", []]) deleteAt _forEachIndex;
			};
		} forEach (_unit getVariable ["DW_weapons", []]);
		
		[_unit, _weaponClass] call _hintMessage;
		
		if (_vehicle && (!isNull (objectParent _unit))) then
		{
			private _objectParent = objectParent _unit;
			
			_objectParent addWeaponCargoGlobal [_weaponClass, 1];
			
			{
				if (([_x] param [0, "", [""]]) != "") then
				{
					_objectParent addItemCargoGlobal [[_x] param [0, "", [""]], 1];
				};
			} forEach (_weaponAttachments);
			
			{
				if ((_x param [0, "", [""]]) != "") then
				{
					_objectParent addMagazineAmmoCargo [_x param [0, "", [""]], 1, _x param [1, 0, [0]]];
				};
			} forEach (_weaponMagazines);
				
			diag_log format ["%1: unit %2 drop %3 to %4", _fnc_scriptName, _unit, [_weaponType, _weaponClass, _weaponAttachments, _weaponMagazines], _objectParent];
			
			_objectParent;
		} else {
			private _weaponHolder = createVehicle ["GroundWeaponHolder", getPosATL _unit, [], 0, "CAN_COLLIDE"];
			
			_weaponHolder addWeaponCargoGlobal [_weaponClass, 1];
			
			{
				if (([_x] param [0, "", [""]]) != "") then
				{
					_weaponHolder addItemCargoGlobal [[_x] param [0, "", [""]], 1];
				};
			} forEach (_weaponAttachments);
			
			{
				if ((_x param [0, "", [""]]) != "") then
				{
					_weaponHolder addMagazineAmmoCargo [_x param [0, "", [""]], 1, _x param [1, 0, [0]]];
				};
			} forEach (_weaponMagazines);
			
			_weaponHolder setPosATL [(getPosATL _unit) select 0, (getPosATL _unit) select 1, 0];
			_weaponHolder setDir (getDir _unit);
				
			diag_log format ["%1: unit %2 drop %3 to %4", _fnc_scriptName, _unit, [_weaponType, _weaponClass, _weaponAttachments, _weaponMagazines], _weaponHolder];
			
			_weaponHolder;
		};
	};
	case (_weapon isEqualType 0):
	{
		if ((count (_unit getVariable ["DW_weapons", []])) == 0) exitWith {diag_log format ["%1: unit %2 dont have weapons", _fnc_scriptName, _unit]; objNull};
		if (_weapon >= (count (_unit getVariable ["DW_weapons", []]))) exitWith {diag_log format ["%1: weapon index is higher then %2 (%3)", _fnc_scriptName, (count (_unit getVariable ["DW_weapons", []])) - 1, _weapon]; objNull};
		
		if (_weapon < 0) then
		{
			if (_vehicle && (!isNull (objectParent _unit))) then
			{
				private _objectParent = objectParent _unit;
				
				for "_i" from 1 to (count (_unit getVariable ["DW_weapons", []])) step 1 do
				{
					private _weaponData = (_unit getVariable ["DW_weapons", []]) deleteAt 0;
					private _weaponType = _weaponData param [0, "", [""]];
					private _weaponClass = _weaponData param [1, "", [""]];
					private _weaponAttachments = [];
					private _weaponMagazines = [];
					
					[_unit, _weaponClass] call _hintMessage;
					
					{
						_weaponAttachments pushBack ([_x] param [0, "", [""]]);
					} forEach (_weaponData param [2, [], [[]]]);
					
					{
						_weaponMagazines pushBack [_x param [0, "", [""]], _x param [1, 0, [0]]];
					} forEach (_weaponData param [3, [], [[]]]);
					
					_objectParent addWeaponCargoGlobal [_weaponClass, 1];
					
					{
						if (([_x] param [0, "", [""]]) != "") then
						{
							_objectParent addItemCargoGlobal [[_x] param [0, "", [""]], 1];
						};
					} forEach (_weaponAttachments);
					
					{
						if ((_x param [0, "", [""]]) != "") then
						{
							_objectParent addMagazineAmmoCargo [_x param [0, "", [""]], 1, _x param [1, 0, [0]]];
						};
					} forEach (_weaponMagazines);
				
					diag_log format ["%1: unit %2 drop %3 to %4", _fnc_scriptName, _unit, [_weaponType, _weaponClass, _weaponAttachments, _weaponMagazines], _objectParent];
				};
				
				_objectParent;
			} else {
				private _weaponHolder = createVehicle ["GroundWeaponHolder", getPosATL _unit, [], 0, "CAN_COLLIDE"];
				
				for "_i" from 1 to (count (_unit getVariable ["DW_weapons", []])) step 1 do
				{
					private _weaponData = (_unit getVariable ["DW_weapons", []]) deleteAt 0;
					private _weaponType = _weaponData param [0, "", [""]];
					private _weaponClass = _weaponData param [1, "", [""]];
					private _weaponAttachments = [];
					private _weaponMagazines = [];
					
					[_unit, _weaponClass] call _hintMessage;
					
					{
						_weaponAttachments pushBack ([_x] param [0, "", [""]]);
					} forEach (_weaponData param [2, [], [[]]]);
					
					{
						_weaponMagazines pushBack [_x param [0, "", [""]], _x param [1, 0, [0]]];
					} forEach (_weaponData param [3, [], [[]]]);
					
					_weaponHolder addWeaponCargoGlobal [_weaponClass, 1];
					
					{
						if (([_x] param [0, "", [""]]) != "") then
						{
							_weaponHolder addItemCargoGlobal [[_x] param [0, "", [""]], 1];
						};
					} forEach (_weaponAttachments);
					
					{
						if ((_x param [0, "", [""]]) != "") then
						{
							_weaponHolder addMagazineAmmoCargo [_x param [0, "", [""]], 1, _x param [1, 0, [0]]];
						};
					} forEach (_weaponMagazines);
				
					diag_log format ["%1: unit %2 drop %3 to %4", _fnc_scriptName, _unit, [_weaponType, _weaponClass, _weaponAttachments, _weaponMagazines], _weaponHolder];
				};
				
				_weaponHolder setPosATL [(getPosATL _unit) select 0, (getPosATL _unit) select 1, 0];
				_weaponHolder setDir (getDir _unit);
				_weaponHolder;
			};
		} else {
			private _weaponData = (_unit getVariable ["DW_weapons", []]) deleteAt _weapon;
			private _weaponType = _weaponData param [0, "", [""]];
			private _weaponClass = _weaponData param [1, "", [""]];
			private _weaponAttachments = [];
			private _weaponMagazines = [];
			
			[_unit, _weaponClass] call _hintMessage;
			
			{
				_weaponAttachments pushBack ([_x] param [0, "", [""]]);
			} forEach (_weaponData param [2, [], [[]]]);
			
			{
				_weaponMagazines pushBack [_x param [0, "", [""]], _x param [1, 0, [0]]];
			} forEach (_weaponData param [3, [], [[]]]);
			
			if (_vehicle && (!isNull (objectParent _unit))) then
			{
				private _objectParent = objectParent _unit;
				
				_objectParent addWeaponCargoGlobal [_weaponClass, 1];
				
				{
					if (([_x] param [0, "", [""]]) != "") then
					{
						_objectParent addItemCargoGlobal [[_x] param [0, "", [""]], 1];
					};
				} forEach (_weaponAttachments);
				
				{
					if ((_x param [0, "", [""]]) != "") then
					{
						_objectParent addMagazineAmmoCargo [_x param [0, "", [""]], 1, _x param [1, 0, [0]]];
					};
				} forEach (_weaponMagazines);
				
				diag_log format ["%1: unit %2 drop %3 to %4", _fnc_scriptName, _unit, [_weaponType, _weaponClass, _weaponAttachments, _weaponMagazines], _objectParent];
			
				_objectParent;
			} else {
				private _weaponHolder = createVehicle ["GroundWeaponHolder", getPosATL _unit, [], 0, "CAN_COLLIDE"];
				
				_weaponHolder addWeaponCargoGlobal [_weaponClass, 1];
				
				{
					if (([_x] param [0, "", [""]]) != "") then
					{
						_weaponHolder addItemCargoGlobal [[_x] param [0, "", [""]], 1];
					};
				} forEach (_weaponAttachments);
				
				{
					if ((_x param [0, "", [""]]) != "") then
					{
						_weaponHolder addMagazineAmmoCargo [_x param [0, "", [""]], 1, _x param [1, 0, [0]]];
					};
				} forEach (_weaponMagazines);
				
				_weaponHolder setPosATL [(getPosATL _unit) select 0, (getPosATL _unit) select 1, 0];
				_weaponHolder setDir (getDir _unit);
				
				diag_log format ["%1: unit %2 drop %3 to %4", _fnc_scriptName, _unit, [_weaponType, _weaponClass, _weaponAttachments, _weaponMagazines], _weaponHolder];
				
				_weaponHolder;
			};
		};
	
	};
	case (_weapon isEqualType []):
	{
		private _weaponType			= "";
		private _weaponClass		= "";
		private _weaponAttachments	= [];
		private _weaponMagazines	= [];
		private _weapons			= _unit getVariable ["DW_weapons", []];
			
		if ((count _weapon) == 3) then
		{
			_weaponClass		= _weapon param [0, "", [""]];
			_weaponAttachments	= _weapon param [1, [], [[]]];
			_weaponMagazines	= _weapon param [2, [], [[]]];
			_weaponType = (switch (getNumber (configFile >> "CfgWeapons" >> _weaponClass >> "type")) do
				{
					case 1:	{"PRIMARY"};
					case 4:	{"SECONDARY"};
					default	{""};
				});
		} else {
			_weaponType 		= _weapon param [0, "", [""]];
			_weaponClass		= _weapon param [1, "", [""]];
			_weaponAttachments	= _weapon param [2, [], [[]]];
			_weaponMagazines	= _weapon param [3, [], [[]]];
		};
		
		[_unit, _weaponClass] call _hintMessage;
		
		if (_weaponType == "") exitWith {diag_log format ["%1: undefined type %2 in config", _fnc_scriptName, _weaponClass]; objNull};
		if !([_weaponType, _weaponClass, _weaponAttachments, _weaponMagazines] in _weapons) exitWith {diag_log format ["%1: %2 not found in DW_weapons %3 for unit %4", _fnc_scriptName, [_weaponType, _weaponClass, _weaponAttachments, _weaponMagazines], _weapons, _unit]; objNull};
		
		_weapons deleteAt (_weapons find [_weaponType, _weaponClass, _weaponAttachments, _weaponMagazines]);
		
		if (_vehicle && (!isNull (objectParent _unit))) then
		{
			private _objectParent = objectParent _unit;
			
			_objectParent addWeaponCargoGlobal [_weaponClass, 1];
			
			{
				if (([_x] param [0, "", [""]]) != "") then
				{
					_objectParent addItemCargoGlobal [[_x] param [0, "", [""]], 1];
				};
			} forEach (_weaponAttachments);
			
			{
				if ((_x param [0, "", [""]]) != "") then
				{
					_objectParent addMagazineAmmoCargo [_x param [0, "", [""]], 1, _x param [1, 0, [0]]];
				};
			} forEach (_weaponMagazines);
				
			diag_log format ["%1: unit %2 drop %3 to %4", _fnc_scriptName, _unit, [_weaponType, _weaponClass, _weaponAttachments, _weaponMagazines], _objectParent];
			
			_objectParent;
		} else {
			private _weaponHolder = createVehicle ["GroundWeaponHolder", getPosATL _unit, [], 0, "CAN_COLLIDE"];
			
			_weaponHolder addWeaponCargoGlobal [_weaponClass, 1];
			
			{
				if (([_x] param [0, "", [""]]) != "") then
				{
					_weaponHolder addItemCargoGlobal [[_x] param [0, "", [""]], 1];
				};
			} forEach (_weaponAttachments);
			
			{
				if ((_x param [0, "", [""]]) != "") then
				{
					_weaponHolder addMagazineAmmoCargo [_x param [0, "", [""]], 1, _x param [1, 0, [0]]];
				};
			} forEach (_weaponMagazines);
			
			_weaponHolder setPosATL [(getPosATL _unit) select 0, (getPosATL _unit) select 1, 0];
			_weaponHolder setDir (getDir _unit);
				
			diag_log format ["%1: unit %2 drop %3 to %4", _fnc_scriptName, _unit, [_weaponType, _weaponClass, _weaponAttachments, _weaponMagazines], _weaponHolder];
			
			_weaponHolder;
		};
	};
	case (_weapon isEqualType true):
	{
		private _isFind		= false;
		private _weaponData = (if (_weapon) then
			{
				{
					if !([_x param [1, "", [""]]] call DW_fnc_weaponIsLight) exitWith
					{
						_isFind = true;
						(_unit getVariable ["DW_weapons", []]) deleteAt _forEachIndex;
					};
				} forEach (_unit getVariable ["DW_weapons", []]);
			} else {
				{
					if ([_x param [1, "", [""]]] call DW_fnc_weaponIsLight) exitWith
					{
						_isFind = true;
						(_unit getVariable ["DW_weapons", []]) deleteAt _forEachIndex;
					};
				} forEach (_unit getVariable ["DW_weapons", []]);
			});
		
		if (!_isFind) exitWith {diag_log format ["%1: weapon heavy/light not foun for unit %2 (%3/%4)", _fnc_scriptName, _unit, _weapon, _unit getVariable ["DW_weapons", []]]; objNull};
		
		
		private _weaponType = _weaponData param [0, "", [""]];
		private _weaponClass = _weaponData param [1, "", [""]];
		private _weaponAttachments = [];
		private _weaponMagazines = [];
		
		[_unit, _weaponClass] call _hintMessage;
		
		{
			_weaponAttachments pushBack ([_x] param [0, "", [""]]);
		} forEach (_weaponData param [2, [], [[]]]);
		
		{
			_weaponMagazines pushBack [_x param [0, "", [""]], _x param [1, 0, [0]]];
		} forEach (_weaponData param [3, [], [[]]]);
		
		if (_vehicle && (!isNull (objectParent _unit))) then
		{
			private _objectParent = objectParent _unit;
			
			_objectParent addWeaponCargoGlobal [_weaponClass, 1];
			
			{
				if (([_x] param [0, "", [""]]) != "") then
				{
					_objectParent addItemCargoGlobal [[_x] param [0, "", [""]], 1];
				};
			} forEach (_weaponAttachments);
			
			{
				if ((_x param [0, "", [""]]) != "") then
				{
					_objectParent addMagazineAmmoCargo [_x param [0, "", [""]], 1, _x param [1, 0, [0]]];
				};
			} forEach (_weaponMagazines);
				
			diag_log format ["%1: unit %2 drop %3 to %4", _fnc_scriptName, _unit, [_weaponType, _weaponClass, _weaponAttachments, _weaponMagazines], _objectParent];
			
			_objectParent;
		} else {
			private _weaponHolder = createVehicle ["GroundWeaponHolder", getPosATL _unit, [], 0, "CAN_COLLIDE"];
			
			_weaponHolder addWeaponCargoGlobal [_weaponClass, 1];
			
			{
				if (([_x] param [0, "", [""]]) != "") then
				{
					_weaponHolder addItemCargoGlobal [[_x] param [0, "", [""]], 1];
				};
			} forEach (_weaponAttachments);
			
			{
				if ((_x param [0, "", [""]]) != "") then
				{
					_weaponHolder addMagazineAmmoCargo [_x param [0, "", [""]], 1, _x param [1, 0, [0]]];
				};
			} forEach (_weaponMagazines);
			
			_weaponHolder setPosATL [(getPosATL _unit) select 0, (getPosATL _unit) select 1, 0];
			_weaponHolder setDir (getDir _unit);
				
			diag_log format ["%1: unit %2 drop %3 to %4", _fnc_scriptName, _unit, [_weaponType, _weaponClass, _weaponAttachments, _weaponMagazines], _weaponHolder];
			
			_weaponHolder;
		};
	};
};