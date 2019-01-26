// Begin the actual fire mission, ie. find the aim pos, tell the AI to aim/fire, etc.


// Exit if the tube is not local.
if (!(local (_this select 19))) exitWith {};


private ["_tube","_rounds","_profile","_pos","_warheadType","_missionType","_sheafSize",
"_fuse","_assetType","_sheaf","_airburstHeight","_flightTime","_asset","_tubeType","_trackEH",
"_tube","_wvd","_x","_y","_z","_bestCharge","_bestETAHigh",
"_bestETALow","_flightTime","_timeBetweenRounds","_minimumRange","_maximumRange","_distance",
"_vx","_vy","_vx","_vy","_dx","_dy","_specialEH","_action","_airburstEH","_doAirburst",
"_scatter","_scatter2","_longRangeGuided","_tubesTemp","_selectedTube","_tubeIndex","_loaded",
"_magazineClass","_firstRound","_g","_alt","_distance","_highAngle","_highETA","_lowAngle",
"_lowETA","_angle","_ETA","_weapon","_warheadType","_modes","_ammoSpeed","_artyAlt",
"_gunAngle","_sleepTime","_dtaSelectedTube","_fireCenterFirst","_outOfAmmo","_infoDummyNetID",
"_arrayTRP","_closeToTRP","_tubes","_endMission","_modHigh","_realDistance","_modLow","_root",
"_switchedAmmoTime","_bestETA","_bestAngle","_vel","_c","_ha","_la","_hETA",
"_lETA","_wait","_posDisplay","_elevationMod","_check","_posTube",
"_horDegrees","_allAborted","_txt","_regularMaxRange","_abortAdd","_isAnnouncementUnit",
"_impossibleShot","_allImpossibleShot","_allOutOfAmmo","_verDegrees","_posAGL","_sender",
"_GPSZAdjust","_lastFiringPos","_chosenTargetPos","_lastGunAngle","_prePlotted",
"_switchedAmmo","_infoDummy","_scatterSpread","_unguidedCEP","_chargesArrayLow",
"_chargesArrayHigh","_findBestCharge","_driver","_posGPS","_sheafLineDir","_sheafLineDist", "_checkFire"];

_tubes = _this select 0;
_rounds = _this select 1;
_profile = _this select 2;
_pos = _this select 3;
_warheadType = _this select 4;
_missionType = _this select 5;
_sheafSize = _this select 6;
_fuse = _this select 7;
_assetType = _this select 8;
_sheaf = _this select 9;
_airburstHeight = _this select 10;
_flightTime = _this select 11;
_asset = _this select 12;
_tubeType = _this select 13;
_gunAngle = _this select 14;
_dtaSelectedTube = _this select 15;
_prePlotted = _this select 16;
_sender = _this select 17;
_posDisplay = _this select 18;
_tube = _this select 19;
_isAnnouncementUnit = _this select 20;
_GPSZAdjust = _this select 21;
_posGPS = _this select 22;
_sheafLineDir = _this select 23;
_sheafLineDist = _this select 24;


// Set crew properties.
_gunner = gunner _tube;
_originalAimingSpeed = _gunner skill "aimingSpeed";
_originalReloadSpeed = _gunner skill "ReloadSpeed";
_gunner setSkill ["ReloadSpeed", 1];
_gunner setSkill ["aimingSpeed", 1];

{
	_x disableAI "TARGET";
	_x disableAI "AUTOTARGET";
} forEach (crew _tube);
_driver = driver _tube;
if (!isNull _driver) then {_driver disableAI "MOVE"};


// Need to wait after changing ammo to avoid aiming bug.
_ammoTimeout = _tube getVariable ["DTA_ammoTimeout", 0];
if (time < _ammoTimeout) then {
	_switchedAmmo = true;
	_switchedAmmoTime = (_ammoTimeOut - time) max 0;
	_timeout = time + 18;
	waitUntil {sleep 0.5; (time > _ammoTimeout) or {time > _timeout}};
} else {
	_switchedAmmo = false;
};


_trackEH = -9685;
if (dtaTrackRounds) then {_trackEH = _tube addEventHandler ["fired",{nul = _this execVM "DrongosArtillery\Test\Fired.sqf"}]};

//diag_log format["TUBE: %1 - POS BEFORE PRECISE CHECK: %2", _tube, _pos];

// If GPS guided, then use the displayed target pos instead of the randomized one.
if ((_warheadType in dtaGPSGuidedTypes) or {_warheadType in dtaGPSLaserTypes} or {_warheadType in dtaGPSSeekerTypes}) then {
	_pos = _posGPS;
};

//diag_log format["TUBE: %1 - POS BEFORE GROUND CHECK: %2", _tube, _pos];

// Make sure the given target pos is on the ground and not in the air.
// This will make low angle shots a bit more accurate.
// If GPS guided, then use GPSZAdjust for the altitude.
_posAGL = ASLtoAGL _pos;
if (_posAGL select 2 > 0.1) then {
	private _alt = 0.1;		// Slightly above the ground to avoid bugs.
	if ((_warheadType in dtaGPSGuidedTypes) or {_warheadType in dtaGPSLaserTypes} or {_warheadType in dtaGPSSeekerTypes}) then {
		_alt = _GPSZAdjust max 0.1;		// Minimum slightly above the ground to avoid bugs.
	};
	_pos = AGLtoASL [_posAGL select 0, _posAGL select 1, _alt];
};

//diag_log format["TUBE: %1 - POS AFTER GROUND CHECK: %2", _tube, _pos];

// Create a temporary dummy object that can be used to store and send information between two threads.
// We cannot save the variables on the tube because it might overwrite the variables of a mission that is still in progress,
// ie. shells that are still in the air from the previous fire mission and the tube begins a new fire mission.
_infoDummy = "Land_HelipadEmpty_F" createVehicle [0,0,0];
_infoDummy setPosASL [-10000,-10000,-10000];
_infoDummyNetID = _infoDummy call BIS_fnc_netId;


//diag_log format["TUBE: %1 -- _tube: %1", _tube];
//diag_log format["TUBE: %1 -- typeOf: %1", typeOf _tube];
//diag_log format["TUBE: %1 -- _tubes: %1", _tubes];
//diag_log format["TUBE: %1 -- _rounds: %1", _rounds];
//diag_log format["TUBE: %1 -- _profile: %1", _profile];
//diag_log format["TUBE: %1 -- _pos: %1", _pos];
//diag_log format["TUBE: %1 -- _warheadType: %1", _warheadType];
//diag_log format["TUBE: %1 -- _missionType: %1", _missionType];
//diag_log format["TUBE: %1 -- _sheafSize: %1", _sheafSize];
//diag_log format["TUBE: %1 -- _fuse: %1", _fuse];
//diag_log format["TUBE: %1 -- _assetType: %1", _assetType];
//diag_log format["TUBE: %1 -- _sheaf: %1", _sheaf];
//diag_log format["TUBE: %1 -- _airburstHeight: %1", _airburstHeight];
//diag_log format["TUBE: %1 -- _flightTime: %1", _flightTime];
//diag_log format["TUBE: %1 -- _asset: %1", _asset];
//diag_log format["TUBE: %1 -- _tubeType: %1", _tubeType];
//diag_log format["TUBE: %1 -- _gunAngle: %1", _gunAngle];
//diag_log format["TUBE: %1 -- _dtaSelectedTube: %1", _dtaSelectedTube];
//diag_log format["TUBE: %1 -- _prePlotted: %1", _prePlotted];
//diag_log format["TUBE: %1 -- _sender: %1", _sender];
//diag_log format["TUBE: %1 -- _posDisplay: %1", _posDisplay];
//diag_log format["TUBE: %1 -- _infoDummyNetID: %1", _infoDummyNetID];
//diag_log format["TUBE: %1 -- _isAnnouncementUnit: %1", _isAnnouncementUnit];
//diag_log format["TUBE: %1 -- _GPSZAdjust: %1", _GPSZAdjust];
//diag_log format["TUBE: %1 -- _sheafLineDir: %1", _sheafLineDir];
//diag_log format["TUBE: %1 -- _sheafLineDist: %1", _sheafLineDist];


