#include "\T1AM\Defines.hpp"

params["_vehicle"];

private _parents = [configfile >> "CfgVehicles" >> (typeOf _vehicle), true] call BIS_fnc_returnParents;
private _assetType = "";

switch true do {
	case ("StaticMortar" in _parents) : {_assetType = "MORTAR"};
	case ("StaticCannon" in _parents) : {_assetType = "CANNON"};
	case ("MBT_01_arty_base_F" in _parents) : {_assetType = "CANNON"};
	case ("MBT_02_arty_base_F" in _parents) : {_assetType = "CANNON"};
	case ("MBT_01_mlrs_base_F" in _parents) : {_assetType = "ROCKET"};
	case ("Truck_02_MRL_base_F" in _parents) : {_assetType = "MRLTRUCK"};
	case ("B_Ship_MRLS_01_F" in _parents) : {_assetType = "MK41"};
	case ("rhsusf_m109tank_base" in _parents) : {_assetType = "CANNON"};
	case ("RHS_M119_base" in _parents) : {_assetType = "CANNON"};
	case ("RHS_M252_Base" in _parents) : {_assetType = "MORTAR"};
	case ("rhsusf_himars_base" in _parents) : {_assetType = "MRLTRUCK"};
	case ("rhs_2s1tank_base" in _parents) : {_assetType = "CANNON"};
	case ("rhs_2s3tank_base" in _parents) : {_assetType = "CANNON"};
	case ("rhs_D30_base" in _parents) : {_assetType = "CANNON"};
	case ("RHS_BM21_MSV_01" in _parents) : {_assetType = "RHS_BM21"};
	case ("rhs_2b14_82mm_Base" in _parents) : {_assetType = "MORTAR"};
	case ("min_rf_2b26" in _parents) : {_assetType = "2035RAF_BM21"};
	default {_assetType = "CANNON"};
};

_assetType