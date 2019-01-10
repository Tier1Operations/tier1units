params ["_unit","_weapon","_muzzle","_mode","_ammo","_magazine","_projectile","_pos"];
private "_airburstRange";

_airburstRange = 10 * (round((parseNumber(tf47_AirburstRange))/10));

if ((getNumber (configFile >> "CfgAmmo" >> _ammo >> "tf47_airburstMin") > _airburstRange)) exitWith {false};
if ((getNumber (configFile >> "CfgAmmo" >> _ammo >> "tf47_airburstMax") < _airburstRange)) exitWith {false};

[_unit, _projectile, _AirburstRange] spawn {
	
	_unit = _this select 0;
	_projectile = _this select 1;
	_AirburstRange = _this select 2;
	_posUnit = getposASL _unit;
	
	while {true} do {
		
		if ((_posUnit distance (getposASL _projectile) > _AirburstRange) or {isNull _projectile}) exitWith {
			private ["_pos","_subammo"];
			
			_pos = getposASL _projectile;
			_subammo = createVehicle ["tf47_m3maaws_HEAirburst", _pos, [], 0, "CAN_COLLIDE"];
			_subammo setPosASL _pos;
			
			_projectile setdamage 1;
			deleteVehicle _projectile;
		};
		
		sleep 0.002;
	};
};