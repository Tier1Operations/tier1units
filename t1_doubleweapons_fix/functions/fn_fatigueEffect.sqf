/*
	Author: Vlad333000

	Description:
	Init fatigue effect and check max weapons

	Parameter(s):
		Nothing

	Returns:
		Nothing
	
	Notes:
		*Auto-init on mission start
*/
//Script name
scriptName _fnc_scriptName;

missionNamespace setVariable ["DW_maxWeapons", 4, false];
missionNamespace setVariable ["DW_maxWeaponsHeavy", 4, false];
missionNamespace setVariable ["DW_lightMaxMass", 9999, false];

if (!isNil {missionNamespace getVariable "DW_fatigueEffect"}) exitWith {diag_log format ["%1: Fatigue effect already init", _fnc_scriptName]};

if (hasInterface) then
{
	missionNamespace setVariable [
		"DW_fatigueEffect", 
		addMissionEventHandler [
			"EachFrame",
			{
				{
					if (local _x) then
					{
						private _unit 		= _x;
						private _load		= loadAbs _unit;
						private _loadOld	= _unit getVariable "DW_loadOld";
						private _weapons	= (_unit getVariable "DW_weapons");
						private _weaponsOld	= _unit getVariable "DW_weaponsOld";
						
						if (!(_weapons isEqualTo _weaponsOld) || (_load != _loadOld)) then
						{
							/*
							
							if ((isStaminaEnabled _x) && (_unit getVariable ["DW_enable_fatigue", missionNamespace getVariable "DW_enable_fatigue"])) then
							{
								private _addMass = 0;
								
								{
									_addMass = _addMass + getNumber (configFile >> "CfgWeapons" >> (_x select 1) >> "WeaponSlotsInfo" >> "mass");
									
									{
										_addMass = _addMass + getNumber (configFile >> "CfgWeapons" >> _x >> "ItemInfo" >> "mass");
									} forEach (_x select 2);
									
									{
										if (count _x > 0) then {
											_addMass = _addMass + getNumber (configFile >> "CfgMagazines" >> (_x select 0) >> "mass");
										};
									} forEach (_x select 3);
								} forEach _weapons;
						
								if ((_unit getVariable ["ESF_fatigueEnabled", missionNamespace getVariable ["ESF_fatigueEnabled", true]]) && ((count (_unit getVariable ["ESF_fatigue", []])) != 0)) then
								{
									[_unit, "ADD_MASS", ["DW_weapons", _addMass, true, false]] call ESF_fnc_extendedFatigue;
									
									_unit setUnitTrait ["loadCoef", (_unit getUnitTrait "loadCoef") / (_unit getVariable "DW_loadCoef"), true];
									_unit setVariable ["DW_loadCoef", 1.0, false];
									if (_unit getVariable "DW_forceWalk") then
									{
										_unit forceWalk false;
										_unit setVariable ["DW_forceWalk", false, false];
									};
								} else {
									if (_addMass != 0) then
									{
										private _maxMass = getNumber (configFile >> "CfgInventoryGlobalVariable" >> "maxSoldierLoad");
										
										if (_maxMass <= ((loadAbs _unit) + _addMass)) then
										{	
											_unit forceWalk true;
											_unit setVariable ["DW_forceWalk", true, false];
										} else {
											if (_unit getVariable "DW_forceWalk") then
											{
												_unit forceWalk false;
												_unit setVariable ["DW_forceWalk", false, false];
											};
										};
										
										private _coef = (loadAbs _unit + _addMass) / (loadAbs _unit);
										_unit setUnitTrait ["loadCoef", (_unit getUnitTrait "loadCoef") / (_unit getVariable "DW_loadCoef") * _coef , true];
										_unit setVariable ["DW_loadCoef", _coef, false];
									} else {
										_unit setUnitTrait ["loadCoef", (_unit getUnitTrait "loadCoef") / (_unit getVariable "DW_loadCoef"), true];
										_unit setVariable ["DW_loadCoef", 1.0, false];
										if (_unit getVariable "DW_forceWalk") then
										{
											_unit forceWalk false;
											_unit setVariable ["DW_forceWalk", false, false];
										};
									};
								};
							} else {
								_unit setUnitTrait ["loadCoef", (_unit getUnitTrait "loadCoef") / (_unit getVariable "DW_loadCoef"), true];
								_unit setVariable ["DW_loadCoef", 1.0, false];
								if (_unit getVariable "DW_forceWalk") then
								{
									_unit forceWalk false;
									_unit setVariable ["DW_forceWalk", false, false];
								};
							};
							
							*/
							
							//Check max count weapons
							if (((count (_unit getVariable "DW_weapons")) + ({_x != ""} count [primaryWeapon _unit, secondaryWeapon _unit])) > (_unit getVariable ["DW_maxWeapons", missionNamespace getVariable "DW_maxWeapons"])) then
							{
								[_unit, 0] call DW_fnc_weaponDrop;
							};
							
							/*
							} else {
								//Check max count heavy weapons
								if ((({!([_x select 1] call DW_fnc_weaponIsLight)} count (_unit getVariable "DW_weapons")) + ({(_x != "") && !([_x] call DW_fnc_weaponIsLight)} count [primaryWeapon _unit, secondaryWeapon _unit])) > (_unit getVariable ["DW_maxWeaponsHeavy", missionNamespace getVariable "DW_maxWeaponsHeavy"])) then
								{
									if (_unit isEqualTo player) then
									{
										hint localize "STR_DW_dropHeavyMax";
									} else {
										if (player isEqualTo (leader _unit)) then
										{
											hint format [localize "STR_DW_dropHeavyMax_other", name _unit];
										};
									};
									
									[_unit, true] call DW_fnc_weaponDrop;
								};
							};
							*/
							
							_unit setVariable ["DW_weaponsOld", _weapons, false];
							_unit setVariable ["DW_loadOld", _load, false];
						};
					};
				} forEach allUnits
			}
		],
		false
	];
} else {
	[] spawn
	{
		waitUntil {time > 0};
		
		while {true} do
		{
			sleep 5;
			
			{
				if (local _x) then
				{
					private _unit 		= _x;
					private _load		= loadAbs _unit;
					private _loadOld	= _unit getVariable "DW_loadOld";
					private _weapons	= (_unit getVariable "DW_weapons");
					private _weaponsOld	= _unit getVariable "DW_weaponsOld";
					
					if (!(_weapons isEqualTo _weaponsOld) || (_load != _loadOld)) then
					{
						/*
						
						if ((isStaminaEnabled _x) && (_unit getVariable ["DW_enable_fatigue", missionNamespace getVariable "DW_enable_fatigue"])) then
						{
							private _addMass = 0;
							
							{
								_addMass = _addMass + getNumber (configFile >> "CfgWeapons" >> (_x select 1) >> "WeaponSlotsInfo" >> "mass");
								
								{
									_addMass = _addMass + getNumber (configFile >> "CfgWeapons" >> _x >> "ItemInfo" >> "mass");
								} forEach (_x select 2);
								
								{
									if (count _x > 0) then {
										_addMass = _addMass + getNumber (configFile >> "CfgMagazines" >> (_x select 0) >> "mass");
									};
								} forEach (_x select 3);
							} forEach _weapons;
					
							if ((_unit getVariable ["ESF_fatigueEnabled", missionNamespace getVariable ["ESF_fatigueEnabled", true]]) && ((count (_unit getVariable ["ESF_fatigue", []])) != 0)) then
							{
								[_unit, "ADD_MASS", ["DW_weapons", _addMass, true, false]] call ESF_fnc_extendedFatigue;
								
								_unit setUnitTrait ["loadCoef", (_unit getUnitTrait "loadCoef") / (_unit getVariable "DW_loadCoef"), true];
								_unit setVariable ["DW_loadCoef", 1.0, false];
								if (_unit getVariable "DW_forceWalk") then
								{
									_unit forceWalk false;
									_unit setVariable ["DW_forceWalk", false, false];
								};
							} else {
								if (_addMass != 0) then
								{
									private _maxMass = getNumber (configFile >> "CfgInventoryGlobalVariable" >> "maxSoldierLoad");
									
									if (_maxMass <= ((loadAbs _unit) + _addMass)) then
									{	
										_unit forceWalk true;
										_unit setVariable ["DW_forceWalk", true, false];
									} else {
										if (_unit getVariable "DW_forceWalk") then
										{
											_unit forceWalk false;
											_unit setVariable ["DW_forceWalk", false, false];
										};
									};
									
									private _coef = (loadAbs _unit + _addMass) / (loadAbs _unit);
									_unit setUnitTrait ["loadCoef", (_unit getUnitTrait "loadCoef") / (_unit getVariable "DW_loadCoef") * _coef , true];
									_unit setVariable ["DW_loadCoef", _coef, false];
								} else {
									_unit setUnitTrait ["loadCoef", (_unit getUnitTrait "loadCoef") / (_unit getVariable "DW_loadCoef"), true];
									_unit setVariable ["DW_loadCoef", 1.0, false];
									if (_unit getVariable "DW_forceWalk") then
									{
										_unit forceWalk false;
										_unit setVariable ["DW_forceWalk", false, false];
									};
								};
							};
						} else {
							_unit setUnitTrait ["loadCoef", (_unit getUnitTrait "loadCoef") / (_unit getVariable "DW_loadCoef"), true];
							_unit setVariable ["DW_loadCoef", 1.0, false];
							if (_unit getVariable "DW_forceWalk") then
							{
								_unit forceWalk false;
								_unit setVariable ["DW_forceWalk", false, false];
							};
						};
						
						*/
						
						//Check max count weapons
						if (((count (_unit getVariable "DW_weapons")) + ({_x != ""} count [primaryWeapon _unit, secondaryWeapon _unit])) > (_unit getVariable ["DW_maxWeapons", missionNamespace getVariable "DW_maxWeapons"])) then
						{
							[_unit, 0] call DW_fnc_weaponDrop;
						};
						
						/*
						} else {
							//Check max count heavy weapons
							if ((({!([_x select 1] call DW_fnc_weaponIsLight)} count (_unit getVariable "DW_weapons")) + ({(_x != "") && !([_x] call DW_fnc_weaponIsLight)} count [primaryWeapon _unit, secondaryWeapon _unit])) > (_unit getVariable ["DW_maxWeaponsHeavy", missionNamespace getVariable "DW_maxWeaponsHeavy"])) then
							{
								if (_unit isEqualTo player) then
								{
									hint localize "STR_DW_dropHeavyMax";
								} else {
									if (player isEqualTo (leader _unit)) then
									{
										hint format [localize "STR_DW_dropHeavyMax_other", name _unit];
									};
								};
								
								[_unit, true] call DW_fnc_weaponDrop;
							};
						};
						*/
						
						_unit setVariable ["DW_weaponsOld", _weapons, false];
						_unit setVariable ["DW_loadOld", _load, false];
					};
				};
			} forEach allUnits
		};
	};
};