params["_vehicle"];

private _vehicleType = typeOf _vehicle;
private _assetType = "";
private _parents = [(configfile >> "CfgVehicles" >> _vehicleType), true] call BIS_fnc_returnParents;

switch true do {
	case ("StaticMortar" in _parents) : {_assetType = "Mortar"};
	case ("StaticCannon" in _parents) : {_assetType = "Cannon"};
	case ("MBT_01_arty_base_F" in _parents) : {_assetType = "Cannon"};
	case ("B_MBT_01_arty_base_F" in _parents) : {_assetType = "Cannon"};
	case ("O_MBT_02_arty_base_F" in _parents) : {_assetType = "Cannon"};
	case ("O_MBT_02_arty_F" in _parents) : {_assetType = "Cannon"};
	case ("I_MBT_01_arty_F" in _parents) : {_assetType = "Cannon"};
	case ("MBT_01_mlrs_base_F" in _parents) : {_assetType = "Rocket"};
	case ("B_MBT_01_mlrs_base_F" in _parents) : {_assetType = "Rocket"};
	case ("I_MBT_01_mlrs_F" in _parents) : {_assetType = "Rocket"};
	case ("Truck_02_MRL_base_F" in _parents) : {_assetType = "Rocket"};
	case ("B_Ship_MRLS_01_F" in _parents) : {_assetType = "MK41"};
	case ("rhsusf_m109tank_base" in _parents) : {_assetType = "Cannon"};
	case ("RHS_M119_base" in _parents) : {_assetType = "Cannon"};
	case ("RHS_M252_Base" in _parents) : {_assetType = "Mortar"};
	case ("rhsusf_himars_base" in _parents) : {_assetType = "Rocket"};
	case ("rhs_2s1tank_base" in _parents) : {_assetType = "Cannon"};
	case ("rhs_2s3tank_base" in _parents) : {_assetType = "Cannon"};
	case ("rhs_D30_base" in _parents) : {_assetType = "Cannon"};
	case ("RHS_BM21_MSV_01" in _parents) : {_assetType = "BM21"};
	case ("rhs_2b14_82mm_Base" in _parents) : {_assetType = "Mortar"};
	default {_assetType = "Cannon"};
};

_assetType