// This is a modification of a script by kylania
// Original: http://www.kylania.com/ex/?p=21

private ["_primaryTarget","_missile","_basicPosAGL","_posM","_posT","_missileSpeed","_fixedSpeed",
"_side","_primaryLocked","_seeker","_arrayEnemySides","_primaryTargetDummy","_radius","_infoDummy",
"_nr","_list","_pos","_distance","_airburstLaserGivePos","_airburstLaser","_firedEHArray",
"_ammoType","_submun","_submunType","_posMissile","_totalDistance","_mod","_basicPos","_action",
"_primaryTargetIsDummy","_laser","_getPrimaryTarget","_secondaryTarget","_travelTime","_homeMissile",
"_target","_GPSZAdjust","_elevationMod","_hasSeenLaser","_unguidedCEP","_unguidedCEPHalf"];


_firedEHArray = _this select 0;		// Eventhandler data.
_primaryTarget = _this select 1;	// Laser target for the missile.
_missile = _this select 2;			// The flying projectile.
_basicPos = _this select 3;			// Position where the projectile will impact.
_radius = _this select 4;			// Radius in which to look for lasers.
_action = _this select 5;			// 1 = laser -- 2 = guided -- 3 = discriminating/seeker.
_fuse = _this select 6;				// Not an empty string = airbursting enabled.
_infoDummy = _this select 7;		// Temporary dummy object used to send information to the airburst script.
_doAirburst = _this select 8;		// When doing a MIXED airburst, this will signal when it's not doing an airburst.
_arrayEnemySides = _this select 9;	// Contains the sides that are hostile to the spotter. Used to find enemy targets in seeker mode.
_GPSZAdjust = _this select 10;		// If a custom elevation has been set, adjust basic pos Z coordinate by this amount.
_elevationMod = _this select 11;	// Elevation difference used for airburst.
_unguidedCEP = _this select 12;		// CEP setting for when there's no lock and no GPS.

_unguidedCEPHalf = _unguidedCEP / 2;
_basicPosAGL = ASLtoAGL _basicPos;


//diag_log format ["GUIDEPROJ -- _firedEHArray: %1", _firedEHArray];
//diag_log format ["GUIDEPROJ -- _primaryTarget: %1", _primaryTarget];
//diag_log format ["GUIDEPROJ -- _missile: %1", _missile];
//diag_log format ["GUIDEPROJ -- _basicPos: %1", _basicPos];
//diag_log format ["GUIDEPROJ -- _radius: %1", _radius];
//diag_log format ["GUIDEPROJ -- _action: %1", _action];
//diag_log format ["GUIDEPROJ -- _fuse: %1", _fuse];
//diag_log format ["GUIDEPROJ -- _infoDummy: %1", _infoDummy];
//diag_log format ["GUIDEPROJ -- _arrayEnemySides: %1", _arrayEnemySides];
//diag_log format ["GUIDEPROJ -- _GPSZAdjust: %1", _GPSZAdjust];
//diag_log format ["GUIDEPROJ -- _elevationMod: %1", _elevationMod];
//diag_log format ["GUIDEPROJ -- _unguidedCEP: %1", _unguidedCEP];
//diag_log format ["GUIDEPROJ -- _basicPosAGL: %1", _basicPosAGL];


// Check if the projectile has submunition.
_ammoType = typeOf _missile;
_submunType = getText (configFile >> "CfgAmmo" >> _ammoType >> "submunitionAmmo");
if (_submunType != "") then {
	_submun = true;
} else {
	_submun = false;
};


// If we're laser guided and are airbursting, then we'll forego the submunition system.
// We'll remove the projectile before the triggerDistance
// and then we'll spawn a new projectile that we'll guide ourselves with this script.
_airburstLaser = false;
_airburstLaserGivePos = false;
_triggerDistance = -10000;
if (_doAirburst and {_fuse != ""} and {_action == 1 or {_action == 4}}) then {
	_submun = false;
	_airburstLaser = true;
	_triggerDistance = (getNumber (configFile >> "CfgAmmo" >> _ammoType >> "triggerDistance")) + 500;
};

//diag_log format ["GUIDEPROJ -- _submun: %1", _submun];
//diag_log format ["GUIDEPROJ -- _airburstLaser: %1", _airburstLaser];
//diag_log format ["GUIDEPROJ -- _triggerDistance: %1", _triggerDistance];

