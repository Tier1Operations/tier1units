////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.90
//Thu Apr 30 23:39:42 2015 : Source 'file' date Thu Apr 30 23:39:42 2015
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

#define STDITEMS "ItemRadio","ACE_EarPlugs","ACE_microDAGR","ACE_MapTools","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie"

// MEDICALITEMS is used in addition to STDITEMS for units without backpacks
#define MEDICALITEMS "ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_morphine","ACE_morphine","ACE_morphine","ACE_epinephrine"

//Class t1_units : config.bin{
class CfgPatches
{
	class t1_units
	{
		units[] = {"T1_Kitbag_camo_SF_Marksman","T1_Kitbag_camo_Lead","T1_Kitbag_camo_Lead_Trainer","T1_Carryall_camo_AMG","T1_Carryall_camo_AAA","T1_Carryall_camo_AAT","T1_Kitbag_camo_AA","T1_Kitbag_camo_AT","T1_Kitbag_camo_AR","T1_Carryall_camo_PLSgt_JTAC","T1_Carryall_camo_PLEOD","T1_Carryall_camo_Exp","T1_Carryall_camo_Exp_SF","T1_Kitbag_camo_Repair","T1_Carryall_camo","T1_Kitbag_camo_cls","T1_Kitbag_camo_medic","T1_Kitbag_camo_ws","T1_Kitbag_camo","T1_Platoon_Sgt_Standard_F","T1_Platoon_EOD_Standard_F","T1_Platoon_Medic_Standard_F","T1_Platoon_Lead_Standard_F","T1_Section_AT_Standard_F","T1_Section_WS_Standard_F","T1_Section_AAR_Standard_F","T1_Section_AR_Standard_F","T1_Section_CLS_Standard_F","T1_Section_Sgt_Standard_F","T1_Section_Lead_Standard_F","T1_Sentinel_Driver_Standard_F","T1_Sentinel_Gunner_Standard_F","T1_Sentinel_Commander_Standard_F","T1_Crew_Commander_Standard_F","T1_Crewman_Standard_F","T1_Scout_TL_Standard_F","T1_Scout_Standard_F","T1_Specialist_AMG_Standard_F","T1_Specialist_MG_Standard_F","T1_Specialist_AAA_Standard_F","T1_Specialist_AA_Standard_F","T1_Specialist_AAT_Standard_F","T1_Specialist_AT_Standard_F","T1_Sniper_Standard_F","T1_Spotter_Standard_F","T1_Pilot_Night_F","T1_Pilot_Camo_F","T1_Pilot_BlackCamo_F","T1_Pilot_Black_F","T1_Pilot_Standard_F","T1_Diver_AR_Standard_F","T1_Diver_AT_Standard_F","T1_Diver_FTL_Standard_F","T1_Diver_Medic_Standard_F","T1_Diver_Explosive_Standard_F","T1_Diver_Marksman_SOS_Standard_F","T1_Diver_Soldier_F","T1_SF_AR_Standard_F","T1_SF_AT_Standard_F","T1_SF_FTL_Standard_F","T1_SF_Medic_Standard_F","T1_SF_Explosive_Standard_F","T1_SF_Marksman_SOS_Standard_F","T1_Soldier_F","T1_Instructor_Polo_Orange_F","T1_Instructor_Polo_Black_F","T1_B_MRAP_01_hmg_Woodland_F","T1_B_MRAP_01_gmg_Woodland_F","T1_B_MRAP_01_Woodland_F","T1_Heli_Light_01_armed_BlackCamo_F","T1_Heli_Light_01_BlackCamo_F","T1_Heli_Light_01_armed_Black_F","T1_Heli_Light_01_Black_F","T1_Heli_Light_01_armed_Night_F","T1_Heli_Light_01_Night_F","T1_Heli_Light_01_armed_Camo_F","T1_Heli_Light_01_Camo_F","T1_Kitbag_camo_medic_sf","T1_Kitbag_camo_Section_AT","T1_section_ammobox","T1_support_ammobox","T1_eod_ammobox"};
		weapons[] = {"T1_V_PlateCarrier2_Standard","T1_U_Pilot_Night","T1_U_Pilot_Camo","T1_U_Pilot_BlackCamo","T1_U_Pilot_Black","T1_U_Pilot_Standard","T1_U_Instructor_Polo_Orange","T1_U_Instructor_Polo_Black","T1_U_Sniper_Standard","T1_U_Diver_Standard","T1_U_Squad_Standard","T1_rhs_m4a1_m320_Hamr_pointer_F","T1_rhs_m4a1_m320_Hamr_pointer_SD_F","T1_rhs_weap_m4a1_grip_Hamr_pointer_F","T1_rhs_weap_m4a1_grip_Hamr_pointer_SD_F","T1_LMG_BWA3_MG5_Hamr_pointer_F","T1_rhs_weap_m249_pip_L_Hamr","T1_LMG_hlc_M60E4_Hamr","T1_srifle_LRR_SOS_pointer_F","T1_srifle_EBR_DMS_pointer_F","BWA3_G28_Assault_SOS_pointer_sd","T1_BWA3_MP7_LLM01_snds_F","T1_hgun_Pistol_heavy_01_snds_F"};
		magazines[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"hlcweapons_m60e4","BWA3_Weapons","BWA3_Weapons_t1fix","TIER1_LAW","ace_medical","BWA3_Kestrel","rhsusf_c_weapons"};
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
			class _xx_ACE_fieldDressing
			{
				count = 9;
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
			class _xx_BWA3_G_Combat_Clear
			{
				count = 1;
				name = "BWA3_G_Combat_Clear";
			};
		};
	};
	class T1_Kitbag_camo_Lead: B_Kitbag_Base
	{
		scope = 2;
		displayName = "Kitbag Lead (T1 Camo)";
		hiddenSelectionsTextures[] = {"\t1_units\data\backpacks\t1_kitbag_camo_co.paa"};
		class TransportItems
		{
			class _xx_ACE_fieldDressing
			{
				count = 9;
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
			class _xx_BWA3_G_Combat_Clear
			{
				count = 1;
				name = "BWA3_G_Combat_Clear";
			};
			class _xx_ACE_Vector
			{
				count = 1;
				name = "ACE_Vector";
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
			class _xx_hlc_100Rnd_762x51_M_M60E4
			{
				count = 1;
				magazine = "hlc_100Rnd_762x51_M_M60E4";
			};
		};
		class TransportItems
		{
			class _xx_ACE_fieldDressing
			{
				count = 9;
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
			class _xx_BWA3_G_Combat_Clear
			{
				count = 1;
				name = "BWA3_G_Combat_Clear";
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
			class _xx_ACE_fieldDressing
			{
				count = 9;
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
			class _xx_BWA3_G_Combat_Clear
			{
				count = 1;
				name = "BWA3_G_Combat_Clear";
			};
			class _xx_ACE_Vector
			{
				count = 1;
				name = "ACE_Vector";
			};
			class _xx_ACE_Kestrel
			{
				count = 1;
				name = "ACE_Kestrel";
			};
		};
	};
	class T1_Kitbag_camo_SF_Marksman: B_Kitbag_Base
	{
		scope = 2;
		displayName = "Kitbag SF Marksman (T1 Camo)";
		hiddenSelectionsTextures[] = {"\t1_units\data\backpacks\t1_kitbag_camo_co.paa"};
		class TransportMagazines
		{			
			class _xx_hlc_100Rnd_762x51_M_M60E4
			{
				count = 1;
				magazine = "hlc_100Rnd_762x51_M_M60E4";
			};
		};
		class TransportItems
		{
			class _xx_ACE_fieldDressing
			{
				count = 9;
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
			class _xx_BWA3_G_Combat_Clear
			{
				count = 1;
				name = "BWA3_G_Combat_Clear";
			};
			class _xx_ACE_Kestrel
			{
				count = 1;
				name = "ACE_Kestrel";
			};
		};
	};
	class T1_Kitbag_camo_ws: T1_Kitbag_camo
	{
		scope = 1;
		class TransportItems
		{
			class _xx_ACE_fieldDressing
			{
				count = 9;
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
			class _xx_BWA3_G_Combat_Clear
			{
				count = 1;
				name = "BWA3_G_Combat_Clear";
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
			class _xx_ACE_fieldDressing
			{
				count = 50;
				name = "ACE_fieldDressing";
			};
			class _xx_ACE_morphine
			{
				count = 25;
				name = "ACE_morphine";
			};
			class _xx_ACE_epinephrine
			{
				count = 20;
				name = "ACE_epinephrine";
			};
			class _xx_ACE_bloodIV_250
			{
				count = 20;
				name = "ACE_bloodIV_250";
			};
			class _xx_BWA3_G_Combat_Clear
			{
				count = 1;
				name = "BWA3_G_Combat_Clear";
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
			class _xx_hlc_100Rnd_762x51_M_M60E4
			{
				count = 1;
				magazine = "hlc_100Rnd_762x51_M_M60E4";
			};
		};
		class TransportItems
		{
			class _xx_ACE_fieldDressing
			{
				count = 30;
				name = "ACE_fieldDressing";
			};
			class _xx_ACE_morphine
			{
				count = 15;
				name = "ACE_morphine";
			};
			class _xx_ACE_epinephrine
			{
				count = 10;
				name = "ACE_epinephrine";
			};
			class _xx_ACE_bloodIV_250
			{
				count = 14;
				name = "ACE_bloodIV_250";
			};
			class _xx_BWA3_G_Combat_Clear
			{
				count = 1;
				name = "BWA3_G_Combat_Clear";
			};
		};
	};
	class T1_Kitbag_camo_cls: T1_Kitbag_camo_medic
	{
		scope = 1;
		class TransportItems
		{
			class _xx_ACE_fieldDressing
			{
				count = 45;
				name = "ACE_fieldDressing";
			};
			class _xx_ACE_morphine
			{
				count = 10;
				name = "ACE_morphine";
			};
			class _xx_ACE_epinephrine
			{
				count = 10;
				name = "ACE_epinephrine";
			};
			class _xx_ACE_bloodIV_250
			{
				count = 10;
				name = "ACE_bloodIV_250";
			};
			class _xx_BWA3_G_Combat_Clear
			{
				count = 1;
				name = "BWA3_G_Combat_Clear";
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
			class _xx_ACE_fieldDressing
			{
				count = 9;
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
			class _xx_BWA3_G_Combat_Clear
			{
				count = 1;
				name = "BWA3_G_Combat_Clear";
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
			class _xx_ACE_fieldDressing
			{
				count = 9;
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
			class _xx_BWA3_G_Combat_Clear
			{
				count = 1;
				name = "BWA3_G_Combat_Clear";
			};
			class _xx_ACE_Vector
			{
				count = 1;
				name = "ACE_Vector";
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
			class _xx_ACE_fieldDressing
			{
				count = 9;
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
			class _xx_BWA3_G_Combat_Clear
			{
				count = 1;
				name = "BWA3_G_Combat_Clear";
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
			class _xx_hlc_100Rnd_762x51_M_M60E4
			{
				count = 1;
				magazine = "hlc_100Rnd_762x51_M_M60E4";
			};
		};
		class TransportItems
		{
			class _xx_MineDetector
			{
				count = 1;
				name = "MineDetector";
			};
			class _xx_ACE_fieldDressing
			{
				count = 9;
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
			class _xx_BWA3_G_Combat_Clear
			{
				count = 1;
				name = "BWA3_G_Combat_Clear";
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
			class _xx_ACE_fieldDressing
			{
				count = 9;
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
			class _xx_BWA3_G_Combat_Clear
			{
				count = 1;
				name = "BWA3_G_Combat_Clear";
			};
			class _xx_ACE_Vector
			{
				count = 1;
				name = "ACE_Vector";
			};
		};
	};
	class T1_Carryall_camo_PLSgt_JTAC: T1_Carryall_camo
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
			class _xx_ACE_fieldDressing
			{
				count = 9;
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
			class _xx_BWA3_G_Combat_Clear
			{
				count = 1;
				name = "BWA3_G_Combat_Clear";
			};
			class _xx_ACE_Vector
			{
				count = 1;
				name = "ACE_Vector";
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
				magazine = "rhs_200rnd_556x45_M_SAW";
			};
		};
		class TransportItems
		{			
			class _xx_ACE_fieldDressing
			{
				count = 9;
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
			class _xx_BWA3_G_Combat_Clear
			{
				count = 1;
				name = "BWA3_G_Combat_Clear";
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
				magazine = "rhs_200rnd_556x45_M_SAW";
			};
		};
		class TransportItems
		{
			class _xx_ACE_SpareBarrel
			{
				count = 1;
				name = "ACE_SpareBarrel";
			};
			class _xx_ACE_fieldDressing
			{
				count = 9;
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
			class _xx_BWA3_G_Combat_Clear
			{
				count = 1;
				name = "BWA3_G_Combat_Clear";
			};
		};
	};
	class T1_Kitbag_camo_AR_SF: T1_Kitbag_camo
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_hlc_100Rnd_762x51_M_M60E4
			{
				count = 1;
				magazine = "hlc_100Rnd_762x51_M_M60E4";
			};
		};
		class TransportItems
		{			
			class _xx_ACE_fieldDressing
			{
				count = 9;
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
			class _xx_BWA3_G_Combat_Clear
			{
				count = 1;
				name = "BWA3_G_Combat_Clear";
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
			class _xx_ACE_fieldDressing
			{
				count = 9;
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
			class _xx_BWA3_G_Combat_Clear
			{
				count = 1;
				name = "BWA3_G_Combat_Clear";
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
			class _xx_ACE_fieldDressing
			{
				count = 9;
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
			class _xx_BWA3_G_Combat_Clear
			{
				count = 1;
				name = "BWA3_G_Combat_Clear";
			};
		};
	};
	class T1_Carryall_camo_AAT: T1_Carryall_camo
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_Titan_AT
			{
				magazine = "Titan_AT";
				count = 3;
			};
			class _xx_Titan_AP
			{
				magazine = "Titan_AP";
				count = 1;
			};
		};
		class TransportItems
		{
			class _xx_BWA3_G_Combat_Clear
			{
				count = 1;
				name = "BWA3_G_Combat_Clear";
			};
			class _xx_ACE_Vector
			{
				count = 1;
				name = "ACE_Vector";
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
			class _xx_BWA3_G_Combat_Clear
			{
				count = 1;
				name = "BWA3_G_Combat_Clear";
			};
			class _xx_ACE_Vector
			{
				count = 1;
				name = "ACE_Vector";
			};
		};
	};
	class T1_Carryall_camo_AMG: T1_Carryall_camo
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_hlc_100Rnd_762x51_M_M60E4
			{
				count = 5;
				magazine = "BWA3_120Rnd_762x51";
			};
		};
		class TransportItems
		{
			class _xx_ACE_fieldDressing
			{
				count = 9;
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
			class _xx_BWA3_G_Combat_Clear
			{
				count = 1;
				name = "BWA3_G_Combat_Clear";
			};
			class _xx_ACE_Vector
			{
				count = 1;
				name = "ACE_Vector";
			};
		};
	};
	class T1_Kitbag_camo_Section_AT: T1_Kitbag_camo
	{
		scope = 1;
		class TransportItems
		{
			class _xx_ACE_fieldDressing
			{
				count = 9;
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
			class _xx_BWA3_G_Combat_Clear
			{
				count = 1;
				name = "BWA3_G_Combat_Clear";
			};
		};
		class TransportWeapons
		{
			class _xx_M72_LAW
			{
				weapon = "M72_LAW";
				count = 1;
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
		weapons[] = {"T1_rhs_weap_m4a1_grip_Hamr_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"T1_rhs_weap_m4a1_grip_Hamr_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put","Rangefinder"};
		magazines[] = {"ACE_M84","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnmagazines[] = {"ACE_M84","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","SmokeShell","SmokeShellGreen"};
		linkedItems[] = {"H_Cap_headphones","V_Rangemaster_belt","ACE_NVG_Gen4","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"H_Cap_headphones","V_Rangemaster_belt","ACE_NVG_Gen4","ItemMap","ItemCompass","ItemWatch"};
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
		linkedItems[] = {"T1_V_PlateCarrier2_Standard","H_HelmetB_light","ACE_NVG_Gen4","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"T1_V_PlateCarrier2_Standard","H_HelmetB_light","ACE_NVG_Gen4","ItemMap","ItemCompass","ItemWatch"};
	};
	class T1_SF_Marksman_SOS_Standard_F: T1_Soldier_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "SF";
		displayName = "T1 SF Marksman";
		weapons[] = {"BWA3_G28_Assault_SOS_pointer_sd","T1_BWA3_MP7_LLM01_snds_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"BWA3_G28_Assault_SOS_pointer_sd","T1_BWA3_MP7_LLM01_snds_F","Throw","Put","Rangefinder"};
		magazines[] = {"ACE_M84","BWA3_20Rnd_762x51_G28_SD","BWA3_20Rnd_762x51_G28_AP","BWA3_20Rnd_762x51_G28_AP","BWA3_20Rnd_762x51_G28","BWA3_20Rnd_762x51_G28","BWA3_20Rnd_762x51_G28","BWA3_20Rnd_762x51_G28","BWA3_20Rnd_762x51_G28","BWA3_20Rnd_762x51_G28","BWA3_20Rnd_762x51_G28","BWA3_20Rnd_762x51_G28","BWA3_20Rnd_762x51_G28","BWA3_40Rnd_46x30_MP7","BWA3_40Rnd_46x30_MP7","BWA3_40Rnd_46x30_MP7","BWA3_40Rnd_46x30_MP7_SD","BWA3_40Rnd_46x30_MP7_SD","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnmagazines[] = {"ACE_M84","BWA3_20Rnd_762x51_G28_SD","BWA3_20Rnd_762x51_G28_AP","BWA3_20Rnd_762x51_G28_AP","BWA3_20Rnd_762x51_G28","BWA3_20Rnd_762x51_G28","BWA3_20Rnd_762x51_G28","BWA3_20Rnd_762x51_G28","BWA3_20Rnd_762x51_G28","BWA3_20Rnd_762x51_G28","BWA3_20Rnd_762x51_G28","BWA3_20Rnd_762x51_G28","BWA3_20Rnd_762x51_G28","BWA3_40Rnd_46x30_MP7","BWA3_40Rnd_46x30_MP7","BWA3_40Rnd_46x30_MP7","BWA3_40Rnd_46x30_MP7_SD","BWA3_40Rnd_46x30_MP7_SD","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		backpack = "T1_Kitbag_camo_SF_Marksman";
		items[] = {STDITEMS,"ACE_RangeCard","ACE_ATragMX","ACE_Kestrel4500"};
		respawnItems[] = {STDITEMS,"ACE_RangeCard","ACE_ATragMX","ACE_Kestrel4500"};
		camouflage = 0.8;
	};
	class T1_SF_Explosive_Standard_F: T1_Soldier_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "SF";
		displayName = "T1 SF Explosive Specialist";
		weapons[] = {"T1_rhs_weap_m4a1_grip_Hamr_pointer_SD_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"T1_rhs_weap_m4a1_grip_Hamr_pointer_SD_F","Throw","Put","Rangefinder"};
		magazines[] = {"ACE_M84","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell","HandGrenade","HandGrenade"};
		respawnmagazines[] = {"ACE_M84","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell","HandGrenade","HandGrenade"};
		icon = "iconManExplosive";
		backpack = "T1_Carryall_camo_Exp_SF";
		items[] = {"ACE_M26_Clacker","ACE_DefusalKit",STDITEMS};
		respawnItems[] = {"ACE_M26_Clacker","ACE_DefusalKit",STDITEMS};
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
		weapons[] = {"T1_rhs_weap_m4a1_grip_Hamr_pointer_SD_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"T1_rhs_weap_m4a1_grip_Hamr_pointer_SD_F","Throw","Put","Rangefinder"};
		magazines[] = {"ACE_M84","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","HandGrenade","HandGrenade"};
		respawnmagazines[] = {"ACE_M84","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","HandGrenade","HandGrenade"};
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
		weapons[] = {"T1_rhs_m4a1_m320_Hamr_pointer_SD_F","Throw","Put","Laserdesignator","M72_LAW"};
		respawnWeapons[] = {"T1_rhs_m4a1_m320_Hamr_pointer_SD_F","Throw","Put","Laserdesignator","M72_LAW"};
		magazines[] = {"ACE_M84","Laserbatteries","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell"};
		respawnmagazines[] = {"ACE_M84","Laserbatteries","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell"};
		icon = "iconManLeader";
		backpack = "T1_Kitbag_camo_Lead_SF";
		items[] = {"ACRE_PRC148","ACE_IR_Strobe_Item",STDITEMS};
		respawnItems[] = {"ACRE_PRC148","ACE_IR_Strobe_Item",STDITEMS};
		camouflage = 1.0;
	};
	class T1_SF_AT_Standard_F: T1_Soldier_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "SF";
		displayName = "T1 SF Radioman";
		weapons[] = {"T1_rhs_weap_m4a1_grip_Hamr_pointer_SD_F","Throw","Put","Rangefinder","BWA3_RGW90"};
		respawnWeapons[] = {"T1_rhs_weap_m4a1_grip_Hamr_pointer_SD_F","Throw","Put","Rangefinder","BWA3_RGW90"};
		magazines[] = {"ACE_M84","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnmagazines[] = {"ACE_M84","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
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
		weapons[] = {"T1_LMG_hlc_M60E4_Hamr","T1_BWA3_MP7_LLM01_snds_F","Throw","Put","Rangefinder"};
		respawnweapons[] = {"T1_LMG_hlc_M60E4_Hamr","T1_BWA3_MP7_LLM01_snds_F","Throw","Put","Rangefinder"};
		magazines[] = {"ACE_M84","HandGrenade","SmokeShell","hlc_100Rnd_762x51_M_M60E4","BWA3_40Rnd_46x30_MP7","BWA3_40Rnd_46x30_MP7_SD"};
		respawnmagazines[] = {"ACE_M84","HandGrenade","SmokeShell","hlc_100Rnd_762x51_M_M60E4","BWA3_40Rnd_46x30_MP7","BWA3_40Rnd_46x30_MP7_SD"};
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
		hiddenselections[] = {"Camo1","Camo2"};
		hiddenselectionstextures[] = {"\A3\Characters_F\Common\Data\diver_suit_nato_co.paa","\A3\Characters_F\Common\Data\diver_equip_nato_co.paa"};
		hiddenunderwaterselections[] = {"hide"};
		hiddenunderwaterselectionstextures[] = {"\A3\characters_f\common\data\diver_equip_nato_co.paa","\A3\characters_f\common\data\diver_equip_nato_co.paa","\A3\characters_f\data\visors_ca.paa"};
		shownunderwaterselections[] = {"unhide","unhide2"};
		camouflage = 1.0;
		class Wounds
		{
			mat[] = {"A3\Characters_F\Common\Data\diver_suit.rvmat","A3\Characters_F\Common\Data\diver_suit_injury.rvmat","A3\Characters_F\Common\Data\diver_suit_injury.rvmat"};
			tex[] = {};
		};
		linkedItems[] = {"V_RebreatherB","G_Diving","ACE_NVG_Gen4","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"V_RebreatherB","G_Diving","ACE_NVG_Gen4","ItemMap","ItemCompass","ItemWatch"};
	};
	class T1_Diver_Marksman_SOS_Standard_F: T1_Diver_Soldier_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "Diver";
		displayName = "T1 Diver Marksman";
		weapons[] = {"BWA3_G28_Assault_SOS_pointer_sd","T1_BWA3_MP7_LLM01_snds_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"BWA3_G28_Assault_SOS_pointer_sd","T1_BWA3_MP7_LLM01_snds_F","Throw","Put","Rangefinder"};
		magazines[] = {"ACE_M84","BWA3_20Rnd_762x51_G28_SD","BWA3_20Rnd_762x51_G28_AP","BWA3_20Rnd_762x51_G28_AP","BWA3_20Rnd_762x51_G28","BWA3_20Rnd_762x51_G28","BWA3_20Rnd_762x51_G28","BWA3_20Rnd_762x51_G28","BWA3_20Rnd_762x51_G28","BWA3_20Rnd_762x51_G28","BWA3_20Rnd_762x51_G28","BWA3_20Rnd_762x51_G28","BWA3_20Rnd_762x51_G28","BWA3_40Rnd_46x30_MP7","BWA3_40Rnd_46x30_MP7","BWA3_40Rnd_46x30_MP7","BWA3_40Rnd_46x30_MP7_SD","BWA3_40Rnd_46x30_MP7_SD","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnmagazines[] = {"ACE_M84","BWA3_20Rnd_762x51_G28_SD","BWA3_20Rnd_762x51_G28_AP","BWA3_20Rnd_762x51_G28_AP","BWA3_20Rnd_762x51_G28","BWA3_20Rnd_762x51_G28","BWA3_20Rnd_762x51_G28","BWA3_20Rnd_762x51_G28","BWA3_20Rnd_762x51_G28","BWA3_20Rnd_762x51_G28","BWA3_20Rnd_762x51_G28","BWA3_20Rnd_762x51_G28","BWA3_20Rnd_762x51_G28","BWA3_40Rnd_46x30_MP7","BWA3_40Rnd_46x30_MP7","BWA3_40Rnd_46x30_MP7","BWA3_40Rnd_46x30_MP7_SD","BWA3_40Rnd_46x30_MP7_SD","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		backpack = "T1_Kitbag_camo_SF_Marksman";
		items[] = {STDITEMS,"ACE_RangeCard","ACE_ATragMX","ACE_Kestrel4500"};
		respawnItems[] = {STDITEMS,"ACE_RangeCard","ACE_ATragMX","ACE_Kestrel4500"};
		camouflage = 0.8;
	};
	class T1_Diver_Explosive_Standard_F: T1_Diver_Soldier_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "Diver";
		displayName = "T1 Diver Explosive Specialist";
		weapons[] = {"T1_rhs_weap_m4a1_grip_Hamr_pointer_SD_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"T1_rhs_weap_m4a1_grip_Hamr_pointer_SD_F","Throw","Put","Rangefinder"};
		magazines[] = {"ACE_M84","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell","HandGrenade","HandGrenade"};
		respawnmagazines[] = {"ACE_M84","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell","HandGrenade","HandGrenade"};
		icon = "iconManExplosive";
		backpack = "T1_Carryall_camo_Exp_SF";
		items[] = {"ACE_M26_Clacker","ACE_DefusalKit",STDITEMS};
		respawnItems[] = {"ACE_M26_Clacker","ACE_DefusalKit",STDITEMS};
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
		weapons[] = {"T1_rhs_weap_m4a1_grip_Hamr_pointer_SD_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"T1_rhs_weap_m4a1_grip_Hamr_pointer_SD_F","Throw","Put","Rangefinder"};
		magazines[] = {"ACE_M84","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","HandGrenade","HandGrenade"};
		respawnmagazines[] = {"ACE_M84","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","HandGrenade","HandGrenade"};
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
		weapons[] = {"T1_rhs_m4a1_m320_Hamr_pointer_SD_F","Throw","Put","Laserdesignator","M72_LAW"};
		respawnWeapons[] = {"T1_rhs_m4a1_m320_Hamr_pointer_SD_F","Throw","Put","Laserdesignator","M72_LAW"};
		magazines[] = {"ACE_M84","Laserbatteries","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell"};
		respawnmagazines[] = {"ACE_M84","Laserbatteries","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell"};
		icon = "iconManLeader";
		backpack = "T1_Kitbag_camo_Lead_SF";
		items[] = {"ACRE_PRC148","ACE_IR_Strobe_Item",STDITEMS};
		respawnItems[] = {"ACRE_PRC148","ACE_IR_Strobe_Item",STDITEMS};
		camouflage = 1.0;
	};
	class T1_Diver_AT_Standard_F: T1_Diver_Soldier_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "Diver";
		displayName = "T1 Diver Radioman";
		weapons[] = {"T1_rhs_weap_m4a1_grip_Hamr_pointer_SD_F","Throw","Put","Rangefinder","BWA3_RGW90"};
		respawnWeapons[] = {"T1_rhs_weap_m4a1_grip_Hamr_pointer_SD_F","Throw","Put","Rangefinder","BWA3_RGW90"};
		magazines[] = {"ACE_M84","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnmagazines[] = {"ACE_M84","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
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
		weapons[] = {"T1_LMG_hlc_M60E4_Hamr","T1_BWA3_MP7_LLM01_snds_F","Throw","Put","Rangefinder"};
		respawnweapons[] = {"T1_LMG_hlc_M60E4_Hamr","T1_BWA3_MP7_LLM01_snds_F","Throw","Put","Rangefinder"};
		magazines[] = {"ACE_M84","HandGrenade","SmokeShell","hlc_100Rnd_762x51_M_M60E4","BWA3_40Rnd_46x30_MP7","BWA3_40Rnd_46x30_MP7_SD"};
		respawnmagazines[] = {"ACE_M84","HandGrenade","SmokeShell","hlc_100Rnd_762x51_M_M60E4","BWA3_40Rnd_46x30_MP7","BWA3_40Rnd_46x30_MP7_SD"};
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
		weapons[] = {"SMG_01_ACO_F","hgun_Pistol_heavy_01_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"SMG_01_ACO_F","hgun_Pistol_heavy_01_F","Throw","Put","Rangefinder"};
		magazines[] = {"ACE_M84","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen"};
		respawnmagazines[] = {"ACE_M84","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen"};
		linkedItems[] = {"H_PilotHelmetHeli_B","ACE_NVG_Gen4","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"H_PilotHelmetHeli_B","ACE_NVG_Gen4","ItemMap","ItemCompass","ItemWatch"};
		// Todo: Evaluate wrt MEDICALITEMS mismatch
		items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_morphine","ACE_morphine","ACE_morphine","ACE_epinephrine","ACRE_PRC148",STDITEMS};
		respawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_morphine","ACE_morphine","ACE_morphine","ACE_epinephrine","ACRE_PRC148",STDITEMS};
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
		weapons[] = {"T1_rhs_weap_m4a1_grip_Hamr_pointer_SD_F","T1_hgun_Pistol_heavy_01_snds_F","Throw","Put","Laserdesignator"};
		respawnWeapons[] = {"T1_rhs_weap_m4a1_grip_Hamr_pointer_SD_F","T1_hgun_Pistol_heavy_01_snds_F","Throw","Put","Laserdesignator"};
		magazines[] = {"ACE_M84","Laserbatteries","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","APERSTripMine_Wire_Mag","APERSTripMine_Wire_Mag"};
		respawnmagazines[] = {"ACE_M84","Laserbatteries","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","APERSTripMine_Wire_Mag","APERSTripMine_Wire_Mag"};
		linkedItems[] = {"T1_V_PlateCarrier2_Standard","ACE_NVG_Gen4","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"T1_V_PlateCarrier2_Standard","ACE_NVG_Gen4","ItemMap","ItemCompass","ItemWatch"};
		items[] = {"ACE_IR_Strobe_Item","ACE_DefusalKit","ACRE_PRC148","ACE_ATragMX","ACE_Kestrel4500","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_morphine","ACE_morphine","ACE_morphine","ACE_epinephrine",STDITEMS};
		respawnItems[] = {"ACE_IR_Strobe_Item","ACE_DefusalKit","ACRE_PRC148","ACE_ATragMX","ACE_Kestrel4500","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_morphine","ACE_morphine","ACE_morphine","ACE_epinephrine",STDITEMS};
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
		weapons[] = {"srifle_LRR_SOS_F","T1_BWA3_MP7_LLM01_snds_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"srifle_LRR_SOS_F","T1_BWA3_MP7_LLM01_snds_F","Throw","Put","Rangefinder"};
		magazines[] = {"HandGrenade","HandGrenade","ACE_M84","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","BWA3_40Rnd_46x30_MP7","BWA3_40Rnd_46x30_MP7","BWA3_40Rnd_46x30_MP7","BWA3_40Rnd_46x30_MP7_SD","BWA3_40Rnd_46x30_MP7_SD","SmokeShell"};
		respawnmagazines[] = {"HandGrenade","HandGrenade","ACE_M84","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","BWA3_40Rnd_46x30_MP7","BWA3_40Rnd_46x30_MP7","BWA3_40Rnd_46x30_MP7","BWA3_40Rnd_46x30_MP7_SD","BWA3_40Rnd_46x30_MP7_SD","SmokeShell"};
		linkedItems[] = {"T1_V_PlateCarrier2_Standard","ACE_NVG_Gen4","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"T1_V_PlateCarrier2_Standard","ACE_NVG_Gen4","ItemMap","ItemCompass","ItemWatch"};
		items[] = {"ACE_IR_Strobe_Item","ACE_DefusalKit","ACRE_PRC148","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_morphine","ACE_morphine","ACE_morphine","ACE_epinephrine",STDITEMS,"ACE_ATragMX","ACE_Kestrel4500"};
		respawnItems[] = {"ACE_IR_Strobe_Item","ACE_DefusalKit","ACRE_PRC148","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_morphine","ACE_morphine","ACE_morphine","ACE_epinephrine",STDITEMS,"ACE_ATragMX","ACE_Kestrel4500"};
		camouflage = 0.3;
		glassesEnabled = 0;
	};
	class T1_Specialist_AT_Standard_F: T1_Soldier_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "Special";
		displayName = "T1 AT Specialist";
		weapons[] = {"T1_rhs_weap_m4a1_grip_Hamr_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put","Rangefinder","launch_Titan_short_F"};
		respawnWeapons[] = {"T1_rhs_weap_m4a1_grip_Hamr_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put","Rangefinder","launch_Titan_short_F"};
		magazines[] = {"ACE_M84","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","SmokeShell","SmokeShellGreen","Titan_AT"};
		respawnmagazines[] = {"ACE_M84","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","SmokeShell","SmokeShellGreen","Titan_AT"};
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
		weapons[] = {"T1_rhs_weap_m4a1_grip_Hamr_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put","Laserdesignator"};
		respawnWeapons[] = {"T1_rhs_weap_m4a1_grip_Hamr_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put","Laserdesignator"};
		magazines[] = {"ACE_M84","Laserbatteries","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnmagazines[] = {"ACE_M84","Laserbatteries","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","SmokeShell","SmokeShellGreen"};
		items[] = {"ACRE_PRC148",STDITEMS,"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_morphine","ACE_morphine","ACE_morphine","ACE_epinephrine"};
		respawnItems[] = {"ACRE_PRC148",STDITEMS,"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_morphine","ACE_morphine","ACE_morphine","ACE_epinephrine"};
		backpack = "T1_Carryall_camo_AAT";
	};
	class T1_Specialist_AA_Standard_F: T1_Soldier_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "Special";
		displayName = "T1 AA Specialist";
		weapons[] = {"T1_rhs_weap_m4a1_grip_Hamr_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put","Rangefinder","launch_Titan_F"};
		respawnWeapons[] = {"T1_rhs_weap_m4a1_grip_Hamr_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put","Rangefinder","launch_Titan_F"};
		magazines[] = {"ACE_M84","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","SmokeShell","SmokeShellGreen","Titan_AA"};
		respawnmagazines[] = {"ACE_M84","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","SmokeShell","SmokeShellGreen","Titan_AA"};
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
		weapons[] = {"T1_rhs_weap_m4a1_grip_Hamr_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put","Laserdesignator"};
		respawnWeapons[] = {"T1_rhs_weap_m4a1_grip_Hamr_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put","Laserdesignator"};
		magazines[] = {"ACE_M84","Laserbatteries","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnmagazines[] = {"ACE_M84","Laserbatteries","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","SmokeShell","SmokeShellGreen"};
		items[] = {"ACRE_PRC148",STDITEMS,"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_morphine","ACE_morphine","ACE_morphine","ACE_epinephrine"};
		respawnItems[] = {"ACRE_PRC148",STDITEMS,"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_morphine","ACE_morphine","ACE_morphine","ACE_epinephrine"};
		backpack = "T1_Carryall_camo_AAA";
	};
	class T1_Specialist_MG_Standard_F: T1_Soldier_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "Special";
		displayName = "T1 MG Specialist";
		weapons[] = {"T1_LMG_BWA3_MG5_Hamr_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put","Rangefinder"};
		respawnweapons[] = {"T1_LMG_BWA3_MG5_Hamr_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put","Rangefinder"};
		magazines[] = {"ACE_M84","BWA3_120Rnd_762x51","BWA3_120Rnd_762x51","BWA3_120Rnd_762x51","BWA3_120Rnd_762x51","BWA3_120Rnd_762x51","BWA3_120Rnd_762x51","BWA3_120Rnd_762x51","BWA3_120Rnd_762x51","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","SmokeShell"};
		respawnmagazines[] = {"ACE_M84","BWA3_120Rnd_762x51","BWA3_120Rnd_762x51","BWA3_120Rnd_762x51","BWA3_120Rnd_762x51","BWA3_120Rnd_762x51","BWA3_120Rnd_762x51","BWA3_120Rnd_762x51","BWA3_120Rnd_762x51","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","SmokeShell"};
		icon = "iconManMG";
		backpack = "T1_Kitbag_camo";
		items[] = {"ACRE_PRC148","ACE_IR_Strobe_Item",STDITEMS,"ACE_SpareBarrel"};
		respawnItems[] = {"ACRE_PRC148","ACE_IR_Strobe_Item",STDITEMS,"ACE_SpareBarrel"};
		class altloadout1 {
			description = ".338 MG DLC";
			weapons[] = {"MMG_02_camo_F","hgun_Pistol_heavy_01_F","Throw","Put","Rangefinder"};
			magazines[] = {"11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","SmokeShell","130Rnd_338_Mag","130Rnd_338_Mag","130Rnd_338_Mag","130Rnd_338_Mag","BWA3_120Rnd_762x51","130Rnd_338_Mag","130Rnd_338_Mag","130Rnd_338_Mag"};
			items[] = {"ACRE_PRC148","ACE_IR_Strobe_Item","optic_Hamr","BWA3_acc_LLM01_irlaser",STDITEMS,"ACE_SpareBarrel"};
		};
	};
	class T1_Specialist_AMG_Standard_F: T1_Soldier_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "Special";
		displayName = "T1 AMG Specialist";
		weapons[] = {"T1_rhs_weap_m4a1_grip_Hamr_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put","Laserdesignator"};
		respawnWeapons[] = {"T1_rhs_weap_m4a1_grip_Hamr_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put","Laserdesignator"};
		magazines[] = {"HandGrenade","ACE_M84","Laserbatteries","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen"};
		respawnmagazines[] = {"HandGrenade","ACE_M84","Laserbatteries","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen"};
		items[] = {"ACE_IR_Strobe_Item","ACRE_PRC148",STDITEMS};
		respawnItems[] = {"ACE_IR_Strobe_Item","ACRE_PRC148",STDITEMS};
		backpack = "T1_Carryall_camo_AMG";
	};
	class T1_Scout_Standard_F: T1_Soldier_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "Special";
		displayName = "T1 Scout";
		weapons[] = {"T1_rhs_weap_m4a1_grip_Hamr_pointer_SD_F","hgun_Pistol_heavy_01_F","Throw","Put","Laserdesignator"};
		respawnWeapons[] = {"T1_rhs_weap_m4a1_grip_Hamr_pointer_SD_F","hgun_Pistol_heavy_01_F","Throw","Put","Laserdesignator"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Laserbatteries","ACE_M84","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag"};
		respawnmagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Laserbatteries","ACE_M84","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag"};
		linkedItems[] = {"V_Chestrig_oli","H_Booniehat_mcamo","ACE_NVG_Gen4","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"V_Chestrig_oli","H_Booniehat_mcamo","ACE_NVG_Gen4","ItemMap","ItemCompass","ItemWatch"};
		backpack = "T1_Kitbag_camo_Lead";
		items[] = {"ACE_IR_Strobe_Item","ACRE_PRC148",STDITEMS,"rhsusf_acc_rotex5_grey"};
		respawnItems[] = {"ACE_IR_Strobe_Item","ACRE_PRC148",STDITEMS};
		camouflage = 0.6;
	};
	class T1_Scout_TL_Standard_F: T1_Soldier_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "Special";
		displayName = "T1 Scout TL [MM DLC]";
		weapons[] = {"T1_rhs_weap_m4a1_grip_Hamr_pointer_SD_F","hgun_Pistol_heavy_01_F","Throw","Put","Laserdesignator"};
		respawnWeapons[] = {"T1_rhs_weap_m4a1_grip_Hamr_pointer_SD_F","hgun_Pistol_heavy_01_F","Throw","Put","Laserdesignator"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Laserbatteries","ACE_M84","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag"};
		respawnmagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Laserbatteries","ACE_M84","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag"};
		linkedItems[] = {"V_Chestrig_oli","H_Booniehat_mcamo","ACE_NVG_Gen4","ItemMap","ItemCompass","ItemWatch","B_UavTerminal"};
		respawnLinkedItems[] = {"V_Chestrig_oli","H_Booniehat_mcamo","ACE_NVG_Gen4","ItemMap","ItemCompass","ItemWatch","B_UavTerminal"};
		backpack = "B_Static_Designator_01_weapon_F";
		items[] = {"ACE_IR_Strobe_Item","ACRE_PRC148",STDITEMS,"ACE_Vector",MEDICALITEMS,"rhs_googles_clear"};
		respawnItems[] = {"ACE_IR_Strobe_Item","ACRE_PRC148",STDITEMS,"ACE_Vector",MEDICALITEMS,"rhs_googles_clear"};
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
		weapons[] = {"T1_rhs_weap_m4a1_grip_Hamr_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"T1_rhs_weap_m4a1_grip_Hamr_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put","Rangefinder"};
		magazines[] = {"ACE_M84","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen"};
		respawnmagazines[] = {"ACE_M84","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen"};
		linkedItems[] = {"V_BandollierB_rgr","H_HelmetCrew_B","ACE_NVG_Gen4","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"V_BandollierB_rgr","H_HelmetCrew_B","ACE_NVG_Gen4","ItemMap","ItemCompass","ItemWatch"};
		items[] = {"BWA3_G_Combat_Clear","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_morphine","ACE_morphine","ACE_morphine","ACE_epinephrine","ACRE_PRC148",STDITEMS};
		respawnItems[] = {"BWA3_G_Combat_Clear","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_morphine","ACE_morphine","ACE_morphine","ACE_epinephrine","ACRE_PRC148",STDITEMS};
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
		weapons[] = {"T1_rhs_weap_m4a1_grip_Hamr_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put","Laserdesignator"};
		respawnWeapons[] = {"T1_rhs_weap_m4a1_grip_Hamr_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put","Laserdesignator"};
		magazines[] = {"Laserbatteries","ACE_M84","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","B_IR_Grenade","B_IR_Grenade"};
		respawnmagazines[] = {"Laserbatteries","ACE_M84","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","B_IR_Grenade","B_IR_Grenade"};
		linkedItems[] = {"V_BandollierB_rgr","H_HelmetCrew_B","ACE_NVG_Gen4","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"V_BandollierB_rgr","H_HelmetCrew_B","ACE_NVG_Gen4","ItemMap","ItemCompass","ItemWatch"};
		items[] = {"BWA3_G_Combat_Clear","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_morphine","ACE_morphine","ACE_morphine","ACE_epinephrine","ACRE_PRC148",STDITEMS};
		respawnItems[] = {"BWA3_G_Combat_Clear","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_morphine","ACE_morphine","ACE_morphine","ACE_epinephrine","ACRE_PRC148",STDITEMS};
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
		weapons[] = {"T1_rhs_weap_m4a1_grip_Hamr_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put","Laserdesignator"};
		respawnWeapons[] = {"T1_rhs_weap_m4a1_grip_Hamr_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put","Laserdesignator"};
		magazines[] = {"ACE_M84","Laserbatteries","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","B_IR_Grenade","B_IR_Grenade"};
		respawnmagazines[] = {"ACE_M84","Laserbatteries","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","B_IR_Grenade","B_IR_Grenade"};
		linkedItems[] = {"V_BandollierB_rgr","H_HelmetCrew_B","ACE_NVG_Gen4","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"V_BandollierB_rgr","H_HelmetCrew_B","ACE_NVG_Gen4","ItemMap","ItemCompass","ItemWatch"};
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
		weapons[] = {"T1_rhs_weap_m4a1_grip_Hamr_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"T1_rhs_weap_m4a1_grip_Hamr_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put","Rangefinder"};
		magazines[] = {"ACE_M84","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen"};
		respawnmagazines[] = {"ACE_M84","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen"};
		linkedItems[] = {"V_BandollierB_rgr","H_HelmetCrew_B","ACE_NVG_Gen4","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"V_BandollierB_rgr","H_HelmetCrew_B","ACE_NVG_Gen4","ItemMap","ItemCompass","ItemWatch"};
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
		weapons[] = {"T1_rhs_weap_m4a1_grip_Hamr_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"T1_rhs_weap_m4a1_grip_Hamr_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put","Rangefinder"};
		magazines[] = {"ACE_M84","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen"};
		respawnmagazines[] = {"ACE_M84","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen"};
		linkedItems[] = {"V_BandollierB_rgr","H_HelmetCrew_B","ACE_NVG_Gen4","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"V_BandollierB_rgr","H_HelmetCrew_B","ACE_NVG_Gen4","ItemMap","ItemCompass","ItemWatch"};
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
		weapons[] = {"T1_rhs_m4a1_m320_Hamr_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put","Laserdesignator","M72_LAW"};
		respawnWeapons[] = {"T1_rhs_m4a1_m320_Hamr_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put","Laserdesignator","M72_LAW"};
		magazines[] = {"Laserbatteries","ACE_M84","ACE_M84","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","B_IR_Grenade"};
		respawnmagazines[] = {"Laserbatteries","ACE_M84","ACE_M84","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","B_IR_Grenade"};
		items[] = {"ACE_IR_Strobe_Item","ACRE_PRC148",STDITEMS};
		respawnItems[] = {"ACE_IR_Strobe_Item","ACRE_PRC148",STDITEMS};
		icon = "iconManLeader";
		backpack = "T1_Kitbag_camo_Lead";
	};
	class T1_Section_Sgt_Standard_F: T1_Soldier_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "Section";
		displayName = "Section Sergeant";
		weapons[] = {"T1_rhs_m4a1_m320_Hamr_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put","Laserdesignator","M72_LAW"};
		respawnWeapons[] = {"Laserbatteries","T1_rhs_m4a1_m320_Hamr_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put","Laserdesignator","M72_LAW"};
		magazines[] = {"Laserbatteries","ACE_M84","ACE_M84","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","B_IR_Grenade"};
		respawnmagazines[] = {"ACE_M84","ACE_M84","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","B_IR_Grenade"};
		items[] = {"ACE_IR_Strobe_Item","ACRE_PRC148",STDITEMS};
		respawnItems[] = {"ACE_IR_Strobe_Item","ACRE_PRC148",STDITEMS};
		icon = "iconManLeader";
		backpack = "T1_Kitbag_camo_Lead";
	};
	class T1_Section_CLS_Standard_F: T1_Soldier_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "Section";
		displayName = "Combat Life Saver";
		weapons[] = {"T1_rhs_weap_m4a1_grip_Hamr_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put","Rangefinder","M72_LAW"};
		respawnWeapons[] = {"T1_rhs_weap_m4a1_grip_Hamr_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put","Rangefinder","M72_LAW"};
		magazines[] = {"HandGrenade","HandGrenade","ACE_M84","ACE_M84","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen"};
		respawnmagazines[] = {"HandGrenade","HandGrenade","ACE_M84","ACE_M84","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen"};
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
		weapons[] = {"T1_rhs_weap_m249_pip_L_Hamr","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"T1_rhs_weap_m249_pip_L_Hamr","Throw","Put","Rangefinder"};
		magazines[] = {"ACE_M84","rhs_200rnd_556x45_M_SAW","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnmagazines[] = {"ACE_M84","rhs_200rnd_556x45_M_SAW","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
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
		weapons[] = {"T1_rhs_weap_m4a1_grip_Hamr_pointer_F","Throw","Put","Rangefinder","M72_LAW"};
		respawnWeapons[] = {"T1_rhs_weap_m4a1_grip_Hamr_pointer_F","Throw","Put","Rangefinder","M72_LAW"};
		magazines[] = {"ACE_M84","ACE_M84","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		respawnmagazines[] = {"ACE_M84","ACE_M84","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","HandGrenade","HandGrenade","SmokeShell","SmokeShell"};
		backpack = "T1_Kitbag_camo_AAR";
		items[] = {STDITEMS};
		respawnItems[] = {STDITEMS};
	};
	class T1_Section_WS_Standard_F: T1_Soldier_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "Section";
		displayName = "Weapon Specialist";
		weapons[] = {"T1_srifle_EBR_DMS_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put","Rangefinder","BWA3_RGW90"};
		respawnWeapons[] = {"T1_srifle_EBR_DMS_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put","Rangefinder","BWA3_RGW90"};
		magazines[] = {"SmokeShell","HandGrenade","ACE_M84","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag"};
		respawnmagazines[] = {"SmokeShell","HandGrenade","ACE_M84","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag"};
		icon = "iconManAT";
		backpack = "T1_Kitbag_camo_ws";
		items[] = {STDITEMS,"ACE_RangeCard"};
		respawnItems[] = {STDITEMS,"ACE_RangeCard"};
	};
	class T1_Section_AT_Standard_F: T1_Soldier_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "Section";
		displayName = "Rifleman AT";
		weapons[] = {"T1_rhs_weap_m4a1_grip_Hamr_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put","Rangefinder","BWA3_RGW90"};
		respawnWeapons[] = {"T1_rhs_weap_m4a1_grip_Hamr_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put","Rangefinder","BWA3_RGW90"};
		magazines[] = {"SmokeShell","SmokeShell","HandGrenade","HandGrenade","ACE_M84","ACE_M84","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag"};
		respawnmagazines[] = {"SmokeShell","SmokeShell","HandGrenade","HandGrenade","ACE_M84","ACE_M84","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag"};
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
		weapons[] = {"T1_rhs_weap_m4a1_grip_Hamr_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put","Laserdesignator"};
		respawnWeapons[] = {"T1_rhs_weap_m4a1_grip_Hamr_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put","Laserdesignator"};
		magazines[] = {"ACE_M84","Laserbatteries","HandGrenade","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellYellow","SmokeShellYellow","SmokeShellOrange","SmokeShellOrange","SmokeShellBlue","SmokeShellBlue","B_IR_Grenade"};
		respawnmagazines[] = {"ACE_M84","Laserbatteries","HandGrenade","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellYellow","SmokeShellYellow","SmokeShellOrange","SmokeShellOrange","SmokeShellBlue","SmokeShellBlue","B_IR_Grenade"};
		items[] = {"ACE_IR_Strobe_Item","ACRE_PRC148",STDITEMS};
		respawnItems[] = {"ACE_IR_Strobe_Item","ACRE_PRC148",STDITEMS};
		icon = "iconManLeader";
		backpack = "T1_Kitbag_camo_Lead";
	};
	class T1_Platoon_Medic_Standard_F: T1_Soldier_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "Platoon";
		displayName = "Medic";
		weapons[] = {"T1_rhs_weap_m4a1_grip_Hamr_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"T1_rhs_weap_m4a1_grip_Hamr_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put","Rangefinder"};
		magazines[] = {"HandGrenade","ACE_M84","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","SmokeShell","SmokeShell","SmokeShell","SmokeShell"};
		respawnmagazines[] = {"HandGrenade","ACE_M84","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","SmokeShell","SmokeShell","SmokeShell","SmokeShell"};
		items[] = {"ACRE_PRC148",STDITEMS,"ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine"};
		respawnItems[] = {"ACRE_PRC148",STDITEMS,"ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine"};
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
		weapons[] = {"T1_rhs_weap_m4a1_grip_Hamr_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put","Laserdesignator"};
		respawnWeapons[] = {"T1_rhs_weap_m4a1_grip_Hamr_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put","Laserdesignator"};
		magazines[] = {"HandGrenade","HandGrenade","ACE_M84","Laserbatteries","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red","B_IR_Grenade"};
		respawnmagazines[] = {"HandGrenade","HandGrenade","ACE_M84","Laserbatteries","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red","B_IR_Grenade"};
		items[] = {"ACRE_PRC148",STDITEMS,"ACE_M26_Clacker","ACE_DefusalKit"};
		respawnItems[] = {"ACRE_PRC148",STDITEMS,"ACE_M26_Clacker","ACE_DefusalKit"};
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
		weapons[] = {"T1_rhs_m4a1_m320_Hamr_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put","Laserdesignator"};
		respawnWeapons[] = {"T1_rhs_m4a1_m320_Hamr_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put","Laserdesignator"};
		magazines[] = {"HandGrenade","ACE_M84","Laserbatteries","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShell","SmokeShellRed","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell"};
		respawnmagazines[] = {"HandGrenade","ACE_M84","Laserbatteries","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShell","SmokeShellRed","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell"};
		items[] = {"ACRE_PRC148","B_UavTerminal",STDITEMS};
		respawnItems[] = {"ACRE_PRC148","B_UavTerminal",STDITEMS};
		backpack = "T1_Carryall_camo_PLSgt_JTAC";
	};
	class B_Heli_Light_01_F;
	class B_Heli_Light_01_armed_F;
	class T1_Heli_Light_01_Camo_F: B_Heli_Light_01_F
	{
		scope = 2;
		faction = "T1_Units";
		displayName = "T1 MH9";
		hiddenSelectionsTextures[] = {"\t1_units\data\vehicles\MH9\t1_mh9_camo_co.paa"};
		crew = "T1_Pilot_Camo_F";
	};
	class T1_Heli_Light_01_armed_Camo_F: B_Heli_Light_01_armed_F
	{
		scope = 2;
		faction = "T1_Units";
		displayName = "T1 AH9";
		hiddenSelectionsTextures[] = {"\t1_units\data\vehicles\MH9\t1_mh9_camo_co.paa"};
		crew = "T1_Pilot_Camo_F";
	};
	class T1_Heli_Light_01_Night_F: B_Heli_Light_01_F
	{
		scope = 2;
		faction = "T1_Units";
		displayName = "T1 MH9";
		hiddenSelectionsTextures[] = {"\t1_units\data\vehicles\MH9\t1_mh9_night_co.paa"};
		crew = "T1_Pilot_Night_F";
	};
	class T1_Heli_Light_01_armed_Night_F: B_Heli_Light_01_armed_F
	{
		scope = 2;
		faction = "T1_Units";
		displayName = "T1 AH9";
		hiddenSelectionsTextures[] = {"\t1_units\data\vehicles\MH9\t1_mh9_night_co.paa"};
		crew = "T1_Pilot_Night_F";
	};
	class T1_Heli_Light_01_Black_F: B_Heli_Light_01_F
	{
		scope = 2;
		faction = "T1_Units";
		displayName = "T1 MH9";
		hiddenSelectionsTextures[] = {"\t1_units\data\vehicles\MH9\t1_mh9_black_co.paa"};
		crew = "T1_Pilot_Black_F";
	};
	class T1_Heli_Light_01_armed_Black_F: B_Heli_Light_01_armed_F
	{
		scope = 2;
		faction = "T1_Units";
		displayName = "T1 AH9";
		hiddenSelectionsTextures[] = {"\t1_units\data\vehicles\MH9\t1_mh9_black_co.paa"};
		crew = "T1_Pilot_Black_F";
	};
	class T1_Heli_Light_01_BlackCamo_F: B_Heli_Light_01_F
	{
		scope = 2;
		faction = "T1_Units";
		displayName = "T1 MH9";
		hiddenSelectionsTextures[] = {"\t1_units\data\vehicles\MH9\t1_mh9_BlackCamo_co.paa"};
		crew = "T1_Pilot_BlackCamo_F";
	};
	class T1_Heli_Light_01_armed_BlackCamo_F: B_Heli_Light_01_armed_F
	{
		scope = 2;
		faction = "T1_Units";
		displayName = "T1 AH9";
		hiddenSelectionsTextures[] = {"\t1_units\data\vehicles\MH9\t1_mh9_BlackCamo_co.paa"};
		crew = "T1_Pilot_BlackCamo_F";
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
			class _xx_rhs_200rnd_556x45_M_SAW
			{
				magazine = "rhs_200rnd_556x45_M_SAW";
				count = 18;
			};
			class _xx_20Rnd_762x51_Mag
			{
				magazine = "20Rnd_762x51_Mag";
				count = 12;
			};
			class _xx_11Rnd_45ACP_Mag
			{
				magazine = "11Rnd_45ACP_Mag";
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
			class _xx_ACE_fieldDressing
			{
				count = 80;
				name = "ACE_fieldDressing";
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
				count = 10;
				name = "ACE_bloodIV_250";
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
			class _xx_BWA3_RGW90
			{
				weapon = "BWA3_RGW90";
				count = 1;
			};
			class _xx_M72_LAW
			{
				weapon = "M72_LAW";
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
			class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag
			{
				magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
				count = 48;
			};
			class _xx_BWA3_120Rnd_762x51
			{
				magazine = "BWA3_120Rnd_762x51";
				count = 32;
			};
			class _xx_7Rnd_408_Mag
			{
				magazine = "7Rnd_408_Mag";
				count = 36;
			};
			class _xx_BWA3_40Rnd_46x30_MP7
			{
				magazine = "BWA3_40Rnd_46x30_MP7";
				count = 16;
			};
			class _xx_11Rnd_45ACP_Mag
			{
				magazine = "11Rnd_45ACP_Mag";
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
		};
		class TransportItems
		{
			class _xx_ACE_fieldDressing
			{
				count = 40;
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
			class _xx_M72_LAW
			{
				weapon = "M72_LAW";
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
	class MRAP_01_base_F;
	class B_MRAP_01_F: MRAP_01_base_F
	{
		transportMaxMagazines = 90;
		class TransportMagazines
		{
			class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag
			{
				magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
				count = 16;
			};
			class _xx_rhs_200rnd_556x45_M_SAW
			{
				magazine = "rhs_200rnd_556x45_M_SAW";
				count = 6;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 10;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 10;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine = "1Rnd_Smoke_Grenade_shell";
				count = 4;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine = "1Rnd_SmokeGreen_Grenade_shell";
				count = 4;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine = "1Rnd_SmokeOrange_Grenade_shell";
				count = 4;
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell
			{
				magazine = "1Rnd_SmokeBlue_Grenade_shell";
				count = 4;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 4;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 4;
			};
			class _xx_SmokeShellOrange
			{
				magazine = "SmokeShellOrange";
				count = 4;
			};
			class _xx_SmokeShellBlue
			{
				magazine = "SmokeShellBlue";
				count = 4;
			};
			class _xx_B_IR_Grenade
			{
				magazine = "B_IR_Grenade";
				count = 3;
			};
		};
		class TransportItems
		{
			class _xx_ACE_fieldDressing
			{
				count = 50;
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
				name = "ACE_bloodIV_250";
			};
		};
		class TransportWeapons
		{
			class _xx_T1_rhs_weap_m4a1_grip_Hamr_pointer_F
			{
				weapon = "T1_rhs_weap_m4a1_grip_Hamr_pointer_F";
				count = 1;
			};
			class _xx_BWA3_RGW90
			{
				weapon = "BWA3_RGW90";
				count = 1;
			};
			class _xx_M72_LAW
			{
				weapon = "M72_LAW";
				count = 3;
			};
		};
	};
	class MRAP_01_gmg_base_F;
	class B_MRAP_01_gmg_F: MRAP_01_gmg_base_F
	{
		transportMaxMagazines = 90;
		class TransportMagazines
		{
			class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag
			{
				magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
				count = 16;
			};
			class _xx_rhs_200rnd_556x45_M_SAW
			{
				magazine = "rhs_200rnd_556x45_M_SAW";
				count = 6;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 10;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 10;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine = "1Rnd_Smoke_Grenade_shell";
				count = 4;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine = "1Rnd_SmokeGreen_Grenade_shell";
				count = 4;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine = "1Rnd_SmokeOrange_Grenade_shell";
				count = 4;
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell
			{
				magazine = "1Rnd_SmokeBlue_Grenade_shell";
				count = 4;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 4;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 4;
			};
			class _xx_SmokeShellOrange
			{
				magazine = "SmokeShellOrange";
				count = 4;
			};
			class _xx_SmokeShellBlue
			{
				magazine = "SmokeShellBlue";
				count = 4;
			};
			class _xx_B_IR_Grenade
			{
				magazine = "B_IR_Grenade";
				count = 3;
			};
		};
		class TransportItems
		{
			class _xx_ACE_fieldDressing
			{
				count = 50;
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
				name = "ACE_bloodIV_250";
			};
		};
		class TransportWeapons
		{
			class _xx_T1_rhs_weap_m4a1_grip_Hamr_pointer_F
			{
				weapon = "T1_rhs_weap_m4a1_grip_Hamr_pointer_F";
				count = 1;
			};
			class _xx_BWA3_RGW90
			{
				weapon = "BWA3_RGW90";
				count = 1;
			};
			class _xx_M72_LAW
			{
				weapon = "M72_LAW";
				count = 3;
			};
		};
	};
	class MRAP_01_hmg_base_F;
	class B_MRAP_01_hmg_F: MRAP_01_hmg_base_F
	{
		transportMaxMagazines = 90;
		class TransportMagazines
		{
			class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag
			{
				magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
				count = 16;
			};
			class _xx_rhs_200rnd_556x45_M_SAW
			{
				magazine = "rhs_200rnd_556x45_M_SAW";
				count = 6;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 10;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 10;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine = "1Rnd_Smoke_Grenade_shell";
				count = 4;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine = "1Rnd_SmokeGreen_Grenade_shell";
				count = 4;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine = "1Rnd_SmokeOrange_Grenade_shell";
				count = 4;
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell
			{
				magazine = "1Rnd_SmokeBlue_Grenade_shell";
				count = 4;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 4;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 4;
			};
			class _xx_SmokeShellOrange
			{
				magazine = "SmokeShellOrange";
				count = 4;
			};
			class _xx_SmokeShellBlue
			{
				magazine = "SmokeShellBlue";
				count = 4;
			};
			class _xx_B_IR_Grenade
			{
				magazine = "B_IR_Grenade";
				count = 3;
			};
		};
		class TransportItems
		{
			class _xx_ACE_fieldDressing
			{
				count = 50;
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
				name = "ACE_bloodIV_250";
			};
		};
		class TransportWeapons
		{
			class _xx_T1_rhs_weap_m4a1_grip_Hamr_pointer_F
			{
				weapon = "T1_rhs_weap_m4a1_grip_Hamr_pointer_F";
				count = 1;
			};
			class _xx_BWA3_RGW90
			{
				weapon = "BWA3_RGW90";
				count = 1;
			};
			class _xx_M72_LAW
			{
				weapon = "M72_LAW";
				count = 3;
			};
		};
	};
	class T1_B_MRAP_01_Woodland_F: B_MRAP_01_F
	{
		scope = 2;
		faction = "T1_Units";
		displayName = "T1 Hunter";
		hiddenSelectionsTextures[] = {"\t1_units\data\vehicles\hunter\t1_hunter_woodland_base_co.paa","\t1_units\data\vehicles\hunter\t1_hunter_woodland_adds_co.paa",""};
	};
	class T1_B_MRAP_01_gmg_Woodland_F: B_MRAP_01_gmg_F
	{
		scope = 2;
		faction = "T1_Units";
		displayName = "T1 Hunter GMG";
		hiddenSelectionsTextures[] = {"\t1_units\data\vehicles\hunter\t1_hunter_woodland_base_co.paa","\t1_units\data\vehicles\hunter\t1_hunter_woodland_adds_co.paa","\t1_units\data\vehicles\hunter\t1_hunter_woodland_turret_co.paa"};
	};
	class T1_B_MRAP_01_hmg_Woodland_F: B_MRAP_01_hmg_F
	{
		scope = 2;
		faction = "T1_Units";
		displayName = "T1 Hunter HMG";
		hiddenSelectionsTextures[] = {"\t1_units\data\vehicles\hunter\t1_hunter_woodland_base_co.paa","\t1_units\data\vehicles\hunter\t1_hunter_woodland_adds_co.paa","\t1_units\data\vehicles\hunter\t1_hunter_woodland_turret_co.paa"};
	};
};
class CfgWeapons
{
	class InventoryOpticsItem_Base_F;
	class Iteminfo;
	class ItemCore;
	class optic_SOS: ItemCore
	{
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class Snip
				{
					visionMode[] = {"Normal","NVG"};
				};
			};
		};
	};	
	class optic_DMS: ItemCore
	{
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class Snip
				{
					visionMode[] = {"Normal","NVG"};
				};
			};
		};
	};
	class optic_Hamr;
	class BWA3_optic_24x72: optic_Hamr
	{
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class Scope
				{
					visionMode[] = {"Normal","NVG"};
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
	class hgun_Pistol_heavy_01_F;
	class T1_hgun_Pistol_heavy_01_snds_F: hgun_Pistol_heavy_01_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_MRD";
				slot = "CowsSlot";
			};
			class LinkedItemsMuzzle
			{
				item = "muzzle_snds_acp";
				slot = "MuzzleSlot";
			};
		};
	};
	class srifle_EBR_F;
	class T1_srifle_EBR_DMS_pointer_F: srifle_EBR_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_DMS";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "BWA3_acc_LLM01_irlaser";
				slot = "PointerSlot";
			};
		};
	};
	class BWA3_G28_Assault;
	class BWA3_G28_Assault_SOS_pointer_sd: BWA3_G28_Assault
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_SOS";
				slot = "CowsSlot";
			};
			class LinkedItemsMuzzle
			{
				item = "BWA3_muzzle_snds_G28";
				slot = "MuzzleSlot";
			};
			class LinkedItemsAcc
			{
				item = "BWA3_acc_LLM01_irlaser";
				slot = "PointerSlot";
			};
		};
	};
	class srifle_LRR_F;
	class T1_srifle_LRR_SOS_pointer_F: srifle_LRR_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_SOS";
				slot = "CowsSlot";
			};
		};
	};
	class BWA3_MP7;
	class T1_BWA3_MP7_LLM01_snds_F: BWA3_MP7
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
				item = "BWA3_acc_LLM01_irlaser";
				slot = "PointerSlot";
			};
		};
	};
	class hlc_lmg_M60E4;
	class T1_LMG_hlc_M60E4_Hamr: hlc_lmg_M60E4
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_Hamr";
				slot = "CowsSlot";
			};
		};
	};
	class rhs_weap_m249_pip_L;
	class T1_rhs_weap_m249_pip_L_Hamr: rhs_weap_m249_pip_L
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_Hamr";
				slot = "CowsSlot";
			};
		};
	};
	class BWA3_MG5;
	class T1_LMG_BWA3_MG5_Hamr_pointer_F: BWA3_MG5
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_Hamr";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "BWA3_acc_LLM01_irlaser";
				slot = "PointerSlot";
			};
		};
	};
	class rhs_weap_m4a1_grip;
	class T1_rhs_weap_m4a1_grip_Hamr_pointer_F: rhs_weap_m4a1_grip
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_Hamr";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "BWA3_acc_LLM01_irlaser";
				slot = "PointerSlot";
			};
		};
	};
	class rhs_m4a1_m320;
	class T1_rhs_m4a1_m320_Hamr_pointer_F: rhs_m4a1_m320
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_Hamr";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "BWA3_acc_LLM01_irlaser";
				slot = "PointerSlot";
			};
		};
	};	
	class T1_rhs_weap_m4a1_grip_Hamr_pointer_SD_F: rhs_weap_m4a1_grip
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_Hamr";
				slot = "CowsSlot";
			};
			class LinkedItemsMuzzle
			{
				item = "rhsusf_acc_rotex5_grey";
				slot = "MuzzleSlot";
			}
			class LinkedItemsAcc
			{
				item = "BWA3_acc_LLM01_irlaser";
				slot = "PointerSlot";
			};
		};
	};
	class T1_rhs_m4a1_m320_Hamr_pointer_SD_F: rhs_m4a1_m320
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_Hamr";
				slot = "CowsSlot";
			};
			class LinkedItemsMuzzle
			{
				item = "rhsusf_acc_rotex5_grey";
				slot = "MuzzleSlot";
			}
			class LinkedItemsAcc
			{
				item = "BWA3_acc_LLM01_irlaser";
				slot = "PointerSlot";
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
	class T1_U_Sniper_Standard: Uniform_Base
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
};
//};
