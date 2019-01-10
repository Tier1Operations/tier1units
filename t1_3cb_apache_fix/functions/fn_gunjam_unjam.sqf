params ["_veh","_ammoCount"];

if (!(_veh turretLocal [0])) exitWith {};
if ("UK3CB_BAF_1200Rnd_30mm_M230_HEDP_T" in (_veh magazinesTurret [0])) exitWith {
	_veh removeMagazineTurret ["UK3CB_BAF_JAM_30mm_M230_HEDP_T",[0]];
};

// Remove the jam magazine
_veh removeMagazineTurret ["UK3CB_BAF_JAM_30mm_M230_HEDP_T",[0]];

// Add a main magazine
_veh addMagazineTurret ["UK3CB_BAF_1200Rnd_30mm_M230_HEDP_T", [0], _ammoCount];

_veh setVariable["UK3CB_GunHeat", 0];
_veh setVariable["UK3CB_GunHeatTime", time];

if (alive player and player == (_veh turretUnit [0])) then {
	playSound "UK3CB_IRJammer_cycle_end";
};