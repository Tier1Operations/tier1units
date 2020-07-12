// Forces a tube to load a mag instantly.
// It also consolidates the mags to avoid long reload times.
// It does this by removing all mags, removing the weapon, adding 1 mag, adding the weapon, then adding remaining mags.
// It is a clumsy workaround, but Arma does not have a command to do this or to check the status of mag reloads.

params ["_tube","_magazineType","_assetType"];

//DIAG_LOG format ["LOADMAG - TUBE: %1 - START", _tube];

sleep 0.05;

private _alreadyLoaded = false;
if ((currentMagazine _tube) == _magazineType) then {
	_alreadyLoaded = true;
	//DIAG_LOG format ["LOADMAG - TUBE: %1 - MAG ALREADY LOADED", _tube];
};
//DIAG_LOG format ["LOADMAG - TUBE: %1 - CURMAG: %2 - REQMAG: %3", _tube, currentMagazine _tube, _magazineType];


// Find the requested ammo and count the amount of rounds.
private _allMags = magazinesAmmo _tube;
private _nrRounds = 0;
private _otherMags = [];
{
	if ((_x select 0) == _magazineType and (_x select 1) > 0) then {
		_nrRounds = _nrRounds + (_x select 1);
	} else {
		_otherMags pushback _x;
	};
} forEach _allMags;

// If tube doesn't have the requested ammo, then abort.
if (_nrRounds < 1) exitWith {
	_tube setVariable ["T1AM_outOfAmmo", true];
	//DIAG_LOG format ["LOADMAG - TUBE: %1 - ABORT - NO AMMO",  _tube];
};


private _gunner = gunner _tube;
private _turretPath = (assignedVehicleRole _gunner) select 1;
private _weapon = _tube currentWeaponTurret _turretPath;


// The BM21 uses a pylon system and is therefore handled differently.
// BM21 using multiple ammo types at the same time is not supported.
if (_assetType == "BM21") exitWith {
	_tube setWeaponReloadingTime [_gunner, (currentMuzzle _gunner), 0];
	if (needReload _tube == 1) then {reload _tube};
	_tube loadMagazine [_turretPath , _tube currentWeaponTurret _turretPath, _magazineType];
	sleep 0.05;
	_tube setWeaponReloadingTime [_gunner, (currentMuzzle _gunner), 0];
	if (needReload _tube == 1) then {reload _tube};
	_tube setWeaponReloadingTime [_gunner, (currentMuzzle _gunner), 0];
	//DIAG_LOG format ["LOADMAG - TUBE: %1 - ABORT - _assetType: %2", _tube, _assetType];
};


// Calculate how many mags should be created, based on the total rounds and mag capacity.
private _magCap = (getNumber(configfile >> "CfgMagazines" >> _magazineType >> "count")) max 1;
private _magsToAdd = [];
for [{_i = _nrRounds - _magCap}, {true}, {_i = _i - _magCap}] do {
	if (_i < 0) exitWith {
		if (_i + _magCap > 0) then {
			_magsToAdd pushback [_magazineType, _i + _magCap];
		};
	};
	_magsToAdd pushback [_magazineType, _magCap];
};

//DIAG_LOG format ["LOADMAG - TUBE: %1 - _allMags: %2", _tube, _allMags];
//DIAG_LOG format ["LOADMAG - TUBE: %1 - _otherMags: %2", _tube, _otherMags];
//DIAG_LOG format ["LOADMAG - TUBE: %1 - _nrRounds: %2", _tube, _nrRounds];
//DIAG_LOG format ["LOADMAG - TUBE: %1 - _magCap: %2", _tube, _magCap];
//DIAG_LOG format ["LOADMAG - TUBE: %1 - _magsToAdd: %2", _tube, _magsToAdd];


// Remove weapon, remove mags. Add 1 mag, add weapon to load it instantly. Then add other mags.
_tube removeWeaponTurret [_weapon, _turretPath];
{_tube removeMagazinesTurret [(_x select 0), _turretPath]} forEach _allMags;

// Removing mags is not instant and the code continues before removal is finished.
// So, wait a bit.
private _timeout = time + 2;
while {time < _timeout or count (magazinesAmmo _tube) != 0} do {
	sleep 0.05;
};

private _addWeapon = true;
{
	_tube addMagazine _x;
	if (_addWeapon) then {
		_tube addWeaponTurret [_weapon, _turretPath];
		_addWeapon = false;
	};
} forEach _magsToAdd;
{_tube addMagazine _x} forEach _otherMags;

// The sleep is necessary for the code to be able to find the newly added weapon.
sleep 0.05;
_tube setWeaponReloadingTime [_gunner, (currentMuzzle _gunner), 0];


//DIAG_LOG format ["LOADMAG - TUBE: %1 - NEW LOADED WEAP: %2", _tube, _tube currentWeaponTurret _turretPath];
//DIAG_LOG format ["LOADMAG - TUBE: %1 - NEW LOADED AMMO: %2", _tube, currentMagazine _tube];
//DIAG_LOG format ["LOADMAG - TUBE: %1 - NEW ALLMAGS: %2", _tube, magazinesAmmo _tube];

if (!_alreadyLoaded) then {
	private _reloadTime = getNumber(configfile >> "CfgWeapons" >> _weapon >> "magazineReloadTime");
	
	// Sometimes the reload time gets doubled on vanilla vehicles. So, double the number, just in case.
	_reloadTime = _reloadTime * 2;
	
	private _waitingTime = (_tube getVariable ["T1AM_waitingTime", 0]) + _reloadTime;
	_tube setVariable ["T1AM_waitingTime", _waitingTime];
	
	if (_waitingTime > 45) then {
		[_tube, format["Changing ammo will take a while: %1 seconds.",_reloadTime], "beep"] call T1AM_Fnc_SendComms;
	};
};

//DIAG_LOG format ["LOADMAG - TUBE: %1 - END", _tube];