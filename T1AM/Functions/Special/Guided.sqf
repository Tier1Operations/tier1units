params["_firedEHArray","_pos","_gunAngle","_action","_fuse","_infoDummy","_doAirburst","_longRangeGuided","_arrayEnemySides","_GPSZAdjust","_elevationMod"];

private _projectile = _firedEHArray select 6;


// For figuring out how much the round needs to miss when there's no laser lock and no other guidance.
private _unguidedCEP = _infoDummy getVariable ["T1AM_unguidedCEP", 85];
if (_action == 4) then {
	_pos = _infoDummy getVariable ["T1AM_unguidedPos", _pos];
};


DIAG_LOG format ["GUIDED -- _firedEHArray: %1", _firedEHArray];
DIAG_LOG format ["GUIDED -- _pos: %1", _pos];
DIAG_LOG format ["GUIDED -- _gunAngle: %1", _gunAngle];
DIAG_LOG format ["GUIDED -- _action: %1", _action];
DIAG_LOG format ["GUIDED -- _fuse: %1", _fuse];
DIAG_LOG format ["GUIDED -- _infoDummy: %1", _infoDummy];
DIAG_LOG format ["GUIDED -- _doAirburst: %1", _doAirburst];
DIAG_LOG format ["GUIDED -- _longRangeGuided: %1", _longRangeGuided];
DIAG_LOG format ["GUIDED -- _arrayEnemySides: %1", _arrayEnemySides];
DIAG_LOG format ["GUIDED -- _GPSZAdjust: %1", _GPSZAdjust];
DIAG_LOG format ["GUIDED -- _elevationMod: %1", _elevationMod];
DIAG_LOG format ["GUIDED -- _projectile: %1", _projectile];
DIAG_LOG format ["GUIDED -- _unguidedCEP: %1", _unguidedCEP];


// If not airbursting, set the target pos altitude close to the ground.
// Put it a bit above the ground to make it easier for the projectile to hit an object.
if (!_doAirburst and {_GPSZAdjust < 0.5}) then {
	_pos = AGLtoASL [_pos select 0, _pos select 1, 0.5];
};


private _posAGL = ASLtoAGL _pos;


// Look for targets in this radius.
private _radius = 300;
if (_action == 1 or _action == 4) then {_radius = 500};

private _distanceCheck = (((getPosASL _projectile) vectorDistance _pos) * 0.5) max 2000; // When low angle, let the projectile get a bit closer.


if (_gunAngle == "HIGH") then {
	// High angle shot - Wait until the projectile starts descending.
	private _altitudeHighest = -100000;
	
	while {alive _projectile} do {
		private _altitude = (getPosASL _projectile) select 2;
		// Add 7 to avoid bug.
		if (_altitude + 7 < _altitudeHighest) exitWith {
			DIAG_LOG format ["GUIDED | _altitude + 7 < _altitudeHighest: %1 | _altitude: %2 | _altitudeHighest: %3", _altitude + 7 < _altitudeHighest, _altitude, _altitudeHighest];
		};
		_altitudeHighest = _altitude;
		sleep 0.2;
	};
} else {
	// Low angle shot - Wait until projectile moves away from the unit that fired.
	private _startPos = getPosASL _projectile;
	while {true} do {
		sleep 0.025;
		if (_startPos vectorDistance (getPosASL _projectile) > 20 or !alive _projectile) exitWith {
			DIAG_LOG format ["GUIDED | _startPos vectorDistance (getPosASL _projectile) > 20 or !alive _projectile: %1 | _startPos vectorDistance (getPosASL _projectile): %2 | !alive _projectile: %3", _startPos vectorDistance (getPosASL _projectile) > 20 or !alive _projectile, _startPos vectorDistance (getPosASL _projectile), !alive _projectile];
		};
	};
	
	// Wait until projectile is a bit closer to the target.
	while {true} do {
		sleep 0.025;
		if (_pos vectorDistance (getPosASL _projectile) < _distanceCheck or !alive _projectile) exitWith {
			DIAG_LOG format ["GUIDED | _pos vectorDistance (getPosASL _projectile) < _distanceCheck or !alive _projectile: %1 | _pos vectorDistance (getPosASL _projectile): %2 | _distanceCheck: %3 | !alive _projectile: %4", _pos vectorDistance (getPosASL _projectile) < _distanceCheck or !alive _projectile, _pos vectorDistance (getPosASL _projectile), _distanceCheck, !alive _projectile];
		};
	};
};

