params ["_tube","_asset","_pos","_sizeX","_sizeY","_sheafDir"];

//DIAG_LOG format["BOX SHEAF - _tube: %1", _tube];
//DIAG_LOG format["BOX SHEAF - _asset: %1", _asset];
//DIAG_LOG format["BOX SHEAF - _pos: %1", _pos];
//DIAG_LOG format["BOX SHEAF - _sizeX: %1", _sizeX];
//DIAG_LOG format["BOX SHEAF - _sizeY: %1", _sizeY];
//DIAG_LOG format["BOX SHEAF - _sheafDir: %1", _sheafDir];

if (_sheafDir <= 0 or _sheafDir > 360) then {_sheafDir = 360};

_pos = ASLtoAGL _pos;
private _elevation = _pos select 2;		// Remember the height above ground for airburst.

// Divide the target area into 4 sectors.
// It will memorize at which sectors the tubes have already fired, then pick a sector that hasn't been fired at yet.
// This will spread out the fire more evenly over the target area.

// Get sector data. true = has been fired at / false = not fired at yet
private _sectors = _asset getVariable ["T1AM_sheafSectorsBox", [false, false, false, false]];
private _sector1 = _sectors select 0;
private _sector2 = _sectors select 1;
private _sector3 = _sectors select 2;
private _sector4 = _sectors select 3;

// All sectors have been fired at, so reset.
if (_sector1 and _sector2 and _sector3 and _sector4) then {
	_asset setVariable ["T1AM_sheafSectorsBox", [false, false, false, false]];
	_sector1 = false;
	_sector2 = false;
	_sector3 = false;
	_sector4 = false;
};

// Pick all sectors that haven't been fired at yet.
private _arraySectors = [];
if (!_sector1) then {_arraySectors pushback 1};
if (!_sector2) then {_arraySectors pushback 2};
if (!_sector3) then {_arraySectors pushback 3};
if (!_sector4) then {_arraySectors pushback 4};

// Pick one of the sectors that hasn't been fired at.
private _position = [];
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
_asset setVariable ["T1AM_sheafSectorsBox", [_sector1, _sector2, _sector3, _sector4]];


private _bPos = getPosASL _tube;

private _pX = _pos select 0;
private _pY = _pos select 1;

private _MpX = _position select 0;
private _MpY = _position select 1;

private _trans = _pos distance [_MpX,_MpY,0];
private _angleI = (_MpX - _pX) atan2 (_MpY - _pY);

private _dX = _trans * (sin (_angleI + _sheafDir));
private _dY = _trans * (cos (_angleI + _sheafDir));
_MpX = _pX + _dX;
_MpY = _pY + _dY;
_position = [_MpX, _MpY, 0];

private _height = ((AGLtoASL _position) select 2) max 0;

[_position select 0, _position select 1, _height + _elevation]