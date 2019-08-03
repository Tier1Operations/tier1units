#define t1_mag_rifle "rhs_mag_30Rnd_556x45_M855A1_Stanag"
#define t1_mag_rifle_tracer "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red"
#define t1_mag_rifle_sf "rhs_mag_30Rnd_556x45_Mk318_Stanag"
#define t1_mag_rifle_sd "T1_30Rnd_556x45_Stanag_SD"
#define t1_mag_sierra "7Rnd_408_Mag"
#define t1_mag_sidearm_m "rhsusf_mag_17Rnd_9x19_FMJ"
#define t1_mag_sidearm_m_sd "rhsusf_mag_17Rnd_9x19_FMJ"
#define t1_mag_lmg "rhs_200rnd_556x45_M_SAW"
#define t1_mag_mmg "rhsusf_100Rnd_762x51_m62_tracer"
#define t1_mag_marksman "20Rnd_762x51_Mag"
#define t1_mag_marksman_sd "ACE_20Rnd_762x51_Mag_SD"

class rhsusf_weap_glock17g4;
class T1_weap_sidearm_l: rhsusf_weap_glock17g4
{
};

class srifle_LRR_F;
class T1_weap_sierra: srifle_LRR_F
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			item = "ACE_optic_LRPS_2D";
			slot = "CowsSlot";
		};
	};
};

// using the same as light until we find a better alternative
class T1_weap_sidearm_m: T1_weap_sidearm_l
{
	class LinkedItems
	{
		class LinkedItemsAcc
		{
			item = "acc_flashlight_pistol";
			slot = "PointerSlot";
		};
	};
};

class rhs_weap_m249_pip_L;
class T1_weap_lmg: rhs_weap_m249_pip_L
{	
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			item = "iansky_specterdr";
			slot = "CowsSlot";
		};
		class LinkedItemsAcc
		{
			item = "acc_pointer_IR";
			slot = "PointerSlot";
		};
	};
};
class rhs_weap_m249_pip_S_vfg2;
class T1_weap_lmg2: rhs_weap_m249_pip_S_vfg2
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			item = "iansky_specterdr";
			slot = "CowsSlot";
		};
		class LinkedItemsUnder
		{
			item = "rhsusf_acc_grip4";
			slot = "GripodSlot";
		};
		class LinkedItemsAcc
		{
			item = "acc_pointer_IR";
			slot = "PointerSlot";
		};
	};
};

class rhs_weap_m240B;
class T1_weap_mmg: rhs_weap_m240B
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			item = "iansky_specterdr";
			slot = "CowsSlot";
		};		
	};
};

/* TODO: SPARs taking SD mags
class arifle_SPAR_01_blk_F :  {
	magazines[] += {"T1_30Rnd_556x45_Stanag_SD"};
};
//*/

class arifle_SPAR_01_blk_F;
class T1_weap_rifle: arifle_SPAR_01_blk_F
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			item = "iansky_specterdr";
			slot = "CowsSlot";
		};
		class LinkedItemsAcc
		{
			item = "acc_pointer_IR";
			slot = "PointerSlot";
		};
	};
};

class arifle_SPAR_01_GL_blk_F;
class T1_weap_rifle_gl: arifle_SPAR_01_GL_blk_F
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			item = "iansky_specterdr";
			slot = "CowsSlot";
		};
		class LinkedItemsAcc
		{
			item = "acc_pointer_IR";
			slot = "PointerSlot";
		};
	};
};		
class T1_weap_rifle_sd: arifle_SPAR_01_blk_F
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			item = "iansky_specterdr";
			slot = "CowsSlot";
		};
		class LinkedItemsMuzzle
		{
			item = "muzzle_snds_M";
			slot = "MuzzleSlot";
		}
		class LinkedItemsAcc
		{
			item = "acc_pointer_IR";
			slot = "PointerSlot";
		};
	};
};
class T1_weap_rifle_gl_sd: arifle_SPAR_01_GL_blk_F
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			item = "iansky_specterdr";
			slot = "CowsSlot";
		};
		class LinkedItemsMuzzle
		{
			item = "muzzle_snds_M";
			slot = "MuzzleSlot";
		}
		class LinkedItemsAcc
		{
			item = "acc_pointer_IR";
			slot = "PointerSlot";
		};
	};
};

