// Begin the actual fire mission, ie. find the aim pos, tell the AI to aim/fire, etc.

params["_tubes","_rounds","_profile","_pos","_warheadType","_missionType","_sheafSize","_fuse","_assetType","_sheaf","_airburstHeight","_asset","_tubeType","_gunAngle","_prePlotted","_sender","_posDisplay","_tube","_isAnnouncementUnit","_GPSZAdjust","_posGPS","_sheafDir","_sheafDist","_waitingTime"];


// Set crew properties.
{
	_x setVariable ["T1AM_aiTarget", _x checkAIFeature "TARGET"];
	_x setVariable ["T1AM_aiAutoTarget", _x checkAIFeature "AUTOTARGET"];
	_x disableAI "TARGET";
	_x disableAI "AUTOTARGET";
	_x getVariable ["lambs_danger_DisableGroupAI", true];
} forEach crew _tube;

private _driver = driver _tube;
if (!isNull _driver) then {
	_driver setVariable ["T1AM_aiMove", _driver checkAIFeature "MOVE"];
	_driver disableAI "MOVE";
};


// Disable LAMBS Danger AI mod on this unit.
private _lambsRunning = configNull != (configFile >> "CfgPatches" >> "lambs_danger");
private _lambsDisableAI = false;
private _lambsDisableGroupAI = false;
if (_lambsRunning) then {
	{
		if (_x getVariable ["lambs_danger_DisableAI", false]) then {_lambsDisableAI = true};
		_x setVariable ["lambs_danger_DisableAI", true];
	} forEach crew _tube;
	_lambsDisableGroupAI = _asset getVariable ["lambs_danger_DisableGroupAI", false];
	_asset setVariable ["lambs_danger_DisableGroupAI", true];
};


// Make AI unstuck. Due to various bugs, the AI can sometimes get stuck.
// Giving them this command will get the AI unstuck.
_tube doArtilleryFire [_pos, _warheadType, 0];
sleep 0.15;
_tube doWatch objNull;	// Stop firing before the unit manages to fire.


// If there's a waitingTime set, wait that long, so that everyone starts at the same time.
private _mustWait = false;
private _mustWaitTime = 0;
if (_waitingTime > 0) then {
	_mustWait = true;
	_waitingTime = time + _waitingTime;
	_mustWaitTime = (_waitingTime - time) max 0;
	private _timeout = time + 130; // Safety check.
	waitUntil {sleep 3; (time > _waitingTime) or (time > _timeout)};
};

//DIAG_LOG format["SFM: %1 - POS BEFORE PRECISE CHECK: %2", _tube, _pos];

// If GPS guided, then use the displayed target pos instead of the randomized one.
if ((_warheadType in T1AM_GPSGuidedTypes) or {_warheadType in T1AM_GPSLaserTypes} or {_warheadType in T1AM_GPSSeekerTypes}) then {
	_pos = _posGPS;
};

//DIAG_LOG format["SFM: %1 - POS BEFORE GROUND CHECK: %2", _tube, _pos];

// Make sure the given target pos is on the ground and not in the air.
// This will make low angle shots a bit more accurate.
// If GPS guided, then use GPSZAdjust for the altitude.
private _posAGL = ASLtoAGL _pos;
if (_posAGL select 2 > 0.2) then {
	private _alt = 0.2;		// Slightly above the ground to avoid bugs.
	if ((_warheadType in T1AM_GPSGuidedTypes) or {_warheadType in T1AM_GPSLaserTypes} or {_warheadType in T1AM_GPSSeekerTypes}) then {
		_alt = _GPSZAdjust max 0.2;		// Minimum slightly above the ground to avoid bugs.
	};
	_pos = AGLtoASL [_posAGL select 0, _posAGL select 1, _alt];
};

//DIAG_LOG format["SFM: %1 - POS AFTER GROUND CHECK: %2", _tube, _pos];

// Create a temporary dummy object that can be used to store and send information between two threads.
// We cannot save the variables on the tube because it might overwrite the variables of a mission that is still in progress,
// ie. shells that are still in the air from the previous fire mission and the tube begins a new fire mission.
private _infoDummy = "Land_HelipadEmpty_F" createVehicle [0,0,0];
_infoDummy setPosASL [-10000,-10000,-10000];
private _infoDummyNetID = _infoDummy call BIS_fnc_netId;


//DIAG_LOG format["SFM | _tube: %1", _tube];
//DIAG_LOG format["SFM | typeOf: %1", typeOf _tube];
//DIAG_LOG format["SFM | _tubes: %1", _tubes];
//DIAG_LOG format["SFM | _rounds: %1", _rounds];
//DIAG_LOG format["SFM | _profile: %1", _profile];
//DIAG_LOG format["SFM | _pos: %1", _pos];
//DIAG_LOG format["SFM | _warheadType: %1", _warheadType];
//DIAG_LOG format["SFM | _missionType: %1", _missionType];
//DIAG_LOG format["SFM | _sheafSize: %1", _sheafSize];
//DIAG_LOG format["SFM | _fuse: %1", _fuse];
//DIAG_LOG format["SFM | _assetType: %1", _assetType];
//DIAG_LOG format["SFM | _sheaf: %1", _sheaf];
//DIAG_LOG format["SFM | _airburstHeight: %1", _airburstHeight];
//DIAG_LOG format["SFM | _asset: %1", _asset];
//DIAG_LOG format["SFM | _tubeType: %1", _tubeType];
//DIAG_LOG format["SFM | _gunAngle: %1", _gunAngle];
//DIAG_LOG format["SFM | _prePlotted: %1", _prePlotted];
//DIAG_LOG format["SFM | _sender: %1", _sender];
//DIAG_LOG format["SFM | _posDisplay: %1", _posDisplay];
//DIAG_LOG format["SFM | _infoDummyNetID: %1", _infoDummyNetID];
//DIAG_LOG format["SFM | _isAnnouncementUnit: %1", _isAnnouncementUnit];
//DIAG_LOG format["SFM | _GPSZAdjust: %1", _GPSZAdjust];
//DIAG_LOG format["SFM | _sheafDir: %1", _sheafDir];
//DIAG_LOG format["SFM | _sheafDist: %1", _sheafDist];


