
#define STDITEMS    "ItemRadio","ACE_EarPlugs","ACE_microDAGR","ACE_MapTools","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie", "ACE_tourniquet", "ACE_tourniquet", "ACE_tourniquet", "ACE_tourniquet", "ACRE_PRC152", "rhsusf_ANPVS_14", "ACE_Flashlight_MX991"

#define STDITEMS_SF "ItemRadio","ACE_EarPlugs","ACE_microDAGR","ACE_MapTools","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie", "ACE_tourniquet", "ACE_tourniquet", "ACE_tourniquet", "ACE_tourniquet", "ACRE_PRC152", "ACE_NVG_Gen4", "ACE_Flashlight_MX991"

// MEDICALITEMS is used in addition to STDITEMS for units without backpacks
#define MEDICALITEMS "ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_morphine","ACE_morphine","ACE_morphine","ACE_epinephrine"
#define MEDICALITEMS2 "ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_morphine","ACE_morphine","ACE_morphine","ACE_epinephrine" 

class CfgPatches
{
	class t1_units
	{
		units[] = {
			"T1_Kitbag_camo",
			"T1_AssaultPack_rgr",
			"T1_Kitbag_camo_Lead_Trainer",
			"T1_Kitbag_camo_Sniper",
			"T1_AssaultPack_Sniper_RHS",
			"T1_FieldPack_Scout_Lead",
			"T1_Kitbag_camo_medic",
			"T1_AssaultPack_pl_medic",
			"T1_Kitbag_camo_sl",
			"T1_Kitbag_camo_ss",
			"T1_AssaultPack_cls",
			"T1_Carryall_camo",
			"T1_Kitbag_camo_Repair",
			"T1_Carryall_camo_Exp",
			"T1_AssaultPack_PLEOD",
			"T1_AssaultPack_PLSgt_JTAC",
			"T1_Backpack_PL_Lead",
			"T1_AssaultPack_AR",
			"T1_AssaultPack_AAR",
			"T1_Kitbag_camo_AT",
			"T1_Kitbag_camo_Medium_AT",
			"T1_Kitbag_camo_AA",
			"T1_Carryall_camo_AAT",
			"T1_Carryall_camo_Medium_AAT",
			"T1_Carryall_camo_AAA",
			"T1_AssaultPack_MMG",
			"T1_Kitbag_camo_AMG",
			"T1_Kitbag_camo_Section_AT",
			"T1_backpack_grenadier",
			"T1_Static_Designator_01_weapon_F",
			"T1_Instructor_Polo_Black_F",
			"T1_Instructor_Polo_Orange_F",
			
			"T1_Soldier_F",
			"T1_Spotter_Standard_F",
			"T1_Sniper_Standard_F",
			"T1_Spotter_Light_F",
			"T1_Sniper_Light_F",
			"T1_Specialist_AT_Standard_F",
			"T1_Specialist_AAT_Standard_F",
			"T1_Specialist_Medium_AT_Standard_F",
			"T1_Specialist_Medium_AAT_Standard_F",
			"T1_Specialist_AA_Standard_F",
			"T1_Specialist_AAA_Standard_F",
			"T1_Specialist_MG_Standard_F",
			"T1_Specialist_AMG_Standard_F",
			"T1_Scout_TL_Standard_F",
			"T1_Scout_Standard_F",
			"T1_Section_Lead_Standard_F",
			"T1_Section_Sgt_Standard_F",
			"T1_Section_CLS_Standard_F",
			"T1_Section_AR_Standard_F",
			"T1_Section_AR_Alt_F",
			"T1_Section_AAR_Standard_F",
			"T1_Section_AT_Standard_F",
			"T1_Section_AT_DM_F",
			"T1_Platoon_Lead_Standard_F",
			"T1_Platoon_Medic_Standard_F",
			"T1_Platoon_EOD_Standard_F",
			"T1_Platoon_Sgt_Standard_F",
			"T1_charlie_assault",	// charlie 1 is 6x assault
			"T1_charlie_marksman",
			"T1_charlie_grenadier",
			"T1_charlie_machinegunner",
			"T1_charlie_medic",
			"T1_section_ammobox",
			"T1_support_ammobox",
			"T1_eod_ammobox"
		};
		weapons[] = {
			"T1_weap_sidearm_l",
			"T1_weap_sierra",
			"T1_weap_sidearm_m",
			"T1_weap_lmg",
			"T1_weap_lmg2",
			"T1_weap_mmg",
			"T1_weap_rifle",
			"T1_weap_rifle_gl",
			"T1_weap_rifle_sd",
			"T1_weap_rifle_gl_sd",
			"T1_weap_marksman",
			"T1_weap_m16a4_SD",
			"T1_weap_m16a4",
			"T1_weap_m16a4_carryhandle",
			"T1_weap_sierra_RHS",
			"T1_weap_sierra_spotter_RHS",
			"T1_45KO_ABR_SD",
			"T1_45KO_ABR_green_SD",
			"T1_hk416d145_m320_SD",
			"T1_mk18_m320",
			"T1_m27iar",
			"T1_mk18",
			"T1_m4a1_blockII_SD",
			"T1_SF_m4a1_blockII_SD_wd",
			"T1_m4a1_grip3",
			"T1_m4a1_Mstock_grip3",
			"T1_m4a1_carryhandle",
			"T1_weap_Instructor_Black",
			"T1_weap_Instructor_Orange",
			"T1_rhs_uniform_FROG01_wd",
			"T1_U_Diver_Standard",
			"T1_U_B_FullGhillie_lsh",
			"T1_U_Instructor_Polo_Black",
			"T1_U_Instructor_Polo_Orange",
			"T1_V_PlateCarrier2_Standard",
			"T1_V_PlateCarrier2_Standard_SFAR"
		};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"t1_textures",
			"acre_main",
			"45KO_SO_weapons_ABR",
			"iansky_opt",
			"ace_flashsuppressors",
			"ace_medical",
			"rhsusf_c_weapons",
			"t1_silencer_ammo_fix",
			"tf47_m3maaws"
		};
	};
};
class CfgFactionClasses
{
	class T1_Units
	{
		displayName = "T1 Units";
		side = 1;
		priority = 10;
		icon = "\t1_textures\cfgFactionClasses_T1_ca.paa";
	};
	class T1_Units_Desert
    {
        displayName = "T1 Units (Desert)";
        side = 1;
        priority = 10;
        icon = "\t1_textures\cfgFactionClasses_T1_ca.paa";
    };
};
class CfgWeapons {
#include "weapons.cpp"
};
class CfgVehicleClasses
{
	class Platoon
	{
		displayName = "Men (Platoon)";
	};
	class Section
	{
		displayName = "Men (Section)";
	};
	class Special
	{
		displayName = "Men (Special)";
	};
	class SF
	{
		displayName = "Men (SF)";
	};
	class Diver
	{
		displayName = "Men (Diver)";
	};
	class Pilot
	{
		displayName = "Men (Pilot)";
	};
	class Ammo
	{
		displayName = "Ammo";
	};
};
class CfgVehicles
{
	class B_Soldier_base_F;
	class B_Kitbag_Base;
	class B_Kitbag_rgr;
	class T1_Kitbag_camo: B_Kitbag_Base
	{
		scope = 1;
		displayName = "Kitbag (T1 Camo)";
		hiddenSelectionsTextures[] = {"\t1_textures\backpacks\marpat_kitbag.paa"};
		class TransportItems
		{
			class Bandage1
			{
				count = 16;
				name = "ACE_fieldDressing";
			};
			class _xx_ACE_morphine
			{
				count = 3;
				name = "ACE_morphine";
			};
			class _xx_ACE_epinephrine
			{
				count = 1;
				name = "ACE_epinephrine";
			};
		};
	};
	class B_AssaultPack_rgr;
	class T1_AssaultPack_rgr: B_AssaultPack_rgr
	{
		scope = 1;
		displayName = "Kitbag PltLead (T1 Camo)";
		//hiddenSelectionsTextures[] = {"\t1_textures\backpacks\t1_B_AssaultPack_rgr_camo_co.paa"};
		class TransportItems
		{
			class Bandage1
			{
				count = 16;
				name = "ACE_fieldDressing";
			};

			class _xx_ACE_morphine
			{
				count = 3;
				name = "ACE_morphine";
			};
			class _xx_ACE_epinephrine
			{
				count = 1;
				name = "ACE_epinephrine";
			};
		};
	};
	class T1_Kitbag_camo_Lead_Trainer: B_Kitbag_Base
	{
		scope = 1;
		displayName = "Kitbag Lead (T1 Camo)";
		//hiddenSelectionsTextures[] = {"\t1_textures\backpacks\ogao_117.paa"};
		class TransportItems
		{
			class Bandage1
			{
				count = 16;
				name = "ACE_fieldDressing";
			};

			class _xx_ACE_morphine
			{
				count = 3;
				name = "ACE_morphine";
			};
			class _xx_ACE_epinephrine
			{
				count = 1;
				name = "ACE_epinephrine";
			};
			class radio {
				count = 1;
				name = "ACRE_PRC117F";
			};
		};
	};
	class T1_Kitbag_camo_Sniper: B_Kitbag_Base
	{
		scope = 1;
		displayName = "Assault Pack Spotter";
		//hiddenSelectionsTextures[] = {"\t1_textures\backpacks\ogao_117.paa"};
		class TransportItems
		{
			class Bandage1
			{
				count = 16;
				name = "ACE_fieldDressing";
			};

			class _xx_ACE_morphine
			{
				count = 3;
				name = "ACE_morphine";
			};
			class _xx_ACE_epinephrine
			{
				count = 3;
				name = "ACE_epinephrine";
			};
			class _xx_ACE_Vector
			{
				count = 1;
				name = "ACE_Vector";
			};
			class radio {
				count = 1;
				name = "ACRE_PRC117F";
			};
		};
	};	
	class T1_AssaultPack_Sniper_RHS: B_AssaultPack_rgr
	{
		scope = 1;
		displayName = "Assault Pack Sniper";
		//hiddenSelectionsTextures[] = {"\t1_textures\backpacks\t1_B_AssaultPack_rgr_camo_co.paa"};
		class TransportMagazines
		{			
			class _xx_rhsusf_5Rnd_300winmag_xm2010
			{
				count = 12;
				magazine = "rhsusf_5Rnd_300winmag_xm2010";
			};
		};
		class TransportItems
		{
			class Bandage1
			{
				count = 16;
				name = "ACE_fieldDressing";
			};
			class _xx_ACE_morphine
			{
				count = 3;
				name = "ACE_morphine";
			};
			class _xx_ACE_epinephrine
			{
				count = 2;
				name = "ACE_epinephrine";
			};
			class radio {
				count = 1;
				name = "ACRE_PRC117F";
			};
		};
	};
	class B_FieldPack_khk;
	class T1_FieldPack_Scout_Lead: B_FieldPack_khk
	{
		scope = 1;
		displayName = "Fieldpack Lead (T1 Camo)";
		//hiddenSelectionsTextures[] = {"\t1_textures\backpacks\aor2_210.paa"};
		class TransportItems
		{
			class Bandage1
			{
				count = 16;
				name = "ACE_fieldDressing";
			};

