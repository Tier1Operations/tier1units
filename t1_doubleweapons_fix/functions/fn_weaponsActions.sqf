/*
	Author: Vlad333000

	Description:
	Init actions for each units

	Parameter(s):
		Nothing

	Returns:
		Nothing
	
	Notes:
		*Auto-init on mission start
*/
//Script name
scriptName _fnc_scriptName;

//Check
if (!hasInterface) exitWith {};
if (!isNil {missionNamespace getVariable "DW_weaponsActions"}) exitWith {diag_log format ["%1: weapons actions already init", _fnc_scriptName]};

missionNamespace setVariable [
	"DW_weaponsActions", 
	addMissionEventHandler [
		"EachFrame",
		{
			/*
			
			{
				if (local _x) then
				{
					private _unit = _x;
					
					if (((leader _unit) isEqualTo player) || (_unit isEqualTo player) || (cameraOn isEqualTo _unit)) then
					{
						private _mainActions	= _unit getVariable "DW_mainActions";
						private _weapons		= +(_unit getVariable "DW_weapons");
						private _weaponsActions = _unit getVariable "DW_weaponsActions";
						
						if ((count _mainActions) isEqualTo 0) then
						{
							_mainActions pushBack (_unit addAction [
									localize "STR_DW_onBack",
									{
										[_this select 0, "CURRENT"] call DW_fnc_weaponOnBack;
									},
									nil,
									1.0,
									false,
									true,
									"",
									"((_this isEqualTo _target) || (_this in _target)) && (_this getVariable ['DW_enable', missionNamespace getVariable 'DW_enable']) && (_this call {if (((currentWeapon _this) != '') && ((currentWeapon _this) in [primaryWeapon _this, secondaryWeapon _this])) then {private _type = ['PRIMARY', 'SECONDARY'] select ([1, 4] find (getNumber (configFile >> 'CfgWeapons' >> (currentWeapon _this) >> 'type'))); _this getVariable [format ['DW_enable_%1', _type], missionNamespace getVariable (format ['DW_enable_%1', _type])]} else {false}})"
								]);
							_mainActions pushBack (_unit addAction [
									localize "STR_DW_dropAll",
									{
										[_this select 0, -1] call DW_fnc_weaponDrop;
									},
									nil,
									0.5,
									false,
									true,
									"",
									"((_this isEqualTo _target) || (_this in _target)) && (_this getVariable ['DW_enable', missionNamespace getVariable 'DW_enable']) && ((count (_this getVariable 'DW_weapons')) != 0)"
								]);
							_mainActions pushBack (_unit addAction [
									localize "STR_DW_primary",
									{
										[_this select 0, "PRIMARY"] call DW_fnc_weaponOnBack;
									},
									nil,
									1.0,
									false,
									true,
									"",
									"((_this isEqualTo _target) || (_this in _target)) && (_this getVariable ['DW_enable', missionNamespace getVariable 'DW_enable']) && ((primaryWeapon _this) != '') && (_this getVariable ['DW_enable_PRIMARY', missionNamespace getVariable 'DW_enable_PRIMARY'])"
								]);
							_mainActions pushBack (_unit addAction [
									localize "STR_DW_secondary",
									{
										[_this select 0, "SECONDARY"] call DW_fnc_weaponOnBack;
									},
									nil,
									1.0,
									false,
									true,
									"",
									"((_this isEqualTo _target) || (_this in _target)) && (_this getVariable ['DW_enable', missionNamespace getVariable 'DW_enable']) && ((secondaryWeapon _this) != '') && (_this getVariable ['DW_enable_SECONDARY', missionNamespace getVariable 'DW_enable_SECONDARY'])"
								]);
						};
						
						if ((count _weaponsActions) isEqualTo (count _weapons)) then
						{
							{
								if !((_x select 1) isEqualTo (_weapons select _forEachIndex)) then
								{
									_unit removeAction (_x select 0);
									
									private _index = _unit addAction [
											format [localize "STR_DW_fromBack", getText (configFile >> "CfgWeapons" >> ((_weapons select _forEachIndex) select 1) >> "displayName")],
											{
												[_this select 0, _this select 3] call DW_fnc_weaponFromBack;
											},
											_weapons select _forEachIndex,
											1.75,
											true,
											true,
											"",
											"((_this isEqualTo _target) || (_this in _target)) && (_this getVariable ['DW_enable', missionNamespace getVariable 'DW_enable'])"
										];
									
									_weaponsActions set [_forEachIndex, [_index, _weapons select _forEachIndex]];
								};
							} forEach _weaponsActions;
						} else {
							{
								_unit removeAction (_x select 0);
							} forEach _weaponsActions;
							
							_weaponsActions = [];
							
							{
								_weaponsActions pushBack [_unit addAction [
										format [localize "STR_DW_fromBack", getText (configFile >> "CfgWeapons" >> (_x select 1) >> "displayName")],
										{
											[_this select 0, _this select 3] call DW_fnc_weaponFromBack;
										},
										_x,
										1.75,
										true,
										true,
										"",
										"((_this isEqualTo _target) || (_this in _target)) && (_this getVariable ['DW_enable', missionNamespace getVariable 'DW_enable'])"
									], _x];
							} forEach (_weapons);
							
							_unit setVariable ["DW_weaponsActions", _weaponsActions, false];
						};
					} else {
						{
							_unit removeAction (_x select 0);
						} forEach (_unit getVariable ["DW_weaponsActions", []]);
					
						{
							_unit removeAction _x;
						} forEach (_unit getVariable ["DW_mainActions", []]);
					};
				} else {
					private _unit = _x;
					
					{
						_unit removeAction (_x select 0);
					} forEach (_unit getVariable ["DW_weaponsActions", []]);
					
					{
						_unit removeAction _x;
					} forEach (_unit getVariable ["DW_mainActions", []]);
				};
			} forEach allUnits;
			
			*/
			
			if ((player getVariable ["DW_maxWeaponsOld", 0]) < (player getVariable ["DW_maxWeapons", missionNamespace getVariable "DW_maxWeapons"])) then
			{
				for "_i" from 1 to (player getVariable ["DW_maxWeapons", missionNamespace getVariable ["DW_maxWeapons", 3]]) step 1 do 
				{
					_condition	= compile format ["(_player getVariable ['DW_enable', missionNamespace getVariable 'DW_enable']) && ((count (_player getVariable ['DW_weapons', []])) > %1)", _i - 1];
					_statement	= compile format ["
						[player, %1] spawn DW_fnc_weaponFromBack;
					", _i - 1];
					_action		= [
						format ["DW_weaponFromBack%1", _i],
						format [localize "STR_DW_fromBack", _i], 
						"A3\ui_f\data\gui\cfg\hints\rifle_ca.paa",
						_statement,
						_condition
					] call ACE_interact_menu_fnc_createAction;
					[
						player,
						1,
						["ACE_SelfActions", "ACE_Equipment"],
						_action
					] call ACE_interact_menu_fnc_addActionToObject;
				};
				
				player setVariable ["DW_maxWeaponsOld", (player getVariable ["DW_maxWeapons", missionNamespace getVariable ["DW_maxWeapons", 3]]), false];
			};
		}
	],
	false
];