// If the primary target disappeared while this script was starting up, then create a dummy static target.
if (isNull _primarytarget) then {
	_primaryTarget = "Land_HelipadEmpty_F" createVehicleLocal [0,0,0];
	_primaryTarget setPosASL _basicPos;
};


// If the primary target is a target dummy, we'll need to remove it afterwards.
if (typeOf _primaryTarget == "Land_HelipadEmpty_F") then {
	_primaryTargetIsDummy = true;
	_primaryTargetDummy = _primaryTarget;
} else {
	_primaryTargetIsDummy = false;
};


_nr = 0;
_travelTime = 0;
_totalDistance = (getPosASL _missile) vectorDistance _basicPos;
_missileSpeed = (speed _missile) / 3.6;
_target = objNull;


// When the speed goes below a certain value, use a fixed speed number.
_fixedSpeed = false;


// Is there a laser lock at this moment or not?
if ((_action == 1 or {_action == 4}) and {typeOf _primaryTarget != "Land_HelipadEmpty_F"}) then {
	_laser = true;
	
	// If laser guided and no other guidance, then don't start guiding until there's a laser lock.
	_hasSeenLaser = true;
	
} else {
	
	_laser = false;
	_hasSeenLaser = false;
};




// Is there a seeker lock at this moment or not?
if (_action == 3 and {typeOf _primaryTarget != "Land_HelipadEmpty_F"}) then {
	_seeker = true;
} else {
	_seeker = false;
};


// Code can be used for laser dots.
_getPrimaryTarget = {
	if (typeName _primaryTarget == typename {}) then {call _primaryTarget} else {_primaryTarget};
};


// This will keep track of what the projectile locked on to last.
// Then, when it's about to impact, it will keep that lock, even if a better lock becomes available.
// true = primaryTarget / false = secondaryTarget
_primaryLocked = true;
_finalApproach = false;


// When the projectile has almost hit the target, this object will be used to give it some random spread.
_finalApproachTarget = "Land_HelipadEmpty_F" createVehicleLocal [0,0,0];
_finalApproachTarget setPosASL _basicPos;


// Secondary target used for trajectory when there's no lock.
_secondaryTarget = "Land_HelipadEmpty_F" createVehicleLocal [0,0,0];
_secondaryTarget setPosASL _basicPos;


