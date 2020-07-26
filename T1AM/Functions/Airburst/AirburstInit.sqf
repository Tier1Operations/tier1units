params ["_firedEHArray","_pos","_gunAngle","_action","_infoDummy","_airburstHeight","_GPSZAdjust"];

if (_airburstHeight != "MED" and _airburstHeight != "LOW" and _airburstHeight != "HIGH") exitWith {
	//DIAG_LOG format["AIRBURST | ABORT - NO AIRBURST HEIGHT | _tube: %1 | _airburstHeight: %2", _tube, _airburstHeight];
};

private _tube = _firedEHArray select 0;
private _weapon = _firedEHArray select 1;
private _muzzle = _firedEHArray select 2;
private _mode = _firedEHArray select 3;
private _ammoType = _firedEHArray select 4;
private _warheadType = _firedEHArray select 5;
private _projectile = _firedEHArray select 6;
private _gunner = _firedEHArray select 7;

// Convert NET ID to object data type.
_infoDummy = _infoDummy call BIS_fnc_objectFromNetId;

//DIAG_LOG format["AIRBURST | _tube: %1", _tube];
//DIAG_LOG format["AIRBURST | _projectile: %1", _projectile];
//DIAG_LOG format["AIRBURST | _airburstHeight: %1", _airburstHeight];
//DIAG_LOG format["AIRBURST | _pos: %1", _pos];
//DIAG_LOG format["AIRBURST | _gunAngle: %1", _gunAngle];
//DIAG_LOG format["AIRBURST | _action: %1", _action];
//DIAG_LOG format["AIRBURST | _infoDummy: %1", _infoDummy];
//DIAG_LOG format["AIRBURST | _GPSZAdjust: %1", _GPSZAdjust];

if (isNil "_action") then {_action = 0};	// Safety check. Not laser guided, nor seeker.

//DIAG_LOG format["AIRBURST | AFTER IF ISNIL _action: %1", _action];

// Check if the projectile has submunition.
private _laserMode = false;
private _submunType = getText (configFile >> "CfgAmmo" >> _ammoType >> "submunitionAmmo");
private _submun = false;
if (_submunType != "") then {
	_submun = true;
	// If we're laser guiding, then we'll be using a non-laser guided projectile that we'll guide using the guide script.
	// That guide script will spawn us the following dummy ammo type as if it's a submunition.
	if (_action == 1 or {_action == 4}) then {
		_submunType = "Sh_155mm_AMOS";
		_laserMode = true;
	};
};

//DIAG_LOG format["AIRBURST | _submunType: %1", _submunType];

private _fragAmount = 0;
private _effectiveRange = 0;
private _maxRange = 0;
private _airburstClass = "";
private _tubeType = [_tube] call T1AM_Fnc_TubeType;
switch (_tubeType) do {
	case "MortarL": {
		_fragAmount = 2;
		_effectiveRange = 40;
		_maxRange = 100;
		_airburstClass = "T1AM_Airburst_MortarL";
	};
	
	case "MortarM": {
		_fragAmount = 2;
		_effectiveRange = 60;
		_maxRange = 140;
		_airburstClass = "T1AM_Airburst_MortarM";
	};
	
	case "CannonL": {
		_fragAmount = 2;
		_effectiveRange = 65;
		_maxRange = 150;
		_airburstClass = "T1AM_Airburst_CannonL";
	};
	
	case "CannonM": {
		_fragAmount = 2;
		_effectiveRange = 75;
		_maxRange = 170;
		_airburstClass = "T1AM_Airburst_CannonM";
	};
	
	case "RocketL": {
		_fragAmount = 2;
		_effectiveRange = 80;
		_maxRange = 180;
		_airburstClass = "T1AM_Airburst_RocketL";
	};
	
	case "RocketM": {
		_fragAmount = 2;
		_effectiveRange = 100;
		_maxRange = 220;
		_airburstClass = "T1AM_Airburst_RocketM";
	};
	
	case "RocketH": {
		_fragAmount = 2;
		_effectiveRange = 130;
		_maxRange = 280;
		_airburstClass = "T1AM_Airburst_RocketH";
	};
};

