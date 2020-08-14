// Figure out what kind of weapon the unit has.

params ["_tube"];

private _mortarL = ["I_Mortar_01_F","I_G_Mortar_01_F","I_E_Mortar_01_F","O_Mortar_01_F","O_T_Support_Mort_F","O_G_Mortar_01_F","B_G_Mortar_01_F","B_Mortar_01_F","B_T_Mortar_01_F","RHS_M252_D","rhsgref_cdf_b_reg_M252","RHS_M252_WD","RHS_M252_USMC_D","RHS_M252_USMC_WD","rhssaf_army_o_m252","rhsgref_cdf_reg_M252","rhssaf_army_m252","rhsgref_ins_2b14","rhs_2b14_82mm_msv","rhs_2b14_82mm_vdv","rhs_2b14_82mm_vmf","rhsgref_tla_2b14","rhsgref_ins_g_2b14","rhsgref_nat_2b14","min_rf_Mortar","min_rf_Mortar_desert","min_rf_Mortar_winter"];

private _mortarM = [];

private _cannonL = ["RHS_M119_D","RHS_M119_WD","rhsgref_cdf_b_reg_d30_at","rhsgref_ins_d30_at","rhs_D30_at_msv","rhs_D30_at_vdv","rhs_D30_at_vmf","rhsgref_cdf_reg_d30_at","rhsgref_ins_g_d30_at","rhsgref_nat_d30_at","rhsgref_ins_d30","rhs_D30_msv","rhs_D30_vdv","rhs_D30_vmf","rhssaf_army_o_d30","rhsgref_cdf_reg_d30","rhsgref_ins_g_d30","rhsgref_nat_d30","rhssaf_army_d30","rhsgref_cdf_b_2s1","LOP_IA_2S1","rhsgref_ins_2s1","rhs_2s1_tv","rhs_2s1_vmf","rhssaf_army_o_2s1","LOP_SYR_2S1","LOP_US_2S1","rhsgref_cdf_2s1","rhsgref_ins_g_2s1","LOP_IRAN_2S1","rhssaf_army_2s1","LOP_UKR_2S1"];

private _cannonM = ["B_MBT_01_arty_F","B_T_MBT_01_arty_F","I_MBT_01_arty_F","O_T_MBT_02_arty_ghex_F","rhsusf_m109d_usarmy","rhsusf_m109_usarmy","rhs_2s3_tv"];

private _rocketL = ["LOP_AA_BM21","LOP_CDF_BM21","LOP_IA_BM21","LOP_IA_BM21_C","LOP_PESH_BM21","rhsgref_cdf_b_reg_BM21","LOP_ChDKZ_BM21","LOP_AM_OPF_BM21","RHS_BM21_MSV_01","RHS_BM21_VDV_01","RHS_BM21_VMF_01","RHS_BM21_VV_01","LOP_SYR_BM21","LOP_TKA_BM21","LOP_US_BM21","rhsgref_cdf_reg_BM21","rhsgref_ins_g_BM21","LOP_IRAN_BM21","LOP_PESH_IND_BM21","LOP_AM_BM21","LOP_UKR_BM21","LOP_UA_BM21","LOP_UN_BM21","min_rf_2b26","min_rf_2b26_desert","min_rf_2b26_winter"];

private _rocketM = ["B_MBT_01_mlrs_F","B_T_MBT_01_mlrs_F","I_MBT_01_mlrs_F","I_E_Truck_02_MRL_F","I_Truck_02_MRL_F","O_Truck_02_MRL_F","O_T_Truck_02_MRL_F","O_R_Truck_02_MRL_ard_F","O_R_Truck_02_MRL_F","rhsusf_M142_usarmy_D","rhsusf_M142_usarmy_WD","rhsusf_M142_usmc_WD"];

private _rocketH = ["B_Ship_MRLS_01_F"];

// Try to detect type by vehicle classname
private _typeOf = typeOf _tube;
private _type = "";
switch true do {
	case (_typeOf in _mortarL) : {_type = "MORTARL"};
	case (_typeOf in _mortarM) : {_type = "MORTARM"};
	case (_typeOf in _cannonL) : {_type = "CANNONL"};
	case (_typeOf in _cannonM) : {_type = "CANNONM"};
	case (_typeOf in _rocketL) : {_type = "ROCKETL"};
	case (_typeOf in _rocketM) : {_type = "ROCKETM"};
	case (_typeOf in _rocketH) : {_type = "ROCKETH"};
	default {_type = "CANNONL"};
};

_type