			class _xx_ACE_morphine
			{
				count = 3;
				name = "ACE_morphine";
			};
			class _xx_ACE_Vector
			{
				count = 1;
				name = "ACE_Vector";
			};
			class _xx_Laserdesignator
			{
				count = 1;
				name = "Laserdesignator";
			};
			class tourniquet
			{
				count = 4;
				name = "ACE_tourniquet";
			};
			class surgicalKit
			{
				count = 1;
				name = "ACE_surgicalKit";
			};
			class IVFluid
			{
				count = 2;
				name = "ACE_bloodIV";
			};
			class radio {
				count = 1;
				name = "ACRE_PRC117F";
			};
		};
	};
	class T1_Kitbag_camo_medic: B_Kitbag_rgr
	{
		scope = 1;
		displayName = "Kitbag Medic (T1 Camo)";
		class TransportItems
		{
			class Bandage1
			{
				count = 110;
				name = "ACE_fieldDressing";
			};
			class _xx_ACE_morphine
			{
				count = 26;
				name = "ACE_morphine";
			};
			class _xx_ACE_epinephrine
			{
				count = 16;
				name = "ACE_epinephrine";
			};
			class IVFluid
			{
				count = 8;
				name = "ACE_bloodIV";
			};
		};
	};
	class T1_Kitbag_camo_sl: B_Kitbag_rgr
	{
		scope = 1;
		displayName = "Kitbag SL (T1 Camo)";
		class TransportMagazines
		{			
			class _xx_rhsusf_100Rnd_556x45_soft_pouch
			{
				count = 1;
				magazine = "rhsusf_100Rnd_556x45_soft_pouch";
			};
		};
	};
	class T1_Kitbag_camo_ss: B_Kitbag_rgr
	{
		scope = 1;
		displayName = "Kitbag SS (T1 Camo)";
		class TransportMagazines
		{			
			class _xx_rhsusf_100Rnd_556x45_soft_pouch
			{
				count = 1;
				magazine = "rhsusf_100Rnd_556x45_soft_pouch";
			};
		};
	};
	class T1_AssaultPack_pl_medic: B_AssaultPack_rgr
	{
		scope = 1;
		displayName = "AssaultPack Medic";
		//hiddenSelectionsTextures[] = {"\t1_textures\backpacks\t1_B_AssaultPack_rgr_camo_co.paa"};
		class TransportItems
		{
			class Bandage1
			{
				count = 110;
				name = "ACE_fieldDressing";
			};
			class _xx_ACE_morphine
			{
				count = 26;
				name = "ACE_morphine";
			};
			class _xx_ACE_epinephrine
			{
				count = 16;
				name = "ACE_epinephrine";
			};
			class _xx_ACE_bloodIV_250
			{
				count = 3;
				name = "ACE_bloodIV";
			};
		};
	};
	class T1_AssaultPack_cls: B_AssaultPack_rgr
	{
		scope = 1;
		displayName = "AssaultPack CLS (T1 Camo)";
		//hiddenSelectionsTextures[] = {"\t1_textures\backpacks\t1_B_AssaultPack_rgr_camo_co.paa"};
		class TransportItems
		{
			class Bandage1
			{
				count = 52;
				name = "ACE_fieldDressing";
			};
			class _xx_ACE_morphine
			{
				count = 20;
				name = "ACE_morphine";
			};
			class _xx_ACE_epinephrine
			{
				count = 12;
				name = "ACE_epinephrine";
			};
			class _xx_ACE_bloodIV_250
			{
				count = 6;
				name = "ACE_bloodIV";
			};
		};
		class TransportMagazines
		{
			class _xx_SmokeShell
			{
				count = 10;
				magazine = "SmokeShell";
			};
		};
	};
	class B_Carryall_Base;
	class T1_Carryall_camo: B_Carryall_Base
	{
		scope = 1;
		displayName = "Carryall Backpack (T1 Camo)";
		hiddenSelectionsTextures[] = {"\t1_textures\backpacks\marpat_carryall.paa"};
		class TransportItems
		{
			class Bandage1
			{
				count = 16;
				name = "ACE_fieldDressing";
			};

			class _xx_ACE_morphine
			{
				count = 3;
				name = "ACE_morphine";
			};
			class _xx_ACE_epinephrine
			{
				count = 1;
				name = "ACE_epinephrine";
			};
		};
	};
	class T1_Kitbag_camo_Repair: B_Kitbag_rgr
	{
		scope = 1;
		class TransportItems
		{
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
			class Bandage1
			{
				count = 16;
				name = "ACE_fieldDressing";
			};

