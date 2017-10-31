/////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.90
//Thu Sep 17 17:35:51 2015 : Source 'file' date Thu Sep 17 17:35:51 2015
//http://dev-heaven.net/projects/list_files/mikero-pbodll
/////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class t1_units_desert : config.bin{
class CfgPatches
{
	class t1_units_desert
	{
		units[] = {
			"T1_B_AssaultPack_SF_Radioman_DM_Desert",
			"T1_FieldPack_Scout_Lead_Desert",
			"T1_Backpack_PL_Lead_Desert",
			"T1_AssaultPack_PLSgt_JTAC_Desert",
			"T1_B_AssaultPack_Exp_SF_Desert",
			"T1_AssaultPack_medic_sf_Desert",
			"T1_AssaultPack_Lead_SF_Desert",
			"T1_AssaultPack_MMG_Desert",
			"T1_AssaultPack_cls_Desert",
			"T1_AssaultPack_AR_Desert",
			"T1_AssaultPack_AAR_Desert",
			"T1_AssaultPack_pl_medic_Desert",
			"T1_AssaultPack_PLEOD_Desert",
			"T1_Kitbag_Desert",
			"T1_Kitbag_Desert_AT",
			"T1_Kitbag_Desert_Medium_AT",
			"T1_Kitbag_Desert_AA",
			"T1_Kitbag_AMG_Desert",
			"T1_Carryall_Desert",
			"T1_Carryall_Desert_AAT",
			"T1_Carryall_Desert_Medium_AAT",		
			"T1_Soldier_Desert_F",
			"T1_Soldier_F_D",
			"T1_SF_Marksman_SOS_Standard_F_D",
			"T1_SF_Explosive_Standard_F_D",
			"T1_SF_Medic_Standard_F_D",
			"T1_SF_FTL_Standard_F_D",
			"T1_SF_AT_Standard_F_D",
			"T1_SF_AR_Standard_F_D",
			"T1_Spotter_Standard_F_D",
			"T1_Sniper_Standard_F_D",
			"T1_Spotter_Light_F_D",
			"T1_Specialist_AT_Standard_F_D",
			"T1_Specialist_AAT_Standard_F_D",
			"T1_Specialist_Medium_AT_Standard_F_D",
			"T1_Specialist_Medium_AAT_Standard_F_D",
			"T1_Specialist_AA_Standard_F_D",
			"T1_Specialist_AAA_Standard_F_D",
			"T1_Specialist_MG_Standard_F_D",
			"T1_Specialist_AMG_Standard_F_D",
			"T1_Scout_TL_Standard_F_D",
			"T1_Scout_Standard_F_D",
			"T1_Section_Lead_Standard_F_D",
			"T1_Section_Sgt_Standard_F_D",
			"T1_Section_CLS_Standard_F_D",
			"T1_Section_AR_Standard_F_D",
			"T1_Section_AR_Alt_F_D",
			"T1_Section_AAR_Standard_F_D",
			"T1_Section_AT_Standard_F_D",
			"T1_Section_AT_DM_F_D",
			"T1_Platoon_Lead_Standard_F_D",
			"T1_Platoon_Medic_Standard_F_D",
			"T1_Platoon_EOD_Standard_F_D",
			"T1_Platoon_Sgt_Standard_F_D",				
			"T1_B_MRAP_01_Desert_F",
			"T1_B_MRAP_01_gmg_Desert_F",
			"T1_B_MRAP_01_hmg_Desert_F",
			"T1_B_MRAP_01_DesertPlain_F",
			"T1_B_MRAP_01_gmg_DesertPlain_F",
			"T1_B_MRAP_01_hmg_DesertPlain_F"
		};
		weapons[] = {
			"T1_V_PlateCarrier2_Desert",
			"T1_V_PlateCarrier2_medic_desert",
			"T1_V_PlateCarrier2_Desert_SFAR",
			"T1_DMR_SHADOW_SD_Desert",
			"T1_rhs_uniform_g3_tan",
			"T1_rhs_uniform_FROG01_d",
			"T1_U_B_FullGhillie_ard",
			"T1_weap_mmg_sf",
			"T1_ABR_SD_Desert",
			"T1_weap_sierra_RHS_desert",
			"T1_weap_sierra_spotter_RHS_desert",
			"T1_weap_sierra_desert"
		};
		requiredVersion = 0.1;
		requiredAddons[] = {"t1_units"};
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
};
class CfgVehicles
{	
//-------------------------------Backpacks-----------------------------------
/*
	class tf_rt1523g_rhs;			// hiddenSelectionsTextures[] = {"\task_force_radio_items\models\data\clf_prc117g_rhs_co.paa.paa"};
	class tf_rt1523g_sage;			// hiddenSelectionsTextures[] = {"\task_force_radio_items\models\data\camo\backpack_sage_co.paa"};
	class B_AssaultPack_cbr;		// hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_compact_cbr_co.paa"};
	class B_Kitbag_cbr;				// hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_tortila_cbr_co.paa"};
	class B_Carryall_cbr;			// hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_fast_cbr_co.paa"};
*/
	
	class T1_FieldPack_Scout_Lead;
	class T1_B_AssaultPack_SF_Radioman_DM;
	class T1_Backpack_PL_Lead;
	class T1_AssaultPack_PLSgt_JTAC;
	class T1_B_AssaultPack_Exp_SF;
	class T1_AssaultPack_medic_sf;
	class T1_AssaultPack_Lead_SF;
	class T1_AssaultPack_MMG;
	class T1_AssaultPack_cls;
	class T1_AssaultPack_AR;
	class T1_AssaultPack_AAR;
	class T1_AssaultPack_pl_medic;
	class T1_AssaultPack_PLEOD;
	
