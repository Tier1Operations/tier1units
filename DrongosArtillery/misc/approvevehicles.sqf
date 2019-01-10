// Approve vehicles that are local to the server. Only these vehicles will be used for this mod.
// Vehicles are approved by setting the variable DTA_suitableVehicle to true.

if (!isServer) exitWith {};

private "_typeOf";

_check = {
	
	{
		_typeOf = typeOf _x;
		if ((getNumber (configFile >> "CfgVehicles" >> _typeOf >> "artilleryScanner")) == 1) then {
			if (local _x) then {
				_x setVariable ["DTA_suitableVehicle", true, true];
				//diag_log format ["APPROVE VEH: %1 - TYPEOF: %2", _x, typeOf _x];
				
			} else {
				_x setVariable ["DTA_suitableVehicle", false, true];
				//diag_log format ["APPROVE VEH - NOT SUITABLE: %1 - TYPEOF: %2", _x, typeOf _x];
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