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

if (!hasInterface) exitWith {};
if (!isNil {missionNamespace getVariable "DW_weaponsShow"}) exitWith {diag_log format ["%1: weapons show already init", _fnc_scriptName]};

missionNamespace setVariable [
	"DW_weaponsShow",
	addMissionEventHandler [
		"EachFrame",
		{
			private _viewDistance = (missionNamespace getVariable ["DW_viewDistance", getObjectViewDistance select 0]) min (getObjectViewDistance select 0);
			
			{
				if (((_x distance (positionCameraToWorld [0, 0, 0])) < _viewDistance) && (isNull (objectParent _x))) then
				{
					private _unit = _x;
					
					//Unit (For forEach cycle)
					private _weapons				= (_unit getVariable "DW_weapons");
					private _weaponsHolders			= _unit getVariable "DW_weapons_holder";
					private _countWeapons			= count _weapons;
					private _countWeaponsHolders	= count _weaponsHolders;
					
					{
						if !((_x select 1) isEqualTo (_weapons select _forEachIndex)) then
						{
							clearWeaponCargo (_x select 0);
							(_x select 0) addWeaponCargo [(_weapons select _forEachIndex) select 1, 1];
							_weaponsHolders set [_forEachIndex, [_x select 0, _weapons select _forEachIndex]];
						};
					} forEach _weaponsHolders;
					
					call
					{
						if (_countWeaponsHolders != _countWeapons) exitWith
						{
							if (_countWeaponsHolders < _countWeapons) then
							{
								//Add weapons holder
								for "_i" from _countWeaponsHolders to (_countWeapons - 1) step 1 do
								{
									_weaponsHolders pushBack [objNull, []];
								};
							} else {
								//Remove extra weapons holders
								for "_i" from (_countWeaponsHolders - 1) to _countWeapons step -1 do
								{
									deleteVehicle ((_weaponsHolders deleteAt ((count _weaponsHolders) - 1)) param [0, objNull, [objNull]]);
								};
							};
						};
						if (({isNull (_x param [0, objNull, [objNull]])} count _weaponsHolders) != 0) exitWith
						{
							//Fix NULL holders
							{
								if (isNull (_x param [0, objNull, [objNull]])) then
								{
									private _weaponHolder	= "DW_weaponHolder" createVehicleLocal [0, 0, 0];
									private _weaponData	= _weapons param [_forEachIndex, [], [[]]];
									_weaponHolder addWeaponCargo [_weaponData param [1, "", [""]], 1];
									_weaponHolder disableCollisionWith _unit;
									_unit disableCollisionWith _weaponHolder;
									_weaponHolder enableSimulation false;
									_weaponHolder setDamage 1;
									
									_weaponsHolders set [_forEachIndex, [_weaponHolder, _weaponData]];
									(missionNamespace getVariable ["DW_weapons_holder", []]) pushBack [_unit, _weaponHolder];
								};
							} forEach _weaponsHolders;
						};
						
						if (_countWeapons != 0) then
						{
							//Calculate positions for weapons holders
							private _shoulderLeft_model		= _unit selectionPosition "leftShoulder";
							private _shoulderRight_model	= _unit selectionPosition "rightShoulder";
							private _pelvis_model			= _unit selectionPosition "pelvis";
							private _shoulderVector			= _shoulderRight_model vectorDiff _shoulderLeft_model;
							private _pelvisLeft_model		= _pelvis_model vectorAdd (_shoulderVector vectorMultiply -0.5);
							private _pelvisRight_model		= _pelvis_model vectorAdd (_shoulderVector vectorMultiply 0.5);
							private _middle_left			= _pelvisLeft_model vectorAdd ((_shoulderLeft_model vectorDiff _pelvisLeft_model) vectorMultiply 0.55);
							private _middle_right			= _pelvisRight_model vectorAdd ((_shoulderRight_model vectorDiff _pelvisRight_model) vectorMultiply 0.275);
							private _vectorUP				= vectorNormalized (_shoulderVector vectorCrossProduct (_pelvisRight_model vectorDiff _shoulderRight_model));
							
							{
								if (((_x select 1) select 0) isEqualTo "PRIMARY") then
								{
									//Get holder info
									private _weaponHolder = _x select 0;
									
									//Set pos and dir
									switch (_forEachIndex mod 2) do
									{
										case 1:
										{
											_weaponHolder setPos ((_unit modelToWorld ((_middle_left vectorAdd (_vectorUP vectorMultiply -0.175)) vectorAdd (_shoulderVector vectorMultiply 0.115))) vectorAdd ((getPosVisual _unit) vectorDiff (getPos _unit)));
											_weaponHolder setVectorDirAndUp [((_unit modelToWorld _shoulderRight_model) vectorDiff (_unit modelToWorld _shoulderLeft_model)) vectorMultiply -1, ((_unit modelToWorld _pelvis_model) vectorDiff (_unit modelToWorld (_pelvis_model vectorAdd _vectorUP))) vectorMultiply 1];
										};
										default
										{
											_weaponHolder setPos ((_unit modelToWorld ((_middle_left vectorAdd (_vectorUP vectorMultiply -0.15)) vectorAdd (_shoulderVector vectorMultiply 0.15))) vectorAdd ((getPosVisual _unit) vectorDiff (getPos _unit)));
											_weaponHolder setVectorDirAndUp [((_unit modelToWorld _shoulderRight_model) vectorDiff (_unit modelToWorld _shoulderLeft_model)) vectorMultiply -1, ((_unit modelToWorld _pelvis_model) vectorDiff (_unit modelToWorld (_pelvis_model vectorAdd _vectorUP))) vectorMultiply 1];
										};
									};
								} else {
									//Get holder info
									private _weaponHolder = _x select 0;
									
									//Set pos and dir
									switch (_forEachIndex mod 2) do
									{
										case 1:
										{
											_weaponHolder setPos ((_unit modelToWorld ((_middle_left vectorAdd (_vectorUP vectorMultiply -0.175)) vectorAdd (_shoulderVector vectorMultiply 0.115))) vectorAdd ((getPosVisual _unit) vectorDiff (getPos _unit)));
											_weaponHolder setVectorDirAndUp [((_unit modelToWorld _shoulderRight_model) vectorDiff (_unit modelToWorld _shoulderLeft_model)) vectorMultiply -1, ((_unit modelToWorld _pelvis_model) vectorDiff (_unit modelToWorld (_pelvis_model vectorAdd _vectorUP))) vectorMultiply 1];
										};
										default
										{
											_weaponHolder setPos ((_unit modelToWorld ((_middle_left vectorAdd (_vectorUP vectorMultiply -0.15)) vectorAdd (_shoulderVector vectorMultiply 0.15))) vectorAdd ((getPosVisual _unit) vectorDiff (getPos _unit)));
											_weaponHolder setVectorDirAndUp [((_unit modelToWorld _shoulderRight_model) vectorDiff (_unit modelToWorld _shoulderLeft_model)) vectorMultiply -1, ((_unit modelToWorld _pelvis_model) vectorDiff (_unit modelToWorld (_pelvis_model vectorAdd _vectorUP))) vectorMultiply 1];
										};
									};
								};
							} forEach _weaponsHolders;
						};
					};
				} else {
					if ((count (_x getVariable "DW_weapons_holder")) != 0) then
					{
						{
							deleteVehicle (_x select 0);
						} forEach (_x getVariable "DW_weapons_holder");
						
						_x setVariable ["DW_weapons_holder", [], false];
					};
				};
			} forEach allUnits;

			private _weaponsHoldersGlobal = missionNamespace getVariable "DW_weapons_holder";
			if ((count _weaponsHoldersGlobal) != 0) then
			{
				private _j = 0;
				
				for "_i" from 0 to ((count _weaponsHoldersGlobal) - 1) do
				{
					private _index	= _i - _j;
					private _unit 	= (_weaponsHoldersGlobal select _index) select 0;
					private _holder = (_weaponsHoldersGlobal select _index) select 1;
					
					if ((isNull _holder) || (isNull _unit) || (!alive _unit)) then
					{
						deleteVehicle _holder;
						_weaponsHoldersGlobal deleteAt _index;
						_j = _j + 1;
					};
				};
			};
		}
	],
	false
];