//DIAG_LOG format["AIRBURST | _tubeType: %1", _tubeType];

private _posProj = [];	
if (!_submun) then {
	
	// No submunition.
	
	if (_gunAngle == "HIGH") then {
		
		// High angle shot
		// Wait until projectile starts descending.
		private _altitudeHighest = -100000;
		while {alive _projectile} do {
			
			private _altitude = (getPosASL _projectile) select 2;
			// Add 7 to avoid bug.
			if (_altitude + 7 < _altitudeHighest) exitWith {
				_posProj = getPosASL _projectile;
				//DIAG_LOG format["AIRBURST | NOSUB | HIGH | ALTITUDE LOOP | _posProj: %1", _posProj];
				//DIAG_LOG format["AIRBURST | NOSUB | HIGH | ALTITUDE LOOP | _altitude: %1", _altitude];
			};
			_altitudeHighest = _altitude;
			sleep 0.2;
		};
		
		while {true} do {
			sleep 0.05;
			if (_pos vectorDistance (getPosASL _projectile) < 1000 or !alive _projectile) exitWith {
				_posProj = getPosASL _projectile;
				//DIAG_LOG format["AIRBURST | NOSUB | HIGH | DISTANCE LOOP 1 | ALIVE PROJECTILE: %1", alive _projectile];
				//DIAG_LOG format["AIRBURST | NOSUB | HIGH | DISTANCE LOOP 1 | _posProj: %1", _posProj];
				//DIAG_LOG format["AIRBURST | NOSUB | HIGH | DISTANCE LOOP 1 | DISTANCE: %1", _pos vectorDistance _posProj];
			};
		};
		
		// Wait until projectile is very close to the ground.
		while {true} do {
			sleep 0.01;
			if ((ASLtoAGL (getPosASL _projectile)) select 2 < 60 or !alive _projectile) exitWith {
				_posProj = getPosASL _projectile;
				//DIAG_LOG format["AIRBURST | NOSUB | HIGH | DISTANCE LOOP 2 | ALIVE PROJECTILE: %1", alive _projectile];
				//DIAG_LOG format["AIRBURST | NOSUB | HIGH | DISTANCE LOOP 2 | _posProj: %1", _posProj];
				//DIAG_LOG format["AIRBURST | NOSUB | HIGH | DISTANCE LOOP 2 | DISTANCE: %1", _pos vectorDistance _posProj];
				//DIAG_LOG format["AIRBURST | NOSUB | HIGH | DISTANCE LOOP 2 | HEIGHT: %1", (ASLtoAGL _posProj) select 2];
			};
		};
		
	} else {
		
		// Low angle
		// Wait until projectile is closer to the target.
		while {true} do {
			sleep 0.05;
			if (_pos vectorDistance (getPosASL _projectile) < 1000 or !alive _projectile) exitWith {
				_posProj = getPosASL _projectile;
				//DIAG_LOG format["AIRBURST | NOSUB | LOW | DISTANCE LOOP 1 | ALIVE PROJECTILE: %1", alive _projectile];
				//DIAG_LOG format["AIRBURST | NOSUB | LOW | DISTANCE LOOP 1 | _posProj: %1", _posProj];
				//DIAG_LOG format["AIRBURST | NOSUB | LOW | DISTANCE LOOP 1 | DISTANCE: %1", _pos vectorDistance _posProj];
			};
		};
		
		// Wait until projectile is very close to the target.
		while {true} do {
			sleep 0.01;
			if (_pos vectorDistance (getPosASL _projectile) < 300 or !alive _projectile) exitWith {
				_posProj = getPosASL _projectile;
				//DIAG_LOG format["AIRBURST | NOSUB | LOW | DISTANCE LOOP 2 | ALIVE PROJECTILE: %1", alive _projectile];
				//DIAG_LOG format["AIRBURST | NOSUB | LOW | DISTANCE LOOP 2 | _posProj: %1", _posProj];
				//DIAG_LOG format["AIRBURST | NOSUB | LOW | DISTANCE LOOP 2 | DISTANCE: %1", _pos vectorDistance _posProj];
			};
		};
	};
	
} else {
	
	// Has submunition.
	
	// Wait until the projectile is gone, which is the moment when the submunition will be spawned.
	while {alive _projectile} do {
		_posProj = getPosASL _projectile;
		sleep 0.05;
	};
	
	//DIAG_LOG "AIRBURST | SUB | LOST ORIGINAL PROJECTILE, LOOKING FOR SPAWNED SUBMUNITION";
	
	// Try to locate the submunition so that we can manipulate it.
	private _list = (ASLtoAGL _posProj) nearObjects [_submunType, 300];
	
	//DIAG_LOG format["AIRBURST | SUB | _list: %1", _list];
	
	// Exit if no corresponding submunition objects found.
	if ((count _list) < 1) exitWith {
		//DIAG_LOG "AIRBURST | SUB | NO SUBMUNITION FOUND - EXITING";
	};
	
	// Find the closest submunition object, we assume that must be the one that was spawned by the original projectile.
	_projectile = _list select 0;
	{
		if ((getPosASL _x) vectorDistance _posProj < (getPosASL _projectile) vectorDistance _posProj) then {_projectile = _x};
	} forEach _list;
	
	//DIAG_LOG format["AIRBURST | SUB | _projectile: %1", _projectile];
	
	// Something went wrong if the chosen projectile is not alive at this point, so abort.
	if (!alive _projectile) exitWith {
		//DIAG_LOG "AIRBURST | SUB | SUBMUNITION NOT ALIVE - EXITING";
	};
	
	// Wait until projectile is closer to the target.
	while {true} do {
		sleep 0.05;
		if (_laserMode) then {_pos = _infoDummy getVariable ["T1AM_posLaser", _pos]};
		if (_pos vectorDistance (getPosASL _projectile) < 1000 or !alive _projectile) exitWith {
			_posProj = getPosASL _projectile;
			//DIAG_LOG format["AIRBURST | SUB | DISTANCE LOOP 1 | ALIVE PROJECTILE: %1", alive _projectile];
			//DIAG_LOG format["AIRBURST | SUB | DISTANCE LOOP 1 | _posProj: %1", _posProj];
			//DIAG_LOG format["AIRBURST | SUB | DISTANCE LOOP 1 | DISTANCE: %1", _pos vectorDistance _posProj];
			//DIAG_LOG format["AIRBURST | SUB | DISTANCE LOOP 1 | POS: %1", _pos];
			//DIAG_LOG format["AIRBURST | SUB | DISTANCE LOOP 1 | INFODUMMY POS: %1", _infoDummy getVariable ["T1AM_posLaser", []]];

		};
	};
	
	if (_gunAngle == "HIGH" and !_laserMode) then {
		
		// Wait until projectile is very close to the ground.
		while {true} do {
			sleep 0.01;
			if ((ASLtoAGL (getPosASL _projectile)) select 2 < 60 or !alive _projectile) exitWith {
				_posProj = getPosASL _projectile;
				//DIAG_LOG format["AIRBURST | SUB | DISTANCE LOOP HIGH NO LASER | ALIVE PROJECTILE: %1", alive _projectile];
				//DIAG_LOG format["AIRBURST | SUB | DISTANCE LOOP HIGH NO LASER | _posProj: %1", _posProj];
				//DIAG_LOG format["AIRBURST | SUB | DISTANCE LOOP HIGH NO LASER | DISTANCE: %1", _pos vectorDistance _posProj];
				//DIAG_LOG format["AIRBURST | SUB | DISTANCE LOOP HIGH NO LASER | HEIGHT: %1", (ASLtoAGL _posProj) select 2];
			};
		};
		
	} else {
		
		// Wait until projectile is very close to the target.
		while {true} do {
			sleep 0.01;
			if (_laserMode) then {_pos = _infoDummy getVariable ["T1AM_posLaser", _pos]};
			if (_pos vectorDistance (getPosASL _projectile) < 300 or !alive _projectile) exitWith {
				_posProj = getPosASL _projectile;
				//DIAG_LOG format["AIRBURST | SUB | DISTANCE LOOP 2 | ALIVE PROJECTILE: %1", alive _projectile];
				//DIAG_LOG format["AIRBURST | SUB | DISTANCE LOOP 2 | _posProj: %1", _posProj];
				//DIAG_LOG format["AIRBURST | SUB | DISTANCE LOOP 2 | DISTANCE: %1", _pos vectorDistance _posProj];
				//DIAG_LOG format["AIRBURST | SUB | DISTANCE LOOP 2 | POS: %1", _pos];
				//DIAG_LOG format["AIRBURST | SUB | DISTANCE LOOP 2 | INFODUMMY POS: %1", _infoDummy getVariable ["T1AM_posLaser", []]];
			};
		};
	};
};