// Airburst stuff.
private _elevationMod = 0;
private _doAirburst = false;
if (_fuse == "AIRBURST" or {_fuse == "MIXED"}) then {
	
	// Airburst.
	
	_doAirburst = true;
	_infoDummy setVariable ["T1AM_doAirburst", true];	// Tell the guide script to do an airburst.
	
	// Set the target pos above the ground. This is also the airburst height.
	switch (_airburstHeight) do {
		case ("LOW"): {_elevationMod = 0.9};
		case ("MED"): {_elevationMod = 9};
		case ("HIGH"): {_elevationMod = 18};
	};
	
	_pos = [_pos select 0, _pos select 1, (_pos select 2) + _elevationMod];
	
	//DIAG_LOG format["SFM: %1 - POS BEFORE MIXED ALTERNATE: %2", _tube, _pos];
	
	if (_fuse == "MIXED") then {
		// Alternate the airburst for MIXED missions. Tell some units not to do an airburst.
		for [{_i = 0}, {_i < count _tubes}, {_i = _i + 1}] do {
			_unit = _tubes select _i;
			if (_unit == _tube) exitWith {
				if (_i mod 2 > 0) then {
					_doAirburst = false;
					_infoDummy setVariable ["T1AM_doAirburst", false];	// Tell the guide script NOT to do an airburst.
					_pos = [_pos select 0, _pos select 1, (_pos select 2) - _elevationMod];	// We're not airbursting, so try to hit the ground.
				};
			};
		};
	};
	
	//DIAG_LOG format["SFM: %1 - POS AFTER MIXED ALTERNATE: %2", _tube, _pos];
	
} else {
	// Not airburst.
	_infoDummy setVariable ["T1AM_doAirburst", false];	// Tell the guide script NOT to do an airburst.
};

//DIAG_LOG format["SFM: %1 - POS AFTER AIRBURST CHECK: %2", _tube, _pos];


private _x = _pos select 0;
private _y = _pos select 1;
private _z = _pos select 2;
private _distance = 0;
private _posTube = getPosASL _tube;
private _artyAlt = _posTube select 2;
private _alt = _z - _artyAlt;			// Altitude difference between firing position and target position
private _chosenTargetPos = [];

private _ETA = 0;
private _firstRound = true;
private _tellAboutAngle = true;
private _bestCharge = [];
private _chargesArrayLow = [];
private _chargesArrayHigh = [];
private _vel = 0;
private _unguidedCEP = 0;

private _isMK41 = if (_assetType == "MK41") then {true} else {false}; // Will use vanilla targeting.

// Break down firing profile
private _timeBetweenRounds = _profile select 0;
private _minimumRange = _profile select 1;
private _maximumRange = _profile select 2;
private _longRangeGuided = _profile select 3;		// Is this projectile handled a bit differently than usual?
private _regularMaxRange = _profile select 4;

// Check what the last firing pos was of the battery.
private _lastFiringPos = _asset getVariable ["T1AM_lastFiringPos", [-30000,-30000,0]];
private _lastGunAngle = _asset getVariable ["T1AM_lastGunAngle", "0"];

private _gunner = gunner _tube;
private _originalAimingSpeed = _gunner skill "aimingSpeed";
private _originalReloadSpeed = _gunner skill "ReloadSpeed";
_gunner setSkill ["ReloadSpeed", 1];
_gunner setSkill ["aimingSpeed", 1];

// Weapon stats.
private _turretPath = (assignedVehicleRole _gunner) select 1;
private _weapon = _tube currentWeaponTurret _turretPath;

// Set sheaf size, ie. how much random spread.
private _scatter = _sheafSize select 0;
private _scatter2 = _sheafSize select 1;
if (_scatter2 == 0) then {_scatter2 = _scatter};
if (_sheaf == "LINE") then {_scatter = 1};
if (_missionType == "SPOT") then {_scatter = 0; _sheaf = "POINT"};
if (_sheaf == "POINT") then {_scatter = 0};

_abortAdd = false;
if (_isAnnouncementUnit) then {_abortAdd = true};

// When using a sheaf, the announcement tube will start by firing one round into the center of the sheaf.
_fireCenterFirst = false;
if (_isAnnouncementUnit) then {
	_fireCenterFirst = true;
};

private _checkFire = false;			// Player command to cease fire.
private _endMission = false;		// End mission means the player called for the mission to be ended using the interface. It exits its own loop but does NOT send a message to the players.
private _abort = false;				// Abort means something bad and unusual happened to the tube, ie. dead or deleted. It exits its own loop and sends a message to the players.
private _outOfAmmo = false;			// Out of ammo means the tube ran out of the requested ammo. It exits its own loop and sends a message to the players.
private _impossibleShot = false;	// Impossible shot means the tube couldn't get a firing solution. It exits its own loop and sends a message to the players.
private _allOutOfAmmo = false;		// The announcement tube checks how many tubes are out of ammo. When all tubes that are doing the fire mission run out, the announcement tube exits its own loop, informs the players and stops the fire mission.
private _allImpossibleShot = false;	// Same as above, but it checks how many couldn't get a firing solution.
private _allAborted = false;		// Same as above, but it checks how many aborted (see _abort description) and it ends the fire mission entirely. It assumes the entire group got messed up somehow.


private _trackEH = -5893;
if (T1AM_DEBUG_ShowRounds) then {
	_trackEH = _tube addEventHandler ["fired",{
		_this spawn T1AM_Fnc_ProjectileTrack;
	}];
};


// Memorize the current firing pos of the battery's group.
if (_isAnnouncementUnit) then {
	[_asset, _pos, _gunAngle] spawn {
		params ["_asset", "_pos", "_gunAngle"];
		private _waitTime = time + 10;
		
		WaitUntil{sleep 0.1; (_asset getVariable ["T1AM_endMission", false]) or (_asset getVariable ["T1AM_CheckFire", false]) or (_waitTime < time)};
		
		_asset setVariable ["T1AM_lastFiringPos", _pos, true];
		_asset setVariable ["T1AM_lastGunAngle", _gunAngle, true];
	};
};


// For special projectiles. Eg. Laser-guided, guided, seeker, airburst, etc.
private _specialEH = -9583;
private _action = 0;	// 0 = non-special / 1 = GPS/Laser / 2 = GPS / 3 = GPS/Discriminating / 4 = Laser

