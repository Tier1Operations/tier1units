// Takes a group and returns an array of the vehicles in a group.

params ["_group"];

private _vehArray = [];

{
	private _veh = vehicle _x;
	if (_veh != _x) then {
		if (!(_veh in _vehArray)) then {_vehArray pushback _veh};
	};
} forEach (units _group);

_vehArray