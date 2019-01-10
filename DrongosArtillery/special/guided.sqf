private["_firedEHArray","_action","_GPSZAdjust","_unguidedCEP","_elevationMod","_pos","_fuse","_posAGL","_unit","_side","_projectile","_doAirburst","_longRangeGuided","_arrayEnemySides","_radius","_infoDummy","_list","_distanceCheck","_target","_startPos","_altitude","_altitudeHighest"];

disableSerialization;
_firedEHArray = _this select 0;
_pos = _this select 1;
_gunAngle = _this select 2;
_action = _this select 3;
_fuse = _this select 4;
_infoDummy = _this select 5;
_doAirburst = _this select 6;
_longRangeGuided = _this select 7;
_arrayEnemySides = _this select 8;
_GPSZAdjust = _this select 9;
_elevationMod = _this select 10;


_projectile = _firedEHArray select 6;


// For figuring out how much the round needs to miss when there's no laser lock and no other guidance.
_unguidedCEP = _infoDummy getVariable ["dta_unguidedCEP", 85];
if (_action == 4) then {
	_pos = _infoDummy getVariable ["dta_unguidedPos", _pos];
};


//diag_log format ["GUIDED -- _firedEHArray: %1", _firedEHArray];
//diag_log format ["GUIDED -- _pos: %1", _pos];
//diag_log format ["GUIDED -- _gunAngle: %1", _gunAngle];
//diag_log format ["GUIDED -- _action: %1", _action];
//diag_log format ["GUIDED -- _fuse: %1", _fuse];
//diag_log format ["GUIDED -- _infoDummy: %1", _infoDummy];
//diag_log format ["GUIDED -- _doAirburst: %1", _doAirburst];
//diag_log format ["GUIDED -- _longRangeGuided: %1", _longRangeGuided];
//diag_log format ["GUIDED -- _arrayEnemySides: %1", _arrayEnemySides];
//diag_log format ["GUIDED -- _GPSZAdjust: %1", _GPSZAdjust];
//diag_log format ["GUIDED -- _elevationMod: %1", _elevationMod];
//diag_log format ["GUIDED -- _projectile: %1", _projectile];
//diag_log format ["GUIDED -- _unguidedCEP: %1", _unguidedCEP];


// If not airbursting, set the target pos altitude close to the ground.
// Put it a bit above the ground to make it easier for the projectile to hit an object.
if (!_doAirburst and {_GPSZAdjust < 0.5}) then {
	_pos = AGLtoASL [_pos select 0, _pos select 1, 0.5];
};


_posAGL = ASLtoAGL _pos;


// Look for targets in this radius.
if (_action == 1 or {_action == 4}) then {_radius = 500} else {_radius = 300};

_distanceCheck = (((getPosASL _projectile) vectorDistance _pos) * 0.5) max 2000; // When low angle, let the projectile get a bit closer.


if (_gunAngle == "High") then {
	// High angle shot - Wait until the projectile starts descending.
	_altitudeHighest = -100000;
	
	while {alive _projectile} do {
		_altitude = (getPosASL _projectile) select 2;
		// Add 7 to avoid bug.
		if (_altitude + 7 < _altitudeHighest) exitWith {};
		_altitudeHighest = _altitude;
		sleep 0.2;
	};
} else {
	// Low angle shot - Wait until projectile moves away from the unit that fired.
	_startPos = getPosASL _projectile;
	waitUntil{sleep 0.025; _startPos vectorDistance (getPosASL _projectile) > 20 or {!alive _projectile}};
	
	// Wait until projectile is a bit closer to the target.
	waitUntil{sleep 0.025; _pos vectorDistance (getPosASL _projectile) < _distanceCheck or {!alive _projectile}};
};

// If not long range guided, then proceed with the if.
// If it's long range guided, we'll need to already start guiding it at this point to make sure it will hit the target,
// so skip this part.
if (!_longRangeGuided) then {
	// Wait until the distance to target is less than 1500.
	waitUntil{sleep 0.01; _pos vectorDistance (getPosASL _projectile) < 1500 or {!alive _projectile}};
};

if (!alive _projectile) exitWith {};

// Start guiding the projectile.
if (dtaDebug) then {hint "shell guiding";systemChat "shell guiding"};

// Laser or seeker
if (_action == 1 or {_action == 3}) then {
	
	if (_action == 1 or {_action == 4}) then {
		
		// Laser
		_list = _posAGL nearEntities ["LaserTarget", _radius];
		
	} else {
		
		// Seeker
		
		_list = _posAGL nearEntities ["Tank", _radius];
		_list2 = [];
		{
			_y = _x;
			_side = getNumber(configfile >> "CfgVehicles" >> (typeOf _y) >> "side");
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
				_side = getNumber(configfile >> "CfgVehicles" >> (typeOf _y) >> "side");
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
						_side = getNumber(configfile >> "CfgVehicles" >> (typeOf _y) >> "side");
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
							_side = getNumber(configfile >> "CfgVehicles" >> (typeOf _y) >> "side");
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
		
		if (dtaDebug) then {systemChat format ["%1 %2",_list,_target]};
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

nul = [_firedEHArray,_target,_projectile,_pos,_radius,_action,_fuse,_infoDummy,_doAirburst,_arrayEnemySides,_GPSZAdjust,_elevationMod,_unguidedCEP] execVM "DrongosArtillery\Special\GuideProjectile.sqf";
//diag_log "GUIDED - END";