// Determines what type of piece the parsed tube is
// Uses a few different ways to check for mod pieces

_tube = _this;

_type = "INVALID";
_validType = false;

_mortarVeh = ["B_Mortar_01_F", "B_T_Mortar_01_F", "B_G_Mortar_01_F", "O_Mortar_01_F", "O_G_Mortar_01_F", "I_G_Mortar_01_F", "I_Mortar_01_F", "rhsgref_cdf_b_reg_M252", "RHS_M252_D", "RHS_M252_WD", "RHS_M252_USMC_D", "RHS_M252_USMC_WD", "rhsgref_ins_2b14", "rhs_2b14_82mm_msv", "rhs_2b14_82mm_vdv", "rhs_2b14_82mm_vmf", "rhsgref_ins_g_2b14", "rhsgref_cdf_reg_M252", "rhsgref_nat_2b14", "rhssaf_army_m252"];
_cannonVeh = ["B_MBT_01_arty_F", "B_T_MBT_01_arty_F", "O_MBT_02_arty_F", "O_T_MBT_02_arty_ghex_F", "I_MBT_01_arty_F", "rhsgref_cdf_b_reg_d30", "rhsgref_cdf_b_reg_d30_at", "rhsusf_m109d_usarmy", "RHS_M119_D", "rhsusf_m109_usarmy", "RHS_M119_WD", "rhsgref_ins_d30", "rhsgref_ins_d30_at", "rhs_D30_msv", "rhs_D30_at_msv", "rhs_2s3_tv", "rhs_D30_vdv", "rhs_D30_at_vdv", "rhs_D30_vmf", "rhs_D30_at_vmf", "rhsgref_ins_g_d30", "rhsgref_ins_g_d30_at", "rhsgref_cdf_reg_d30", "rhsgref_cdf_reg_d30_at", "rhsgref_nat_d30", "rhsgref_nat_d30_at", "rhssaf_army_d30"];
_rocketVeh = ["B_MBT_01_mlrs_F", "B_T_MBT_01_mlrs_F", "I_MBT_01_mlrs_F", "rhsgref_cdf_reg_BM21", "rhsgref_ins_g_BM21", "rhsgref_ins_BM21", "RHS_BM21_MSV_01", "RHS_BM21_VDV_01", "RHS_BM21_VMF_01", "RHS_BM21_VV_01"];
_mortarMM = ["81", "82", "120"];
_cannonMM = ["122", "155", "152", "203"];
_rocketMM = ["230"];

_typeOf = typeOf _tube;
// Try to detect type by vehicle classname
if (_typeOf in _mortarVeh) then {_type = "82mmMortar"; _validType = true};
if (!_validType and {_typeOf in _cannonVeh}) then {_type = "155mmHowitzer"; _validType = true};
if (!_validType and {_typeOf in _rocketVeh}) then {_type = "230mmRockets"; _validType = true};


// If type not found, try to guess what caliber the magazines are.
if (!_validType and {count (magazines _tube) > 0}) then {
	_magazine = toLower ((magazines _tube) select 0);
	
	{
		if ((_magazine find _x) != -1) exitWith {_type = "82mmMortar"; _validType = true};
	} forEach _mortarMM;
	
	if (_validType) exitWith {};
	
	{
		if ((_magazine find _x) != -1) exitWith {_type = "155mmHowitzer"; _validType = true};
	} forEach _cannonMM;
	
	if (_validType) exitWith {};
	
	{
		if ((_magazine find _x) != -1) exitWith {_type = "230mmRockets"; _validType = true};
	} forEach _rocketMM;
};


_type