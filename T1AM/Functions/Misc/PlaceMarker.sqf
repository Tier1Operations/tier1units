#include "\T1AM\Defines.hpp"

params ["_pos","_delay","_color"];

private _markerName = format ["%1%2%3", _pos, _delay, random 9999];
private _marker = createMarker [_markerName, _pos];
_marker setMarkerSize [1,1];
_marker setMarkerType "mil_box";
_marker setMarkerColor _color;
_marker setMarkerText (str time);
if (_delay > 0) then {
	sleep _delay;
	deleteMarker _marker;
};