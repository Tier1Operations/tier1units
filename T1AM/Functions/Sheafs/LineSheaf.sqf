private["_tube","_asset","_pos","_sheafDir","_sheafDist","_elevation","_height","_nrOfSectors"];

_tube = _this select 0;
_asset = _this select 1;
_pos = _this select 2;
_sheafDir = _this select 3;
_sheafDist = _this select 4;

if (_sheafDir < 1) then {_sheafDir = 1};
if (_sheafDir > 360) then {_sheafDir = 360};

_pos = ASLtoAGL _pos;
_elevation = _pos select 2;		// Remember the height above ground for airburst.

// Divide the target area into multiple sectors along a line.
// Max 40 sectors in total.
// _spread is meters between each sector.
// If the distance is exactly that of _spread or smaller, it will only pick two sectors (start and end of line).
// It will memorize at which sectors the tubes have already fired, then pick a sector that hasn't been fired at yet.
// This will spread out the fire more evenly over the target area.

private _spread = 33;

if (_sheafDist > _spread) then {
	_nrOfSectors = 1;
	while {_sheafDist > 0} do {
		_sheafDist = _sheafDist - _spread;
		_nrOfSectors = _nrOfSectors + 1;
	};
	_nrOfSectors = _nrOfSectors min 40;
	
} else {
	_nrOfSectors = 2;
};

// Get sector data.   true = has been fired at / false = not fired at yet
private _getSectors = _asset getVariable ["T1AM_sheafSectorsLine", [false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false]];
private _sector1 = _getSectors select 0;
private _sector2 = _getSectors select 1;
private _sector3 = _getSectors select 2;
private _sector4 = _getSectors select 3;
private _sector5 = _getSectors select 4;
private _sector6 = _getSectors select 5;
private _sector7 = _getSectors select 6;
private _sector8 = _getSectors select 7;
private _sector9 = _getSectors select 8;
private _sector10 = _getSectors select 9;
private _sector11 = _getSectors select 10;
private _sector12 = _getSectors select 11;
private _sector13 = _getSectors select 12;
private _sector14 = _getSectors select 13;
private _sector15 = _getSectors select 14;
private _sector16 = _getSectors select 15;
private _sector17 = _getSectors select 16;
private _sector18 = _getSectors select 17;
private _sector19 = _getSectors select 18;
private _sector20 = _getSectors select 19;
private _sector21 = _getSectors select 20;
private _sector22 = _getSectors select 21;
private _sector23 = _getSectors select 22;
private _sector24 = _getSectors select 23;
private _sector25 = _getSectors select 24;
private _sector26 = _getSectors select 25;
private _sector27 = _getSectors select 26;
private _sector28 = _getSectors select 27;
private _sector29 = _getSectors select 28;
private _sector30 = _getSectors select 29;
private _sector31 = _getSectors select 30;
private _sector32 = _getSectors select 31;
private _sector33 = _getSectors select 32;
private _sector34 = _getSectors select 33;
private _sector35 = _getSectors select 34;
private _sector36 = _getSectors select 35;
private _sector37 = _getSectors select 36;
private _sector38 = _getSectors select 37;
private _sector39 = _getSectors select 38;
private _sector40 = _getSectors select 39;
private _allSectors = [_sector1,_sector2,_sector3,_sector4,_sector5,_sector6,_sector7,_sector8,_sector9,_sector10,_sector11,_sector12,_sector13,_sector14,_sector15,_sector16,_sector17,_sector18,_sector19,_sector20,_sector21,_sector22,_sector23,_sector24,_sector25,_sector26,_sector27,_sector28,_sector29,_sector30,_sector31,_sector32,_sector33,_sector34,_sector35,_sector36,_sector37,_sector38,_sector39,_sector40];

// Reset if all sectors have been fired at.
private _count = 0;
{
	if (_x) then {_count = _count + 1};
	if (_count == _nrOfSectors) exitWith {};
} forEach _allSectors;

