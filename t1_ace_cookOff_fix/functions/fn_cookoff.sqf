// Delay between flame effect for players in a cooking off vehicle
#define FLAME_EFFECT_DELAY 0.4

params [
	"_vehicle",
	["_init", 1, [0]],
	["_DETONATE_TIME", 3, [0]],
	["_IGNITE_TIME", 5, [0]],
	["_SMOKE_TIME", 240, [0]],
	["_FLAMESTART_TIME", 15, [0]],
	["_FLAME_TIME", 15, [0]],
	["_DISMOUNT_TIME", 10, [0]],
	["_detonate", true, [true]],
	["_flameJet", true, [true]],
	["_onFire", true, [true]],
	["_posArray", [], [[]]],
	["_posHit", [], [[]]],
	["_DAMAGE_TIME", 15, [0]]
];


// _init 1 = Initial start up of code. Initialize parameters.
// _init 2 = Remotely told to run this code with certain parameters.
if (_init == 1 and {_vehicle getVariable ["ace_cookoff_isCookingOff", false]}) exitWith {
	if (random 1 < 0.06 and (_vehicle getVariable ["ace_cookoff_cookingOffTime", 9999999]) < time) then {
		_vehicle setDamage 1;
	};
};
if (_init == 1) then {
	_vehicle setVariable ["ace_cookoff_isCookingOff", true, true];
	_vehicle setVariable ["ace_cookoff_cookingOffTime", time + 1, true];
};
if (_init == 1 and random 1 < 0.10) exitWith {
	_vehicle setDamage 1;
};


