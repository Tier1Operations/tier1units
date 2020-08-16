params ["_unit","_weapon","_muzzle","_mode","_ammo","_magazine","_projectile","_gunner"];

if (!local _unit) exitWith {};

private _markerName = format ["%1%2%3",_projectile,time,(random 999)];
private _marker = createMarker [_markerName,(getPosASL _projectile)];
_marker setMarkerText (str time);
_marker setMarkerSize [1,1];
_marker setMarkerType "mil_dot";
_marker setMarkerColor "ColorGreen";

while {(alive _projectile)} do {
	_marker setMarkerPos (getPosASL _projectile);
	sleep 0.1;
	if (T1AM_Debug_Mode) then {_projectile spawn T1AM_Fnc_ProjectileTrail};
};

_marker setMarkerColor "ColorRed";
_marker setMarkerSize [2,2];
sleep 3;
_marker setMarkerSize [1,1];
sleep 120;
deleteMarker _marker;