private["_tube","_asset","_pos","_radius","_elevation","_height"];

_tube = _this select 0;
_asset = _this select 1;
_pos = _this select 2;
_radius = _this select 3;

//diag_log format["CIRCLE SHEAF - RADIUS: %1", _radius];

_pos = ASLtoAGL _pos;
_elevation = _pos select 2;		// Remember the height above ground for airburst.
//_radius = _radius * sqrt random 1;
_radius = random _radius;

//diag_log format["CIRCLE SHEAF - FINAL RADIUS: %1", _radius];

// If asset is not null, it means we want to use the complex code.
if (!isNull _asset) then {
	// Divide the target area into 4 sectors.
	// It will memorize at which sectors the tubes have already fired, then pick a sector that hasn't been fired at yet.
	// This will spread out the fire more evenly over the target area.
	
	// Get sector data. true = has been fired at / false = not fired at yet
	_sectors = _asset getVariable ["dta_sheafSectorsCircle", [false, false, false, false]];
	_sector1 = _sectors select 0;
	_sector2 = _sectors select 1;
	_sector3 = _sectors select 2;
	_sector4 = _sectors select 3;
	
	// All sectors have been fired at, so reset.
	if (_sector1 and _sector2 and _sector3 and _sector4) then {
		_asset setVariable ["dta_sheafSectorsCircle", [false, false, false, false]];
		_sector1 = false;
		_sector2 = false;
		_sector3 = false;
		_sector4 = false;
	};
	
	// Pick all sectors that haven't been fired at yet.
	_arraySectors = [];
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
	_asset setVariable ["dta_sheafSectorsCircle", [_sector1, _sector2, _sector3, _sector4]];
	
} else {
	// If asset is null, it means we want to use the simplified code.
	_pos = [_pos select 0, _pos select 1] getPos [_radius, random 360];
};

_height = ((AGLtoASL [_pos select 0, _pos select 1, 0]) select 2) max 0;

[_pos select 0, _pos select 1, _height + _elevation]