[_vehicle, _init, _DETONATE_TIME, _IGNITE_TIME, _SMOKE_TIME, _FLAMESTART_TIME, _FLAME_TIME, _DISMOUNT_TIME, _detonate, _flameJet, _onFire, _posArray, _posHit, _DAMAGE_TIME] spawn {
	params ["_vehicle", "_init", "_DETONATE_TIME", "_IGNITE_TIME", "_SMOKE_TIME", "_FLAMESTART_TIME", "_FLAME_TIME", "_DISMOUNT_TIME", "_detonate", "_flameJet", "_onFire", "_posArray", "_posHit", "_DAMAGE_TIME"];
	
	// Initialize values that will be sent to other machines so that all machines will be using the same numbers, which is necessary to keep the effects synced in multiplayer.
	if (_init == 1) then {
		
		_IGNITE_TIME = 1 + 15 * (random [0, 1, 2]);
		_DETONATE_TIME = 3 + (random [120, 0, 120]);
		_SMOKE_TIME =  1 + 480 * (random [0, 1, 2]);
		_FLAMESTART_TIME =  1 + (random [60, 0, 60]);
		_FLAME_TIME = 2 + random 17; // Flame time should be 20s at most due to length of sound files.
		_DAMAGE_TIME =  1 + random 20;
		
		if (random 1 < 0.2) then {
			_IGNITE_TIME = _IGNITE_TIME * 2;
		};
		
		if (random 1 < 0.3) then {
			_IGNITE_TIME = _IGNITE_TIME / 3;
		};
		if (random 1 < 0.4) then {
			_IGNITE_TIME = _IGNITE_TIME / 2;
			_FLAMESTART_TIME = _FLAMESTART_TIME / 2;
		};
		
		if (random 1 < 0.4) then {_flameJet = true} else {_flameJet = false};
		if (random 1 < 0.5) then {_onFire = true} else {_onFire = false};
		private _chance = 0.05;
		if (_flameJet) then {_chance = _chance + 0.25};
		if (_onFire) then {_chance = _chance + 0.20};
		if (random 1 < _chance) then {_detonate = true} else {_detonate = false};
		
		if (_detonate) then {
			switch true do {
				case (!_flameJet and !_onFire) : {
					_DETONATE_TIME = 1 + random 10;
					_IGNITE_TIME = 1 + random 10;
				};
				case (random 1 < 0.3) : {
					_DETONATE_TIME = 1 + random 5;
					_IGNITE_TIME = 1 + random 5;
				};
				case (random 1 < 0.3) : {
					_DETONATE_TIME = 5 + random 20;
					_IGNITE_TIME = 1 + random 5;
				};
				case (_flameJet and random 1 < 0.7) : {
					_DETONATE_TIME = _FLAMESTART_TIME + (_FLAME_TIME * 0.8);
				};
			};
		};
		
		if (((_onFire or _flameJet) and random 1 < 0.8) or (random 1 < 0.4)) then {
			_DISMOUNT_TIME =  (4 + (random [10, 0, 10])) max 5;
		} else {
			_DISMOUNT_TIME =  (_IGNITE_TIME + (random [10, 0, 10])) max 5;
		};
		
		// Impact effects.
		if (random 1 < 0.4) then {
			
			private _sleepTime = time + 3;
			waitUntil {time > _sleepTime or count (_vehicle getVariable ["t1_ace_cookOff_fix_var", []]) > 0};
			private _position = _vehicle getVariable ["t1_ace_cookOff_fix_var", []];
			_vehicle setVariable ["t1_ace_cookOff_fix_var", [], true];
			
			private _showFire = call{ if(random 1 < 0.6)then{true}else{false} };
			
			_chance = 0.6;
			if (_showFire) then {_chance = 0.85};
			private _showSmoke = call{ if(random 1 < _chance)then{true}else{false} };
			
			// We must have either smoke or fire.
			if (!_showSmoke and !_showFire) then {
				if (random 1 < 0.5) then {_showSmoke = true} else {_showFire = true};
			};
			
			// If position is too far from vehicle, we'll assume the game gave us a wrong impact position that will result in smoke/fire effects floating in the air.
			// In which case, we'll skip the effects.
			if (count _position == 0 or {_position distance _vehicle > 7}) then {
				_posHit = [];
			} else {
				_posHit pushback _position;
				_posHit pushback _showSmoke;
				_posHit pushback _showFire;
			};
		};
		
		// Chance to have a vehicle without any smoke/fire/detonation.
		private _showEffects = true;
		if (random 1 < 0.20) then {
			_showEffects = false;
			_onFire = false;
			_flameJet = false;
			_detonate = false;
		};
		
		// Add smoke/fire effects to different parts of the vehicle.
		// _posArray select 0 == array containing arrays, position selection values from object's config.
		// _posArray select 1 == array containing one boolean, dictates whether to play smoke effect from barrel.
		// _posArray select 2 == array of booleans, dictates whether to play smoke effect on the different position selection values.
		// _posArray select 3 == array of booleans, dictates whether to play fire effect on the different position selection values.
		
		private _config = _vehicle call CBA_fnc_getObjectConfig;
		private _positions = getArray (_config >> "ace_cookoff_cookoffSelections") select {!((_vehicle selectionPosition _x) isEqualTo [0,0,0])};
		if (_positions isEqualTo []) then {
			_positions pushBack "#noselection";
		};
		_posArray pushback _positions;
		
		private _fireOrSmoke = false;
		
		// Add smoke to barrel?
		private "_addEffect";
		if (random 1 < 0.30 and _showEffects) then {_addEffect = true; _fireOrSmoke = true} else {_addEffect = false};
		_posArray pushback [_addEffect];
		
		// Add smoke to positions?
		_chance = call{ if(_onFire)then{0.95}else{0.30} };
		private _array1 = [];
		{
			if (random 1 < _chance and _showEffects) then {_addEffect = true; _fireOrSmoke = true} else {_addEffect = false};
			_array1 pushback _addEffect;
		} forEach _positions;
		_posArray pushBack _array1;
		
		// Add fire to positions?
		_chance = call{ if(_onFire)then{0.95}else{0} };
		_array1 = [];
		{
			if (random 1 < _chance and _showEffects) then {_addEffect = true; _fireOrSmoke = true} else {_addEffect = false};
			_array1 pushback _addEffect;
		} forEach _positions;
		_posArray pushBack _array1;
		
		
		// If no smoke/fire, then allow the crew to stay inside longer.
		if (!_fireOrSmoke and (random 1 < 0.7)) then {
			_DISMOUNT_TIME =  15 + (random [70, 0, 70]);
		};
		
		// If vehicle has more than 3 crew, we'll assume its a personnel carrier. So, we'll try to dismount faster to make it look as realistic as possible.
		if ({alive _x} count crew _vehicle > 3 and random 1 < 0.8) then {
			_DISMOUNT_TIME = (_DISMOUNT_TIME / 4) max 4;
		};
		
		// Set _init to 2 to allow other machines to run the code.
		_init = 2;
		
		// Tell other machines to run this code using the numbers we've chosen.
		["ace_cookoff_cookOff", [_vehicle, _init, _DETONATE_TIME, _IGNITE_TIME, _SMOKE_TIME, _FLAMESTART_TIME, _FLAME_TIME, _DISMOUNT_TIME, _detonate, _flameJet, _onFire, _posArray, _posHit, _DAMAGE_TIME]] call CBA_fnc_remoteEvent;
	};
	
	
	// Debug stuff.
	if (isNil "t1_cookoff_debug") then {t1_cookoff_debug = false};
	if (t1_cookoff_debug) then {
		systemChat format ["DETO: %1 -- FLAM: %2 -- FIRE: %3 -- IGNT: %4 -- DETT: %5 -- SMKT: %6 -- FLMST: %7 -- FLMT: %8 -- DSMT: %9 -- DMGT: %10", _detonate, _flameJet, _onFire, _IGNITE_TIME, _DETONATE_TIME, _SMOKE_TIME, _FLAMESTART_TIME, _FLAME_TIME, _DISMOUNT_TIME, _DAMAGE_TIME];
		diag_log "TEST123 COOKOFF START";
		diag_log format["_vehicle: %1 || _DETONATE_TIME: %2 || _IGNITE_TIME: %3 || _SMOKE_TIME: %4 || _FLAMESTART_TIME: %5 || _FLAME_TIME: %6 || _DISMOUNT_TIME: %7 || _DAMAGE_TIME: %8", _vehicle, _DETONATE_TIME, _IGNITE_TIME, _SMOKE_TIME, _FLAMESTART_TIME, _FLAME_TIME, _DISMOUNT_TIME, _DAMAGE_TIME];
		diag_log format["_init: %1 || t1_ace_cookOff_fix_var: %2 || _detonate: %3 || _flameJet: %4 || _onFire: %5 || _posHit: %6 || _posArray: %7", _init, _vehicle getVariable ["t1_ace_cookOff_fix_var", "NOT SET"], _detonate, _flameJet, _onFire, _posHit, _posArray];
		diag_log "TEST123 COOKOFF END";
	};
	
	
	if (local _vehicle) then {
		
		// Allow AI crew to stay inside immmobilized vehicle. But only if they are still inside, otherwise they might decide to enter a disabled vehicle.
		if (random 1 < 0.9) then {
			if ({alive _x and !isPlayer _x} count crew _vehicle > 0) then {
				_vehicle allowCrewInImmobile true;
			};
		};
		
		// Damage vehicle.
		if (_vehicle getHitPointDamage "hitHull" < 0.7) then {
			_vehicle setHitPointDamage ["hitHull", 0.7];
		};
		
		if (random 1 < 0.4) then {
			if (random 1 < 0.35) then {
				_vehicle setHitPointDamage ["hitEngine", 1];
			} else {
				_vehicle setFuel 0;
			};
		};
		
		if (random 1 < 0.4) then {
			_vehicle setHitPointDamage ["hitTurret", 1];
		};
		
		// Lock vehicle if no players inside.
		if ({alive _x and isPlayer _x} count crew _vehicle == 0) then {_vehicle setVehicleLock "LOCKED"};
		
		// Disable radar.
		if (random 1 < 0.6) then {
			private _hasRadar = false;
			{
				if (count _x > 0) then {
					{
						if (toLower _x == "activeradarsensorcomponent") exitWith {_hasRadar = true};
					} forEach _x;
				};
				if (_hasRadar) exitWith {};
				
			} forEach (listVehicleSensors _vehicle);
			
			if (_hasRadar) then {
				[_vehicle, 0] remoteExec ["ace_cookoff_fnc_t1_disableRadar", 0, false];
			};
		};
	};
	
	
	// Kill random AI crew members.
	{
		if ((local _x) and (!isPlayer _x) and (alive _x) and (_x != driver _vehicle) and (_x != gunner _vehicle) and (random 1 < 0.25)) then {
			_x setDamage 1;
		};
	} forEach crew _vehicle;
	
	if (random 1 < 0.3) then {
		private _driver = driver _vehicle;
		if (!isNil "_driver" and {(local _driver) and (!isPlayer _driver) and (alive _driver)}) then {_driver setDamage 1};
	};
	
	private _gunner = gunner _vehicle;
	if (random 1 < 0.35) then {
		if (!isNil "_gunner" and {(local _gunner) and (!isPlayer _gunner) and (alive _gunner)}) then {_gunner setDamage 1};
	};
	
	
	// Make gunner unable to aim for a moment.
	// Then allow him to aim for a brief moment before turning it off again when the ignition part starts.
	if (random 1 < 0.95) then {
		if (!isNil "_gunner" and {(local _gunner) and (!isPlayer _gunner) and (alive _gunner)}) then {
			private _waitTime = time + _IGNITE_TIME;
			private _skill = _gunner skill "aimingSpeed";
			_gunner setskill ["aimingSpeed", 0];
			_gunner doWatch objNull;
			
			[_gunner, _skill, _vehicle, _waitTime] spawn {
				params ["_gunner", "_skill", "_vehicle", "_waitTime"];
				sleep (5 + (random [15, 0, 15]));
				
				// Allow gunner to aim again. When the ignition starts, disable the aim again until he has left the vehicle.
				if (!isNull _gunner and {alive _gunner}) then {
					if (time < _waitTime) then {_gunner setskill ["aimingSpeed", _skill]};
					
					for "_i" from 0 to 100 do {
						if (isNull _vehicle or {!alive _vehicle}) exitWith {};
						if (isNull _gunner or {!alive _gunner or !(_gunner in (crew _vehicle))}) exitWith {};
						if (time > _waitTime) then {
							_gunner setskill ["aimingSpeed", 0];
							_gunner doWatch objNull;
							_waitTime = 999999;
						};
						sleep 1;
					};
					
					if (!isNull _gunner and {alive _gunner}) then {_gunner setskill ["aimingSpeed", _skill]};
				};
			};
		};
	};
	
	
	// Dismount AI crew.
	[_vehicle, _DISMOUNT_TIME] spawn {
		params ["_vehicle", "_DISMOUNT_TIME"];
		
		sleep _DISMOUNT_TIME;
		if (isNull _vehicle or {!alive _vehicle}) exitWith {};
		
		private _randomPosition = _vehicle getPos [100, random 360];
		
		// Run code twice to make sure no one gets left behind in the vehicle (in the event the AI decides to mount up again).
		for "_i" from 0 to 1 do {
			if (isNull _vehicle or {!alive _vehicle}) exitWith {};
			{
				if (local _x and alive _x and {!(_x call ace_common_fnc_isPlayer)}) then {
					unassignVehicle _x;
					_x leaveVehicle _vehicle;
					_x doMove _randomPosition;
				};
			} forEach crew _vehicle;
			
			sleep 15;
		};
		
		if (local _vehicle) then {_vehicle allowCrewInImmobile false};
		
		sleep 15;
		if (isNull _vehicle or {!alive _vehicle}) exitWith {};
		
		// Kill remaining AI crew, in case the AI has disregarded our scripting orders and got back inside again.
		{
			if (local _x and alive _x and {!(_x call ace_common_fnc_isPlayer)}) then {
				_x setdamage 1;
			};
		} forEach crew _vehicle;
	};
	
	
	// Dismount/kill players and show flame effect for players inside vehicle.
	// After certain amount of time, lock vehicle and dismount alive players, wait a bit more, then kill unconscious players.
	[_vehicle, _IGNITE_TIME, _FLAMESTART_TIME, _flameJet, _onFire] spawn {
		params ["_vehicle", "_IGNITE_TIME", "_FLAMESTART_TIME", "_flameJet", "_onFire"];
		
		[_vehicle, _IGNITE_TIME, _FLAMESTART_TIME, _flameJet, _onFire] spawn {
			params ["_vehicle", "_IGNITE_TIME", "_FLAMESTART_TIME", "_flameJet", "_onFire"];
			
			sleep ((_IGNITE_TIME + _FLAMESTART_TIME) * 0.7);
			if (isNull _vehicle or {!alive _vehicle}) exitWith {};
			
			if (local _vehicle) then {_vehicle setVehicleLock "LOCKED"};
			
			if (hasInterface) then {
				if (alive player and player in (crew _vehicle) and !(player getVariable ["ACE_isUnconscious", false])) then {
					player action ["GetOut", _vehicle];
				};
				
				// Dismount unconscious players that wake up. If vehicle is on fire/jet, kill unconscious players after a certain amount of time.
				private _kill = true;
				if (!_onFire and !_flameJet) then {_kill = false};
				private _killTime = 0;
				if (_onFire) then {_killTime = time + 120};
				if (_flameJet) then {_killTime = time + (120 min (((_IGNITE_TIME + _FLAMESTART_TIME) * 0.3) + 1.5))};
				
				while {!isNull _vehicle and {alive _vehicle and alive player and player in (crew _vehicle)}} do {
					if (player getVariable ["ACE_isUnconscious", false]) then {
						if (_kill and {time > _killTime}) then {
							player setDamage 1;
						};
					} else {
						player action ["GetOut", _vehicle];
					};
					
					sleep 2;
				};
			};
		};
		
		// Indicator for crew to show that the vehicle is on fire.
		if (hasInterface) then {
			private _fnc_FlameEffect = {
				params ["_vehicle", "_fnc_FlameEffect", "_counter"];
				
				if (_vehicle == cameraOn) then {
					[] call BIS_fnc_flamesEffect;
				};
				
				_counter = _counter - 1;
				
				if (
					isNull _vehicle or
					{!alive _vehicle or !alive player or (!(player in (crew _vehicle)) and _counter < 0)}
				) exitWith {};
				
				[_fnc_FlameEffect, [_vehicle, _fnc_FlameEffect, _counter], FLAME_EFFECT_DELAY] call CBA_fnc_waitAndExecute
			};
			
			// Recursive function.
			[_vehicle, _fnc_FlameEffect, ceil((_IGNITE_TIME + _FLAMESTART_TIME)/FLAME_EFFECT_DELAY)] call _fnc_FlameEffect;
		};
	};
	
	
	// Impact smoke/fire effects.
	[_vehicle, _SMOKE_TIME, _posHit] spawn {
		params ["_vehicle", "_SMOKE_TIME", "_posHit"];
		
		if (count _posHit == 0) exitWith {};
		
		if (count (_posHit select 0) > 0) then {
			private _position = _posHit select 0;
			private _showSmoke = _posHit select 1;
			private _showFire = _posHit select 2;
			private _effects = [];
			
			if (_showSmoke) then {
				private _smoke = "#particlesource" createVehicleLocal [0,0,0];
				_smoke setParticleClass "SmallWreckSmoke";
				_smoke setPosASL _position;
				_smoke attachTo [_vehicle];
				_effects pushBack _smoke;
			};
			
			if (_showFire) then {
				private _fire = "#particlesource" createVehicleLocal [0,0,0];
				_fire setParticleClass "ObjectDestructionFire2Small";
				_fire setParticleFire [0.12, 0.25, 0.1];
				_fire setPosASL _position;
				_fire attachTo [_vehicle];
				_effects pushBack _fire;
			};
			
			for "_i" from 1 to (_SMOKE_TIME / 1.5) do {
				if (isNull _vehicle or {!alive _vehicle}) exitWith {};
				sleep 1;
			};
			
			{
				deleteVehicle _x;
			} forEach _effects;
		};
	};
	
	
	// Delay before other effects are run.
	sleep _IGNITE_TIME;
	if (isNull _vehicle or {!alive _vehicle}) exitWith {};
	
	
	// Blow up vehicle.
	[_vehicle, _DETONATE_TIME, _detonate] spawn {
		params ["_vehicle", "_DETONATE_TIME", "_detonate"];
		
		if (_detonate) then {
			sleep (_DETONATE_TIME * 0.9);
			if (isNull _vehicle or {!alive _vehicle}) exitWith {};
			
			if (local _vehicle) then {
				if (random 1 < 0.2) then {
					_vehicle setvariable ["ace_cookoff_enableAmmoCookoff", false, true];
				} else {
					
					if (random 1 < 0.4) then {clearItemCargoGlobal _vehicle};
					if (random 1 < 0.4) then {clearMagazineCargoGlobal _vehicle};
					if (random 1 < 0.4) then {clearWeaponCargoGlobal _vehicle};
					
					{
						_turret = _x;
						{
							if (random 1 < 0.4) then {_vehicle removeMagazineTurret [_x,_turret]};
						} forEach (_vehicle magazinesTurret _turret);
					} forEach (allTurrets _vehicle);
				};
				
				sleep (_DETONATE_TIME * 0.1);
				if (isNull _vehicle or {!alive _vehicle}) exitWith {};
				
				_vehicle setDamage 1;
			};
			
		// If not detonate, then set a var that can be used to check if the vehicle is disabled.
		} else {
			if (local _vehicle) then {_vehicle setVariable ["ace_cookoff_vehDisabled", true, true]};
		};
	};
	
	
	// Smoke/fire effects.
	[_vehicle, _SMOKE_TIME, _onFire, _posArray] spawn {
		params ["_vehicle", "_SMOKE_TIME", "_onFire", "_posArray"];
		
		private _positions = _posArray select 0;
		private _smokeFromBarrel = (_posArray select 1) select 0;
		private _smokePosArray = _posArray select 2;
		private _firePosArray = _posArray select 3;
		private _effects = [];
		
		// Add smoke effect to barrel.
		if (_smokeFromBarrel) then {
			private _turretConfig = [_vehicle, [0]] call CBA_fnc_getTurret;
			private _positionBarrelEnd = getText (_turretConfig >> "gunBeg");
			
			private _smokeBarrel = "#particlesource" createVehicleLocal [0,0,0];
			_smokeBarrel setParticleClass "MediumDestructionSmoke";
			_smokeBarrel attachTo [_vehicle, [0,0,0], _positionBarrelEnd];
			_effects pushBack _smokeBarrel;
		};
		
		// Add smoke/fire effects using positions from config.
		for "_i" from 0 to ((count _positions)-1) do {
			private _item = _positions select _i;
			private _showSmoke = _smokePosArray select _i;
			private _showFire = _firePosArray select _i;
			private _position = [-0.5 + random 1, -3 + random 2, -0.3];
			
			if !(_item isEqualTo "#noselection") then {
				_position = _vehicle selectionPosition _item;
			};
			
			if (_showSmoke) then {
				private _smoke = "#particlesource" createVehicleLocal [0,0,0];
				_smoke setParticleClass "ObjectDestructionSmoke1_2Smallx";
				_smoke attachTo [_vehicle, _position];
				_effects pushBack _smoke;
			};
			
			if (_showFire) then {
				private _fire = "#particlesource" createVehicleLocal [0,0,0];
				_fire setParticleClass "ObjectDestructionFire2";
				_fire setParticleFire [0.12, 0.25, 0.1];
				_fire attachTo [_vehicle, _position];
				_effects pushBack _fire;
			};
		};
		
		// Disable turret.
		if (_onFire and local _vehicle and random 1 < 0.8) then {
			_vehicle setHitPointDamage ["hitTurret", 1];
		};
		
		for "_i" from 1 to _SMOKE_TIME do {
			if (isNull _vehicle or {!alive _vehicle}) exitWith {};
			sleep 1;
		};
		
		{
			deleteVehicle _x;
		} forEach _effects;
	};
	
	
	// Flame jet effect.
	[_vehicle, _FLAMESTART_TIME, _FLAME_TIME, _flameJet, _posArray, _DAMAGE_TIME] spawn {
		params ["_vehicle", "_FLAMESTART_TIME", "_FLAME_TIME", "_flameJet", "_posArray", "_DAMAGE_TIME"];
		
		if (_flameJet) then {
			
			sleep _FLAMESTART_TIME;
			if (isNull _vehicle or {!alive _vehicle}) exitWith {};
			
			// Disable turret.
			if (local _vehicle and random 1 < 0.9) then {
				_vehicle setHitPointDamage ["hitTurret", 1];
			};
			
			// Remove fuel.
			_vehicle setFuel 0;
			
			private _positions = _posArray select 0;
			private _effects = [];
			
			// Light effect.
			private _light = "#lightpoint" createVehicleLocal [0,0,0];
			_light setLightBrightness 0.7;
			_light setLightAmbient [1,0.4,0.15];
			_light setLightColor [1,0.4,0.15];
			_light lightAttachObject [_vehicle, [0,0,4]];
			_effects pushback _light;
			
			// cookoffs
			private _position = [];
			{
				_position = [0,-1,-1];
				
				if !(_x isEqualTo "#noselection") then {
					_position = _vehicle selectionPosition _x;
				};
				
				private _fire = "#particlesource" createVehicleLocal [0,0,0];
				_fire setParticleClass "ace_cookoff_CookOff";
				_fire setParticleFire [0.12, 3.5, 0.1];
				_fire attachTo [_vehicle, _position];
				
				_effects pushBack _fire;
			} forEach _positions;
			
			// Flame sound effect.
			private ["_sound1","_sound2"];
			switch (floor(random 3)) do {
				case 0 : {
					_sound1 = "t1_ace_cookoff_cookoff1";
					_sound2 = "t1_ace_cookoff_cookoff1_end";
				};
				case 1 : {
					_sound1 = "t1_ace_cookoff_cookoff2";
					_sound2 = "t1_ace_cookoff_cookoff2_end";
				};
				case 2 : {
					_sound1 = "t1_ace_cookoff_cookoff3";
					_sound2 = "t1_ace_cookoff_cookoff3_end";
				};
			};
			if (count _position == 0) then {_position = [0,-1,-1]};
			private _logic1 = "logic" createVehicleLocal [0,0,0];
			private _logic2 = "logic" createVehicleLocal [0,0,0];
			_logic1 attachTo [_vehicle, _position];
			_logic2 attachTo [_vehicle, _position];
			_logic1 say3D _sound1;
			
			// Kill AI gunner.
			private _gunner = gunner _vehicle;
			if (!isNil "_gunner" and {local _gunner and !isPlayer _gunner and alive _gunner}) then {_gunner setDamage 1};
			
			// Kill AI driver, random chance.
			private _driver = driver _vehicle;
			if (!isNil "_driver" and {local _driver and !isPlayer _driver and alive _driver and random 1 < 0.8}) then {_driver setDamage 1};
			
			// Kill or dismount remaining AI crew.
			[_vehicle] spawn {
				params ["_vehicle"];
				private _randomPosition = _vehicle getPos [100, random 360];
				private _deathChance = 0.5;
				{
					if (local _x and alive _x and {!(_x call ace_common_fnc_isPlayer)}) then {
						if (random 1 < _deathChance or _x getVariable ["ACE_isUnconscious", false]) then {
							_x setDamage 1;
						} else {
							unassignVehicle _x;
							_x leaveVehicle _vehicle;
							_x doMove _randomPosition;
							if (random 1 < 0.6) then {_x setDamage 0.4};
						};
					};
					_deathChance = _deathChance + 0.08;
					
				} forEach crew _vehicle;
			};
			
			for "_i" from 1 to _FLAME_TIME do {
				if (isNull _vehicle or {!alive _vehicle}) exitWith {};
				sleep 1;
			};
			
			// Play sound tail.
			_logic2 say3D _sound2;
			sleep 2.1;
			
			// Remove main sound.
			detach _logic1;
			_logic1 setPosASL [-1000,-1000,-1000];
			deleteVehicle _logic1;
			
			// Remove effects.
			{
				deleteVehicle _x;
			} forEach _effects;
			
			// Remove sound tail.
			sleep 5;
			detach _logic2;
			_logic2 setPosASL [-1000,-1000,-1000];
			deleteVehicle _logic2;
		};
	};
	
	
	// Damage/lock vehicle over time.
	[_vehicle, _IGNITE_TIME, _FLAMESTART_TIME, _flameJet, _onFire, _DAMAGE_TIME] spawn {
		params ["_vehicle", "_IGNITE_TIME", "_FLAMESTART_TIME", "_flameJet", "_onFire", "_DAMAGE_TIME"];
		
		if (_onFire or _flameJet) then {
			private _sleepTime = _DAMAGE_TIME;
			if (_flameJet) then {_sleepTime = ((_IGNITE_TIME + _FLAMESTART_TIME) * 0.8) min _DAMAGE_TIME};
			
			sleep _sleepTime;
			if (isNull _vehicle or {!alive _vehicle}) exitWith {};
			
			if (local _vehicle) then {
				_vehicle setVehicleLock "LOCKED";
				if (hasInterface and {alive player and player in (crew _vehicle) and !(player getVariable ["ACE_isUnconscious", false])}) then {
					player action ["GetOut", _vehicle];
				};
				
				if (random 1 < 0.35) then {
					_vehicle setHitPointDamage ["hitEngine", 1];
				} else {
					_vehicle setFuel 0;
				};
				
				if (random 1 < 0.5) then {
					_vehicle setHitPointDamage ["hitTurret", 1];
				};
				
				private _hasRadar = false;
				{
					if (count _x > 0) then {
						{
							if (toLower _x == "activeradarsensorcomponent") exitWith {_hasRadar = true};
						} forEach _x;
					};
					if (_hasRadar) exitWith {};
					
				} forEach (listVehicleSensors _vehicle);
				
				if (_hasRadar) then {
					[_vehicle, 0] remoteExec ["ace_cookoff_fnc_t1_disableRadar", 0, false];
				};
			};
			
		} else {
			
			if (local _vehicle) then {
				sleep (random 10);
				if (isNull _vehicle or {!alive _vehicle}) exitWith {};
				
				if (random 1 < 0.1) then {
					_vehicle setHitPointDamage ["hitEngine", 1];
				} else {
					_vehicle setFuel 0;
				};
				
				if (random 1 < 0.1) then {
					_vehicle setHitPointDamage ["hitTurret", 1];
				};
				
				private _hasRadar = false;
				{
					if (count _x > 0) then {
						{
							if (toLower _x == "activeradarsensorcomponent") exitWith {_hasRadar = true};
						} forEach _x;
					};
					if (_hasRadar) exitWith {};
					
				} forEach (listVehicleSensors _vehicle);
				
				if (_hasRadar) then {
					[_vehicle, 30 + random 60] remoteExec ["ace_cookoff_fnc_t1_disableRadar", 0, false];
				};
			};
		};
	};
};