// Airburst stuff.
if (_fuse == "AIRBURST" or {_fuse == "MIXED"}) then {
	
	// Airburst.
	
	_doAirburst = true;
	_infoDummy setVariable ["dta_doAirburst", true];	// Tell the guide script to do an airburst.
	
	// Set the target pos above the ground. This is also the airburst height.
	switch true do {
		case (_airburstHeight == "LOW"): {_elevationMod = 0.9};
		case (_airburstHeight == "MED"): {_elevationMod = 9};
		case (_airburstHeight == "HIGH"): {_elevationMod = 18};
	};
	
	_pos = [_pos select 0, _pos select 1, (_pos select 2) + _elevationMod];
	
} else {
	
	// Not airburst.
	
	_elevationMod = 0;
	_doAirburst = false;
	_infoDummy setVariable ["dta_doAirburst", false];	// Tell the guide script NOT to do an airburst.
};

//diag_log format["TUBE: %1 - POS AFTER AIRBURST CHECK: %2", _tube, _pos];

_x = _pos select 0;
_y = _pos select 1;
_z = _pos select 2;


// Check what the last firing pos was of the battery.
_lastFiringPos = _asset getVariable ["DTA_lastFiringPos", [-30000,-30000,0]];
_lastGunAngle = _asset getVariable ["DTA_lastGunAngle", "0"];


// Memorize the current firing pos of the battery's group.
if (_isAnnouncementUnit) then {
	[_asset, _pos, _gunAngle] spawn {
		private ["_group","_pos","_gunAngle","_waitTime"];
		_group = _this select 0;
		_pos = _this select 1;
		_gunAngle = _this select 2;
		_waitTime = time + 10;
		
		WaitUntil{sleep 0.1; (_group getVariable ["DTA_endMission", false]) or (_group getVariable ["DTA_CheckFire", false]) or (_waitTime < time)};
		
		_group setVariable ["DTA_lastFiringPos", _pos, true];
		_group setVariable ["DTA_lastGunAngle", _gunAngle, true];
	};
};


// Break down firing profile
_timeBetweenRounds = _profile select 0;
_minimumRange = _profile select 1;
_maximumRange = _profile select 2;
_longRangeGuided = _profile select 3;		// Is this projectile handled a bit differently than usual?
_regularMaxRange = _profile select 4;


_highAngle = 0;
_highETA = 0;
_lowAngle = 0;
_lowETA = 0;
_angle = 0;
_ETA = 0;
_dx = 0;
_dy = 0;
_distance = 0;
_tellAboutAngle = true;

if (_isAnnouncementUnit) then {
	_abortAdd = true;
} else {
	_abortAdd = false;
};


// Gravity. Increase to make rounds go farther. Decrease to make rounds go shorter.
if (_gunAngle == "high") then {_g = 9.79} else {_g = 9.77};

_posTube = getPosASL _tube;
_artyAlt = _posTube select 2;
_alt = _z - _artyAlt;			// Altitude difference between firing position and target position
_vx = _posTube select 0;
_vy = _posTube select 1;


// Weapon stats.
_turretPath = (assignedVehicleRole _gunner) select 1;
_tube currentWeaponTurret _turretPath;
_weapon = _tube currentWeaponTurret _turretPath;


// Check if barrel is on target
_tubeDir = 0;
_relative = 0;
_difference = 999;


// Set sheaf size, ie. how much random spread.
_scatter = 0;
_scatter2 = 0;
_scatter = _sheafSize select 0;
_scatter2 = _sheafSize select 1;
if (_scatter2 == 0) then {_scatter2 = _scatter};
if (_sheaf == "LINE") then {_scatter = 1};
if (_missionType == "SPOT") then {_scatter = 0; _sheaf = "POINT"};
if (_sheaf == "POINT") then {_scatter = 0};


// SPECIAL EFFECTS: Laser-guided, guided, seeker, airburst, etc).
_specialEH = -999;
_action = 0;	// 0 = non-special / 1 = GPS/Laser / 2 = GPS / 3 = GPS/Discriminating / 4 = Laser

switch true do {
	case (_warheadType in dtaGPSLaserTypes) : {
		_sheaf = "POINT";
		_scatter = 0;
		_scatter2 = 0;
		_action = 1;
		
		// We use BIS_fnc_netId on the infoDummy so that we can turn the object data type into a unique string,
		// then we can make it part of the code that we dynamically generate,
		// and then later on, inside the sqf file that is being run, we convert the string back to an object data type.
		_specialEH = _tube addEventHandler ["fired", compile format ["[_this,%1,%2,'%3','%4','%5',%6,%7,%8,%9] execVM 'DrongosArtillery\Special\Fired.sqf'",_action,_pos,_gunAngle,_fuse,_infoDummyNetID,_longRangeGuided,[],_GPSZAdjust,_elevationMod]];
	};

	case (_warheadType in dtaGPSGuidedTypes) : {
		_sheaf = "POINT";
		_scatter = 0;
		_scatter2 = 0;
		_action = 2;
		_specialEH = _tube addEventHandler ["fired", compile format ["[_this,%1,%2,'%3','%4','%5',%6,%7,%8,%9] execVM 'DrongosArtillery\Special\Fired.sqf'",_action,_pos,_gunAngle,_fuse,_infoDummyNetID,_longRangeGuided,[],_GPSZAdjust,_elevationMod]];
	};

	case (_warheadType in dtaGPSSeekerTypes) : {
		private "_side";
		
		_sheaf = "POINT";
		_scatter = 0;
		_scatter2 = 0;
		_action = 3;
		
		_arrayEnemySides = [];
		_side = (side _sender);
		
		{
			if (_side getFriend (_x select 0) < 0.6) then {_arrayEnemySides pushback (_x select 1)};
		} forEach [[east, 0], [west, 1], [independent, 2]];
		
		_specialEH = _tube addEventHandler ["fired", compile format ["[_this,%1,%2,'%3','%4','%5',%6,%7,%8,%9] execVM 'DrongosArtillery\Special\Fired.sqf'",_action,_pos,_gunAngle,_fuse,_infoDummyNetID,_longRangeGuided,_arrayEnemySides,_GPSZAdjust,_elevationMod]];
	};


	case (_warheadType in dtaLaserTypes) : {
		_sheaf = "POINT";
		_scatter = 0;
		_scatter2 = 0;
		_action = 4;
		
		_specialEH = _tube addEventHandler ["fired", compile format ["[_this,%1,%2,'%3','%4','%5',%6,%7,%8,%9] execVM 'DrongosArtillery\Special\Fired.sqf'",_action,_pos,_gunAngle,_fuse,_infoDummyNetID,_longRangeGuided,[],_GPSZAdjust,_elevationMod]];
	};
	
	// Not working right now.
	case (_warheadType in dtaWPTypes) : {
		_fuse = "";
		_action = 5;
		_specialEH = _tube addEventHandler ["fired", compile format ["[_this,%1,%2] execVM 'DrongosArtillery\Special\Fired.sqf'",_action,_pos]];
	};
};


_airburstEH = -99;
if (_fuse == "AIRBURST") then {
	_airburstEH = _tube addEventHandler ["fired",compile format ["[_this,%1,'%2',%3,'%4','%5',%6] execVM 'DrongosArtillery\Airburst\AirburstFire.sqf'",_pos,_gunAngle,_action,_infoDummyNetID,_airburstHeight,_GPSZAdjust]];
};


// Alternate airburst for MIXED missions
_tubesTemp = _tubes;
_selectedTube = objNull;
_tubeIndex = 0;

// Abort if taking too long (asset dead or deleted).
_waitTime = time + 30;

//diag_log format["TUBE: %1 - POS BEFORE MIXED ALTERNATE: %2", _tube, _pos];

while {(_tubeIndex < (count _tubesTemp)) and (_waitTime > time)} do {
	_selectedTube = _tubesTemp select _tubeIndex;
	if (_selectedTube == _tube) then {
		if ((_tubeIndex mod 2) > 0) then {
			_doAirburst = false;
			_infoDummy setVariable ["dta_doAirburst", false];	// Tell the guide script NOT to do an airburst.
			_pos = [_pos select 0, _pos select 1, (_pos select 2) - _elevationMod];	// We're not airbursting, so try to hit the ground.
		};
		_tubesTemp = [];
	};
	_tubeIndex = _tubeIndex + 1;
};

//diag_log format["TUBE: %1 - POS AFTER MIXED ALTERNATE: %2", _tube, _pos];

_loaded = false;
_magazineClass = "";
_firstRound = true;


// Create unfreeze-gunner eventhandler.
_unfreezeGunnerEH = _tube addEventHandler ["fired",{
	[(gunner (_this select 0))] spawn {
		sleep 0.5;
		(_this select 0) setSkill ["aimingspeed",1];
	};
}];


// When using a sheaf, the announcement tube will start by firing one round into the center of the sheaf.
if (_isAnnouncementUnit) then {
	_fireCenterFirst = true;
} else {
	_fireCenterFirst = false;
};