switch true do {
	case (_isMK41) : {
		_sheaf = "POINT";
		_scatter = 0;
		_scatter2 = 0;
		_action = 2;
		//DIAG_LOG "SFM | ACTION _isMK41";
		
		_specialEH = _tube addEventHandler ["fired", compile format ["[_this,%1] spawn T1AM_Fnc_MK41Frag",_pos]];
	};
	
	case (_warheadType in T1AM_GPSLaserTypes) : {
		_sheaf = "POINT";
		_scatter = 0;
		_scatter2 = 0;
		_action = 1;
		//DIAG_LOG "SFM | ACTION T1AM_GPSLaserTypes";
		
		// We use BIS_fnc_netId on the infoDummy so that we can turn the object data type into a unique string,
		// then we can make it part of the code that we dynamically generate,
		// and then later on, inside the sqf file that is being run, we convert the string back to an object data type.
		_specialEH = _tube addEventHandler ["fired", compile format ["[_this,%1,%2,'%3','%4','%5',%6,%7,%8,%9] call T1AM_Fnc_SpecialFired",_action,_pos,_gunAngle,_fuse,_infoDummyNetID,_longRangeGuided,[],_GPSZAdjust,_elevationMod]];
	};
	
	case (_warheadType in T1AM_GPSGuidedTypes) : {
		_sheaf = "POINT";
		_scatter = 0;
		_scatter2 = 0;
		_action = 2;
		//DIAG_LOG "SFM | ACTION T1AM_GPSGuidedTypes";
		
		_specialEH = _tube addEventHandler ["fired", compile format ["[_this,%1,%2,'%3','%4','%5',%6,%7,%8,%9] call T1AM_Fnc_SpecialFired",_action,_pos,_gunAngle,_fuse,_infoDummyNetID,_longRangeGuided,[],_GPSZAdjust,_elevationMod]];
	};
	
	case (_warheadType in T1AM_GPSSeekerTypes) : {
		_sheaf = "POINT";
		_scatter = 0;
		_scatter2 = 0;
		_action = 3;
		//DIAG_LOG "SFM | ACTION T1AM_GPSSeekerTypes";
		
		private _arrayEnemySides = [];
		private _side = (side _sender);
		
		{
			if (_side getFriend (_x select 0) < 0.6) then {_arrayEnemySides pushback (_x select 1)};
		} forEach [[east, 0], [west, 1], [independent, 2]];
		
		_specialEH = _tube addEventHandler ["fired", compile format ["[_this,%1,%2,'%3','%4','%5',%6,%7,%8,%9] call T1AM_Fnc_SpecialFired",_action,_pos,_gunAngle,_fuse,_infoDummyNetID,_longRangeGuided,_arrayEnemySides,_GPSZAdjust,_elevationMod]];
	};
	
	case (_warheadType in T1AM_LaserTypes) : {
		_sheaf = "POINT";
		_scatter = 0;
		_scatter2 = 0;
		_action = 4;
		//DIAG_LOG "SFM | ACTION T1AM_LaserTypes";
		
		_specialEH = _tube addEventHandler ["fired", compile format ["[_this,%1,%2,'%3','%4','%5',%6,%7,%8,%9] call T1AM_Fnc_SpecialFired",_action,_pos,_gunAngle,_fuse,_infoDummyNetID,_longRangeGuided,[],_GPSZAdjust,_elevationMod]];
	};
};


//DIAG_LOG format["SFM: %1 - _action: %2", _tube, _action];


// More airburst stuff.
_airburstEH = -2938;
if (_fuse == "AIRBURST") then {
	_airburstEH = _tube addEventHandler ["fired",compile format ["[_this,%1,'%2',%3,'%4','%5',%6] spawn T1AM_Fnc_AirburstInit",_pos,_gunAngle,_action,_infoDummyNetID,_airburstHeight,_GPSZAdjust]];
};


// Used to unfreeze the gunner's aim after firing.
// Also used to check when a tube has fired its first round.
// Announcement unit gets a version that contains UpdateGuiTargetPos.
// It will update the target coordinates after impact for the observer's GUI.
private _fireEH = -39485;
if (_action != 1 and _action != 2 and _action != 3 and _isAnnouncementUnit) then {
	_fireEH = _tube addEventHandler ["fired",{
		private _tube = _this select 0;
		if (!(_tube getVariable ["T1AM_hasFired", false])) then {
			[_tube, _this select 6] spawn T1_Fnc_UpdateGuiTargetPos;
		};
		_tube setVariable ["T1AM_hasFired", true];
		//DIAG_LOG format["SFM: %1 | FIRE EH TRIGGERED", _this select 0];
		[_tube] spawn {
			sleep 0.5;
			(gunner (_this select 0)) setSkill ["aimingspeed",1];
		};
	}];
	
} else {
	
	// Give the version without UpdateGuiTargetPos.
	_fireEH = _tube addEventHandler ["fired",{
		private _tube = _this select 0;
		_tube setVariable ["T1AM_hasFired", true];
		//DIAG_LOG format["SFM: %1 | FIRE EH TRIGGERED", _this select 0];
		[_tube] spawn {
			sleep 0.5;
			(gunner (_this select 0)) setSkill ["aimingspeed",1];
		};
	}];
};


