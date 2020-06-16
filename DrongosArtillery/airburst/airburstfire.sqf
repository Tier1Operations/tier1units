private ["_tube","_projectile","_firedEHArray","_pos","_warheadType","_GPSZAdjust","_gunAngle",
"_infoDummy","_action","_posLaser","_laserMode","_ammoType","_posProj","_list",
"_lineIntersectsSurfaces","_submunType","_submun","_explosionSize","_shrapnelConcentration",
"_tubeType","_explosionShrapnel","_airburstHeight","_posProj","_airburstClass","_distance",
"_aceFragArray","_weapon","_muzzle","_mode","_gunner","_vehicle","_turret"];

disableSerialization;
_firedEHArray = _this select 0;
_pos = _this select 1;
_gunAngle = _this select 2;
_action = _this select 3;
_infoDummy = _this select 4;
_airburstHeight = _this select 5;
_GPSZAdjust = _this select 6;

_tube = _firedEHArray select 0;
_weapon = _firedEHArray select 1;
_muzzle = _firedEHArray select 2;
_mode = _firedEHArray select 3;
_ammoType = _firedEHArray select 4;
_warheadType = _firedEHArray select 5;
_projectile = _firedEHArray select 6;
_gunner = _firedEHArray select 7;

_vehicle = vehicle _gunner;
_turret = ((assignedVehicleRole _gunner) select 1);

// Convert NET ID to object data type.
_infoDummy = _infoDummy call BIS_fnc_objectFromNetId;

//DIAG_LOG format["AIRBURST -- _tube: %1", _tube];
//DIAG_LOG format["AIRBURST -- _projectile: %1", _projectile];
//DIAG_LOG format["AIRBURST -- _airburstHeight: %1", _airburstHeight];
//DIAG_LOG format["AIRBURST -- _pos: %1", _pos];
//DIAG_LOG format["AIRBURST -- _gunAngle: %1", _gunAngle];
//DIAG_LOG format["AIRBURST -- _action: %1", _action];
//DIAG_LOG format["AIRBURST -- _infoDummy: %1", _infoDummy];
//DIAG_LOG format["AIRBURST -- _GPSZAdjust: %1", _GPSZAdjust];

if (isNil "_action") then {_action = 0};	// Safety check. Not laser guided, nor seeker.

//DIAG_LOG format["AIRBURST -- AFTER IF ISNIL _action: %1", _action];

// Size of explosion EFFECT used (not actual lethality) 1 = Small, 2 = Large
_explosionSize = 0;
//SHRAPNEL CONCENTRATION
//0 = none, 1 = short range small amount, 2 = med range small amount, 3 = long range small amount
//4 = short range large amount, 5 = med range large amount, 6 = long range large amount
_shrapnelConcentration = 0;
// Maximum range for lethal shrapnel
_effectiveRange = 0;
// Maximum range for shrapnel
_maxRange = 0;
// Falloff of shrapnel lethality over range (1 = Linear, 3 = Standard, 5 = Drastic
_falloff = 0;


_tubeType = "UNKNOWN";
_tubeType = _tube call dta_fnc_TubeType;


// Check if the projectile has submunition.
_laserMode = false;
_submunType = getText (configFile >> "CfgAmmo" >> _ammoType >> "submunitionAmmo");
if (_submunType != "") then {
	_submun = true;
	
	// If we're laser guiding, then we'll be using a non-laser guided projectile that we'll guide using the guide script.
	// That guide script will spawn us the following dummy ammo type as if it's a submunition.
	if (_action == 1 or {_action == 4}) then {
		_submunType = "Sh_155mm_AMOS";
		_laserMode = true;
	};
	
} else {
	
	_submun = false;
};

//DIAG_LOG format["AIRBURST -- _submunType: %1", _submunType];


