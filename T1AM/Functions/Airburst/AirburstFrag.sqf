// Parameters:
// 0 Fragment start pos.
// 1 Explosion class.
// 2 Amount of projectiles created per target found.
// 3 Range at which a projectile will try not to miss. Past this range, the projectile will randomly miss.
// 4 Fragment max range.

#include "\T1AM\Defines.hpp"

params ["_pos","_airburstClass","_concentration","_effectiveRange","_maxRange"];

private _airburst = _airburstClass createVehicle [0,0,0];
_airburst setPosASL _pos;
triggerAmmo _airburst;

private _nearEntities = _pos nearEntities [["Man", "Air", "Car", "Motorcycle", "Tank", "StaticWeapon", "Ship", "ReammoBox_F"], _maxRange];

{
	for [{_i = 0}, {_i < (_concentration)}, {_i = _i + 1}] do {
		
		private _targetPos = getPosASL _x;
		if (_i == 0) then {
			_targetPos = [_targetPos select 0, _targetPos select 1, (_targetPos select 2) + 0.5];
		};
		
		private _distance = _pos vectorDistance _targetPos;
		private _speed = 700;
		private _fragClass = "ACE_frag_T1AM_HE_AIRBURST_S1";
		
		private _vector = _pos vectorFromTo _targetPos;
		private _a = _vector select 0;
		private _b = _vector select 1;
		private _c = _vector select 2;
		
		private _random = random 1;
		if ((_distance > _effectiveRange or _random > 0.5) and {_distance > _effectiveRange / 2}) then {
			if (_random > 0.3) then {
				_fragClass = "ACE_frag_T1AM_HE_AIRBURST_S2";
			};
			_speed = 300 + _maxRange + (random 300);
			_aF = _a / 8;
			_bF = _b / 8;
			_cF = _c / 8;
			_a = (_a - _aF) + random(_aF * 2);
			_b = (_b - _bF) + random(_bF * 2);
			_c = (_c - _cF) + random(_cF * 2);
		};
		
		_vector = [_speed * _a, _speed * _b, _speed * _c];
		
		private _frag = _fragClass createVehicle [0,0,0];
		_frag setPosASL _pos;
		_frag setVelocity _vector;
	};
} foreach _nearEntities;