// Start main loop.
while {_rounds > 0} do {
	
	// End mission if player ends the mission.
	if (_asset getVariable ["T1AM_endMission", false]) exitWith {_endMission = true};
	if (_asset getVariable ["T1AM_CheckFire", false]) exitWith {_checkFire = true};
	
	// Abort if there's something wrong with the vehicle/gunner.
	_abort = [_tube, _gunner] call T1AM_Fnc_CheckAssetStatus;
	if (_tube getVariable ["T1AM_failedToFire", false]) then {_abort = true};
	
	if (_abort and !_isAnnouncementUnit) exitWith {};
	if (_abort and _isAnnouncementUnit and _abortAdd) then {
		_abortAdd = false;
		_amountAborted = (_asset getVariable ["T1AM_amountAborted", 0]) + 1;
		_asset setVariable ["T1AM_amountAborted", _amountAborted];
	};
	
	_tube setWeaponReloadingTime [_gunner, (currentMuzzle _gunner), 0];
	
	// Only run the next part if the tube can fire.
	if (_outOfAmmo and !_isAnnouncementUnit) exitWith {};
	if (_impossibleShot and !_isAnnouncementUnit) exitWith {};
	if (_asset getVariable ["T1AM_amountAborted", 0] >= count _tubes and _isAnnouncementUnit) exitWith {_allAborted = true};
	
	
	if (!_outOfAmmo and !_impossibleShot and !_abort) then {
		
		if (!_firstRound) then {
			[_tube, _warheadType, _assetType] call T1AM_Fnc_LoadMagazine;
		};
		
		//DIAG_LOG format["SFM: %1 - FIRING LOOP - _fireCenterFirst: %2", _tube, _fireCenterFirst];
		//DIAG_LOG format["SFM: %1 - FIRING LOOP - _scatter: %2", _tube, _scatter];
		//DIAG_LOG format["SFM: %1 - FIRING LOOP - _scatter2: %2", _tube, _scatter2];
		//DIAG_LOG format["SFM: %1 - FIRING LOOP - POS BEFORE SHEAF: %2", _tube, _pos];
		
		// Get appropriate sheaf.
		if (_scatter > 0) then {
			
			// Tube marked as fireCenterFirst will ignore the sheaf with the first shot it fires.
			if (!_fireCenterFirst) then {
				switch (_sheaf) do {
					case ("CIRCLE") : {_chosenTargetPos = [_tube,_asset,_pos,_scatter] call T1AM_Fnc_CircularSheaf};
					case ("BOX") : {_chosenTargetPos = [_tube,_asset,_pos,_scatter,_scatter2,_sheafDir] call T1AM_Fnc_BoxSheaf};
					case ("LINE") : {_chosenTargetPos = [_tube,_asset,_pos,_sheafDir,_sheafDist] call T1AM_Fnc_LineSheaf};
					
					default {_chosenTargetPos = _pos};
				};
				sleep 0.1;
				//DIAG_LOG format["SFM: %1 - FIRING LOOP - SHEAF NORMAL - _chosenTargetPos: %2 - _sheaf: %3", _tube, _chosenTargetPos, _sheaf];
				
			} else {
				
				// If marked as fireCenterFirst, make all next shots use the sheaf.
				_fireCenterFirst = false;
				_chosenTargetPos = _pos;
				//DIAG_LOG format["SFM: %1 - FIRING LOOP - SHEAF FIRECENTERFIRST - _chosenTargetPos: %2", _tube, _chosenTargetPos];
			};
			
		} else {
			
			_chosenTargetPos = _pos;
			//DIAG_LOG format["SFM: %1 - FIRING LOOP - NO SHEAF - _chosenTargetPos: %2", _tube, _chosenTargetPos];
		};
		
		//DIAG_LOG format["SFM: %1 - FIRING LOOP - CHOSENTARGETPOS AFTER SHEAF: %2", _tube, _chosenTargetPos];
		
		_posTube = getPosASL _tube;
		
		
		// Add some random spread, depending on distance, angle, and weapon type.
		// Does not apply to GPS guided projectiles.
		// Note: The large amount of ifs is by design. It is to make the number increase exponentially in a way that is somewhat similar to the real life spread.
		if (!T1AM_DEBUG_DisableRandomSpread and {_action != 1} and {_action != 2} and {_action != 3}) then {
			
			_distance = _posTube vectorDistance _chosenTargetPos;
			
			private _scatterSpread = [_distance, _maximumRange] call T1AM_Fnc_GetRandomSpread;
			
			if (_gunAngle == "LOW") then {_scatterSpread = _scatterSpread * 0.75};
			switch (_assetType) do {
				case ("MORTAR") : {_scatterSpread = _scatterSpread * 1.4};
				case ("ROCKET") : {_scatterSpread = _scatterSpread * 1.8};
				case ("RHS_BM21") : {_scatterSpread = 1}; // RHS BM21 has its own spread.
			};
			
			//DIAG_LOG format["SFM: %1 - FIRING LOOP - SPREAD AFTER IFS: %2", _tube, _scatterSpread];
			
			_scatterSpread = (_scatterSpread * 2) min 1000;
			
			_unguidedCEP = _scatterSpread * 0.6;
			
			_scatterSpread = _scatterSpread * ((random [0, 1, 2]) max 0.01);
			
			//DIAG_LOG format["SFM: %1 - FIRING LOOP - SPREAD AFTER CALC: %2", _tube, _scatterSpread];
			
			_chosenTargetPos = [objNull,objNull,_chosenTargetPos,_scatterSpread] call T1AM_Fnc_CircularSheaf;
			_tube setVariable ["T1AM_chosenTargetPos", _chosenTargetPos];
			sleep 0.1;
		
		} else {
			_unguidedCEP = 0.01;
		};
		
		//DIAG_LOG format["SFM: %1 - FIRING LOOP - CHOSENTARGETPOS AFTER RANDOM SPREAD: %2", _tube, _chosenTargetPos];
		
		
		if (T1AM_Debug_Mode) then {[_chosenTargetPos, 60, "ColorGreen"] spawn T1AM_Fnc_PlaceMarker};
		
		_artyAlt = _posTube select 2;
		_alt = (_chosenTargetPos select 2) - _artyAlt;		// Altitude difference
		private _vx = _posTube select 0;
		private _vy = _posTube select 1;
		
		// Get distance
		_x = _chosenTargetPos select 0;
		_y = _chosenTargetPos select 1;
		private _dx = _x - _vx;
		private _dy = _y - _vy;
		_distance = sqrt((_dx*_dx)+(_dy*_dy));
		
		//DIAG_LOG format["SFM: %1 - FIRING LOOP -- _longRangeGuided: %2", _tube, _longRangeGuided];
		//DIAG_LOG format["SFM: %1 - FIRING LOOP -- _distance: %2", _tube, _distance];
		//DIAG_LOG format["SFM: %1 - FIRING LOOP -- VECTORDISTANCE: %2", _tube, _chosenTargetPos vectorDistance (getPosASL _tube)];
		
		//DIAG_LOG format["SFM: %1 - CHARGES START", _tube];
		//DIAG_LOG format["SFM: %1 - CHARGES -- MODES: %2", _tube, (getArray (configfile >> "CfgWeapons" >> _weapon >> "modes"))];
		
		
		if (!_isMK41) then {
			if (!_longRangeGuided) then {
				private _array = [_weapon, _warheadType, _distance, _alt] call T1AM_Fnc_GetAllCharges;
				_chargesArrayLow = _array select 0;
				_chargesArrayHigh = _array select 1;
				_vel = _array select 2;
				
				//DIAG_LOG format["SFM: %1 - CHARGE NORMAL -- _chargesArrayLow: %2", _tube, _chargesArrayLow];
				//DIAG_LOG format["SFM: %1 - CHARGE NORMAL -- _chargesArrayHigh: %2", _tube, _chargesArrayHigh];
				
			} else {
				// If it's long range guided, then fake the distance to get the projectile into the air regardless.
				private _realDistance = _distance;
				_distance = _regularMaxRange;
				
				private _array = [_weapon, _warheadType, _distance, _alt] call T1AM_Fnc_GetAllCharges;
				_chargesArrayLow = _array select 0;
				_chargesArrayHigh = _array select 1;
				_vel = _array select 2;
				
				_distance = _realDistance;
				
				//DIAG_LOG format["SFM: %1 - CHARGE LONG RANGE GUIDED -- _chargesArrayLow: %2", _tube, _chargesArrayLow];
				//DIAG_LOG format["SFM: %1 - CHARGE LONG RANGE GUIDED -- _chargesArrayHigh: %2", _tube, _chargesArrayHigh];
			};
			
			// If no charge was chosen, we will assume it's an impossible shot, so exit out of this loop.
			if (count _chargesArrayLow == 0 and {count _chargesArrayHigh == 0}) then {
				_impossibleShot = true;
				_tube setVariable ["T1AM_impossibleShot", true];
				[_tube,"Unable to get a firing solution - impossible shot.","BEEP"] call T1AM_Fnc_SendComms;
				//DIAG_LOG format["SFM: %1 - ABORT - IMPOSSIBLE SHOT 1 - Check1: %2 - Check2: %3", _tube, count _chargesArrayLow, count _chargesArrayHigh];
			};
			
			// Vanilla targeting.
		} else {
			if (_distance >= _maximumRange) then {
				_impossibleShot = true;
				_tube setVariable ["T1AM_impossibleShot", true];
				[_tube,"Unable to get a firing solution - out of range.","BEEP"] call T1AM_Fnc_SendComms;
				//DIAG_LOG format["SFM: %1 - ABORT - OUT OF RANGE - Check1: %2 - Check2: %3", _tube, count _chargesArrayLow, count _chargesArrayHigh];
			};
		};
	};
	
	
	// Only run the next part if the tube can fire.
	if (_impossibleShot and !_isAnnouncementUnit) exitWith {};
	
	
	// Calculate how long to wait.
	private _sleepTime = [_tube, _asset, _assetType, _chosenTargetPos, _firstRound, _lastFiringPos, _gunAngle, _lastGunAngle, _prePlotted, _sheaf, _mustWait, _mustWaitTime, _timeBetweenRounds] call T1AM_Fnc_GetPrepTime;
	
	
	if (!_isMK41) then {
		// Figure out which angle the tube can aim with.
		private _array = [_tube, _asset, _gunner, _posTube, _chosenTargetPos, _gunAngle, _longRangeGuided, _chargesArrayLow, _chargesArrayHigh, _abort, _endMission, _checkFire] call T1AM_Fnc_findBestCharge;
		_bestCharge = _array select 0;
		_abort = _array select 1;
		_endMission = _array select 2;
		_checkFire = _array select 3;
		private _obstructed = _bestCharge select 4;
		
		if (!_abort and !_endMission and !_CheckFire) then {
			
			// If no angle was returned or the shot is obstructed, inform the player.
			if (_bestCharge select 0 == "" or _obstructed) then {
				_impossibleShot = true;
				_tube setVariable ["T1AM_impossibleShot", true];
				
				if (!_obstructed) then {
					[_tube,"Unable to get a firing solution - cannot get a valid angle.","BEEP"] call T1AM_Fnc_SendComms;
					//DIAG_LOG format["SFM: %1 - ABORT - IMPOSSIBLE SHOT 2 - Check1: %2", _tube, !_obstructed];
				} else {
					[_tube,"Unable to get a firing solution - shot obstructed.","BEEP"] call T1AM_Fnc_SendComms;
					//DIAG_LOG format["SFM: %1 - ABORT - IMPOSSIBLE SHOT 3 - Check1: %2", _tube, !_obstructed];
				};
				
			} else {
				
				if (_asset getVariable ["T1AM_endMission", false]) exitWith {};
				if (_asset getVariable ["T1AM_CheckFire", false]) exitWith {};
				
				// If the tube switched angles, inform the player.
				if (_bestCharge select 3 != _gunAngle) then {
					// Switch to new angle for the next shot.
					if (_gunAngle == "HIGH") then {_gunAngle = "LOW"} else {_gunAngle = "HIGH"};
					if (_tellAboutAngle) then {
						private _text = format["Cannot get firing solution with requested angle - will use %1 angle instead.", _bestCharge select 3];
						[_tube, _text,"BEEP"] call T1AM_Fnc_SendComms;
						_tellAboutAngle = false;	// Only tell the player once, to avoid spamming the chat.
					};
					//DIAG_LOG format["SFM: %1 - ABORT - IMPOSSIBLE SHOT 4 - SWITCHED ANGLE - Check1: %2 - Check2: %3", _tube, _bestCharge select 3, _gunAngle];
				};
			};
		};
		
	} else {
		_bestCharge = ["", "LOW", 99999];
	};
	
	
	// End mission if player has ended the mission.
	if (_asset getVariable ["T1AM_endMission", false]) exitWith {_endMission = true};
	if (_asset getVariable ["T1AM_CheckFire", false]) exitWith {_checkFire = true};
	
	if (_asset getVariable ["T1AM_amountAborted", 0] >= count _tubes and _isAnnouncementUnit) exitWith {_allAborted = true};
	
	// If everyone is out of ammo, exit out of this loop.
	if ({_x getVariable ["T1AM_outOfAmmo", false]} count _tubes >= count _tubes) exitWith {_allOutOfAmmo = true};
	
	
	// If everyone has an impossible shot, exit out of this loop.
	if ({_x getVariable ["T1AM_impossibleShot", false]} count _tubes >= count _tubes) exitWith {_allImpossibleShot = true};
	
	
	// ETA stuff.
	if (_firstRound and {!_outOfAmmo and !_impossibleShot and !_abort}) then {
		private _angle = _bestCharge select 1;
		_ETA = _bestCharge select 2;
		
		//DIAG_LOG format["SFM: %1 - CHOSEN CHARGE -- _angle: %2", _tube, _angle];
		//DIAG_LOG format["SFM: %1 - CHOSEN CHARGE -- _ETA: %2", _tube, _ETA];
		
		// When using the guided script, the ETA times need to change a bit.
		switch true do {
			case (_longRangeGuided): {
				_ETA = (_ETA/2) + ((_distance-(_regularMaxRange/2))/(_vel*0.4));
				//DIAG_LOG format["SFM: %1 - CHANGING ETA LONG RANGE GUIDED -- _ETA: %2", _tube, _ETA];
			};
			case (_isMK41): {
				private _ammo = getText(configfile >> "CfgMagazines" >> _warheadType >> "ammo");
				private _ammoMaxSpeed = (getNumber(configfile >> "CfgAmmo" >> _ammo >> "maxSpeed")) * 0.95;
				_ETA = (_distance / _ammoMaxSpeed) max 1;
			};
			default {
				if (_action == 1 or {_action == 2} or {_action == 3}) then {
					_ETA = _ETA * 1.05;
					//DIAG_LOG format["SFM: %1 - CHANGING ETA FOR ACTION 1,2,3 -- _ETA: %2", _tube, _ETA];
				};
			};
		};
		
		_ETA = round _ETA;
		_tube setVariable ["T1AM_ETA", _ETA];
		
		//DIAG_LOG format["SFM: %1 - T1AM_ETA: %2", _tube, _tube getVariable ["T1AM_ETA", 9999]];
	};
	
	
	// Make the tube wait until the previously calculated waiting time has expired.
	if (time < _sleepTime) then {sleep (_sleepTime - time)};
	
	
	// If this is the first round, mark the tube as ready to fire.
	// Before moving on, wait until the other tubes in the group are ready to fire.
	// Move on regardless after waiting for longer than 130 seconds.
	if (_firstRound) then {
		_tube setVariable ["T1AM_readyToFire", true];
		private _waitTime = time + 130;		// If it takes longer than this, then proceed on regardless.
		private _wait = true;
		
		while {_wait and {time < _waitTime}} do {
			_wait = false;
			{
				if (!(_x getVariable ["T1AM_readyToFire", true])) exitWith {_wait = true};
			} forEach _tubes;
			
			if (_asset getVariable ["T1AM_endMission", false]) exitWith {_endMission = true};
			if (_asset getVariable ["T1AM_CheckFire", false]) exitWith {_checkFire = true};
			
			if (_wait) then {
				sleep 2;
			} else {
				if (_isAnnouncementUnit) then {
					sleep 0.1;
				} else {
					sleep ((random 1.5) + (random 1.5));
				};
			};
		};
	};
	
	
	// End mission if player has ended the mission.
	if (_asset getVariable ["T1AM_endMission", false]) exitWith {_endMission = true};
	if (_asset getVariable ["T1AM_CheckFire", false]) exitWith {_checkFire = true};
	
	// If everyone is out of ammo, exit out of this loop.
	if ({_x getVariable ["T1AM_outOfAmmo", false]} count _tubes >= count _tubes) exitWith {_allOutOfAmmo = true};
	
	
	// If everyone has an impossible shot, exit out of this loop.
	if ({_x getVariable ["T1AM_impossibleShot", false]} count _tubes >= count _tubes) exitWith {_allImpossibleShot = true};
	
	
	// Abort if there's something wrong with the vehicle/gunner.
	_abort = [_tube, _gunner] call T1AM_Fnc_CheckAssetStatus;
	if (_tube getVariable ["T1AM_failedToFire", false]) then {_abort = true};
	if (_abort and !_isAnnouncementUnit) exitWith {};
	if (_abort and _isAnnouncementUnit and _abortAdd) then {
		_abortAdd = false;
		_amountAborted = (_asset getVariable ["T1AM_amountAborted", 0]) + 1;
		_asset setVariable ["T1AM_amountAborted", _amountAborted];
	};
	
	if (_asset getVariable ["T1AM_amountAborted", 0] >= count _tubes and _isAnnouncementUnit) exitWith {_allAborted = true};
	
	//DIAG_LOG format["SFM: %1 - FIRING LOOP - POS BEFORE AIRBURST IF: %2", _tube, _pos];
	
	if (!_outOfAmmo and !_impossibleShot and !_abort) then {
		
		// Used by guide script to decide how much to miss when there's no laser lock and no GPS.
		_infoDummy setVariable ["T1AM_unguidedCEP", _unguidedCEP];
		_infoDummy setVariable ["T1AM_unguidedPos", _chosenTargetPos];
		
		// Airburst stuff.
		// Must ensure that there's at least a 2 seconds pause somewhere above this part or things will go wrong when it loops and tries to do another shot.
		if (_fuse == "AIRBURST") then {
			_tube removeEventHandler ["fired", _airburstEH];
			_airburstEH = _tube addEventHandler ["fired",compile format ["[_this,%1,'%2',%3,'%4','%5',%6] spawn T1AM_Fnc_AirburstInit",_chosenTargetPos,_gunAngle,_action,_infoDummyNetID,_airburstHeight,_GPSZAdjust]];
			sleep 0.1;	// Must wait a bit after adding the eventhandler to make sure it works properly.
		};
		
		if (_fuse == "MIXED") then {
			if (_doAirburst) then {
				_infoDummy setVariable ["T1AM_doAirburst", true];	// Tell the guide script to do an airburst THIS time.
				_airburstEH = _tube addEventHandler ["fired",compile format ["[_this,%1,'%2',%3,'%4','%5',%6] spawn T1AM_Fnc_AirburstInit",_chosenTargetPos,_gunAngle,_action,_infoDummyNetID,_airburstHeight,_GPSZAdjust]];
				
				_pos = [_pos select 0, _pos select 1, (_pos select 2) - _elevationMod];	// Hit the ground NEXT time.
				_doAirburst = false;		// Don't do an airburst NEXT time.
				
			} else {
				
				_infoDummy setVariable ["T1AM_doAirburst", false];	// Tell the guide script NOT to do an airburst THIS time.
				_tube removeEventHandler ["fired", _airburstEH];
				_airburstEH = -99;
				
				_pos = [_pos select 0, _pos select 1, (_pos select 2) + _elevationMod];	// Hit the air NEXT time.
				_doAirburst = true;		// Do an airburst NEXT time.
			};
			sleep 0.1;	// Must wait a bit after adding/removing the eventhandler to make sure it works properly.
		};
		
		//DIAG_LOG format["SFM: %1 - FIRING LOOP - POS AFTER AIRBURST IF: %2", _tube, _pos];
		
		// If the right magazine is loaded and the magazine contains ammo, then go on and fire.
		if ((currentMagazine _tube) == _warheadType and _tube ammo (currentMuzzle _gunner) > 0) then {
			
			// Freeze the gunner to circumvent an aiming bug. The unfreeze eventhandler will unfreeze the gunner as soon as he fires.
			// Wait a bit to make sure the skill setting kicks in before we move on.
			_gunner setSkill ["aimingSpeed",0];
			
			_gunner selectWeapon _weapon;
			sleep 0.5;
			
			// Fire.
			if (!_isMK41) then {
				_tube setWeaponReloadingTime [_gunner,(currentMuzzle _gunner), 0];
				_tube fire [_tubeType, _bestCharge select 0];
				//DIAG_LOG format["SFM: %1 - FIRE COMMAND", _tube];
				if (_firstRound) then {[_tube,_asset] spawn T1AM_Fnc_FailedToFireCheck};
				
			// MK41 fire.
			} else {
				
				// Check for lasers at target pos. Lock on laser if there is one.
				private _nearest = 999999;
				private _target = nil;
				{
					private _distance = _x distance _chosenTargetPos;
					if (_distance < _nearest) then {
						_target = _x;
						_nearest = _distance;
					};
				} forEach (_chosenTargetPos nearEntities ["LaserTarget", 1000]);
				
				// No laser found. Create a dummy target. Pretend it's GPS guidance.
				private _dummyTarget = false;
				if (isNil "_target") then {
					_target = (createGroup sideLogic) createUnit ["module_f", [0,0,0], [], 0, "CAN_COLLIDE"];
					_target setPosASL _chosenTargetPos;
					_dummyTarget = true;
				};
				
				// Fire.
				(side _gunner) reportRemoteTarget [_target, _ETA * 1.3];
				_tube setWeaponReloadingTime [_gunner,(currentMuzzle _gunner), 0];
				_tube fireAtTarget [_target];
				//DIAG_LOG format["SFM: %1 - FIRE COMMAND MK41", _tube];
				
				if (_firstRound) then {[_tube,_asset] spawn T1AM_Fnc_FailedToFireCheck};
				
				if (_dummyTarget) then {
					[_target, _ETA] spawn {
						sleep ((_this select 1) * 1.3) max 10;
						deleteVehicle (_this select 0);
					};
				};
			};
			
			sleep 0.5;
		
		} else {
			
			// If the right magazine is not loaded or the magazine is empty,
			// then assume the tube is out of ammo, and mark it as such.
			_tube setVariable ["T1AM_outOfAmmo", true];
			//DIAG_LOG format["SFM: %1 - ABORT - WRONG MAG LOADED - CURMAG: %2 - _warheadType: %3", _tube, currentMagazine _tube, _warheadType];
			
			if (!_outOfAmmo) then {
				//DIAG_LOG format["SFM: %1 - ABORT - OUT OF AMMO - Check1: %2", _tube, !_outOfAmmo];
				_outOfAmmo = true;
				[_tube,"Out of ammo.","BEEP"] call T1AM_Fnc_SendComms;
			};
		};
	};
	
	
	// Only run the next part if the tube can fire.
	if (_outOfAmmo and !_isAnnouncementUnit) exitWith {};
	
	
	//DIAG_LOG format["SFM: %1 - FIRING LOOP END -- _firstRound: %2", _tube, _firstRound];
	//DIAG_LOG format["SFM: %1 - FIRING LOOP END -- _isAnnouncementUnit: %2", _tube, _isAnnouncementUnit];
	
	// Show first round message.
	if (_firstRound and _isAnnouncementUnit) then {
		
		if (_outOfAmmo and count _tubes == 1) exitWith {};
		
		[_tubes, _asset] spawn {
			params ["_tubes", "_asset"];
			private _lowestETA = 9999;
			private _abort = false;
			
			// Wait until somebody has fired or abort if mission is over for some reason.
			for [{_i = 0}, {_i < 60}, {_i = _i + 1}] do {
				if ({_x getVariable ["T1AM_hasFired", false]}count _tubes > 0) exitWith {};
				switch true do {
					case (_asset getVariable ["T1AM_endMission", false]) : {_abort = true};
					case (_asset getVariable ["T1AM_CheckFire", false]) : {_abort = true};
					case (_asset getVariable ["T1AM_amountAborted", 0] >= count _tubes) : {_abort = true};
				};
				if (_abort) exitWith {};
				sleep 1;
			};
			if (_abort) exitWith {};
			
			{
				if (_x getVariable ["T1AM_ETA", 9999] < _lowestETA) then {
					_lowestETA = _x getVariable ["T1AM_ETA", 9999];
				};
			} forEach _tubes;
			
			private _message = format ["Shot. ETA %1 seconds.", _lowestETA];
			
			[_asset,_message,"SHOT"] call T1AM_Fnc_SendComms;
			[_lowestETA,_asset] spawn T1AM_Fnc_Splash;
		};
	};
	_firstRound = false;
	
	
	_rounds = _rounds - 1;
};