// If not long range guided, then proceed with the if.
// If it's long range guided, we'll need to already start guiding it at this point to make sure it will hit the target,
// so skip this part.
if (!_longRangeGuided) then {
	// Wait until the distance to target is less than 1500.
	while {true} do {
		sleep 0.02;
		if (_pos vectorDistance (getPosASL _projectile) < 1500 or !alive _projectile) exitWith {
			DIAG_LOG format ["GUIDED | _pos vectorDistance (getPosASL _projectile) < 1500 or !alive _projectile: %1 | _pos vectorDistance (getPosASL _projectile): %2 | !alive _projectile: %3", _pos vectorDistance (getPosASL _projectile) < 1500 or !alive _projectile, _pos vectorDistance (getPosASL _projectile), !alive _projectile];
		};
	};
};

if (!alive _projectile) exitWith {
	DIAG_LOG format ["GUIDED | !alive _projectile: %1", !alive _projectile];
};

// Start guiding the projectile.
if (T1AM_Debug_Mode) then {hint "shell guiding";systemChat "shell guiding"};

// Laser or seeker
private _target = ObjNull;
if (_action == 1 or {_action == 3}) then {
	
	private _list = [];
	if (_action == 1 or {_action == 4}) then {
		
		// Laser
		_list = _posAGL nearEntities ["LaserTarget", _radius];
		
	} else {
		
		// Seeker
		
		_list = _posAGL nearEntities ["Tank", _radius];
		_list2 = [];
		{
			_y = _x;
			private _side = getNumber(configfile >> "CfgVehicles" >> (typeOf _y) >> "side");
			{
				if (_side == _x) exitWith {_list2 pushback _y};
			} forEach _arrayEnemySides;
		} forEach _list;
		_list = _list2;
		
		if ((count _list) < 1) then {
			
			_list = _posAGL nearEntities ["LandVehicle", _radius];
			_list2 = [];
			{
				_y = _x;
				private _side = getNumber(configfile >> "CfgVehicles" >> (typeOf _y) >> "side");
				{
					if (_side == _x and {!(_y isKindOf "StaticWeapon")}) exitWith {_list2 pushback _y};
				} forEach _arrayEnemySides;
			} forEach _list;
			_list = _list2;
			
			if ((count _list) < 1) then {
				
				_list = _posAGL nearEntities ["Air", _radius];
				_list2 = [];
				{
					if (speed _x < 170 and {speed _x > -170}) then {
						_y = _x;
						private _side = getNumber(configfile >> "CfgVehicles" >> (typeOf _y) >> "side");
						{
							if (_side == _x) exitWith {_list2 pushback _y};
						} forEach _arrayEnemySides;
					};
				} forEach _list;
				_list = _list2;
				
				if ((count _list) < 1) then {
					
					_list = _posAGL nearEntities ["Ship", _radius];
					_list2 = [];
					{
						if ((getPosASL _x) select 2 > -2) then {
							_y = _x;
							private _side = getNumber(configfile >> "CfgVehicles" >> (typeOf _y) >> "side");
							{
								if (_side == _x) exitWith {_list2 pushback _y};
							} forEach _arrayEnemySides;
						};
					} forEach _list;
					_list = _list2;
				};
			};
		};
	};
	
	if ((count _list) > 0) then {
		// Target found - find target that is the closest to the target pos.
		_target = _list select 0;
		{
			if ((getPosASL _x) vectorDistance _pos < (getPosASL _target) vectorDistance _pos) then {_target = _x};
		} forEach _list;
		
		if (T1AM_Debug_Mode) then {systemChat format ["%1 %2",_list,_target]};
	} else {
		// No targets found. Use guided mode - ie. use a static targetting object.
		_target = "Land_HelipadEmpty_F" createVehicleLocal [0,0,0];
		_target setPosASL _pos;
	};
	
} else {
	
	// Guided mode - use a static targetting object.
	_target = "Land_HelipadEmpty_F" createVehicleLocal [0,0,0];
	_target setPosASL _pos;
};

[_firedEHArray,_target,_projectile,_pos,_radius,_action,_fuse,_infoDummy,_doAirburst,_arrayEnemySides,_GPSZAdjust,_elevationMod,_unguidedCEP] spawn T1AM_Fnc_GuideProjectile;

DIAG_LOG "GUIDED - END";