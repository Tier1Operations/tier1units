// Create a temporary marker where the player has clicked to provide feedback.

params ["_pos"];

private _name = format ["%1%2", _pos, time];
private _marker = createMarkerLocal [_name, _pos];
_marker setMarkerTypeLocal "selector_selectedEnemy";
_marker setMarkerColorLocal "ColorRed";
private _size = 3;

while {(_size > 0)} do {
	_marker setMarkerSizeLocal [_size, _size];
	_size = _size - 0.25;
	sleep 0.02;
};

deleteMarkerLocal _marker;