params ["_posASL", "_direction", "_maxDistance", "_shooter"];

private _intersections = lineIntersectsSurfaces [_posASL, _posASL vectorAdd (_direction vectorMultiply _maxDistance), _shooter, objNull, true, 99];
private _distance = 999;

{
	_x params ["_intersectPosASL", "_surfaceNormal", "_intersectObject"];
	
	// Hit something solid that can reflect - (Static covers Building)  [Need to manually filter out _shoot for FFV shots]
	if ((isNull _intersectObject) || {(_intersectObject != _shooter) && {(_intersectObject isKindOf "Static") || {_intersectObject isKindOf "AllVehicles"}}}) exitWith {
		_distance = _posASL vectorDistance _intersectPosASL;
		
		// Calculate the angle between the terrain and the back blast direction
		private _angle = 90 - acos (- (_surfaceNormal vectorDotProduct _direction));
		
		// Debug stuff.
		//[_angle, _distance, _intersections] spawn {
		//	params ["_angle", "_distance", "_intersections"];
		//	hint str _angle;
		//	diag_log "TEST123 OVERPRESSURE GETDISTANCE START";
		//	diag_log format["_intersections: %1", _intersections];
		//	diag_log format["_angle: %1 || _distance: %2", _angle, _distance];
		//	diag_log "TEST123 OVERPRESSURE GETDISTANCE END";
		//};
		
		// Angles below 60 deg, no backblast at all
		if (_angle < 60) exitWith {_distance = 999};
		
		// Angles below 91 deg, the distance is increased according to the difference
		if (_angle < 91) exitWith {_distance = _distance * (9 - 4 * sqrt ((_angle - 25)/20))};
	};
	
} forEach _intersections;

_distance