	class T1_Kitbag_camo;
	class T1_Kitbag_camo_AT;
	class T1_Kitbag_camo_Medium_AT;
	class T1_Kitbag_camo_AA;
	class T1_Kitbag_AMG;
	
	class T1_Carryall_camo;
	class T1_Carryall_camo_AAT;
	class T1_Carryall_camo_Medium_AAT;
	
	
	
	
	class T1_FieldPack_Scout_Lead_Desert: T1_FieldPack_Scout_Lead
	{
		hiddenSelectionsTextures[] = {"\task_force_radio_items\models\data\camo\backpack_sage_co.paa"};
	};
	class T1_B_AssaultPack_SF_Radioman_DM_Desert: T1_B_AssaultPack_SF_Radioman_DM
	{
		scope = 1;
		displayName = "Assaultpack SF Marksman (T1 Desert)";
		hiddenSelectionsTextures[] = {"\task_force_radio_items\models\data\clf_prc117g_rhs_co.paa.paa"};
	};
	class T1_Backpack_PL_Lead_Desert: T1_Backpack_PL_Lead
	{
		scope = 1;
		hiddenSelectionsTextures[] = {"\task_force_radio_items\models\data\clf_prc117g_rhs_co.paa.paa"};
	};
	class T1_AssaultPack_PLSgt_JTAC_Desert: T1_AssaultPack_PLSgt_JTAC
	{
		scope = 1;
		hiddenSelectionsTextures[] = {"\task_force_radio_items\models\data\clf_prc117g_rhs_co.paa.paa"};
	};
	
	class T1_B_AssaultPack_Exp_SF_Desert: T1_B_AssaultPack_Exp_SF
	{
		scope = 1;
		hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_compact_cbr_co.paa"};
	};	
	class T1_AssaultPack_medic_sf_Desert: T1_AssaultPack_medic_sf
	{
		scope = 1;
		displayName = "AssaultPack Medic (T1 Desert)";
		hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_compact_cbr_co.paa"};
	};
	class T1_AssaultPack_Lead_SF_Desert: T1_AssaultPack_Lead_SF
	{
		scope = 1;
		displayName = "AssaultPack SF Lead (T1 Desert)";
		hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_compact_cbr_co.paa"};
	};
	class T1_AssaultPack_MMG_Desert: T1_AssaultPack_MMG
	{
		scope = 1;
		hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_compact_cbr_co.paa"};
	};
	class T1_AssaultPack_cls_Desert: T1_AssaultPack_cls
	{
		scope = 1;
		displayName = "AssaultPack CLS (T1 Desert)";
		hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_compact_cbr_co.paa"};
	};
	class T1_AssaultPack_AR_Desert: T1_AssaultPack_AR
	{
		scope = 1;
		hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_compact_cbr_co.paa"};
	};
	class T1_AssaultPack_AAR_Desert: T1_AssaultPack_AAR
	{
		scope = 1;
		hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_compact_cbr_co.paa"};
	};
	class T1_AssaultPack_pl_medic_Desert: T1_AssaultPack_pl_medic
	{
		scope = 1;
		displayName = "AssaultPack Medic";
		hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_compact_cbr_co.paa"};
	};
	class T1_AssaultPack_PLEOD_Desert: T1_AssaultPack_PLEOD
	{
		scope = 1;
		hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_compact_cbr_co.paa"};
	};
	
	class T1_Kitbag_Desert: T1_Kitbag_camo
	{
		scope = 1;
		displayName = "Kitbag (T1 Desert)";
		hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_fast_cbr_co.paa"};
	};
	class T1_Kitbag_Desert_AT: T1_Kitbag_camo_AT
	{
		scope = 1;
		hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_fast_cbr_co.paa"};
	};
	class T1_Kitbag_Desert_Medium_AT: T1_Kitbag_camo_Medium_AT
	{
		scope = 1;
		hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_fast_cbr_co.paa"};
	};
	class T1_Kitbag_Desert_AA: T1_Kitbag_camo_AA
	{
		scope = 1;
		hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_fast_cbr_co.paa"};
	};
	class T1_Kitbag_AMG_Desert: T1_Kitbag_AMG
	{
		scope = 1;
		hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_fast_cbr_co.paa"};
	};
	
	
	class T1_Carryall_Desert: T1_Carryall_camo
	{
		scope = 1;
		displayName = "Carryall Backpack (T1 Desert)";
		hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_tortila_cbr_co.paa"};
	};
	class T1_Carryall_Desert_AAT: T1_Carryall_camo_AAT
	{
		scope = 1;
		maximumLoad = 600;
		hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_tortila_cbr_co.paa"};
	};
	class T1_Carryall_Desert_Medium_AAT: T1_Carryall_camo_Medium_AAT
	{
		scope = 1;
		hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_tortila_cbr_co.paa"};
	};
		

/*	
	class T1_Soldier_F;
	class T1_Soldier_Desert_F: T1_Soldier_F
	{
		scope = 1;
		uniformClass = "T1_U_Squad_Standard_desert";
		hiddenSelectionsTextures[] = {"\t1_units_desert\data\units\t1_clothing1_desert_co.paa"};
	};
//-----------------------new basic desert stuff-------------------------------	
	class T1_Soldier_F_D: T1_Soldier_F
	{
		uniformClass = "t1_rhs_uniform_FROG01_d"
		linkedItems[] = {
			"T1_V_PlateCarrier2_Desert",
			"rhsusf_mich_helmet_marpatd_norotos_headset",
			"ACE_NVG_Gen4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[] = {
			"T1_V_PlateCarrier2_Desert",
			"rhsusf_mich_helmet_marpatd_norotos_headset",
			"ACE_NVG_Gen4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
*/
	
//-----------------------rhs desert sf stuff starts here----------------------
	class T1_SF_Marksman_SOS_Standard_F;
	class T1_SF_Marksman_SOS_Standard_F_D: T1_SF_Marksman_SOS_Standard_F
	{
		scope = 2;
		uniformClass = "t1_rhs_uniform_g3_tan";
		faction = "T1_Units_Desert";