class srifle_DMR_03_woodland_F;
class T1_weap_marksman : srifle_DMR_03_woodland_F
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			item = "optic_AMS_khk";
			slot = "CowsSlot";
		};
		class LinkedItemsMuzzle
		{
			item = "muzzle_snds_B";
			slot = "MuzzleSlot";
		};
		class LinkedItemsAcc
		{
			item = "acc_pointer_IR";
			slot = "PointerSlot";
		};
		class LinkedItemsUnder
		{
			item = "bipod_01_F_mtp";
			slot = "UnderBarrelSlot";
		};
	};
};
class rhs_weap_m16a4_pmag_grip;
class T1_weap_m16a4_SD : rhs_weap_m16a4_pmag_grip
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			item = "iansky_specterdrkf";
			slot = "CowsSlot";
		};
		class LinkedItemsMuzzle
		{
			item = "rhsusf_acc_nt4_black";
			slot = "MuzzleSlot";
		};
		class LinkedItemsAcc
		{
			item = "acc_pointer_IR";
			slot = "PointerSlot";
		};
		class LinkedItemsUnder
		{
			item = "rhsusf_acc_grip1";
			slot = "UnderBarrelSlot";
		};
	};
};
class rhs_weap_m16a4_pmag;
class T1_weap_m16a4 : rhs_weap_m16a4_pmag
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			item = "iansky_specterdr";
			slot = "CowsSlot";
		};		
		class LinkedItemsAcc
		{
			item = "acc_pointer_IR";
			slot = "PointerSlot";
		};		
	};
};
class rhs_weap_m4a1_carryhandle_pmag;
class T1_weap_m16a4_carryhandle : rhs_weap_m4a1_carryhandle_pmag
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			item = "iansky_specterdr";
			slot = "CowsSlot";
		};		
		class LinkedItemsAcc
		{
			item = "acc_pointer_IR";
			slot = "PointerSlot";
		};		
	};
};
class rhs_weap_XM2010_wd;
class T1_weap_sierra_RHS : rhs_weap_XM2010_wd
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			item = "ACE_optic_LRPS_2D";
			slot = "CowsSlot";
		};
		class LinkedItemsMuzzle
		{
			item = "rhsusf_acc_M2010S";
			slot = "MuzzleSlot";
		};
		class LinkedItemsAcc
		{
			item = "acc_pointer_IR";
			slot = "PointerSlot";
		};
		class LinkedItemsUnder
		{
			item = "rhsusf_acc_harris_bipod";
			slot = "UnderBarrelSlot";
		};
	};
};
class srifle_DMR_06_camo_F;
class T1_weap_sierra_spotter_RHS : srifle_DMR_06_camo_F
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			item = "iansky_specterdr_t";
			slot = "CowsSlot";
		};
		class LinkedItemsMuzzle
		{
			item = "muzzle_snds_B_khk_F";
			slot = "MuzzleSlot";
		};
		class LinkedItemsUnder
		{
			item = "bipod_03_F_oli";
			slot = "UnderBarrelSlot";
		};
	};
};
class 45KO_ABR_black_F;
class T1_45KO_ABR_SD : 45KO_ABR_black_F
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			item = "optic_AMS";
			slot = "CowsSlot";
		};
		class LinkedItemsMuzzle
		{
			item = "muzzle_snds_B";
			slot = "MuzzleSlot";
		};
		class LinkedItemsAcc
		{
			item = "acc_pointer_IR";
			slot = "PointerSlot";
		};
		class LinkedItemsUnder
		{
			item = "bipod_01_F_blk";
			slot = "UnderBarrelSlot";
		};
	};
};
class rhs_weap_hk416d145_m320;
class T1_hk416d145_m320_SD : rhs_weap_hk416d145_m320
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			item = "iansky_specterdrkf";
			slot = "CowsSlot";
		};
		class LinkedItemsMuzzle
		{
			item = "rhsusf_acc_nt4_black";
			slot = "MuzzleSlot";
		};
		class LinkedItemsAcc
		{
			item = "acc_pointer_IR";
			slot = "PointerSlot";
		};
	};
};
class rhs_weap_mk18_m320;
class T1_mk18_m320 : rhs_weap_mk18_m320
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			item = "iansky_specterdr_t";
			slot = "CowsSlot";
		};		
		class LinkedItemsAcc
		{
			item = "acc_pointer_IR";
			slot = "PointerSlot";
		};
	};
};
class rhs_weap_m27iar_grip;
class T1_m27iar : rhs_weap_m27iar_grip
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			item = "iansky_specterdr";
			slot = "CowsSlot";
		};		
		class LinkedItemsAcc
		{
			item = "acc_pointer_IR";
			slot = "PointerSlot";
		};
	};
};
class rhs_weap_mk18_grip_KAC;
class T1_mk18 : rhs_weap_mk18_grip_KAC
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			item = "iansky_specterdr_t";
			slot = "CowsSlot";
		};
		class LinkedItemsAcc
		{
			item = "acc_pointer_IR";
			slot = "PointerSlot";
		};
		class LinkedItemsUnder
		{
			item = "rhsusf_acc_grip3";
			slot = "UnderBarrelSlot";
		};
	};
};
class rhs_weap_m4a1_blockII_grip_KAC_bk;
class T1_m4a1_blockII_SD : rhs_weap_m4a1_blockII_grip_KAC_bk
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			item = "iansky_specterdr";
			slot = "CowsSlot";
		};
		class LinkedItemsMuzzle
		{
			item = "rhsusf_acc_SFMB556";
			slot = "MuzzleSlot";
		};
		class LinkedItemsAcc
		{
			item = "acc_pointer_IR";
			slot = "PointerSlot";
		};
		class LinkedItemsUnder
		{
			item = "rhsusf_acc_grip1";
			slot = "UnderBarrelSlot";
		};
	};
};
class rhs_weap_m4a1_carryhandle_pmag_grip3;
class T1_m4a1_grip3 : rhs_weap_m4a1_carryhandle_pmag_grip3
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			item = "iansky_specterdr";
			slot = "CowsSlot";
		};
		class LinkedItemsAcc
		{
			item = "acc_pointer_IR";
			slot = "PointerSlot";
		};
		class LinkedItemsUnder
		{
			item = "rhsusf_acc_grip3";
			slot = "UnderBarrelSlot";
		};
	};
};
class rhs_weap_m4a1_carryhandle_mstock_grip3;
class T1_m4a1_Mstock_grip3 : rhs_weap_m4a1_carryhandle_mstock_grip3
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			item = "iansky_specterdr";
			slot = "CowsSlot";
		};
		class LinkedItemsAcc
		{
			item = "acc_pointer_IR";
			slot = "PointerSlot";
		};
		class LinkedItemsUnder
		{
			item = "rhsusf_acc_grip3";
			slot = "UnderBarrelSlot";
		};
	};
};
class rhs_weap_m4a1_carryhandle;
class T1_m4a1_carryhandle : rhs_weap_m4a1_carryhandle
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			item = "rhsusf_acc_eotech_552";
			slot = "CowsSlot";
		};
		class LinkedItemsAcc
		{
			item = "acc_pointer_IR";
			slot = "PointerSlot";
		};
	};
};
class rhs_weap_m4a1_blockII_grip_KAC_wd;
class T1_weap_Instructor_Black : rhs_weap_m4a1_blockII_grip_KAC_wd 
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			item = "iansky_specterdr";
			slot = "CowsSlot";
		};
		class LinkedItemsMuzzle
		{
			item = "rhsusf_acc_SF3P556";
			slot = "MuzzleSlot";
		};
		class LinkedItemsAcc
		{
			item = "acc_pointer_IR";
			slot = "PointerSlot";
		};
		class LinkedItemsUnder
		{
			item = "rhsusf_acc_grip1";
			slot = "UnderBarrelSlot";
		};
	};
};
class rhs_weap_m4a1_blockII_grip_d;
class T1_weap_Instructor_Orange : rhs_weap_m4a1_blockII_grip_d
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			item = "iansky_specterdr_d";
			slot = "CowsSlot";
		};
		class LinkedItemsMuzzle
		{
			item = "rhsusf_acc_SF3P556";
			slot = "MuzzleSlot";
		};
		class LinkedItemsAcc
		{
			item = "acc_pointer_IR";
			slot = "PointerSlot";
		};
		class LinkedItemsUnder
		{
			item = "rhsusf_acc_grip1";
			slot = "UnderBarrelSlot";
		};
	};
};