while {alive _missile} do {
	
	// By default, guide projectile to target.
	// If laser guided, guide by laser. If the laser disappears, guide to last known position of laser.
	// If it's a seeker, it will automatically try to lock on to a suitable target. If no target, then it will go to the target pos.
	
	//diag_log format ["GUIDEPROJ LOOP1 -- _target: %1 -- TARGET POS: %2", _target, getPosASL _target];
	
	_target = _secondaryTarget;
	_distance = (getPosASL _missile) vectorDistance (getPosASL _target);
	_posMissile = getPosASL _missile;
	
	
	//diag_log format ["GUIDEPROJ LOOP1 -- _distance: %1", _distance];
	//diag_log format ["GUIDEPROJ LOOP1 -- _posMissile: %1", _posMissile];
	//diag_log format ["GUIDEPROJ LOOP1 -- _finalApproach: %1", _finalApproach];
	//diag_log format ["GUIDEPROJ LOOP1 -- _fixedSpeed: %1", _fixedSpeed];
	
	
	// When speed drops too much, set a fixed speed number.
	if (!_fixedSpeed) then {
		_missileSpeed = (speed _missile) / 3.6;
		if (_missileSpeed < 200) then {
			_missileSpeed = 200;
			_fixedSpeed = true;
		};
	};
	
	
	// When about to hit, don't switch targeting modes anymore and use a fixed speed number.
	if (!_finalApproach and {_distance < 350}) then {
		_finalApproach = true;
		_missileSpeed = 200;
		_fixedSpeed = true;
	};	
	
	
	// The projectile will only try to lock on when within this range.
	// Outside of that range, it will go for the chosen target pos.
	if (_distance < 2000) then {
		
		// Laser guided.
		if (_action == 1 or {_action == 4}) then {
			if (!_finalApproach or {_finalApproach and {_primaryLocked}}) then {
				if (_laser and {!(isNull (call _getPrimaryTarget))} and {(getPosASL _target) vectorDistance _basicPos < _radius}) then {
					_target = call _getPrimaryTarget;
					_secondaryTarget setPosASL (getPosASL _target);
					_primaryLocked = true;
					_hasSeenLaser = true;
					
				} else {
					
					if (!_finalApproach) then {
						// Lost the laser. Try to reacquire a laser lock.
						_laser = false;
						_primaryLocked = false;
						_list = _basicPosAGL nearEntities ["LaserTarget", _radius];
						if ((count _list) > 0) then {
							// Laser found - find laser that is the closest to the target pos.
							_primaryTarget = _list select 0;
							{
								if ((getPosASL _x) vectorDistance _basicPos < (getPosASL _primaryTarget) vectorDistance _basicPos) then {_primaryTarget = _x};
							} forEach _list;
							_target = call _getPrimaryTarget;
							_laser = true;
							_hasSeenLaser = true;	
							_primaryLocked = true;
						};
					};
				};
			};
		};
		
		
		// Seeker
		if (_action == 3) then {
			_nr = _nr + 1;
			
			if (!_finalApproach or {_finalApproach and {_primaryLocked}}) then {
				if (_seeker and {!(isNull (call _getPrimaryTarget))} and {(getPosASL _target) vectorDistance _basicPos < _radius}) then {
					_target = call _getPrimaryTarget;
					_primaryLocked = true;
					if (_finalApproach) then {_secondaryTarget setPosASL (getPosASL _target)};
					
				} else {
					
					if (!_finalApproach) then {
						// Lost the target, try to find another one.
						_seeker = false;
						_primaryLocked = false;
						
						// Wait a little before checking for a new target because this part of the script is somewhat intensive.
						if (_nr > 19) then {
							_nr = 0;
							
							_list = _basicPosAGL nearEntities ["Tank", _radius];
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
								
								_list = _basicPosAGL nearEntities ["LandVehicle", _radius];
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
									
									_list = _basicPosAGL nearEntities ["Air", _radius];
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
										
										_list = _basicPosAGL nearEntities ["Ship", _radius];
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
							
							if ((count _list) > 0) then {
								// Target found - find target that is the closest to the target pos.
								_primaryTarget = _list select 0;
								{
									if ((getPosASL _x) vectorDistance _basicPos < (getPosASL _primaryTarget) vectorDistance _basicPos) then {_primaryTarget = _x};
								} forEach _list;
								_target = call _getPrimaryTarget;
								_seeker = true;
								_primaryLocked = true;
							};
						};
					};
				};
			};
		};
	};
	
	
	// When the projectile is really close to the target, make it go unguided the last few moments.
	if (!alive _missile or {_distance < 18}) exitWith {};
	
	
	// Add some random spread when about to hit the target.
	if (_finalApproach) then {
		_pos = getPosASL _target;
		switch true do {
			
			// Laser lock. Needs to be a bit more accurate to be able to hit with this random spread method.
			case (_laser and _action == 1) : {
				_finalApproachTarget setPosASL [
					((_pos select 0) - 3) + (random [0, 3, 6]),
					((_pos select 1) - 3) + (random [0, 3, 6]),
					(_pos select 2)
				];
			};
			
			// A bit worse quality laser guidance.
			case (_laser and _action == 4) : {
				_finalApproachTarget setPosASL [
					((_pos select 0) - 6) + (random [0, 6, 12]),
					((_pos select 1) - 6) + (random [0, 6, 12]),
					(_pos select 2)
				];
			};
			
			// Laser type with no laser lock, no other guidance.
			case (_action == 4) : {
				_finalApproachTarget setPosASL [
					((_pos select 0) - _unguidedCEPHalf) + (random [0, _unguidedCEPHalf, _unguidedCEP]),
					((_pos select 1) - _unguidedCEPHalf) + (random [0, _unguidedCEPHalf, _unguidedCEP]),
					(_pos select 2)
				];
			};
			
			// A bit worse GPS guidance.
			case (_action == 2) : {
				_finalApproachTarget setPosASL [
					((_pos select 0) - 9) + (random [0, 9, 18]),
					((_pos select 1) - 9) + (random [0, 9, 18]),
					(_pos select 2)
				];
			};
			
			// GPS guidance, or discriminating lock.
			default {
				_finalApproachTarget setPosASL [
					((_pos select 0) - 6) + (random [0, 6, 12]),
					((_pos select 1) - 6) + (random [0, 6, 12]),
					(_pos select 2)
				];
			};
		};
		_target = _finalApproachTarget;
	};
	
	
	// When airbursting with laser guidance we will remove the old projectile before we reach the triggerDistance,
	// so that the laser system doesn't mess up the airburst. This script will instead guide the projectile.
	// The airburst script is waiting for us to spawn a dummy with the ammo type listed below.
	if (_airburstLaser and {_distance < _triggerDistance}) then {
		
		// If there's no laser lock and there's no other guidance mode,
		// then give the dummy projectile a boost to get it going.
		if (_action == 4 and !_hasSeenLaser) then {
			_posM = getPosASL _missile;
			_posT = getPosASL _target;
			_distance = _posM vectorDistance _posT;
			_travelTime = _distance / _missileSpeed;
		};
		
		//_missile setPosASL [-30000,-30000,5000];
		//[_missile]spawn{sleep 5; deleteVehicle (_this select 0)};
		deleteVehicle _missile;
		
		_missile = "Sh_155mm_AMOS" createVehicle _posMissile;
		_missile setPosASL _posMissile;
		_airburstLaserGivePos = true;
		_airburstLaser = false;
		//diag_log format ["GUIDEPROJ AIRBURST LASER - CREATING DUMMY: %1", _missile];
		
		// Give the airburst script some time to locate this new projectile.
		// The projectile will be invisible and suspended in the air until it gets a velocity assigned to it.
		sleep 2.5;
		
		// If there's no laser lock and there's no other guidance mode,
		// then give the dummy projectile a boost to get it going.
		if (_action == 4 and !_hasSeenLaser) then {
			_missile setDir ([_missile, _target] call BIS_fnc_DirTo);
			
			[
				_missile,
				((asin (((_posM select 2) - (_posT select 2)) / _distance)) * -1),
				0
			] call BIS_fnc_setPitchBank;
			
			_missile setVelocity [
				((_posT select 0) - (_posM select 0)) / _travelTime,
				((_posT select 1) - (_posM select 1)) / _travelTime,
				((_posT select 2) - (_posM select 2)) / _travelTime
			];
		};
	};
	
	// Tell the airburst system what target pos the laser guided projectile is using.
	if (_airburstLaserGivePos) then {
		_pos = getPosASL _target;
		//diag_log format ["GUIDEPROJ LOOP1 - GIVE AIRBURST POS BEFORE: %1", _pos];
		if (_laser) then {
			// If we have locked on to a laser, we need to adjust the elevation to get above the laser.
			_pos = [_pos select 0, _pos select 1, (_pos select 2) + _elevationMod];
		};
		
		//diag_log format ["GUIDEPROJ LOOP1 - GIVE AIRBURST POS AFTER: %1", _pos];
		_secondaryTarget setPosASL _pos;
		_target = _secondaryTarget;
		_infoDummy setVariable ["dta_posLaser", _pos];
	};
	
	
	// Don't change trajectory of laser guidance that has no lock and never had a lock on the laser.
	if (_action != 4 or {_action == 4 and _hasSeenLaser}) then {
		// Alter the direction, pitch and trajectory of the projectile
		_posM = getPosASL _missile;
		_posT = getPosASL _target;
		_distance = _posM vectorDistance _posT;
		_travelTime = _distance / _missileSpeed;
		
		_missile setDir ([_missile, _target] call BIS_fnc_DirTo);
		
		[
			_missile,
			((asin (((_posM select 2) - (_posT select 2)) / _distance)) * -1),
			0
		] call BIS_fnc_setPitchBank;
		
		_missile setVelocity [
			((_posT select 0) - (_posM select 0)) / _travelTime,
			((_posT select 1) - (_posM select 1)) / _travelTime,
			((_posT select 2) - (_posM select 2)) / _travelTime
		];
	};
	
	if (_finalApproach) then {sleep 0.10} else {sleep 0.15};
};

