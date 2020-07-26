params ["_tube","_asset","_pos","_radius"];

//DIAG_LOG format["CIRCLE SHEAF - RADIUS: %1", _radius];

_pos = ASLtoAGL _pos;
private _elevation = _pos select 2;		// Remember the height above ground for airburst.
_radius = random _radius;

//DIAG_LOG format["CIRCLE SHEAF - FINAL RADIUS: %1", _radius];

// If asset is not null, it means we want to use the complex code.
if (!isNull _asset) then {
	// Divide the target area into 4 sectors.
	// It will memorize at which sectors the tubes have already fired, then pick a sector that hasn't been fired at yet.
	// This will spread out the fire more evenly over the target area.
	
	// Get sector data. true = has been fired at / false = not fired at yet
	private _sectors = _asset getVariable ["T1AM_sheafSectorsCircle", [false, false, false, false]];
	private _sector1 = _sectors select 0;
	private _sector2 = _sectors select 1;
	private _sector3 = _sectors select 2;
	private _sector4 = _sectors select 3;
	
	// All sectors have been fired at, so reset.
	if (_sector1 and _sector2 and _sector3 and _sector4) then {
		_asset setVariable ["T1AM_sheafSectorsCircle", [false, false, false, false]];
		_sector1 = false;
		_sector2 = false;
		_sector3 = false;
		_sector4 = false;
	};
	
	// Pick all sectors that haven't been fired at yet.
	private _arraySectors = [];
	if (!_sector1) then {_arraySectors pushback 1};
	if (!_sector2) then {_arraySectors pushback 2};
	if (!_sector3) then {_arraySectors pushback 3};
	if (!_sector4) then {_arraySectors pushback 4};
	
	// Pick one of the sectors that hasn't been fired at.
	switch (_arraySectors select (floor(random count _arraySectors))) do {
		
		// Sector 1
		case 1 : {
			_pos = [_pos select 0, _pos select 1] getPos [_radius, random 90];
			_sector1 = true;
		};
		
		// Sector 2
		case 2 : {
			_pos = [_pos select 0, _pos select 1] getPos [_radius, (random 90)+90];
			_sector2 = true;
		};
		
		// Sector 3
		case 3 : {
			_pos = [_pos select 0, _pos select 1] getPos [_radius, (random 90)+180];
			_sector3 = true;
		};
		
		// Sector 4
		case 4 : {
			_pos = [_pos select 0, _pos select 1] getPos [_radius, (random 90)+270];
			_sector4 = true;
		};
	};
	
	// Save the new sector data onto the unit's group.
	_asset setVariable ["T1AM_sheafSectorsCircle", [_sector1, _sector2, _sector3, _sector4]];
	
} else {
	// If asset is null, it means we want to use the simplified code.
	_pos = [_pos select 0, _pos select 1] getPos [_radius, random 360];
};

private _height = ((AGLtoASL [_pos select 0, _pos select 1, 0]) select 2) max 0;

[_pos select 0, _pos select 1, _height + _elevation]