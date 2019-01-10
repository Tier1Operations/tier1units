
_tube = _this select 0;

_markerName = format ["%1veh",_tube];
_marker = createMarkerLocal [_markerName,(getPosASL _tube)];
_markerName = format ["%1gun",_tube];
_marker2 = createMarkerLocal [_markerName,(getPosASL _tube)];

_marker setMarkerSizeLocal [1,1];
_marker setMarkerTypeLocal "n_mortar";
_marker setMarkerColorLocal "ColorGreen";
_marker2 setMarkerSizeLocal [1,1];
_marker2 setMarkerTypeLocal "mil_arrow";
_marker2 setMarkerColorLocal "ColorBlue";

_gunDir = 0;
_v = [];

_weapon = (weapons _tube) select 0;

_go = true;
//while {(alive _tube)} do {
while {_go} do {
	_marker setMarkerPos (getPosASL _tube);
	_marker setMarkerDir (getDir _tube);
	_marker2 setMarkerPos (getPosASL _tube);
	_v = (_tube weaponDirection _weapon);
	_gunDir = (_v select 0) atan2 (_v select 1);
	_marker2 setMarkerDir _gunDir;
	sleep 0.1;
};