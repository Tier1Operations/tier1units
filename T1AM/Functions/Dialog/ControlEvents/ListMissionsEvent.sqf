#include "\T1AM\Defines.hpp"

params ["_control", "_selectedIndex"];

private _dialog = findDisplay 47100;
private _str = _control lbText _selectedIndex;

private _index = _str find " |";
if (_index != -1) then {
	_str = _str select [0, _index];
};

{
	if (str _x == _str) exitWith {T1AM_SelectedAsset = _x};
} forEach allGroups;