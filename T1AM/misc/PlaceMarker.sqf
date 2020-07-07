private["_pos","_delay","_markerName","_marker","_r"];

_pos = _this select 0;
_delay = _this select 1;
_color = _this select 2;
_markerName = "";
_marker = "";
_r = (random 9999);
_markerName = format ["%1%2%3",_pos,_delay,_r];
_marker = createMarker [_markerName, _pos];
_marker setMarkerSize [1,1];
_marker setMarkerType "mil_box";
_marker setMarkerColor _color;
_marker setMarkerText (str time);
if (_delay > 0) then {
	sleep _delay;
	deleteMarker _marker;
};