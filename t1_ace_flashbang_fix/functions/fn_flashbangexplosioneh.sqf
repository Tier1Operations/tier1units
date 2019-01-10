/*
 * Author: KoffeinFlummi
 * Creates the flashbang effect and knock out AI units.
 *
 * Arguments:
 * 0: The flashBang position ASL <ARRAY>
 *
 * Return Value:
 * None
 *
 * Example:
 * [[0,0,0]] call ace_grenades_fnc_flashbangExplosionEH
 *
 * Public: No
 */
//#include "script_component.hpp"

params ["_grenadePosASL"];
//TRACE_1("params",_grenadePosASL);

// Create flash to illuminate environment
if (hasInterface) then {
    private _light = "#lightpoint" createVehicleLocal ASLtoAGL _grenadePosASL;
    _light setPosASL _grenadePosASL;

    _light setLightBrightness 20;
    _light setLightAmbient [1,1,1];
    _light setLightColor [1,1,1];
    _light setLightDayLight true;

    // Reduce the light after 0.1 seconds
    [{
        params ["_light"];
        _light setLightBrightness 5;
        // Delete the light after 0.2 more seconds
        [{
            params ["_light"];
            deleteVehicle _light;
        }, [_light], 0.2] call CBA_fnc_waitAndExecute;
    }, [_light], 0.1] call CBA_fnc_waitAndExecute;
};