// Quit if it doesn't have submunition or is airbursting.
if (!_submun) exitWith {
	sleep 1;
	if (_primaryTargetIsDummy) then {deleteVehicle _primaryTargetDummy};
	deleteVehicle _secondaryTarget;
	deleteVehicle _finalApproachTarget;
	//diag_log format ["GUIDEPROJ - END1 - _hasSeenLaser: %1", _hasSeenLaser];
};



// Has submunition.

// Try to locate the submunition so that we can manipulate it.
_list = (ASLtoAGL _posMissile) nearObjects [_submunType, 250];

//diag_log format ["GUIDEPROJ INTERLUDE -- _list: %1", _list];

// Exit if no corresponding submunition objects found.
if ((count _list) < 1) exitWith {};

// Find the closest submunition object, we assume that must be the one that was spawned by the original projectile.
_missile = _list select 0;
{
	if ((getPosASL _x) vectorDistance _posMissile < (getPosASL _missile) vectorDistance _posMissile) then {_missile = _x};
} forEach _list;

//diag_log format ["GUIDEPROJ INTERLUDE -- _missile: %1", _missile];
//diag_log format ["GUIDEPROJ INTERLUDE -- typeOf _missile: %1", typeOf _missile];
//diag_log format ["GUIDEPROJ INTERLUDE -- alive _missile: %1", alive _missile];

