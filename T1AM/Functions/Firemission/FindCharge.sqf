params["_tube", "_asset", "_gunner", "_posA", "_chosenTargetPos", "_chargesArray", "_x1", "_y", "_angleText", "_chosenCharge", "_chargeFound", "_abort", "_endMission", "_checkFire"];

{
	//DIAG_LOG format["TUBE: %1 - FIND CHARGE - FOREACH START", _tube];
	
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
	
	//DIAG_LOG format["TUBE: %1 - FIND CHARGE - CHARGE: %2", _tube, _x];
	//DIAG_LOG format["TUBE: %1 - FIND CHARGE - _angleA: %2", _tube, _angleA];
	//DIAG_LOG format["TUBE: %1 - FIND CHARGE - _posA: %2", _tube, _posA];
	//DIAG_LOG format["TUBE: %1 - FIND CHARGE - _posC: %2", _tube, _posC];
	//DIAG_LOG format["TUBE: %1 - FIND CHARGE - _distanceAdj: %2", _tube, _distanceAdj];
	//DIAG_LOG format["TUBE: %1 - FIND CHARGE - _angleB: %2", _tube, _angleB];
	//DIAG_LOG format["TUBE: %1 - FIND CHARGE - _distanceOp: %2", _tube, _distanceOp];
	//DIAG_LOG format["TUBE: %1 - FIND CHARGE - _heightArtyToSeaLvl: %2", _tube, _heightArtyToSeaLvl];
	//DIAG_LOG format["TUBE: %1 - FIND CHARGE - _x1: %2", _tube, _x1];
	//DIAG_LOG format["TUBE: %1 - FIND CHARGE - _y: %2", _tube, _y];
	//DIAG_LOG format["TUBE: %1 - FIND CHARGE - _z: %2", _tube, _z];
	
	private _pos = [_x1,_y,_z];
	
	// Aim tube
	_gunner doWatch (ASLtoAGL _pos);
	
	// Wait until the tube stops moving/aiming by comparing its aiming vector every 0.25 second.
	private _lastWVD = _tube weaponDirection currentWeapon _tube;
	private _wvd = [];

	sleep 0.25;
	private _abortTime = time + 55;
	while {true} do {
		_wvd = _tube weaponDirection currentWeapon _tube;
		_wvd = [_wvd] call T1AM_Fnc_removedigits;
		_lastWVD = [_lastWVD] call T1AM_Fnc_removedigits;
		if (_lastWVD isEqualTo _wvd or time > _abortTime) exitWith {
			//DIAG_LOG format ["TUBE: %1 | FIND CHARGE MOVING LOOP EXIT | Time: %2 | If: %3 | _wvd: %4 | _lastWVD: %5 | Aborted: %6", _tube, time, (_lastWVD isEqualTo _wvd), _wvd, _lastWVD, time > _abortTime];
		};
		//DIAG_LOG format ["TUBE: %1 | FIND CHARGE MOVING LOOP | Time: %2 | If: %3 | _wvd: %4 | _lastWVD: %5", _tube, time, (_lastWVD isEqualTo _wvd), _wvd, _lastWVD];
		_lastWVD = _wvd;
		sleep 0.25;
		
		// Check if need to abort.
		_abort = [_tube, _gunner] call T1AM_Fnc_CheckAssetStatus;
		if (_abort) exitWith {};
		if (_asset getVariable ["T1AM_endMission", false]) exitWith {_endMission = true};
		if (_asset getVariable ["T1AM_CheckFire", false]) exitWith {_checkFire = true};
	};
	
	if (_abort or _endMission or _checkFire) exitWith {};
	
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
	
	//DIAG_LOG format ["TUBE: %1 - FIND BEST CHARGE - FIND CHARGE - CHARGE: %2 - _angleA: %3 - _verDegrees: %4 - abs(_angleA-_verDegrees): %5", _tube, _x select 0, _angleA, _verDegrees, abs(_angleA - _verDegrees)];
	//DIAG_LOG format ["TUBE: %1 - FIND BEST CHARGE - FIND CHARGE - WORLD: %2 - _maxDifference: %3", _tube, worldName, _maxDifference];
	
	// Check if the tube is aiming with the correct angle.
	// _angleA is the requested angle that the tube should aim with.
	// _verDegrees is the actual angle that the tube is aiming with at the moment.
	// _maxDifference is the maximum allowed difference between the above two.
	private _difference = abs(_angleA - _verDegrees);
	if (_difference < _maxDifference and _difference > -_maxDifference) then {
		_chosenCharge = _x;
		_chargeFound = true;
		_chosenCharge pushback _angleText;
		
		//DIAG_LOG format ["TUBE: %1 - FIND BEST CHARGE - FIND CHARGE - _chosenCharge: %2", _tube, _chosenCharge];
		
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
		
		//DIAG_LOG format ["TUBE: %1 - FIND BEST CHARGE - _pos: %2", _tube, _pos];
		//DIAG_LOG format ["TUBE: %1 - FIND BEST CHARGE - _lineIntersectsSurfaces: %2", _tube, _lineIntersectsSurfaces];
		
		// Obstructed.
		if (count _lineIntersectsSurfaces > 0) then {
			_obstructed = true;
			_chargeFound = false;
			//DIAG_LOG format ["TUBE: %1 - FIND BEST CHARGE - OBSTRUCTED - _chosenCharge: %2", _tube, _chosenCharge];
		};
		
		_chosenCharge pushback _obstructed;
	};
	
	if (_chargeFound) exitWith {
		//DIAG_LOG format["TUBE: %1 - FIND CHARGE - CHARGE FOUND", _tube];
	};
	
	//DIAG_LOG format["TUBE: %1 - FIND CHARGE - FOREACH END", _tube];
	
} forEach _chargesArray;

[_chosenCharge, _chargeFound, _abort, _endMission, _checkFire];