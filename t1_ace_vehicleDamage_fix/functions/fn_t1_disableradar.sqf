params ["_vehicle","_timeout"];

sleep _timeout;

if (isNull _vehicle or {!alive _vehicle}) exitWith{};

if (isVehicleRadarOn _vehicle) then {
	_vehicle setVehicleRadar 2;
};

if (((_vehicle isVehicleSensorEnabled "ActiveRadarSensorComponent") select 0) select 1) then {
	_vehicle enableVehicleSensor ["ActiveRadarSensorComponent", false];
};

if (isServer) then {
	sleep 2;
	private _enabled = true;
	
	{
		if (alive _x) exitWith {
			_enabled = false;
			_x action ["ActiveSensorsOff", _vehicle];
		};
	} forEach crew _vehicle;
};