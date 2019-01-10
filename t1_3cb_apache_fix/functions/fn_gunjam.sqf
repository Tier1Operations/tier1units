/*
Author: www.3commandobrigade.com and Tim Beswick, with inspiration from Nodunit & Franze
Gun overheat
Arguments:
	0: vehicle
Return Value:
	none
*/

private["_veh", "_heat", "_time", "_prevTime", "_ammoCount"];

_veh = _this select 0;

// Get heat state
_heat = _veh getVariable["UK3CB_GunHeat", 0];
_prevTime = _veh getVariable["UK3CB_GunHeatTime", time];

// Increase heat
_heat = _heat + 1;

// Decrease heat - cooling over time (sec)
_time = time;
_heat = (_heat - (_time - _prevTime)) max 0;

// Save states
// deliberately only local
_veh setVariable["UK3CB_GunHeat", _heat];
_veh setVariable["UK3CB_GunHeatTime", _time];

//hint format["%1", _heat];

// Trigger cool down when heat gets too high
if(_heat >= 270) then {
	// Remove the main magazine
	_ammoCount = _veh magazineTurretAmmo ["UK3CB_BAF_1200Rnd_30mm_M230_HEDP_T", [0]];
	_veh removeMagazineTurret ["UK3CB_BAF_1200Rnd_30mm_M230_HEDP_T",[0]];
	
	// Add a jam magazine
	_veh addMagazineTurret ["UK3CB_BAF_JAM_30mm_M230_HEDP_T", [0], 1];
	_veh setVariable["UK3CB_GunHeat", 0];
	private _gunner = gunner _veh;
	_gunner forceWeaponFire [currentMuzzle _gunner, currentWeaponMode _gunner];
	
	// Enter cooling cycle
	[_veh, _ammoCount] remoteExec ["uk3cb_baf_vehicles_apache_fnc_gunjam_server", 2, false];
	
	// Play bitching betty sound
	[] spawn {
		sleep 1.2;
		[0, "UK3CB_BAF_Sounds_gunoverheat", 1.1] call UK3CB_BAF_Vehicles_Weapons_fnc_audio;
	};
};