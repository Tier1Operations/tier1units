// Approve vehicles that are supported.
// Vehicles are approved by setting the variable T1AM_suitableVehicle to true.

#include "\T1AM\Defines.hpp"

if (!isServer) exitWith {};

private _check = {
	
	{
		private _typeOf = typeOf _x;
		private _approveOverride = if (_typeOf in T1AM_ApproveVehiclesOverride) then {true} else {false};
		if (((getNumber (configFile >> "CfgVehicles" >> _typeOf >> "artilleryScanner")) == 1) or _approveOverride) then {
			if ((!unitIsUAV _x or _approveOverride) and {{isPlayer _x and alive _x} count (crew _x) == 0}) then {
				_x setVariable ["T1AM_suitableVehicle", true, true];
				
				if (time > _x getVariable ["T1AM_localityTimer", 0]) then {
					[[_x], false] call T1AM_Fnc_ChangeLocality;
				};
				
				if (unitIsUAV _x and _x getVariable ["T1AM_disableUAVControls", true]) then {
					_x setVariable ["T1AM_disableUAVControls", false];
					
					// Disable UAV controls by connecting a dummy AI unit.
					// The connect terminal command doesn't always seem to work. The sleeps are a workaround for that.
					[_x] spawn {
						sleep ((random 15) + 1);
						private _uav = _this select 0;
						private _unit = (creategroup (side _uav)) createUnit ["B_Soldier_F", [0,0,0], [], 0, "FORM"];
						_unit setPos [-20000,-20000,0];
						_unit allowDamage false;
						sleep 4;
						_unit linkItem "B_UavTerminal";
						sleep 4;
						_unit connectTerminalToUAV _uav;
						sleep ((random 30) + 1);
						_unit setCaptive true;
						removeAllWeapons _unit;
						removeAllItems _unit;
						removeAllItemsWithMagazines _unit;
						sleep 2;
						_unit enableSimulationGlobal false;
					};
				};
				DEBUGLOG format ["APPROVE VEH: %1 - TYPEOF: %2", _x, typeOf _x];
				
			} else {
				_x setVariable ["T1AM_suitableVehicle", false, true];
				DEBUGLOG format ["APPROVE VEH - NOT SUITABLE: %1 - TYPEOF: %2", _x, typeOf _x];
			};
		};
		
	} forEach vehicles;
};

sleep 10;

call _check;


// In case no suitable units were found, wait a bit and check again, then keep checking using longer intervals.
// We keep checking to keep updating the status of the vehicles.
sleep 30;

while {true} do {
	call _check;
	sleep 60;
};