//DIAG_LOG format["SFM: %1 - ENDING -- _endMission: %2", _tube, _endMission];
//DIAG_LOG format["SFM: %1 - ENDING -- _abort: %2", _tube, _abort];
//DIAG_LOG format["SFM: %1 - ENDING -- _outOfAmmo: %2", _tube, _outOfAmmo];
//DIAG_LOG format["SFM: %1 - ENDING -- _impossibleShot: %2", _tube, _impossibleShot];
//DIAG_LOG format["SFM: %1 - ENDING -- _allOutOfAmmo: %2", _tube, _allOutOfAmmo];
//DIAG_LOG format["SFM: %1 - ENDING -- _allImpossibleShot: %2", _tube, _allImpossibleShot];
//DIAG_LOG format["SFM: %1 - ENDING -- _allAborted: %2", _tube, _allAborted];
//DIAG_LOG format["SFM: %1 - ENDING -- _isAnnouncementUnit: %2", _tube, _isAnnouncementUnit];
//DIAG_LOG format["SFM: %1 - ENDING -- _asset: %2", _tube, _asset];


// Mark tube to indicate it is ending its mission.
_tube setVariable ["T1AM_concludingMission", true];


// Remove dummy object. We don't need it anymore.
// But keep it around for a few minutes because a projectile that needs it might still be in the air.
[_infoDummy] spawn {
	sleep 300;
	deleteVehicle (_this select 0);
};


