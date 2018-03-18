////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.90
//Thu Apr 30 23:39:42 2015 : Source 'file' date Thu Apr 30 23:39:42 2015
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

#define STDITEMS "ItemRadio","ACE_EarPlugs","ACE_microDAGR","ACE_MapTools","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie", "ACE_tourniquet", "ACE_tourniquet", "ACE_tourniquet", "ACE_tourniquet", "rhsusf_ANPVS_14"

#define STDITEMS_SF "ItemRadio","ACE_EarPlugs","ACE_microDAGR","ACE_MapTools","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie", "ACE_tourniquet", "ACE_tourniquet", "ACE_tourniquet", "ACE_tourniquet", "ACE_NVG_Gen4"

// MEDICALITEMS is used in addition to STDITEMS for units without backpacks
#define MEDICALITEMS "ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_morphine","ACE_morphine","ACE_morphine","ACE_epinephrine"
#define MEDICALITEMS2 "ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_morphine","ACE_morphine","ACE_morphine","ACE_epinephrine" 

//Class t1_units : config.bin{
class CfgPatches
{
	class t1_units
	{
		units[] = {
			"T1_Kitbag_camo",
			"T1_AssaultPack_rgr",
			"T1_AssaultPack_Lead_SF",
			"T1_Kitbag_camo_Lead_Trainer",
			"T1_Kitbag_camo_Sniper",
			"T1_AssaultPack_Sniper_RHS",
			"T1_FieldPack_Scout_Lead",
			"T1_B_AssaultPack_SF_Radioman_DM",
			"T1_Kitbag_camo_medic",
			"T1_AssaultPack_pl_medic",
			"T1_AssaultPack_medic_sf",
			"T1_AssaultPack_cls",
			"T1_Carryall_camo",
			"T1_Kitbag_camo_Repair",
			"T1_Carryall_camo_Exp",
			"T1_B_AssaultPack_Exp_SF",
			"T1_AssaultPack_PLEOD",
			"T1_AssaultPack_PLSgt_JTAC",
			"T1_Backpack_PL_Lead",
			"T1_AssaultPack_AR",
			"T1_AssaultPack_AAR",
			"T1_Kitbag_camo_AR_SF",
			"T1_Kitbag_camo_AT",
			"T1_Kitbag_camo_Medium_AT",
			"T1_Kitbag_camo_AA",
			"T1_Carryall_camo_AAT",
			"T1_Carryall_camo_Medium_AAT",
			"T1_Carryall_camo_AAA",
			"T1_AssaultPack_MMG",
			"T1_Kitbag_camo_AMG",
			"T1_Kitbag_camo_Section_AT",
			"T1_Static_Designator_01_weapon_F",
			"T1_Instructor_Polo_Black_F",
			"T1_Instructor_Polo_Orange_F",
			"T1_Soldier_F",
			"T1_SF_Marksman_SOS_Standard_F",
			"T1_SF_Explosive_Standard_F",
			"T1_SF_Medic_Standard_F",
			"T1_SF_FTL_Standard_F",
			"T1_SF_AT_Standard_F",
			"T1_SF_AR_Standard_F",
			"T1_Diver_Soldier_F",
			"T1_Diver_Marksman_SOS_Standard_F",
			"T1_Diver_Explosive_Standard_F",
			"T1_Diver_Medic_Standard_F",
			"T1_Diver_FTL_Standard_F",
			"T1_Diver_AT_Standard_F",
			"T1_Diver_AR_Standard_F",
			"T1_Pilot_Standard_F",
			"T1_Pilot_Black_F",
			"T1_Pilot_BlackCamo_F",
			"T1_Pilot_Camo_F",
			"T1_Pilot_Night_F",
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
			"T1_Crewman_Standard_F",
			"T1_Crew_Commander_Standard_F",
			"T1_Sentinel_Commander_Standard_F",
			"T1_Sentinel_Gunner_Standard_F",
			"T1_Sentinel_Driver_Standard_F",
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
			"T1_section_ammobox",
			"T1_support_ammobox",
			"T1_shadow_ammobox",
			"T1_eod_ammobox"
		};
		weapons[] = {
			"T1_weap_sidearm_l",
			"T1_weap_sierra",
			"T1_weap_sidearm_m",
			"T1_weap_mmg_sf",
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
			"T1_DMR_SHADOW_SD",
			"T1_45KO_ABR_green_SD",
			"T1_hk416d145_m320_SD",
			"T1_SF_AR_pistol",
			"T1_mk18_m320",
			"T1_m27iar",
			"T1_mk18",
			"T1_m4a1_blockII_SD",
			"T1_m4a1_grip2",
			"T1_m4a1_grip3",
			"T1_m4a1_Mstock_grip3",
			"T1_m4a1_carryhandle",
			"T1_weap_Instructor_Black",
			"T1_weap_Instructor_Orange",
			"T1_rhs_uniform_g3_m81",
			"T1_rhs_uniform_FROG01_wd",
			"T1_U_Diver_Standard",
			"T1_U_B_FullGhillie_lsh",
			"T1_U_Instructor_Polo_Black",
			"T1_U_Instructor_Polo_Orange",
			"T1_U_Pilot_Standard",
			"T1_U_Pilot_Black",
			"T1_U_Pilot_BlackCamo",
			"T1_U_Pilot_Camo",
			"T1_U_Pilot_Night",
			"T1_V_PlateCarrier2_Standard",
			"T1_V_PlateCarrier2_Standard_SFAR"
		};
		requiredVersion = 0.1;
		requiredAddons[] = {
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
		icon = "\t1_units\data\cfgFactionClasses_T1_ca.paa";
	};
	class T1_Units_Desert
    {
        displayName = "T1 Units (Desert)";
        side = 1;
        priority = 10;
        icon = "\t1_units\data\cfgFactionClasses_T1_ca.paa";
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
	class tf_rt1523g_bwmod;
	class B_Kitbag_Base;
	class B_Kitbag_rgr;
	class T1_Kitbag_camo: B_Kitbag_Base
	{
		scope = 1;
		displayName = "Kitbag (T1 Camo)";
		hiddenSelectionsTextures[] = {"\t1_units\data\backpacks\marpat_kitbag.paa"};
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
		//hiddenSelectionsTextures[] = {"\t1_units\data\backpacks\t1_B_AssaultPack_rgr_camo_co.paa"};
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
	class T1_AssaultPack_Lead_SF: B_AssaultPack_rgr
	{
		scope = 1;
		displayName = "AssaultPack SF Lead";
		//hiddenSelectionsTextures[] = {"\t1_units\data\backpacks\t1_B_AssaultPack_rgr_camo_co.paa"};
		class TransportMagazines
		{			
			class _xx_rhsusf_50Rnd_762x51_m62_tracer
			{
				count = 2;
			magazine = "rhsusf_50Rnd_762x51_m62_tracer";
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				count = 8;
				magazine = "1Rnd_HE_Grenade_shell";
			};
			class _xx_1Rnd_SmokeRed_Grenade_shell
			{
				count = 2;
				magazine = "1Rnd_SmokeRed_Grenade_shell";
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
			class _xx_ACE_Vector
			{
				count = 1;
				name = "ACE_Vector";
			};
		};
	};
	class T1_Kitbag_camo_Lead_Trainer: tf_rt1523g_bwmod
	{
		scope = 1;
		displayName = "Kitbag Lead (T1 Camo)";
		hiddenSelectionsTextures[] = {"\t1_units\data\backpacks\ogao_117.paa"};
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
	class T1_Kitbag_camo_Sniper: tf_rt1523g_bwmod
	{
		scope = 1;
		displayName = "Assault Pack Spotter";
		hiddenSelectionsTextures[] = {"\t1_units\data\backpacks\ogao_117.paa"};
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
		};
	};	
	class T1_AssaultPack_Sniper_RHS: B_AssaultPack_rgr
	{
		scope = 1;
		displayName = "Assault Pack Sniper";
		//hiddenSelectionsTextures[] = {"\t1_units\data\backpacks\t1_B_AssaultPack_rgr_camo_co.paa"};
		class TransportMagazines
		{			
			class _xx_rhsusf_5Rnd_300winmag_xm2010
			{
				count = 12;
				magazine = rhsusf_5Rnd_300winmag_xm2010;
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
		};
	};
	class B_FieldPack_khk;
	class tf_rt1523g_black;
	class T1_FieldPack_Scout_Lead: tf_rt1523g_black
	{
		scope = 1;
		displayName = "Fieldpack Lead (T1 Camo)";
		hiddenSelectionsTextures[] = {"\t1_units\data\backpacks\aor2_210.paa"};
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
		};
	};
	class T1_B_AssaultPack_SF_Radioman_DM: tf_rt1523g_bwmod
	{
		scope = 1;
		displayName = "Assaultpack SF Marksman (T1 Camo)";
		hiddenSelectionsTextures[] = {"\t1_units\data\backpacks\ogao_117.paa"};
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
			class _xx_ACE_Kestrel
			{
				count = 1;
				name = "ACE_Kestrel";
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
	class T1_AssaultPack_pl_medic: B_AssaultPack_rgr
	{
		scope = 1;
		displayName = "AssaultPack Medic";
		//hiddenSelectionsTextures[] = {"\t1_units\data\backpacks\t1_B_AssaultPack_rgr_camo_co.paa"};
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
	class T1_AssaultPack_medic_sf: B_AssaultPack_rgr
	{
		scope = 1;
		displayName = "AssaultPack Medic (T1 Camo)";
		//hiddenSelectionsTextures[] = {"\t1_units\data\backpacks\t1_B_AssaultPack_rgr_camo_co.paa"};
		class TransportMagazines
		{			
			class _xx_SmokeShell
			{
				count = 6;
				magazine = "SmokeShell";
			};
			class _xx_SmokeShellGreen
			{
				count = 3;
				magazine = "SmokeShellGreen";
			};
		};
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
				count = 10;
				name = "ACE_epinephrine";
			};
			class _xx_ACE_bloodIV_250
			{
				count = 6;
				name = "ACE_bloodIV";
			};
		};
	};
	class T1_AssaultPack_cls: B_AssaultPack_rgr
	{
		scope = 1;
		displayName = "AssaultPack CLS (T1 Camo)";
		//hiddenSelectionsTextures[] = {"\t1_units\data\backpacks\t1_B_AssaultPack_rgr_camo_co.paa"};
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
		hiddenSelectionsTextures[] = {"\t1_units\data\backpacks\marpat_carryall.paa"};
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
	class T1_B_AssaultPack_Exp_SF: B_AssaultPack_rgr
	{
		scope = 1;
		//hiddenSelectionsTextures[] = {"\t1_units\data\backpacks\t1_B_AssaultPack_rgr_camo_co.paa"};
		class TransportMagazines
		{
			class _xx_SatchelCarge_Remote_Mag
			{
				count = 1;
				magazine = "SatchelCharge_Remote_Mag";
			};
			class _xx_DemoCharge_Remote_Mag
			{
				count = 2;
				magazine = "DemoCharge_Remote_Mag";
			};
			class _xx_SmokeShell
			{
				count = 1;
				magazine = "SmokeShell";
			};
			class _xx_ACE_M84
			{
				count = 1;
				magazine = "ACE_M84";
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
	class T1_AssaultPack_PLEOD: B_AssaultPack_rgr
	{
		scope = 1;
		//hiddenSelectionsTextures[] = {"\t1_units\data\backpacks\t1_B_AssaultPack_rgr_camo_co.paa"};
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
	class T1_AssaultPack_PLSgt_JTAC: tf_rt1523g_bwmod
	{
		scope = 1;
		hiddenSelectionsTextures[] = {"\t1_units\data\backpacks\ogao_117.paa"};
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
		};
	};
	class T1_Backpack_PL_Lead: tf_rt1523g_bwmod
	{
		scope = 1;
		hiddenSelectionsTextures[] = {"\t1_units\data\backpacks\ogao_117.paa"};		
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
	class T1_AssaultPack_AR: B_AssaultPack_rgr
	{
		scope = 1;
		//hiddenSelectionsTextures[] = {"\t1_units\data\backpacks\t1_B_AssaultPack_rgr_camo_co.paa"};
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
		//hiddenSelectionsTextures[] = {"\t1_units\data\backpacks\t1_B_AssaultPack_rgr_camo_co.paa"};
		class TransportMagazines
		{
			class _xx_rhs_200rnd_556x45_M_SAW
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
	class T1_Kitbag_camo_AR_SF: T1_Kitbag_camo
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_rhsusf_100Rnd_762x51_m62_tracer
			{
				count = 2;
				magazine = t1_mag_mmg_sf;
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
		//hiddenSelectionsTextures[] = {"\t1_units\data\backpacks\t1_B_AssaultPack_rgr_camo_co.paa"};
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
		hiddenSelectionsTextures[] = {"\t1_units\data\units\instructor\t1_poloinstructor_b_co.paa"};
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
			"ACE_M84",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			t1_mag_sidearm_l,
			t1_mag_sidearm_l,
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen"
		};
		respawnmagazines[] = {
			"ACE_M84",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			t1_mag_sidearm_l,
			t1_mag_sidearm_l,
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen"
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
		hiddenSelectionsTextures[] = {"\t1_units\data\units\instructor\t1_poloinstructor_o_co.paa"};
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
			"ACE_M84",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			t1_mag_sidearm_l,
			t1_mag_sidearm_l,
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen"
		};
		respawnmagazines[] = {
			"ACE_M84",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			t1_mag_sidearm_l,
			t1_mag_sidearm_l,
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen"
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
	};
	