// Affect local AI
// @todo: Affect units in static weapons, turned out, etc
private _affected = (ASLtoAGL _grenadePosASL) nearEntities ["CAManBase", 17];
_affected = _affected - [ACE_player];
{
    if (local _x && {alive _x}) then {
		private _unit = _x;
        private _strength = 1 - (((getPosASL _unit) vectorDistance _grenadePosASL) min 20) / 40;
		
        //TRACE_3("FlashBangEffect Start",_unit,((getPosASL _unit) vectorDistance _grenadePosASL),_strength);
		
        [_unit, true] call ace_common_fnc_disableAI;
		
		private _aimingSpeed = _unit skill "aimingSpeed";
        _unit setSkill (skill _unit / 50);
		private _disableAim = false;
		if (random 1 < 0.95) then {
			_disableAim = true;
			_unit disableAI "CHECKVISIBLE";
		};
		
		
		
		private _eyePos = eyePos _unit;
		private _losCoefficient = 1;
		private _losCount = {
			!lineIntersects [_grenadePosASL vectorAdd _x, _eyePos, ACE_player]
		} count [[0,0,0], [0,0,0.2], [0.1, 0.1, 0.1], [-0.1, -0.1, 0.1]];
		//TRACE_1("Line of sight count (out of 4)",_losCount);
		if (_losCount <= 1) then {
			_losCoefficient = 0.1;
		};
		
		private _startPos = ASLtoAGL _eyePos;
		if (_startPos select 2 < 0.5) then {
			_startPos set [2, 0.5];
		};
		_startPos = AGLtoASL _startPos;
		
		// Check if the unit is looking towards the flash.
		_dirEyes = _startPos getDir (_startPos vectorAdd (eyeDirection _unit vectorMultiply 2));
		
		private _dirEyes2 = _dirEyes;
		_dirToFlash = _startPos getDir _grenadePosASL;
		//diag_log "FLASHBANG DEBUG START";
		//diag_log format["_unit: %1", _unit];
		//diag_log format["_startPos: %1", _startPos];
		//diag_log format["_grenadePosASL: %1", _grenadePosASL];
		//diag_log format["getPosASL _unit: %1", getPosASL _unit];
		//diag_log format["_dirEyes2: %1", _dirEyes2];
		//diag_log format["_dirToFlash: %1", _dirToFlash];
		//diag_log format["_losCoefficient: %1", _losCoefficient];
		
		private _flashed = false;
		switch true do {
			case (_dirEyes2 < 180) : {
				private _a = 180 - _dirEyes2;
				_dirEyes2 = _dirEyes2 + _a;
				_dirToFlash = abs(_dirToFlash + _a);
				//diag_log format["ADJUST 1 - E: %1 - F: %2", _dirEyes2, _dirToFlash];
			};
			case (_dirEyes2 > 180) : {
				private _a = _dirEyes2 - 180;
				_dirEyes2 = _dirEyes2 - _a;
				_dirToFlash = abs(_dirToFlash - _a);
				//diag_log format["ADJUST 2 - E: %1 - F: %2", _dirEyes2, _dirToFlash];
			};
		};
		switch true do {
			case (_dirEyes2 >= _dirToFlash and _dirEyes2 - _dirToFlash <= 80) : {
				_flashed = true;
				//diag_log format["LOOKING 1: %1", _dirEyes2 - _dirToFlash];
			};
			case (_dirEyes2 < _dirToFlash and _dirToFlash - _dirEyes2 <= 80) : {
				_flashed = true;
				//diag_log format["LOOKING 2: %1", _dirToFlash - _dirEyes2];
			};
		};
		
		// If not looking at flash, check if the light can bounce off enough surfaces infront of the unit's eyes to blind it.
		private _nr = 0;
		if (!_flashed) then {
			private _heightObj = (AGLtoASL [_startPos select 0, _startPos select 1, 0.5]) select 2; // Low objects.
			private _heightTer = (AGLtoASL [_startPos select 0, _startPos select 1, 3]) select 2; // Steep ground.
			
			private _endPos = _unit getPos [12, _dirEyes];
			_endPos = [_endPos select 0, _endPos select 1, _heightObj];
			private _line = lineIntersectsSurfaces [_startPos, _endPos, _unit];
			if (count _line > 0 and {!isNull ((_line select 0) select 2) and ((_line select 0) select 0) distance _grenadePosASL < 17}) then {
				_nr = _nr + 1;
				//diag_log "0 ANGLE - OBJECT";
			} else {
				_endPos = [_endPos select 0, _endPos select 1, _heightTer];
				_line = terrainIntersectAtASL [_startPos, _endPos];
			if (count _line > 0 and {_line distance _grenadePosASL < 15}) then {
					_nr = _nr + 1;
					//diag_log "0 ANGLE - TERRAIN";
				};
			};
			
			_endPos = _unit getPos [12, _dirEyes + 20];
			_endPos = [_endPos select 0, _endPos select 1, _heightObj];
			_line = lineIntersectsSurfaces [_startPos, _endPos, _unit];
			if (count _line > 0 and {!isNull ((_line select 0) select 2) and ((_line select 0) select 0) distance _grenadePosASL < 17}) then {
				_nr = _nr + 1;
				//diag_log "20 ANGLE - OBJECT";
			} else {
				_endPos = [_endPos select 0, _endPos select 1, _heightTer];
				private _line = terrainIntersectAtASL [_startPos, _endPos];
			if (count _line > 0 and {_line distance _grenadePosASL < 15}) then {
					_nr = _nr + 1;
					//diag_log "20 ANGLE - TERRAIN";
				};
			};
			
			_endPos = _unit getPos [12, _dirEyes + -20];
			_endPos = [_endPos select 0, _endPos select 1, _heightObj];
			_line = lineIntersectsSurfaces [_startPos, _endPos, _unit];
			if (count _line > 0 and {!isNull ((_line select 0) select 2) and ((_line select 0) select 0) distance _grenadePosASL < 17}) then {
				_nr = _nr + 1;
				//diag_log "-20 ANGLE - OBJECT";
			} else {
				_endPos = [_endPos select 0, _endPos select 1, _heightTer];
				private _line = terrainIntersectAtASL [_startPos, _endPos];
			if (count _line > 0 and {_line distance _grenadePosASL < 15}) then {
					_nr = _nr + 1;
					//diag_log "-20 ANGLE - TERRAIN";
				};
			};
			
			_endPos = _unit getPos [12, _dirEyes + 40];
			_endPos = [_endPos select 0, _endPos select 1, _heightObj];
			_line = lineIntersectsSurfaces [_startPos, _endPos, _unit];
			if (count _line > 0 and {!isNull ((_line select 0) select 2) and ((_line select 0) select 0) distance _grenadePosASL < 17}) then {
				_nr = _nr + 1;
				//diag_log "40 ANGLE - OBJECT";
			} else {
				_endPos = [_endPos select 0, _endPos select 1, _heightTer];
				private _line = terrainIntersectAtASL [_startPos, _endPos];
			if (count _line > 0 and {_line distance _grenadePosASL < 15}) then {
					_nr = _nr + 1;
					//diag_log "40 ANGLE - TERRAIN";
				};
			};
			
			_endPos = _unit getPos [12, _dirEyes + -40];
			_endPos = [_endPos select 0, _endPos select 1, _heightObj];
			_line = lineIntersectsSurfaces [_startPos, _endPos, _unit];
			if (count _line > 0 and {!isNull ((_line select 0) select 2) and ((_line select 0) select 0) distance _grenadePosASL < 17}) then {
				_nr = _nr + 1;
				//diag_log "-40 ANGLE - OBJECT";
			} else {
				_endPos = [_endPos select 0, _endPos select 1, _heightTer];
				private _line = terrainIntersectAtASL [_startPos, _endPos];
			if (count _line > 0 and {_line distance _grenadePosASL < 15}) then {
					_nr = _nr + 1;
					//diag_log "-40 ANGLE - TERRAIN";
				};
			};
		
			_endPos = _unit getPos [12, _dirEyes + 60];
			_endPos = [_endPos select 0, _endPos select 1, _heightObj];
			_line = lineIntersectsSurfaces [_startPos, _endPos, _unit];
			if (count _line > 0 and {!isNull ((_line select 0) select 2) and ((_line select 0) select 0) distance _grenadePosASL < 17}) then {
				_nr = _nr + 1;
				//diag_log "60 ANGLE - OBJECT";
			} else {
				_endPos = [_endPos select 0, _endPos select 1, _heightTer];
				private _line = terrainIntersectAtASL [_startPos, _endPos];
			if (count _line > 0 and {_line distance _grenadePosASL < 15}) then {
					_nr = _nr + 1;
					//diag_log "60 ANGLE - TERRAIN";
				};
			};
			
			_endPos = _unit getPos [12, _dirEyes + -60];
			_endPos = [_endPos select 0, _endPos select 1, _heightObj];
			_line = lineIntersectsSurfaces [_startPos, _endPos, _unit];
			if (count _line > 0 and {!isNull ((_line select 0) select 2) and ((_line select 0) select 0) distance _grenadePosASL < 17}) then {
				_nr = _nr + 1;
				//diag_log "-60 ANGLE - OBJECT";
			} else {
				_endPos = [_endPos select 0, _endPos select 1, _heightTer];
				private _line = terrainIntersectAtASL [_startPos, _endPos];
			if (count _line > 0 and {_line distance _grenadePosASL < 15}) then {
					_nr = _nr + 1;
					//diag_log "-60 ANGLE - TERRAIN";
				};
			};
			
			_endPos = _unit getPos [12, _dirEyes + 80];
			_endPos = [_endPos select 0, _endPos select 1, _heightObj];
			_line = lineIntersectsSurfaces [_startPos, _endPos, _unit];
			if (count _line > 0 and {!isNull ((_line select 0) select 2) and ((_line select 0) select 0) distance _grenadePosASL < 17}) then {
				_nr = _nr + 1;
				//diag_log "80 ANGLE - OBJECT";
			} else {
				_endPos = [_endPos select 0, _endPos select 1, _heightTer];
				private _line = terrainIntersectAtASL [_startPos, _endPos];
			if (count _line > 0 and {_line distance _grenadePosASL < 15}) then {
					_nr = _nr + 1;
					//diag_log "80 ANGLE - TERRAIN";
				};
			};
			
			_endPos = _unit getPos [12, _dirEyes + -80];
			_endPos = [_endPos select 0, _endPos select 1, _heightObj];
			_line = lineIntersectsSurfaces [_startPos, _endPos, _unit];
			if (count _line > 0 and {!isNull ((_line select 0) select 2) and ((_line select 0) select 0) distance _grenadePosASL < 17}) then {
				_nr = _nr + 1;
				//diag_log "-80 ANGLE - OBJECT";
			} else {
				_endPos = [_endPos select 0, _endPos select 1, _heightTer];
				private _line = terrainIntersectAtASL [_startPos, _endPos];
			if (count _line > 0 and {_line distance _grenadePosASL < 15}) then {
					_nr = _nr + 1;
					//diag_log "-80 ANGLE - TERRAIN";
				};
			};
		};
		
		if (_nr > 2) then {
			switch (_nr) do {
				case 3 : {_strength = _strength / 2};
				case 4 : {_strength = _strength / 1.4};
				case 5 : {_strength = _strength / 1.3};
				case 6 : {_strength = _strength / 1.2};
				case 7 : {_strength = _strength / 1.1};
				case 9 : {_strength = _strength / 0.85};
			};
			_flashed = true;
			//diag_log "BOUNCE";
		} else {
			if (!_flashed) then {_strength = _strength / 4};
		};
		
		_strength = _strength * _losCoefficient;
		
		if (_strength > 0.2 and _losCoefficient > 0.1) then {
			_unit setVectorDir ((getPosASL _unit) vectorDiff _grenadePosASL);
		};
		
		//diag_log format ["_flashed: %1", _flashed];
		//diag_log format ["_nr: %1", _nr];
		//diag_log format ["_strength: %1", _strength];
		//diag_log "FLASHBANG DEBUG END";
		
		
        [{
            params ["_unit","_disableAim"];
			
            //Make sure we don't enable AI for unconscious units
            if !(_unit getVariable ["ace_isUnconscious", false]) then {
                [_unit, false] call ace_common_fnc_disableAI;
            };
			
            _unit setSkill (skill _unit * 50);
			if (_disableAim) then {_unit enableAI "CHECKVISIBLE"};
        }, [_unit, _disableAim], 11 * _strength] call CBA_fnc_waitAndExecute;
    };
} count _affected;

