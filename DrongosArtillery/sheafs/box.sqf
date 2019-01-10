private ["_target","_pos","_asset","_elevation","_height","_sizeX","_angle","_ct","_position","_pX","_pY","_MpX",
"_MpY","_trans","_angleI","_mkr","_tube","_bPos","_dX0","_dY0","_sizeY","_sectors","_sector1","_sector2",
"_sector3","_sector4"];

_tube = _this select 0;
_asset = _this select 1;
_pos = _this select 2;
_sizeX = _this select 3;
_sizeY = _this select 4;

//diag_log format["BOX SHEAF - _sizeX: %1", _sizeX];
//diag_log format["BOX SHEAF - _sizeY: %1", _sizeY];

_pos = ASLtoAGL _pos;
_elevation = _pos select 2;		// Remember the height above ground for airburst.

// Divide the target area into 4 sectors.
// It will memorize at which sectors the tubes have already fired, then pick a sector that hasn't been fired at yet.
// This will spread out the fire more evenly over the target area.

// Get sector data. true = has been fired at / false = not fired at yet
_sectors = _asset getVariable ["dta_sheafSectorsBox", [false, false, false, false]];
_sector1 = _sectors select 0;
_sector2 = _sectors select 1;
_sector3 = _sectors select 2;
_sector4 = _sectors select 3;

// All sectors have been fired at, so reset.
if (_sector1 and _sector2 and _sector3 and _sector4) then {
	_asset setVariable ["dta_sheafSectorsBox", [false, false, false, false]];
	_sector1 = false;
	_sector2 = false;
	_sector3 = false;
	_sector4 = false;
};

// Pick all sectors that haven't been fired at yet.
_arraySectors = [];
if (!_sector1) then {_arraySectors pushback 1};
if (!_sector2) then {_arraySectors pushback 2};
if (!_sector3) then {_arraySectors pushback 3};
if (!_sector4) then {_arraySectors pushback 4};

// Pick one of the sectors that hasn't been fired at.
switch (_arraySectors select (floor(random count _arraySectors))) do {
	
	// Sector 1
	case 1 : {
		_position = [
			(_pos select 0) + (random  _sizeX),
			(_pos select 1) + (random _sizeY)
		];
		_sector1 = true;
	};
	
	// Sector 2
	case 2 : {
		_position = [
			(_pos select 0) + (random  _sizeX),
			(_pos select 1) - (random _sizeY)
		];
		_sector2 = true;
	};
	
	// Sector 3
	case 3 : {
		_position = [
			(_pos select 0) - (random  _sizeX),
			(_pos select 1) - (random _sizeY)
		];
		_sector3 = true;
	};
	
	// Sector 4
	case 4 : {
		_position = [
			(_pos select 0) - (random  _sizeX),
			(_pos select 1) + (random _sizeY)
		];
		_sector4 = true;
	};
};

// Save the new sector data onto the unit's group.
_asset setVariable ["dta_sheafSectorsBox", [_sector1, _sector2, _sector3, _sector4]];


_bPos = getPosASL _tube;
_ct = 0;

_dX0 = (_pos select 0) - (_bPos select 0);
_dY0 = (_pos select 1) - (_bPos select 1);
_angle = (_dX0 atan2 _dY0);

_pX = _pos select 0;
_pY = _pos select 1;

_MpX = _position select 0;
_MpY = _position select 1;

_trans = _pos distance [_MpX,_MpY,0];
_angleI = (_MpX - _pX) atan2 (_MpY - _pY);

_dX =_trans * (sin (_angleI + _angle));
_dY = _trans * (cos (_angleI + _angle));
_MpX = _pX + _dX;
_MpY = _pY + _dY;
_position = [_MpX, _MpY, 0];

_height = ((AGLtoASL _position) select 2) max 0;

[_position select 0, _position select 1, _height + _elevation]