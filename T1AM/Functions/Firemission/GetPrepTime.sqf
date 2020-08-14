// Calculate how long the prep time should be.

params ["_tube", "_asset", "_assetType", "_chosenTargetPos", "_firstRound", "_lastFiringPos", "_gunAngle", "_lastGunAngle", "_prePlotted", "_sheaf", "_mustWait", "_mustWaitTime", "_timeBetweenRounds"];

_sleepTime = random 0.25;

// Comms/prep time.
if (_firstRound) then {
	
	// Check if the target pos is nearby one of the TRPs that belong to this group.
	private _closeToTRP = false;
	private _arrayTRP = _asset getVariable ["T1AM_arrayTRP", nil];
	if (!isNil "_arrayTRP") then {
		{
			if (_chosenTargetPos vectorDistance _x < 500) exitWith {_closeToTRP = true};
		} forEach _arrayTRP;
	};
	
	DIAG_LOG format["TUBE: %1 - FIRING LOOP -- CLOSETOTRP: %2", _tube, _closeToTRP];
	
	// Has fired previously on this position or is preplotted or is close to a TRP.
	if (((_lastFiringPos vectorDistance _chosenTargetPos < 300) and (_lastGunAngle == _gunAngle)) or _prePlotted or _closeToTRP) then {
		
		DIAG_LOG format["TUBE: %1 - FIRING LOOP -- HAS FIRED PREVIOUSLY ON POS - CHECK1: %2 - CHECK2: %3 - CHECK3: %4 - CHECK4: %5 - CHECK5: %6", _tube, _lastFiringPos vectorDistance _chosenTargetPos, _lastGunAngle, _gunAngle, _prePlotted, _closeToTRP];
		
		switch (_assetType) do {
			
			// Mortar.
			case ("MORTAR"):{
				_sleepTime = _sleepTime + 6 + (random 5);
			};
			
			// RHS BM21.
			case ("RHS_BM21"):{
				_sleepTime = _sleepTime + 7 + (random 6);
			};
			
			// 2035RAF BM21.
			case ("2035RAF_BM21"):{
				_sleepTime = _sleepTime + 7 + (random 6);
			};
			
			// Cannons.
			case ("CANNON"):{
				_sleepTime = _sleepTime + 4 + (random 3);
			};
			
			// MK41 cruise missile.
			case ("MK41"):{
				_sleepTime = _sleepTime + 3 + (random 3);
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
		
		DIAG_LOG format["TUBE: %1 - FIRING LOOP -- HAS NOT FIRED PREVIOUSLY ON POS - CHECK1: %2 - CHECK2: %3 - CHECK3: %4 - CHECK4: %5 - CHECK5: %6", _tube, _lastFiringPos vectorDistance _chosenTargetPos, _lastGunAngle, _gunAngle, _prePlotted, _closeToTRP];
		
		// Firing on new position.
		switch (_assetType) do {
			
			// Mortar.
			case ("MORTAR"):{
				if (_gunAngle == "LOW") then {_sleepTime = _sleepTime + 25 + (random 4);};
				if (_gunAngle == "HIGH") then {_sleepTime = _sleepTime + 30 + (random 6);};
			};
			
			// RHS BM21.
			case ("RHS_BM21"):{
				if (_gunAngle == "LOW") then {_sleepTime = _sleepTime + 35 + (random 5);};
				if (_gunAngle == "HIGH") then {_sleepTime = _sleepTime + 40 + (random 7);};
			};
			
			// 2035RAF BM21.
			case ("2035RAF_BM21"):{
				if (_gunAngle == "LOW") then {_sleepTime = _sleepTime + 35 + (random 5);};
				if (_gunAngle == "HIGH") then {_sleepTime = _sleepTime + 40 + (random 7);};
			};
			
			// Cannons.
			case ("CANNON"):{
				if (_gunAngle == "LOW") then {_sleepTime = _sleepTime + 20 + (random 2);};
				if (_gunAngle == "HIGH") then {_sleepTime = _sleepTime + 25 + (random 4);};
			};
			
			// MK41 cruise missile.
			case ("MK41"):{
				_sleepTime = _sleepTime + 17 + (random 2);
			};
			
			// Everything else.
			default {
				if (_gunAngle == "LOW") then {_sleepTime = _sleepTime + 22 + (random 3);};
				if (_gunAngle == "HIGH") then {_sleepTime = _sleepTime + 27 + (random 5);};
			};
		};
	};
	
	switch (T1AM_PrepTimes) do {
		// No delay setting removes prep time. Requires at least 2 to avoid bug.
		case 0: {_sleepTime = 2};
		// Realistic setting increases prep time a bit.
		case 2: {_sleepTime = _sleepTime * 1.75};
	};
	
} else {
	
	// Reload time for follow up shots.
	_sleepTime = _sleepTime + _timeBetweenRounds;
	
	private _tubeType = [_tube] call T1AM_Fnc_TubeType;
	
	// Random delay.
	switch (_tubeType) do {
		// Mortar.
		case ("MORTARL"):{
			_sleepTime = _sleepTime + (random 0.5);
		};
		case ("MORTARM"):{
			_sleepTime = _sleepTime + (random 2);
		};
		
		// Cannon.
		case ("CANNONL"):{
			_sleepTime = _sleepTime + (random 1);
		};
		case ("CANNONM"):{
			_sleepTime = _sleepTime + (random 4);
		};
		
		// Rocket artillery.
		case ("ROCKETL"):{
			_sleepTime = _sleepTime + (random 0.1);
		};
		case ("ROCKETM"):{
			_sleepTime = _sleepTime + (random 0.3);
		};
		case ("ROCKETH"):{
			_sleepTime = _sleepTime + (random 1);
		};
		
		// Everything else.
		default {
			_sleepTime = _sleepTime + (random 3);
		};
	};
};

// Aiming time.
switch (_assetType) do {
	// Mortar. Manual adjustment.
	case ("MORTAR"):{
		if (_sheaf == "POINT") then {
			_sleepTime = _sleepTime + 0.1;
		} else {
			_sleepTime = _sleepTime + 2;
		};
	};
	
	// Everything else. Automated / rocket artillery. Lowering these numbers may cause aiming errors.
	default {
		if (_sheaf == "POINT") then {
			_sleepTime = _sleepTime + 0.1;
		} else {
			_sleepTime = _sleepTime + 1.0;
		};
	};
};

// If this tube had to wait while changing ammo or changing locality,
// then reduce the waiting time by how long the tube has already waited.
// Use a minimum of 5 to avoid aiming bug when switching ammo.
if (_firstRound) then {
	if (_mustWait) then {
		_sleepTime = (_sleepTime - _mustWaitTime) max 5;
	};
};

// Wait at least 1 second to make sure airburst mixed works properly.
_sleepTime = _sleepTime max 1;

// Wait no longer than 130 seconds. Other scripts will not wait longer than 130 seconds (as a safety precaution).
_sleepTime = _sleepTime min 130;

DIAG_LOG format["GET PREP TIME: %1 | _sleepTime: %2", _tube, _sleepTime];

_sleepTime = time + _sleepTime;

_sleepTime