// Function to create a list of charges + corresponding Angle and ETA.
// It will only include charges that can reach the target pos.
private _getChargesArray = {
	
	private _weapon = _this select 0;
	private _warheadType = _this select 1;
	
	private _ammoSpeed = getNumber(configfile >> "CfgMagazines" >> _warheadType >> "initSpeed");
	private _charge = "";
	private _chargesArrayLow = [];
	private _chargesArrayHigh = [];
	
	//diag_log format["TUBE: %1 - CHARGES - _warheadType: %2", _tube, _warheadType];
	//diag_log format["TUBE: %1 - CHARGES - _ammoSpeed: %2", _tube, _ammoSpeed];
	
	{
		_charge = _x;
		
		if (getNumber (configfile >> "CfgWeapons" >> _weapon >> _charge >> "showToPlayer") == 1) then {
			
			_vel = _ammoSpeed * getNumber(configfile >> "CfgWeapons" >> _weapon >> _charge >> "artilleryCharge");
			_calc = (_vel^4-_g*(_g*_distance^2+2*_alt*_vel^2));
			//diag_log format["TUBE: %1 - CHARGE: %2 - _calc: %3", _tube, _charge, _calc];
			if (_calc < 0) exitWith {
				//diag_log format ["TUBE: %1 - IMPOSSIBLE _calc - CHARGE: %2 -- VELOCITY: %3 -- _calc: %3", _tube, _charge, _vel, _calc];	
			};
			
			// Angle
			_hA = atan((_vel^2+sqrt _calc) / (_g*_distance));
			_lA = atan((_vel^2-sqrt _calc) / (_g*_distance));
			
			// ETA
			_hETA = _distance/(_vel*cos(_hA));
			_lETA = _distance/(_vel*cos(_lA));
			
			_chargesArrayLow pushback [_charge, _lA, _lETA];
			_chargesArrayHigh pushback [_charge, _hA, _hETA];
			
			//diag_log format ["TUBE: %1 - CHARGE: %2 -- VELOCITY: %3 -- HIGH ANGLE: %4 -- HIGH ETA: %5 -- LOW ANGLE: %6 -- LOW ETA: %7", _tube, _charge, _vel, _hA, _hETA, _lA, _lETA];
		};
		
		sleep 0.1;
	} forEach (getArray (configfile >> "CfgWeapons" >> _weapon >> "modes"));
	
	
	// Return
	[_chargesArrayLow, _chargesArrayHigh]
};


// Function to find a firing angle that the unit can actually aim with.
_findBestCharge = {
	private _tube = _this select 0;
	private _veh = _this select 1;
	private _asset = _this select 2;
	private _gunner = _this select 3;
	private _posA =  _this select 4;	// _posTube
	private _chosenTargetPos = _this select 5;
	private _gunAngle = _this select 6;
	private _longRangeGuided = _this select 7;
	private _chargesArrayLow = _this select 8;
	private _chargesArrayHigh = _this select 9;
	
	private _x1 = _chosenTargetPos select 0;
	private _y = _chosenTargetPos select 1;
	private _chosenCharge = ["",0,0];
	private _chargesArray = [];
	private _chargeFound = false;
	private _angleText = "";
	private _abort = false;
	
	if (_gunAngle == "HIGH") then {
		_chargesArray = _chargesArrayHigh;
		_angleText = "HIGH";
	} else {
		_chargesArray = _chargesArrayLow;
		_angleText = "LOW";
	};
	
	//diag_log format ["TUBE: %1 - FIND BEST CHARGE - _chargesArrayHigh: %2", _tube, _chargesArrayHigh];
	//diag_log format ["TUBE: %1 - FIND BEST CHARGE - _chargesArrayLow: %2", _tube, _chargesArrayLow];
	//diag_log format ["TUBE: %1 - FIND BEST CHARGE - _chargesArray: %2", _tube, _chargesArray];
	
	_checkAbort = {
		switch true do {
			case (isNull _gunner):{_abort = true};
			case (isNull _veh):{_abort = true};
			case (!(alive _gunner)):{_abort = true};
			case (!(alive _veh)):{_abort = true};
			case (vehicle _gunner == _gunner):{_abort = true};
			case (!(canFire _veh)):{_abort = true};
		};
		
		// End mission if player has ended the mission.
		if (_asset getVariable ["DTA_endMission", false]) exitWith {_endMission = true};
		if (_asset getVariable ["DTA_CheckFire", false]) exitWith {_checkFire = true};
	};
	
	_findCharge = {
		
		{
			//diag_log format["TUBE: %1 - FIND CHARGE - FOREACH START", _tube];
			
			// Calculate triangle opposite side. Add that to the height between the triangle and the sea level. 
			private _angleA = _x select 1;															// Angle A.
			//      _posA = getPosASL _tube;														// Point of angle A - _angleA.
			//      _angleC = 90;																	// Angle C.
			private _posC = [_chosenTargetPos select 0, _chosenTargetPos select 1, _posA select 2];	// Point of angle C - C is always 90 in our case.
			private _distanceAdj = _posA vectorDistance _posC;										// Adjacent side
			private _angleB = 180 - 90 - _angleA;													// Angle B.
			private _distanceOp = (_distanceAdj / sin _angleB) * (sin _angleA);						// Opposite side.
			private _heightArtyToSeaLvl = _posA select 2;											// Height between triangle and sea level.
			private _z = _distanceOp + _heightArtyToSeaLvl;											// Add the two height numbers together to get the altitude above sea level.
			
			//diag_log format["TUBE: %1 - FIND CHARGE - CHARGE: %2", _tube, _x];
			//diag_log format["TUBE: %1 - FIND CHARGE - _angleA: %2", _tube, _angleA];
			//diag_log format["TUBE: %1 - FIND CHARGE - _posA: %2", _tube, _posA];
			//diag_log format["TUBE: %1 - FIND CHARGE - _posC: %2", _tube, _posC];
			//diag_log format["TUBE: %1 - FIND CHARGE - _distanceAdj: %2", _tube, _distanceAdj];
			//diag_log format["TUBE: %1 - FIND CHARGE - _angleB: %2", _tube, _angleB];
			//diag_log format["TUBE: %1 - FIND CHARGE - _distanceOp: %2", _tube, _distanceOp];
			//diag_log format["TUBE: %1 - FIND CHARGE - _heightArtyToSeaLvl: %2", _tube, _heightArtyToSeaLvl];
			//diag_log format["TUBE: %1 - FIND CHARGE - _x1: %2", _tube, _x1];
			//diag_log format["TUBE: %1 - FIND CHARGE - _y: %2", _tube, _y];
			//diag_log format["TUBE: %1 - FIND CHARGE - _z: %2", _tube, _z];
			
			private _pos = [_x1,_y,_z];
			
			// Aim tube
			_gunner doWatch (ASLtoAGL _pos);
			
			// Wait until the tube stops moving.
			private _lastWVD = _tube weaponDirection currentWeapon _tube;
			private _wvd = [];
			sleep 0.5;
			while {!_abort} do {
				_wvd = _tube weaponDirection currentWeapon _tube;
				if (_lastWVD isEqualTo _wvd) exitWith {};
				_lastWVD = _wvd;
				sleep 0.5;
				call _checkAbort;
			};
			
			if (_abort) exitWith {};
			
			sleep 0.5;
			
			// Calculate the vertical angle of the tube by using triangle calculations.
			//_wvd = _tube weaponDirection currentWeapon _tube;
			//private _verDegrees = (_wvd select 2) atan2 ([0,0,0] distance [_wvd select 0, _wvd select 1, 0]);
			private _turretConfig = [_tube, [0]] call CBA_fnc_getTurret;
			private _logicStart = "logic" createVehicleLocal [0,0,0];
			_logicStart attachTo [_tube, [0,0,0], getText(_turretConfig >> "gunBeg")];
			private _logicEnd = "logic" createVehicleLocal [0,0,0];
			_logicEnd attachTo [_tube, [0,0,0], getText(_turretConfig >> "gunEnd")];
			private _posA2 = getPosASL _logicStart;
			private _posC2 = getPosASL _logicEnd;
			private _posB2 = [_posC2 select 0, _posC2 select 1, _posA2 select 2];
			private _adjacent = _posA2 vectorDistance _posB2;
			private _opposite = _posB2 vectorDistance _posC2;
			private _hypotenuse = _posA2 vectorDistance _posC2;
			private _verDegrees = acos((_adjacent^2 + _hypotenuse^2 - _opposite^2) / (2*_adjacent*_hypotenuse));
			deleteVehicle _logicStart;
			deleteVehicle _logicEnd;
			
			private _maxDifference = 0.15;
			//if (worldName == "Takistan") then {
			//	_maxDifference = 4;
			//};
			
			//diag_log format ["TUBE: %1 - FIND BEST CHARGE - FIND CHARGE - CHARGE: %2 - _angleA: %3 - _verDegrees: %4 - abs(_angleA-_verDegrees): %5", _tube, _x select 0, _angleA, _verDegrees, abs(_angleA - _verDegrees)];
			//diag_log format ["TUBE: %1 - FIND BEST CHARGE - FIND CHARGE - WORLD: %2 - _maxDifference: %3", _tube, worldName, _maxDifference];
			
			// Check if the tube is aiming with the correct angle.
			// _angleA is the requested angle that the tube should aim with.
			// _verDegrees is the actual angle that the tube is aiming with at the moment.
			// _maxDifference is the maximum allowed difference between the above two.
			private _difference = abs(_angleA - _verDegrees);
			if (_difference < _maxDifference and _difference > -_maxDifference) then {
				_chosenCharge = _x;
				_chargeFound = true;
				_chosenCharge pushback _angleText;
				
				//diag_log format ["TUBE: %1 - FIND BEST CHARGE - FIND CHARGE - _chosenCharge: %2", _tube, _chosenCharge];
				
				// Check if there's an obstruction.
				// Draw a line from the arty turret to a point 1000 meters down the barrel.
				// If target pos is closer than 1000m, then simply use the target pos.
				private _eyePosTube = eyePos _tube;
				if (_distanceAdj > 1000) then {
					private _mult = 1000 / _distanceAdj;
					private _x2 = ((_eyePosTube select 0) - _x1) * _mult;
					private _y2 = ((_eyePosTube select 1) - _y) * _mult;
					private _z2 = ((_eyePosTube select 2) - _z) * _mult;
					_pos = [(_eyePosTube select 0) - _x2, (_eyePosTube select 1) - _y2, (_eyePosTube select 2) - _z2];
				};
				
				private _obstructed = false;
				private _lineIntersectsSurfaces = lineIntersectsSurfaces [_eyePosTube, _pos, _tube, objNull, true, 1];
				
				//diag_log format ["TUBE: %1 - FIND BEST CHARGE - _pos: %2", _tube, _pos];
				//diag_log format ["TUBE: %1 - FIND BEST CHARGE - _lineIntersectsSurfaces: %2", _tube, _lineIntersectsSurfaces];
				
				// Obstructed.
				if (count _lineIntersectsSurfaces > 0) then {
					_obstructed = true;
					_chargeFound = false;
					//diag_log format ["TUBE: %1 - FIND BEST CHARGE - OBSTRUCTED - _chosenCharge: %2", _tube, _chosenCharge];
				};
				
				_chosenCharge pushback _obstructed;
			};
			
			if (_chargeFound) exitWith {
				//diag_log format["TUBE: %1 - FIND CHARGE - CHARGE FOUND", _tube];
			};
			
			//diag_log format["TUBE: %1 - FIND CHARGE - FOREACH END", _tube];
			
		} forEach _chargesArray;
	};
	
	call _findCharge;
	
	// If no good charge was found, and not long range guided, then try the other angle type.
	if (!_chargeFound and !_longRangeGuided and !_abort) then {
		if (_gunAngle == "HIGH") then {
			_chargesArray = _chargesArrayLow;
			_angleText = "LOW";
		} else {
			_chargesArray = _chargesArrayHigh;
			_angleText = "HIGH";
		};
		
		call _findCharge;
		
		//diag_log format ["TUBE: %1 - FIND BEST CHARGE - TRYING OTHER ANGLE - _chargesArray: %2", _tube, _chargesArray];
	};
	
	
	if (_abort) then {
		_chosenCharge = ["",0,0,"",false,true];
		//diag_log format ["TUBE: %1 - FIND BEST CHARGE - ABORT - _chosenCharge: %2", _tube, _chosenCharge];
	} else {
		if (_chosenCharge select 0 == "") then {
			_chosenCharge = ["",0,0,"",false,false];
			//diag_log format ["TUBE: %1 - FIND BEST CHARGE - NOTHING CHOSEN - _chosenCharge: %2", _tube, _chosenCharge];
		} else {
			_chosenCharge pushback _abort;
			//diag_log format ["TUBE: %1 - FIND BEST CHARGE - END - _chosenCharge: %2", _tube, _chosenCharge];
		};
	};
	
	_chosenCharge
};