//DIAG_LOG format["AIRBURST | NEAR END | ALIVE PROJECTILE: %1", alive _projectile];

if (!alive _projectile) exitWith {
	//DIAG_LOG "AIRBURST | NEAR END | PROJECTILE NOT ALIVE - EXITING";
};


// Airburst part.


// Move it first, so that after we delete, ACE will create fragments in the middle of nowhere.
// Before deleting it, we need to wait a bit to make sure ACE has realized that the projectile has moved.
_projectile setPosASL [-30000,-30000,10000];
[_projectile] spawn {sleep 10; deleteVehicle (_this select 0)};


// In the previous code we had to stop the projectile early on to avoid randomly crashing it into the ground (caused by lag or delayed script).
// Do a line check between the projectile and the target pos to simulate what would happen if the projectile would actually fly there.
// If obstructed, use the first obstructed position for the airburst pos.
private _lineIntersectsSurfaces = lineIntersectsSurfaces [_posProj, _pos, objNull, objNull, true, 1];

//DIAG_LOG format["AIRBURST | NEAR END | _pos: %1", _pos];
//DIAG_LOG format["AIRBURST | NEAR END | _lineIntersectsSurfaces: %1", _lineIntersectsSurfaces];

// Obstructed.
if (count _lineIntersectsSurfaces > 0) then {
	_pos = ((_lineIntersectsSurfaces select 0) select 0);
	//DIAG_LOG format["AIRBURST | NEAR END | POS LINEINTERSECTS: %1", _pos];
};

