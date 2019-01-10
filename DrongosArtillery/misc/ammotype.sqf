// Returns the type of ammo in a short text-friendly form

private["_ammo","_out"];
disableSerialization;
_ammo = _this select 0;
_out = "";
if (_ammo == "8Rnd_82mm_Mo_shells") then {_out = "HE"};
if (_ammo == "8Rnd_82mm_Mo_Flare_white") then {_out = "Flare"};
if (_ammo == "8Rnd_82mm_Mo_Smoke_white") then {_out = "Smoke"};
if (_ammo == "32Rnd_155mm_Mo_shells") then {_out = "HE"};
if (_ammo == "6Rnd_155mm_Mo_smoke") then {_out = "Smoke"};
if (_ammo == "2Rnd_155mm_Mo_guided") then {_out = "Guided"};
if (_ammo == "2Rnd_155mm_Mo_cluster") then {_out = "Cluster"};
if (_ammo == "2Rnd_155mm_Mo_lg") then {_out = "Laser.G"};
if (_ammo == "6Rnd_155mm_Mo_mine") then {_out = "Mine"};
if (_ammo == "6Rnd_155mm_Mo_AT_mine") then {_out = "AT Mine"};
if (_ammo == "12Rnd_230mm_rockets") then {_out = "Rocket"};

if (_ammo == "32Rnd_155mm_Mo_wp") then {_out = "WP"};
if (_ammo == "1Rnd_155mm_Mo_chem") then {_out = "Chemical"};
if (_ammo == "1Rnd_155mm_Mo_nuke") then {_out = "Nuclear"};

if (_ammo == "RDS_30Rnd_105mmHE_M119") then {_out = "HE"};
if (_ammo == "RDS_30Rnd_105mmWP_M119") then {_out = "WP"};
if (_ammo == "RDS_30Rnd_105mmLASER_M119") then {_out = "Laser.G"};
if (_ammo == "RDS_30Rnd_105mmSMOKE_M119") then {_out = "Smoke"};
if (_ammo == "RDS_30Rnd_105mmILLUM_M119") then {_out = "Flare"};
_out