_checkFire = false;
_endMission = false;		// End mission means the player called for the mission to be ended using the interface. It exits its own loop but does NOT send a message to the players.
_abort = false;				// Abort means something bad and unusual happened to the tube, ie. dead or deleted. It exits its own loop and sends a message to the players.
_outOfAmmo = false;			// Out of ammo means the tube ran out of the requested ammo. It exits its own loop and sends a message to the players.
_impossibleShot = false;	// Impossible shot means the tube couldn't get a firing solution. It exits its own loop and sends a message to the players.
_allOutOfAmmo = false;		// The announcement tube checks how many tubes are out of ammo. When all tubes that are doing the fire mission run out, the announcement tube exits its own loop, informs the players and stops the fire mission.
_allImpossibleShot = false;	// Same as above, but it checks how many couldn't get a firing solution.
_allAborted = false;		// Same as above, but it checks how many aborted (see _abort description) and it ends the fire mission entirely. It assumes the entire group got messed up somehow.


while {_rounds > 0} do {
	
	// End mission if player ends the mission.
	if (_asset getVariable ["DTA_endMission", false]) exitWith {_endMission = true};
	if (_asset getVariable ["DTA_CheckFire", false]) exitWith {_checkFire = true};
	
	// Abort if there's something wrong with the vehicle/gunner.
	_veh = vehicle _gunner;
	
	switch true do {
		case (isNull _gunner):{_abort = true};
		case (isNull _veh):{_abort = true};
		case (!(alive _gunner)):{_abort = true};
		case (!(alive _veh)):{_abort = true};
		case (vehicle _gunner == _gunner):{_abort = true};
		case (!(canFire _veh)):{_abort = true};
	};
	if (_abort and !_isAnnouncementUnit) exitWith {};
	if (_abort and _isAnnouncementUnit and _abortAdd) then {
		_abortAdd = false;
		_amountAborted = (_asset getVariable ["DTA_amountAborted", 0]) + 1;
		_asset setVariable ["DTA_amountAborted", _amountAborted];
	};
	
	
	// Only run the next part if the tube can fire.
	if (_outOfAmmo and !_isAnnouncementUnit) exitWith {};
	if (_impossibleShot and !_isAnnouncementUnit) exitWith {};
	if (_asset getVariable ["DTA_amountAborted", 0] >= count _tubes and _isAnnouncementUnit) exitWith {_allAborted = true};
	
	
	if (!_outOfAmmo and !_impossibleShot and !_abort) then {
		
		_tube setWeaponReloadingTime [_gunner,(currentMuzzle _gunner), 0];
		
		//diag_log format["TUBE: %1 - FIRING LOOP - _fireCenterFirst: %2", _tube, _fireCenterFirst];
		//diag_log format["TUBE: %1 - FIRING LOOP - _scatter: %2", _tube, _scatter];
		//diag_log format["TUBE: %1 - FIRING LOOP - _scatter2: %2", _tube, _scatter2];
		//diag_log format["TUBE: %1 - FIRING LOOP - POS BEFORE SHEAF: %2", _tube, _pos];
		
		// Get appropriate sheaf.
		if (_scatter > 0) then {
			
			// Tube marked as fireCenterFirst will ignore the sheaf the first shot it fires.
			if (!_fireCenterFirst) then {
				switch true do {
					case (_sheaf == "CIRCLE") : {_chosenTargetPos = [_tube,_asset,_pos,_scatter] call dta_fnc_CircularSheaf};
					case (_sheaf == "BOX") : {_chosenTargetPos = [_tube,_asset,_pos,_scatter,_scatter2] call dta_fnc_BoxSheaf};
					case (_sheaf == "LINE") : {_chosenTargetPos = [_tube,_asset,_pos,_sheafLineDir,_sheafLineDist] call dta_fnc_LineSheaf};
					
					default {_chosenTargetPos = _pos};
				};
				sleep 0.1;
				//diag_log format["TUBE: %1 - FIRING LOOP - SHEAF NORMAL - _chosenTargetPos: %2 - _sheaf: %3", _tube, _chosenTargetPos, _sheaf];
				
			} else {
				
				// If marked as fireCenterFirst, make all next shots use the sheaf.
				_fireCenterFirst = false;
				_chosenTargetPos = _pos;
				//diag_log format["TUBE: %1 - FIRING LOOP - SHEAF FIRECENTERFIRST - _chosenTargetPos: %2", _tube, _chosenTargetPos];
			};
			
		} else {
			
			_chosenTargetPos = _pos;
			//diag_log format["TUBE: %1 - FIRING LOOP - NO SHEAF - _chosenTargetPos: %2", _tube, _chosenTargetPos];
		};
		
		//diag_log format["TUBE: %1 - FIRING LOOP - CHOSENTARGETPOS AFTER SHEAF: %2", _tube, _chosenTargetPos];
		
		_posTube = getPosASL _tube;
		
		
		// Add some random spread, depending on distance, angle, and weapon type.
		// Does not apply to GPS guided projectiles.
		// Note: The large amount of ifs is by design. It is to make the number increase exponentially in a way that is somewhat similar to the real life spread.
		if (!DTA_turnOffRandomSpread and {_action != 1} and {_action != 2} and {_action != 3}) then {
			
			_distance = _posTube vectorDistance _chosenTargetPos;
			
			_scatterSpread = (_distance / 200) + (exp((log _distance)*0.7));
			
			switch true do {
				case (_distance <= 0.025 * _maximumRange) : {_scatterSpread = _scatterSpread * 0.25};
				case (_distance <= 0.05 * _maximumRange) : {_scatterSpread = _scatterSpread * 0.40};
				case (_distance <= 0.10 * _maximumRange) : {_scatterSpread = _scatterSpread * 0.50};
				case (_distance <= 0.15 * _maximumRange) : {_scatterSpread = _scatterSpread * 0.60};
				case (_distance <= 0.20 * _maximumRange) : {_scatterSpread = _scatterSpread * 0.65};
				case (_distance <= 0.25 * _maximumRange) : {_scatterSpread = _scatterSpread * 0.70};
				case (_distance <= 0.30 * _maximumRange) : {_scatterSpread = _scatterSpread * 0.75};
				case (_distance <= 0.35 * _maximumRange) : {_scatterSpread = _scatterSpread * 0.80};
				case (_distance <= 0.40 * _maximumRange) : {_scatterSpread = _scatterSpread * 0.85};
			};
			
			if (_distance > 0.50 * _maximumRange) then {_scatterSpread = _scatterSpread + (exp((log _distance)*0.4))};
			if (_distance > 0.55 * _maximumRange) then {_scatterSpread = _scatterSpread + (exp((log _distance)*0.4))};
			if (_distance > 0.60 * _maximumRange) then {_scatterSpread = _scatterSpread + (exp((log _distance)*0.4))};
			if (_distance > 0.65 * _maximumRange) then {_scatterSpread = _scatterSpread + (exp((log _distance)*0.4))};
			if (_distance > 0.70 * _maximumRange) then {_scatterSpread = _scatterSpread + (exp((log _distance)*0.4))};
			if (_distance > 0.75 * _maximumRange) then {_scatterSpread = _scatterSpread + (exp((log _distance)*0.4))};
			if (_distance > 0.80 * _maximumRange) then {_scatterSpread = _scatterSpread + (exp((log _distance)*0.6))};
			if (_distance > 0.85 * _maximumRange) then {_scatterSpread = _scatterSpread + (exp((log _distance)*0.7))};
			if (_distance > 0.90 * _maximumRange) then {_scatterSpread = _scatterSpread + (exp((log _distance)*0.7))};
			if (_distance > 0.95 * _maximumRange) then {_scatterSpread = _scatterSpread + (exp((log _distance)*0.7))};
			if (_distance > 1.00 * _maximumRange) then {_scatterSpread = _scatterSpread + (exp((log _distance)*0.7))};
			if (_distance > 1.05 * _maximumRange) then {_scatterSpread = _scatterSpread + (exp((log _distance)*0.7))};
			if (_distance > 1.10 * _maximumRange) then {_scatterSpread = _scatterSpread + (exp((log _distance)*0.7))};
			if (_distance > 1.15 * _maximumRange) then {_scatterSpread = _scatterSpread + (exp((log _distance)*0.7))};
			if (_distance > 1.20 * _maximumRange) then {_scatterSpread = _scatterSpread + (exp((log _distance)*0.7))};
			if (_distance > 1.25 * _maximumRange) then {_scatterSpread = _scatterSpread + (exp((log _distance)*0.7))};
			
			if (_gunAngle == "low") then {_scatterSpread = _scatterSpread * 0.75};
			if (_assetType == "Mortar") then {_scatterSpread = _scatterSpread * 1.4};
			if (_assetType == "Rocket" or {_assetType == "BM21"}) then {_scatterSpread = _scatterSpread * 1.6};
			
			//diag_log format["TUBE: %1 - FIRING LOOP - SPREAD AFTER IFS: %2", _tube, _scatterSpread];
			
			_scatterSpread = (_scatterSpread * 2) min 1000;
			
			_unguidedCEP = _scatterSpread * 0.6;
			
			_scatterSpread = _scatterSpread * ((random [0, 1, 2]) max 0.01);
			
			//diag_log format["TUBE: %1 - FIRING LOOP - SPREAD AFTER CALC: %2", _tube, _scatterSpread];
			
			_chosenTargetPos = [objNull,objNull,_chosenTargetPos,_scatterSpread] call dta_fnc_CircularSheaf;
			_tube setVariable ["DTA_chosenTargetPos", _chosenTargetPos];
			sleep 0.1;
		
		} else {
			_unguidedCEP = 0.01;
		};
		
		//diag_log format["TUBE: %1 - FIRING LOOP - CHOSENTARGETPOS AFTER RANDOM SPREAD: %2", _tube, _chosenTargetPos];
		
		
		if (dtaDebug) then {[_chosenTargetPos, 60, "ColorGreen"] spawn dta_fnc_PlaceMarker};
		
		_artyAlt = _posTube select 2;
		_alt = (_chosenTargetPos select 2) - _artyAlt;		// Altitude difference
		_vx = _posTube select 0;
		_vy = _posTube select 1;
		
		// Get distance
		_x = _chosenTargetPos select 0;
		_y = _chosenTargetPos select 1;
		_dx = _x - _vx;
		_dy = _y - _vy;
		_distance = sqrt((_dx*_dx)+(_dy*_dy));
		
		//diag_log format["TUBE: %1 - FIRING LOOP -- _longRangeGuided: %2", _tube, _longRangeGuided];
		//diag_log format["TUBE: %1 - FIRING LOOP -- _distance: %2", _tube, _distance];
		//diag_log format["TUBE: %1 - FIRING LOOP -- VECTORDISTANCE: %2", _tube, _chosenTargetPos vectorDistance (getPosASL _tube)];
		
		//diag_log format["TUBE: %1 - CHARGES START", _tube];
		//diag_log format["TUBE: %1 - CHARGES -- MODES: %2", _tube, (getArray (configfile >> "CfgWeapons" >> _weapon >> "modes"))];
		
		
		if (!_longRangeGuided) then {
			private _array = [_weapon, _warheadType] call _getChargesArray;
			_chargesArrayLow = _array select 0;
			_chargesArrayHigh = _array select 1;
			
			//diag_log format["TUBE: %1 - CHARGE NORMAL -- _chargesArrayLow: %2", _tube, _chargesArrayLow];
			//diag_log format["TUBE: %1 - CHARGE NORMAL -- _chargesArrayHigh: %2", _tube, _chargesArrayHigh];
			
		} else {
			// If it's long range guided, then fake the distance to get the projectile into the air regardless.
			_realDistance = _distance;
			_distance = _regularMaxRange;
			
			private _array = [_weapon, _warheadType] call _getChargesArray;
			_chargesArrayLow = _array select 0;
			_chargesArrayHigh = _array select 1;
			
			_distance = _realDistance;
			
			//diag_log format["TUBE: %1 - CHARGE LONG RANGE GUIDED -- _chargesArrayLow: %2", _tube, _chargesArrayLow];
			//diag_log format["TUBE: %1 - CHARGE LONG RANGE GUIDED -- _chargesArrayHigh: %2", _tube, _chargesArrayHigh];
		};
		
		// If no charge was chosen, we will assume it's an impossible shot, so exit out of this loop.
		if (count _chargesArrayLow == 0 and {count _chargesArrayHigh == 0}) then {
			_impossibleShot = true;
			_tube setVariable ["DTA_impossibleShot", true];
			[_tube,"Unable to get a firing solution - impossible shot.","beep"] call dta_fnc_SendComms;
			//diag_log format["TUBE: %1 - ABORT - IMPOSSIBLE SHOT 1 - Check1: %2 - Check2: %3", _tube, count _chargesArrayLow, count _chargesArrayHigh];
		};
	};
	
	
	// Only run the next part if the tube can fire.
	if (_impossibleShot and !_isAnnouncementUnit) exitWith {};
	
	
	// Calculate how long to wait.
	_sleepTime = random 1;
	
	// Comms/prep time.
	if (_firstRound) then {
		
		// Check if the target pos is nearby one of the TRPs that belong to his group.
		_closeToTRP = false;
		_arrayTRP = _asset getVariable ["DTA_arrayTRP", nil];
		if (!isNil "_arrayTRP") then {
			{
				if (_chosenTargetPos vectorDistance _x < 350) exitWith {_closeToTRP = true};
			} forEach _arrayTRP;
		};
		
		//diag_log format["TUBE: %1 - FIRING LOOP -- CLOSETOTRP: %2", _tube, _closeToTRP];
		
		// Has fired previously on this position or is preplotted or is close to a TRP.
		if (((_lastFiringPos vectorDistance _chosenTargetPos < 300) and (_lastGunAngle == _gunAngle)) or _prePlotted or _closeToTRP) then {
			
			//diag_log format["TUBE: %1 - FIRING LOOP -- HAS FIRED PREVIOUSLY ON POS - CHECK1: %2 - CHECK2: %3 - CHECK3: %4 - CHECK4: %5 - CHECK5: %6", _tube, _lastFiringPos vectorDistance _chosenTargetPos, _lastGunAngle, _gunAngle, _prePlotted, _closeToTRP];
			
			switch true do {
				
				// Mortar.
				case (_assetType == "mortar"):{
					_sleepTime = _sleepTime + 6 + (random 5);
				};
				
				// BM21.
				case (_assetType == "BM21"):{
					_sleepTime = _sleepTime + 7 + (random 6);
				};
				
				// Cannons.
				case (_assetType == "Cannon"):{
					_sleepTime = _sleepTime + 4 + (random 3);
				};
				
				// Everything else.
				default {
					_sleepTime = _sleepTime + 5 + (random 4);
				};
			};
			
			// To avoid aiming bugs when firing at pre-plotted targets.
			if (_prePlotted) then {
				_sleepTime = _sleepTime max 2;
			};
			
		} else {
			
			//diag_log format["TUBE: %1 - FIRING LOOP -- HAS NOT FIRED PREVIOUSLY ON POS - CHECK1: %2 - CHECK2: %3 - CHECK3: %4 - CHECK4: %5 - CHECK5: %6", _tube, _lastFiringPos vectorDistance _chosenTargetPos, _lastGunAngle, _gunAngle, _prePlotted, _closeToTRP];
			
			// Firing on new position.
			switch true do {
				
				// Mortar.
				case (_assetType == "mortar"):{
					if (_gunAngle == "LOW") then {_sleepTime = _sleepTime + 25 + (random 4);};
					if (_gunAngle == "HIGH") then {_sleepTime = _sleepTime + 30 + (random 6);};
				};
				
				// BM21.
				case (_assetType == "BM21"):{
					if (_gunAngle == "LOW") then {_sleepTime = _sleepTime + 35 + (random 5);};
					if (_gunAngle == "HIGH") then {_sleepTime = _sleepTime + 40 + (random 7);};
				};
				
				// Cannons.
				case (_assetType == "Cannon"):{
					if (_gunAngle == "LOW") then {_sleepTime = _sleepTime + 20 + (random 2);};
					if (_gunAngle == "HIGH") then {_sleepTime = _sleepTime + 25 + (random 4);};
				};
				
				// Everything else.
				default {
					if (_gunAngle == "LOW") then {_sleepTime = _sleepTime + 22 + (random 3);};
					if (_gunAngle == "HIGH") then {_sleepTime = _sleepTime + 27 + (random 5);};
				};
			};
		};
		
		// Realistic setting increases prep time a bit.
		if (dtaRealisticTimes) then {_sleepTime = _sleepTime * 1.75};
		
		// No delay setting removes prep time. Requires at least 1 to avoid bug.
		if (dtaNoDelay) then {_sleepTime = 1};
		
	} else {
		
		// Reload time for follow up shots.
		_sleepTime = _sleepTime + _timeBetweenRounds;
		
		// Random delay.
		switch true do {
			// Mortar. Manual reload.
			case (_assetType == "mortar"):{
				_sleepTime = _sleepTime + (random 1.5);
			};
			
			// Rocket artillery.
			case ((_assetType == "Rocket") or (_assetType == "BM21")):{
				_sleepTime = _sleepTime + 0.1;
			};
			
			// Cannon. Manual reload.
			case (_assetType == "Cannon"):{
				_sleepTime = _sleepTime + (random 3);
			};
			
			// Everything else. Manual reload.
			default {
				_sleepTime = _sleepTime + (random 3);
			};
		};
	};
	
	// Aiming time.
	switch true do {
		// Mortar. Manual adjustment.
		case (_assetType == "mortar"):{
			if (_sheaf == "POINT") then {
				_sleepTime = _sleepTime + 0.1;
			} else {
				_sleepTime = _sleepTime + 3;
			};
		};
		
		// Everything else. Automated / rocket artillery. Lowering these numbers may cause aiming errors.
		default {
			if (_sheaf == "POINT") then {
				_sleepTime = _sleepTime + 0.1;
			} else {
				_sleepTime = _sleepTime + 1.5;
			};
		};
	};
	
	// If this tube had to wait while changing ammo, as a workaround for an aiming bug when switching ammo,
	// then reduce the waiting time. Use a minimum of 5 to avoid aiming bug.
	if (_firstRound) then {
		if (_switchedAmmo) then {
			_sleepTime = (_sleepTime - _switchedAmmoTime) max 5;
		};
	};
	
	// Wait at least 1 second to make sure airburst mixed works properly.
	_sleepTime = _sleepTime max 1;
	_sleepTime = time + _sleepTime;
	
	
	// Figure out which angle the tube can aim with.
	private _bestCharge = [_tube, _veh, _asset, _gunner, _posTube, _chosenTargetPos, _gunAngle, _longRangeGuided, _chargesArrayLow, _chargesArrayHigh] call _findBestCharge;
	private _obstructed = _bestCharge select 4;
	
	// If no angle was returned or the shot is obstructed, inform the player.
	if (_bestCharge select 0 == "" or _obstructed) then {
		_impossibleShot = true;
		_tube setVariable ["DTA_impossibleShot", true];
		private _abort = _bestCharge select 5;
		
		if (!_abort) then {
			if (_asset getVariable ["DTA_endMission", false]) exitWith {};
			if (_asset getVariable ["DTA_CheckFire", false]) exitWith {};
			
			if (!_obstructed) then {
				[_tube,"Unable to get a firing solution - cannot get a valid angle.","beep"] call dta_fnc_SendComms;
				//diag_log format["TUBE: %1 - ABORT - IMPOSSIBLE SHOT 2 - Check1: %2", _tube, !_obstructed];
			} else {
				[_tube,"Unable to get a firing solution - shot obstructed.","beep"] call dta_fnc_SendComms;
				//diag_log format["TUBE: %1 - ABORT - IMPOSSIBLE SHOT 3 - Check1: %2", _tube, !_obstructed];
			};
		};
		
	} else {
		
		if (_asset getVariable ["DTA_endMission", false]) exitWith {};
		if (_asset getVariable ["DTA_CheckFire", false]) exitWith {};
		
		// If the tube switched angles, inform the player.
		if (_bestCharge select 3 != _gunAngle) then {
			if (_tellAboutAngle) then {
				private _text = format["Cannot get firing solution with requested angle - will use %1 angle instead.", _bestCharge select 3];
				[_tube, _text,"beep"] call dta_fnc_SendComms;
				_tellAboutAngle = false;	// Only tell the player once, to avoid spamming the chat.
			};
			//diag_log format["TUBE: %1 - ABORT - IMPOSSIBLE SHOT 4 - Check1: %2 - Check2: %3", _tube, _bestCharge select 3, _gunAngle];
		};
	};
	
	
	// End mission if player has ended the mission.
	if (_asset getVariable ["DTA_endMission", false]) exitWith {_endMission = true};
	if (_asset getVariable ["DTA_CheckFire", false]) exitWith {_checkFire = true};
	
	if (_asset getVariable ["DTA_amountAborted", 0] >= count _tubes and _isAnnouncementUnit) exitWith {_allAborted = true};
	
	// If everyone is out of ammo, exit out of this loop.
	if ({_x getVariable ["DTA_outOfAmmo", false]} count _tubes == count _tubes) exitWith {_allOutOfAmmo = true};
	
	
	// If everyone has an impossible shot, exit out of this loop.
	if ({_x getVariable ["DTA_impossibleShot", false]} count _tubes == count _tubes) exitWith {_allImpossibleShot = true};
	
	
	// ETA stuff.
	if (_firstRound and {!_outOfAmmo and !_impossibleShot and !_abort}) then {
		_angle = _bestCharge select 1;
		_ETA = _bestCharge select 2;
		
		//diag_log format["TUBE: %1 - CHOSEN CHARGE -- _angle: %2", _tube, _angle];
		//diag_log format["TUBE: %1 - CHOSEN CHARGE -- _ETA: %2", _tube, _ETA];
		
		// When using the guided script, the ETA times need to change a bit.
		if (_longRangeGuided) then {
			_ETA = (_ETA/2) + ((_distance-(_regularMaxRange/2))/(_vel*0.4));
			//diag_log format["TUBE: %1 - CHANGING ETA LONG RANGE GUIDED -- _ETA: %2", _tube, _ETA];
		} else {
			if (_action == 1 or {_action == 2} or {_action == 3}) then {
				_ETA = _ETA * 1.05;
				//diag_log format["TUBE: %1 - CHANGING ETA FOR ACTION 1,2,3 -- _ETA: %2", _tube, _ETA];
			};
		};
		
		_ETA = round _ETA;
		_tube setVariable ["DTA_ETA", _ETA];
		
		//diag_log format["TUBE: %1 - DTA_ETA: %2", _tube, _tube getVariable ["DTA_ETA", 9999]];
	};
	
	
	// Make the tube wait until the previously calculated waiting time has expired.
	if (time < _sleepTime) then {sleep (_sleepTime - time)};
	
	
	// If this is the first round, mark the tube as ready to fire.
	// Before moving on, wait until the other tubes in the group are ready to fire.
	// Move on regardless after waiting for longer than 70 seconds.
	if (_firstRound) then {
		_tube setVariable ["DTA_readyToFire", true];
		_waitTime = time + 70;		// If it takes longer than this, then proceed on regardless.
		_wait = true;
		
		while {_wait and {time < _waitTime}} do {
			_wait = false;
			{
				if (!(_x getVariable ["DTA_readyToFire", true])) exitWith {_wait = true};
			} forEach _tubes;
			
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
	if (_asset getVariable ["DTA_endMission", false]) exitWith {_endMission = true};
	if (_asset getVariable ["DTA_CheckFire", false]) exitWith {_checkFire = true};
	
	// If everyone is out of ammo, exit out of this loop.
	if ({_x getVariable ["DTA_outOfAmmo", false]} count _tubes == count _tubes) exitWith {_allOutOfAmmo = true};
	
	
	// If everyone has an impossible shot, exit out of this loop.
	if ({_x getVariable ["DTA_impossibleShot", false]} count _tubes == count _tubes) exitWith {_allImpossibleShot = true};
	
	
	// Abort if there's something wrong with the vehicle/gunner.
	_veh = vehicle _gunner;
	
	switch true do {
		case (isNull _gunner):{_abort = true};
		case (isNull _veh):{_abort = true};
		case (!(alive _gunner)):{_abort = true};
		case (!(alive _veh)):{_abort = true};
		case (vehicle _gunner == _gunner):{_abort = true};
		case (!(canFire _veh)):{_abort = true};
	};
	if (_abort and !_isAnnouncementUnit) exitWith {};
	if (_abort and _isAnnouncementUnit and _abortAdd) then {
		_abortAdd = false;
		_amountAborted = (_asset getVariable ["DTA_amountAborted", 0]) + 1;
		_asset setVariable ["DTA_amountAborted", _amountAborted];
	};
	
	if (_asset getVariable ["DTA_amountAborted", 0] >= count _tubes and _isAnnouncementUnit) exitWith {_allAborted = true};
	
	//diag_log format["TUBE: %1 - FIRING LOOP - POS BEFORE AIRBURST IF: %2", _tube, _pos];
	
	if (!_outOfAmmo and !_impossibleShot and !_abort) then {
		
		// Used by guide script to decide how much to miss when there's no laser lock and no GPS.
		_infoDummy setVariable ["dta_unguidedCEP", _unguidedCEP];
		_infoDummy setVariable ["dta_unguidedPos", _chosenTargetPos];
		
		// Airburst stuff.
		// Must ensure that there's at least a 2 seconds pause somewhere above this part or things will go wrong when it loops and tries to do another shot.
		if (_fuse == "AIRBURST") then {
			_tube removeEventHandler ["fired", _airburstEH];
			_airburstEH = _tube addEventHandler ["fired",compile format ["[_this,%1,'%2',%3,'%4','%5',%6] execVM 'DrongosArtillery\Airburst\AirburstFire.sqf'",_chosenTargetPos,_gunAngle,_action,_infoDummyNetID,_airburstHeight,_GPSZAdjust]];
			sleep 0.1;	// Must wait a bit after adding the eventhandler to make sure it works properly.
		};
		
		if (_fuse == "MIXED") then {
			if (_doAirburst) then {
				_infoDummy setVariable ["dta_doAirburst", true];	// Tell the guide script to do an airburst THIS time.
				_airburstEH = _tube addEventHandler ["fired",compile format ["[_this,%1,'%2',%3,'%4','%5',%6] execVM 'DrongosArtillery\Airburst\AirburstFire.sqf'",_chosenTargetPos,_gunAngle,_action,_infoDummyNetID,_airburstHeight,_GPSZAdjust]];
				
				_pos = [_pos select 0, _pos select 1, (_pos select 2) - _elevationMod];	// Hit the ground NEXT time.
				_doAirburst = false;		// Don't do an airburst NEXT time.
				
			} else {
				
				_infoDummy setVariable ["dta_doAirburst", false];	// Tell the guide script NOT to do an airburst THIS time.
				_tube removeEventHandler ["fired", _airburstEH];
				_airburstEH = -99;
				
				_pos = [_pos select 0, _pos select 1, (_pos select 2) + _elevationMod];	// Hit the air NEXT time.
				_doAirburst = true;		// Do an airburst NEXT time.
			};
			sleep 0.1;	// Must wait a bit after adding/removing the eventhandler to make sure it works properly.
		};
		
		//diag_log format["TUBE: %1 - FIRING LOOP - POS AFTER AIRBURST IF: %2", _tube, _pos];
		
		// If the right magazine is loaded, then go on and fire.
		if ((currentMagazine _tube) == _warheadType) then {
			
			// Non-GPS only.
			if (_action != 1 and {_action != 2 and {_action != 3}}) then {
				// Add fired eventhandler to announcement unit.
				// It will update the target pos that the spotter sees in the GUI.
				// Remove eventhandler after firing the first shot.
				if (_isAnnouncementUnit) then {
					private _EH = _tube addEventHandler ["fired", {
						private _tube = _this select 0;
						
						//diag_log format["TUBE: %1 - UPDATE TARGET POS - EH FIRED - TUBE: %2", _tube, _tube];
						
						[_tube, _this select 6] spawn {
							private _tube = _this select 0;
							private _proj = _this select 1;
							private _group = group _tube;
							private _timeout = time + 300;
							private _abort = false;
							private _chosenTargetPos = _tube getVariable ["DTA_chosenTargetPos", [-99,-99,-99]];
							private _pos = [-99,-99,-99];
							private _nr = _group getVariable ["DTA_missionNr", 0];
							private _spotter = _group getVariable ["DTA_controlledBy", nil];
							
							if (isNil "_spotter") exitWith {
								//diag_log format["TUBE: %1 - UPDATE TARGET POS - ABORT1 - CHECK1: %2", _tube, _spotter];
							};
							
							while {alive _proj} do {
								if (time > _timeout or (_group getVariable ["DTA_endMission", true]) or (_group getVariable ["DTA_CheckFire", false])) exitWith {_abort = true};
								_pos = getPosASL _proj;
								sleep 0.5;
							};
							
							private _spotter2 = _group getVariable ["DTA_controlledBy", nil];
							if (isNil "_spotter" or {isNil "_spotter2" or {_spotter != _spotter2}}) exitWith {
								//diag_log format["TUBE: %1 - UPDATE TARGET POS - ABORT2 - CHECK1: %2 - CHECK2: %3", _tube, _spotter, _spotter2];
							};
							
							if (!_abort and {_nr == (_group getVariable ["DTA_missionNr", -1])} and {getPosASL _tube vectorDistance _chosenTargetPos < 1500}) then {
								dtaXdisplay = _pos select 0;
								dtaYdisplay = _pos select 1;
								private _owner = owner _spotter2;
								_owner publicVariableClient "dtaXdisplay";
								_owner publicVariableClient "dtaYdisplay";
							};
							
							//diag_log format["TUBE: %1 - UPDATE TARGET POS - END - POS: %2 - SPOTTER: %3", _tube, _pos, _spotter2];
						};
						
						_tube removeEventHandler ["fired", (_tube getVariable ["DTA_EH_Impact", -73341])];
					}];
					
					_tube setVariable ["DTA_EH_Impact", _EH];
				};
			};
			
			
			// Freeze the gunner to circumvent an aiming bug. The unfreeze eventhandler will unfreeze the gunner as soon as he fires.
			// Wait a bit to make sure the skill setting kicks in before we move on.
			_gunner setSkill ["aimingSpeed",0];
			sleep 0.5;
			
			// Fire.
			_tube fire [_tubeType, _bestCharge select 0];
			
			sleep 0.5;
		
		} else {
			
			// If the right magazine is not loaded, then assume the tube is out of ammo, and mark it as such.
			_tube setVariable ["DTA_outOfAmmo", true];
			//diag_log format["TUBE: %1 - ABORT - WRONG MAG LOADED - CURMAG: %2 - _warheadType: %3", _tube, currentMagazine _tube, _warheadType];
			
			if (!_outOfAmmo) then {
				//diag_log format["TUBE: %1 - ABORT - OUT OF AMMO - Check1: %2", _tube, !_outOfAmmo];
				_outOfAmmo = true;
				[_tube,"Out of ammo.","beep"] call dta_fnc_SendComms;
			};
		};
	};
	
	
	// Only run the next part if the tube can fire.
	if (_outOfAmmo and !_isAnnouncementUnit) exitWith {};
	
	//diag_log format["TUBE: %1 - FIRING LOOP END -- _firstRound: %2", _tube, _firstRound];
	//diag_log format["TUBE: %1 - FIRING LOOP END -- _isAnnouncementUnit: %2", _tube, _isAnnouncementUnit];
	
	// Show first round message.
	if (_firstRound and _isAnnouncementUnit) then {
		
		if (_outOfAmmo and count _tubes == 1) exitWith {};
		
		private _lowestETA = 9999;
		
		{
			if (_x getVariable ["DTA_ETA", 9999] < _lowestETA) then {
				_lowestETA = _x getVariable ["DTA_ETA", 9999];
			};
		} forEach _tubes;
		
		_message = format ["Shot. ETA %1 seconds.", _lowestETA];
		
		[_asset,_message,"Shot"] call dta_fnc_SendComms;
		[_lowestETA,_asset] execVM "DrongosArtillery\Control\Splash.sqf";
	};
	_firstRound = false;
	
	
	_rounds = _rounds - 1;
};

//diag_log format["TUBE: %1 - ENDING -- _endMission: %2", _tube, _endMission];
//diag_log format["TUBE: %1 - ENDING -- _abort: %2", _tube, _abort];
//diag_log format["TUBE: %1 - ENDING -- _outOfAmmo: %2", _tube, _outOfAmmo];
//diag_log format["TUBE: %1 - ENDING -- _impossibleShot: %2", _tube, _impossibleShot];
//diag_log format["TUBE: %1 - ENDING -- _allOutOfAmmo: %2", _tube, _allOutOfAmmo];
//diag_log format["TUBE: %1 - ENDING -- _allImpossibleShot: %2", _tube, _allImpossibleShot];
//diag_log format["TUBE: %1 - ENDING -- _allAborted: %2", _tube, _allAborted];
//diag_log format["TUBE: %1 - ENDING -- _isAnnouncementUnit: %2", _tube, _isAnnouncementUnit];
//diag_log format["TUBE: %1 - ENDING -- _asset: %2", _tube, _asset];


// Mark tube to indicate it is ending its mission.
_tube setVariable ["DTA_concludingMission", true];


// Remove dummy object. We don't need it anymore.
// But keep it around for a few minutes because a projectile that needs it might still be in the air.
[_infoDummy] spawn {
	sleep 300;
	deleteVehicle (_this select 0);
};


// Remove unfreeze gunner eventhandler.
[_tube, _unfreezeGunnerEH] spawn {
	sleep 1.5;
	(_this select 0) removeEventHandler ["fired", (_this select 1)];
};


// Restore crew properties.
{
	_x enableAI "TARGET";
	_x enableAI "AUTOTARGET";
} forEach (crew _tube);
_gunner setSkill ["aimingSpeed", _originalAimingSpeed];
_gunner setSkill ["ReloadSpeed", _originalReloadSpeed];
if (!isNull _driver) then {_driver enableAI "MOVE"};


if (dtaTrackRounds) then {_tube removeEventHandler ["fired",_trackEH]};

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
	_amountAborted = (_asset getVariable ["DTA_amountAborted", 0]) + 1;
	_asset setVariable ["DTA_amountAborted", _amountAborted];
	sleep 2;
	if (_amountAborted == 1) then {
		_txt = format["%1 unit is inoperable.", _amountAborted];
	} else {
		_txt = format["%1 units are inoperable.", _amountAborted];
	};
	
	[_asset,_txt,"beep"] call dta_fnc_SendComms;
	//diag_log format["TUBE END - TUBES INOPERABLE: %2", _tube, _amountAborted];
};


if (_isAnnouncementUnit) then {
	// Wait until all tubes are done.
	_timeout = time + 60;
	while {time < _timeout} do {
		if ({_x getVariable ["DTA_concludingMission", false]} count _tubes == count _tubes) exitWith {};
		sleep 2;
	};

	// Check if everyone is out of ammo.
	if ({_x getVariable ["DTA_outOfAmmo", false]} count _tubes == count _tubes) then {_allOutOfAmmo = true};
};


// If all tubes aborted, end the mission.
if (_allAborted and _isAnnouncementUnit) exitWith {
	sleep 5;
	dtaAssetsBusy = dtaAssetsBusy - [_asset];
	publicVariable "dtaAssetsBusy";
	sleep 3;
	hint "Asset is not responding.";
	[false] execVM "DrongosArtillery\Dialog\EndMission.sqf"
};


// Release the group from being busy (firing) and allow the controlling player to issue orders again.
if (_isAnnouncementUnit) then {
	
	sleep 1;
	
	//diag_log format["TUBE: %1 - FINAL ANNOUNCEMENT - dtaAssetsBusy: %2", _tube, dtaAssetsBusy];
	//diag_log format["TUBE: %1 - FINAL ANNOUNCEMENT - _asset: %2", _tube, _asset];
	
	dtaAssetsBusy = dtaAssetsBusy - [_asset];
	publicVariable "dtaAssetsBusy";
	
	//diag_log format["TUBE: %1 - FINAL ANNOUNCEMENT - dtaAssetsBusy: %2", _tube, dtaAssetsBusy];
	
	if (!_endMission and !_checkFire) then {
		
		// Player hasn't requested to end the mission, so give him a message that the mission is over.
		// Spotting missions aren't included in the below code because they already provide a "shot" message elsewhere.
		sleep (1 + random 3);
		if (!_allImpossibleShot) then {
			if (_missionType == "FFE") then {
				if (!_allOutOfAmmo) then {
					// Ended mission with at least 1 tube still having ammo.
					[_asset,"Rounds complete.","RoundsComplete"] call dta_fnc_SendComms;
					//diag_log format["TUBE END - NORMAL ENDING: %2", _tube, !_allOutOfAmmo];
				} else {
					// Ended mission because everyone ran out of the requested ammo.
					[_asset,"Out of ammo on all units - Rounds complete.","RoundsComplete"] call dta_fnc_SendComms;
					//diag_log format["TUBE END - RAN OUT OF AMMO ENDING: %2", _tube, !_allOutOfAmmo];
				};
			};
			
		} else {
			// Everyone had an impossible shot.
			[_asset,"Holding fire, all units are reporting an impossible firing solution.","Negative"] call dta_fnc_SendComms;
			//diag_log format["TUBE END - IMPOSSIBLE SHOT ENDING: %2", _tube, !_allImpossibleShot];
		};
	};
};

//diag_log format["TUBE: %1 - END", _tube];