		backpack = "T1_B_AssaultPack_SF_Radioman_DM_Desert";
		weapons[] = {
			"T1_ABR_SD_Desert",
			"Throw",
			"Put",
			"ACE_Vector"
		};
		respawnWeapons[] = {
			"T1_ABR_SD_Desert",
			"Throw",
			"Put",
			"ACE_Vector"
		};
		linkedItems[] = {
			"T1_V_PlateCarrier2_Desert",
			"rhsusf_opscore_ut_pelt_cam",
			"ACE_NVG_Gen4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[] = {
			"T1_V_PlateCarrier2_Desert",
			"rhsusf_opscore_ut_pelt_cam",
			"ACE_NVG_Gen4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class T1_SF_Explosive_Standard_F;
	class T1_SF_Explosive_Standard_F_D: T1_SF_Explosive_Standard_F
	{
		scope = 2;
		uniformClass = "t1_rhs_uniform_g3_tan";
		faction = "T1_Units_Desert";
		backpack = "T1_B_AssaultPack_Exp_SF_Desert";
		weapons[] = {
			"T1_DMR_SHADOW_SD_Desert",
			"Throw",
			"Put",
			"ACE_Vector"
		};
		respawnWeapons[] = {
			"T1_DMR_SHADOW_SD_Desert",
			"Throw",
			"Put",
			"ACE_Vector"
		};

		linkedItems[] = {
			"T1_V_PlateCarrier2_Desert",
			"rhsusf_opscore_ut_pelt_cam",
			"ACE_NVG_Gen4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[] = {
			"T1_V_PlateCarrier2_Desert",
			"rhsusf_opscore_ut_pelt_cam",
			"ACE_NVG_Gen4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class T1_SF_Medic_Standard_F;
	class T1_SF_Medic_Standard_F_D: T1_SF_Medic_Standard_F
	{
		scope = 2;
		uniformClass = "t1_rhs_uniform_g3_tan";
		faction = "T1_Units_Desert";

		backpack = "T1_AssaultPack_medic_sf_Desert";
		weapons[] = {
			"T1_DMR_SHADOW_SD_Desert",
			"Throw",
			"Put",
			"ACE_Vector"
		};
		respawnWeapons[] = {
			"T1_DMR_SHADOW_SD_Desert",
			"Throw",
			"Put",
			"ACE_Vector"
		};
		linkedItems[] = {
			"T1_V_PlateCarrier2_Desert",
			"rhsusf_opscore_ut_pelt_cam",
			"ACE_NVG_Gen4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[] = {
			"T1_V_PlateCarrier2_Desert",
			"rhsusf_opscore_ut_pelt_cam",
			"ACE_NVG_Gen4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class T1_SF_FTL_Standard_F;
	class T1_SF_FTL_Standard_F_D: T1_SF_FTL_Standard_F
	{
		scope = 2;
		uniformClass = "t1_rhs_uniform_g3_tan";
		faction = "T1_Units_Desert";

		backpack = "T1_AssaultPack_Lead_SF_Desert";
		weapons[] = {
			"T1_DMR_SHADOW_SD_Desert",
			"rhs_weap_M320",
			"Throw",
			"Put",
			"ACE_MX2A"
		};
		respawnWeapons[] = {
			"T1_DMR_SHADOW_SD_Desert",
			"rhs_weap_M320",
			"Throw",
			"Put",
			"ACE_MX2A"
		};

		linkedItems[] = {
			"T1_V_PlateCarrier2_Desert",
			"rhsusf_opscore_ut_pelt_cam",
			"ACE_NVG_Gen4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[] = {
			"T1_V_PlateCarrier2_Desert",
			"rhsusf_opscore_ut_pelt_cam",
			"ACE_NVG_Gen4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class T1_SF_AT_Standard_F;
	class T1_SF_AT_Standard_F_D: T1_SF_AT_Standard_F
	{
		scope = 2;
		uniformClass = "t1_rhs_uniform_g3_tan";
		faction = "T1_Units_Desert";
		weapons[] = {
			"T1_DMR_SHADOW_SD_Desert",
			"Throw",
			"Put",
			"ACE_Vector",
			"tf47_at4_heat"
		};
		respawnWeapons[] = {
			"T1_DMR_SHADOW_SD_Desert",
			"Throw",
			"Put",
			"ACE_Vector",
			"tf47_at4_heat"
		};
		linkedItems[] = {
			"T1_V_PlateCarrier2_Desert",
			"rhsusf_opscore_ut_pelt_cam",
			"ACE_NVG_Gen4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[] = {
			"T1_V_PlateCarrier2_Desert",
			"rhsusf_opscore_ut_pelt_cam",
			"ACE_NVG_Gen4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class T1_SF_AR_Standard_F;
	class T1_SF_AR_Standard_F_D: T1_SF_AR_Standard_F
	{
		scope = 2;
		uniformClass = "t1_rhs_uniform_g3_tan";
		faction = "T1_Units_Desert";
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
		linkedItems[] = {
			"T1_V_PlateCarrier2_Desert_SFAR",
			"rhsusf_opscore_ut_pelt_cam",
			"ACE_NVG_Gen4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[] = {
			"T1_V_PlateCarrier2_Desert_SFAR",
			"rhsusf_opscore_ut_pelt_cam",
			"ACE_NVG_Gen4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		camouflage = 1.0;
	};
//----------------------Snipers---------------------------------------------	
	class T1_Spotter_Standard_F;
	class T1_Spotter_Standard_F_D: T1_Spotter_Standard_F
	{
		faction = "T1_Units_Desert";
		uniformClass = "T1_U_B_FullGhillie_ard";
		model = "\Ghillie\ghillie.p3d";
		modelSides[] = {3,1};
		uniformAccessories[] = {};
		linkedItems[] = {
			"T1_V_PlateCarrier2_Desert",
			"ACE_NVG_Gen4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[] = {
			"T1_V_PlateCarrier2_Desert",
			"ACE_NVG_Gen4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class T1_Sniper_Standard_F;
	class T1_Sniper_Standard_F_D: T1_Sniper_Standard_F
	{
		faction = "T1_Units_Desert";
		uniformClass = "T1_U_B_FullGhillie_ard";
		model = "\Ghillie\ghillie.p3d";
		modelSides[] = {3,1};
		uniformAccessories[] = {};
		weapons[] = {
			"T1_weap_sierra_desert",
			"hgun_P07_snds_F",
			"Throw",
			"Put",
			"Rangefinder"
		};
		respawnWeapons[] = {
			"T1_weap_sierra_desert",
			"hgun_P07_snds_F",
			"Throw",
			"Put",
			"Rangefinder"
		};
		linkedItems[] = {
			"T1_V_PlateCarrier2_Desert",
			"ACE_NVG_Gen4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[] = {
			"T1_V_PlateCarrier2_Desert",
			"ACE_NVG_Gen4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	
	class T1_Spotter_Light_F;
	class T1_Spotter_Light_F_D: T1_Spotter_Light_F
	{
		scope = 2;
		t1_DutyMod = 0.965;
		faction = "T1_Units_Desert";
		vehicleClass = "Special";
		displayName = "T1 Spotter";
		uniformClass = "T1_U_B_FullGhillie_ard";
		model = "\Ghillie\ghillie.p3d";
		modelSides[] = {3,1};
		uniformAccessories[] = {};
		weapons[] = {
			"T1_weap_sierra_spotter_RHS_desert",			
			"Throw",
			"Put",
			"Laserdesignator"
		};
		respawnWeapons[] = {
			"T1_weap_sierra_spotter_RHS_desert",			
			"Throw",
			"Put",
			"Laserdesignator"
		};
		linkedItems[] = {
			"T1_V_PlateCarrier2_Desert",
			"ACE_NVG_Gen4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[] = {
			"T1_V_PlateCarrier2_Desert",
			"ACE_NVG_Gen4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class T1_Sniper_Light_F_D: T1_Sniper_Standard_F
	{
		scope = 2;
		t1_DutyMod = 0.965;
		faction = "T1_Units_Desert";
		vehicleClass = "Special";
		displayName = "T1 Sniper light";
		uniformClass = "T1_U_B_FullGhillie_ard";
		model = "\Ghillie\ghillie.p3d";
		modelSides[] = {3,1};
		uniformAccessories[] = {};
		weapons[] = {
			"T1_weap_sierra_RHS_desert",	
			"hgun_P07_snds_F",
			"Throw",
			"Put",
			"Rangefinder"
		};
		respawnWeapons[] = {
			"T1_weap_sierra_RHS_desert",
			"hgun_P07_snds_F",			
			"Throw",
			"Put",
			"Rangefinder"
		};
		linkedItems[] = {
			"T1_V_PlateCarrier2_Desert",
			"ACE_NVG_Gen4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[] = {
			"T1_V_PlateCarrier2_Desert",
			"ACE_NVG_Gen4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};

	};
//-----------------------------rhs desert basic stuff starts here-----------------
		
	class T1_Specialist_AT_Standard_F;
	class T1_Specialist_AT_Standard_F_D: T1_Specialist_AT_Standard_F
	{
		scope = 2;
		t1_DutyMod = 0.965;
		faction = "T1_Units_Desert";
		vehicleClass = "Special";
		displayName = "T1 AT Specialist";
		uniformClass = "t1_rhs_uniform_FROG01_d";
		
		backpack = "T1_Kitbag_Desert_AT";
		linkedItems[] = {
			"T1_V_PlateCarrier2_Desert",
			"rhsusf_mich_helmet_marpatd_norotos_headset",
			"ACE_NVG_Gen4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[] = {
			"T1_V_PlateCarrier2_Desert",
			"rhsusf_mich_helmet_marpatd_norotos_headset",
			"ACE_NVG_Gen4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class T1_Specialist_AAT_Standard_F;
	class T1_Specialist_AAT_Standard_F_D: T1_Specialist_AAT_Standard_F
	{
		scope = 2;
		t1_DutyMod = 0.965;
		faction = "T1_Units_Desert";
		vehicleClass = "Special";
		displayName = "T1 AAT Specialist";
		uniformClass = "t1_rhs_uniform_FROG01_d";
		
		backpack = "T1_Carryall_Desert_AAT";
		linkedItems[] = {
			"T1_V_PlateCarrier2_Desert",
			"rhsusf_mich_helmet_marpatd_norotos_headset",
			"ACE_NVG_Gen4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[] = {
			"T1_V_PlateCarrier2_Desert",
			"rhsusf_mich_helmet_marpatd_norotos_headset",
			"ACE_NVG_Gen4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class T1_Specialist_Medium_AT_Standard_F;
	class T1_Specialist_Medium_AT_Standard_F_D: T1_Specialist_Medium_AT_Standard_F
	{
		scope = 2;
		t1_DutyMod = 0.965;
		faction = "T1_Units_Desert";
		vehicleClass = "Special";
		displayName = "T1 Medium AT Specialist";
		uniformClass = "t1_rhs_uniform_FROG01_d";
		
		backpack = "T1_Kitbag_Desert_Medium_AT";
		linkedItems[] = {
			"T1_V_PlateCarrier2_Desert",
			"rhsusf_mich_helmet_marpatd_norotos_headset",
			"ACE_NVG_Gen4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[] = {
			"T1_V_PlateCarrier2_Desert",
			"rhsusf_mich_helmet_marpatd_norotos_headset",
			"ACE_NVG_Gen4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class T1_Specialist_Medium_AAT_Standard_F;
	class T1_Specialist_Medium_AAT_Standard_F_D: T1_Specialist_Medium_AAT_Standard_F
	{
		scope = 2;
		t1_DutyMod = 0.965;
		faction = "T1_Units_Desert";
		vehicleClass = "Special";
		displayName = "T1 Medium AAT Specialist";
		uniformClass = "t1_rhs_uniform_FROG01_d";
		
		backpack = "T1_Carryall_Desert_Medium_AAT";
		linkedItems[] = {
			"T1_V_PlateCarrier2_Desert",
			"rhsusf_mich_helmet_marpatd_norotos_headset",
			"ACE_NVG_Gen4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[] = {
			"T1_V_PlateCarrier2_Desert",
			"rhsusf_mich_helmet_marpatd_norotos_headset",
			"ACE_NVG_Gen4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	}; 
	class T1_Specialist_AA_Standard_F;
	class T1_Specialist_AA_Standard_F_D: T1_Specialist_AA_Standard_F
	{
		scope = 2;
		t1_DutyMod = 0.965;
		faction = "T1_Units_Desert";
		vehicleClass = "Special";
		displayName = "T1 AA Specialist";
		uniformClass = "t1_rhs_uniform_FROG01_d";
		
		backpack = "T1_Kitbag_Desert_AA";
		linkedItems[] = {
			"T1_V_PlateCarrier2_Desert",
			"rhsusf_mich_helmet_marpatd_norotos_headset",
			"ACE_NVG_Gen4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[] = {
			"T1_V_PlateCarrier2_Desert",
			"rhsusf_mich_helmet_marpatd_norotos_headset",
			"ACE_NVG_Gen4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class T1_Specialist_AAA_Standard_F;
	class T1_Specialist_AAA_Standard_F_D: T1_Specialist_AAA_Standard_F
	{
		scope = 2;
		t1_DutyMod = 0.965;
		faction = "T1_Units_Desert";
		vehicleClass = "Special";
		displayName = "T1 AAA Specialist";
		uniformClass = "t1_rhs_uniform_FROG01_d";
		
		backpack = "T1_Kitbag_Desert_AA";
		linkedItems[] = {
			"T1_V_PlateCarrier2_Desert",
			"rhsusf_mich_helmet_marpatd_norotos_headset",
			"ACE_NVG_Gen4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[] = {
			"T1_V_PlateCarrier2_Desert",
			"rhsusf_mich_helmet_marpatd_norotos_headset",
			"ACE_NVG_Gen4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class T1_Specialist_MG_Standard_F;
	class T1_Specialist_MG_Standard_F_D: T1_Specialist_MG_Standard_F
	{
		scope = 2;
		t1_DutyMod = 0.965;
		faction = "T1_Units_Desert";
		vehicleClass = "Special";
		displayName = "T1 MG Specialist";
		uniformClass = "t1_rhs_uniform_FROG01_d";
		
		backpack = "T1_AssaultPack_MMG_Desert";
		linkedItems[] = {
			"T1_V_PlateCarrier2_Desert",
			"rhsusf_mich_helmet_marpatd_norotos_headset",
			"ACE_NVG_Gen4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[] = {
			"T1_V_PlateCarrier2_Desert",
			"rhsusf_mich_helmet_marpatd_norotos_headset",
			"ACE_NVG_Gen4",
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
	class T1_Specialist_AMG_Standard_F;
	class T1_Specialist_AMG_Standard_F_D: T1_Specialist_AMG_Standard_F
	{
		scope = 2;
		t1_DutyMod = 0.965;
		faction = "T1_Units_Desert";
		vehicleClass = "Special";
		displayName = "T1 AMG Specialist";
		uniformClass = "t1_rhs_uniform_FROG01_d";
		
		backpack = "T1_Kitbag_AMG_Desert";
		linkedItems[] = {
			"T1_V_PlateCarrier2_Desert",
			"rhsusf_mich_helmet_marpatd_norotos_headset",
			"ACE_NVG_Gen4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[] = {
			"T1_V_PlateCarrier2_Desert",
			"rhsusf_mich_helmet_marpatd_norotos_headset",
			"ACE_NVG_Gen4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class T1_Scout_TL_Standard_F;
	class T1_Scout_TL_Standard_F_D: T1_Scout_TL_Standard_F
	{
		scope = 2;
		t1_DutyMod = 0.965;
		faction = "T1_Units_Desert";
		vehicleClass = "Special";
		displayName = "T1 Scout TL";
		uniformClass = "t1_rhs_uniform_FROG01_d";
		
		linkedItems[] = {
			"V_Chestrig_khk",
			"rhs_booniehat2_marpatd",
			"ACE_NVG_Gen4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"B_UavTerminal"
		};
		respawnLinkedItems[] = {
			"V_Chestrig_khk",
			"rhs_booniehat2_marpatd",
			"ACE_NVG_Gen4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"B_UavTerminal"
		};
		backpack = "T1_FieldPack_Scout_Lead_Desert";
		
	};
	class T1_Scout_Standard_F;
	class T1_Scout_Standard_F_D: T1_Scout_Standard_F
	{
		scope = 2;
		t1_DutyMod = 0.965;
		faction = "T1_Units_Desert";
		vehicleClass = "Special";
		displayName = "T1 Scout [MM DLC]";
		uniformClass = "t1_rhs_uniform_FROG01_d";
		
		weapons[] = {
			"T1_ABR_SD_Desert",
			"Throw",
			"Put",
			"Laserdesignator"
		};
		respawnWeapons[] = {
			"T1_ABR_SD_Desert",
			"Throw",
			"Put",
			"Laserdesignator"
		};
		linkedItems[] = {
			"V_Chestrig_khk",
			"H_ShemagOpen_khk",
			"ACE_NVG_Gen4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"B_UavTerminal"
		};
		respawnLinkedItems[] = {
			"V_Chestrig_khk",
			"H_ShemagOpen_khk",
			"ACE_NVG_Gen4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"B_UavTerminal"
		};
	};
	class T1_Section_Lead_Standard_F;
	class T1_Section_Lead_Standard_F_D: T1_Section_Lead_Standard_F
	{
		scope = 2;
		faction = "T1_Units_Desert";
		vehicleClass = "Section";
		displayName = "Section Leader";
		uniformClass = "t1_rhs_uniform_FROG01_d";
		
		linkedItems[] = {
			"T1_V_PlateCarrier2_Desert",
			"rhsusf_mich_helmet_marpatd_norotos_headset",
			"ACE_NVG_Gen4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[] = {
			"T1_V_PlateCarrier2_Desert",
			"rhsusf_mich_helmet_marpatd_norotos_headset",
			"ACE_NVG_Gen4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};

	};
	class T1_Section_Sgt_Standard_F;
	class T1_Section_Sgt_Standard_F_D: T1_Section_Sgt_Standard_F
	{
		scope = 2;
		faction = "T1_Units_Desert";
		vehicleClass = "Section";
		displayName = "Section Sergeant";
		uniformClass = "t1_rhs_uniform_FROG01_d";
		
		linkedItems[] = {
			"T1_V_PlateCarrier2_Desert",
			"rhsusf_mich_helmet_marpatd_norotos_headset",
			"ACE_NVG_Gen4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[] = {
			"T1_V_PlateCarrier2_Desert",
			"rhsusf_mich_helmet_marpatd_norotos_headset",
			"ACE_NVG_Gen4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class T1_Section_CLS_Standard_F;
	class T1_Section_CLS_Standard_F_D: T1_Section_CLS_Standard_F
	{
		scope = 2;
		faction = "T1_Units_Desert";
		vehicleClass = "Section";
		displayName = "Combat Life Saver";
		uniformClass = "t1_rhs_uniform_FROG01_d";
		
		backpack = "T1_AssaultPack_cls_Desert";
		attendant = 1;
		linkedItems[] = {
			"T1_V_PlateCarrier2_Desert",
			"rhsusf_mich_helmet_marpatd_norotos_headset",
			"ACE_NVG_Gen4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[] = {
			"T1_V_PlateCarrier2_Desert",
			"rhsusf_mich_helmet_marpatd_norotos_headset",
			"ACE_NVG_Gen4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class T1_Section_AR_Standard_F;
	class T1_Section_AR_Standard_F_D: T1_Section_AR_Standard_F
	{
		scope = 2;
		faction = "T1_Units_Desert";
		vehicleClass = "Section";
		displayName = "Automatic Rifleman";
		uniformClass = "t1_rhs_uniform_FROG01_d";
		
		backpack = "T1_AssaultPack_AR_Desert";
		linkedItems[] = {
			"T1_V_PlateCarrier2_Desert",
			"rhsusf_mich_helmet_marpatd_norotos_headset",
			"ACE_NVG_Gen4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[] = {
			"T1_V_PlateCarrier2_Desert",
			"rhsusf_mich_helmet_marpatd_norotos_headset",
			"ACE_NVG_Gen4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class T1_Section_AR_Alt_F;
	class T1_Section_AR_Alt_F_D: T1_Section_AR_Alt_F
	{
		scope = 2;
		faction = "T1_Units_Desert";
		vehicleClass = "Section";
		displayName = "Automatic Rifleman";
		uniformClass = "t1_rhs_uniform_FROG01_d";
		
		backpack = "T1_AssaultPack_AR_Desert";
		linkedItems[] = {
			"T1_V_PlateCarrier2_Desert",
			"rhsusf_mich_helmet_marpatd_norotos_headset",
			"ACE_NVG_Gen4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[] = {
			"T1_V_PlateCarrier2_Desert",
			"rhsusf_mich_helmet_marpatd_norotos_headset",
			"ACE_NVG_Gen4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class T1_Section_AAR_Standard_F;
	class T1_Section_AAR_Standard_F_D: T1_Section_AAR_Standard_F
	{
		scope = 2;
		faction = "T1_Units_Desert";
		vehicleClass = "Section";
		displayName = "Asst. Automatic Rifleman";
		uniformClass = "t1_rhs_uniform_FROG01_d";
		
		backpack = "T1_AssaultPack_AAR_Desert";
		linkedItems[] = {
			"T1_V_PlateCarrier2_Desert",
			"rhsusf_mich_helmet_marpatd_norotos_headset",
			"ACE_NVG_Gen4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[] = {
			"T1_V_PlateCarrier2_Desert",
			"rhsusf_mich_helmet_marpatd_norotos_headset",
			"ACE_NVG_Gen4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class T1_Section_AT_Standard_F;
	class T1_Section_AT_Standard_F_D: T1_Section_AT_Standard_F
	{
		scope = 2;
		faction = "T1_Units_Desert";
		vehicleClass = "Section";
		displayName = "Rifleman AT";
		uniformClass = "t1_rhs_uniform_FROG01_d";
		
		linkedItems[] = {
			"T1_V_PlateCarrier2_Desert",
			"rhsusf_mich_helmet_marpatd_norotos_headset",
			"ACE_NVG_Gen4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[] = {
			"T1_V_PlateCarrier2_Desert",
			"rhsusf_mich_helmet_marpatd_norotos_headset",
			"ACE_NVG_Gen4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class T1_Section_AT_DM_F;
	class T1_Section_AT_DM_F_D: T1_Section_AT_DM_F
	{
		scope = 2;
		faction = "T1_Units_Desert";
		vehicleClass = "Section";
		displayName = "Rifleman AT DM";
		uniformClass = "t1_rhs_uniform_FROG01_d";
		
		linkedItems[] = {
			"T1_V_PlateCarrier2_Desert",
			"rhsusf_mich_helmet_marpatd_norotos_headset",
			"ACE_NVG_Gen4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[] = {
			"T1_V_PlateCarrier2_Desert",
			"rhsusf_mich_helmet_marpatd_norotos_headset",
			"ACE_NVG_Gen4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class T1_Platoon_Lead_Standard_F;
	class T1_Platoon_Lead_Standard_F_D: T1_Platoon_Lead_Standard_F
	{
		scope = 2;
		faction = "T1_Units_Desert";
		vehicleClass = "Platoon";
		displayName = "Platoon Lead";
		uniformClass = "t1_rhs_uniform_FROG01_d";
		
		backpack = "T1_Backpack_PL_Lead_Desert";
		linkedItems[] = {
			"T1_V_PlateCarrier2_Desert",
			"rhsusf_mich_helmet_marpatd_norotos_headset",
			"ACE_NVG_Gen4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[] = {
			"T1_V_PlateCarrier2_Desert",
			"rhsusf_mich_helmet_marpatd_norotos_headset",
			"ACE_NVG_Gen4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class T1_Platoon_Medic_Standard_F;
	class T1_Platoon_Medic_Standard_F_D: T1_Platoon_Medic_Standard_F
	{
		scope = 2;
		faction = "T1_Units_Desert";
		vehicleClass = "Platoon";
		displayName = "Platoon Medic";
		uniformClass = "t1_rhs_uniform_FROG01_d";
		
		backpack = "T1_AssaultPack_pl_medic_Desert";
		linkedItems[] = {
			"T1_V_PlateCarrier2_Desert",
			"rhsusf_mich_helmet_marpatd_norotos_headset",
			"ACE_NVG_Gen4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[] = {
			"T1_V_PlateCarrier2_Desert",
			"rhsusf_mich_helmet_marpatd_norotos_headset",
			"ACE_NVG_Gen4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class T1_Platoon_EOD_Standard_F;
	class T1_Platoon_EOD_Standard_F_D: T1_Platoon_EOD_Standard_F
	{
		scope = 2;
		faction = "T1_Units_Desert";
		vehicleClass = "Platoon";
		displayName = "Platoon EOD";
		uniformClass = "t1_rhs_uniform_FROG01_d";
		
		backpack = "T1_AssaultPack_PLEOD_Desert";
		linkedItems[] = {
			"T1_V_PlateCarrier2_Desert",
			"rhsusf_mich_helmet_marpatd_norotos_headset",
			"ACE_NVG_Gen4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[] = {
			"T1_V_PlateCarrier2_Desert",
			"rhsusf_mich_helmet_marpatd_norotos_headset",
			"ACE_NVG_Gen4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class T1_Platoon_Sgt_Standard_F;
	class T1_Platoon_Sgt_Standard_F_D: T1_Platoon_Sgt_Standard_F
	{
		scope = 2;
		faction = "T1_Units_Desert";
		vehicleClass = "Platoon";
		displayName = "Platoon Sergeant";
		uniformClass = "t1_rhs_uniform_FROG01_d";
		
		linkedItems[] = {
			"T1_V_PlateCarrier2_Desert",
			"rhsusf_mich_helmet_marpatd_norotos_headset",
			"ACE_NVG_Gen4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[] = {
			"T1_V_PlateCarrier2_Desert",
			"rhsusf_mich_helmet_marpatd_norotos_headset",
			"ACE_NVG_Gen4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		
		backpack = "T1_AssaultPack_PLSgt_JTAC_Desert";
	};
/*	
	// Not found in regular units
	class B_MRAP_01_F;
	class B_MRAP_01_gmg_F;
	class B_MRAP_01_hmg_F;
	class T1_B_MRAP_01_Desert_F: B_MRAP_01_F
	{
		scope = 2;
		faction = "T1_Units_Desert";
		displayName = "T1 Hunter";
		hiddenSelectionsTextures[] = {"\t1_units_desert\data\vehicles\hunter\t1_hunter_desert_base_co.paa","\t1_units_desert\data\vehicles\hunter\t1_hunter_desert_adds_co.paa",""};
	};
	class T1_B_MRAP_01_gmg_Desert_F: B_MRAP_01_gmg_F
	{
		scope = 2;
		faction = "T1_Units_Desert";
		displayName = "T1 Hunter GMG";
		hiddenSelectionsTextures[] = {"\t1_units_desert\data\vehicles\hunter\t1_hunter_desert_base_co.paa","\t1_units_desert\data\vehicles\hunter\t1_hunter_desert_adds_co.paa","\t1_units_desert\data\vehicles\hunter\t1_hunter_desert_turret_co.paa"};
	};
	class T1_B_MRAP_01_hmg_Desert_F: B_MRAP_01_hmg_F
	{
		scope = 2;
		faction = "T1_Units_Desert";
		displayName = "T1 Hunter HMG";
		hiddenSelectionsTextures[] = {"\t1_units_desert\data\vehicles\hunter\t1_hunter_desert_base_co.paa","\t1_units_desert\data\vehicles\hunter\t1_hunter_desert_adds_co.paa","\t1_units_desert\data\vehicles\hunter\t1_hunter_desert_turret_co.paa"};
	};
	class T1_B_MRAP_01_DesertPlain_F: B_MRAP_01_F
	{
		scope = 2;
		faction = "T1_Units_Desert";
		displayName = "T1 Hunter";
		hiddenSelectionsTextures[] = {"\t1_units_desert\data\vehicles\hunter\t1_hunter_desertplain_base_co.paa","\t1_units_desert\data\vehicles\hunter\t1_hunter_desertplain_adds_co.paa",""};
	};
	class T1_B_MRAP_01_gmg_DesertPlain_F: B_MRAP_01_gmg_F
	{
		scope = 2;
		faction = "T1_Units_Desert";
		displayName = "T1 Hunter GMG";
		hiddenSelectionsTextures[] = {"\t1_units_desert\data\vehicles\hunter\t1_hunter_desertplain_base_co.paa","\t1_units_desert\data\vehicles\hunter\t1_hunter_desertplain_adds_co.paa","\t1_units_desert\data\vehicles\hunter\t1_hunter_desertplain_turret_co.paa"};
	};
	class T1_B_MRAP_01_hmg_DesertPlain_F: B_MRAP_01_hmg_F
	{
		scope = 2;
		faction = "T1_Units_Desert";
		displayName = "T1 Hunter HMG";
		hiddenSelectionsTextures[] = {"\t1_units_desert\data\vehicles\hunter\t1_hunter_desertplain_base_co.paa","\t1_units_desert\data\vehicles\hunter\t1_hunter_desertplain_adds_co.paa","\t1_units_desert\data\vehicles\hunter\t1_hunter_desertplain_turret_co.paa"};
	};
*/
	
};

class CfgWeapons
{
	class Uniform_Base;
	class UniformItem;
	class ItemInfo;

	 //T1_U_Instructor_Polo_Black missing
	 //T1_U_Instructor_Polo_Orange mssing
	 //T1_U_Pilot_Standard missing
	 //T1_U_Pilot_Black missing 
	 //T1_U_Pilot_BlackCamo missing
	 //T1_U_Pilot_Camo missing
	 //T1_U_Pilot_Night missing
	class V_PlateCarrier2_rgr;
	class T1_V_PlateCarrier2_Desert: V_PlateCarrier2_rgr
	{
		scope = 2;
		displayName = "Carrier Rig (T1 Desert)";
		picture = "\A3\characters_f\Data\UI\icon_V_plate_carrier_2_CA.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\t1_units_desert\data\units\t1_vests_desert_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo"};
		};
	};
	 // Not used by any units ??
	class T1_V_PlateCarrier2_medic_desert: V_PlateCarrier2_rgr
	{
		scope = 2;
		displayName = "Medic Carrier Rig (T1 Desert)";
		picture = "\A3\characters_f\Data\UI\icon_V_plate_carrier_2_CA.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\t1_units_desert\data\units\t1_vests_medic_desert_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo"};
		};
	};
	class T1_V_PlateCarrier2_Desert_SFAR: T1_V_PlateCarrier2_Desert
	{
		scope = 2;
		class ItemInfo: Iteminfo
		{
			containerClass = "Supply200";
		};
	};	
// rhs desert stuff
	class rhs_uniform_g3_mc;
	class rhs_uniform_g3_tan: rhs_uniform_g3_mc
	{
		class ItemInfo;
	};
	class T1_rhs_uniform_g3_tan: rhs_uniform_g3_tan
	{
		scope = 2;
		displayName = "T1 Uniform1 (Desert)";
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply130";
		};
	};
	class rhs_uniform_FROG01_d;
	class T1_rhs_uniform_FROG01_d: rhs_uniform_FROG01_d
	{
		scope = 2;
		displayName = "T1 Uniform2 (Desert)";
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply130";
		};
	};
	class U_B_FullGhillie_ard: Uniform_Base
	{
		class ItemInfo;
	};
	class T1_U_B_FullGhillie_ard: U_B_FullGhillie_ard
	{
		scope = 2;
		displayName = "T1 Ghillie Suit Desert";
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply110";
		};
	};
	
	class srifle_DMR_03_tan_F;
	class T1_DMR_SHADOW_SD_Desert : srifle_DMR_03_tan_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "iansky_specterdrkf_d";
				slot = "CowsSlot";
			};
			class LinkedItemsMuzzle
			{
				item = "muzzle_snds_B_snd_F";
				slot = "MuzzleSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
			class LinkedItemsUnder
			{
				item = "bipod_01_F_snd";
				slot = "UnderBarrelSlot";
			};
		};
	};
	class 45KO_zafir_camo_brown;
	class T1_weap_mmg_sf: 45KO_zafir_camo_brown
	{	
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "iansky_specterdrkf_D";
				slot = "CowsSlot";
			};
			class LinkedItemsMuzzle
			{
				item = "muzzle_snds_H_MG_blk_F";
				slot = "MuzzleSlot";
			}
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};
	class srifle_EBR_F;
	class T1_ABR_SD_Desert : srifle_EBR_F	
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_AMS_snd";
				slot = "CowsSlot";
			};
			class LinkedItemsMuzzle
			{
				item = "muzzle_snds_B_snd_F";
				slot = "MuzzleSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
			class LinkedItemsUnder
			{
				item = "bipod_01_F_snd";
				slot = "UnderBarrelSlot";
			};
		};
	};
	class rhs_weap_XM2010_d;
	class T1_weap_sierra_RHS_desert : rhs_weap_XM2010_d
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
	class T1_weap_sierra_spotter_RHS_desert : srifle_DMR_06_camo_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "iansky_specterdrkf_d";
				slot = "CowsSlot";
			};
			class LinkedItemsMuzzle
			{
				item = "muzzle_snds_B_snd_F";
				slot = "MuzzleSlot";
			};
			class LinkedItemsUnder
			{
				item = "bipod_01_F_snd";
				slot = "UnderBarrelSlot";
			};
		};
	};
	class srifle_LRR_camo_F;
	class T1_weap_sierra_desert: srifle_LRR_camo_F
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
};