// Something went wrong if the chosen projectile is not alive at this point, so abort.
if (!alive _missile) exitWith {};


if (!_doAirburst) then {
	
	private _unit = _firedEHArray select 0;
	private _weapon = _firedEHArray select 1;
	private _muzzle = _firedEHArray select 2;
	private _mode = _firedEHArray select 3;
	private _ammo = typeOf _missile;
	private _magazine = _firedEHArray select 5;
	private _projectile = _missile;
	private _gunner = _firedEHArray select 7;
	
	private _vehicle = vehicle _gunner;
	private _turret = ((assignedVehicleRole _gunner) select 1);
	
	[_unit,_weapon,_muzzle,_mode,_ammo,_magazine,_projectile,_vehicle,_gunner,_turret] call ace_frag_fnc_fired; 
};



// Run the loop again but this time with the submunition to guide the submunition onto the target.
// This loop is a little bit different.
while {alive _missile} do {
	
	// Guide projectile to target.
	// If there's a laser, guide by laser. If the laser disappears, guide to last known position of laser.
	
	//diag_log format ["GUIDEPROJ LOOP2 -- _target: %1 -- TARGET POS: %2", _target, getPosASL _target];
	
	_target = _secondaryTarget;
	_distance = (getPosASL _missile) vectorDistance (getPosASL _target);
	_posMissile = getPosASL _missile;
	
	//diag_log format ["GUIDEPROJ LOOP2 -- _distance: %1", _distance];
	//diag_log format ["GUIDEPROJ LOOP2 -- _posMissile: %1", _posMissile];
	//diag_log format ["GUIDEPROJ LOOP2 -- _finalApproach: %1", _finalApproach];
	//diag_log format ["GUIDEPROJ LOOP2 -- _fixedSpeed: %1", _fixedSpeed];
	
	
	// When speed drops too much, set a fixed speed number.
	if (!_fixedSpeed) then {
		_missileSpeed = (speed _missile) / 3.6;
		if (_missileSpeed < 200) then {
			_missileSpeed = 200;
			_fixedSpeed = true;
		};
	};
	
	
	// When about to hit, don't switch targeting modes anymore and use a fixed speed number.
	if (!_finalApproach and {_distance < 350}) then {
		_finalApproach = true;
		_missileSpeed = 200;
		_fixedSpeed = true;
	};
	
	
	// The projectile will only try to lock on when within this range.
	// Outside of that range, it will go for the chosen target pos.
	if (_distance < 2000) then {
		
		// Laser guided.
		if (_action == 1) then {
			if (!_finalApproach or {_finalApproach and {_primaryLocked}}) then {
				if (_laser and {!(isNull (call _getPrimaryTarget))} and {(getPosASL _target) vectorDistance _basicPos < _radius}) then {
					_target = call _getPrimaryTarget;
					_secondaryTarget setPosASL (getPosASL _target);
					_primaryLocked = true;
					_hasSeenLaser = true;
					
				} else {
					
					if (!_finalApproach) then {
						// Lost the laser. Try to reacquire a laser lock.
						_laser = false;
						_primaryLocked = false;
						_list = _basicPosAGL nearEntities ["LaserTarget", _radius];
						if ((count _list) > 0) then {
							// Laser found - find laser that is the closest to the target.
							_primaryTarget = _list select 0;
							{
								if ((getPosASL _x) vectorDistance _basicPos < (getPosASL _primaryTarget) vectorDistance _basicPos) then {_primaryTarget = _x};
							} forEach _list;
							_target = call _getPrimaryTarget;
							_laser = true;
							_primaryLocked = true;
							_hasSeenLaser = true;
						};
					};
				};
			};
		};
		
		
		// Seeker
		if (_action == 3) then {
			_nr = _nr + 1;
			
			if (!_finalApproach or {_finalApproach and {_primaryLocked}}) then {
				if (_seeker and {!(isNull (call _getPrimaryTarget))} and {(getPosASL _target) vectorDistance _basicPos < _radius}) then {
					_target = call _getPrimaryTarget;
					_primaryLocked = true;
					if (_finalApproach) then {_secondaryTarget setPosASL (getPosASL _target)};
					
				} else {
					
					if (!_finalApproach) then {
						// Lost the target, try to find another one.
						_seeker = false;
						_primaryLocked = false;
						
						// Wait a little before checking for a new target because this part of the script is somewhat intensive.
						if (_nr > 9) then {
							_nr = 0;
							
							_list = _basicPosAGL nearEntities ["Tank", _radius];
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
								
								_list = _basicPosAGL nearEntities ["LandVehicle", _radius];
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
									
									_list = _basicPosAGL nearEntities ["Air", _radius];
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
										
										_list = _basicPosAGL nearEntities ["Ship", _radius];
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
							
							if ((count _list) > 0) then {
								// Target found - find target that is the closest to the target pos.
								_primaryTarget = _list select 0;
								{
									if ((getPosASL _x) vectorDistance _basicPos < (getPosASL _primaryTarget) vectorDistance _basicPos) then {_primaryTarget = _x};
								} forEach _list;
								_target = call _getPrimaryTarget;
								_seeker = true;
								_primaryLocked = true;
							};
						};
					};
				};
			};
		};
	};
	
	
	// When the projectile is really close to the target, make it go unguided the last few moments.
	if (!alive _missile or {_distance < 18}) exitWith {};
	
	
	// Add some random spread when about to hit the target.
	if (_finalApproach) then {
		_pos = getPosASL _target;
		switch true do {
			
			// Laser lock. Needs to be a bit more accurate to be able to hit with this random spread method.
			case (_laser and _action == 1) : {
				_finalApproachTarget setPosASL [
					((_pos select 0) - 3) + (random [0, 3, 6]),
					((_pos select 1) - 3) + (random [0, 3, 6]),
					(_pos select 2)
				];
			};
			
			// Laser lock. Needs to be a bit more accurate to be able to hit with this random spread method.
			case (_laser and _action == 1) : {
				_finalApproachTarget setPosASL [
					((_pos select 0) - 3) + (random [0, 3, 6]),
					((_pos select 1) - 3) + (random [0, 3, 6]),
					(_pos select 2)
				];
			};
			
			// A bit worse quality laser guidance.
			case (_laser and _action == 4) : {
				_finalApproachTarget setPosASL [
					((_pos select 0) - 4.5) + (random [0, 4.5, 9]),
					((_pos select 1) - 4.5) + (random [0, 4.5, 9]),
					(_pos select 2)
				];
			};
			
			// No laser lock, no other guidance.
			case (_action == 4) : {
				_finalApproachTarget setPosASL [
					((_pos select 0) - _unguidedCEPHalf) + (random [0, _unguidedCEPHalf, _unguidedCEP]),
					((_pos select 1) - _unguidedCEPHalf) + (random [0, _unguidedCEPHalf, _unguidedCEP]),
					(_pos select 2)
				];
			};
			
			// GPS guidance, no lock.
			default {
				_finalApproachTarget setPosASL [
					((_pos select 0) - 5) + (random [0, 5, 10]),
					((_pos select 1) - 5) + (random [0, 5, 10]),
					(_pos select 2)
				];
			};
		};
		_target = _finalApproachTarget;
	};
	
	
	if (_action != 4 or {_action == 4 and _hasSeenLaser}) then {
		// Alter the direction, pitch and trajectory of the projectile
		_posM = getPosASL _missile;
		_posT = getPosASL _target;
		_distance = _posM vectorDistance _posT;
		_travelTime = _distance / _missileSpeed;
		
		_missile setDir ([_missile, _target] call BIS_fnc_DirTo);
		
		[
			_missile,
			((asin (((_posM select 2) - (_posT select 2)) / _distance)) * -1),
			0
		] call BIS_fnc_setPitchBank;
		
		_missile setVelocity [
			((_posT select 0) - (_posM select 0)) / _travelTime,
			((_posT select 1) - (_posM select 1)) / _travelTime,
			((_posT select 2) - (_posM select 2)) / _travelTime
		];
	};
	
	if (_finalApproach) then {sleep 0.10} else {sleep 0.15};
};

sleep 1;
if (_primaryTargetIsDummy) then {deleteVehicle _primaryTargetDummy};
deleteVehicle _secondaryTarget;
deleteVehicle _finalApproachTarget;
//diag_log "GUIDEPROJ - END2";