			class _xx_ACE_morphine
			{
				count = 3;
				name = "ACE_morphine";
			};
			class _xx_ACE_epinephrine
			{
				count = 1;
				name = "ACE_epinephrine";
			};			
		};
	};
	class T1_Carryall_camo_Exp: T1_Carryall_camo
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_ClaymoreDirectionalMine_Remote_Mag
			{
				count = 2;
				magazine = "ClaymoreDirectionalMine_Remote_Mag";
			};
			class _xx_SatchelCarge_Remote_Mag
			{
				count = 1;
				magazine = "SatchelCharge_Remote_Mag";
			};
			class _xx_DemoCharge_Remote_Mag
			{
				count = 1;
				magazine = "DemoCharge_Remote_Mag";
			};
		};
		class TransportItems
		{
			class _xx_ToolKit
			{
				count = 1;
				name = "ToolKit";
			};
			class _xx_MineDetector
			{
				count = 1;
				name = "MineDetector";
			};
			class Bandage1
			{
				count = 16;
				name = "ACE_fieldDressing";
			};

			class _xx_ACE_morphine
			{
				count = 3;
				name = "ACE_morphine";
			};
			class _xx_ACE_epinephrine
			{
				count = 1;
				name = "ACE_epinephrine";
			};
		};
	};
	class T1_AssaultPack_PLEOD: B_AssaultPack_rgr
	{
		scope = 1;
		//hiddenSelectionsTextures[] = {"\t1_textures\backpacks\t1_B_AssaultPack_rgr_camo_co.paa"};
		class TransportMagazines
		{
			class _xx_SatchelCarge_Remote_Mag
			{
				count = 1;
				magazine = "SatchelCharge_Remote_Mag";
			};
		};
		class TransportItems
		{
			class _xx_ToolKit
			{
				count = 1;
				name = "ToolKit";
			};			
		};
	};
	class T1_AssaultPack_PLSgt_JTAC: B_AssaultPack_rgr
	{
		scope = 1;
		//hiddenSelectionsTextures[] = {"\t1_textures\backpacks\ogao_117.paa"};
		class TransportItems
		{
			class Bandage1
			{
				count = 16;
				name = "ACE_fieldDressing";
			};

			class _xx_ACE_morphine
			{
				count = 3;
				name = "ACE_morphine";
			};
			class _xx_ACE_epinephrine
			{
				count = 1;
				name = "ACE_epinephrine";
			};
			class _xx_ACE_Vector
			{
				count = 1;
				name = "ACE_Vector";
			};
			class radio {
				count = 1;
				name = "ACRE_PRC117F";
			};
		};
	};
	class T1_Backpack_PL_Lead: B_AssaultPack_rgr
	{
		scope = 1;
		//hiddenSelectionsTextures[] = {"\t1_textures\backpacks\ogao_117.paa"};		
		class TransportItems
		{
			class Bandage1
			{
				count = 16;
				name = "ACE_fieldDressing";
			};

			class _xx_ACE_morphine
			{
				count = 3;
				name = "ACE_morphine";
			};
			class _xx_ACE_epinephrine
			{
				count = 1;
				name = "ACE_epinephrine";
			};
			class radio {
				count = 1;
				name = "ACRE_PRC117F";
			};
		};
	};
	class T1_AssaultPack_AR: B_AssaultPack_rgr
	{
		scope = 1;
		//hiddenSelectionsTextures[] = {"\t1_textures\backpacks\t1_B_AssaultPack_rgr_camo_co.paa"};
		class TransportMagazines
		{
			class _xx_rhsusf_100Rnd_556x45_soft_pouch
			{
				count = 3;
				magazine = "rhsusf_100Rnd_556x45_soft_pouch";
			};
		};
		class TransportItems
		{			
			class Bandage1
			{
				count = 16;
				name = "ACE_fieldDressing";
			};

			class _xx_ACE_morphine
			{
				count = 3;
				name = "ACE_morphine";
			};
			class _xx_ACE_epinephrine
			{
				count = 1;
				name = "ACE_epinephrine";
			};
		};
	};
	class T1_AssaultPack_AAR: B_AssaultPack_rgr
	{
		scope = 1;
		//hiddenSelectionsTextures[] = {"\t1_textures\backpacks\t1_B_AssaultPack_rgr_camo_co.paa"};
		class TransportMagazines
		{
			class _xx_rhs_200rnd_556x45_M_SAW
			{
				count = 4;
				magazine = "rhsusf_100Rnd_556x45_soft_pouch";
			};
		};
		class TransportItems
		{			
			class Bandage1
			{
				count = 16;
				name = "ACE_fieldDressing";
			};

			class _xx_ACE_morphine
			{
				count = 3;
				name = "ACE_morphine";
			};
			class _xx_ACE_epinephrine
			{
				count = 1;
				name = "ACE_epinephrine";
			};
		};
	};
	class T1_Kitbag_camo_AT: T1_Kitbag_camo
	{
		scope = 1;
		maximumLoad = 380;
		class TransportMagazines
		{
			class _xx_Titan_AT
			{
				magazine = "Titan_AT";
				count = 5;
			};
		};
		class TransportItems
		{
			class Bandage1
			{
				count = 16;
				name = "ACE_fieldDressing";
			};

			class _xx_ACE_morphine
			{
				count = 3;
				name = "ACE_morphine";
			};
			class _xx_ACE_epinephrine
			{
				count = 1;
				name = "ACE_epinephrine";
			};
		};
	};
	class T1_Kitbag_camo_Medium_AT: T1_Kitbag_camo
	{
		scope = 1;
		maximumLoad = 380;
		class TransportMagazines
		{
			class _xx_tf47_m3maaws_HE
			{
				magazine = "tf47_m3maaws_HE";
				count = 1;
			};
			class _xx_tf47_m3maaws_HEAT
			{
				magazine = "tf47_m3maaws_HEAT";
				count = 2;
			};
		};
		class TransportItems
		{
			class Bandage1
			{
				count = 16;
				name = "ACE_fieldDressing";
			};

			class _xx_ACE_morphine
			{
				count = 3;
				name = "ACE_morphine";
			};
			class _xx_ACE_epinephrine
			{
				count = 1;
				name = "ACE_epinephrine";
			};
		};
	};
	class T1_Kitbag_camo_AA: T1_Kitbag_camo
	{
		scope = 1;
		maximumLoad = 380;
		class TransportMagazines
		{
			class _xx_Titan_AA
			{
				magazine = "Titan_AA";
				count = 3;
			};
		};
		class TransportItems
		{
			class Bandage1
			{
				count = 16;
				name = "ACE_fieldDressing";
			};

			class _xx_ACE_morphine
			{
				count = 3;
				name = "ACE_morphine";
			};
			class _xx_ACE_epinephrine
			{
				count = 1;
				name = "ACE_epinephrine";
			};
		};
	};
	class T1_Carryall_camo_AAT: T1_Carryall_camo
	{
		scope = 1;
		maximumLoad = 600;
		class TransportMagazines
		{
			class _xx_Titan_AT
			{
				magazine = "Titan_AT";
				count = 4;
			};			
		};
	};
	class T1_Carryall_camo_Medium_AAT: T1_Carryall_camo
	{
		scope = 1;
		maximumLoad = 600;
		class TransportMagazines
		{
			class _xx_tf47_m3maaws_HEAT
			{
				magazine = "tf47_m3maaws_HEAT";
				count = 3;
			};
			class _xx_tf47_m3maaws_HE
			{
				magazine = "tf47_m3maaws_HE";
				count = 2;
			};
		};
	};
	class T1_Carryall_camo_AAA: T1_Carryall_camo
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_Titan_AA
			{
				magazine = "Titan_AA";
				count = 3;
			};
		};
	};
	class T1_AssaultPack_MMG: B_AssaultPack_rgr
	{
		scope = 1;
		//hiddenSelectionsTextures[] = {"\t1_textures\backpacks\t1_B_AssaultPack_rgr_camo_co.paa"};
		class TransportMagazines
		{
			class _xx_rhsusf_100Rnd_762x51_m62_tracer
			{
				magazine = t1_mag_mmg;
				count = 2;
			};
		};
		class TransportItems
		{
			class Bandage1
			{
				count = 16;
				name = "ACE_fieldDressing";
			};

			class _xx_ACE_morphine
			{
				count = 3;
				name = "ACE_morphine";
			};
			class _xx_ACE_epinephrine
			{
				count = 1;
				name = "ACE_epinephrine";
			};
		};
	};

	class T1_Kitbag_camo_AMG: T1_Kitbag_camo
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_rhsusf_100Rnd_762x51_m62_tracer
			{
				count = 4;
				magazine = t1_mag_mmg;
			};
		};
		class TransportItems
		{
			class Bandage1
			{
				count = 16;
				name = "ACE_fieldDressing";
			};

			class _xx_ACE_morphine
			{
				count = 3;
				name = "ACE_morphine";
			};
			class _xx_ACE_epinephrine
			{
				count = 1;
				name = "ACE_epinephrine";
			};			
		};
	};
	class T1_Kitbag_camo_Section_AT: T1_Kitbag_camo
	{
		scope = 1;
		class TransportItems
		{
			class Bandage1
			{
				count = 16;
				name = "ACE_fieldDressing";
			};
			class _xx_ACE_morphine
			{
				count = 3;
				name = "ACE_morphine";
			};
			class _xx_ACE_epinephrine
			{
				count = 1;
				name = "ACE_epinephrine";
			};
		};		
	};
	class T1_backpack_grenadier : T1_Kitbag_camo {
		scope = 1;
		class TransportItems {
			class Bandage1
			{
				count = 16;
				name = "ACE_fieldDressing";
			};
			class _xx_ACE_morphine
			{
				count = 3;
				name = "ACE_morphine";
			};
			class _xx_ACE_epinephrine
			{
				count = 1;
				name = "ACE_epinephrine";
			};
		};
		class TransportMagazines {
			class GLHE {
				count = 4;
				magazine = "rhsusf_mag_6Rnd_M441_HE";
			};
			class GLSMOKE {
				count = 1;
				magazine = "rhsusf_mag_6Rnd_M585_white"; // is flare?
			};
			class GLFLARE {
				count = 1;
				magazine = "rhsusf_mag_6Rnd_M714_white"; // is smoke?
			};
			class GLBUCK { 
				count = 1;
				magazine = "rhsusf_mag_6Rnd_M576_Buckshot";
			};
		};
	};

	class B_Static_Designator_01_weapon_F;
	class T1_Static_Designator_01_weapon_F: B_Static_Designator_01_weapon_F
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_compact_rgr_co.paa"};
	};

	class B_RangeMaster_F;
	class T1_Instructor_Polo_Black_F: B_RangeMaster_F
	{
		faction = "T1_Units";
		vehicleClass = "Special";
		attendant = 1;
		displayName = "T1 Instructor";
		uniformClass = "T1_U_Instructor_Polo_Black";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\t1_textures\units\instructor\t1_poloinstructor_b_co.paa"};
		weapons[] = {
			"T1_weap_Instructor_Black",
			"T1_weap_sidearm_l",
			"Throw",
			"Put",
			"ACE_Vector"
		};
		respawnWeapons[] = {
			"T1_weap_Instructor_Black",
			"T1_weap_sidearm_l",
			"Throw",
			"Put",
			"ACE_Vector"
		};
		magazines[] = {
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhsusf_mag_17Rnd_9x19_FMJ",
			"rhsusf_mag_17Rnd_9x19_FMJ",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"ACE_M84"
		};
		respawnmagazines[] = {
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhsusf_mag_17Rnd_9x19_FMJ",
			"rhsusf_mag_17Rnd_9x19_FMJ",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"ACE_M84"
		};
		linkedItems[] = {
			"H_Cap_headphones",
			"V_Rangemaster_belt",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[] = {
			"H_Cap_headphones",
			"V_Rangemaster_belt",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		backpack = "T1_Kitbag_camo_Lead_Trainer";
		items[] = {STDITEMS};
		respawnItems[] = {STDITEMS};
		camouflage = 1.4;
		engineer = 1;
	};
	class T1_Instructor_Polo_Orange_F: T1_Instructor_Polo_Black_F	
	{
		faction = "T1_Units";
		vehicleClass = "Special";
		attendant = 1;
		displayName = "T1 Instructor";
		uniformClass = "T1_U_Instructor_Polo_Orange";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\t1_textures\units\instructor\t1_poloinstructor_o_co.paa"};
		weapons[] = {
			"T1_weap_Instructor_Orange",
			"T1_weap_sidearm_l",
			"Throw",
			"Put",
			"ACE_Vector"
		};
		respawnWeapons[] = {
			"T1_weap_Instructor_Orange",
			"T1_weap_sidearm_l",
			"Throw",
			"Put",
			"ACE_Vector"
		};
		magazines[] = {
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhsusf_mag_17Rnd_9x19_FMJ",
			"rhsusf_mag_17Rnd_9x19_FMJ",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"ACE_M84"
		};
		respawnmagazines[] = {
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhsusf_mag_17Rnd_9x19_FMJ",
			"rhsusf_mag_17Rnd_9x19_FMJ",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"ACE_M84"
		};
		linkedItems[] = {
			"H_Cap_headphones",
			"V_Rangemaster_belt",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[] = {
			"H_Cap_headphones",
			"V_Rangemaster_belt",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		backpack = "T1_Kitbag_camo_Lead_Trainer";
		items[] = {STDITEMS};
		respawnItems[] = {STDITEMS};
		camouflage = 1.4;		
		engineer = 1;
	};
	class B_Soldier_F;
	class T1_Soldier_F: B_Soldier_F
	{
		scope = 1;
		uniformClass = "t1_rhs_uniform_FROG01_wd";
		camouflage = 1.4;
		items[] = {STDITEMS};
		respawnItems[] = {STDITEMS};
		linkedItems[] = {
			"T1_V_PlateCarrier2_Standard",
			"rhsusf_mich_helmet_marpatwd_norotos_headset",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[] = {
			"T1_V_PlateCarrier2_Standard",
			"rhsusf_mich_helmet_marpatwd_norotos_headset",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		T1_NoMedicIcon = 1;
	};
	class B_Spotter_F;
	class T1_Spotter_Standard_F: B_Spotter_F
	{
		scope = 2;
		t1_DutyMod = 0.965;
		faction = "T1_Units";
		vehicleClass = "Special";
		attendant = 1;
		T1_NoMedicIcon = 0;
		displayName = "T1 Spotter";
		uniformClass = "T1_U_B_FullGhillie_lsh";
		model = "\Ghillie\ghillie.p3d";
		modelSides[] = {3,1};
		uniformAccessories[] = {};
		weapons[] = {
			"T1_weap_m16a4_SD",			
			"Throw",
			"Put",
			"Laserdesignator"
		};
		respawnWeapons[] = {
			"T1_weap_m16a4_SD",			
			"Throw",
			"Put",
			"Laserdesignator"
		};
		magazines[] = {
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			t1_mag_rifle_sd,
			t1_mag_rifle_sd,
			t1_mag_sierra,
			t1_mag_sierra,
			t1_mag_sierra,
			t1_mag_sierra,
			t1_mag_sierra,
			t1_mag_sierra,
			t1_mag_sierra,
			"Laserbatteries",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"ACE_M84"
		};
		respawnmagazines[] = {
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			t1_mag_rifle_sd,
			t1_mag_rifle_sd,
			t1_mag_sierra,
			t1_mag_sierra,
			t1_mag_sierra,
			t1_mag_sierra,
			t1_mag_sierra,
			t1_mag_sierra,
			t1_mag_sierra,
			"Laserbatteries",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"ACE_M84"
		};
		linkedItems[] = {
			"T1_V_PlateCarrier2_Standard",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[] = {
			"T1_V_PlateCarrier2_Standard",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		items[] = {
			"ACE_IR_Strobe_Item",
			"ACE_DefusalKit",
			"ACE_ATragMX",
			"ACE_Kestrel4500",
			"ACE_RangeCard",
			STDITEMS_SF
		};
		respawnItems[] = {
			"ACE_IR_Strobe_Item",
			"ACE_DefusalKit",
			"ACE_ATragMX",
			"ACE_Kestrel4500",
			"ACE_RangeCard",
			STDITEMS_SF
		};
		backpack = "T1_Kitbag_camo_Sniper";
		camouflage = 0.3;
		glassesEnabled = 0;
		engineer = 1;
	};
	class B_Sniper_F;
	class T1_Sniper_Standard_F: B_Sniper_F
	{
		scope = 2;
		t1_DutyMod = 0.965;
		faction = "T1_Units";
		vehicleClass = "Special";
		attendant = 1;
		T1_NoMedicIcon = 0;
		displayName = "T1 Sniper";
		uniformClass = "T1_U_B_FullGhillie_lsh";
		model = "\Ghillie\ghillie.p3d";
		modelSides[] = {3,1};
		uniformAccessories[] = {};
		weapons[] = {
			"T1_weap_sierra",
			"hgun_P07_snds_F",
			"Throw",
			"Put",
			"Rangefinder"
		};
		respawnWeapons[] = {
			"T1_weap_sierra",
			"hgun_P07_snds_F",
			"Throw",
			"Put",
			"Rangefinder"
		};
		magazines[] = {		
			t1_mag_sierra,
			t1_mag_sierra,
			t1_mag_sierra,
			t1_mag_sierra,
			t1_mag_sierra,
			t1_mag_sierra,
			t1_mag_sierra,
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"HandGrenade",
			"SmokeShell"
		};
		respawnmagazines[] = {
			t1_mag_sierra,
			t1_mag_sierra,
			t1_mag_sierra,
			t1_mag_sierra,
			t1_mag_sierra,
			t1_mag_sierra,
			t1_mag_sierra,
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"HandGrenade",
			"SmokeShell"
		};
		linkedItems[] = {
			"T1_V_PlateCarrier2_Standard",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[] = {
			"T1_V_PlateCarrier2_Standard",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		items[] = {
			"ACE_IR_Strobe_Item",
			"ACE_DefusalKit",
			STDITEMS_SF,
			"ACE_ATragMX",
			"ACE_Kestrel4500",
			"ACE_RangeCard",
			"ACE_epinephrine",
			"ACE_epinephrine",
			"ACE_tourniquet",
			"ACE_tourniquet",
			"ACE_tourniquet",
			"ACE_tourniquet",
			"ACE_surgicalKit",
			"ACE_bloodIV",
			"ACE_bloodIV",
			MEDICALITEMS2
		};
		respawnItems[] = {
			"ACE_IR_Strobe_Item",
			"ACE_DefusalKit",
			STDITEMS_SF,
			"ACE_ATragMX",
			"ACE_Kestrel4500",
			"ACE_RangeCard",
			"ACE_epinephrine",
			"ACE_epinephrine",
			"ACE_tourniquet",
			"ACE_tourniquet",
			"ACE_tourniquet",
			"ACE_tourniquet",
			"ACE_surgicalKit",
			"ACE_bloodIV",
			"ACE_bloodIV",
			MEDICALITEMS2
		};		
		camouflage = 0.3;
		glassesEnabled = 0;
	};
	class T1_Spotter_Light_F: B_Spotter_F
	{
		scope = 2;
		t1_DutyMod = 0.965;
		faction = "T1_Units";
		vehicleClass = "Special";
		attendant = 1;
		T1_NoMedicIcon = 0;
		displayName = "T1 Spotter Light";
		uniformClass = "T1_U_B_FullGhillie_lsh";
		model = "\Ghillie\ghillie.p3d";
		modelSides[] = {3,1};
		uniformAccessories[] = {};
		weapons[] = {
			"T1_weap_sierra_spotter_RHS",			
			"Throw",
			"Put",
			"Laserdesignator"
		};
		respawnWeapons[] = {
			"T1_weap_sierra_spotter_RHS",			
			"Throw",
			"Put",
			"Laserdesignator"
		};
		magazines[] = {
			"rhsusf_5Rnd_300winmag_xm2010",
			"rhsusf_5Rnd_300winmag_xm2010",
			"rhsusf_5Rnd_300winmag_xm2010",
			"rhsusf_5Rnd_300winmag_xm2010",
			"ACE_20Rnd_762x51_Mk316_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk316_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk316_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk316_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk316_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk316_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk316_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk316_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mag_SD",
			"ACE_20Rnd_762x51_Mag_SD",
			"Laserbatteries"
		};
		respawnmagazines[] = {
			"rhsusf_5Rnd_300winmag_xm2010",
			"rhsusf_5Rnd_300winmag_xm2010",
			"rhsusf_5Rnd_300winmag_xm2010",
			"rhsusf_5Rnd_300winmag_xm2010",
			"ACE_20Rnd_762x51_Mk316_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk316_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk316_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk316_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk316_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk316_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk316_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk316_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mag_SD",
			"ACE_20Rnd_762x51_Mag_SD",
			"Laserbatteries"
		};
		linkedItems[] = {
			"T1_V_PlateCarrier2_Standard",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[] = {
			"T1_V_PlateCarrier2_Standard",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		items[] = {
			"ACE_IR_Strobe_Item",
			"ACE_DefusalKit",
			"ACE_ATragMX",
			"ACE_Kestrel4500",
			"ACE_RangeCard",
			STDITEMS_SF
		};
		respawnItems[] = {
			"ACE_IR_Strobe_Item",
			"ACE_DefusalKit",
			"ACE_ATragMX",
			"ACE_Kestrel4500",
			"ACE_RangeCard",
			STDITEMS_SF
		};
		backpack = "T1_Kitbag_camo_Sniper";
		camouflage = 0.3;
		glassesEnabled = 0;
	};
	class T1_Sniper_Light_F: T1_Sniper_Standard_F
	{
		scope = 2;
		t1_DutyMod = 0.965;
		faction = "T1_Units";
		vehicleClass = "Special";
		attendant = 1;
		displayName = "T1 Sniper Light";
		uniformClass = "T1_U_B_FullGhillie_lsh";
		model = "\Ghillie\ghillie.p3d";
		modelSides[] = {3,1};
		uniformAccessories[] = {};
		weapons[] = {
			"T1_weap_sierra_RHS",	
			"hgun_P07_snds_F",
			"Throw",
			"Put",
			"Rangefinder"
		};
		respawnWeapons[] = {
			"T1_weap_sierra_RHS",
			"hgun_P07_snds_F",			
			"Throw",
			"Put",
			"Rangefinder"
		};
		magazines[] = {			
			"rhsusf_5Rnd_300winmag_xm2010",
			"rhsusf_5Rnd_300winmag_xm2010",
			"rhsusf_5Rnd_300winmag_xm2010",
			"rhsusf_5Rnd_300winmag_xm2010",
			"rhsusf_5Rnd_300winmag_xm2010",
			"T1_rhsusf_5Rnd_300winmag_xm2010_SD",
			"T1_rhsusf_5Rnd_300winmag_xm2010_SD",
			"T1_rhsusf_5Rnd_300winmag_xm2010_SD",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"SmokeShell",
			"HandGrenade"
		};
		respawnmagazines[] = {	
			"rhsusf_5Rnd_300winmag_xm2010",
			"rhsusf_5Rnd_300winmag_xm2010",
			"rhsusf_5Rnd_300winmag_xm2010",
			"rhsusf_5Rnd_300winmag_xm2010",
			"rhsusf_5Rnd_300winmag_xm2010",
			"T1_rhsusf_5Rnd_300winmag_xm2010_SD",
			"T1_rhsusf_5Rnd_300winmag_xm2010_SD",
			"T1_rhsusf_5Rnd_300winmag_xm2010_SD",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",		
			"SmokeShell",
			"HandGrenade"
		};
		linkedItems[] = {
			"T1_V_PlateCarrier2_Standard",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[] = {
			"T1_V_PlateCarrier2_Standard",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		items[] = {
			"ACE_IR_Strobe_Item",
			"ACE_DefusalKit",
			STDITEMS_SF,
			"ACE_ATragMX",
			"ACE_Kestrel4500",
			"ACE_RangeCard",
			"ACE_tourniquet",
			"ACE_tourniquet",
			"ACE_tourniquet",
			"ACE_tourniquet",
			"ACE_surgicalKit",
			"ACE_bloodIV",
			"ACE_bloodIV",
			MEDICALITEMS2
		};
		respawnItems[] = {
			"ACE_IR_Strobe_Item",
			"ACE_DefusalKit",
			STDITEMS_SF,
			"ACE_ATragMX",
			"ACE_Kestrel4500",
			"ACE_RangeCard",
			"ACE_tourniquet",
			"ACE_tourniquet",
			"ACE_tourniquet",
			"ACE_tourniquet",
			"ACE_surgicalKit",
			"ACE_bloodIV",
			"ACE_bloodIV",
			MEDICALITEMS2
		};		
		backpack = "T1_AssaultPack_Sniper_RHS";
		camouflage = 0.3;
		glassesEnabled = 0;
	};
	class T1_Specialist_AT_Standard_F: T1_Soldier_F
	{
		scope = 2;
		t1_DutyMod = 0.965;
		faction = "T1_Units";
		vehicleClass = "Special";
		displayName = "T1 AT Specialist";
		weapons[] = {
			"T1_weap_m16a4_carryhandle",
			"Throw",
			"Put",
			"ACE_Vector",
			"launch_Titan_short_F"
		};
		respawnWeapons[] = {
			"T1_weap_m16a4_carryhandle",
			"Throw",
			"Put",
			"ACE_Vector",
			"launch_Titan_short_F"
		};
		magazines[] = {
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"SmokeShell",
			"SmokeShellGreen"
			
		};
		respawnmagazines[] = {
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"SmokeShell",
			"SmokeShellGreen"
		};
		items[] = {STDITEMS};
		respawnItems[] = {STDITEMS};
		icon = "iconManAT";
		backpack = "T1_Kitbag_camo_AT";
		linkedItems[] = {
			"T1_V_PlateCarrier2_Standard",
			"rhsusf_mich_helmet_marpatwd_norotos_headset",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[] = {
			"T1_V_PlateCarrier2_Standard",
			"rhsusf_mich_helmet_marpatwd_norotos_headset",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class T1_Specialist_AAT_Standard_F: T1_Soldier_F
	{
		scope = 2;
		t1_DutyMod = 0.965;
		faction = "T1_Units";
		vehicleClass = "Special";
		displayName = "T1 AAT Specialist";
		weapons[] = {
			"T1_weap_m16a4_carryhandle",
			"Throw",
			"Put",
			"ACE_Vector"
		};
		respawnWeapons[] = {
			"T1_weap_m16a4_carryhandle",
			"Throw",
			"Put",
			"ACE_Vector"
		};
		magazines[] = {
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"SmokeShell",
			"SmokeShellGreen"
		};
		respawnmagazines[] = {
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"SmokeShell",
			"SmokeShellGreen"
		};
		items[] = {
			STDITEMS,
			MEDICALITEMS
		};
		respawnItems[] = {
			STDITEMS,
			MEDICALITEMS
		};
		backpack = "T1_Carryall_camo_AAT";
		linkedItems[] = {
			"T1_V_PlateCarrier2_Standard",
			"rhsusf_mich_helmet_marpatwd_norotos_headset",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[] = {
			"T1_V_PlateCarrier2_Standard",
			"rhsusf_mich_helmet_marpatwd_norotos_headset",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class T1_Specialist_Medium_AT_Standard_F: T1_Soldier_F
	{
		scope = 2;
		t1_DutyMod = 0.965;
		faction = "T1_Units";
		vehicleClass = "Special";
		displayName = "T1 Medium AT Specialist";
		weapons[] = {
			"T1_weap_m16a4_carryhandle",
			"Throw",
			"Put",
			"ACE_Vector",
			"tf47_m3maaws_optic"
		};
		respawnWeapons[] = {
			"T1_weap_m16a4_carryhandle",
			"Throw",
			"Put",
			"ACE_Vector",
			"tf47_m3maaws_optic"
		};
		magazines[] = {
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"SmokeShell",
			"SmokeShellGreen"

		};
		respawnmagazines[] = {
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"SmokeShell",
			"SmokeShellGreen"

		};
		items[] = {STDITEMS};
		respawnItems[] = {STDITEMS};
		icon = "iconManAT";
		backpack = "T1_Kitbag_camo_Medium_AT";
		linkedItems[] = {
			"T1_V_PlateCarrier2_Standard",
			"rhsusf_mich_helmet_marpatwd_norotos_headset",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[] = {
			"T1_V_PlateCarrier2_Standard",
			"rhsusf_mich_helmet_marpatwd_norotos_headset",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class T1_Specialist_Medium_AAT_Standard_F: T1_Soldier_F
	{
		scope = 2;
		t1_DutyMod = 0.965;
		faction = "T1_Units";
		vehicleClass = "Special";
		displayName = "T1 Medium AAT Specialist";
		weapons[] = {
			"T1_weap_m16a4_carryhandle",
			"Throw",
			"Put",
			"ACE_Vector"
		};
		respawnWeapons[] = {
			"T1_weap_m16a4_carryhandle",
			"Throw",
			"Put",
			"ACE_Vector"
		};
		magazines[] = {
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",			
			"rhs_mag_30Rnd_556x45_M855A1_Stanag"
		};
		respawnmagazines[] = {
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",			
			"rhs_mag_30Rnd_556x45_M855A1_Stanag"
		};
		items[] = {
			STDITEMS,
			MEDICALITEMS
		};
		respawnItems[] = {
			STDITEMS,
			MEDICALITEMS
		};
		backpack = "T1_Carryall_camo_Medium_AAT";
		linkedItems[] = {
			"T1_V_PlateCarrier2_Standard",
			"rhsusf_mich_helmet_marpatwd_norotos_headset",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[] = {
			"T1_V_PlateCarrier2_Standard",
			"rhsusf_mich_helmet_marpatwd_norotos_headset",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class T1_Specialist_AA_Standard_F: T1_Soldier_F
	{
		scope = 2;
		t1_DutyMod = 0.965;
		faction = "T1_Units";
		vehicleClass = "Special";
		displayName = "T1 AA Specialist";
		weapons[] = {
			"T1_weap_m16a4_carryhandle",
			"Throw",
			"Put",
			"ACE_Vector",
			"launch_Titan_F"
		};
		respawnWeapons[] = {
			"T1_weap_m16a4_carryhandle",
			"Throw",
			"Put",
			"ACE_Vector"
		};
		magazines[] = {
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"SmokeShell",
			"SmokeShellGreen"
		};
		respawnmagazines[] = {
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"SmokeShell",
			"SmokeShellGreen"
		};
		items[] = {STDITEMS};
		respawnItems[] = {STDITEMS};
		icon = "iconManAT";
		backpack = "T1_Kitbag_camo_AA";
		linkedItems[] = {
			"T1_V_PlateCarrier2_Standard",
			"rhsusf_mich_helmet_marpatwd_norotos_headset",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[] = {
			"T1_V_PlateCarrier2_Standard",
			"rhsusf_mich_helmet_marpatwd_norotos_headset",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class T1_Specialist_AAA_Standard_F: T1_Soldier_F
	{
		scope = 2;
		t1_DutyMod = 0.965;
		faction = "T1_Units";
		vehicleClass = "Special";
		displayName = "T1 AAA Specialist";
		weapons[] = {
			"T1_weap_m16a4_carryhandle",
			"Throw",
			"Put",
			"ACE_Vector",
			"launch_Titan_F"
		};
		respawnWeapons[] = {
			"T1_weap_m16a4_carryhandle",
			"Throw",
			"Put",
			"ACE_Vector",
			"launch_Titan_F"
		};
		magazines[] = {
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"SmokeShell",
			"SmokeShellGreen"
		};
		respawnmagazines[] = {
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"SmokeShell",
			"SmokeShellGreen"
		};
		items[] = {
			STDITEMS,
			MEDICALITEMS
		};
		respawnItems[] = {
			STDITEMS,
			MEDICALITEMS
		};
		backpack = "T1_Kitbag_camo_AA";
		linkedItems[] = {
			"T1_V_PlateCarrier2_Standard",
			"rhsusf_mich_helmet_marpatwd_norotos_headset",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[] = {
			"T1_V_PlateCarrier2_Standard",
			"rhsusf_mich_helmet_marpatwd_norotos_headset",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class T1_Specialist_MG_Standard_F: T1_Soldier_F
	{
		scope = 2;
		t1_DutyMod = 0.965;
		faction = "T1_Units";
		vehicleClass = "Special";
		displayName = "T1 MG Specialist";
		weapons[] = {
			"T1_weap_mmg",
			"Throw",
			"Put",
			"ACE_Vector"
		};
		respawnweapons[] = {
			"T1_weap_mmg",
			"Throw",
			"Put",
			"ACE_Vector"
		};
		magazines[] = {
			t1_mag_mmg,
			t1_mag_mmg,
			t1_mag_mmg,
			"SmokeShell"
		};
		respawnmagazines[] = {
			t1_mag_mmg,
			t1_mag_mmg,
			t1_mag_mmg,
			"SmokeShell"
		};
		icon = "iconManMG";
		backpack = "T1_AssaultPack_MMG";
		items[] = {
			"ACE_IR_Strobe_Item",
			STDITEMS
		};
		respawnItems[] = {
			"ACE_IR_Strobe_Item",
			STDITEMS
		};
		linkedItems[] = {
			"T1_V_PlateCarrier2_Standard",
			"rhsusf_mich_helmet_marpatwd_norotos_headset",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[] = {
			"T1_V_PlateCarrier2_Standard",
			"rhsusf_mich_helmet_marpatwd_norotos_headset",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
			class altloadout1 {
				description = ".338 MG DLC";
				weapons[] = {
				"MMG_02_camo_F",
				"T1_weap_sidearm_l",
				"Throw",
				"Put",
				"ACE_Vector"
			};
				backpack = "T1_Kitbag_camo";
				magazines[] = {
				"130Rnd_338_Mag",
				"130Rnd_338_Mag",
				"130Rnd_338_Mag",
				"130Rnd_338_Mag",
				"130Rnd_338_Mag",
				"130Rnd_338_Mag",
				"130Rnd_338_Mag",
				"130Rnd_338_Mag",
				"rhsusf_mag_17Rnd_9x19_FMJ",
				"rhsusf_mag_17Rnd_9x19_FMJ",
				"HandGrenade",
				"SmokeShell"
			};
				items[] = {
				"ACE_IR_Strobe_Item",
				"iansky_specterdrkf",
				"acc_pointer_IR",
				STDITEMS,
				"ACE_SpareBarrel"
			};
			};
	};
	class T1_Specialist_AMG_Standard_F: T1_Soldier_F
	{
		scope = 2;
		t1_DutyMod = 0.965;
		faction = "T1_Units";
		vehicleClass = "Special";
		displayName = "T1 AMG Specialist";
		weapons[] = {
			"T1_weap_m16a4",
			"Throw",
			"Put",
			"ACE_Vector"
		};
		respawnWeapons[] = {
			"T1_weap_m16a4",
			"Throw",
			"Put",
			"ACE_Vector"
		};
		magazines[] = {
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"SmokeShell",
			"SmokeShellGreen",
			t1_mag_mmg,
			t1_mag_mmg,
			"HandGrenade",
			"ACE_M84"
		};
		respawnmagazines[] = {
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"SmokeShell",
			"SmokeShellGreen",
			t1_mag_mmg,
			t1_mag_mmg,
			"HandGrenade",
			"ACE_M84"
		};
		items[] = {
			"ACE_IR_Strobe_Item",
			STDITEMS
		};
		respawnItems[] = {
			"ACE_IR_Strobe_Item",
			STDITEMS
		};
		backpack = "T1_Kitbag_camo_AMG";
		linkedItems[] = {
			"T1_V_PlateCarrier2_Standard",
			"rhsusf_mich_helmet_marpatwd_norotos_headset",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[] = {
			"T1_V_PlateCarrier2_Standard",
			"rhsusf_mich_helmet_marpatwd_norotos_headset",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class T1_Scout_TL_Standard_F: T1_Soldier_F
	{
		scope = 2;
		t1_DutyMod = 0.965;
		faction = "T1_Units";
		vehicleClass = "Special";
		attendant = 1;
		displayName = "T1 Scout TL";
		weapons[] = {
			"T1_hk416d145_m320_SD",
			"Throw",
			"Put",
			"ACE_MX2A"
		};
		respawnWeapons[] = {
			"T1_hk416d145_m320_SD",
			"Throw",
			"Put",
			"ACE_MX2A"
		};
		magazines[] = {
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"T1_30Rnd_556x45_Stanag_SD",
			"T1_30Rnd_556x45_Stanag_SD",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Laserbatteries",
			"ACE_M84",			
			"Chemlight_blue",
			"ACE_HuntIR_M203",
			"ACE_HuntIR_M203",
			"ACE_HuntIR_M203",
			"ACE_HuntIR_M203",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"1Rnd_SmokeBlue_Grenade_shell",
			"1Rnd_SmokeBlue_Grenade_shell",
			"1Rnd_SmokePurple_Grenade_shell",
			"1Rnd_SmokePurple_Grenade_shell",
			"UGL_FlareCIR_F"
		};
		respawnmagazines[] = {
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"T1_30Rnd_556x45_Stanag_SD",
			"T1_30Rnd_556x45_Stanag_SD",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Laserbatteries",
			"ACE_M84",
			"Chemlight_blue",
			"ACE_HuntIR_M203",
			"ACE_HuntIR_M203",
			"ACE_HuntIR_M203",
			"ACE_HuntIR_M203",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"1Rnd_SmokeBlue_Grenade_shell",
			"1Rnd_SmokeBlue_Grenade_shell",
			"1Rnd_SmokePurple_Grenade_shell",
			"1Rnd_SmokePurple_Grenade_shell",
			"UGL_FlareCIR_F"
		};
		linkedItems[] = {
			"V_Chestrig_oli",
			"H_Booniehat_khk_hs",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"B_UavTerminal"
		};
		respawnLinkedItems[] = {
			"V_Chestrig_oli",
			"H_Booniehat_khk_hs",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"B_UavTerminal"
		};
		backpack = "T1_FieldPack_Scout_Lead";
		items[] = {
			"ACE_IR_Strobe_Item",
			"ACE_HuntIR_monitor",
			"ACE_RangeCard",
			"ACE_epinephrine",
			"ACE_epinephrine",
			"ACE_epinephrine",
			STDITEMS_SF
		};
		respawnItems[] = {
			"ACE_IR_Strobe_Item",
			"ACE_HuntIR_monitor",
			"ACE_RangeCard",
			"ACE_epinephrine",
			"ACE_epinephrine",
			"ACE_epinephrine",
			STDITEMS_SF
		};
		camouflage = 0.6;
	};
	class T1_Scout_Standard_F: T1_Soldier_F
	{
		scope = 2;
		t1_DutyMod = 0.965;
		faction = "T1_Units";
		vehicleClass = "Special";
		attendant = 1;
		displayName = "T1 Scout [MM DLC]";
		weapons[] = {
			"T1_45KO_ABR_SD",
			"Throw",
			"Put",
			"Laserdesignator"
		};
		respawnWeapons[] = {
			"T1_45KO_ABR_SD",
			"Throw",
			"Put",
			"Laserdesignator"
		};
		magazines[] = {
			"ACE_20Rnd_762x51_Mk316_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk316_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk316_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk316_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk316_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk316_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk316_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk316_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mag_SD",
			"ACE_20Rnd_762x51_Mag_SD",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Laserbatteries",
			"Chemlight_blue"
		};
		respawnmagazines[] = {
			"ACE_20Rnd_762x51_Mk316_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk316_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk316_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk316_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk316_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk316_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk316_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk316_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mag_SD",
			"ACE_20Rnd_762x51_Mag_SD",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Laserbatteries",
			"Chemlight_blue"
		};
		linkedItems[] = {
			"V_Chestrig_oli",
			"H_Watchcap_khk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"B_UavTerminal"
		};
		respawnLinkedItems[] = {
			"V_Chestrig_oli",
			"H_Watchcap_khk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"B_UavTerminal"
		};
		backpack = "T1_Static_Designator_01_weapon_F";
		items[] = {
			"ACE_IR_Strobe_Item",
			"ACE_Kestrel4500",
			"ACE_RangeCard",
			"ACE_epinephrine",
			"ACE_epinephrine",
			STDITEMS_SF,
			MEDICALITEMS
		};
		respawnitems[] = {
			"ACE_IR_Strobe_Item",
			"ACE_Kestrel4500",
			"ACE_RangeCard",
			"ACE_epinephrine",
			"ACE_epinephrine",
			STDITEMS_SF,
			MEDICALITEMS
		};
		camouflage = 0.6;
	};
	class T1_Section_Lead_Standard_F: T1_Soldier_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "Section";
		displayName = "Section Leader";
		weapons[] = {
			"T1_mk18_m320",
			"Throw",
			"Put",
			"ACE_Vector",
			"rhs_weap_m72a7"
		};
		respawnWeapons[] = {
			"T1_mk18_m320",
			"Throw",
			"Put",
			"ACE_Vector",
			"rhs_weap_m72a7"
		};
		magazines[] = {
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
			"ACE_M84",
			"ACE_M84",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShellGreen",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"B_IR_Grenade"
		};
		respawnmagazines[] = {
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
			"ACE_M84",
			"ACE_M84",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShellGreen",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"B_IR_Grenade"
		};
		backpack = "T1_Kitbag_camo_sl";
		items[] = {
			"ACE_IR_Strobe_Item",
			STDITEMS,
			MEDICALITEMS2
		};
		respawnItems[] = {
			"ACE_IR_Strobe_Item",
			STDITEMS,
			MEDICALITEMS2
		};
		icon = "iconManLeader";
	};
	class T1_Section_Sgt_Standard_F: T1_Soldier_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "Section";
		displayName = "Section Sergeant";
		weapons[] = {
			"T1_mk18_m320",
			"Throw",
			"Put",
			"ACE_Vector",
			"rhs_weap_m72a7"
		};
		respawnWeapons[] = {
			"T1_mk18_m320",
			"Throw",
			"Put",
			"ACE_Vector",
			"rhs_weap_m72a7"
		};
		magazines[] = {
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
			"ACE_M84",
			"ACE_M84",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShellGreen",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"B_IR_Grenade"
		};
		respawnmagazines[] = {
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
			"ACE_M84",
			"ACE_M84",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShellGreen",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"B_IR_Grenade"
		};
		backpack = "T1_Kitbag_camo_ss";
		items[] = {
			"ACE_IR_Strobe_Item",
			STDITEMS,
			MEDICALITEMS2
		};
		respawnItems[] = {
			"ACE_IR_Strobe_Item",
			STDITEMS,
			MEDICALITEMS2
		};
		icon = "iconManLeader";
		linkedItems[] = {
			"T1_V_PlateCarrier2_Standard",
			"rhsusf_mich_helmet_marpatwd_norotos_headset",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[] = {
			"T1_V_PlateCarrier2_Standard",
			"rhsusf_mich_helmet_marpatwd_norotos_headset",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class T1_Section_CLS_Standard_F: T1_Soldier_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "Section";
		displayName = "Combat Life Saver";
		weapons[] = {
			"T1_m27iar",
			"Throw",
			"Put",
			"ACE_Vector"
		};
		respawnWeapons[] = {
			"T1_m27iar",
			"Throw",
			"Put",
			"ACE_Vector"
		};
		magazines[] = {
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",			
			"t1_longrange_556",
			"t1_longrange_556",
			"t1_longrange_556",
			"t1_longrange_556",
			"t1_longrange_556",
			"t1_longrange_556",
			"HandGrenade",
			"HandGrenade",
			"ACE_M84",
			"ACE_M84",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShellGreen",
			"SmokeShellGreen"
		};
		respawnmagazines[] = {
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",			
			"t1_longrange_556",
			"t1_longrange_556",
			"t1_longrange_556",
			"t1_longrange_556",
			"t1_longrange_556",
			"t1_longrange_556",
			"HandGrenade",
			"HandGrenade",
			"ACE_M84",
			"ACE_M84",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShellGreen",
			"SmokeShellGreen"
		};
		items[] = {
			"ACE_tourniquet",
			"ACE_tourniquet",
			"ACE_tourniquet",
			"ACE_tourniquet",
			"ACE_surgicalKit",
			STDITEMS
		};
		respawnItems[] = {
			"ACE_tourniquet",
			"ACE_tourniquet",
			"ACE_tourniquet",
			"ACE_tourniquet",
			"ACE_surgicalKit",
			STDITEMS
		};
		icon = "iconManMedic";
		backpack = "T1_AssaultPack_cls";
		attendant = 1;
		linkedItems[] = {
			"T1_V_PlateCarrier2_Standard",
			"rhsusf_mich_helmet_marpatwd_norotos_headset",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[] = {
			"T1_V_PlateCarrier2_Standard",
			"rhsusf_mich_helmet_marpatwd_norotos_headset",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		T1_NoMedicIcon = 0;
	};
	class T1_Section_AR_Standard_F: T1_Soldier_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "Section";
		displayName = "Automatic Rifleman";
		weapons[] = {
			"T1_weap_lmg",
			"T1_weap_sidearm_l",
			"Throw",
			"Put",
			"ACE_Vector"
		};
		respawnWeapons[] = {
			"T1_weap_lmg",
			"T1_weap_sidearm_l",
			"Throw",
			"Put",
			"ACE_Vector"
		};
		magazines[] = {
			"rhsusf_100Rnd_556x45_soft_pouch",
			"rhsusf_100Rnd_556x45_soft_pouch",
			"rhsusf_100Rnd_556x45_soft_pouch",
			"rhsusf_mag_17Rnd_9x19_FMJ",
			"SmokeShell",
			"ACE_M84"
		};
		respawnmagazines[] = {
			"rhsusf_100Rnd_556x45_soft_pouch",
			"rhsusf_100Rnd_556x45_soft_pouch",
			"rhsusf_100Rnd_556x45_soft_pouch",
			"rhsusf_mag_17Rnd_9x19_FMJ",
			"SmokeShell",
			"ACE_M84"
		};
		icon = "iconManMG";
		backpack = "T1_AssaultPack_AR";
		items[] = {STDITEMS};
		respawnItems[] = {STDITEMS};
		linkedItems[] = {
			"T1_V_PlateCarrier2_Standard",
			"rhsusf_mich_helmet_marpatwd_norotos_headset",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[] = {
			"T1_V_PlateCarrier2_Standard",
			"rhsusf_mich_helmet_marpatwd_norotos_headset",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class T1_Section_AR_Alt_F: T1_Soldier_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "Section";
		displayName = "Automatic Rifleman Light";
		weapons[] = {
			"T1_weap_lmg2",
			"T1_weap_sidearm_l",
			"Throw",
			"Put",
			"ACE_Vector"
		};
		respawnWeapons[] = {
			"T1_weap_lmg2",
			"T1_weap_sidearm_l",
			"Throw",
			"Put",
			"ACE_Vector"
		};
		magazines[] = {
			"rhsusf_100Rnd_556x45_soft_pouch",
			"rhsusf_100Rnd_556x45_soft_pouch",
			"rhsusf_100Rnd_556x45_soft_pouch",			
			"rhsusf_100Rnd_556x45_soft_pouch",
			"rhsusf_mag_17Rnd_9x19_FMJ",
			"SmokeShell",
			"ACE_M84"
		};
		respawnmagazines[] = {
			"rhsusf_100Rnd_556x45_soft_pouch",
			"rhsusf_100Rnd_556x45_soft_pouch",
			"rhsusf_100Rnd_556x45_soft_pouch",
			"rhsusf_100Rnd_556x45_soft_pouch",
			"rhsusf_mag_17Rnd_9x19_FMJ",
			"SmokeShell",
			"ACE_M84"
		};
		icon = "iconManMG";
		backpack = "T1_AssaultPack_AR";
		items[] = {STDITEMS};
		respawnItems[] = {STDITEMS};
		linkedItems[] = {
			"T1_V_PlateCarrier2_Standard",
			"rhsusf_mich_helmet_marpatwd_norotos_headset",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[] = {
			"T1_V_PlateCarrier2_Standard",
			"rhsusf_mich_helmet_marpatwd_norotos_headset",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class T1_Section_AAR_Standard_F: T1_Soldier_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "Section";
		displayName = "Asst. Automatic Rifleman";
		weapons[] = {
			"T1_mk18",
			"Throw",
			"Put",
			"ACE_Vector"
		};
		respawnWeapons[] = {
			"T1_mk18",
			"Throw",
			"Put",
			"ACE_Vector"
		};
		magazines[] = {
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhsusf_100Rnd_556x45_soft_pouch",
			"rhsusf_100Rnd_556x45_soft_pouch",
			"rhsusf_100Rnd_556x45_soft_pouch",
			"HandGrenade",
			"SmokeShell",
			"ACE_M84"
		};
		respawnmagazines[] = {
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhsusf_100Rnd_556x45_soft_pouch",
			"rhsusf_100Rnd_556x45_soft_pouch",
			"rhsusf_100Rnd_556x45_soft_pouch",
			"HandGrenade",
			"SmokeShell",
			"ACE_M84"
		};
		backpack = "T1_AssaultPack_AAR";
		items[] = {STDITEMS};
		respawnItems[] = {STDITEMS};
		linkedItems[] = {
			"T1_V_PlateCarrier2_Standard",
			"rhsusf_mich_helmet_marpatwd_norotos_headset",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[] = {
			"T1_V_PlateCarrier2_Standard",
			"rhsusf_mich_helmet_marpatwd_norotos_headset",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class T1_Section_AT_Standard_F: T1_Soldier_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "Section";
		displayName = "Rifleman AT";
		weapons[] = {
			"T1_mk18",
			"Throw",
			"Put",
			"ACE_Vector",
			"tf47_at4_heat"
		};
		respawnWeapons[] = {
			"T1_mk18",
			"Throw",
			"Put",
			"ACE_Vector",
			"tf47_at4_heat"
		};
		magazines[] = {
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"SmokeShell",
			"SmokeShell",
			"HandGrenade",
			"HandGrenade",
			"HandGrenade",
			"ACE_M84",
			"ACE_M84"
		};
		respawnmagazines[] = {
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"SmokeShell",
			"SmokeShell",
			"HandGrenade",
			"HandGrenade",
			"HandGrenade",
			"ACE_M84",
			"ACE_M84"
		};
		items[] = {STDITEMS,MEDICALITEMS2};
		respawnItems[] = {STDITEMS,MEDICALITEMS2};
		icon = "iconManAT";
		linkedItems[] = {
			"T1_V_PlateCarrier2_Standard",
			"rhsusf_mich_helmet_marpatwd_norotos_headset",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[] = {
			"T1_V_PlateCarrier2_Standard",
			"rhsusf_mich_helmet_marpatwd_norotos_headset",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class T1_Section_AT_DM_F: T1_Soldier_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "Section";
		displayName = "Rifleman AT DM";
		weapons[] = {
			"T1_m27iar",
			"Throw",
			"Put",
			"ACE_Vector",
			"tf47_at4_heat"
		};
		respawnWeapons[] = {
			"T1_m27iar",
			"Throw",
			"Put",
			"ACE_Vector",
			"tf47_at4_heat"
		};
		magazines[] = {
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",			
			"t1_longrange_556",
			"t1_longrange_556",
			"t1_longrange_556",
			"t1_longrange_556",
			"t1_longrange_556",
			"t1_longrange_556",
			"SmokeShell",
			"SmokeShell",
			"HandGrenade",
			"HandGrenade",
			"ACE_M84",
			"ACE_M84"
		};
		respawnmagazines[] = {
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",			
			"t1_longrange_556",
			"t1_longrange_556",
			"t1_longrange_556",
			"t1_longrange_556",
			"t1_longrange_556",
			"t1_longrange_556",
			"SmokeShell",
			"SmokeShell",
			"HandGrenade",
			"HandGrenade",
			"ACE_M84",
			"ACE_M84"
		};
		items[] = {STDITEMS,MEDICALITEMS2};
		respawnItems[] = {STDITEMS,MEDICALITEMS2};
		icon = "iconManAT";
		linkedItems[] = {
			"T1_V_PlateCarrier2_Standard",
			"rhsusf_mich_helmet_marpatwd_norotos_headset",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[] = {
			"T1_V_PlateCarrier2_Standard",
			"rhsusf_mich_helmet_marpatwd_norotos_headset",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class T1_Platoon_Lead_Standard_F: T1_Soldier_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "Platoon";
		displayName = "Platoon Lead";
		weapons[] = {
			"T1_m4a1_blockII_SD",
			"Throw",
			"Put",
			"ACE_Vector"
		};
		respawnWeapons[] = {
			"T1_m4a1_blockII_SD",
			"Throw",
			"Put",
			"ACE_Vector"
		};
		magazines[] = {
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
			"ACE_M84",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"SmokeShellGreen",
			"SmokeShellYellow",
			"SmokeShellYellow",
			"SmokeShellOrange",
			"SmokeShellOrange",
			"SmokeShellBlue",
			"SmokeShellBlue",
			"B_IR_Grenade"
		};
		respawnmagazines[] = {
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
			"ACE_M84",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"SmokeShellGreen",
			"SmokeShellYellow",
			"SmokeShellYellow",
			"SmokeShellOrange",
			"SmokeShellOrange",
			"SmokeShellBlue",
			"SmokeShellBlue",
			"B_IR_Grenade"
		};
		items[] = {
			"ACE_IR_Strobe_Item",
			"B_UavTerminal",
			STDITEMS
		};
		respawnItems[] = {
			"ACE_IR_Strobe_Item",
			"B_UavTerminal",
			STDITEMS
		};
		icon = "iconManLeader";
		backpack = "T1_Backpack_PL_Lead";
		linkedItems[] = {
			"T1_V_PlateCarrier2_Standard",
			"rhsusf_mich_helmet_marpatwd_norotos_headset",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[] = {
			"T1_V_PlateCarrier2_Standard",
			"rhsusf_mich_helmet_marpatwd_norotos_headset",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class T1_Platoon_Medic_Standard_F: T1_Soldier_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "Platoon";
		displayName = "Platoon Medic";
		weapons[] = {
			"T1_m4a1_Mstock_grip3",
			"Throw",
			"Put",
			"ACE_Vector"
		};
		respawnWeapons[] = {
			"T1_m4a1_Mstock_grip3",
			"Throw",
			"Put",
			"ACE_Vector"
		};
		magazines[] = {
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"HandGrenade",
			"ACE_M84",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShellGreen",
			"SmokeShellGreen",
			"SmokeShellGreen",
			"SmokeShellGreen",
			"SmokeShellGreen",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell"
		};
		respawnmagazines[] = {
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"HandGrenade",
			"ACE_M84",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShellGreen",
			"SmokeShellGreen",
			"SmokeShellGreen",
			"SmokeShellGreen",
			"SmokeShellGreen",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell"
		};
		items[] = {
			STDITEMS,
			"ACE_bloodIV",
			"ACE_bloodIV",
			"ACE_bloodIV",
			"ACE_bloodIV",
			"ACE_bloodIV",
			"ACE_tourniquet",
			"ACE_tourniquet",
			"ACE_tourniquet",
			"ACE_tourniquet",
			"ACE_surgicalKit"
		};
		respawnItems[] = {
			STDITEMS,
			"ACE_bloodIV",
			"ACE_bloodIV",
			"ACE_bloodIV",
			"ACE_bloodIV",
			"ACE_bloodIV",
			"ACE_tourniquet",
			"ACE_tourniquet",
			"ACE_tourniquet",
			"ACE_tourniquet",
			"ACE_surgicalKit"
		};
		icon = "iconManMedic";
		backpack = "T1_AssaultPack_pl_medic";
		attendant = 1;
		linkedItems[] = {
			"T1_V_PlateCarrier2_Standard",
			"rhsusf_mich_helmet_marpatwd_norotos_headset",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[] = {
			"T1_V_PlateCarrier2_Standard",
			"rhsusf_mich_helmet_marpatwd_norotos_headset",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		T1_NoMedicIcon = 0;
	};
	class T1_Platoon_EOD_Standard_F: T1_Soldier_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "Platoon";
		displayName = "Platoon EOD";
		weapons[] = {
			"T1_m4a1_grip3",
			"Throw",
			"Put",
			"ACE_Vector"
		};
		respawnWeapons[] = {
			"T1_m4a1_grip3",
			"Throw",
			"Put",
			"ACE_Vector"
		};
		magazines[] = {
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
			"DemoCharge_Remote_Mag",
			"DemoCharge_Remote_Mag",
			"HandGrenade",
			"SmokeShell",
			"B_IR_Grenade"
		};
		respawnmagazines[] = {
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
			"DemoCharge_Remote_Mag",
			"DemoCharge_Remote_Mag",
			"HandGrenade",
			"SmokeShell",
			"B_IR_Grenade"
		};
		items[] = {
			STDITEMS,
			MEDICALITEMS2,
			"ACE_M26_Clacker",
			"ACE_DefusalKit",
			"MineDetector"
		};
		respawnItems[] = {
			STDITEMS,
			MEDICALITEMS2,
			"ACE_M26_Clacker",
			"ACE_DefusalKit",
			"MineDetector"
		};
		icon = "iconManExplosive";
		backpack = "T1_AssaultPack_PLEOD";
		engineer = 1;
		canDeactivateMines = 1;
		detectSkill = 80;
		linkedItems[] = {
			"T1_V_PlateCarrier2_Standard",
			"rhsusf_mich_helmet_marpatwd_norotos_headset",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[] = {
			"T1_V_PlateCarrier2_Standard",
			"rhsusf_mich_helmet_marpatwd_norotos_headset",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class T1_Platoon_Sgt_Standard_F: T1_Soldier_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "Platoon";
		displayName = "Platoon Sergeant";
		weapons[] = {
			"T1_weap_rifle_gl",
			"T1_weap_sidearm_l",
			"Throw",
			"Put",
			"Laserdesignator"
		};
		respawnWeapons[] = {
			"T1_weap_rifle_gl",
			"T1_weap_sidearm_l",
			"Throw",
			"Put",
			"Laserdesignator"
		};
		magazines[] = {
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_rifle_tracer,
			t1_mag_rifle_tracer,
			t1_mag_rifle_tracer,
			t1_mag_rifle_tracer,
			t1_mag_rifle_tracer,
			"rhsusf_mag_17Rnd_9x19_FMJ",
			"rhsusf_mag_17Rnd_9x19_FMJ",
			"Laserbatteries",
			"HandGrenade",
			"SmokeShell",
			"Chemlight_blue",
			"UGL_FlareCIR_F",
			"UGL_FlareCIR_F",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell"
		};
		respawnmagazines[] = {
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_rifle_tracer,
			t1_mag_rifle_tracer,
			t1_mag_rifle_tracer,
			t1_mag_rifle_tracer,
			t1_mag_rifle_tracer,
			"rhsusf_mag_17Rnd_9x19_FMJ",
			"rhsusf_mag_17Rnd_9x19_FMJ",
			"Laserbatteries",
			"HandGrenade",
			"SmokeShell",
			"Chemlight_blue",
			"UGL_FlareCIR_F",
			"UGL_FlareCIR_F",
			"3Rnd_HE_Grenade_shell",
			"3Rnd_HE_Grenade_shell",
			"3Rnd_HE_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell"
		};
		items[] = {
			"B_UavTerminal",
			STDITEMS
		};
		respawnItems[] = {
			"B_UavTerminal",
			STDITEMS
		};
		backpack = "T1_AssaultPack_PLSgt_JTAC";
	};
	class T1_charlie_assault : T1_Soldier_F {	// Charlie 1 is 6 of these guys.
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "Section";
		displayName = "Charlie Assault";
		weapons[] = {
			"T1_mk18",
			"rhs_weap_m72a7",
			"Throw",
			"Put",
			"ACE_Vector"
		};
		respawnWeapons[] = {
			"T1_mk18",
			"rhs_weap_m72a7",
			"Throw",
			"Put",
			"ACE_Vector"
		};
		magazines[] = {
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"HandGrenade",
			"HandGrenade",
			"HandGrenade",
			"HandGrenade",
			"ACE_M84",
			"ACE_M84",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShellGreen",
			"SmokeShellGreen"
		};
		respawnmagazines[] = {
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"HandGrenade",
			"HandGrenade",
			"HandGrenade",
			"HandGrenade",
			"ACE_M84",
			"ACE_M84",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShellGreen",
			"SmokeShellGreen"
		};
		items[] = {
			STDITEMS
		};
		respawnItems[] = {
			STDITEMS
		};
		icon = "iconMan";
		backpack = "T1_Kitbag_camo";
		linkedItems[] = {
			"T1_V_PlateCarrier2_Standard",
			"rhsusf_mich_helmet_marpatwd_norotos_headset",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[] = {
			"T1_V_PlateCarrier2_Standard",
			"rhsusf_mich_helmet_marpatwd_norotos_headset",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class T1_charlie21 : T1_Section_CLS_Standard_F { // medic, lead
		vehicleClass = "Section";
		displayName = "Charlie Medic";
		T1_NoMedicIcon = 0;
	};
	class T1_charlie22 : T1_Soldier_F {	// grenadier
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "Section";
		displayName = "Charlie Grenadier";
		weapons[] = {
			"rhs_weap_m32",
			"rhsusf_weap_glock17g4",
			"Throw",
			"Put",
			"ACE_Vector"
		};
		respawnWeapons[] = {
			"rhs_weap_m32",
			"rhsusf_weap_glock17g4",
			"Throw",
			"Put",
			"ACE_Vector"
		};
		magazines[] = {
			"rhsusf_mag_17Rnd_9x19_FMJ",
			"rhsusf_mag_17Rnd_9x19_FMJ",
			"rhsusf_mag_6Rnd_M441_HE",	// +4 in backpack
			"rhsusf_mag_6Rnd_M441_HE",
			"rhsusf_mag_6Rnd_M397_HET",
			"rhsusf_mag_6Rnd_M397_HET",
			"SmokeShell",
			"SmokeShell",
			"SmokeShellGreen"
		};
		respawnmagazines[] = {
			"rhsusf_mag_17Rnd_9x19_FMJ",
			"rhsusf_mag_17Rnd_9x19_FMJ",
			"rhsusf_mag_6Rnd_M441_HE",	// +4 in backpack
			"rhsusf_mag_6Rnd_M441_HE",
			"rhsusf_mag_6Rnd_M397_HET",
			"rhsusf_mag_6Rnd_M397_HET",
			"SmokeShell",
			"SmokeShell",
			"SmokeShellGreen"
		};
		items[] = {
			STDITEMS
		};
		respawnItems[] = {
			STDITEMS
		};
		icon = "iconMan";	// todo: Better icon?
		backpack = "T1_backpack_grenadier";
		linkedItems[] = {
			"T1_V_PlateCarrier2_Standard",
			"rhsusf_mich_helmet_marpatwd_norotos_headset",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[] = {
			"T1_V_PlateCarrier2_Standard",
			"rhsusf_mich_helmet_marpatwd_norotos_headset",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class T1_charlie23 : T1_Soldier_F { // marksman
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "Section";
		displayName = "Charlie Marksman";
		weapons[] = {
			"T1_weap_marksman",
			"Throw",
			"Put",
			"ACE_Vector"
		};
		respawnWeapons[] = {
			"T1_weap_marksman",
			"Throw",
			"Put",
			"ACE_Vector"
		};
		magazines[] = {
			"ACE_20Rnd_762x51_Mk316_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk316_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk316_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk316_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk316_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk316_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk316_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk316_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk316_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk316_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk316_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk316_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mag_SD",
			"ACE_20Rnd_762x51_Mag_SD",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"ACE_M84"
		};
		respawnmagazines[] = {
			"ACE_20Rnd_762x51_Mk316_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk316_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk316_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk316_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk316_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk316_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk316_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk316_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk316_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk316_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk316_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk316_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mag_SD",
			"ACE_20Rnd_762x51_Mag_SD",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"ACE_M84"
		};
		items[] = {
			"ACE_RangeCard",
			"ACE_ATragMX",
			"ACE_Kestrel4500",
			STDITEMS
		};
		respawnItems[] = {
			"ACE_RangeCard",
			"ACE_ATragMX",
			"ACE_Kestrel4500",
			STDITEMS
		};
		icon = "iconMan";	//iconManAT
		backpack = "T1_Kitbag_camo";
		linkedItems[] = {
			"T1_V_PlateCarrier2_Standard",
			"rhsusf_mich_helmet_marpatwd_norotos_headset",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[] = {
			"T1_V_PlateCarrier2_Standard",
			"rhsusf_mich_helmet_marpatwd_norotos_headset",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class T1_charlie24 : T1_Specialist_MG_Standard_F {
		vehicleClass = "Section";
		displayName = "Charlie MG";
	};

	class NATO_Box_Base;
	class B_supplyCrate_F;
	class T1_section_ammobox: B_supplyCrate_F
	{
		
		
		vehicleClass = "Ammo";
		displayName = "T1 Section Supply Box";
		transportMaxWeapons = 999;
		transportMaxMagazines = 9999;
		transportMaxBackpacks = 99;
		transportMaxItems = 9999;
		class TransportMagazines
		{
			class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag
			{
				magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
				count = 72;
			};
			class _xx_rhs_mag_30Rnd_556x45_Mk262_Stanag
			{
				magazine =  t1_longrange_556;
				count = 12;
			};
			class _xx_rhsusf_100Rnd_556x45_soft_pouch
			{
				magazine = "rhsusf_100Rnd_556x45_soft_pouch";
				count = 24;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 16;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 24;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 18;
			};
			class _xx_ACE_M84
			{
				magazine = "ACE_M84";
				count = 8;
			};
		};
		class TransportItems
		{
			class Bandage1
			{
				count = 160;
				name = "ACE_fieldDressing";
			};
			class _xx_ACE_morphine
			{
				count = 32;
				name = "ACE_morphine";
			};
			class _xx_ACE_epinephrine
			{
				count = 16;
				name = "ACE_epinephrine";
			};
			class _xx_ACE_tourniquet
			{
				count = 30;
				name = "ACE_tourniquet";
			};
			class _xx_ACE_surgicalKit
			{
				count = 1;
				name = "ACE_surgicalKit";
			};
			class _xx_ACE_bloodIV_250
			{
				count = 32;
				name = "ACE_bloodIV";
			};
			class _xx_ACE_CableTie
			{
				count = 20;
				name = "ACE_CableTie";
			};
			class radioh
			{
				count = 2;
				name = "ACRE_PRC152";
			};
			class radiob
			{
				count = 2;
				name = "ACRE_PRC117F";
			}
		};
		class TransportWeapons
		{
			class _xx_tf47_at4_heat
			{
				weapon = "tf47_at4_heat";
				count = 2;
			};		  
			class _xx_rhs_weap_m72a7
			{
				weapon = "rhs_weap_m72a7";
				count = 5;
			};			
		};
		class TransportBackpacks
		{			
			class bp
			{
				count = 2;
				backpack = "B_AssaultPack_rgr";
			};
		};		
	};
	class T1_support_ammobox: B_supplyCrate_F
	{
		vehicleClass = "Ammo";
		displayName = "T1 Support Supply Box";
		transportMaxWeapons = 999;
		transportMaxMagazines = 9999;
		transportMaxBackpacks = 99;
		transportMaxItems = 9999;
		class TransportMagazines
		{
			class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag
			{
				magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
				count = 48;
			};
			class _xx_20Rnd_762x51_Mag
			{
				magazine = "ACE_20Rnd_762x51_Mk316_Mod_0_Mag";
				count = 30;
			};
			class _xx_ACE_20Rnd_762x51_Mag_SD
			{
				magazine = "ACE_20Rnd_762x51_Mag_SD";
				count = 10;
			};
			class _xx_rhsusf_100Rnd_762x51_m62_tracer
			{
				magazine = t1_mag_mmg;
				count = 32;
			};
			class _xx_7Rnd_408_Mag
			{
				magazine = t1_mag_sierra;
				count = 26;
			};
			class _xx_rhsusf_5Rnd_300winmag_xm2010
			{
				magazine = "rhsusf_5Rnd_300winmag_xm2010";
				count = 36;
			};
			class _xx_T1_rhsusf_5Rnd_300winmag_xm2010_SD
			{
				magazine = "T1_rhsusf_5Rnd_300winmag_xm2010_SD";
				count = 12;
			};
			class _xx_16Rnd_9x21_Mag
			{
				magazine = "16Rnd_9x21_Mag";
				count = 16;
			};
			class _xx_rhsusf_mag_17Rnd_9x19_FMJ
			{
				magazine = "rhsusf_mag_17Rnd_9x19_FMJ";
				count = 8;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 8;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 16;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 4;
			};
			class _xx_ACE_M84
			{
				magazine = "ACE_M84";
				count = 8;
			};
			class _xx_Titan_AT
			{
				magazine = "Titan_AT";
				count = 12;
			};
			class _xx_Titan_AA
			{
				magazine = "Titan_AA";
				count = 12;
			};
			class _xx_tf47_m3maaws_HEAT
			{
				magazine = "tf47_m3maaws_HEAT";
				count = 10;
			};
			class _xx_tf47_m3maaws_HE
			{
				magazine = "tf47_m3maaws_HE";
				count = 10;
			};
			class GLHE {
				count = 16;
				magazine = "rhsusf_mag_6Rnd_M441_HE";
			};
			class GLHET {
				count = 12;
				magazine = "rhsusf_mag_6Rnd_M397_HET";
			}
			class GLSMOKE {
				count = 4;
				magazine = "rhsusf_mag_6Rnd_M585_white"; // is flare?
			};
			class GLFLARE {
				count = 4;
				magazine = "rhsusf_mag_6Rnd_M714_white"; // is smoke?
			};
			class GLBUCK { 
				count = 4;
				magazine = "rhsusf_mag_6Rnd_M576_Buckshot";
			};

		};
		class TransportItems
		{
			class Bandage1
			{
				count = 80;
				name = "ACE_fieldDressing";
			};
			class _xx_ACE_morphine
			{
				count = 8;
				name = "ACE_morphine";
			};
			class _xx_ACE_epinephrine
			{
				count = 8;
				name = "ACE_epinephrine";
			};
			class _xx_ACE_tourniquet
			{
				count = 30;
				name = "ACE_tourniquet";
			};
			class _xx_ACE_surgicalKit
			{
				count = 1;
				name = "ACE_surgicalKit";
			};
			class _xx_ACE_bloodIV_250
			{
				count = 32;
				name = "ACE_bloodIV";
			};
			class _xx_ACE_CableTie
			{
				count = 20;
				name = "ACE_CableTie";
			};
			class _xx_ACE_UAVBattery
			{
				count = 8;
				name = "ACE_UAVBattery";
			};
			class radioh
			{
				count = 4;
				name = "ACRE_PRC152";
			};
		};
		class TransportWeapons
		{			
			class _xx_rhs_weap_m72a7
			{
				weapon = "rhs_weap_m72a7";
				count = 2;
			};
		};
		class TransportBackpacks
		{
			class _xx_B_Static_Designator_01_weapon_F
			{
				backpack = "B_Static_Designator_01_weapon_F";
				count = 1;
			};
			class _xx_B_UAV_01_backpack_F
			{
				backpack = "B_UAV_01_backpack_F";
				count = 1;
			};
			class bp
			{
				count = 2;
				backpack = "B_AssaultPack_rgr";
			};
		};
	};
	class T1_eod_ammobox: B_supplyCrate_F
	{
		vehicleClass = "Ammo";
		displayName = "T1 Explosives Supply Box";
		transportMaxWeapons = 999;
		transportMaxMagazines = 9999;
		transportMaxBackpacks = 99;
		transportMaxItems = 9999;
		class TransportMagazines
		{
			class _xx_ClaymoreDirectionalMine_Remote_Mag
			{
				count = 18;
				magazine = "ClaymoreDirectionalMine_Remote_Mag";
			};
			class _xx_SatchelCarge_Remote_Mag
			{
				count = 12;
				magazine = "SatchelCharge_Remote_Mag";
			};
			class _xx_DemoCharge_Remote_Mag
			{
				count = 24;
				magazine = "DemoCharge_Remote_Mag";
			};
			class _xx_ATMine_Range_Mag
			{
				count = 16;
				magazine = "ATMine_Range_Mag";
			};
			class _xx_APERSBoundingMine_Range_Mag
			{
				count = 32;
				magazine = "APERSBoundingMine_Range_Mag";
			};
			class SLAMs
			{
				magazine = "SLAMDirectionalMine_Wire_Mag";
				count = 12;
			};
		};
		class TransportItems
		{
			class _xx_ToolKit
			{
				count = 2;
				name = "ToolKit";
			};
			class _xx_MineDetector
			{
				count = 2;
				name = "MineDetector";
			};
			class _xx_ACE_M26_Clacker
			{
				count = 6;
				name = "ACE_M26_Clacker";
			};
			class _xx_ACE_DefusalKit
			{
				count = 6;
				name = "ACE_DefusalKit";
			};
		};
		class TransportWeapons{};
		class TransportBackpacks
		{			
			class _xx_B_AssaultPack_rgr
			{
				count = 6;
				backpack = "B_AssaultPack_rgr";
			};
		};
	};
};
class CfgMagazines
{
    class rhs_mag_30Rnd_556x45_Mk262_Stanag;
    class t1_longrange_556: rhs_mag_30Rnd_556x45_Mk262_Stanag
    {
		displayName = "T1 5.56mm 30Rnd Mk262";
    };
};
//};