	class T1_SF_Marksman_SOS_Standard_F: T1_Soldier_F
	{
		scope = 2;
		uniformClass = "t1_rhs_uniform_g3_m81";
		t1_DutyMod = 0.95;
		faction = "T1_Units";
		vehicleClass = "SF";
		attendant = 1;
		displayName = "T1 SF Radioman DM";
		weapons[] = {
			"T1_45KO_ABR_green_SD",
			"Throw",
			"Put",
			"ACE_Vector"
		};
		respawnWeapons[] = {
			"T1_45KO_ABR_green_SD",
			"Throw",
			"Put",
			"ACE_Vector"
		};
		magazines[] = {
			"ACE_M84",
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
			"SmokeShellGreen"
		};
		respawnmagazines[] = {
			"ACE_M84",
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
			"SmokeShellGreen"
		};
		backpack = "T1_B_AssaultPack_SF_Radioman_DM";
		items[] = {
			STDITEMS_SF,
			"ACE_RangeCard",
			"ACE_ATragMX",
			"ACE_Kestrel4500"
		};
		respawnItems[] = {
			STDITEMS_SF,
			"ACE_RangeCard",
			"ACE_ATragMX",
			"ACE_Kestrel4500"
		};
		camouflage = 0.8;
		linkedItems[] = {
			"T1_V_PlateCarrier2_Standard",
			"rhsusf_opscore_fg_pelt_cam",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[] = {
			"T1_V_PlateCarrier2_Standard",
			"rhsusf_opscore_fg_pelt_cam",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class T1_SF_Explosive_Standard_F: T1_Soldier_F
	{
		scope = 2;
		uniformClass = "t1_rhs_uniform_g3_m81";
		t1_DutyMod = 0.95;
		faction = "T1_Units";
		vehicleClass = "SF";
		displayName = "T1 SF Explosive Specialist";
		weapons[] = {
			"T1_DMR_SHADOW_SD",
			"Throw",
			"Put",
			"ACE_Vector"
		};
		respawnWeapons[] = {
			"T1_DMR_SHADOW_SD",
			"Throw",
			"Put",
			"ACE_Vector"
		};
		magazines[] = {
			
			"ACE_20Rnd_762x51_Mk319_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk319_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk319_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk319_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk319_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk319_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk319_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mag_SD",
			"ACE_20Rnd_762x51_Mag_SD",			
			"HandGrenade",
			"DemoCharge_Remote_Mag",
			"DemoCharge_Remote_Mag"
		};
		respawnmagazines[] = {			
			
			"ACE_20Rnd_762x51_Mk319_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk319_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk319_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk319_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk319_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk319_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk319_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mag_SD",
			"ACE_20Rnd_762x51_Mag_SD",			
			"HandGrenade",
			"DemoCharge_Remote_Mag",
			"DemoCharge_Remote_Mag"
		};
		icon = "iconManExplosive";
		backpack = "T1_B_AssaultPack_Exp_SF";
		items[] = {
			"ACE_M26_Clacker",
			"ACE_DefusalKit",
			"MineDetector",
			STDITEMS_SF
		};
		respawnItems[] = {
			"ACE_M26_Clacker",
			"ACE_DefusalKit",
			"MineDetector",
			STDITEMS_SF
		};
		canDeactivateMines = 1;
		detectSkill = 80;
		camouflage = 1.0;		
		engineer = 1;
		attendant = 1;
		linkedItems[] = {
			"T1_V_PlateCarrier2_Standard",
			"rhsusf_opscore_fg_pelt_cam",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[] = {
			"T1_V_PlateCarrier2_Standard",
			"rhsusf_opscore_fg_pelt_cam",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class T1_SF_Medic_Standard_F: T1_Soldier_F
	{
		scope = 2;
		uniformClass = "t1_rhs_uniform_g3_m81";
		t1_DutyMod = 0.95;
		faction = "T1_Units";
		vehicleClass = "SF";
		displayName = "T1 SF Medic";
		weapons[] = {
			"T1_DMR_SHADOW_SD",
			"Throw",
			"Put",
			"ACE_Vector"
		};
		respawnWeapons[] = {
			"T1_DMR_SHADOW_SD",
			"Throw",
			"Put",
			"ACE_Vector"
		};
		magazines[] = {
			"ACE_M84",
			"ACE_20Rnd_762x51_Mk319_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk319_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk319_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk319_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk319_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk319_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk319_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk319_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mag_SD",
			"ACE_20Rnd_762x51_Mag_SD",
			"HandGrenade",
			"rhsusf_50Rnd_762x51_m62_tracer",			
			"rhsusf_50Rnd_762x51_m62_tracer"
		};
		respawnmagazines[] = {
			"ACE_M84",
			"ACE_20Rnd_762x51_Mk319_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk319_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk319_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk319_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk319_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk319_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk319_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk319_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mag_SD",
			"ACE_20Rnd_762x51_Mag_SD",
			"HandGrenade",
			"rhsusf_50Rnd_762x51_m62_tracer",			
			"rhsusf_50Rnd_762x51_m62_tracer"
		};
		icon = "iconManMedic";
		backpack = "T1_AssaultPack_medic_sf";
		items[] = {
			STDITEMS_SF,
			"ACE_tourniquet",
			"ACE_tourniquet",
			"ACE_tourniquet",
			"ACE_tourniquet",
			"ACE_surgicalKit",
			"ACE_epinephrine",
			"ACE_epinephrine",
			"ACE_epinephrine",
			"ACE_epinephrine",
			"ACE_epinephrine",
			"ACE_epinephrine",
			"ACE_bloodIV",
			"ACE_bloodIV",
			"ACE_bloodIV"
		};
		respawnItems[] = {
			STDITEMS_SF,
			"ACE_tourniquet",
			"ACE_tourniquet",
			"ACE_tourniquet",
			"ACE_tourniquet",
			"ACE_surgicalKit",
			"ACE_epinephrine",
			"ACE_epinephrine",
			"ACE_epinephrine",
			"ACE_epinephrine",
			"ACE_epinephrine",
			"ACE_epinephrine",
			"ACE_bloodIV",
			"ACE_bloodIV",
			"ACE_bloodIV"
		};
		attendant = 1;
		camouflage = 1.0;
		linkedItems[] = {
			"T1_V_PlateCarrier2_Standard",
			"rhsusf_opscore_fg_pelt_cam",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[] = {
			"T1_V_PlateCarrier2_Standard",
			"rhsusf_opscore_fg_pelt_cam",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class T1_SF_FTL_Standard_F: T1_Soldier_F
	{
		scope = 2;
		uniformClass = "t1_rhs_uniform_g3_m81";
		t1_DutyMod = 0.95;
		faction = "T1_Units";
		vehicleClass = "SF";
		attendant = 1;
		displayName = "T1 SF FTL";
		weapons[] = {
			"T1_DMR_SHADOW_SD",
			"rhs_weap_M320",
			"Throw",
			"Put",
			"ACE_MX2A"
		};
		respawnWeapons[] = {
			"T1_DMR_SHADOW_SD",
			"rhs_weap_M320",
			"Throw",
			"Put",
			"ACE_MX2A"
		};
		magazines[] = {
			"ACE_M84",			
			"ACE_20Rnd_762x51_Mk319_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk319_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk319_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk319_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk319_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk319_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk319_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk319_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mag_SD",
			"ACE_20Rnd_762x51_Mag_SD",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen"
		};
		respawnmagazines[] = {
			"ACE_M84",			
			"ACE_20Rnd_762x51_Mk319_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk319_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk319_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk319_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk319_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk319_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk319_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk319_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mag_SD",
			"ACE_20Rnd_762x51_Mag_SD",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			
		};
		icon = "iconManLeader";
		backpack = "T1_AssaultPack_Lead_SF";
		items[] = {
			"ACE_IR_Strobe_Item",
			STDITEMS_SF
		};
		respawnItems[] = {
			"ACE_IR_Strobe_Item",
			STDITEMS_SF
		};
		camouflage = 1.0;
		linkedItems[] = {
			"T1_V_PlateCarrier2_Standard",
			"rhsusf_opscore_fg_pelt_cam",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[] = {
			"T1_V_PlateCarrier2_Standard",
			"rhsusf_opscore_fg_pelt_cam",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class T1_SF_AT_Standard_F: T1_Soldier_F
	{
		scope = 2;
		uniformClass = "t1_rhs_uniform_g3_m81";
		t1_DutyMod = 0.95;
		faction = "T1_Units";
		vehicleClass = "SF";
		attendant = 1;
		displayName = "T1 SF Rifleman AT";
		weapons[] = {
			"T1_DMR_SHADOW_SD",
			"Throw",
			"Put",
			"ACE_Vector",
			"tf47_at4_heat"
		};
		respawnWeapons[] = {
			"T1_DMR_SHADOW_SD",
			"Throw",
			"Put",
			"ACE_Vector",
			"tf47_at4_heat"
		};
		magazines[] = {
			"ACE_M84",
			"ACE_20Rnd_762x51_Mk319_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk319_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk319_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk319_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk319_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk319_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk319_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mag_SD",
			"ACE_20Rnd_762x51_Mag_SD",
			"SmokeShell",
			"SmokeShellGreen",
			"rhsusf_50Rnd_762x51_m62_tracer",			
			"rhsusf_50Rnd_762x51_m62_tracer"
		};
		respawnmagazines[] = {
			"ACE_M84",
			"ACE_20Rnd_762x51_Mk319_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk319_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk319_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk319_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk319_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk319_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk319_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mag_SD",
			"ACE_20Rnd_762x51_Mag_SD",
			"SmokeShell",
			"SmokeShellGreen",
			"rhsusf_50Rnd_762x51_m62_tracer",			
			"rhsusf_50Rnd_762x51_m62_tracer"
		};
		items[] = {
			STDITEMS_SF,
			MEDICALITEMS2
		};
		respawnItems[] = {
			STDITEMS_SF,
			MEDICALITEMS2
		};
		icon = "iconManAT";
		camouflage = 1.0;
		linkedItems[] = {
			"T1_V_PlateCarrier2_Standard",
			"rhsusf_opscore_fg_pelt_cam",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[] = {
			"T1_V_PlateCarrier2_Standard",
			"rhsusf_opscore_fg_pelt_cam",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class T1_SF_AR_Standard_F: T1_Soldier_F
	{
		scope = 2;
		uniformClass = "t1_rhs_uniform_g3_m81";
		t1_DutyMod = 0.95;
		faction = "T1_Units";
		vehicleClass = "SF";
		attendant = 1;
		displayName = "T1 SF AR";
		weapons[] = {
			"T1_weap_mmg_sf",
			"T1_SF_AR_pistol",
			"Throw",
			"Put",
			"ACE_Vector"
		};
		respawnweapons[] = {
			"T1_weap_mmg_sf",
			"T1_SF_AR_pistol",
			"Throw",
			"Put",
			"ACE_Vector"
		};
		magazines[] = {
			"rhsusf_50Rnd_762x51_m62_tracer",
			"rhsusf_50Rnd_762x51_m62_tracer",
			"rhsusf_50Rnd_762x51_m62_tracer",
			"rhsusf_50Rnd_762x51_m62_tracer",
			"rhsusf_50Rnd_762x51_m62_tracer",
			"rhsusf_50Rnd_762x51_m62_tracer",
			"rhsusf_50Rnd_762x51_m62_tracer",
			"rhsusf_50Rnd_762x51_m62_tracer",
			"rhsusf_50Rnd_762x51_m62_tracer",
			"rhsusf_mag_17Rnd_9x19_JHP",
			"rhsusf_mag_17Rnd_9x19_JHP",
			"ACE_M84",
			"HandGrenade",
			"SmokeShell"
		};
		respawnmagazines[] = {
			"rhsusf_50Rnd_762x51_m62_tracer",
			"rhsusf_50Rnd_762x51_m62_tracer",
			"rhsusf_50Rnd_762x51_m62_tracer",
			"rhsusf_50Rnd_762x51_m62_tracer",
			"rhsusf_50Rnd_762x51_m62_tracer",
			"rhsusf_50Rnd_762x51_m62_tracer",
			"rhsusf_50Rnd_762x51_m62_tracer",
			"rhsusf_50Rnd_762x51_m62_tracer",
			"rhsusf_50Rnd_762x51_m62_tracer",
			"rhsusf_mag_17Rnd_9x19_JHP",
			"rhsusf_mag_17Rnd_9x19_JHP",
			"ACE_M84",
			"HandGrenade",
			"SmokeShell"
		};
		icon = "iconManMG";
		items[] = {
			STDITEMS_SF,
			MEDICALITEMS2
		};
		respawnItems[] = {
			STDITEMS_SF,
			MEDICALITEMS2
		};
		linkedItems[] = {
			"T1_V_PlateCarrier2_Standard_SFAR",
			"rhsusf_opscore_fg_pelt_cam",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[] = {
			"T1_V_PlateCarrier2_Standard_SFAR",
			"rhsusf_opscore_fg_pelt_cam",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		camouflage = 1.0;
	};
	class T1_Diver_Soldier_F: B_Soldier_F
	{
		scope = 1;
		uniformClass = "T1_U_Diver_Standard";
		model = "\A3\characters_F\Common\diver_slotable";
		modelsides[] = {3,1};
		hiddenselections[] = {
			"Camo1",
			"Camo2"
		};
		hiddenselectionstextures[] = {
			"\A3\Characters_F\Common\Data\diver_suit_nato_co.paa",
			"\A3\Characters_F\Common\Data\diver_equip_nato_co.paa"
		};
		hiddenunderwaterselections[] = {"hide"};
		hiddenunderwaterselectionstextures[] = {
			"\A3\characters_f\common\data\diver_equip_nato_co.paa",
			"\A3\characters_f\common\data\diver_equip_nato_co.paa",
			"\A3\characters_f\data\visors_ca.paa"
		};
		shownunderwaterselections[] = {
			"unhide",
			"unhide2"
		};
		camouflage = 1.0;
		class Wounds
		{
			mat[] = {
			"A3\Characters_F\Common\Data\diver_suit.rvmat",
			"A3\Characters_F\Common\Data\diver_suit_injury.rvmat",
			"A3\Characters_F\Common\Data\diver_suit_injury.rvmat"
		};
			tex[] = {};
		};
		linkedItems[] = {
			"V_RebreatherB",
			"G_Diving",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[] = {
			"V_RebreatherB",
			"G_Diving",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class T1_Diver_Marksman_SOS_Standard_F: T1_Diver_Soldier_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "Diver";
		displayName = "T1 Diver Radioman DM";
		weapons[] = {
			"T1_45KO_ABR_green_SD",
			"Throw",
			"Put",
			"ACE_Vector"
		};
		respawnWeapons[] = {
			"T1_45KO_ABR_green_SD",
			"Throw",
			"Put",
			"ACE_Vector"
		};
		magazines[] = {
			"ACE_M84",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"ACE_20Rnd_762x51_Mag_SD",
			"ACE_20Rnd_762x51_Mag_SD",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen"
		};
		respawnmagazines[] = {
			"ACE_M84",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"20Rnd_762x51_Mag",
			"ACE_20Rnd_762x51_Mag_SD",
			"ACE_20Rnd_762x51_Mag_SD",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen"
		};
		backpack = "T1_B_AssaultPack_SF_Radioman_DM";
		items[] = {
			STDITEMS,
			"ACE_RangeCard",
			"ACE_ATragMX",
			"ACE_Kestrel4500"
		};
		respawnItems[] = {
			STDITEMS,
			"ACE_RangeCard",
			"ACE_ATragMX",
			"ACE_Kestrel4500"
		};
		camouflage = 0.8;
	};
	class T1_Diver_Explosive_Standard_F: T1_Diver_Soldier_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "Diver";
		displayName = "T1 Diver Explosive Specialist";
		weapons[] = {
			"T1_weap_rifle_sd",
			"T1_weap_sidearm_l",
			"Throw",
			"Put",
			"ACE_Vector"
		};
		respawnWeapons[] = {
			"T1_weap_rifle_sd",
			"T1_weap_sidearm_l",
			"Throw",
			"Put",
			"ACE_Vector"
		};
		magazines[] = {
			"ACE_M84",
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_rifle_sd,
			t1_mag_rifle_sd,
			t1_mag_sidearm_l,
			t1_mag_sidearm_l,
			"SmokeShell",
			"HandGrenade",
			"HandGrenade"
		};
		respawnmagazines[] = {
			"ACE_M84",
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_rifle_sd,
			t1_mag_rifle_sd,
			t1_mag_sidearm_l,
			t1_mag_sidearm_l,
			"SmokeShell",
			"HandGrenade",
			"HandGrenade"
		};
		icon = "iconManExplosive";
		backpack = "T1_B_AssaultPack_Exp_SF";
		items[] = {
			"ACE_M26_Clacker",
			"ACE_DefusalKit",
			STDITEMS
		};
		respawnItems[] = {
			"ACE_M26_Clacker",
			"ACE_DefusalKit",
			STDITEMS
		};
		canDeactivateMines = 1;
		detectSkill = 80;
		camouflage = 1.0;
	};
	class T1_Diver_Medic_Standard_F: T1_Diver_Soldier_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "Diver";
		displayName = "T1 Diver Medic";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\t1_units\data\units\t1_clothing1_medic_camo_co.paa"};
		weapons[] = {
			"T1_weap_rifle_sd",
			"T1_weap_sidearm_l",
			"Throw",
			"Put",
			"ACE_Vector"
		};
		respawnWeapons[] = {
			"T1_weap_rifle_sd",
			"T1_weap_sidearm_l",
			"Throw",
			"Put",
			"ACE_Vector"
		};
		magazines[] = {
			"ACE_M84",
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_rifle_sd,
			t1_mag_rifle_sd,
			t1_mag_sidearm_l,
			t1_mag_sidearm_l,
			"SmokeShell",
			"SmokeShell",
			"SmokeShellGreen",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShellGreen",
			"SmokeShellGreen",
			"HandGrenade",
			"HandGrenade"
		};
		respawnmagazines[] = {
			"ACE_M84",
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_rifle_sd,
			t1_mag_rifle_sd,
			t1_mag_sidearm_l,
			t1_mag_sidearm_l,
			"SmokeShell",
			"SmokeShell",
			"SmokeShellGreen",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShellGreen",
			"SmokeShellGreen",
			"HandGrenade",
			"HandGrenade"
		};
		icon = "iconManMedic";
		backpack = "T1_AssaultPack_medic_sf";
		items[] = {STDITEMS};
		respawnItems[] = {STDITEMS};
		attendant = 1;
		camouflage = 1.0;
	};
	class T1_Diver_FTL_Standard_F: T1_Diver_Soldier_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "Diver";
		displayName = "T1 Diver FTL";
		weapons[] = {
			"T1_weap_rifle_gl_sd",
			"T1_weap_sidearm_l",
			"Throw",
			"Put",
			"ACE_Vector"
		};
		respawnWeapons[] = {
			"T1_weap_rifle_gl_sd",
			"T1_weap_sidearm_l",
			"Throw",
			"Put",
			"ACE_Vector"
		};
		magazines[] = {
			"ACE_M84",
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_rifle_sd,
			t1_mag_rifle_sd,
			t1_mag_sidearm_l,
			t1_mag_sidearm_l,
			"HandGrenade",
			"HandGrenade",
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
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell"
		};
		respawnmagazines[] = {
			"ACE_M84",
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_rifle_sd,
			t1_mag_rifle_sd,
			t1_mag_sidearm_l,
			t1_mag_sidearm_l,
			"HandGrenade",
			"HandGrenade",
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
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell"
		};
		icon = "iconManLeader";
		backpack = "T1_AssaultPack_Lead_SF";
		items[] = {
			"ACE_IR_Strobe_Item",
			STDITEMS
		};
		respawnItems[] = {
			"ACE_IR_Strobe_Item",
			STDITEMS
		};
		camouflage = 1.0;
	};
	class T1_Diver_AT_Standard_F: T1_Diver_Soldier_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "Diver";
		displayName = "T1 Diver Radioman";
		weapons[] = {
			"T1_weap_rifle_sd",
			"T1_weap_sidearm_l",
			"Throw",
			"Put",
			"ACE_Vector",
			"tf47_at4_heat"
		};
		respawnWeapons[] = {
			"T1_weap_rifle_sd",
			"T1_weap_sidearm_l",
			"Throw",
			"Put",
			"ACE_Vector",
			"tf47_at4_heat"
		};
		magazines[] = {
			"ACE_M84",
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_rifle_sd,
			t1_mag_rifle_sd,
			t1_mag_sidearm_l,
			t1_mag_sidearm_l,
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen"
		};
		respawnmagazines[] = {
			"ACE_M84",
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_rifle_sd,
			t1_mag_rifle_sd,
			t1_mag_sidearm_l,
			t1_mag_sidearm_l,
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen"
		};
		items[] = {STDITEMS};
		respawnItems[] = {STDITEMS};
		icon = "iconManAT";
		backpack = "T1_AssaultPack_Lead_SF";
		camouflage = 1.0;
	};
	class T1_Diver_AR_Standard_F: T1_Diver_Soldier_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "Diver";
		displayName = "T1 Diver AR";
		weapons[] = {
			"T1_weap_mmg_sf",
			"T1_weap_sidearm_m",
			"Throw",
			"Put",
			"ACE_Vector"
		};
		respawnweapons[] = {
			"T1_weap_mmg_sf",
			"T1_weap_sidearm_m",
			"Throw",
			"Put",
			"ACE_Vector"
		};
		magazines[] = {
			"ACE_M84",
			"HandGrenade",
			"SmokeShell",
			t1_mag_mmg_sf,
			t1_mag_sidearm_m,
			t1_mag_sidearm_m_sd
		};
		respawnmagazines[] = {
			"ACE_M84",
			"HandGrenade",
			"SmokeShell",
			t1_mag_mmg_sf,
			t1_mag_sidearm_m,
			t1_mag_sidearm_m_sd
		};
		icon = "iconManMG";
		backpack = "T1_Kitbag_camo_AR_SF";
		items[] = {STDITEMS,"ACE_SpareBarrel"};
		respawnItems[] = {STDITEMS,"ACE_SpareBarrel"};
		camouflage = 1.0;
	};
	class B_Helipilot_F;
	class T1_Pilot_Standard_F: B_Helipilot_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "Pilot";
		displayName = "T1 Pilot";
		model = "\A3\Characters_F\Common\coveralls.p3d";
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\coveralls_sage_co.paa"};
		uniformClass = "T1_U_Pilot_Standard";
		weapons[] = {
			"SMG_01_ACO_F",
			"T1_weap_sidearm_l",
			"Throw",
			"Put",
			"ACE_Vector"
		};
		respawnWeapons[] = {
			"SMG_01_ACO_F",
			"T1_weap_sidearm_l",
			"Throw",
			"Put",
			"ACE_Vector"
		};
		magazines[] = {
			"ACE_M84",
			"30Rnd_45ACP_Mag_SMG_01",
			"30Rnd_45ACP_Mag_SMG_01",
			"30Rnd_45ACP_Mag_SMG_01",
			"30Rnd_45ACP_Mag_SMG_01",
			t1_mag_sidearm_l,
			t1_mag_sidearm_l,
			"SmokeShell",
			"SmokeShellGreen"
		};
		respawnmagazines[] = {
			"ACE_M84",
			"30Rnd_45ACP_Mag_SMG_01",
			"30Rnd_45ACP_Mag_SMG_01",
			"30Rnd_45ACP_Mag_SMG_01",
			"30Rnd_45ACP_Mag_SMG_01",
			t1_mag_sidearm_l,
			t1_mag_sidearm_l,
			"SmokeShell",
			"SmokeShellGreen"
		};
		linkedItems[] = {
			"rhsusf_hgu56p_visor",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[] = {
			"rhsusf_hgu56p_visor",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		// Todo: Evaluate wrt MEDICALITEMS mismatch
		items[] = {
			STDITEMS,
			MEDICALITEMS
		};
		respawnItems[] = {
			STDITEMS,
			MEDICALITEMS
		};
		camouflage = 1.4;
		engineer = 1;
	};
	class T1_Pilot_Black_F: T1_Pilot_Standard_F
	{
		displayName = "T1 Pilot";
		uniformClass = "T1_U_Pilot_Black";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\t1_units\data\units\pilot\t1_pilot_black_co.paa"};
	};
	class T1_Pilot_BlackCamo_F: T1_Pilot_Standard_F
	{
		displayName = "T1 Pilot";
		uniformClass = "T1_U_Pilot_BlackCamo";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\t1_units\data\units\pilot\t1_pilot_BlackCamo_co.paa"};
	};
	class T1_Pilot_Camo_F: T1_Pilot_Standard_F
	{
		displayName = "T1 Pilot";
		uniformClass = "T1_U_Pilot_Camo";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\t1_units\data\units\pilot\t1_pilot_camo_co.paa"};
	};
	class T1_Pilot_Night_F: T1_Pilot_Standard_F
	{
		displayName = "T1 Pilot";
		uniformClass = "T1_U_Pilot_Night";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\t1_units\data\units\pilot\t1_pilot_night_co.paa"};
	};
	class B_Spotter_F;
	class T1_Spotter_Standard_F: B_Spotter_F
	{
		scope = 2;
		t1_DutyMod = 0.965;
		faction = "T1_Units";
		vehicleClass = "Special";
		attendant = 1;
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
			"ACE_M84",
			"Laserbatteries",
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
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen"
		};
		respawnmagazines[] = {
			"ACE_M84",
			"Laserbatteries",
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
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen"
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
			"HandGrenade",		
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
			"SmokeShell"
		};
		respawnmagazines[] = {
			"HandGrenade",
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
			"Laserbatteries",
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
			"ACE_20Rnd_762x51_Mag_SD"
		};
		respawnmagazines[] = {
			"Laserbatteries",
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
			"ACE_20Rnd_762x51_Mag_SD"
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
			"HandGrenade",			
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
			"SmokeShell"
		};
		respawnmagazines[] = {
			"HandGrenade",			
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
				t1_mag_sidearm_l,
				t1_mag_sidearm_l,
				"HandGrenade",
				"SmokeShell",
				"130Rnd_338_Mag",
				"130Rnd_338_Mag",
				"130Rnd_338_Mag",
				"130Rnd_338_Mag",
				"130Rnd_338_Mag",
				"130Rnd_338_Mag",
				"130Rnd_338_Mag",
				"130Rnd_338_Mag"
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
			"HandGrenade",
			"ACE_M84",
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
			t1_mag_mmg
		};
		respawnmagazines[] = {
			"HandGrenade",
			"ACE_M84",
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
			t1_mag_mmg
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
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Laserbatteries",
			"ACE_M84",
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
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Laserbatteries",
			"ACE_M84",
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
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Laserbatteries",
			"Chemlight_blue",
			"ACE_20Rnd_762x51_Mk316_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk316_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk316_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk316_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk316_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk316_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk316_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk316_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mag_SD",
			"ACE_20Rnd_762x51_Mag_SD"
		};
		respawnmagazines[] = {
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Laserbatteries",
			"Chemlight_blue",
			"ACE_20Rnd_762x51_Mk316_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk316_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk316_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk316_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk316_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk316_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk316_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk316_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mag_SD",
			"ACE_20Rnd_762x51_Mag_SD"
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
	class T1_Crewman_Standard_F: T1_Soldier_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "Special";
		displayName = "T1 Crewman";
		uniformClass = "T1_U_Pilot_Camo";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\t1_units\data\units\pilot\t1_pilot_camo_co.paa"};
		weapons[] = {
			"T1_m4a1_carryhandle",
			"T1_weap_sidearm_l",
			"Throw",
			"Put",
			"ACE_Vector"
		};
		respawnWeapons[] = {
			"T1_m4a1_carryhandle",
			"T1_weap_sidearm_l",
			"Throw",
			"Put",
			"ACE_Vector"
		};
		magazines[] = {
			"ACE_M84",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			t1_mag_sidearm_l,
			t1_mag_sidearm_l,
			"SmokeShell",
			"SmokeShellGreen"
		};
		respawnmagazines[] = {
			"ACE_M84",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			t1_mag_sidearm_l,
			t1_mag_sidearm_l,
			"SmokeShell",
			"SmokeShellGreen"
		};
		linkedItems[] = {
			"V_BandollierB_rgr",
			"H_HelmetCrew_B",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[] = {
			"V_BandollierB_rgr",
			"H_HelmetCrew_B",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		items[] = {
			STDITEMS,
			MEDICALITEMS
		};
		respawnItems[] = {
			STDITEMS,
			MEDICALITEMS
		};
		engineer = 1;
	};
	class T1_Crew_Commander_Standard_F: T1_Soldier_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "Special";
		displayName = "T1 Crew Commander";
		uniformClass = "T1_U_Pilot_Camo";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\t1_units\data\units\pilot\t1_pilot_camo_co.paa"};
		weapons[] = {
			"T1_m4a1_carryhandle",
			"T1_weap_sidearm_l",
			"Throw",
			"Put",
			"ACE_Vector"
		};
		respawnWeapons[] = {
			"T1_m4a1_carryhandle",
			"T1_weap_sidearm_l",
			"Throw",
			"Put",
			"ACE_Vector"
		};
		magazines[] = {			
			"ACE_M84",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			t1_mag_sidearm_l,
			t1_mag_sidearm_l,
			"SmokeShell",
			"SmokeShellGreen",
			"B_IR_Grenade",
			"B_IR_Grenade"
		};
		respawnmagazines[] = {
			"ACE_M84",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			t1_mag_sidearm_l,
			t1_mag_sidearm_l,
			"SmokeShell",
			"SmokeShellGreen",
			"B_IR_Grenade",
			"B_IR_Grenade"
		};
		linkedItems[] = {
			"V_BandollierB_rgr",
			"H_HelmetCrew_B",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[] = {
			"V_BandollierB_rgr",
			"H_HelmetCrew_B",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		items[] = {
			STDITEMS,
			MEDICALITEMS
		};
		respawnItems[] = {
			STDITEMS,
			MEDICALITEMS
		};
		engineer = 1;
	};
	class T1_Sentinel_Commander_Standard_F: T1_Soldier_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "Special";
		displayName = "T1 Sentinel Commander";
		uniformClass = "T1_U_Pilot_Camo";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\t1_units\data\units\pilot\t1_pilot_camo_co.paa"};
		weapons[] = {
			"T1_m4a1_carryhandle",
			"T1_weap_sidearm_l",
			"Throw",
			"Put",
			"ACE_Vector"
		};
		respawnWeapons[] = {
			"T1_m4a1_carryhandle",
			"T1_weap_sidearm_l",
			"Throw",
			"Put",
			"ACE_Vector"
		};
		magazines[] = {
			"ACE_M84",			
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			t1_mag_sidearm_l,
			t1_mag_sidearm_l,
			"SmokeShell",
			"SmokeShellGreen",
			"B_IR_Grenade",
			"B_IR_Grenade"
		};
		respawnmagazines[] = {
			"ACE_M84",			
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			t1_mag_sidearm_l,
			t1_mag_sidearm_l,
			"SmokeShell",
			"SmokeShellGreen",
			"B_IR_Grenade",
			"B_IR_Grenade"
		};
		linkedItems[] = {
			"V_BandollierB_rgr",
			"H_HelmetCrew_B",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[] = {
			"V_BandollierB_rgr",
			"H_HelmetCrew_B",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		items[] = {STDITEMS};
		respawnItems[] = {STDITEMS};
		backpack = "T1_Kitbag_camo_Repair";
		engineer = 1;
		detectSkill = 40;
	};
	class T1_Sentinel_Gunner_Standard_F: T1_Soldier_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "Special";
		displayName = "T1 Sentinel Gunner";
		uniformClass = "T1_U_Pilot_Camo";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\t1_units\data\units\pilot\t1_pilot_camo_co.paa"};
		weapons[] = {
			"T1_m4a1_carryhandle",
			"T1_weap_sidearm_l",
			"Throw",
			"Put",
			"ACE_Vector"
		};
		respawnWeapons[] = {
			"T1_m4a1_carryhandle",
			"T1_weap_sidearm_l",
			"Throw",
			"Put",
			"ACE_Vector"
		};
		magazines[] = {
			"ACE_M84",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			t1_mag_sidearm_l,
			t1_mag_sidearm_l,
			"SmokeShell",
			"SmokeShellGreen"
		};
		respawnmagazines[] = {
			"ACE_M84",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			t1_mag_sidearm_l,
			t1_mag_sidearm_l,
			"SmokeShell",
			"SmokeShellGreen"
		};
		linkedItems[] = {
			"V_BandollierB_rgr",
			"H_HelmetCrew_B",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[] = {
			"V_BandollierB_rgr",
			"H_HelmetCrew_B",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		items[] = {STDITEMS};
		respawnItems[] = {STDITEMS};
		backpack = "T1_Kitbag_camo_Repair";
		engineer = 1;
		detectSkill = 40;
	};
	class T1_Sentinel_Driver_Standard_F: T1_Soldier_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "Special";
		displayName = "T1 Sentinel Driver Medic";
		uniformClass = "T1_U_Pilot_Camo";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\t1_units\data\units\pilot\t1_pilot_camo_co.paa"};
		weapons[] = {
			"T1_m4a1_carryhandle",
			"T1_weap_sidearm_l",
			"Throw",
			"Put",
			"ACE_Vector"
		};
		respawnWeapons[] = {
			"T1_m4a1_carryhandle",
			"T1_weap_sidearm_l",
			"Throw",
			"Put",
			"ACE_Vector"
		};
		magazines[] = {
			"ACE_M84",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			t1_mag_sidearm_l,
			t1_mag_sidearm_l,
			"SmokeShell",
			"SmokeShellGreen"
		};
		respawnmagazines[] = {
			"ACE_M84",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			t1_mag_sidearm_l,
			t1_mag_sidearm_l,
			"SmokeShell",
			"SmokeShellGreen"
		};
		linkedItems[] = {
			"V_BandollierB_rgr",
			"H_HelmetCrew_B",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[] = {
			"V_BandollierB_rgr",
			"H_HelmetCrew_B",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		items[] = {
			STDITEMS,
			"ACE_tourniquet",
			"ACE_tourniquet",
			"ACE_tourniquet",
			"ACE_tourniquet",
			"ACE_surgicalKit"
		};
		respawnItems[] = {
			STDITEMS
		};
		backpack = "T1_Kitbag_camo_medic";
		attendant = 1;
		engineer = 1;
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
			"ACE_M84",
			"ACE_M84",
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
			"ACE_M84",
			"ACE_M84",
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
			"ACE_M84",
			"ACE_M84",
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
			"ACE_M84",
			"ACE_M84",
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
			"HandGrenade",
			"HandGrenade",
			"ACE_M84",
			"ACE_M84",
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
			"SmokeShell",
			"SmokeShell",
			"SmokeShellGreen",
			"SmokeShellGreen"
		};
		respawnmagazines[] = {
			"HandGrenade",
			"HandGrenade",
			"ACE_M84",
			"ACE_M84",
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
	};
	class T1_Section_AR_Standard_F: T1_Soldier_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "Section";
		displayName = "Automatic Rifleman Light";
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
			"ACE_M84",
			"rhsusf_100Rnd_556x45_soft_pouch",
			"rhsusf_100Rnd_556x45_soft_pouch",
			"rhsusf_100Rnd_556x45_soft_pouch",
			"rhsusf_100Rnd_556x45_soft_pouch",
			t1_mag_sidearm_l,
			"SmokeShell"
		};
		respawnmagazines[] = {
			"ACE_M84",
			"rhsusf_100Rnd_556x45_soft_pouch",
			"rhsusf_100Rnd_556x45_soft_pouch",
			"rhsusf_100Rnd_556x45_soft_pouch",
			"rhsusf_100Rnd_556x45_soft_pouch",
			t1_mag_sidearm_l,
			"SmokeShell"
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
		displayName = "Automatic Rifleman";
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
			"ACE_M84",
			"rhsusf_100Rnd_556x45_soft_pouch",
			"rhsusf_100Rnd_556x45_soft_pouch",
			"rhsusf_100Rnd_556x45_soft_pouch",			
			"rhsusf_100Rnd_556x45_soft_pouch",
			"rhsusf_100Rnd_556x45_soft_pouch",
			t1_mag_sidearm_l,
			"SmokeShell"
		};
		respawnmagazines[] = {
			"ACE_M84",
			"rhsusf_100Rnd_556x45_soft_pouch",
			"rhsusf_100Rnd_556x45_soft_pouch",
			"rhsusf_100Rnd_556x45_soft_pouch",
			"rhsusf_100Rnd_556x45_soft_pouch",
			"rhsusf_100Rnd_556x45_soft_pouch",
			t1_mag_sidearm_l,
			"SmokeShell"
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
			"ACE_M84",
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
			"SmokeShell",
			"rhsusf_100Rnd_556x45_soft_pouch",
			"rhsusf_100Rnd_556x45_soft_pouch",
			"rhsusf_100Rnd_556x45_soft_pouch"
		};
		respawnmagazines[] = {
			"ACE_M84",
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
			"SmokeShell",
			"rhsusf_100Rnd_556x45_soft_pouch",
			"rhsusf_100Rnd_556x45_soft_pouch",
			"rhsusf_100Rnd_556x45_soft_pouch"
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
			"SmokeShell",
			"SmokeShell",
			"HandGrenade",
			"HandGrenade",
			"ACE_M84",
			"ACE_M84",
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
			"rhs_mag_30Rnd_556x45_M855A1_Stanag"
		};
		respawnmagazines[] = {
			"SmokeShell",
			"SmokeShell",
			"HandGrenade",
			"HandGrenade",
			"ACE_M84",
			"ACE_M84",
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
			"rhs_mag_30Rnd_556x45_M855A1_Stanag"
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
			"SmokeShell",
			"SmokeShell",
			"HandGrenade",
			"HandGrenade",
			"ACE_M84",
			"ACE_M84",
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
			"t1_longrange_556"
		};
		respawnmagazines[] = {
			"SmokeShell",
			"SmokeShell",
			"HandGrenade",
			"HandGrenade",
			"ACE_M84",
			"ACE_M84",
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
			"t1_longrange_556"
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
			"B_IR_Grenade",
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
			"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red"
		};
		respawnmagazines[] = {
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
			"B_IR_Grenade",
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
			"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red"
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
			"SmokeShell",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag"
		};
		respawnmagazines[] = {
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
			"SmokeShell",			
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag"
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
			"HandGrenade",
			"SmokeShell",
			"B_IR_Grenade",
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
			"DemoCharge_Remote_Mag"
		};
		respawnmagazines[] = {
			"HandGrenade",
			"SmokeShell",
			"B_IR_Grenade",
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
			"DemoCharge_Remote_Mag"
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
			"T1_m4a1_grip2",
			"Throw",
			"Put",
			"Laserdesignator"
		};
		respawnWeapons[] = {
			"T1_m4a1_grip2",
			"Throw",
			"Put",
			"Laserdesignator"
		};
		magazines[] = {
			"Laserbatteries",
			"HandGrenade",
			"SmokeShell",
			"Chemlight_blue",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red"
		};
		respawnmagazines[] = {
			"Laserbatteries",
			"HandGrenade",
			"SmokeShell",
			"Chemlight_blue",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red"
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
				magazine = rhs_mag_30Rnd_556x45_M855A1_Stanag;
				count = 72;
			};
			class _xx_rhs_mag_30Rnd_556x45_Mk262_Stanag
			{
				magazine =  t1_longrange_556;
				count = 12;
			};
			class _xx_rhsusf_100Rnd_556x45_soft_pouch
			{
				magazine = rhsusf_100Rnd_556x45_soft_pouch;
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
			class _xx_tf_anprc152
			{
				count = 2;
				name = "tf_anprc152";
			};
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
			class _xx_tf_rt1523g_bwmod
			{
				count = 2;
				backpack = "tf_rt1523g_bwmod";
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
				magazine = rhs_mag_30Rnd_556x45_M855A1_Stanag;
				count = 48;
			};
			class _xx_20Rnd_762x51_Mag
			{
				magazine = ACE_20Rnd_762x51_Mk316_Mod_0_Mag
				count = 30;
			};
			class _xx_ACE_20Rnd_762x51_Mag_SD
			{
				magazine = ACE_20Rnd_762x51_Mag_SD
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
				magazine = rhsusf_5Rnd_300winmag_xm2010;
				count = 36;
			};
			class _xx_T1_rhsusf_5Rnd_300winmag_xm2010_SD
			{
				magazine = T1_rhsusf_5Rnd_300winmag_xm2010_SD;
				count = 12;
			};
			class _xx_16Rnd_9x21_Mag
			{
				magazine = 16Rnd_9x21_Mag;
				count = 16;
			};
			class _xx_rhsusf_mag_17Rnd_9x19_FMJ
			{
				magazine = t1_mag_sidearm_l;
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
			class _xx_tf_anprc152
			{
				count = 4;
				name = "tf_anprc152";
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
			class _xx_tf_rt1523g_bwmod
			{
				count = 2;
				backpack = "tf_rt1523g_bwmod";
			};
		};
	};
	class T1_shadow_ammobox: B_supplyCrate_F
	{
		vehicleClass = "Ammo";
		displayName = "T1 Shadow Supply Box";
		transportMaxWeapons = 999;
		transportMaxMagazines = 9999;
		transportMaxBackpacks = 99;
		transportMaxItems = 9999;
		class TransportMagazines
		{
			class _xx_rhsusf_mag_17Rnd_9x19_JHP
			{
				magazine = "rhsusf_mag_17Rnd_9x19_JHP";
				count = 8;
			};
			class _xx_20Rnd_762x51_Mag
			{
				magazine = "ACE_20Rnd_762x51_Mk319_Mod_0_Mag";
				count = 72;
			};
			class _xx_ACE_20Rnd_762x51_Mk316_Mod_0_Mag
			{
				magazine = "ACE_20Rnd_762x51_Mk316_Mod_0_Mag";
				count = 16;
			};
			class ACE_20Rnd_762x51_Mag_SD
			{
				magazine = "ACE_20Rnd_762x51_Mag_SD";
				count = 20;
			};	
			class _xx_rhsusf_50Rnd_762x51_m62_tracer
			{
				magazine = "rhsusf_50Rnd_762x51_m62_tracer";
				count = 32;
			};
			class GLs // leader GLs
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count=16;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 12;
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
				count = 12;
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
				count = 16;
				name = "ACE_morphine";
			};
			class _xx_ACE_epinephrine
			{
				count = 12;
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
			class _xx_ACE_wirecutter
			{
				count = 4;
				name = "ACE_wirecutter";
			};
			class _xx_ACE_UAVBattery
			{
				count = 4;
				name = "ACE_UAVBattery";
			};
			class UavTerminal
			{
				count = 6;
				name = "B_UavTerminal";
			};
		};
		class TransportWeapons
		{			
			class rhs_weap_m72a7
			{
				weapon = "rhs_weap_m72a7";
				count = 4;
			};
			class MAW
			{
				weapon = "tf47_at4_heat";
				count = 2;
			};
		};
		class TransportBackpacks
		{
			class _xx_B_Static_Designator_01_weapon_F
			{
				backpack = "B_Static_Designator_01_weapon_F";
				count = 2;
			};
			class _xx_B_UAV_01_backpack_F
			{
				backpack = "B_UAV_01_backpack_F";
				count = 2;
			};
			class TacticalLegBreaker
			{
				backpack = "ACE_TacticalLadder_Pack";
				count = 2;
			};
			class _xx_tf_rt1523g_bwmod
			{
				count = 2;
				backpack = "tf_rt1523g_bwmod";
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
