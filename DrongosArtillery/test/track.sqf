_tube = _this select 0;
_round = _this select 1;

_time = 0;
_time = time;
_markerName = format ["%1%2%3",_round,_time,(random 999)];
_marker = createMarker [_markerName,(getPosASL _round)];

_marker setMarkerSize [1,1];
_marker setMarkerType "mil_dot";
_marker setMarkerColor "ColorGreen";

_weaponVectorDir = [];
_dirDegrees = 0;
_weaponVectorDir = _tube weaponDirection currentWeapon _tube;
_dirDegrees = (_weaponVectorDir select 0) atan2 (_weaponVectorDir select 1);
_dirDegrees = round _dirDegrees;

//if (_dirDegrees < 20) then {setAccTime 0.001};
//_tube globalChat format ["Turret direction:  %1",_dirDegrees];

_marker setMarkerText format ["%1",_dirDegrees];

while {(alive _round)} do {
	if (alive _round) then {_marker setMarkerPos (getPosASL _round)};
	sleep 0.1;
	if (dtaDebug) then {_round execVM "DrongosArtillery\Test\Track2.sqf"};
};

_marker setMarkerColor "ColorRed";
_marker setMarkerSize [2,2];
sleep 3;
_marker setMarkerSize [1,1];
sleep 120;
//_marker setMarkerSize [0,0];
deleteMarker _marker;