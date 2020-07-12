// Takes a group name and returns the group code and colour without the side in front.

disableSerialization;
params ["_group"];

private _out = str _group;
private _prefix = _out select [0,2];
if (_prefix == "B " or _prefix == "O " or _prefix == "R " or _prefix == "C ") then {
	_out = _out select [2, count _out];
};

_out