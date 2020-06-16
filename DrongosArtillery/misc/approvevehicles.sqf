// Approve vehicles that are local to the server. Only these vehicles will be used for this mod.
// Vehicles are approved by setting the variable DTA_suitableVehicle to true.

if (!isServer) exitWith {};

private _check = {
	
	{
		private _typeOf = typeOf _x;
		private _dtaApproveVehiclesOverride = if (_typeOf in dtaApproveVehiclesOverride) then {true} else {false};
		if (((getNumber (configFile >> "CfgVehicles" >> _typeOf >> "artilleryScanner")) == 1) or _dtaApproveVehiclesOverride) then {
			if (local _x and (!unitIsUAV _x or _dtaApproveVehiclesOverride)) then {
				_x setVariable ["DTA_suitableVehicle", true, true];
				if (unitIsUAV _x and _x getVariable ["DTA_disableUAV", true]) then {
					_x setVariable ["DTA_disableUAV", false];
					
					// Disable UAV controls by connecting a dummy AI unit.
					// The connect terminal command doesn't always seem to work. The sleeps are a workaround for that.
					[_x] spawn {
						sleep ((random 15) + 1);
						private _uav = _this select 0;
						private _unit = (creategroup (side _uav)) createUnit ["B_Soldier_F", [0,0,0], [], 0, "FORM"];
						_unit setPos [-20000,-20000,0];
						_unit allowDamage false;
						sleep 2;
						_unit linkItem "B_UavTerminal";
						sleep 3;
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
				//DIAG_LOG format ["APPROVE VEH: %1 - TYPEOF: %2", _x, typeOf _x];
				
			} else {
				_x setVariable ["DTA_suitableVehicle", false, true];
				//DIAG_LOG format ["APPROVE VEH - NOT SUITABLE: %1 - TYPEOF: %2", _x, typeOf _x];
			};
		};
		
	} forEach vehicles;
};

sleep 10;

call _check;


// In case no suitable units were found, wait a bit and check again, then keep checking using longer intervals.
// We keep checking to keep updating the status of the vehicles in case locality has changed.
sleep 60;

while {true} do {
	call _check;
	sleep 120;
};