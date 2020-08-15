#include "\T1AM\Defines.hpp"

params ["_side"];

private _out = [];

{
	private _group = _x;
	private _add = true;
	_vehicle = vehicle (leader _group);
	_typeOf = typeOf _vehicle;
	
	switch true do {
		case (!(_vehicle getVariable ["T1AM_suitableVehicle", false])) : {_add = false};
		case (_group in T1AM_Exclude) : {_add = false};
		case (_vehicle in T1AM_Exclude) : {_add = false};
		case (_typeOf in T1AM_Exclude) : {_add = false};
	};
	
	if (_add) then {
		if (_side == side _group) then {_out pushback _group};
	};
} forEach allGroups;

_out