class rhsusf_weap_MP7A2;
class T1_weap_mp7: rhsusf_weap_MP7A2
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			item = "optic_Aco_smg";
			slot = "CowsSlot";
		};
		class LinkedItemsAcc
		{
			item = "acc_pointer_IR";
			slot = "PointerSlot";
		};
	};
};

class UniformItem;
class Uniform_Base;
class rhs_uniform_g3_m81: Uniform_Base
{
	class ItemInfo;
};
class rhs_uniform_FROG01_d;
class rhs_uniform_FROG01_wd: rhs_uniform_FROG01_d
{
	class ItemInfo;
};
class T1_rhs_uniform_FROG01_wd: rhs_uniform_FROG01_wd
{
	scope = 2;
	displayName = "T1 Uniform 2";
	class ItemInfo: ItemInfo
	{
		containerClass = "Supply130";
	};
};

class T1_U_Diver_Standard: Uniform_Base
{
	scope = 2;
	displayName = "T1 Wetsuit";
	picture = "\A3\characters_f\data\ui\icon_U_B_Wetsuit_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = "T1_Diver_Soldier_F";
		uniformtype = "Neopren";
		containerClass = "Supply300";
		mass = 80;
	};
};
class U_B_FullGhillie_lsh: Uniform_Base
	{
		class ItemInfo;
	};