// Remove unfreeze gunner and hasFired eventhandler.
[_tube, _fireEH] spawn {
	sleep 1.5;
	(_this select 0) removeEventHandler ["fired", (_this select 1)];
};


// Restore crew properties.
{
	if (_x getVariable ["T1AM_aiTarget", true]) then {_x enableAI "TARGET"};
	if (_x getVariable ["T1AM_aiAutoTarget", true]) then {_x enableAI "AUTOTARGET"};
} forEach (crew _tube);
_gunner setSkill ["aimingSpeed", _originalAimingSpeed];
_gunner setSkill ["ReloadSpeed", _originalReloadSpeed];
if (!isNull _driver) then {
	if (_driver getVariable ["T1AM_aiMove", true]) then {_driver enableAI "MOVE"};
};


// Re-enable LAMBS Danger AI mod on this unit.
if (_lambsRunning) then {
	if (!_lambsDisableAI) then {
		{
			_x setVariable ["lambs_danger_DisableAI", false];
		} forEach crew _tube;
	};
	if (!_lambsDisableGroupAI) then {
		_asset setVariable ["lambs_danger_DisableGroupAI", false];
	};
};


if (T1AM_DEBUG_ShowRounds) then {_tube removeEventHandler ["fired",_trackEH]};

// Remove the airburst EH
if ((_fuse == "AIRBURST") OR (_fuse == "MIXED")) then {
	sleep 2;
	_tube removeEventHandler ["fired",_airburstEH];
};

