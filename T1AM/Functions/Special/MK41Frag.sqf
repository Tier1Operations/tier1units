#include "\T1AM\Defines.hpp"

params ["_params","_pos"];

private _projectile = _params select 6;
private _projPos = [-10000,-10000,1000];

while {alive _projectile} do {
	if ((getposASL _projectile) vectorDistance _pos < 2500) exitWith {};
	sleep 2;
};

while {alive _projectile} do {
	_projPos = getposASL _projectile;
	sleep 0.1;
};

_projPos = [_projPos select 0, _projPos select 1, (_projPos select 2) + 2];

[_projPos, "T1AM_Airburst_RocketMK41", 2, 170, 300] call T1AM_Fnc_AirburstFrag;