// If the ACE Frag mod is installed, then use that.
if (!isNil "ace_frag_fnc_fired") then {
	_projectile = _airburstClass createVehicle [0,0,0];
	_projectile setPosASL _pos;
	
	// ACE function expects the following variable names.
	private _unit = _tube;
	private _ammo = _airburstClass;
	private _magazine = _warheadType;
	private _vehicle = _tube;
	private _turret = ((assignedVehicleRole _gunner) select 1);
	
	[_unit,_weapon,_muzzle,_mode,_ammo,_magazine,_projectile,_vehicle,_gunner,_turret] call ace_frag_fnc_fired; 
	
	//DIAG_LOG _tube;
	//DIAG_LOG _weapon;
	//DIAG_LOG _muzzle;
	//DIAG_LOG _mode;
	//DIAG_LOG _airburstClass;
	//DIAG_LOG _warheadType;
	//DIAG_LOG _projectile;
	//DIAG_LOG _vehicle;
	//DIAG_LOG _gunner;
	//DIAG_LOG _turret;
	
	//DIAG_LOG "AIRBURST - ACE FRAG ACTIVATED";
	
} else {
	// If ACE Frag mod is not installed, then use the frag script that comes with this mod.
	[_pos,_airburstClass,_fragAmount,_effectiveRange,_maxRange] call T1AM_Fnc_AirburstFrag;
	//DIAG_LOG "AIRBURST | T1AM FRAG ACTIVATED";
};

//DIAG_LOG "AIRBURST | END";