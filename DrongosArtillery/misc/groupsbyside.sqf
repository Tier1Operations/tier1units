private ["_side","_groups","_add","_out","_group","_type","_vehicle","_typeOf","_isArtillery"];
_side = _this select 0;
_group = grpNull;
_groups = allGroups;
_add = false;
_out = [];
_type = "";
_vehicle = objNull;
_typeOf = "";
_isArtillery = 0;
while {((count _groups) > 0)} do {
	_add = true;
	_group = _groups select 0;
	_groups = _groups - [_group];
	_vehicle = vehicle (leader _group);
	_typeOf = typeOf _vehicle;
	_isArtillery = 0;
	
	switch true do {
		case (!(_vehicle getVariable ["DTA_suitableVehicle", false])) : {_add = false};
		case (_group in dtaExclude) : {_add = false};
		case (_vehicle in dtaExclude) : {_add = false};
		case (_typeOf in dtaExclude) : {_add = false};
	};
	
	if (_add) then {
		if (_side == side _group) then {_out = _out + [_group]};
	};
};
_out