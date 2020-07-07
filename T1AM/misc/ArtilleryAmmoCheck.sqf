// Called from 

private["_vehicle","_warheadType","_vehicleType","_mortars","_typeToCount","_ammo","_rounds","_totalRounds","_index","_max","_out","_mag"];
disableSerialization;
_vehicle = _this select 0;
_warheadType = _this select 1;

_vehicleType = "";
_vehicleType = typeof _vehicle;
_typeToCount = "Null";
_ammo = [];
_mag = "";
_rounds = 0;
_totalRounds = 0;
_entry = [];
_index = 0;
_max = 0;
_out = [];

if (_vehicleType in T1AM_Types82mm) then {
	if (_warheadType == "HE") then {_typeToCount = "8Rnd_82mm_Mo_Shells"};
	if (_warheadType == "Smoke") then {_typeToCount = "8Rnd_82mm_Mo_Smoke_white"};
	if (_warheadType == "Flare") then {_typeToCount = "8Rnd_82mm_Mo_Flare_white"};
};

if (_vehicleType in T1AM_Types82mmD) then {
	if (_warheadType == "HE") then {_typeToCount = "T1AM_8Rnd_82mm_Mo_Shells"};
	if (_warheadType == "Smoke") then {_typeToCount = "T1AM_8Rnd_82mm_Mo_Smoke_white"};
	if (_warheadType == "Flare") then {_typeToCount = "T1AM_8Rnd_82mm_Mo_Flare_white"};
};

if (_vehicleType in T1AM_Types155mm) then {
	if (_warheadType == "HE") then {_typeToCount = "32Rnd_155mm_Mo_shells"};
	if (_warheadType == "Smoke") then {_typeToCount = "6Rnd_155mm_Mo_smoke"};
	if (_warheadType == "Guided") then {_typeToCount = "2Rnd_155mm_Mo_guided"};
	if (_warheadType == "Cluster") then {_typeToCount = "2Rnd_155mm_Mo_Cluster"};
	if (_warheadType == "Laser.G") then {_typeToCount = "2Rnd_155mm_Mo_LG"};
	if (_warheadType == "Mine") then {_typeToCount = "6Rnd_155mm_Mo_mine"};
	if (_warheadType == "AT mine") then {_typeToCount = "6Rnd_155mm_Mo_AT_mine"};
	if (_warheadType == "WP") then {_typeToCount = "32Rnd_155mm_Mo_wp"};
	if (_warheadType == "Chemical") then {_typeToCount = "1Rnd_155mm_Mo_chem"};
	if (_warheadType == "Nuclear") then {_typeToCount = "1Rnd_155mm_Mo_nuke"};
};

if (_vehicleType in T1AM_Types155mmD) then {
	if (_warheadType == "HE") then {_typeToCount = "T1AM_32Rnd_155mm_Mo_shells"};
	if (_warheadType == "Smoke") then {_typeToCount = "T1AM_6Rnd_155mm_Mo_smoke"};
	if (_warheadType == "Guided") then {_typeToCount = "T1AM_2Rnd_155mm_Mo_guided"};
	if (_warheadType == "Cluster") then {_typeToCount = "T1AM_2Rnd_155mm_Mo_Cluster"};
	if (_warheadType == "Laser.G") then {_typeToCount = "T1AM_2Rnd_155mm_Mo_LG"};
	if (_warheadType == "Mine") then {_typeToCount = "T1AM_6Rnd_155mm_Mo_mine"};
	if (_warheadType == "AT mine") then {_typeToCount = "T1AM_6Rnd_155mm_Mo_AT_mine"};
};

if (_vehicleType in T1AM_Types230mm) then {
	if (_warheadType == "Rocket") then {_typeToCount = "12Rnd_230mm_Rockets"};
};

if (_vehicleType in T1AM_Types230mmD) then {
	if (_warheadType == "Rocket") then {_typeToCount = "T1AM_12Rnd_230mm_Rockets"};
};


_ammo = magazinesAmmo _vehicle;
_max = (count _ammo) - 1;

while {(_index <= _max)} do {
	_entry = _ammo select _index;
	_mag = _entry select 0;
	_rounds = _entry select 1;
	if (_mag == _typeToCount) then {_totalRounds = _totalRounds + _rounds};
	_index = _index + 1;
};
_out = [_warheadType,_typeToCount,_totalRounds];
_out