if (_count == _nrOfSectors) then {
	_asset setVariable ["T1AM_sheafSectorsLine", [false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false]];
	_sector1 = false;
	_sector2 = false;
	_sector3 = false;
	_sector4 = false;
	_sector5 = false;
	_sector6 = false;
	_sector7 = false;
	_sector8 = false;
	_sector9 = false;
	_sector10 = false;
	_sector11 = false;
	_sector12 = false;
	_sector13 = false;
	_sector14 = false;
	_sector15 = false;
	_sector16 = false;
	_sector17 = false;
	_sector18 = false;
	_sector19 = false;
	_sector20 = false;
	_sector21 = false;
	_sector22 = false;
	_sector23 = false;
	_sector24 = false;
	_sector25 = false;
	_sector26 = false;
	_sector27 = false;
	_sector28 = false;
	_sector29 = false;
	_sector30 = false;
	_sector31 = false;
	_sector32 = false;
	_sector33 = false;
	_sector34 = false;
	_sector35 = false;
	_sector36 = false;
	_sector37 = false;
	_sector38 = false;
	_sector39 = false;
	_sector40 = false;
	_allSectors = [_sector1,_sector2,_sector3,_sector4,_sector5,_sector6,_sector7,_sector8,_sector9,_sector10,_sector11,_sector12,_sector13,_sector14,_sector15,_sector16,_sector17,_sector18,_sector19,_sector20,_sector21,_sector22,_sector23,_sector24,_sector25,_sector26,_sector27,_sector28,_sector29,_sector30,_sector31,_sector32,_sector33,_sector34,_sector35,_sector36,_sector37,_sector38,_sector39,_sector40];
};

// Pick all sectors that haven't been fired at yet.
private _sectorsNotFired = [];
for "_i" from 1 to _nrOfSectors do {
	if (!(_allSectors select (_i - 1))) then {_sectorsNotFired pushback _i};
	if (_i == _nrOfSectors) exitWith {};
};

// Pick one of the sectors that hasn't been fired at.
private _nr = (_sectorsNotFired select (floor(random count _sectorsNotFired)));

