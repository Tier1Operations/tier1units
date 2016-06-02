class InventoryOpticsItem_Base_F;
class Iteminfo;
class ItemCore;
class optic_AMS_base: ItemCore
{
	class ItemInfo: InventoryOpticsItem_Base_F
	{
		class OpticsModes
		{
			class AMS
			{
				visionMode[] = {};
			};
			class Iron
			{
				distanceZoomMin = 100;
				distanceZoomMax = 100;
				discreteDistance[] = {100};
			};
		};
	};
};
class iansky_specterdr: ItemCore
{
	class ItemInfo: InventoryOpticsItem_Base_F
	{
		class OpticsModes
		{
			class DRScope
			{
				visionMode[] = {};
			};
		};
	};
};
/*
class NVGoggles;
class ACE_NVG_Gen4: NVGoggles
{
	class ItemInfo
	{
		modelOff = "";
	};
};
*/
class rhsusf_weap_glock17g4;
class T1_weap_sidearm_l: rhsusf_weap_glock17g4
{
};
#define t1_mag_sidearm_l ""

class srifle_LRR_F;
class T1_weap_sierra: srifle_LRR_F
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			item = "optic_AMS";
			slot = "CowsSlot";
		};
	};
};
class BWA3_MP7;
class T1_weap_sidearm_m: BWA3_MP7
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			item = "optic_Aco_smg";
			slot = "CowsSlot";
		};
		class LinkedItemsMuzzle
		{
			item = "BWA3_muzzle_snds_MP7";
			slot = "MuzzleSlot";
		};
		class LinkedItemsAcc
		{
			item = "acc_pointer_IR";
			slot = "PointerSlot";
		};
	};
};

class Rifle_Long_Base_F;
class LMG_Zafir_F: Rifle_Long_Base_F
{
	magazines[] += {"rhsusf_100Rnd_762x51_m62_tracer"};
	class WeaponSlotsInfo;
	class Single;
	class FullAuto;
};
class 45KO_zafir_black: LMG_Zafir_F	{
	class WeaponSlotsInfo;
	class Single;
	class FullAuto;
};
class T1_weap_mmg_sf: 45KO_zafir_black
{
	displayName = "Negev NG7 NATO (Black)";
	dispersion = 0.00032;
	ACE_Overheating_JamChance[] = {0, 0.00010, 0.0005, 0.0025};
	class WeaponSlotsInfo: WeaponSlotsInfo {
		mass = 168;
	};
	class Single: Single {
		dispersion = 0.00032;
	};		
	class FullAuto: FullAuto {	
		dispersion = 0.00032;
	};
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			item = "iansky_specterdrkf";
			slot = "CowsSlot";
		};
		class LinkedItemsMuzzle
		{
			item = "ACE_muzzle_mzls_B";
			slot = "MuzzleSlot";
		}
		class LinkedItemsAcc
		{
			item = "acc_pointer_IR";
			slot = "PointerSlot";
		};
	};
};
class rhs_weap_m249_pip_L;
class T1_weap_lmg: rhs_weap_m249_pip_L
{
	magazines[] = {
		"rhs_200rnd_556x45_M_SAW",
		"rhs_200rnd_556x45_B_SAW",
		"rhs_200rnd_556x45_T_SAW",
		"rhsusf_100Rnd_556x45_soft_pouch",
		"rhsusf_200Rnd_556x45_soft_pouch",
		"rhsusf_100Rnd_556x45_M200_soft_pouch",
		"rhs_mag_30Rnd_556x45_Mk318_Stanag",
		"rhs_mag_30Rnd_556x45_Mk262_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green",
		"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Yellow",
		"rhs_mag_30Rnd_556x45_M200_Stanag",
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag_Tracer_Red",
		"30Rnd_556x45_Stanag_Tracer_Green",
		"30Rnd_556x45_Stanag_Tracer_Yellow",
		"T1_30Rnd_556x45_Stanag_SD",
		"SMA_30Rnd_556x45_M855A1",
		"SMA_30Rnd_556x45_M855A1_Tracer",
		"SMA_30Rnd_556x45_M855A1_IR"
	};
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			item = "iansky_specterdrkf";
			slot = "CowsSlot";
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
			item = "iansky_specterdrkf";
			slot = "CowsSlot";
		};
		class LinkedItemsAcc
		{
			item = "acc_pointer_IR";
			slot = "PointerSlot";
		};
	};
};

class SMA_AssaultBase;
class SMA_556_RIFLEBASE : SMA_AssaultBase {
	magazines[] += {"T1_30Rnd_556x45_Stanag_SD"};
};