// Remove special eventhandler.
if (_action > 0) then {
	sleep 2;
	_tube removeEventHandler ["fired",_specialEH]
};


// Tell player if tube stopped firing because it aborted.
if (_abort and !_isAnnouncementUnit) exitWith {
	_amountAborted = (_asset getVariable ["T1AM_amountAborted", 0]) + 1;
	_asset setVariable ["T1AM_amountAborted", _amountAborted];
	sleep 2;
	private _txt = "";
	if (_amountAborted == 1) then {
		_txt = format["%1 unit is inoperable.", _amountAborted];
	} else {
		_txt = format["%1 units are inoperable.", _amountAborted];
	};
	
	[_asset,_txt,"BEEP"] call T1AM_Fnc_SendComms;
	//DIAG_LOG format["TUBE END - TUBES INOPERABLE: %2", _tube, _amountAborted];
};


if (_isAnnouncementUnit) then {
	// Wait until all tubes are done.
	private _timeout = time + 130;
	while {time < _timeout} do {
		if ({_x getVariable ["T1AM_concludingMission", false]} count _tubes >= count _tubes) exitWith {};
		sleep 2;
	};

	// Check if everyone is out of ammo.
	if ({_x getVariable ["T1AM_outOfAmmo", false]} count _tubes >= count _tubes) then {_allOutOfAmmo = true};
};


