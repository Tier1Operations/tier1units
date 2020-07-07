// Returns the type of ammo in a short text-friendly form

params ["_ammo"];
disableSerialization;
_ammo = _this select 0;
private _out = "";

switch true do {
	case (_ammo == "8Rnd_82mm_Mo_shells") : {_out = "HE"};
	case (_ammo == "8Rnd_82mm_Mo_Flare_white") : {_out = "Flare"};
	case (_ammo == "8Rnd_82mm_Mo_Smoke_white") : {_out = "Smoke"};
	case (_ammo == "32Rnd_155mm_Mo_shells") : {_out = "HE"};
	case (_ammo == "6Rnd_155mm_Mo_smoke") : {_out = "Smoke"};
	case (_ammo == "2Rnd_155mm_Mo_guided") : {_out = "Guided"};
	case (_ammo == "2Rnd_155mm_Mo_cluster") : {_out = "Cluster"};
	case (_ammo == "2Rnd_155mm_Mo_lg") : {_out = "Laser.G"};
	case (_ammo == "6Rnd_155mm_Mo_mine") : {_out = "Mine"};
	case (_ammo == "6Rnd_155mm_Mo_AT_mine") : {_out = "AT Mine"};
	case (_ammo == "12Rnd_230mm_rockets") : {_out = "Rocket"};
};

_out