// Affect local player
if (hasInterface && {!isNull ACE_player} && {alive ACE_player}) then {
    // Do effects for player
    // is there line of sight to the grenade?
    private _eyePos = eyePos ACE_player; //PositionASL
    _grenadePosASL set [2, (_grenadePosASL select 2) + 0.2]; // compensate for grenade glitching into ground
	
	if (_grenadePosASL distance _eyePos > 17) exitWith {};
	
    private _strength = 1 - ((_eyePos vectorDistance _grenadePosASL) min 20) / 20;

    // Check for line of sight (check 4 points in case grenade is stuck in an object or underground)
    private _losCoefficient = 1;
    private _losCount = {
        !lineIntersects [_grenadePosASL vectorAdd _x, _eyePos, ACE_player]
    } count [[0,0,0], [0,0,0.2], [0.1, 0.1, 0.1], [-0.1, -0.1, 0.1]];
    //TRACE_1("Line of sight count (out of 4)",_losCount);
    if (_losCount <= 1) then {
        _losCoefficient = 0.1;
    };
    _strength = _strength * _losCoefficient;

    // Add ace_hearing ear ringing sound effect
    if (isClass (configFile >> "CfgPatches" >> "ACE_Hearing") && {_strength > 0}) then {
        [40 * _strength] call ace_hearing_fnc_earRinging;
    };

    // add ace_medical pain effect:
    if (isClass (configFile >> "CfgPatches" >> "ACE_Medical") && {_strength > 0.1}) then {
        //[ACE_player, _strength / 2] call ace_medical_fnc_adjustPainLevel;
		
		// Lower this number if the flashbang makes people go unconscious.
		_painThreshold = 0.60;
		
		[_strength, _painThreshold] spawn {
			_power = _this select 0;
			_painThreshold = _this select 1;
			_time = (_power * 10);
			_currentPain = (ACE_player getVariable ["ace_medical_pain", 0]);
			_maxPainToInflict = (_painThreshold - _currentPain) max 0;
			_strength = (_power / 3) min _maxPainToInflict;
			
			if (_strength > 0.05) then {
				if (_strength > 0.24) then {
					_time = _time * 1.25;
				};
				
				[ACE_player, _strength] call ace_medical_fnc_adjustPainLevel;
				sleep 10;
				[ACE_player, -(_strength / 3)] call ace_medical_fnc_adjustPainLevel;
				sleep _time;
				[ACE_player, -(_strength / 3)] call ace_medical_fnc_adjustPainLevel;
				sleep _time + (random 3);
				[ACE_player, -(_strength / 2.9)] call ace_medical_fnc_adjustPainLevel;
			};
		};
    };

	// Effect on vision has a wider range, with a higher falloff
	_strength = 1 - (((_eyePos vectorDistance _grenadePosASL) min 25) / 40) ^ 0.4;
	//_strength = _strength * _losCoefficient;
	// Account for people looking away by slightly reducing the effect for visual effects.
	//private _eyeDir = ((AGLtoASL positionCameraToWorld [0,0,1]) vectorDiff (AGLtoASL positionCameraToWorld [0,0,0]));
	//private _dirToUnitVector = _eyePos vectorFromTo _grenadePosASL;
	//private _angleDiff = acos (_eyeDir vectorDotProduct _dirToUnitVector);
	//TRACE_2("",_angleDiff,((1 - (_angleDiff - 45) / (120 - 45)) max 0));
	// from 0-45deg, full effect
	//if (_angleDiff > 45) then {
	//	_strength = _strength * ((1 - (_angleDiff - 45) / (120 - 45)) max 0);
	//};
	
	
	_unit = player;
	private _startPos = ASLtoAGL (eyePos _unit);
	if (_startPos select 2 < 0.5) then {
		_startPos set [2, 0.5];
	};
	_startPos = AGLtoASL _startPos;
	
	// Check if the unit is looking towards the flash.
	_dirEyes = _startPos getDir (_startPos vectorAdd (eyeDirection _unit vectorMultiply 2));
	
	private _dirEyes2 = _dirEyes;
	_dirToFlash = _startPos getDir _grenadePosASL;
	//diag_log "FLASHBANG DEBUG START";
	//diag_log format["_unit: %1", _unit];
	//diag_log format["_startPos: %1", _startPos];
	//diag_log format["_grenadePosASL: %1", _grenadePosASL];
	//diag_log format["getPosASL _unit: %1", getPosASL _unit];
	//diag_log format["_dirEyes2: %1", _dirEyes2];
	//diag_log format["_dirToFlash: %1", _dirToFlash];
	//diag_log format["_losCoefficient: %1", _losCoefficient];
	
	private _flashed = false;
	switch true do {
		case (_dirEyes2 < 180) : {
			private _a = 180 - _dirEyes2;
			_dirEyes2 = _dirEyes2 + _a;
			_dirToFlash = abs(_dirToFlash + _a);
			//diag_log format["ADJUST 1 - E: %1 - F: %2", _dirEyes2, _dirToFlash];
		};
		case (_dirEyes2 > 180) : {
			private _a = _dirEyes2 - 180;
			_dirEyes2 = _dirEyes2 - _a;
			_dirToFlash = abs(_dirToFlash - _a);
			//diag_log format["ADJUST 2 - E: %1 - F: %2", _dirEyes2, _dirToFlash];
		};
	};
	switch true do {
		case (_dirEyes2 >= _dirToFlash and _dirEyes2 - _dirToFlash <= 80) : {
			_flashed = true;
			//diag_log format["LOOKING 1: %1", _dirEyes2 - _dirToFlash];
		};
		case (_dirEyes2 < _dirToFlash and _dirToFlash - _dirEyes2 <= 80) : {
			_flashed = true;
			//diag_log format["LOOKING 2: %1", _dirToFlash - _dirEyes2];
		};
	};
	
	// If not looking at flash, check if the light can bounce off enough surfaces infront of the unit's eyes to blind it.
	private _nr = 0;
	if (!_flashed) then {
		private _heightObj = (AGLtoASL [_startPos select 0, _startPos select 1, 0.5]) select 2; // Low objects.
		private _heightTer = (AGLtoASL [_startPos select 0, _startPos select 1, 3]) select 2; // Steep ground.
		
		private _endPos = _unit getPos [12, _dirEyes];
		_endPos = [_endPos select 0, _endPos select 1, _heightObj];
		private _line = lineIntersectsSurfaces [_startPos, _endPos, _unit];
		if (count _line > 0 and {!isNull ((_line select 0) select 2) and ((_line select 0) select 0) distance _grenadePosASL < 17}) then {
			_nr = _nr + 1;
			//diag_log "0 ANGLE - OBJECT";
		} else {
			_endPos = [_endPos select 0, _endPos select 1, _heightTer];
			_line = terrainIntersectAtASL [_startPos, _endPos];
			if (count _line > 0 and {_line distance _grenadePosASL < 15}) then {
				_nr = _nr + 1;
				//diag_log "0 ANGLE - TERRAIN";
			};
		};
		
		_endPos = _unit getPos [12, _dirEyes + 20];
		_endPos = [_endPos select 0, _endPos select 1, _heightObj];
		_line = lineIntersectsSurfaces [_startPos, _endPos, _unit];
		if (count _line > 0 and {!isNull ((_line select 0) select 2) and ((_line select 0) select 0) distance _grenadePosASL < 17}) then {
			_nr = _nr + 1;
			//diag_log "20 ANGLE - OBJECT";
		} else {
			_endPos = [_endPos select 0, _endPos select 1, _heightTer];
			private _line = terrainIntersectAtASL [_startPos, _endPos];
			if (count _line > 0 and {_line distance _grenadePosASL < 15}) then {
				_nr = _nr + 1;
				//diag_log "20 ANGLE - TERRAIN";
			};
		};
		
		_endPos = _unit getPos [12, _dirEyes + -20];
		_endPos = [_endPos select 0, _endPos select 1, _heightObj];
		_line = lineIntersectsSurfaces [_startPos, _endPos, _unit];
		if (count _line > 0 and {!isNull ((_line select 0) select 2) and ((_line select 0) select 0) distance _grenadePosASL < 17}) then {
			_nr = _nr + 1;
			//diag_log "-20 ANGLE - OBJECT";
		} else {
			_endPos = [_endPos select 0, _endPos select 1, _heightTer];
			private _line = terrainIntersectAtASL [_startPos, _endPos];
			if (count _line > 0 and {_line distance _grenadePosASL < 15}) then {
				_nr = _nr + 1;
				//diag_log "-20 ANGLE - TERRAIN";
			};
		};
		
		_endPos = _unit getPos [12, _dirEyes + 40];
		_endPos = [_endPos select 0, _endPos select 1, _heightObj];
		_line = lineIntersectsSurfaces [_startPos, _endPos, _unit];
		if (count _line > 0 and {!isNull ((_line select 0) select 2) and ((_line select 0) select 0) distance _grenadePosASL < 17}) then {
			_nr = _nr + 1;
			//diag_log "40 ANGLE - OBJECT";
		} else {
			_endPos = [_endPos select 0, _endPos select 1, _heightTer];
			private _line = terrainIntersectAtASL [_startPos, _endPos];
			if (count _line > 0 and {_line distance _grenadePosASL < 15}) then {
				_nr = _nr + 1;
				//diag_log "40 ANGLE - TERRAIN";
			};
		};
		
		_endPos = _unit getPos [12, _dirEyes + -40];
		_endPos = [_endPos select 0, _endPos select 1, _heightObj];
		_line = lineIntersectsSurfaces [_startPos, _endPos, _unit];
		if (count _line > 0 and {!isNull ((_line select 0) select 2) and ((_line select 0) select 0) distance _grenadePosASL < 17}) then {
			_nr = _nr + 1;
			//diag_log "-40 ANGLE - OBJECT";
		} else {
			_endPos = [_endPos select 0, _endPos select 1, _heightTer];
			private _line = terrainIntersectAtASL [_startPos, _endPos];
			if (count _line > 0 and {_line distance _grenadePosASL < 15}) then {
				_nr = _nr + 1;
				//diag_log "-40 ANGLE - TERRAIN";
			};
		};
	
		_endPos = _unit getPos [12, _dirEyes + 60];
		_endPos = [_endPos select 0, _endPos select 1, _heightObj];
		_line = lineIntersectsSurfaces [_startPos, _endPos, _unit];
		if (count _line > 0 and {!isNull ((_line select 0) select 2) and ((_line select 0) select 0) distance _grenadePosASL < 17}) then {
			_nr = _nr + 1;
			//diag_log "60 ANGLE - OBJECT";
		} else {
			_endPos = [_endPos select 0, _endPos select 1, _heightTer];
			private _line = terrainIntersectAtASL [_startPos, _endPos];
			if (count _line > 0 and {_line distance _grenadePosASL < 15}) then {
				_nr = _nr + 1;
				//diag_log "60 ANGLE - TERRAIN";
			};
		};
		
		_endPos = _unit getPos [12, _dirEyes + -60];
		_endPos = [_endPos select 0, _endPos select 1, _heightObj];
		_line = lineIntersectsSurfaces [_startPos, _endPos, _unit];
		if (count _line > 0 and {!isNull ((_line select 0) select 2) and ((_line select 0) select 0) distance _grenadePosASL < 17}) then {
			_nr = _nr + 1;
			//diag_log "-60 ANGLE - OBJECT";
		} else {
			_endPos = [_endPos select 0, _endPos select 1, _heightTer];
			private _line = terrainIntersectAtASL [_startPos, _endPos];
			if (count _line > 0 and {_line distance _grenadePosASL < 15}) then {
				_nr = _nr + 1;
				//diag_log "-60 ANGLE - TERRAIN";
			};
		};
		
		_endPos = _unit getPos [12, _dirEyes + 80];
		_endPos = [_endPos select 0, _endPos select 1, _heightObj];
		_line = lineIntersectsSurfaces [_startPos, _endPos, _unit];
		if (count _line > 0 and {!isNull ((_line select 0) select 2) and ((_line select 0) select 0) distance _grenadePosASL < 17}) then {
			_nr = _nr + 1;
			//diag_log "80 ANGLE - OBJECT";
		} else {
			_endPos = [_endPos select 0, _endPos select 1, _heightTer];
			private _line = terrainIntersectAtASL [_startPos, _endPos];
			if (count _line > 0 and {_line distance _grenadePosASL < 15}) then {
				_nr = _nr + 1;
				//diag_log "80 ANGLE - TERRAIN";
			};
		};
		
		_endPos = _unit getPos [12, _dirEyes + -80];
		_endPos = [_endPos select 0, _endPos select 1, _heightObj];
		_line = lineIntersectsSurfaces [_startPos, _endPos, _unit];
		if (count _line > 0 and {!isNull ((_line select 0) select 2) and ((_line select 0) select 0) distance _grenadePosASL < 17}) then {
			_nr = _nr + 1;
			//diag_log "-80 ANGLE - OBJECT";
		} else {
			_endPos = [_endPos select 0, _endPos select 1, _heightTer];
			private _line = terrainIntersectAtASL [_startPos, _endPos];
			if (count _line > 0 and {_line distance _grenadePosASL < 15}) then {
				_nr = _nr + 1;
				//diag_log "-80 ANGLE - TERRAIN";
			};
		};
	};
	
	if (_nr > 2) then {
		switch (_nr) do {
			case 3 : {_strength = _strength / 2};
			case 4 : {_strength = _strength / 1.4};
			case 5 : {_strength = _strength / 1.3};
			case 6 : {_strength = _strength / 1.2};
			case 7 : {_strength = _strength / 1.1};
			case 9 : {_strength = _strength / 0.85};
		};
		_flashed = true;
		//diag_log "BOUNCE";
	} else {
		if (!_flashed) then {_strength = _strength / 6};
	};
	
	//diag_log format ["_flashed: %1", _flashed];
		//diag_log format ["_nr: %1", _nr];
	//diag_log format ["_strength: %1", _strength];
	//diag_log "FLASHBANG DEBUG END";
	
	_strength = _strength * _losCoefficient;
	
	if (_strength > 0.2 and _losCoefficient > 0.1) then {
		_unit setVectorDir ((getPosASL _unit) vectorDiff _grenadePosASL);
	};
	
	
    // Blind player
    if (_strength > 0.1) then {
       ace_grenades_flashbangPPEffectCC ppEffectEnable true;
        ace_grenades_flashbangPPEffectCC ppEffectAdjust [1,1,(0.8 + _strength) min 1,[1,1,1,0],[0,0,0,1],[0,0,0,0]];
        ace_grenades_flashbangPPEffectCC ppEffectCommit 0.01;

        //PARTIALRECOVERY - start decreasing effect over time
        [{
            params ["_strength"];

            ace_grenades_flashbangPPEffectCC ppEffectAdjust [1,1,0,[1,1,1,0],[0,0,0,1],[0,0,0,0]];
            ace_grenades_flashbangPPEffectCC ppEffectCommit (10 * _strength);
        }, [_strength], 10 * _strength] call CBA_fnc_waitAndExecute;

        //FULLRECOVERY - end effect
        [{
            ace_grenades_flashbangPPEffectCC ppEffectEnable false;
        }, [], 17 * _strength] call CBA_fnc_waitAndExecute;
    };

    if (_strength > 0.2) then {
        ACE_player setVectorDir (_eyePos vectorDiff _grenadePosASL);
    };
};
true
