class CfgPatches
{
	class t1_rhs_ar15_fix
	{
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"t1_recoilFix","t1_silencer_ammo_fix","rhsusf_c_weapons","t1_units"};
	};
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class CfgWeapons
{
	class arifle_MX_Base_F;
	class rhs_weap_m4_Base: arifle_MX_Base_F
	{
		recoil = "recoil_t1_m4_l";
		
		magazines[] += {"T1_30Rnd_556x45_Stanag_SD","t1_longrange_556"};
		
		class Single: Mode_SemiAuto
		{
			dispersion = 0.0009;
		};
		
		class Burst: Mode_Burst
		{
			dispersion = 0.0009;
		};
		
		class FullAuto: Mode_FullAuto
		{
			dispersion = 0.0009;
		};
	};
	
	class rhs_weap_m4a1: rhs_weap_m4_Base
	{
		class Single;
		class Burst;
		class FullAuto;
	};
	
	class rhs_weap_m4a1_blockII: rhs_weap_m4a1
	{
		recoil = "recoil_t1_m4_l";
		
		class Single: Single
		{
			dispersion = 0.00085;
		};
		
		class Burst: Burst
		{
			dispersion = 0.00085;
		};
		
		class FullAuto: FullAuto
		{
			dispersion = 0.00085;
		};
	};
	
	class rhs_weap_mk18: rhs_weap_m4a1_blockII
	{
		recoil = "recoil_t1_m4_s";
		initSpeed = -0.93;
		
		class Single: Single
		{
			dispersion = 0.0010;
		};
		
		class Burst: Burst
		{
			dispersion = 0.0010;
		};
		
		class FullAuto: FullAuto
		{
			dispersion = 0.0010;
		};
	};
	
	class rhs_weap_m16a4: rhs_weap_m4_Base
	{
		recoil = "recoil_t1_m16";
		
		class Single: Single
		{
			dispersion = 0.00075;
		};
		
		class Burst: Burst
		{
			dispersion = 0.00075;
		};
		
		class FullAuto: FullAuto
		{
			dispersion = 0.00075;
		};
	};
	
	class rhs_weap_hk416d10: rhs_weap_m4a1
	{
		recoil = "recoil_t1_m4_s";
		initSpeed = -0.93;
		
		class Single: Single
		{
			dispersion = 0.00095;
		};
		
		class Burst: Burst
		{
			dispersion = 0.00095;
		};
		
		class FullAuto: FullAuto
		{
			dispersion = 0.00095;
		};
	};
	
	class rhs_weap_hk416d145: rhs_weap_hk416d10
	{
		recoil = "recoil_t1_m4_l";
		
		class Single: Single
		{
			dispersion = 0.00085;
		};
		
		class Burst: Burst
		{
			dispersion = 0.00085;
		};
		
		class FullAuto: FullAuto
		{
			dispersion = 0.00085;
		};
	};
	
	class rhs_weap_m27iar: rhs_weap_m4a1
	{
		recoil = "recoil_t1_m27";
		
		class Single: Single
		{
			dispersion = 0.000675;
		};
		
		class Burst: Burst
		{
			dispersion = 0.000675;
		};
		
		class FullAuto: FullAuto
		{
			dispersion = 0.000675;
		};
	};
	
	class rhs_weap_m4;
	class rhs_weap_m4_grip: rhs_weap_m4
	{
		recoil = "recoil_t1_m4_l_g";
	};
	
	class rhs_weap_m4_grip2: rhs_weap_m4_grip
	{
		recoil = "recoil_t1_m4_l_g";
	};
	
	class rhs_weap_m4_grip3: rhs_weap_m4_grip
	{
		recoil = "recoil_t1_m4_l_g";
	};
	
	class rhs_weap_m4_pmag;
	class rhs_weap_m4_pmag_grip: rhs_weap_m4_pmag
	{
		recoil = "recoil_t1_m4_l_g";
	};
	
	class rhs_weap_m4_pmag_grip2: rhs_weap_m4_pmag_grip
	{
		recoil = "recoil_t1_m4_l_g";
	};
	
	class rhs_weap_m4_pmag_grip3: rhs_weap_m4_pmag_grip
	{
		recoil = "recoil_t1_m4_l_g";
	};
	
	class rhs_weap_m4_mstock;
	class rhs_weap_m4_mstock_grip: rhs_weap_m4_mstock
	{
		recoil = "recoil_t1_m4_l_g";
	};
	
	class rhs_weap_m4_mstock_grip2: rhs_weap_m4_mstock_grip
	{
		recoil = "recoil_t1_m4_l_g";
	};
	
	class rhs_weap_m4_mstock_grip3: rhs_weap_m4_mstock_grip
	{
		recoil = "recoil_t1_m4_l_g";
	};
	
	class rhs_weap_m4_carryhandle;
	class rhs_weap_m4_carryhandle_grip: rhs_weap_m4_carryhandle
	{
		recoil = "recoil_t1_m4_l_g";
	};
	
	class rhs_weap_m4_carryhandle_grip2: rhs_weap_m4_carryhandle_grip
	{
		recoil = "recoil_t1_m4_l_g";
	};
	
	class rhs_weap_m4_carryhandle_grip3: rhs_weap_m4_carryhandle_grip
	{
		recoil = "recoil_t1_m4_l_g";
	};
	
	class rhs_weap_m4_carryhandle_pmag;
	class rhs_weap_m4_carryhandle_pmag_grip: rhs_weap_m4_carryhandle_pmag
	{
		recoil = "recoil_t1_m4_l_g";
	};
	
	class rhs_weap_m4_carryhandle_pmag_grip2: rhs_weap_m4_carryhandle_pmag_grip
	{
		recoil = "recoil_t1_m4_l_g";
	};
	
	class rhs_weap_m4_carryhandle_pmag_grip3: rhs_weap_m4_carryhandle_pmag_grip
	{
		recoil = "recoil_t1_m4_l_g";
	};
	
	class rhs_weap_m4_carryhandle_mstock;
	class rhs_weap_m4_carryhandle_mstock_grip: rhs_weap_m4_carryhandle_mstock
	{
		recoil = "recoil_t1_m4_l_g";
	};
	
	class rhs_weap_m4_carryhandle_mstock_grip2: rhs_weap_m4_carryhandle_mstock_grip
	{
		recoil = "recoil_t1_m4_l_g";
	};
	
	class rhs_weap_m4_carryhandle_mstock_grip3: rhs_weap_m4_carryhandle_mstock_grip
	{
		recoil = "recoil_t1_m4_l_g";
	};
	
	class rhs_weap_m4a1_grip: rhs_weap_m4a1
	{
		recoil = "recoil_t1_m4_l_g";
	};
	
	class rhs_weap_m4a1_grip2: rhs_weap_m4a1_grip
	{
		recoil = "recoil_t1_m4_l_g";
	};
	
	class rhs_weap_m4a1_grip3: rhs_weap_m4a1_grip
	{
		recoil = "recoil_t1_m4_l_g";
	};
	
	class rhs_weap_m4a1_d;
	class rhs_weap_m4a1_d_grip: rhs_weap_m4a1_d
	{
		recoil = "recoil_t1_m4_l_g";
	};
	
	class rhs_weap_m4a1_d_grip2: rhs_weap_m4a1_d_grip
	{
		recoil = "recoil_t1_m4_l_g";
	};
	
	class rhs_weap_m4a1_d_grip3: rhs_weap_m4a1_d_grip
	{
		recoil = "recoil_t1_m4_l_g";
	};
	
	class rhs_weap_m4a1_pmag;
	class rhs_weap_m4a1_pmag_grip: rhs_weap_m4a1_pmag
	{
		recoil = "recoil_t1_m4_l_g";
	};
	
	class rhs_weap_m4a1_pmag_grip2: rhs_weap_m4a1_pmag_grip
	{
		recoil = "recoil_t1_m4_l_g";
	};
	
	class rhs_weap_m4a1_pmag_grip3: rhs_weap_m4a1_pmag_grip
	{
		recoil = "recoil_t1_m4_l_g";
	};
	
	class rhs_weap_m4a1_mstock;
	class rhs_weap_m4a1_mstock_grip: rhs_weap_m4a1_mstock
	{
		recoil = "recoil_t1_m4_l_g";
	};
	
	class rhs_weap_m4a1_mstock_grip2: rhs_weap_m4a1_mstock_grip
	{
		recoil = "recoil_t1_m4_l_g";
	};
	
	class rhs_weap_m4a1_mstock_grip3: rhs_weap_m4a1_mstock_grip
	{
		recoil = "recoil_t1_m4_l_g";
	};
	
	class rhs_weap_m4a1_d_mstock;
	class rhs_weap_m4a1_d_mstock_grip: rhs_weap_m4a1_d_mstock
	{
		recoil = "recoil_t1_m4_l_g";
	};
	
	class rhs_weap_m4a1_d_mstock_grip2: rhs_weap_m4a1_d_mstock_grip
	{
		recoil = "recoil_t1_m4_l_g";
	};
	
	class rhs_weap_m4a1_d_mstock_grip3: rhs_weap_m4a1_d_mstock_grip
	{
		recoil = "recoil_t1_m4_l_g";
	};
	
	class rhs_weap_m4a1_carryhandle;
	class rhs_weap_m4a1_carryhandle_grip: rhs_weap_m4a1_carryhandle
	{
		recoil = "recoil_t1_m4_l_g";
	};
	
	class rhs_weap_m4a1_carryhandle_grip2: rhs_weap_m4a1_carryhandle_grip
	{
		recoil = "recoil_t1_m4_l_g";
	};
	
	class rhs_weap_m4a1_carryhandle_grip3: rhs_weap_m4a1_carryhandle_grip
	{
		recoil = "recoil_t1_m4_l_g";
	};
	
	class rhs_weap_m4a1_carryhandle_pmag;
	class rhs_weap_m4a1_carryhandle_pmag_grip: rhs_weap_m4a1_carryhandle_pmag
	{
		recoil = "recoil_t1_m4_l_g";
	};
	
	class rhs_weap_m4a1_carryhandle_pmag_grip2: rhs_weap_m4a1_carryhandle_pmag_grip
	{
		recoil = "recoil_t1_m4_l_g";
	};
	
	class rhs_weap_m4a1_carryhandle_pmag_grip3: rhs_weap_m4a1_carryhandle_pmag_grip
	{
		recoil = "recoil_t1_m4_l_g";
	};
	
	class rhs_weap_m4a1_carryhandle_mstock;
	class rhs_weap_m4a1_carryhandle_mstock_grip: rhs_weap_m4a1_carryhandle_mstock
	{
		recoil = "recoil_t1_m4_l_g";
	};
	
	class rhs_weap_m4a1_carryhandle_mstock_grip2: rhs_weap_m4a1_carryhandle_mstock_grip
	{
		recoil = "recoil_t1_m4_l_g";
	};
	
	class rhs_weap_m4a1_carryhandle_mstock_grip3: rhs_weap_m4a1_carryhandle_mstock_grip
	{
		recoil = "recoil_t1_m4_l_g";
	};
	
	class rhs_weap_m4a1_blockII_grip: rhs_weap_m4a1_blockII
	{
		recoil = "recoil_t1_m4_l_g";
	};
	
	class rhs_weap_m4a1_blockII_grip2: rhs_weap_m4a1_blockII_grip
	{
		recoil = "recoil_t1_m4_l_g";
	};
	
	class rhs_weap_m4a1_blockII_bk;
	class rhs_weap_m4a1_blockII_grip_bk: rhs_weap_m4a1_blockII_bk
	{
		recoil = "recoil_t1_m4_l_g";
	};
	
	class rhs_weap_m4a1_blockII_grip2_bk: rhs_weap_m4a1_blockII_grip_bk
	{
		recoil = "recoil_t1_m4_l_g";
	};
	
	class rhs_weap_m4a1_blockII_wd;
	class rhs_weap_m4a1_blockII_grip_wd: rhs_weap_m4a1_blockII_wd
	{
		recoil = "recoil_t1_m4_l_g";
	};
	
	class rhs_weap_m4a1_blockII_grip2_wd: rhs_weap_m4a1_blockII_grip_wd
	{
		recoil = "recoil_t1_m4_l_g";
	};
	
	class rhs_weap_m4a1_blockII_d;
	class rhs_weap_m4a1_blockII_grip_d: rhs_weap_m4a1_blockII_d
	{
		recoil = "recoil_t1_m4_l_g";
	};
	
	class rhs_weap_m4a1_blockII_grip2_d: rhs_weap_m4a1_blockII_grip_d
	{
		recoil = "recoil_t1_m4_l_g";
	};
	
	class rhs_weap_m4a1_blockII_KAC;
	class rhs_weap_m4a1_blockII_grip_KAC: rhs_weap_m4a1_blockII_KAC
	{
		recoil = "recoil_t1_m4_l_g";
	};
	
	class rhs_weap_m4a1_blockII_grip2_KAC: rhs_weap_m4a1_blockII_grip_KAC
	{
		recoil = "recoil_t1_m4_l_g";
	};
	
	class rhs_weap_m4a1_blockII_KAC_bk;
	class rhs_weap_m4a1_blockII_grip_KAC_bk: rhs_weap_m4a1_blockII_KAC_bk
	{
		recoil = "recoil_t1_m4_l_g";
	};
	
	class rhs_weap_m4a1_blockII_grip2_KAC_bk: rhs_weap_m4a1_blockII_grip_KAC_bk
	{
		recoil = "recoil_t1_m4_l_g";
	};
	
	class rhs_weap_m4a1_blockII_KAC_wd;
	class rhs_weap_m4a1_blockII_grip_KAC_wd: rhs_weap_m4a1_blockII_KAC_wd
	{
		recoil = "recoil_t1_m4_l_g";
	};
	
	class rhs_weap_m4a1_blockII_grip2_KAC_wd: rhs_weap_m4a1_blockII_grip_KAC_wd
	{
		recoil = "recoil_t1_m4_l_g";
	};
	
	class rhs_weap_m4a1_blockII_KAC_d;
	class rhs_weap_m4a1_blockII_grip_KAC_d: rhs_weap_m4a1_blockII_KAC_d
	{
		recoil = "recoil_t1_m4_l_g";
	};
	
	class rhs_weap_m4a1_blockII_grip2_KAC_d: rhs_weap_m4a1_blockII_grip_KAC_d
	{
		recoil = "recoil_t1_m4_l_g";
	};
	
	class rhs_weap_mk18_grip: rhs_weap_mk18
	{
		recoil = "recoil_t1_m4_s_g";
	};
	
	class rhs_weap_mk18_m320: rhs_weap_mk18
	{
		recoil = "recoil_t1_m4_s_g";
	};
	
	class rhs_weap_mk18_grip2: rhs_weap_mk18_grip
	{
		recoil = "recoil_t1_m4_s_g";
	};
	
	class rhs_weap_mk18_bk;
	class rhs_weap_mk18_grip_bk: rhs_weap_mk18_bk
	{
		recoil = "recoil_t1_m4_s_g";
	};
	
	class rhs_weap_mk18_grip2_bk: rhs_weap_mk18_grip_bk
	{
		recoil = "recoil_t1_m4_s_g";
	};
	
	class rhs_weap_mk18_wd;
	class rhs_weap_mk18_grip_wd: rhs_weap_mk18_wd
	{
		recoil = "recoil_t1_m4_s_g";
	};
	
	class rhs_weap_mk18_grip2_wd: rhs_weap_mk18_grip_wd
	{
		recoil = "recoil_t1_m4_s_g";
	};
	
	class rhs_weap_mk18_d;
	class rhs_weap_mk18_grip_d: rhs_weap_mk18_d
	{
		recoil = "recoil_t1_m4_s_g";
	};
	
	class rhs_weap_mk18_grip2_d: rhs_weap_mk18_grip_d
	{
		recoil = "recoil_t1_m4_s_g";
	};
	
	class rhs_weap_mk18_KAC;
	class rhs_weap_mk18_grip_KAC: rhs_weap_mk18_KAC
	{
		recoil = "recoil_t1_m4_s_g";
	};
	
	class rhs_weap_mk18_grip2_KAC: rhs_weap_mk18_grip_KAC
	{
		recoil = "recoil_t1_m4_s_g";
	};
	
	class rhs_weap_mk18_KAC_bk;
	class rhs_weap_mk18_grip_KAC_bk: rhs_weap_mk18_KAC_bk
	{
		recoil = "recoil_t1_m4_s_g";
	};
	
	class rhs_weap_mk18_grip2_KAC_bk: rhs_weap_mk18_grip_KAC_bk
	{
		recoil = "recoil_t1_m4_s_g";
	};
	
	class rhs_weap_mk18_KAC_wd;
	class rhs_weap_mk18_grip_KAC_wd: rhs_weap_mk18_KAC_wd
	{
		recoil = "recoil_t1_m4_s_g";
	};
	
	class rhs_weap_mk18_grip2_KAC_wd: rhs_weap_mk18_grip_KAC_wd
	{
		recoil = "recoil_t1_m4_s_g";
	};
	
	class rhs_weap_mk18_KAC_d;
	class rhs_weap_mk18_grip_KAC_d: rhs_weap_mk18_KAC_d
	{
		recoil = "recoil_t1_m4_s_g";
	};
	
	class rhs_weap_mk18_grip2_KAC_d: rhs_weap_mk18_grip_KAC_d
	{
		recoil = "recoil_t1_m4_s_g";
	};
	
	class rhs_weap_m16a4_grip: rhs_weap_m16a4
	{
		recoil = "recoil_t1_m16_g";
	};
	
	class rhs_weap_m16a4_grip2: rhs_weap_m16a4_grip
	{
		recoil = "recoil_t1_m16_g";
	};
	
	class rhs_weap_m16a4_grip3: rhs_weap_m16a4_grip
	{
		recoil = "recoil_t1_m16_g";
	};
	
	class rhs_weap_m16a4_pmag;
	class rhs_weap_m16a4_pmag_grip: rhs_weap_m16a4_pmag
	{
		recoil = "recoil_t1_m16_g";
	};
	
	class rhs_weap_m16a4_pmag_grip2: rhs_weap_m16a4_pmag_grip
	{
		recoil = "recoil_t1_m16_g";
	};
	
	class rhs_weap_m16a4_pmag_grip3: rhs_weap_m16a4_pmag_grip
	{
		recoil = "recoil_t1_m16_g";
	};
	
	class rhs_weap_m16a4_carryhandle;
	class rhs_weap_m16a4_carryhandle_grip: rhs_weap_m16a4_carryhandle
	{
		recoil = "recoil_t1_m16_g";
	};
	
	class rhs_weap_m16a4_carryhandle_grip2: rhs_weap_m16a4_carryhandle_grip
	{
		recoil = "recoil_t1_m16_g";
	};
	
	class rhs_weap_m16a4_carryhandle_grip3: rhs_weap_m16a4_carryhandle_grip
	{
		recoil = "recoil_t1_m16_g";
	};
	
	class rhs_weap_m16a4_carryhandle_pmag;
	class rhs_weap_m16a4_carryhandle_grip_pmag: rhs_weap_m16a4_carryhandle_pmag
	{
		recoil = "recoil_t1_m16_g";
	};
	
	class rhs_weap_m16a4_carryhandle_grip2_pmag: rhs_weap_m16a4_carryhandle_grip_pmag
	{
		recoil = "recoil_t1_m16_g";
	};
	
	class rhs_weap_m16a4_carryhandle_grip3_pmag: rhs_weap_m16a4_carryhandle_grip_pmag
	{
		recoil = "recoil_t1_m16_g";
	};
	
	class rhs_weap_hk416d10_grip: rhs_weap_hk416d10
	{
		recoil = "recoil_t1_m4_s_g";
	};
	
	class rhs_weap_hk416d10_grip2: rhs_weap_hk416d10_grip
	{
		recoil = "recoil_t1_m4_s_g";
	};
	
	class rhs_weap_hk416d10_grip3: rhs_weap_hk416d10_grip2
	{
		recoil = "recoil_t1_m4_s_g";
	};
	
	class rhs_weap_hk416d10_LMT;
	class rhs_weap_hk416d10_LMT_grip: rhs_weap_hk416d10_LMT
	{
		recoil = "recoil_t1_m4_s_g";
	};
	
	class rhs_weap_hk416d10_LMT_grip2: rhs_weap_hk416d10_LMT_grip
	{
		recoil = "recoil_t1_m4_s_g";
	};
	
	class rhs_weap_hk416d10_LMT_grip3: rhs_weap_hk416d10_LMT_grip2
	{
		recoil = "recoil_t1_m4_s_g";
	};
	
	class rhs_weap_hk416d10_m320: rhs_weap_hk416d10
	{
		recoil = "recoil_t1_m4_s_g";
	};
	
	class rhs_weap_hk416d145_grip: rhs_weap_hk416d145
	{
		recoil = "recoil_t1_m4_l_g";
	};
	
	class rhs_weap_hk416d145_grip2: rhs_weap_hk416d145_grip
	{
		recoil = "recoil_t1_m4_l_g";
	};
	
	class rhs_weap_hk416d145_grip3: rhs_weap_hk416d145_grip2
	{
		recoil = "recoil_t1_m4_l_g";
	};
	
	class rhs_weap_hk416d145_m320: rhs_weap_hk416d145
	{
		recoil = "recoil_t1_m4_l_g";
	};
	
	class rhs_weap_m27iar_grip: rhs_weap_m27iar
	{
		recoil = "recoil_t1_m27";
	};
	
	class rhs_weap_m27iar_grip2: rhs_weap_m27iar
	{
		recoil = "recoil_t1_m27";
	};
	
	class rhs_weap_m27iar_grip3: rhs_weap_m27iar_grip2
	{
		recoil = "recoil_t1_m27";
	};
};