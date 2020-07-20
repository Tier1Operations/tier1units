// Returns the type of group, based upon the typeOf of the vehicle of the group leader.

params ["_group"];

private _vehicle = vehicle (leader _group);
private _vehicleType = typeOf _vehicle;
private _groupType = "Vehicle";

private _baseTypes = T1AM_ArtyParents;
private _parents = [(configfile >> "CfgVehicles" >> _vehicleType),true] call BIS_fnc_returnParents;

{
	private _baseType = _x;
	if (_baseType in _parents) exitWith {_groupType = "Artillery"};
} forEach _baseTypes;

_groupType