class T1_U_B_FullGhillie_lsh: U_B_FullGhillie_lsh
{
	scope = 2;
	displayName = "T1 Ghillie Suit";
	class ItemInfo: ItemInfo
	{
		containerClass = "Supply110";
	};
};
class T1_U_Instructor_Polo_Black: Uniform_Base
{
	scope = 2;
	displayName = "T1 Instructor Polo Shirt (Black)";
	picture = "\t1_textures\ui\icon_t1_u_instructor_polo_black.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = "T1_Instructor_Polo_Black_F";
		containerClass = "Supply110";
		mass = 80;
	};
};
class T1_U_Instructor_Polo_Orange: Uniform_Base
{
	scope = 2;
	displayName = "T1 Instructor Polo Shirt (Orange)";
	picture = "\t1_textures\ui\icon_t1_u_instructor_polo_orange.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = "T1_Instructor_Polo_Orange_F";
		containerClass = "Supply110";
		mass = 80;
	};
};

class V_PlateCarrier2_rgr;
class V_PlateCarrier2_rgr_noflag_F: V_PlateCarrier2_rgr
{
	class ItemInfo;
}

class T1_V_PlateCarrier2_Standard: V_PlateCarrier2_rgr_noflag_F
{
	scope = 2;
	displayName = "T1 Carrier Rig";
	class ItemInfo: Iteminfo
	{
		hiddenSelections[] = {"camo"};
	};
};
class T1_V_PlateCarrier2_Standard_SFAR: T1_V_PlateCarrier2_Standard
{
    scope = 1;
    class ItemInfo: Iteminfo
    {
        containerClass = "Supply200";
    };
};
/*
class V_PlateCarrier1_rgr;
class V_PlateCarrier2_rgr: V_PlateCarrier1_rgr
{
	class ItemInfo;
};


class T1_V_PlateCarrier2_Standard: V_PlateCarrier2_rgr
{
	scope = 2;
	displayName = "T1 Carrier Rig";
	picture = "\A3\characters_f\Data\UI\icon_V_plate_carrier_2_CA.paa";
	model = "\A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\t1_textures\units\t1_vests_camo_co.paa"};
	class ItemInfo: Iteminfo
	{
		hiddenSelections[] = {"camo"};
	};
};
class T1_V_PlateCarrier2_Standard_SFAR: T1_V_PlateCarrier2_Standard
{
    scope = 2;
    class ItemInfo: Iteminfo
    {
        containerClass = "Supply200";
    };
};

*/