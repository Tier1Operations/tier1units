////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.90
//Thu Apr 30 23:39:42 2015 : Source 'file' date Thu Apr 30 23:39:42 2015
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

#define STDITEMS "ItemRadio","ACE_EarPlugs","ACE_microDAGR","ACE_MapTools","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie"

// MEDICALITEMS is used in addition to STDITEMS for units without backpacks
#define MEDICALITEMS "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_morphine","ACE_morphine","ACE_morphine","ACE_epinephrine","ACE_tourniquet"

//Class t1_units : config.bin{
class CfgPatches
{
	class t1_units
	{
		units[] = {
			"T1_Kitbag_camo_SF_Marksman",
			"T1_Kitbag_camo_Lead",
			"T1_Kitbag_camo_Lead_Plt",
			"T1_Kitbag_camo_Lead_Trainer",
			"T1_Carryall_camo_AMG",
			"T1_Carryall_camo_AAA",
			"T1_Carryall_camo_AAT",
			"T1_Carryall_camo_Medium_AAT",
			"T1_Kitbag_camo_AA",
			"T1_Kitbag_camo_AT",
			"T1_Kitbag_camo_Medium_AT",
			"T1_Kitbag_camo_AR",
			"T1_Kitbag_camo_Scout_Lead",
			"T1_Carryall_camo_PLSgt_JTAC",
			"T1_Carryall_camo_PLEOD",
			"T1_Carryall_camo_Exp",
			"T1_Carryall_camo_Exp_SF",
			"T1_Kitbag_camo_Repair",
			"T1_Carryall_camo",
			"T1_Kitbag_camo_cls",
			"T1_Kitbag_camo_medic",
			"T1_Kitbag_camo",
			"T1_Platoon_Sgt_Standard_F",
			"T1_Platoon_EOD_Standard_F",
			"T1_Platoon_Medic_Standard_F",
			"T1_Platoon_Lead_Standard_F",
			"T1_Section_AT_Standard_F",
			"T1_Section_AAR_Standard_F",
			"T1_Section_AR_Standard_F",
			"T1_Section_CLS_Standard_F",
			"T1_Section_Sgt_Standard_F",
			"T1_Section_Lead_Standard_F",
			"T1_Sentinel_Driver_Standard_F",
			"T1_Sentinel_Gunner_Standard_F",
			"T1_Sentinel_Commander_Standard_F",
			"T1_Crew_Commander_Standard_F",
			"T1_Crewman_Standard_F",
			"T1_Scout_TL_Standard_F",
			"T1_Scout_Standard_F",
			"T1_Specialist_AMG_Standard_F",
			"T1_Specialist_MG_Standard_F",
			"T1_Specialist_AAA_Standard_F",
			"T1_Specialist_AA_Standard_F",
			"T1_Specialist_AAT_Standard_F",
			"T1_Specialist_AT_Standard_F",
			"T1_Specialist_Medium_AAT_Standard_F",
			"T1_Specialist_Medium_AT_Standard_F",
			"T1_Sniper_Standard_F",
			"T1_Spotter_Standard_F",
			"T1_Pilot_Night_F",
			"T1_Pilot_Camo_F",
			"T1_Pilot_BlackCamo_F",
			"T1_Pilot_Black_F",
			"T1_Pilot_Standard_F",
			"T1_Diver_AR_Standard_F",
			"T1_Diver_AT_Standard_F",
			"T1_Diver_FTL_Standard_F",
			"T1_Diver_Medic_Standard_F",
			"T1_Diver_Explosive_Standard_F",
			"T1_Diver_Marksman_SOS_Standard_F",
			"T1_Diver_Soldier_F",
			"T1_SF_AR_Standard_F",
			"T1_SF_AT_Standard_F",
			"T1_SF_FTL_Standard_F",
			"T1_SF_Medic_Standard_F",
			"T1_SF_Explosive_Standard_F",
			"T1_SF_Marksman_SOS_Standard_F",
			"T1_Soldier_F",
			"T1_Instructor_Polo_Orange_F",
			"T1_Instructor_Polo_Black_F",
			"T1_Kitbag_camo_medic_sf",
			"T1_Kitbag_camo_Section_AT",
			"T1_section_ammobox",
			"T1_support_ammobox",
			"T1_eod_ammobox"
		};
		weapons[] = {
			"T1_V_PlateCarrier2_Standard",
			"T1_U_Pilot_Night",
			"T1_U_Pilot_Camo",
			"T1_U_Pilot_BlackCamo",
			"T1_U_Pilot_Black",
			"T1_U_Pilot_Standard",
			"T1_U_Instructor_Polo_Orange",
			"T1_U_Instructor_Polo_Black",
			"T1_U_Sniper_Standard",
			"T1_U_Diver_Standard",
			"T1_U_Squad_Standard",
			"T1_weap_rifle_gl",
			"T1_weap_rifle_gl_sd",
			"T1_weap_rifle",
			"T1_weap_rifle_sd",
			"T1_weap_mmg",
			"T1_weap_lmg",
			"T1_weap_mmg_sf",
			"T1_weap_sierra",
			"T1_weap_marksman_sf",
			"T1_weap_sidearm_m",
			"T1_weap_sidearm_l",
			"T1_weap_marksman"
		};
		requiredVersion = 0.1;
		requiredAddons[] = {			
			"45KO_SO_weapons_ABR",
			"iansky_opt",
			"ace_flashsuppressors",
			"t1_law",
			"ace_medical",
			"rhsusf_c_weapons",
			"t1_556_sd_ammo",
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
	class T1_Kitbag_camo: B_Kitbag_Base
	{
		scope = 2;
		displayName = "Kitbag (T1 Camo)";
		hiddenSelectionsTextures[] = {"\t1_units\data\backpacks\t1_kitbag_camo_co.paa"};
		class TransportItems
		{
			class Bandage1
			{
				count = 12;
				name = "ACE_packingBandage";
			};
			class Bandage2
			{
				count = 4;
				name = "ACE_elasticBandage";
			};
			class Tourniquet
			{
				count = 1;
				name = "ACE_tourniquet";
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
			class _xx_rhs_goggles_clear
			{
				count = 1;
				name = "rhs_goggles_clear";
			};
		};
	};
	class T1_Kitbag_camo_Lead : T1_Kitbag_camo
	{
		scope = 2;
		displayName = "Kitbag Lead (T1 Camo)";
		hiddenSelectionsTextures[] = {"\t1_units\data\backpacks\t1_kitbag_camo_co.paa"};
		class TransportItems
		{
			class Bandage1
			{
				count = 12;
				name = "ACE_packingBandage";
			};
			class Bandage2
			{
				count = 4;
				name = "ACE_elasticBandage";
			};
			class Tourniquet
			{
				count = 1;
				name = "ACE_tourniquet";
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
			class _xx_rhs_goggles_clear
			{
				count = 1;
				name = "rhs_goggles_clear";
			};			
		};
	};
	class T1_Kitbag_camo_Lead_Plt: T1_Kitbag_camo_Lead
	{
		scope = 2;
		displayName = "Kitbag PltLead (T1 Camo)";
		hiddenSelectionsTextures[] = {"\t1_units\data\backpacks\t1_kitbag_camo_co.paa"};
		class TransportItems
		{
			class Bandage1
			{
				count = 12;
				name = "ACE_packingBandage";
			};
			class Bandage2
			{
				count = 4;
				name = "ACE_elasticBandage";
			};
			class Tourniquet
			{
				count = 1;
				name = "ACE_tourniquet";
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
			class _xx_rhs_goggles_clear
			{
				count = 1;
				name = "rhs_goggles_clear";
			};
			class lr_radio {
				count = 1;
				name = "ACRE_PRC117F";
			};
		};
	};
	class T1_Kitbag_camo_Lead_SF: B_Kitbag_Base
	{
		scope = 2;
		displayName = "Kitbag Lead (T1 Camo)";
		hiddenSelectionsTextures[] = {"\t1_units\data\backpacks\t1_kitbag_camo_co.paa"};
		class TransportMagazines
		{			
			class _xx_rhsusf_100Rnd_762x51_m62_tracer
			{
				count = 1;
				magazine = t1_mag_mmg_sf;
			};
		};
		class TransportItems
		{
			class Bandage1
			{
				count = 12;
				name = "ACE_packingBandage";
			};
			class Bandage2
			{
				count = 4;
				name = "ACE_elasticBandage";
			};
			class Tourniquet
			{
				count = 1;
				name = "ACE_tourniquet";
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
			class _xx_rhs_goggles_clear
			{
				count = 1;
				name = "rhs_goggles_clear";
			};	
			class _xx_ACE_Vector
			{
				count = 1;
				name = "ACE_Vector";
			};
		};
	};
	class T1_Kitbag_camo_Lead_Trainer: B_Kitbag_Base
	{
		scope = 2;
		displayName = "Kitbag Lead (T1 Camo)";
		hiddenSelectionsTextures[] = {"\t1_units\data\backpacks\t1_kitbag_camo_co.paa"};
		class TransportItems
		{
			class Bandage1
			{
				count = 12;
				name = "ACE_packingBandage";
			};
			class Bandage2
			{
				count = 4;
				name = "ACE_elasticBandage";
			};
			class Tourniquet
			{
				count = 1;
				name = "ACE_tourniquet";
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
			class _xx_rhs_goggles_clear
			{
				count = 1;
				name = "rhs_goggles_clear";
			};			
			class _xx_ACE_Kestrel
			{
				count = 1;
				name = "ACE_Kestrel";
			};
		};
	};
	class T1_Kitbag_camo_Sniper: B_Kitbag_Base
	{
		scope = 2;
		displayName = "Kitbag Lead (T1 Camo)";
		hiddenSelectionsTextures[] = {"\t1_units\data\backpacks\t1_kitbag_camo_co.paa"};
		class TransportMagazines
		{			
			class _xx_7Rnd_408_Mag
			{
				count = 5;
				magazine = t1_mag_sierra;
			};
		};
		class TransportItems
		{
			class Bandage1
			{
				count = 12;
				name = "ACE_packingBandage";
			};
			class Bandage2
			{
				count = 4;
				name = "ACE_elasticBandage";
			};
			class Tourniquet
			{
				count = 1;
				name = "ACE_tourniquet";
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
			class _xx_rhs_goggles_clear
			{
				count = 1;
				name = "rhs_goggles_clear";
			};
			class _xx_ACE_Vector
			{
				count = 1;
				name = "ACE_Vector";
			};
		};
	};
	class T1_Kitbag_camo_Scout_Lead: B_Kitbag_Base
	{
		scope = 2;
		displayName = "Kitbag Lead (T1 Camo)";
		hiddenSelectionsTextures[] = {"\t1_units\data\backpacks\t1_kitbag_camo_co.paa"};		
		class TransportItems
		{
			class Bandage1
			{
				count = 12;
				name = "ACE_packingBandage";
			};
			class Bandage2
			{
				count = 4;
				name = "ACE_elasticBandage";
			};
			class Tourniquet
			{
				count = 1;
				name = "ACE_tourniquet";
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
			class _xx_rhs_goggles_clear
			{
				count = 1;
				name = "rhs_goggles_clear";
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
			class lr_radio
			{
				count = 1;
				name = "ACRE_PRC117F";
			};
		};
	};
	class T1_Kitbag_camo_SF_Marksman: B_Kitbag_Base
	{
		scope = 2;
		displayName = "Kitbag SF Marksman (T1 Camo)";
		hiddenSelectionsTextures[] = {"\t1_units\data\backpacks\t1_kitbag_camo_co.paa"};
		class TransportItems
		{
			class Bandage1
			{
				count = 12;
				name = "ACE_packingBandage";
			};
			class Bandage2
			{
				count = 4;
				name = "ACE_elasticBandage";
			};
			class Tourniquet
			{
				count = 1;
				name = "ACE_tourniquet";
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
			class _xx_rhs_goggles_clear
			{
				count = 1;
				name = "rhs_goggles_clear";
			};
			class _xx_ACE_Kestrel
			{
				count = 1;
				name = "ACE_Kestrel";
			};
		};
	};
	class T1_Kitbag_camo_medic: B_Kitbag_Base
	{
		scope = 2;
		displayName = "Kitbag Medic (T1 Camo)";
		hiddenSelectionsTextures[] = {"\t1_units\data\backpacks\t1_kitbag_camo_medic_co.paa"};
		class TransportItems
		{
			class Bandage1
			{
				count = 80;
				name = "ACE_packingBandage";
			};
			class Bandage2
			{
				count = 30;
				name = "ACE_elasticBandage";
			};
			class _xx_ACE_morphine
			{
				count = 26;
				name = "ACE_morphine";
			};
			class _xx_ACE_epinephrine
			{
				count = 8;
				name = "ACE_epinephrine";
			};
			class IVFluid
			{
				count = 8;
				name = "ACE_bloodIV_500";
			};
			class MagicalAidKit
			{
				count = 1;
				name = "ACE_personalAidKit";
			};
			class Tourniquet
			{
				count = 8;
				name = "ACE_tourniquet";
			};
		};
	};
	class T1_Kitbag_camo_medic_sf: B_Kitbag_Base
	{
		scope = 2;
		displayName = "Kitbag Medic (T1 Camo)";
		hiddenSelectionsTextures[] = {"\t1_units\data\backpacks\t1_kitbag_camo_medic_co.paa"};
		class TransportMagazines
		{			
			class _xx_rhsusf_100Rnd_762x51_m62_tracer
			{
				count = 1;
				magazine = t1_mag_mmg_sf;
			};
		};
		class TransportItems
		{
			class Bandage1
			{
				count = 40;
				name = "ACE_packingBandage";
			};
			class Bandage2
			{
				count = 12;
				name = "ACE_elasticBandage";
			};
			class _xx_ACE_morphine
			{
				count = 20;
				name = "ACE_morphine";
			};
			class _xx_ACE_epinephrine
			{
				count = 4;
				name = "ACE_epinephrine";
			};
			class _xx_ACE_bloodIV_250
			{
				count = 4;
				name = "ACE_bloodIV_500";
			};
			class MagicalAidKit
			{
				count = 1;
				name = "ACE_personalAidKit";
			};
			class Tourniquet
			{
				count = 4;
				name = "ACE_tourniquet";
			};
		};
	};
	class T1_Kitbag_camo_cls: T1_Kitbag_camo_medic
	{
		scope = 1;
		class TransportItems
		{
			class Bandage1
			{
				count = 40;
				name = "ACE_packingBandage";
			};
			class Bandage2
			{
				count = 12;
				name = "ACE_elasticBandage";
			};
			class _xx_ACE_morphine
			{
				count = 20;
				name = "ACE_morphine";
			};
			class _xx_ACE_epinephrine
			{
				count = 4;
				name = "ACE_epinephrine";
			};
			class _xx_ACE_bloodIV_250
			{
				count = 4;
				name = "ACE_bloodIV_500";
			};
			class MagicalAidKit
			{
				count = 1;
				name = "ACE_personalAidKit";
			};
			class Tourniquet
			{
				count = 6;
				name = "ACE_tourniquet";
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
		scope = 2;
		displayName = "Carryall Backpack (T1 Camo)";
		hiddenSelectionsTextures[] = {"\t1_units\data\backpacks\t1_carryall_camo_co.paa"};
		class TransportItems
		{
			class Bandage1
			{
				count = 12;
				name = "ACE_packingBandage";
			};
			class Bandage2
			{
				count = 4;
				name = "ACE_elasticBandage";
			};
			class Tourniquet
			{
				count = 1;
				name = "ACE_tourniquet";
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
			class _xx_rhs_goggles_clear
			{
				count = 1;
				name = "rhs_goggles_clear";
			};
		};
	};
	class T1_Kitbag_camo_Repair: T1_Kitbag_camo
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
				count = 12;
				name = "ACE_packingBandage";
			};
			class Bandage2
			{
				count = 4;
				name = "ACE_elasticBandage";
			};
			class Tourniquet
			{
				count = 1;
				name = "ACE_tourniquet";
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
			class _xx_rhs_goggles_clear
			{
				count = 1;
				name = "rhs_goggles_clear";
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
				count = 12;
				name = "ACE_packingBandage";
			};
			class Bandage2
			{
				count = 4;
				name = "ACE_elasticBandage";
			};
			class Tourniquet
			{
				count = 1;
				name = "ACE_tourniquet";
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
			class _xx_rhs_goggles_clear
			{
				count = 1;
				name = "rhs_goggles_clear";
			};
		};
	};
	class T1_Carryall_camo_Exp_SF: T1_Carryall_camo
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_SatchelCarge_Remote_Mag
			{
				count = 1;
				magazine = "SatchelCharge_Remote_Mag";
			};
			class _xx_DemoCharge_Remote_Mag
			{
				count = 4;
				magazine = "DemoCharge_Remote_Mag";
			};
			class _xx_rhsusf_100Rnd_762x51_m62_tracer
			{
				count = 1;
				magazine = t1_mag_mmg_sf;
			};
		};
		class TransportItems
		{
			class _xx_MineDetector
			{
				count = 1;
				name = "MineDetector";
			};
			class Bandage1
			{
				count = 12;
				name = "ACE_packingBandage";
			};
			class Bandage2
			{
				count = 4;
				name = "ACE_elasticBandage";
			};
			class Tourniquet
			{
				count = 1;
				name = "ACE_tourniquet";
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
			class _xx_rhs_goggles_clear
			{
				count = 1;
				name = "rhs_goggles_clear";
			};
		};
	};
	class T1_Carryall_camo_PLEOD: T1_Carryall_camo
	{
		scope = 1;
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
				count = 12;
				name = "ACE_packingBandage";
			};
			class Bandage2
			{
				count = 4;
				name = "ACE_elasticBandage";
			};
			class Tourniquet
			{
				count = 1;
				name = "ACE_tourniquet";
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
			class _xx_rhs_goggles_clear
			{
				count = 1;
				name = "rhs_goggles_clear";
			};			
		};
	};
	class T1_Carryall_camo_PLSgt_JTAC: T1_Carryall_camo
	{
		scope = 1;
		class TransportMagazines
		{
		};
		class TransportItems
		{
			class Bandage1
			{
				count = 12;
				name = "ACE_packingBandage";
			};
			class Bandage2
			{
				count = 4;
				name = "ACE_elasticBandage";
			};
			class Tourniquet
			{
				count = 1;
				name = "ACE_tourniquet";
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
			class _xx_rhs_goggles_clear
			{
				count = 1;
				name = "rhs_goggles_clear";
			};
			class _xx_ACE_Vector
			{
				count = 1;
				name = "ACE_Vector";
			};
			class lr_radio {
				count = 1;
				name = "ACRE_PRC117F";
			};
		};
	};
	class T1_Kitbag_camo_AR: T1_Kitbag_camo
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_rhs_200rnd_556x45_M_SAW
			{
				count = 3;
				magazine = t1_mag_lmg;
			};
		};
		class TransportItems
		{			
			class Bandage1
			{
				count = 12;
				name = "ACE_packingBandage";
			};
			class Bandage2
			{
				count = 4;
				name = "ACE_elasticBandage";
			};
			class Tourniquet
			{
				count = 1;
				name = "ACE_tourniquet";
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
			class _xx_rhs_goggles_clear
			{
				count = 1;
				name = "rhs_goggles_clear";
			};
		};
	};
	class T1_Kitbag_camo_AAR: T1_Kitbag_camo
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_rhs_200rnd_556x45_M_SAW
			{
				count = 3;
				magazine = t1_mag_lmg;
			};
		};
		class TransportItems
		{
			class _xx_ACE_SpareBarrel
			{
				count = 1;
				name = "ACE_SpareBarrel";
			};
			class Bandage1
			{
				count = 12;
				name = "ACE_packingBandage";
			};
			class Bandage2
			{
				count = 4;
				name = "ACE_elasticBandage";
			};
			class Tourniquet
			{
				count = 1;
				name = "ACE_tourniquet";
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
			class _xx_rhs_goggles_clear
			{
				count = 1;
				name = "rhs_goggles_clear";
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
				count = 12;
				name = "ACE_packingBandage";
			};
			class Bandage2
			{
				count = 4;
				name = "ACE_elasticBandage";
			};
			class Tourniquet
			{
				count = 1;
				name = "ACE_tourniquet";
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
			class _xx_rhs_goggles_clear
			{
				count = 1;
				name = "rhs_goggles_clear";
			};
		};
	};
	class T1_Kitbag_camo_AT: T1_Kitbag_camo
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_Titan_AT
			{
				magazine = "Titan_AT";
				count = 2;
			};
		};
		class TransportItems
		{
			class Bandage1
			{
				count = 12;
				name = "ACE_packingBandage";
			};
			class Bandage2
			{
				count = 4;
				name = "ACE_elasticBandage";
			};
			class Tourniquet
			{
				count = 1;
				name = "ACE_tourniquet";
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
			class _xx_rhs_goggles_clear
			{
				count = 1;
				name = "rhs_goggles_clear";
			};
		};
	};
	class T1_Kitbag_camo_Medium_AT: T1_Kitbag_camo
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_tf47_m3maaws_HE
			{
				magazine = "tf47_m3maaws_HE";
				count = 2;
			};
			class _xx_tf47_m3maaws_HEAT
			{
				magazine = "tf47_m3maaws_HEAT";
				count = 1;
			};
		};
		class TransportItems
		{
			class Bandage1
			{
				count = 12;
				name = "ACE_packingBandage";
			};
			class Bandage2
			{
				count = 4;
				name = "ACE_elasticBandage";
			};
			class Tourniquet
			{
				count = 1;
				name = "ACE_tourniquet";
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
			class _xx_rhs_goggles_clear
			{
				count = 1;
				name = "rhs_goggles_clear";
			};
		};
	};
	class T1_Kitbag_camo_AA: T1_Kitbag_camo
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_Titan_AA
			{
				magazine = "Titan_AA";
				count = 2;
			};
		};
		class TransportItems
		{
			class Bandage1
			{
				count = 12;
				name = "ACE_packingBandage";
			};
			class Bandage2
			{
				count = 4;
				name = "ACE_elasticBandage";
			};
			class Tourniquet
			{
				count = 1;
				name = "ACE_tourniquet";
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
			class _xx_rhs_goggles_clear
			{
				count = 1;
				name = "rhs_goggles_clear";
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
		class TransportItems
		{
			class _xx_rhs_goggles_clear
			{
				count = 1;
				name = "rhs_goggles_clear";
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
				count = 3;
			};
		};
		class TransportItems
		{
			class _xx_rhs_goggles_clear
			{
				count = 1;
				name = "rhs_goggles_clear";
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
		class TransportItems
		{
			class _xx_rhs_goggles_clear
			{
				count = 1;
				name = "rhs_goggles_clear";
			};
		};
	};
	class T1_Kitbag_camo_MG: T1_Kitbag_camo
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_rhsusf_100Rnd_762x51_m62_tracer
			{
				magazine = t1_mag_mmg;
				count = 3;
			};
		};
		class TransportItems
		{
			class Bandage1
			{
				count = 12;
				name = "ACE_packingBandage";
			};
			class Bandage2
			{
				count = 4;
				name = "ACE_elasticBandage";
			};
			class Tourniquet
			{
				count = 1;
				name = "ACE_tourniquet";
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
			class _xx_rhs_goggles_clear
			{
				count = 1;
				name = "rhs_goggles_clear";
			};
		};
	};
	class T1_Carryall_camo_AMG: T1_Carryall_camo
	{
		scope = 1;
		maximumLoad = 600;
		class TransportMagazines
		{
			class _xx_rhsusf_100Rnd_762x51_m62_tracer
			{
				count = 5;
				magazine = t1_mag_mmg;
			};
		};
		class TransportItems
		{
			class Bandage1
			{
				count = 12;
				name = "ACE_packingBandage";
			};
			class Bandage2
			{
				count = 4;
				name = "ACE_elasticBandage";
			};
			class Tourniquet
			{
				count = 1;
				name = "ACE_tourniquet";
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
			class _xx_rhs_goggles_clear
			{
				count = 1;
				name = "rhs_goggles_clear";
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
				count = 12;
				name = "ACE_packingBandage";
			};
			class Bandage2
			{
				count = 4;
				name = "ACE_elasticBandage";
			};
			class Tourniquet
			{
				count = 1;
				name = "ACE_tourniquet";
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
			class _xx_rhs_goggles_clear
			{
				count = 1;
				name = "rhs_goggles_clear";
			};
		};		
	};
	class B_RangeMaster_F;
	class T1_Instructor_Polo_Black_F: B_RangeMaster_F
	{
		faction = "T1_Units";
		vehicleClass = "Special";
		displayName = "T1 Instructor";
		uniformClass = "T1_U_Instructor_Polo_Black";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\t1_units\data\units\instructor\t1_poloinstructor_b_co.paa"};
		weapons[] = {
			"T1_weap_rifle",
			"T1_weap_sidearm_l",
			"Throw",
			"Put",
			"ACE_Vector"
		};
		respawnWeapons[] = {
			"T1_weap_rifle",
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
			t1_mag_sidearm_l,
			t1_mag_sidearm_l,
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
			t1_mag_rifle,
			t1_mag_sidearm_l,
			t1_mag_sidearm_l,
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen"
		};
		linkedItems[] = {
			"H_Cap_headphones",
			"V_Rangemaster_belt",
			"ACE_NVG_Gen4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[] = {
			"H_Cap_headphones",
			"V_Rangemaster_belt",
			"ACE_NVG_Gen4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		backpack = "T1_Kitbag_camo_Lead_Trainer";
		items[] = {"ACRE_PRC148",STDITEMS};
		respawnItems[] = {"ACRE_PRC148",STDITEMS};
		camouflage = 1.4;
	};
	class T1_Instructor_Polo_Orange_F: T1_Instructor_Polo_Black_F
	{
		displayName = "T1 Instructor";
		uniformClass = "T1_U_Instructor_Polo_Orange";
		hiddenSelectionsTextures[] = {"\t1_units\data\units\instructor\t1_poloinstructor_o_co.paa"};
	};
	class B_Soldier_F;
	class T1_Soldier_F: B_Soldier_F
	{
		scope = 1;
		uniformClass = "T1_U_Squad_Standard";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\t1_units\data\units\t1_clothing1_camo_co.paa"};
		camouflage = 1.4;
		items[] = {STDITEMS};
		respawnItems[] = {STDITEMS};
		linkedItems[] = {
			"T1_V_PlateCarrier2_Standard",
			"H_HelmetB_light",
			"ACE_NVG_Gen4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[] = {
			"T1_V_PlateCarrier2_Standard",
			"H_HelmetB_light",
			"ACE_NVG_Gen4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class T1_SF_Marksman_SOS_Standard_F: T1_Soldier_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "SF";
		displayName = "T1 SF Marksman";
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
			"ACE_M84",
			t1_mag_marksman,
			t1_mag_marksman,
			t1_mag_marksman,
			t1_mag_marksman,
			t1_mag_marksman,
			t1_mag_marksman,
			t1_mag_marksman,
			t1_mag_marksman,
			t1_mag_marksman,
			t1_mag_marksman,
			t1_mag_marksman_sd,
			t1_mag_marksman_sd,
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen"
		};
		respawnmagazines[] = {
			"ACE_M84",
			t1_mag_marksman,
			t1_mag_marksman,
			t1_mag_marksman,
			t1_mag_marksman,
			t1_mag_marksman,
			t1_mag_marksman,
			t1_mag_marksman,
			t1_mag_marksman,
			t1_mag_marksman,
			t1_mag_marksman,
			t1_mag_marksman_sd,
			t1_mag_marksman_sd,
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen"
		};
		backpack = "T1_Kitbag_camo_SF_Marksman";
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
	class T1_SF_Explosive_Standard_F: T1_Soldier_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "SF";
		displayName = "T1 SF Explosive Specialist";
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
		backpack = "T1_Carryall_camo_Exp_SF";
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
	class T1_SF_Medic_Standard_F: T1_Soldier_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "SF";
		displayName = "T1 SF Medic";
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
			t1_mag_sidearm_l,
			t1_mag_sidearm_l,
			t1_mag_rifle_sd,
			t1_mag_rifle_sd,
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
		backpack = "T1_Kitbag_camo_medic_sf";
		items[] = {STDITEMS};
		respawnItems[] = {STDITEMS};
		attendant = 1;
		camouflage = 1.0;
	};
	class T1_SF_FTL_Standard_F: T1_Soldier_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "SF";
		displayName = "T1 SF FTL";
		weapons[] = {
			"T1_weap_rifle_gl_sd",
			"T1_weap_sidearm_l",
			"Throw",
			"Put",
			"ACE_MX2A",
			"HAFM_LAW"
		};
		respawnWeapons[] = {
			"T1_weap_rifle_gl_sd",
			"T1_weap_sidearm_l",
			"Throw",
			"Put",
			"ACE_MX2A",
			"HAFM_LAW"
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
		backpack = "T1_Kitbag_camo_Lead_SF";
		items[] = {
			"ACRE_PRC148",
			"ACE_IR_Strobe_Item",
			STDITEMS
		};
		respawnItems[] = {
			"ACRE_PRC148",
			"ACE_IR_Strobe_Item",
			STDITEMS
		};
		camouflage = 1.0;
	};
	class T1_SF_AT_Standard_F: T1_Soldier_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "SF";
		displayName = "T1 SF Radioman";
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
		items[] = {"ACRE_PRC148",STDITEMS};
		respawnItems[] = {"ACRE_PRC148",STDITEMS};
		icon = "iconManAT";
		backpack = "T1_Kitbag_camo_Lead_SF";
		camouflage = 1.0;
	};
	class T1_SF_AR_Standard_F: T1_Soldier_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "SF";
		displayName = "T1 SF AR";
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
			"ACE_NVG_Gen4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[] = {
			"V_RebreatherB",
			"G_Diving",
			"ACE_NVG_Gen4",
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
		displayName = "T1 Diver Marksman";
		weapons[] = {
			"T1_weap_marksman",
			"T1_weap_sidearm_m",
			"Throw",
			"Put",
			"ACE_Vector"
		};
		respawnWeapons[] = {
			"T1_weap_marksman",
			"T1_weap_sidearm_m",
			"Throw",
			"Put",
			"ACE_Vector"
		};
		magazines[] = {
			"ACE_M84",
			t1_mag_marksman,
			t1_mag_marksman,
			t1_mag_marksman,
			t1_mag_marksman,
			t1_mag_marksman,
			t1_mag_marksman,
			t1_mag_marksman,
			t1_mag_marksman,
			t1_mag_marksman,
			t1_mag_sidearm_m,
			t1_mag_sidearm_m,
			t1_mag_sidearm_m_sd,
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen"
		};
		respawnmagazines[] = {
			"ACE_M84",
			t1_mag_marksman,
			t1_mag_marksman,
			t1_mag_marksman,
			t1_mag_marksman,
			t1_mag_marksman,
			t1_mag_marksman,
			t1_mag_marksman,
			t1_mag_marksman,
			t1_mag_marksman,
			t1_mag_sidearm_m,
			t1_mag_sidearm_m,
			t1_mag_sidearm_m_sd,
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen"
		};
		backpack = "T1_Kitbag_camo_SF_Marksman";
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
		backpack = "T1_Carryall_camo_Exp_SF";
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
		backpack = "T1_Kitbag_camo_medic_sf";
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
			"ACE_Vector",
			"HAFM_LAW"
		};
		respawnWeapons[] = {
			"T1_weap_rifle_gl_sd",
			"T1_weap_sidearm_l",
			"Throw",
			"Put",
			"ACE_Vector",
			"HAFM_LAW"
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
		backpack = "T1_Kitbag_camo_Lead_SF";
		items[] = {
			"ACRE_PRC148",
			"ACE_IR_Strobe_Item",
			STDITEMS
		};
		respawnItems[] = {
			"ACRE_PRC148",
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
		items[] = {"ACRE_PRC148",STDITEMS};
		respawnItems[] = {"ACRE_PRC148",STDITEMS};
		icon = "iconManAT";
		backpack = "T1_Kitbag_camo_Lead_SF";
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
			"30Rnd_45ACP_Mag_SMG_01",
			"30Rnd_45ACP_Mag_SMG_01",
			"30Rnd_45ACP_Mag_SMG_01",
			t1_mag_sidearm_l,
			t1_mag_sidearm_l,
			"SmokeShell",
			"SmokeShellGreen"
		};
		linkedItems[] = {
			"H_PilotHelmetHeli_B",
			"ACE_NVG_Gen4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[] = {
			"H_PilotHelmetHeli_B",
			"ACE_NVG_Gen4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		// Todo: Evaluate wrt MEDICALITEMS mismatch
		items[] = {
			"ACRE_PRC148",
			STDITEMS,
			MEDICALITEMS
		};
		respawnItems[] = {
			"ACRE_PRC148",
			STDITEMS,
			MEDICALITEMS
		};
		camouflage = 1.4;
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
		faction = "T1_Units";
		vehicleClass = "Special";
		displayName = "T1 Spotter";
		uniformClass = "T1_FB_Ghillie_Camo";
		model = "\Ghillie\ghillie.p3d";
		modelSides[] = {3,1};
		uniformAccessories[] = {};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Ghillie\ghillie_wood_co.paa"};
		weapons[] = {
			"T1_weap_rifle_sd",
			"T1_weap_sidearm_l",
			"Throw",
			"Put",
			"Laserdesignator"
		};
		respawnWeapons[] = {
			"T1_weap_rifle_sd",
			"T1_weap_sidearm_l",
			"Throw",
			"Put",
			"Laserdesignator"
		};
		magazines[] = {
			"ACE_M84",
			"Laserbatteries",
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
			t1_mag_sidearm_l,
			t1_mag_sidearm_l,
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"APERSTripMine_Wire_Mag",
			"APERSTripMine_Wire_Mag"
		};
		respawnmagazines[] = {
			"ACE_M84",
			"Laserbatteries",
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
			t1_mag_sidearm_l,
			t1_mag_sidearm_l,
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"APERSTripMine_Wire_Mag",
			"APERSTripMine_Wire_Mag"
		};
		linkedItems[] = {
			"T1_V_PlateCarrier2_Standard",
			"ACE_NVG_Gen4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[] = {
			"T1_V_PlateCarrier2_Standard",
			"ACE_NVG_Gen4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		items[] = {
			"ACE_IR_Strobe_Item",
			"ACE_DefusalKit",
			"ACRE_PRC148",
			"ACE_ATragMX",
			"ACE_Kestrel4500",
			"ACE_RangeCard",
			STDITEMS
		};
		respawnItems[] = {
			"ACE_IR_Strobe_Item",
			"ACE_DefusalKit",
			"ACRE_PRC148",
			"ACE_ATragMX",
			"ACE_Kestrel4500",
			"ACE_RangeCard",
			STDITEMS
		};
		backpack = "T1_Kitbag_camo_Sniper";
		camouflage = 0.3;
		glassesEnabled = 0;
	};
	class B_Sniper_F;
	class T1_Sniper_Standard_F: B_Sniper_F
	{
		faction = "T1_Units";
		vehicleClass = "Special";
		displayName = "T1 Sniper";
		uniformClass = "T1_FB_Ghillie_Camo";
		model = "\Ghillie\ghillie.p3d";
		modelSides[] = {3,1};
		uniformAccessories[] = {};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Ghillie\ghillie_wood_co.paa"};
		weapons[] = {
			"T1_weap_sierra",
			"T1_weap_sidearm_m",
			"Throw",
			"Put",
			"Rangefinder"
		};
		respawnWeapons[] = {
			"T1_weap_sierra",
			"T1_weap_sidearm_m",
			"Throw",
			"Put",
			"Rangefinder"
		};
		magazines[] = {
			"HandGrenade",
			"HandGrenade",
			"ACE_M84",
			t1_mag_sierra,
			t1_mag_sierra,
			t1_mag_sierra,
			t1_mag_sierra,
			t1_mag_sierra,
			t1_mag_sierra,
			t1_mag_sidearm_m,
			t1_mag_sidearm_m,
			t1_mag_sidearm_m,
			t1_mag_sidearm_m_sd,
			t1_mag_sidearm_m_sd,
			"SmokeShell"
		};
		respawnmagazines[] = {
			"HandGrenade",
			"HandGrenade",
			"ACE_M84",
			t1_mag_sierra,
			t1_mag_sierra,
			t1_mag_sierra,
			t1_mag_sierra,
			t1_mag_sierra,
			t1_mag_sierra,
			t1_mag_sidearm_m,
			t1_mag_sidearm_m,
			t1_mag_sidearm_m,
			t1_mag_sidearm_m_sd,
			t1_mag_sidearm_m_sd,
			"SmokeShell"
		};
		linkedItems[] = {
			"T1_V_PlateCarrier2_Standard",
			"ACE_NVG_Gen4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[] = {
			"T1_V_PlateCarrier2_Standard",
			"ACE_NVG_Gen4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		items[] = {
			"ACE_IR_Strobe_Item",
			"ACE_DefusalKit",
			"ACRE_PRC148",
			STDITEMS,
			"ACE_ATragMX",
			"ACE_Kestrel4500",
			"ACE_RangeCard"
		};
		respawnItems[] = {
			"ACE_IR_Strobe_Item",
			"ACE_DefusalKit",
			"ACRE_PRC148",
			STDITEMS,
			"ACE_ATragMX",
			"ACE_Kestrel4500",
			"ACE_RangeCard"
		};
		backpack = "T1_Kitbag_camo_Lead";
		camouflage = 0.3;
		glassesEnabled = 0;
	};
	class T1_Specialist_AT_Standard_F: T1_Soldier_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "Special";
		displayName = "T1 AT Specialist";
		weapons[] = {
			"T1_weap_rifle",
			"Throw",
			"Put",
			"ACE_Vector",
			"launch_Titan_short_F"
		};
		respawnWeapons[] = {
			"T1_weap_rifle",
			"Throw",
			"Put",
			"ACE_Vector",
			"launch_Titan_short_F"
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
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Titan_AT"
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
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Titan_AT"
		};
		items[] = {STDITEMS,"ACRE_PRC148"};
		respawnItems[] = {STDITEMS,"ACRE_PRC148"};
		icon = "iconManAT";
		backpack = "T1_Kitbag_camo_AT";
	};
	class T1_Specialist_AAT_Standard_F: T1_Soldier_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "Special";
		displayName = "T1 AAT Specialist";
		weapons[] = {
			"T1_weap_rifle",
			"Throw",
			"Put",
			"ACE_Vector"
		};
		respawnWeapons[] = {
			"T1_weap_rifle",
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
			t1_mag_rifle,
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen"
		};
		items[] = {
			"ACRE_PRC148",
			STDITEMS,
			MEDICALITEMS
		};
		respawnItems[] = {
			"ACRE_PRC148",
			STDITEMS,
			MEDICALITEMS
		};
		backpack = "T1_Carryall_camo_AAT";
	};
	class T1_Specialist_Medium_AT_Standard_F: T1_Soldier_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "Special";
		displayName = "T1 Medium AT Specialist";
		weapons[] = {
			"T1_weap_rifle",
			"Throw",
			"Put",
			"ACE_Vector",
			"tf47_m3maaws_optic"
		};
		respawnWeapons[] = {
			"T1_weap_rifle",
			"Throw",
			"Put",
			"ACE_Vector",
			"tf47_m3maaws_optic"
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
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"tf47_m3maaws_HEAT"
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
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"tf47_m3maaws_HEAT"
		};
		items[] = {STDITEMS,"ACRE_PRC148"};
		respawnItems[] = {STDITEMS,"ACRE_PRC148"};
		icon = "iconManAT";
		backpack = "T1_Kitbag_camo_Medium_AT";
	};
	class T1_Specialist_Medium_AAT_Standard_F: T1_Soldier_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "Special";
		displayName = "T1 Medium AAT Specialist";
		weapons[] = {
			"T1_weap_rifle",
			"Throw",
			"Put",
			"ACE_Vector"
		};
		respawnWeapons[] = {
			"T1_weap_rifle",
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
			t1_mag_rifle,
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen"
		};
		items[] = {
			"ACRE_PRC148",
			STDITEMS,
			MEDICALITEMS
		};
		respawnItems[] = {
			"ACRE_PRC148",
			STDITEMS,
			MEDICALITEMS
		};
		backpack = "T1_Carryall_camo_Medium_AAT";
	};
	class T1_Specialist_AA_Standard_F: T1_Soldier_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "Special";
		displayName = "T1 AA Specialist";
		weapons[] = {
			"T1_weap_rifle",
			"Throw",
			"Put",
			"ACE_Vector",
			"launch_Titan_F"
		};
		respawnWeapons[] = {
			"T1_weap_rifle",
			"Throw",
			"Put",
			"ACE_Vector",
			"launch_Titan_F"
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
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Titan_AA"
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
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Titan_AA"
		};
		items[] = {STDITEMS,"ACRE_PRC148"};
		respawnItems[] = {STDITEMS,"ACRE_PRC148"};
		icon = "iconManAT";
		backpack = "T1_Kitbag_camo_AA";
	};
	class T1_Specialist_AAA_Standard_F: T1_Soldier_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "Special";
		displayName = "T1 AAA Specialist";
		weapons[] = {
			"T1_weap_rifle",
			"Throw",
			"Put",
			"ACE_Vector",
			"launch_Titan_F"
		};
		respawnWeapons[] = {
			"T1_weap_rifle",
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
			t1_mag_rifle,
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen"
		};
		items[] = {
			"ACRE_PRC148",
			STDITEMS,
			MEDICALITEMS
		};
		respawnItems[] = {
			"ACRE_PRC148",
			STDITEMS,
			MEDICALITEMS
		};
		backpack = "T1_Carryall_camo_AAA";
	};
	class T1_Specialist_MG_Standard_F: T1_Soldier_F
	{
		scope = 2;
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
			"ACE_M84",
			t1_mag_mmg,
			t1_mag_mmg,
			"HandGrenade",
			"SmokeShell"
		};
		respawnmagazines[] = {
			"ACE_M84",
			t1_mag_mmg,
			t1_mag_mmg,
			"HandGrenade",
			"SmokeShell"
		};
		icon = "iconManMG";
		backpack = "T1_Kitbag_camo_MG";
		items[] = {
			"ACRE_PRC148",
			"ACE_IR_Strobe_Item",
			STDITEMS,
			"ACE_SpareBarrel"
		};
		respawnItems[] = {
			"ACRE_PRC148",
			"ACE_IR_Strobe_Item",
			STDITEMS,
			"ACE_SpareBarrel"
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
			"ACRE_PRC148",
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
		faction = "T1_Units";
		vehicleClass = "Special";
		displayName = "T1 AMG Specialist";
		weapons[] = {
			"T1_weap_rifle",
			"Throw",
			"Put",
			"ACE_Vector"
		};
		respawnWeapons[] = {
			"T1_weap_rifle",
			"Throw",
			"Put",
			"ACE_Vector"
		};
		magazines[] = {
			"HandGrenade",
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
			"SmokeShell",
			"SmokeShellGreen",
			t1_mag_mmg
		};
		respawnmagazines[] = {
			"HandGrenade",
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
			"SmokeShell",
			"SmokeShellGreen",
			t1_mag_mmg
		};
		items[] = {
			"ACE_IR_Strobe_Item",
			"ACRE_PRC148",
			STDITEMS
		};
		respawnItems[] = {
			"ACE_IR_Strobe_Item",
			"ACRE_PRC148",
			STDITEMS
		};
		backpack = "T1_Carryall_camo_AMG";
	};
	class T1_Scout_TL_Standard_F: T1_Soldier_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "Special";
		displayName = "T1 Scout TL";
		weapons[] = {
			"T1_weap_rifle_gl_sd",
			"rhs_weap_tr8",
			"Throw",
			"Put",
			"ACE_MX2A"
		};
		respawnWeapons[] = {
			"T1_weap_rifle_gl_sd",
			"rhs_weap_tr8",
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
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_rifle_sd,
			t1_mag_rifle_sd,
			"Chemlight_blue",
			"ACE_HuntIR_M203",
			"ACE_HuntIR_M203",
			"ACE_HuntIR_M203",
			"ACE_HuntIR_M203",
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
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_rifle_sd,
			t1_mag_rifle_sd,
			"Chemlight_blue",
			"ACE_HuntIR_M203",
			"ACE_HuntIR_M203",
			"ACE_HuntIR_M203",
			"ACE_HuntIR_M203",
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
			"H_Booniehat_mcamo",
			"ACE_NVG_Gen4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"B_UavTerminal"
		};
		respawnLinkedItems[] = {
			"V_Chestrig_oli",
			"H_Booniehat_mcamo",
			"ACE_NVG_Gen4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"B_UavTerminal"
		};
		backpack = "T1_Kitbag_camo_Scout_Lead";
		items[] = {
			"ACE_IR_Strobe_Item",
			"ACE_HuntIR_monitor",
			"ACE_RangeCard",
			STDITEMS
		};
		respawnItems[] = {
			"ACE_IR_Strobe_Item",
			"ACE_HuntIR_monitor",
			"ACE_RangeCard",
			STDITEMS
		};
		camouflage = 0.6;
	};
	class T1_Scout_Standard_F: T1_Soldier_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "Special";
		displayName = "T1 Scout [MM DLC]";
		weapons[] = {
			"T1_weap_marksman",
			"T1_weap_sidearm_l",
			"Throw",
			"Put",
			"Laserdesignator"
		};
		respawnWeapons[] = {
			"T1_weap_marksman",
			"T1_weap_sidearm_l",
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
			t1_mag_marksman,
			t1_mag_marksman,
			t1_mag_marksman,
			t1_mag_marksman,
			t1_mag_marksman,
			t1_mag_marksman,
			t1_mag_marksman_sd,
			t1_mag_marksman_sd,
			t1_mag_sidearm_l,
			t1_mag_sidearm_l
		};
		respawnmagazines[] = {
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Laserbatteries",
			"Chemlight_blue",
			t1_mag_marksman,
			t1_mag_marksman,
			t1_mag_marksman,
			t1_mag_marksman,
			t1_mag_marksman,
			t1_mag_marksman,
			t1_mag_marksman_sd,
			t1_mag_marksman_sd,
			t1_mag_sidearm_l,
			t1_mag_sidearm_l
		};
		linkedItems[] = {
			"V_Chestrig_oli",
			"H_Booniehat_mcamo",
			"ACE_NVG_Gen4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"B_UavTerminal"
		};
		respawnLinkedItems[] = {
			"V_Chestrig_oli",
			"H_Booniehat_mcamo",
			"ACE_NVG_Gen4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"B_UavTerminal"
		};
		backpack = "B_Static_Designator_01_weapon_F";
		items[] = {
			"ACE_IR_Strobe_Item",
			"ACRE_PRC148",
			"ACE_Kestrel4500",
			"ACE_RangeCard",
			STDITEMS,
			MEDICALITEMS,
			"rhs_googles_clear"
		};
		respawnitems[] = {
			"ACE_IR_Strobe_Item",
			"ACRE_PRC148",
			"ACE_Kestrel4500",
			"ACE_RangeCard",
			STDITEMS,
			MEDICALITEMS,
			"rhs_googles_clear"
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
			"T1_weap_rifle",
			"T1_weap_sidearm_l",
			"Throw",
			"Put",
			"ACE_Vector"
		};
		respawnWeapons[] = {
			"T1_weap_rifle",
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
			t1_mag_sidearm_l,
			t1_mag_sidearm_l,
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
			t1_mag_sidearm_l,
			t1_mag_sidearm_l,
			"SmokeShell",
			"SmokeShellGreen"
		};
		linkedItems[] = {
			"V_BandollierB_rgr",
			"H_HelmetCrew_B",
			"ACE_NVG_Gen4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[] = {
			"V_BandollierB_rgr",
			"H_HelmetCrew_B",
			"ACE_NVG_Gen4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		items[] = {
			"rhs_goggles_clear",
			"ACRE_PRC148",
			STDITEMS,
			MEDICALITEMS
		};
		respawnItems[] = {
			"rhs_goggles_clear",
			"ACRE_PRC148",
			STDITEMS,
			MEDICALITEMS
		};
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
			"T1_weap_rifle",
			"T1_weap_sidearm_l",
			"Throw",
			"Put",
			"ACE_Vector"
		};
		respawnWeapons[] = {
			"T1_weap_rifle",
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
			t1_mag_sidearm_l,
			t1_mag_sidearm_l,
			"SmokeShell",
			"SmokeShellGreen",
			"B_IR_Grenade",
			"B_IR_Grenade"
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
			"ACE_NVG_Gen4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[] = {
			"V_BandollierB_rgr",
			"H_HelmetCrew_B",
			"ACE_NVG_Gen4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		items[] = {
			"rhs_goggles_clear",
			"ACRE_PRC148",
			STDITEMS,
			MEDICALITEMS
		};
		respawnItems[] = {
			"rhs_goggles_clear",
			"ACRE_PRC148",
			STDITEMS,
			MEDICALITEMS
		};
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
			"T1_weap_rifle",
			"T1_weap_sidearm_l",
			"Throw",
			"Put",
			"ACE_Vector"
		};
		respawnWeapons[] = {
			"T1_weap_rifle",
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
			t1_mag_sidearm_l,
			t1_mag_sidearm_l,
			"SmokeShell",
			"SmokeShellGreen",
			"B_IR_Grenade",
			"B_IR_Grenade"
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
			"ACE_NVG_Gen4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[] = {
			"V_BandollierB_rgr",
			"H_HelmetCrew_B",
			"ACE_NVG_Gen4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		items[] = {"ACRE_PRC148",STDITEMS};
		respawnItems[] = {"ACRE_PRC148",STDITEMS};
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
			"T1_weap_rifle",
			"T1_weap_sidearm_l",
			"Throw",
			"Put",
			"ACE_Vector"
		};
		respawnWeapons[] = {
			"T1_weap_rifle",
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
			t1_mag_sidearm_l,
			t1_mag_sidearm_l,
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
			t1_mag_sidearm_l,
			t1_mag_sidearm_l,
			"SmokeShell",
			"SmokeShellGreen"
		};
		linkedItems[] = {
			"V_BandollierB_rgr",
			"H_HelmetCrew_B",
			"ACE_NVG_Gen4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[] = {
			"V_BandollierB_rgr",
			"H_HelmetCrew_B",
			"ACE_NVG_Gen4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		items[] = {"ACRE_PRC148",STDITEMS};
		respawnItems[] = {"ACRE_PRC148",STDITEMS};
		backpack = "T1_Kitbag_camo_Repair";
		engineer = 1;
		detectSkill = 40;
	};
	class T1_Sentinel_Driver_Standard_F: T1_Soldier_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "Special";
		displayName = "T1 Sentinel Driver";
		uniformClass = "T1_U_Pilot_Camo";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\t1_units\data\units\pilot\t1_pilot_camo_co.paa"};
		weapons[] = {
			"T1_weap_rifle",
			"T1_weap_sidearm_l",
			"Throw",
			"Put",
			"ACE_Vector"
		};
		respawnWeapons[] = {
			"T1_weap_rifle",
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
			t1_mag_sidearm_l,
			t1_mag_sidearm_l,
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
			t1_mag_sidearm_l,
			t1_mag_sidearm_l,
			"SmokeShell",
			"SmokeShellGreen"
		};
		linkedItems[] = {
			"V_BandollierB_rgr",
			"H_HelmetCrew_B",
			"ACE_NVG_Gen4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[] = {
			"V_BandollierB_rgr",
			"H_HelmetCrew_B",
			"ACE_NVG_Gen4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		items[] = {"ACRE_PRC148",STDITEMS};
		respawnItems[] = {"ACRE_PRC148",STDITEMS};
		backpack = "T1_Kitbag_camo_medic";
		attendant = 1;
	};
	class T1_Section_Lead_Standard_F: T1_Soldier_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "Section";
		displayName = "Section Leader";
		weapons[] = {
			"T1_weap_rifle_gl",
			"T1_weap_sidearm_l",
			"Throw",
			"Put",
			"ACE_Vector",
			"HAFM_LAW"
		};
		respawnWeapons[] = {
			"T1_weap_rifle_gl",
			"T1_weap_sidearm_l",
			"Throw",
			"Put",
			"ACE_Vector",
			"HAFM_LAW"
		};
		magazines[] = {			
			"ACE_M84",
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
			"SMA_30Rnd_556x45_M855A1_Tracer",
			"SMA_30Rnd_556x45_M855A1_Tracer",
			t1_mag_sidearm_l,
			t1_mag_sidearm_l,
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
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
			"SMA_30Rnd_556x45_M855A1_Tracer",
			"SMA_30Rnd_556x45_M855A1_Tracer",
			t1_mag_sidearm_l,
			t1_mag_sidearm_l,
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
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
			"ACRE_PRC148",
			STDITEMS
		};
		respawnItems[] = {
			"ACE_IR_Strobe_Item",
			"ACRE_PRC148",
			STDITEMS
		};
		icon = "iconManLeader";
		backpack = "T1_Kitbag_camo_Lead";
	};
	class T1_Section_Sgt_Standard_F: T1_Soldier_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "Section";
		displayName = "Section Sergeant";
		weapons[] = {
			"T1_weap_rifle_gl",
			"T1_weap_sidearm_l",
			"Throw",
			"Put",
			"ACE_Vector",
			"HAFM_LAW"
		};
		respawnWeapons[] = {			
			"T1_weap_rifle_gl",
			"T1_weap_sidearm_l",
			"Throw",
			"Put",
			"ACE_Vector",
			"HAFM_LAW"
		};
		magazines[] = {			
			"ACE_M84",
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
			"SMA_30Rnd_556x45_M855A1_Tracer",
			"SMA_30Rnd_556x45_M855A1_Tracer",
			t1_mag_sidearm_l,
			t1_mag_sidearm_l,
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
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
			"SMA_30Rnd_556x45_M855A1_Tracer",
			"SMA_30Rnd_556x45_M855A1_Tracer",
			t1_mag_sidearm_l,
			t1_mag_sidearm_l,
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
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
			"ACRE_PRC148",
			STDITEMS
		};
		respawnItems[] = {
			"ACE_IR_Strobe_Item",
			"ACRE_PRC148",
			STDITEMS
		};
		icon = "iconManLeader";
		backpack = "T1_Kitbag_camo_Lead";
	};
	class T1_Section_CLS_Standard_F: T1_Soldier_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "Section";
		displayName = "Combat Life Saver";
		weapons[] = {
			"T1_weap_rifle",
			"T1_weap_sidearm_l",
			"Throw",
			"Put",
			"ACE_Vector",
			"HAFM_LAW"
		};
		respawnWeapons[] = {
			"T1_weap_rifle",
			"T1_weap_sidearm_l",
			"Throw",
			"Put",
			"ACE_Vector",
			"HAFM_LAW"
		};
		magazines[] = {
			"HandGrenade",
			"HandGrenade",
			"ACE_M84",
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
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_sidearm_l,
			t1_mag_sidearm_l,
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
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_sidearm_l,
			t1_mag_sidearm_l,
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShellGreen",
			"SmokeShellGreen"
		};
		items[] = {STDITEMS};
		respawnItems[] = {STDITEMS};
		icon = "iconManMedic";
		backpack = "T1_Kitbag_camo_cls";
		attendant = 1;
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
			"ACE_M84",
			t1_mag_lmg,
			t1_mag_sidearm_l,
			t1_mag_sidearm_l,
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell"
		};
		respawnmagazines[] = {
			"ACE_M84",
			t1_mag_lmg,
			t1_mag_sidearm_l,
			t1_mag_sidearm_l,
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell"
		};
		icon = "iconManMG";
		backpack = "T1_Kitbag_camo_AR";
		items[] = {STDITEMS};
		respawnItems[] = {STDITEMS};
	};
	class T1_Section_AAR_Standard_F: T1_Soldier_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "Section";
		displayName = "Asst. Automatic Rifleman";
		weapons[] = {
			"T1_weap_rifle",
			"Throw",
			"Put",
			"ACE_Vector",
			"HAFM_LAW"
		};
		respawnWeapons[] = {
			"T1_weap_rifle",
			"Throw",
			"Put",
			"ACE_Vector",
			"HAFM_LAW"
		};
		magazines[] = {
			"ACE_M84",
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
			t1_mag_sidearm_l,
			t1_mag_sidearm_l,
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell"
		};
		respawnmagazines[] = {
			"ACE_M84",
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
			t1_mag_sidearm_l,
			t1_mag_sidearm_l,
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShell"
		};
		backpack = "T1_Kitbag_camo_AAR";
		items[] = {STDITEMS};
		respawnItems[] = {STDITEMS};
	};
	class T1_Section_AT_Standard_F: T1_Soldier_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "Section";
		displayName = "Rifleman AT";
		weapons[] = {
			"T1_weap_rifle",
			"T1_weap_sidearm_l",
			"Throw",
			"Put",
			"ACE_Vector",
			"tf47_at4_heat"
		};
		respawnWeapons[] = {
			"T1_weap_rifle",
			"T1_weap_sidearm_l",
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
			t1_mag_sidearm_l,
			t1_mag_sidearm_l
		};
		respawnmagazines[] = {
			"SmokeShell",
			"SmokeShell",
			"HandGrenade",
			"HandGrenade",
			"ACE_M84",
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
			t1_mag_sidearm_l,
			t1_mag_sidearm_l
		};
		items[] = {STDITEMS};
		respawnItems[] = {STDITEMS};
		icon = "iconManAT";
		backpack = "T1_Kitbag_camo_Section_AT";
	};
	class T1_Platoon_Lead_Standard_F: T1_Soldier_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "Platoon";
		displayName = "Platoon Lead";
		weapons[] = {
			"T1_weap_rifle",
			"T1_weap_sidearm_l",
			"Throw",
			"Put",
			"ACE_Vector"
		};
		respawnWeapons[] = {
			"T1_weap_rifle",
			"T1_weap_sidearm_l",
			"Throw",
			"Put",
			"ACE_Vector"
		};
		magazines[] = {
			"ACE_M84",			
			"HandGrenade",
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_rifle,
			"SMA_30Rnd_556x45_M855A1_Tracer",
			"SMA_30Rnd_556x45_M855A1_Tracer",
			"SMA_30Rnd_556x45_M855A1_Tracer",
			"SMA_30Rnd_556x45_M855A1_Tracer",
			t1_mag_sidearm_l,
			t1_mag_sidearm_l,
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
			"ACE_M84",			
			"HandGrenade",
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_rifle,
			"SMA_30Rnd_556x45_M855A1_Tracer",
			"SMA_30Rnd_556x45_M855A1_Tracer",
			"SMA_30Rnd_556x45_M855A1_Tracer",
			"SMA_30Rnd_556x45_M855A1_Tracer",
			t1_mag_sidearm_l,
			t1_mag_sidearm_l,
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
		backpack = "T1_Kitbag_camo_Lead_Plt";
	};
	class T1_Platoon_Medic_Standard_F: T1_Soldier_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "Platoon";
		displayName = "Medic";
		weapons[] = {
			"T1_weap_rifle",
			"T1_weap_sidearm_l",
			"Throw",
			"Put",
			"ACE_Vector"
		};
		respawnWeapons[] = {
			"T1_weap_rifle",
			"T1_weap_sidearm_l",
			"Throw",
			"Put",
			"ACE_Vector"
		};
		magazines[] = {
			"HandGrenade",
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
			t1_mag_sidearm_l,
			t1_mag_sidearm_l,
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
			"HandGrenade",
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
			t1_mag_sidearm_l,
			t1_mag_sidearm_l,
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
			"ACRE_PRC148",
			STDITEMS
		};
		respawnItems[] = {
			"ACRE_PRC148",
			STDITEMS
		};
		icon = "iconManMedic";
		backpack = "T1_Kitbag_camo_medic";
		attendant = 1;
	};
	class T1_Platoon_EOD_Standard_F: T1_Soldier_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "Platoon";
		displayName = "Platoon EOD";
		weapons[] = {
			"T1_weap_rifle",
			"T1_weap_sidearm_l",
			"Throw",
			"Put",
			"ACE_Vector"
		};
		respawnWeapons[] = {
			"T1_weap_rifle",
			"T1_weap_sidearm_l",
			"Throw",
			"Put",
			"ACE_Vector"
		};
		magazines[] = {
			"HandGrenade",
			"HandGrenade",
			"ACE_M84",			
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_sidearm_l,
			t1_mag_sidearm_l,
			"SmokeShell",
			"SmokeShellGreen",
			"SMA_30Rnd_556x45_M855A1_Tracer",
			"B_IR_Grenade"
		};
		respawnmagazines[] = {
			"HandGrenade",
			"HandGrenade",
			"ACE_M84",			
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_rifle,
			t1_mag_sidearm_l,
			t1_mag_sidearm_l,
			"SmokeShell",
			"SmokeShellGreen",
			"SMA_30Rnd_556x45_M855A1_Tracer",
			"B_IR_Grenade"
		};
		items[] = {
			"ACRE_PRC148",STDITEMS,"ACE_M26_Clacker",
			"ACE_DefusalKit"
		};
		respawnItems[] = {
			"ACRE_PRC148",STDITEMS,"ACE_M26_Clacker",
			"ACE_DefusalKit"
		};
		icon = "iconManExplosive";
		backpack = "T1_Carryall_camo_PLEOD";
		engineer = 1;
		canDeactivateMines = 1;
		detectSkill = 80;
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
			"Laserbatteries",
			"HandGrenade",
			t1_mag_rifle,
			t1_mag_rifle,
			"SMA_30Rnd_556x45_M855A1_Tracer",
			"SMA_30Rnd_556x45_M855A1_Tracer",
			"SMA_30Rnd_556x45_M855A1_Tracer",
			"SMA_30Rnd_556x45_M855A1_Tracer",
			"SMA_30Rnd_556x45_M855A1_Tracer",
			t1_mag_sidearm_l,
			t1_mag_sidearm_l,
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
			"Laserbatteries",
			"HandGrenade",
			t1_mag_rifle,
			t1_mag_rifle,
			"SMA_30Rnd_556x45_M855A1_Tracer",
			"SMA_30Rnd_556x45_M855A1_Tracer",
			"SMA_30Rnd_556x45_M855A1_Tracer",
			"SMA_30Rnd_556x45_M855A1_Tracer",
			"SMA_30Rnd_556x45_M855A1_Tracer",
			t1_mag_sidearm_l,
			t1_mag_sidearm_l,
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
			"ACRE_PRC148",
			"B_UavTerminal",
			STDITEMS
		};
		respawnItems[] = {
			"ACRE_PRC148",
			"B_UavTerminal",
			STDITEMS
		};
		backpack = "T1_Carryall_camo_PLSgt_JTAC";
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
			class _xx_SMA_30Rnd_556x45_M855A1
			{
				magazine = t1_mag_rifle;
				count = 72;
			};
			class _xx_rhs_200rnd_556x45_M_SAW
			{
				magazine = t1_mag_lmg;
				count = 18;
			};
			class _xx_20Rnd_762x51_Mag
			{
				magazine = t1_mag_marksman;
				count = 12;
			};
			class _xx_rhsusf_mag_17Rnd_9x19_FMJ
			{
				magazine = t1_mag_sidearm_l;
				count = 8;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 16;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 12;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 32;
			};
			class _xx_ACE_M84
			{
				magazine = "ACE_M84";
				count = 16;
			};
		};
		class TransportItems
		{
			class Bandage1
			{
				count = 120;
				name = "ACE_packingBandage";
			};
			class Bandage2
			{
				count = 40;
				name = "ACE_elasticBandage";
			};
			class Tourniquet
			{
				count = 8;
				name = "ACE_tourniquet";
			};
			class _xx_ACE_morphine
			{
				count = 18;
				name = "ACE_morphine";
			};
			class _xx_ACE_epinephrine
			{
				count = 18;
				name = "ACE_epinephrine";
			};
			class _xx_ACE_bloodIV_250
			{
				count = 5;
				name = "ACE_bloodIV_500";
			};
			class _xx_ACE_CableTie
			{
				count = 20;
				name = "ACE_CableTie";
			};
			class _xx_ACRE_PRC148
			{
				count = 1;
				name = "ACRE_PRC148";
			};
		};
		class TransportWeapons
		{
			class _xx_tf47_at4_heat
			{
				weapon = "tf47_at4_heat";
				count = 1;
			};
			class _xx_HAFM_LAW
			{
				weapon = "HAFM_LAW";
				count = 7;
			};
		};
		class TransportBackpacks{};
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
			class _xx_SMA_30Rnd_556x45_M855A1
			{
				magazine = t1_mag_rifle;
				count = 48;
			};
			class _xx_rhsusf_100Rnd_762x51_m62_tracer
			{
				magazine = t1_mag_mmg;
				count = 32;
			};
			class _xx_7Rnd_408_Mag
			{
				magazine = t1_mag_sierra;
				count = 36;
			};
			class sidearm_medium_mags
			{
				magazine = t1_mag_sidearm_m;
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
				count = 60;
				name = "ACE_packingBandage";
			};
			class Bandage2
			{
				count = 20;
				name = "ACE_elasticBandage";
			};
			class Tourniquet
			{
				count = 8;
				name = "ACE_tourniquet";
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
			class _xx_ACE_CableTie
			{
				count = 20;
				name = "ACE_CableTie";
			};
			class _xx_ACE_UAVBattery
			{
				count = 4;
				name = "ACE_UAVBattery";
			};
			class _xx_ACRE_PRC148
			{
				count = 4;
				name = "ACRE_PRC148";
			};
		};
		class TransportWeapons
		{
			class _xx_HAFM_LAW
			{
				weapon = "HAFM_LAW";
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
			class FiveFiveSix // standard rifle
			{
				magazine = t1_mag_rifle;
				count = 48;
			};
			class FiveFiveSixSD // standard rifle
			{
				magazine = t1_mag_rifle_sd;
				count = 12;
			};
			class FourSixty // marksman sidearm
			{
				magazine = t1_mag_sidearm_m;
				count = 16;
			};
			class FourSixtySD // marksman sidearm
			{
				magazine = t1_mag_sidearm_m_sd;
				count = 8;
			};
			class SevenSixTwo	// sf marksman
			{
				magazine = t1_mag_marksman;
				count = 36;
			};
			class GLs // leader GLs
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count=30;
			};
			class _xx_rhsusf_mag_17Rnd_9x19_FMJ // standard sidearm
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
				count = 8;
			};
			class _xx_ACE_M84
			{
				magazine = "ACE_M84";
				count = 8;
			};
			class SLAMs
			{
				magazine = "SLAMDirectionalMine_Wire_Mag";
				count = 20;
			};
		};
		class TransportItems
		{
			class Bandage1
			{
				count = 60;
				name = "ACE_packingBandage";
			};
			class Bandage2
			{
				count = 20;
				name = "ACE_elasticBandage";
			};
			class Tourniquet
			{
				count = 8;
				name = "ACE_tourniquet";
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
			class _xx_ACE_CableTie
			{
				count = 20;
				name = "ACE_CableTie";
			};
			class _xx_ACE_UAVBattery
			{
				count = 4;
				name = "ACE_UAVBattery";
			};
			class _xx_ACRE_PRC148
			{
				count = 4;
				name = "ACRE_PRC148";
			};
			class UavTerminal
			{
				count = 6;
				name = "B_UavTerminal";
			};
		};
		class TransportWeapons
		{
			class LAW
			{
				weapon = "HAFM_LAW";
				count = 4;
			};
			class MAW
			{
				weapon = "tf47_at4_heat";
				count = 4;
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
		};
	};
	class T1_eod_ammobox: B_supplyCrate_F
	{
		vehicleClass = "Ammo";
		displayName = "T1 EOD Supply Box";
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
			class _xx_ACRE_PRC148
			{
				count = 2;
				name = "ACRE_PRC148";
			};
		};
		class TransportWeapons{};
		class TransportBackpacks{};
	};
};

//};