// If all tubes aborted, end the mission.
if (_allAborted and _isAnnouncementUnit) exitWith {
	sleep 5;
	T1AM_AssetsBusy = T1AM_AssetsBusy - [_asset];
	publicVariable "T1AM_AssetsBusy";
	sleep 3;
	[false] call T1AM_Fnc_EndMission;
	//DIAG_LOG format["SFM: %1 | FINAL ANNOUNCEMENT | ALL ABORTED | _asset: %2", _tube, _asset];
};


// Release the group from being busy (firing) and allow the controlling player to issue orders again.
if (_isAnnouncementUnit) then {
	
	sleep 1;
	
	//DIAG_LOG format["SFM: %1 - FINAL ANNOUNCEMENT - T1AM_AssetsBusy: %2", _tube, T1AM_AssetsBusy];
	//DIAG_LOG format["SFM: %1 - FINAL ANNOUNCEMENT - _asset: %2", _tube, _asset];
	
	T1AM_AssetsBusy = T1AM_AssetsBusy - [_asset];
	publicVariable "T1AM_AssetsBusy";
	
	//DIAG_LOG format["SFM: %1 - FINAL ANNOUNCEMENT - T1AM_AssetsBusy: %2", _tube, T1AM_AssetsBusy];
	
	if (!_endMission and !_checkFire) then {
		
		// Player hasn't requested to end the mission, so give him a message that the mission is over.
		// Spotting missions aren't included in the below code because they already provide a "shot" message elsewhere.
		sleep (1 + random 3);
		if (!_allImpossibleShot) then {
			if (_missionType == "FFE") then {
				if (!_allOutOfAmmo) then {
					// Ended mission with at least 1 tube still having ammo.
					[_asset,"Rounds complete.","ROUNDSCOMPLETE"] call T1AM_Fnc_SendComms;
					//DIAG_LOG format["TUBE END - NORMAL ENDING: %2", _tube, !_allOutOfAmmo];
				} else {
					// Ended mission because everyone ran out of the requested ammo.
					if ({_x getVariable ["T1AM_hasFired", false]}count _tubes > 0) then {
						[_asset,"Out of ammo on all units - Rounds complete.","ROUNDSCOMPLETE"] call T1AM_Fnc_SendComms;
					} else {
						// Nobody has fired.
						[_asset,"Requested ammo not available - Unable to fire.","ROUNDSCOMPLETE"] call T1AM_Fnc_SendComms;
					};
					//DIAG_LOG format["TUBE END - RAN OUT OF AMMO ENDING: %2", _tube, !_allOutOfAmmo];
				};
			};
			
		} else {
			// Everyone had an impossible shot.
			[_asset,"Holding fire, all units are reporting an impossible firing solution.","NEGATIVE"] call T1AM_Fnc_SendComms;
			//DIAG_LOG format["TUBE END - IMPOSSIBLE SHOT ENDING: %2", _tube, !_allImpossibleShot];
		};
	};
};

//DIAG_LOG format["SFM: %1 - END", _tube];