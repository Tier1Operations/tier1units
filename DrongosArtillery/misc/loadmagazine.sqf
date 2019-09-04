// Forces a tube to load a certain magazine type by deleting all magazines and adding the desired one first
// It is a clumsy workaround, but BIS does not have a reliable command to do this
// Some code based off Smarter Tanks by Alarm9k

private ["_tube","_magazineType","_magazineRounds","_allMagazines","_omitOnce",
"_newMagazines","_index","_add","_magazine","_firstMag","_arrayNew","_lookForMag",
"_gunner","_assetType","_isMK41","_turretPath","_weapon","_reloadTime"];

_tube = _this select 0;
_magazineType = _this select 1;
_assetType = _this select 2;

_isMK41 = false;
if (_assetType == "MK41") then {_isMK41 = true};

//diag_log format ["LOADMAG - CURMAG: %1 - REQMAG: %2", currentMagazine _tube, _magazineType];

if ((currentMagazine _tube) == _magazineType) exitWith {
	//diag_log "LOADMAG - ABORT - MAG ALREADY LOADED";
};

_magazineRounds = 0;
_allMagazines = magazinesAmmo _tube;

// If tube doesn't have the requested ammo, then abort.
if ({(_x select 0) == _magazineType} count _allMagazines < 1) exitWith {
	_tube setVariable ["DTA_outOfAmmo", true];
	//diag_log "LOADMAG - ABORT - NO AMMO";
};

_gunner = gunner _tube;
_tube setWeaponReloadingTime [_gunner,(currentMuzzle _gunner), 0];

_firstMag = [];
_arrayNew = [];
_lookForMag = true;

{
	if (_lookForMag and {_x select 0 == _magazineType}) then {
		_lookForMag = false;
		_firstMag = + _x;
		_magazineRounds = _x select 1;
	} else {
		_arrayNew pushback _x;
	};
} forEach _allMagazines;

//diag_log format ["LOADMAG - _firstMag: %1 - _magazineRounds: %2", _firstMag, _magazineRounds];
//diag_log format ["LOADMAG - _arrayNew: %1", _arrayNew];
//diag_log format ["LOADMAG - _allMagazines: %1", _allMagazines];

{_tube removeMagazine (_x select 0)} forEach _allMagazines;

_tube addMagazine [_magazineType, _magazineRounds];

{_tube addMagazine _x} forEach _arrayNew;

_tube setWeaponReloadingTime [_gunner,(currentMuzzle _gunner), 0];

if (currentMagazine _tube != _magazineType) then {
	//diag_log "LOADMAG - WRONG MAG - TRYING TO LOAD CORRECT MAG";
	private _turretPath = (assignedVehicleRole _gunner) select 1;
	_tube loadMagazine [_turretPath , _tube currentWeaponTurret _turretPath, _magazineType];
	_tube setWeaponReloadingTime [_gunner,(currentMuzzle _gunner), 0];
};


_turretPath = (assignedVehicleRole _gunner) select 1;
_weapon = _tube currentWeaponTurret _turretPath;
_reloadTime = getNumber(configfile >> "CfgWeapons" >> _weapon >> "magazineReloadTime");

// Sometimes the reload time gets doubled on vanilla vehicles. So, double the number, just in case.
_reloadTime = _reloadTime * 2;

// Need to wait at least 18 seconds after loading new ammo to circumvent an aiming bug in Arma.
_reloadTime = _reloadTime max 18;

_tube setVariable ["DTA_ammoWaitingTime", _reloadTime];

if (_reloadTime > 45) then {
	[_tube, format["Changing ammo will take a while: %1 seconds.",_reloadTime], "beep"] call dta_fnc_SendComms;
};

//diag_log format ["LOADMAG - END - CURMAG: %1 - REQMAG: %2", currentMagazine _tube, _magazineType];