switch (_tubeType) do {
	case "82mmMortar": {
		_explosionSize = 1;
		_shrapnelConcentration = 4;
		_effectiveRange = 170;
		_maxRange = 200;
		_falloff = 2;
		_airburstClass = "DTA_Airburst_Mortar";
	};
	
	case "155mmHowitzer": {
		_explosionSize = 2;
		_shrapnelConcentration = 5;
		_effectiveRange = 220;
		_maxRange = 250;
		_falloff = 2;
		_airburstClass = "DTA_Airburst_Cannon";
	};
	
	// Note that 230mm does not have airburst in this system. This is just theoretical.
	case "230mmRockets": {
		_explosionSize = 2;
		_shrapnelConcentration = 6;
		_effectiveRange = 270;
		_maxRange = 300;
		_falloff = 2;
		_airburstClass = "DTA_Airburst_Rocket";
	};
	
	// For unrecognized pieces use 155mm
	default {
		_explosionSize = 2;
		_shrapnelConcentration = 5;
		_effectiveRange = 220;
		_maxRange = 250;
		_falloff = 2;
		_airburstClass = "DTA_Airburst_Cannon";
	};
};


// Only run airburst script if this fire mission is set to airburst (ie. explosion height above ground level). This is a safety measure.
if (_airburstHeight == "MED" or {_airburstHeight == "LOW"} or {_airburstHeight == "HIGH"}) then {
	
	if (!_submun) then {
		
		// No submunition.
		
		if (_gunAngle == "High") then {
			
			// High angle shot
			// Wait until projectile starts descending.
			_altitudeHighest = -100000;
			while {alive _projectile} do {
				_posProj = getPosASL _projectile;
				_altitude = _posProj select 2;
				//DIAG_LOG format["AIRBURST - NOSUB - HIGH - ALTITUDE LOOP - _posProj: %1", _posProj];
				//DIAG_LOG format["AIRBURST - NOSUB - HIGH - ALTITUDE LOOP - _altitude: %1", _altitude];
				// Add 7 to avoid bug.
				if (_altitude + 7 < _altitudeHighest) exitWith {};
				_altitudeHighest = _altitude;
				sleep 0.2;
			};
			
			waitUntil {
				sleep 0.05;
				_posProj = getPosASL _projectile;
				//DIAG_LOG format["AIRBURST - NOSUB - HIGH - DISTANCE LOOP 1 - ALIVE PROJECTILE: %1", alive _projectile];
				//DIAG_LOG format["AIRBURST - NOSUB - HIGH - DISTANCE LOOP 1 - _posProj: %1", _posProj];
				//DIAG_LOG format["AIRBURST - NOSUB - HIGH - DISTANCE LOOP 1 - DISTANCE: %1", _pos vectorDistance _posProj];
				_pos vectorDistance _posProj < 1000 or {!alive _projectile}
			};
			
			// Wait until projectile is very close to the ground.
			waitUntil {
				sleep 0.01;
				_posProj = getPosASL _projectile;
				//DIAG_LOG format["AIRBURST - NOSUB - HIGH - DISTANCE LOOP 2 - ALIVE PROJECTILE: %1", alive _projectile];
				//DIAG_LOG format["AIRBURST - NOSUB - HIGH - DISTANCE LOOP 2 - _posProj: %1", _posProj];
				//DIAG_LOG format["AIRBURST - NOSUB - HIGH - DISTANCE LOOP 2 - DISTANCE: %1", _pos vectorDistance _posProj];
				//DIAG_LOG format["AIRBURST - NOSUB - HIGH - DISTANCE LOOP 2 - HEIGHT: %1", (ASLtoAGL _posProj) select 2];
				(ASLtoAGL _posProj) select 2 < 60 or {!alive _projectile}
			};
			
		} else {
			
			// Low angle
			// Wait until projectile is closer to the target.
			waitUntil {
				sleep 0.05;
				_posProj = getPosASL _projectile;
				//DIAG_LOG format["AIRBURST - NOSUB - LOW - DISTANCE LOOP 1 - ALIVE PROJECTILE: %1", alive _projectile];
				//DIAG_LOG format["AIRBURST - NOSUB - LOW - DISTANCE LOOP 1 - _posProj: %1", _posProj];
				//DIAG_LOG format["AIRBURST - NOSUB - LOW - DISTANCE LOOP 1 - DISTANCE: %1", _pos vectorDistance _posProj];
				_pos vectorDistance _posProj < 1000 or {!alive _projectile}
			};
			
			// Wait until projectile is very close to the target.
			waitUntil {
				sleep 0.01;
				_posProj = getPosASL _projectile;
				//DIAG_LOG format["AIRBURST - NOSUB - LOW - DISTANCE LOOP 2 - ALIVE PROJECTILE: %1", alive _projectile];
				//DIAG_LOG format["AIRBURST - NOSUB - LOW - DISTANCE LOOP 2 - _posProj: %1", _posProj];
				//DIAG_LOG format["AIRBURST - NOSUB - LOW - DISTANCE LOOP 2 - DISTANCE: %1", _pos vectorDistance _posProj];
				_pos vectorDistance _posProj < 300 or {!alive _projectile}
			};
		};
		
	} else {
		
		// Has submunition.
		
		// Wait until the projectile is gone, which is the moment when the submunition will be spawned.
		while {alive _projectile} do {
			_posProj = getPosASL _projectile;
			sleep 0.05;
		};
		
		//DIAG_LOG "AIRBURST - SUB - LOST ORIGINAL PROJECTILE, LOOKING FOR SPAWNED SUBMUNITION";
		
		// Try to locate the submunition so that we can manipulate it.
		_list = (ASLtoAGL _posProj) nearObjects [_submunType, 300];
		
		//DIAG_LOG format["AIRBURST - SUB - _list: %1", _list];
		
		// Exit if no corresponding submunition objects found.
		if ((count _list) < 1) exitWith {
			//DIAG_LOG "AIRBURST - SUB - NO SUBMUNITION FOUND - EXITING";
		};
		
		// Find the closest submunition object, we assume that must be the one that was spawned by the original projectile.
		_projectile = _list select 0;
		{
			if ((getPosASL _x) vectorDistance _posProj < (getPosASL _projectile) vectorDistance _posProj) then {_projectile = _x};
		} forEach _list;
		
		//DIAG_LOG format["AIRBURST - SUB - _projectile: %1", _projectile];
		
		// Something went wrong if the chosen projectile is not alive at this point, so abort.
		if (!alive _projectile) exitWith {
			//DIAG_LOG "AIRBURST - SUB - SUBMUNITION NOT ALIVE - EXITING";
		};
		
		// Wait until projectile is closer to the target.
		waitUntil{
			sleep 0.05;
			if (_laserMode) then {_pos = _infoDummy getVariable ["dta_posLaser", _pos]};
			_posProj = getPosASL _projectile;
			//DIAG_LOG format["AIRBURST - SUB - DISTANCE LOOP 1 - ALIVE PROJECTILE: %1", alive _projectile];
			//DIAG_LOG format["AIRBURST - SUB - DISTANCE LOOP 1 - _posProj: %1", _posProj];
			//DIAG_LOG format["AIRBURST - SUB - DISTANCE LOOP 1 - DISTANCE: %1", _pos vectorDistance _posProj];
			//DIAG_LOG format["AIRBURST - SUB - DISTANCE LOOP 1 - POS: %1", _pos];
			//DIAG_LOG format["AIRBURST - SUB - DISTANCE LOOP 1 - INFODUMMY POS: %1", _infoDummy getVariable ["dta_posLaser", []]];
			_pos vectorDistance _posProj < 1000 or {!alive _projectile}
		};
		
		if (_gunAngle == "High" and !_laserMode) then {
			
			// Wait until projectile is very close to the ground.
			waitUntil {
				sleep 0.01;
				_posProj = getPosASL _projectile;
				//DIAG_LOG format["AIRBURST - SUB - DISTANCE LOOP HIGH NO LASER - ALIVE PROJECTILE: %1", alive _projectile];
				//DIAG_LOG format["AIRBURST - SUB - DISTANCE LOOP HIGH NO LASER - _posProj: %1", _posProj];
				//DIAG_LOG format["AIRBURST - SUB - DISTANCE LOOP HIGH NO LASER - DISTANCE: %1", _pos vectorDistance _posProj];
				//DIAG_LOG format["AIRBURST - SUB - DISTANCE LOOP HIGH NO LASER - HEIGHT: %1", (ASLtoAGL _posProj) select 2];
				(ASLtoAGL _posProj) select 2 < 60 or {!alive _projectile}
			};
			
		} else {
			
			// Wait until projectile is very close to the target.
			waitUntil{
				sleep 0.01;
				if (_laserMode) then {_pos = _infoDummy getVariable ["dta_posLaser", _pos]};
				_posProj = getPosASL _projectile;
				//DIAG_LOG format["AIRBURST - SUB - DISTANCE LOOP 2 - ALIVE PROJECTILE: %1", alive _projectile];
				//DIAG_LOG format["AIRBURST - SUB - DISTANCE LOOP 2 - _posProj: %1", _posProj];
				//DIAG_LOG format["AIRBURST - SUB - DISTANCE LOOP 2 - DISTANCE: %1", _pos vectorDistance _posProj];
				//DIAG_LOG format["AIRBURST - SUB - DISTANCE LOOP 2 - POS: %1", _pos];
				//DIAG_LOG format["AIRBURST - SUB - DISTANCE LOOP 2 - INFODUMMY POS: %1", _infoDummy getVariable ["dta_posLaser", []]];
				_pos vectorDistance _posProj < 300 or {!alive _projectile}
			};
		};
	};
	
	//DIAG_LOG format["AIRBURST - NEAR END -- ALIVE PROJECTILE: %1", alive _projectile];
	
	if (!alive _projectile) exitWith {
		//DIAG_LOG "AIRBURST - NEAR END - PROJECTILE NOT ALIVE - EXITING";
	};
	
	
	// Airburst part.
	
	
	// Move it first, so that after we delete, ACE will create fragments in the middle of nowhere.
	// Before deleting it, we need to wait a bit to make sure ACE has realized that the projectile has moved.
	_projectile setPosASL [-30000,-30000,10000];
	[_projectile] spawn {sleep 10; deleteVehicle (_this select 0)};
	
	
	// In the previous code we had to stop the projectile early on to avoid randomly crashing it into the ground (technical reasons).
	// Do a line check between the projectile and the target pos to simulate what would happen if the projectile would actually fly there.
	// If obstructed, use the first obstructed position for the airburst pos.
	_lineIntersectsSurfaces = lineIntersectsSurfaces [_posProj, _pos, objNull, objNull, true, 1];
	
	//DIAG_LOG format["AIRBURST - NEAR END -- _pos: %1", _pos];
	//DIAG_LOG format["AIRBURST - NEAR END -- _lineIntersectsSurfaces: %1", _lineIntersectsSurfaces];
	
	// Obstructed.
	if (count _lineIntersectsSurfaces > 0) then {
		_pos = ((_lineIntersectsSurfaces select 0) select 0);
		//DIAG_LOG format["AIRBURST - NEAR END -- POS LINEINTERSECTS: %1", _pos];
	};
	
	// If the ACE frag mod is installed, then use that instead because it works much better.
	//if (isClass (configFile >> "CfgAmmo" >> "ACE_frag_base")) then {
	if (!isNil "ace_frag_fnc_fired") then {
		_projectile = _airburstClass createVehicle [0,0,0];
		_projectile setPosASL _pos;
		
		// ACE function expects the following variable names.
		private _unit = _tube;
		private _ammo = _airburstClass;
		private _magazine = _warheadType;
		
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
		// If ACE not installed, then use the frag script that comes with this mod.
		[_pos,_explosionSize,_shrapnelConcentration,_effectiveRange,_maxRange,_fallOff] execVM "DrongosArtillery\Airburst\AirburstHit.sqf";
		//DIAG_LOG "AIRBURST - DTA FRAG ACTIVATED";
	};
	
	//DIAG_LOG "AIRBURST - END";
};