class SMA_HK416vfg;
class T1_weap_rifle: SMA_HK416vfg
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			item = "iansky_specterdrkf";
			slot = "asdg_OpticRail_SMAAssault";
		};
		class LinkedItemsAcc
		{
			item = "acc_pointer_IR";
			slot = "asdg_FrontSideRail_SMAAssault";
		};
	};
};
class SMA_Mk16;
class UGL_F;
class SMA_Mk16_EGLM : SMA_Mk16
{
	class EGLM : UGL_F {
		// I don't get why SMA overrode it with a reordered equal list, but they did.
		magazines[] += {"ACE_HUNTIR_M203"};
	};
};
class SMA_MK16_EGLM_black;
class T1_weap_rifle_gl: SMA_MK16_EGLM_black
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			item = "iansky_specterdrkf";
			slot = "asdg_OpticRail_SMAAssault";
		};
		class LinkedItemsAcc
		{
			item = "acc_pointer_IR";
			slot = "asdg_FrontSideRail_SMAAssault";
		};
	};
};		
class T1_weap_rifle_sd: SMA_HK416vfg
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			item = "iansky_specterdrkf";
			slot = "asdg_OpticRail_SMAAssault";
		};
		class LinkedItemsMuzzle
		{
			item = "SMA_supp2b_556";
			slot = "MuzzleSlot";
		}
		class LinkedItemsAcc
		{
			item = "acc_pointer_IR";
			slot = "asdg_FrontSideRail_SMAAssault";
		};
	};
};
class T1_weap_rifle_gl_sd: SMA_MK16_EGLM_black
{
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			item = "iansky_specterdrkf";
			slot = "asdg_OpticRail_SMAAssault";
		};
		class LinkedItemsMuzzle
		{
			item = "SMA_supp2bSCAR_556";
			slot = "MuzzleSlot";
		}
		class LinkedItemsAcc
		{
			item = "acc_pointer_IR";
			slot = "asdg_FrontSideRail_SMAAssault";
		};
	};
};
class srifle_DMR_03_woodland_F;
class T1_weap_romeo_mmdlc : srifle_DMR_03_woodland_F
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
class UniformItem;
class Uniform_Base;
class T1_U_Squad_Standard: Uniform_Base
{
	scope = 2;
	displayName = "T1 Uniform";
	picture = "\t1_units\data\ui\icon_t1_u_squad_standard.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = "T1_Soldier_F";
		containerClass = "Supply130";
		mass = 80;
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
		containerClass = "Supply230";
		mass = 80;
	};
};
class U_B_GhillieSuit;
class T1_U_Sniper_Standard: U_B_GhillieSuit
{
	scope = 2;
	displayName = "T1 Ghillie Suit";
	picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = "T1_Sniper_Standard_F";
		containerClass = "Supply110";
		mass = 80;
	};
};
class T1_U_Instructor_Polo_Black: Uniform_Base
{
	scope = 2;
	displayName = "T1 Instructor Polo Shirt (Black)";
	picture = "\t1_units\data\ui\icon_t1_u_instructor_polo_black.paa";
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
	picture = "\t1_units\data\ui\icon_t1_u_instructor_polo_orange.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = "T1_Instructor_Polo_Orange_F";
		containerClass = "Supply110";
		mass = 80;
	};
};
class T1_U_Pilot_Standard: Uniform_Base
{
	scope = 2;
	displayName = "T1 Coveralls";
	picture = "\A3\characters_f\data\ui\icon_U_B_coveralls_ca.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = "T1_Pilot_Standard_F";
		containerClass = "Supply120";
		mass = 80;
	};
};
class T1_U_Pilot_Black: Uniform_Base
{
	scope = 2;
	displayName = "T1 Coveralls (Black)";
	picture = "\t1_units\data\ui\icon_t1_u_pilot_black.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = "T1_Pilot_Black_F";
		containerClass = "Supply120";
		mass = 80;
	};
};
class T1_U_Pilot_BlackCamo: Uniform_Base
{
	scope = 2;
	displayName = "T1 Coveralls (Black Camo)";
	picture = "\t1_units\data\ui\icon_t1_u_pilot_blackcamo.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = "T1_Pilot_BlackCamo_F";
		containerClass = "Supply120";
		mass = 80;
	};
};
class T1_U_Pilot_Camo: Uniform_Base
{
	scope = 2;
	displayName = "T1 Coveralls (Camo)";
	picture = "\t1_units\data\ui\icon_t1_u_pilot_camo.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = "T1_Pilot_Camo_F";
		containerClass = "Supply120";
		mass = 80;
	};
};
class T1_U_Pilot_Night: Uniform_Base
{
	scope = 2;
	displayName = "T1 Coveralls (Night)";
	picture = "\t1_units\data\ui\icon_t1_u_pilot_night.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = "T1_Pilot_Night_F";
		containerClass = "Supply120";
		mass = 80;
	};
};
class V_PlateCarrier2_rgr;
class T1_V_PlateCarrier2_Standard: V_PlateCarrier2_rgr
{
	scope = 2;
	displayName = "T1 Carrier Rig";
	picture = "\A3\characters_f\Data\UI\icon_V_plate_carrier_2_CA.paa";
	model = "\A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\t1_units\data\units\t1_vests_camo_co.paa"};
	class ItemInfo: Iteminfo
	{
		hiddenSelections[] = {"camo"};
	};
};