switch _nr do {
	
	case 1 : {
		//_pos = _pos;	// Pick starting pos.
		_sector1 = true;
	};
	case 2 : {
		_pos = [_pos select 0, _pos select 1] getPos [_spread*1, _sheafDir];
		_sector2 = true;
	};
	case 3 : {
		_pos = [_pos select 0, _pos select 1] getPos [_spread*2, _sheafDir];
		_sector3 = true;
	};
	case 4 : {
		_pos = [_pos select 0, _pos select 1] getPos [_spread*3, _sheafDir];
		_sector4 = true;
	};
	case 5 : {
		_pos = [_pos select 0, _pos select 1] getPos [_spread*4, _sheafDir];
		_sector5 = true;
	};
	case 6 : {
		_pos = [_pos select 0, _pos select 1] getPos [_spread*5, _sheafDir];
		_sector6 = true;
	};
	case 7 : {
		_pos = [_pos select 0, _pos select 1] getPos [_spread*6, _sheafDir];
		_sector7 = true;
	};
	case 8 : {
		_pos = [_pos select 0, _pos select 1] getPos [_spread*7, _sheafDir];
		_sector8 = true;
	};
	case 9 : {
		_pos = [_pos select 0, _pos select 1] getPos [_spread*8, _sheafDir];
		_sector9 = true;
	};
	case 10 : {
		_pos = [_pos select 0, _pos select 1] getPos [_spread*9, _sheafDir];
		_sector10 = true;
	};
	case 11 : {
		_pos = [_pos select 0, _pos select 1] getPos [_spread*10, _sheafDir];
		_sector11 = true;
	};
	case 12 : {
		_pos = [_pos select 0, _pos select 1] getPos [_spread*11, _sheafDir];
		_sector12 = true;
	};
	case 13 : {
		_pos = [_pos select 0, _pos select 1] getPos [_spread*12, _sheafDir];
		_sector13 = true;
	};
	case 14 : {
		_pos = [_pos select 0, _pos select 1] getPos [_spread*13, _sheafDir];
		_sector14 = true;
	};
	case 15 : {
		_pos = [_pos select 0, _pos select 1] getPos [_spread*14, _sheafDir];
		_sector15 = true;
	};
	case 16 : {
		_pos = [_pos select 0, _pos select 1] getPos [_spread*15, _sheafDir];
		_sector16 = true;
	};
	case 17 : {
		_pos = [_pos select 0, _pos select 1] getPos [_spread*16, _sheafDir];
		_sector17 = true;
	};
	case 18 : {
		_pos = [_pos select 0, _pos select 1] getPos [_spread*17, _sheafDir];
		_sector18 = true;
	};
	case 19 : {
		_pos = [_pos select 0, _pos select 1] getPos [_spread*18, _sheafDir];
		_sector19 = true;
	};
	case 20 : {
		_pos = [_pos select 0, _pos select 1] getPos [_spread*19, _sheafDir];
		_sector20 = true;
	};
	case 21 : {
		_pos = [_pos select 0, _pos select 1] getPos [_spread*20, _sheafDir];
		_sector21 = true;
	};
	case 22 : {
		_pos = [_pos select 0, _pos select 1] getPos [_spread*21, _sheafDir];
		_sector22 = true;
	};
	case 23 : {
		_pos = [_pos select 0, _pos select 1] getPos [_spread*22, _sheafDir];
		_sector23 = true;
	};
	case 24 : {
		_pos = [_pos select 0, _pos select 1] getPos [_spread*23, _sheafDir];
		_sector24 = true;
	};
	case 25 : {
		_pos = [_pos select 0, _pos select 1] getPos [_spread*24, _sheafDir];
		_sector25 = true;
	};
	case 26 : {
		_pos = [_pos select 0, _pos select 1] getPos [_spread*25, _sheafDir];
		_sector26 = true;
	};
	case 27 : {
		_pos = [_pos select 0, _pos select 1] getPos [_spread*26, _sheafDir];
		_sector27 = true;
	};
	case 28 : {
		_pos = [_pos select 0, _pos select 1] getPos [_spread*27, _sheafDir];
		_sector28 = true;
	};
	case 29 : {
		_pos = [_pos select 0, _pos select 1] getPos [_spread*28, _sheafDir];
		_sector29 = true;
	};
	case 30 : {
		_pos = [_pos select 0, _pos select 1] getPos [_spread*29, _sheafDir];
		_sector30 = true;
	};
	case 31 : {
		_pos = [_pos select 0, _pos select 1] getPos [_spread*30, _sheafDir];
		_sector31 = true;
	};
	case 32 : {
		_pos = [_pos select 0, _pos select 1] getPos [_spread*31, _sheafDir];
		_sector32 = true;
	};
	case 33 : {
		_pos = [_pos select 0, _pos select 1] getPos [_spread*32, _sheafDir];
		_sector33 = true;
	};
	case 34 : {
		_pos = [_pos select 0, _pos select 1] getPos [_spread*33, _sheafDir];
		_sector34 = true;
	};
	case 35 : {
		_pos = [_pos select 0, _pos select 1] getPos [_spread*34, _sheafDir];
		_sector35 = true;
	};
	case 36 : {
		_pos = [_pos select 0, _pos select 1] getPos [_spread*35, _sheafDir];
		_sector36 = true;
	};
	case 37 : {
		_pos = [_pos select 0, _pos select 1] getPos [_spread*36, _sheafDir];
		_sector37 = true;
	};
	case 38 : {
		_pos = [_pos select 0, _pos select 1] getPos [_spread*37, _sheafDir];
		_sector38 = true;
	};
	case 39 : {
		_pos = [_pos select 0, _pos select 1] getPos [_spread*38, _sheafDir];
		_sector39 = true;
	};
	case 40 : {
		_pos = [_pos select 0, _pos select 1] getPos [_spread*39, _sheafDir];
		_sector40 = true;
	};
};

_allSectors = [_sector1,_sector2,_sector3,_sector4,_sector5,_sector6,_sector7,_sector8,_sector9,_sector10,_sector11,_sector12,_sector13,_sector14,_sector15,_sector16,_sector17,_sector18,_sector19,_sector20,_sector21,_sector22,_sector23,_sector24,_sector25,_sector26,_sector27,_sector28,_sector29,_sector30,_sector31,_sector32,_sector33,_sector34,_sector35,_sector36,_sector37,_sector38,_sector39,_sector40];

// Save the new sector data onto the unit's group.
_asset setVariable ["T1AM_sheafSectorsLine", _allSectors];

_height = ((AGLtoASL [_pos select 0, _pos select 1, 0]) select 2) max 0;

[_pos select 0, _pos select 1, _height + _elevation]