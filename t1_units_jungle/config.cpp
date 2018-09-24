/////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.90
//Thu Sep 17 17:35:51 2015 : Source 'file' date Thu Sep 17 17:35:51 2015
//http://dev-heaven.net/projects/list_files/mikero-pbodll
/////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class t1_units_jungle : config.bin{
class CfgPatches
{
	class t1_units_jungle
	{
		units[] = {
			"T1_Kitbag_camo_jungle",
			"T1_Kitbag_camo_Lead_jungle",
			"T1_Kitbag_camo_Lead_Plt_jungle",
			"T1_Kitbag_camo_Lead_SF_jungle",
			"T1_Kitbag_camo_Lead_Trainer_jungle",
			"T1_Kitbag_camo_Sniper_jungle",
			"T1_Kitbag_camo_Scout_Lead_jungle",
			"T1_Kitbag_camo_SF_Marksman_jungle",
			"T1_Kitbag_camo_medic_jungle",
			"T1_Kitbag_camo_medic_sf_jungle",
			"T1_Kitbag_camo_cls_jungle",
			"T1_Carryall_camo_jungle",
			"T1_Kitbag_camo_Repair",
			"T1_Carryall_camo_Exp",
			"T1_Carryall_camo_Exp_SF_jungle",
			"T1_Carryall_camo_PLEOD_jungle",
			"T1_Carryall_camo_PLSgt_JTAC_jungle",
			"T1_Kitbag_camo_AR_jungle",
			"T1_Kitbag_camo_AAR_jungle",
			"T1_Kitbag_camo_AR_SF_jungle",
			"T1_Kitbag_camo_AT_jungle",
			"T1_Kitbag_camo_Medium_AT_jungle",
			"T1_Kitbag_camo_AA_jungle",
			"T1_Carryall_camo_AAT_jungle",
			"T1_Carryall_camo_Medium_AAT_jungle",
			"T1_Carryall_camo_AAA_jungle",
			"T1_Kitbag_camo_MG_jungle",
			"T1_Carryall_camo_AMG_jungle",
			"T1_Kitbag_camo_Section_AT_jungle",
			"T1_Soldier_jungle_F",
			"T1_Medic_jungle_F",
			"T1_SF_Marksman_SOS_Standard_jungle_F",
			"T1_SF_Explosive_Standard_jungle_F",
			"T1_SF_Medic_Standard_jungle_F",
			"T1_SF_FTL_Standard_jungle_F",
			"T1_SF_AT_Standard_jungle_F",
			"T1_SF_AR_Standard_jungle_F",
			"T1_Specialist_AT_Standard_jungle_F",
			"T1_Specialist_AAT_Standard_jungle_F",
			"T1_Specialist_Medium_AT_Standard_jungle_F",
			"T1_Specialist_Medium_AAT_Standard_jungle_F",
			"T1_Specialist_AA_Standard_jungle_F",
			"T1_Specialist_AAA_Standard_jungle_F",
			"T1_Specialist_MG_Standard_jungle_F",
			"T1_Specialist_AMG_Standard_jungle_F",
			"T1_Scout_TL_Standard_jungle_F",
			"T1_Scout_Standard_jungle_F",
			"T1_Section_Lead_Standard_jungle_F",
			"T1_Section_Sgt_Standard_jungle_F",
			"T1_Section_CLS_Standard_jungle_F",
			"T1_Section_AR_Standard_jungle_F",
			"T1_Section_AAR_Standard_jungle_F",
			"T1_Section_AT_Standard_jungle_F",
			"T1_Platoon_Lead_Standard_jungle_F",
			"T1_Platoon_Medic_Standard_jungle_F",
			"T1_Platoon_EOD_Standard_jungle_F",
			"T1_Platoon_Sgt_Standard_jungle_F",
		};
		weapons[] = {
			"T1_U_Squad_Standard_jungle",
			"T1_U_Medic_Standard_jungle",
			"T1_V_PlateCarrier2_jungle",
			"T1_V_PlateCarrier2_medic_jungle",
			"T1_H_HelmetB_jungle",
			"T1_weap_romeo_jungle_mmdlc"
		};
		requiredVersion = 0.1;
		requiredAddons[] = {"t1_units"};
	};
};
class CfgFactionClasses
{
	class T1_Units_jungle
	{
		displayName = "T1 Units (jungle)";
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
};
class CfgVehicles
{
	class T1_Kitbag_camo;
	class T1_Kitbag_camo_jungle: T1_Kitbag_camo
	{
		scope = 1;
		displayName = "Kitbag (T1 jungle)";
		hiddenSelectionsTextures[] = {"\t1_textures\backpacks\t1_kitbag_jungle_co.paa"};
	};
	class T1_Kitbag_camo_Lead;
	class T1_Kitbag_camo_Lead_jungle: T1_Kitbag_camo_Lead
	{
		scope = 1;
		displayName = "Kitbag (T1 jungle)";
		hiddenSelectionsTextures[] = {"\t1_textures\backpacks\t1_kitbag_jungle_co.paa"};
	};
	class T1_Kitbag_camo_Lead_Plt;
	class T1_Kitbag_camo_Lead_Plt_jungle: T1_Kitbag_camo_Lead_Plt
	{
		scope = 1;
		displayName = "Kitbag PltLead (T1 jungle)";
		hiddenSelectionsTextures[] = {"\t1_textures\backpacks\t1_kitbag_jungle_co.paa"};
	};
	class T1_Kitbag_camo_Lead_SF;
	class T1_Kitbag_camo_Lead_SF_jungle: T1_Kitbag_camo_Lead_SF
	{
		scope = 1;
		displayName = "Kitbag Lead SF (T1 jungle)";
		hiddenSelectionsTextures[] = {"\t1_textures\backpacks\t1_kitbag_jungle_co.paa"};
	};
	class T1_Kitbag_camo_Lead_Trainer;
	class T1_Kitbag_camo_Lead_Trainer_jungle: T1_Kitbag_camo_Lead_Trainer
	{
		scope = 1;
		displayName = "Kitbag Lead Trainer (T1 jungle)";
		hiddenSelectionsTextures[] = {"\t1_textures\backpacks\t1_kitbag_jungle_co.paa"};
	};
	class T1_Kitbag_camo_Sniper;
	class T1_Kitbag_camo_Sniper_jungle: T1_Kitbag_camo_Sniper
	{
		scope = 1;
		displayName = "Kitbag Sniper (T1 jungle)";
		hiddenSelectionsTextures[] = {"\t1_textures\backpacks\t1_kitbag_jungle_co.paa"};		
	};
	class T1_Kitbag_camo_Scout_Lead;
	class T1_Kitbag_camo_Scout_Lead_jungle: T1_Kitbag_camo_Scout_Lead
	{
		scope = 1;
		displayName = "Kitbag Scout Lead (T1 jungle)";
		hiddenSelectionsTextures[] = {"\t1_textures\backpacks\t1_kitbag_jungle_co.paa"};		
	};
	class T1_Kitbag_camo_SF_Marksman;
	class T1_Kitbag_camo_SF_Marksman_jungle: T1_Kitbag_camo_SF_Marksman
	{
		scope = 1;
		displayName = "Kitbag (T1 jungle)";
		hiddenSelectionsTextures[] = {"\t1_textures\backpacks\t1_kitbag_jungle_co.paa"};
	};
	class T1_Kitbag_camo_medic;
	class T1_Kitbag_camo_medic_jungle: T1_Kitbag_camo_medic
	{
		scope = 1;
		displayName = "Kitbag Medic (T1 jungle)";
		hiddenSelectionsTextures[] = {"\t1_textures\backpacks\t1_kitbag_jungle_medic_co.paa"};
	};
	class T1_Kitbag_camo_medic_sf;
	class T1_Kitbag_camo_medic_sf_jungle: T1_Kitbag_camo_medic_sf
	{
		scope = 1;
		displayName = "Kitbag Medic SF (T1 jungle)";
		hiddenSelectionsTextures[] = {"\t1_textures\backpacks\t1_kitbag_jungle_medic_co.paa"};
	};
	class T1_Kitbag_camo_cls;
	class T1_Kitbag_camo_cls_jungle: T1_Kitbag_camo_cls
	{
		scope = 1;
		displayName = "Kitbag (T1 jungle)";
		hiddenSelectionsTextures[] = {"\t1_textures\backpacks\t1_kitbag_jungle_medic_co.paa"};
	};
	class T1_Carryall_camo;
	class T1_Carryall_camo_jungle: T1_Carryall_camo
	{
		scope = 1;
		displayName = "Carryall Backpack (T1 jungle)";
		hiddenSelectionsTextures[] = {"\t1_textures\backpacks\t1_carryall_jungle_co.paa"};
	};
	class T1_Kitbag_camo_Repair;
	class T1_Kitbag_camo_Repair_jungle: T1_Kitbag_camo_Repair
	{
		scope = 1;
		displayName = "Kitbag (T1 jungle)";
		hiddenSelectionsTextures[] = {"\t1_textures\backpacks\t1_kitbag_jungle_co.paa"};
	};
	class T1_Carryall_camo_Exp;
	class T1_Carryall_camo_Exp_jungle: T1_Carryall_camo_Exp
	{
		scope = 1;
		displayName = "Carryall Backpack (T1 jungle)";
		hiddenSelectionsTextures[] = {"\t1_textures\backpacks\t1_carryall_jungle_co.paa"};
	};
	class T1_Carryall_camo_Exp_SF;
	class T1_Carryall_camo_Exp_SF_jungle: T1_Carryall_camo_Exp_SF
	{
		scope = 1;
		displayName = "Carryall Backpack (T1 jungle)";
		hiddenSelectionsTextures[] = {"\t1_textures\backpacks\t1_carryall_jungle_co.paa"};
	};
	class T1_Carryall_camo_PLEOD;
	class T1_Carryall_camo_PLEOD_jungle: T1_Carryall_camo_PLEOD
	{
		scope = 1;
		displayName = "Carryall Backpack (T1 jungle)";
		hiddenSelectionsTextures[] = {"\t1_textures\backpacks\t1_carryall_jungle_co.paa"};
	};	
	class T1_Carryall_camo_PLSgt_JTAC;
	class T1_Carryall_camo_PLSgt_JTAC_jungle: T1_Carryall_camo_PLSgt_JTAC
	{
		scope = 1;
		displayName = "Carryall Backpack (T1 jungle)";
		hiddenSelectionsTextures[] = {"\t1_textures\backpacks\t1_carryall_jungle_co.paa"};
	};
	class T1_Kitbag_camo_AR;
	class T1_Kitbag_camo_AR_jungle: T1_Kitbag_camo_AR
	{
		scope = 1;
		displayName = "Kitbag (T1 jungle)";
		hiddenSelectionsTextures[] = {"\t1_textures\backpacks\t1_kitbag_jungle_co.paa"};
	};
	class T1_Kitbag_camo_AAR;
	class T1_Kitbag_camo_AAR_jungle: T1_Kitbag_camo_AAR
	{
		scope = 1;
		displayName = "Kitbag (T1 jungle)";
		hiddenSelectionsTextures[] = {"\t1_textures\backpacks\t1_kitbag_jungle_co.paa"};
	};
	class T1_Kitbag_camo_AR_SF;
	class T1_Kitbag_camo_AR_SF_jungle: T1_Kitbag_camo_AR_SF
	{
		scope = 1;
		displayName = "Kitbag (T1 jungle)";
		hiddenSelectionsTextures[] = {"\t1_textures\backpacks\t1_kitbag_jungle_co.paa"};		
	};
	class T1_Kitbag_camo_AT;
	class T1_Kitbag_camo_AT_jungle: T1_Kitbag_camo_AT
	{
		scope = 1;
		displayName = "Kitbag (T1 jungle)";
		hiddenSelectionsTextures[] = {"\t1_textures\backpacks\t1_kitbag_jungle_co.paa"};
	};
	class T1_Kitbag_camo_Medium_AT;
	class T1_Kitbag_camo_Medium_AT_jungle: T1_Kitbag_camo_Medium_AT
	{
		scope = 1;
		displayName = "Kitbag (T1 jungle)";
		hiddenSelectionsTextures[] = {"\t1_textures\backpacks\t1_kitbag_jungle_co.paa"};	
	};
	class T1_Kitbag_camo_AA;
	class T1_Kitbag_camo_AA_jungle: T1_Kitbag_camo_AA
	{
		scope = 1;
		displayName = "Kitbag (T1 jungle)";
		hiddenSelectionsTextures[] = {"\t1_textures\backpacks\t1_kitbag_jungle_co.paa"};
	};
	class T1_Carryall_camo_AAT;
	class T1_Carryall_camo_AAT_jungle: T1_Carryall_camo_AAT
	{
		scope = 1;
		displayName = "Carryall Backpack (T1 jungle)";
		hiddenSelectionsTextures[] = {"\t1_textures\backpacks\t1_carryall_jungle_co.paa"};
	};
	class T1_Carryall_camo_Medium_AAT;
	class T1_Carryall_camo_Medium_AAT_jungle: T1_Carryall_camo_Medium_AAT
	{
		scope = 1;
		displayName = "Carryall Backpack (T1 jungle)";
		hiddenSelectionsTextures[] = {"\t1_textures\backpacks\t1_carryall_jungle_co.paa"};
	};
	class T1_Carryall_camo_AAA;
	class T1_Carryall_camo_AAA_jungle: T1_Carryall_camo_AAA
	{
		scope = 1;
		displayName = "Carryall Backpack (T1 jungle)";
		hiddenSelectionsTextures[] = {"\t1_textures\backpacks\t1_carryall_jungle_co.paa"};
	};
	class T1_Kitbag_camo_MG;
	class T1_Kitbag_camo_MG_jungle: T1_Kitbag_camo_MG
	{
		scope = 1;
		displayName = "Kitbag (T1 jungle)";
		hiddenSelectionsTextures[] = {"\t1_textures\backpacks\t1_kitbag_jungle_co.paa"};	
	};
	class T1_Carryall_camo_AMG;
	class T1_Carryall_camo_AMG_jungle: T1_Carryall_camo_AMG
	{
		scope = 1;
		displayName = "Carryall Backpack (T1 jungle)";
		hiddenSelectionsTextures[] = {"\t1_textures\backpacks\t1_carryall_jungle_co.paa"};
	};
	class T1_Kitbag_camo_Section_AT;
	class T1_Kitbag_camo_Section_AT_jungle: T1_Kitbag_camo_Section_AT
	{
		scope = 1;
		displayName = "Kitbag (T1 jungle)";
		hiddenSelectionsTextures[] = {"\t1_textures\backpacks\t1_kitbag_jungle_co.paa"};
	};
	class T1_Soldier_F;
	class T1_Soldier_jungle_F: T1_Soldier_F
	{
		scope = 1;
		uniformClass = "T1_U_Squad_Standard_jungle";
		hiddenSelectionsTextures[] = {"\t1_textures\units\t1_clothing1_jungle_co.paa"};
	};
	class T1_Medic_jungle_F: T1_Soldier_F
	{
		scope = 1;
		uniformClass = "T1_U_Medic_Standard_jungle";
		hiddenSelectionsTextures[] = {"\t1_textures\units\t1_clothing1_jungle_medic_co.paa"};
	};
	
	class T1_SF_Marksman_SOS_Standard_F;
	class T1_SF_Marksman_SOS_Standard_jungle_F: T1_SF_Marksman_SOS_Standard_F
	{
		scope = 2;
		faction = "T1_Units_jungle";
		uniformClass = "T1_U_Squad_Standard_jungle";
		hiddenSelectionsTextures[] = {"\t1_textures\units\t1_clothing1_jungle_co.paa"};
		weapons[] = {
			"T1_weap_romeo_jungle_mmdlc",
			"Throw",
			"Put",
			"ACE_Vector"
		};
		respawnWeapons[] = {
			"T1_weap_romeo_jungle_mmdlc",
			"Throw",
			"Put",
			"ACE_Vector"
		};
		linkedItems[] = {"T1_V_PlateCarrier2_jungle","T1_H_HelmetB_jungle","NVGoggles","ItemMap","ItemCompass","ItemWatch","ItemGPS","ACE_RangeCard","ACE_ATragMX","ACE_Kestrel4500"};
		respawnLinkedItems[] = {"T1_V_PlateCarrier2_jungle","T1_H_HelmetB_jungle","NVGoggles","ItemMap","ItemCompass","ItemWatch","ItemGPS","ACE_RangeCard","ACE_ATragMX","ACE_Kestrel4500"};
		backpack = "T1_Kitbag_camo_SF_Marksman_jungle";
	};
	class T1_SF_Explosive_Standard_F;
	class T1_SF_Explosive_Standard_jungle_F: T1_SF_Explosive_Standard_F
	{
		scope = 2;
		faction = "T1_Units_jungle";
		uniformClass = "T1_U_Squad_Standard_jungle";
		hiddenSelectionsTextures[] = {"\t1_textures\units\t1_clothing1_jungle_co.paa"};
		linkedItems[] = {"T1_V_PlateCarrier2_jungle","T1_H_HelmetB_jungle","NVGoggles","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
		respawnLinkedItems[] = {"T1_V_PlateCarrier2_jungle","T1_H_HelmetB_jungle","NVGoggles","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
		backpack = "T1_Carryall_camo_Exp_SF_jungle";
	};
	class T1_SF_Medic_Standard_F;
	class T1_SF_Medic_Standard_jungle_F: T1_SF_Medic_Standard_F
	{
		scope = 2;
		faction = "T1_Units_jungle";
		uniformClass = "T1_U_Medic_Standard_jungle";
		hiddenSelectionsTextures[] = {"\t1_textures\units\t1_clothing1_medic_jungle_co.paa"};
		linkedItems[] = {"T1_V_PlateCarrier2_jungle","T1_H_HelmetB_jungle","NVGoggles","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
		respawnLinkedItems[] = {"T1_V_PlateCarrier2_jungle","T1_H_HelmetB_jungle","NVGoggles","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
		backpack = "T1_Kitbag_camo_medic_sf_jungle";
	};
	class T1_SF_FTL_Standard_F;
	class T1_SF_FTL_Standard_jungle_F: T1_SF_FTL_Standard_F
	{
		scope = 2;
		faction = "T1_Units_jungle";
		uniformClass = "T1_U_Squad_Standard_jungle";
		hiddenSelectionsTextures[] = {"\t1_textures\units\t1_clothing1_jungle_co.paa"};
		linkedItems[] = {"T1_V_PlateCarrier2_jungle","T1_H_HelmetB_jungle","NVGoggles","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
		respawnLinkedItems[] = {"T1_V_PlateCarrier2_jungle","T1_H_HelmetB_jungle","NVGoggles","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
		backpack = "T1_Kitbag_camo_Lead_SF_jungle";
	};
	class T1_SF_AT_Standard_F;
	class T1_SF_AT_Standard_jungle_F: T1_SF_AT_Standard_F
	{
		scope = 2;
		faction = "T1_Units_jungle";
		uniformClass = "T1_U_Squad_Standard_jungle";
		hiddenSelectionsTextures[] = {"\t1_textures\units\t1_clothing1_jungle_co.paa"};
		linkedItems[] = {"T1_V_PlateCarrier2_jungle","T1_H_HelmetB_jungle","NVGoggles","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
		respawnLinkedItems[] = {"T1_V_PlateCarrier2_jungle","T1_H_HelmetB_jungle","NVGoggles","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
		backpack = "T1_Kitbag_camo_Lead_SF_jungle";
	};
	class T1_SF_AR_Standard_F;
	class T1_SF_AR_Standard_jungle_F: T1_SF_AR_Standard_F
	{
		scope = 2;
		faction = "T1_Units_jungle";
		uniformClass = "T1_U_Squad_Standard_jungle";
		hiddenSelectionsTextures[] = {"\t1_textures\units\t1_clothing1_jungle_co.paa"};
		linkedItems[] = {"T1_V_PlateCarrier2_jungle","T1_H_HelmetB_jungle","NVGoggles","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
		respawnLinkedItems[] = {"T1_V_PlateCarrier2_jungle","T1_H_HelmetB_jungle","NVGoggles","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
		backpack = "T1_Kitbag_camo_AR_SF_jungle";
	};
	//Divers placed here
	// Pilots placed here
	//class T1_Spotter_Standard_F;
	//class T1_Spotter_Standard_jungle_F: T1_Spotter_Standard_F
	//{
	//	faction = "T1_Units_jungle";
	//	uniformClass = "T1_FB_Ghillie_jungle";
	//	model = "\Ghillie\ghillie.p3d";
	//	modelSides[] = {3,1};
	//	uniformAccessories[] = {};
		//hiddenSelectionsTextures[] = {"\Ghillie\ghillie_jungle_co.paa"};
	//	linkedItems[] = {"T1_V_PlateCarrier2_jungle","NVGoggles","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
	//	respawnLinkedItems[] = {"T1_V_PlateCarrier2_jungle","NVGoggles","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
	//	glassesEnabled = 0;
	//	backpack = "T1_Kitbag_camo_Sniper_jungle";
	//};
	//class T1_Sniper_Standard_F;
	//class T1_Sniper_Standard_jungle_F: T1_Sniper_Standard_F
	//{
	//	faction = "T1_Units_jungle";
	//	uniformClass = "T1_FB_Ghillie_jungle";
	//	model = "\Ghillie\ghillie.p3d";
	//	modelSides[] = {3,1};
	//	uniformAccessories[] = {};
		//hiddenSelectionsTextures[] = {"\Ghillie\ghillie_jungle_co.paa"};
	//	linkedItems[] = {"T1_V_PlateCarrier2_jungle","NVGoggles","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
	//	respawnLinkedItems[] = {"T1_V_PlateCarrier2_jungle","NVGoggles","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
	//	glassesEnabled = 0;
	//	backpack = "T1_Kitbag_camo_Lead_jungle";
	//};
	class T1_Specialist_AT_Standard_F;
	class T1_Specialist_AT_Standard_jungle_F: T1_Specialist_AT_Standard_F
	{
		scope = 2;
		faction = "T1_Units_jungle";
		uniformClass = "T1_U_Squad_Standard_jungle";
		hiddenSelectionsTextures[] = {"\t1_textures\units\t1_clothing1_jungle_co.paa"};
		linkedItems[] = {"T1_V_PlateCarrier2_jungle","T1_H_HelmetB_jungle","NVGoggles","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
		respawnLinkedItems[] = {"T1_V_PlateCarrier2_jungle","T1_H_HelmetB_jungle","NVGoggles","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
		backpack = "T1_Kitbag_camo_AT_jungle";
	};
	class T1_Specialist_AAT_Standard_F;
	class T1_Specialist_AAT_Standard_jungle_F: T1_Specialist_AAT_Standard_F
	{
		scope = 2;
		faction = "T1_Units_jungle";
		uniformClass = "T1_U_Squad_Standard_jungle";
		hiddenSelectionsTextures[] = {"\t1_textures\units\t1_clothing1_jungle_co.paa"};
		linkedItems[] = {"T1_V_PlateCarrier2_jungle","T1_H_HelmetB_jungle","NVGoggles","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
		respawnLinkedItems[] = {"T1_V_PlateCarrier2_jungle","T1_H_HelmetB_jungle","NVGoggles","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
		backpack = "T1_Carryall_camo_AAT_jungle";
	};
	// Added - Check Linked Items
	class T1_Specialist_Medium_AT_Standard_F;
	class T1_Specialist_Medium_AT_Standard_jungle_F: T1_Specialist_Medium_AT_Standard_F
	{
		scope = 2;
		faction = "T1_Units_jungle";
		uniformClass = "T1_U_Squad_Standard_jungle";
		hiddenSelectionsTextures[] = {"\t1_textures\units\t1_clothing1_jungle_co.paa"};
		linkedItems[] = {"T1_V_PlateCarrier2_jungle","T1_H_HelmetB_jungle","NVGoggles","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
		respawnLinkedItems[] = {"T1_V_PlateCarrier2_jungle","T1_H_HelmetB_jungle","NVGoggles","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
		backpack = "T1_Kitbag_camo_Medium_AT_jungle";
	};
	// Added- Check Linked Items
	class T1_Specialist_Medium_AAT_Standard_F;
	class T1_Specialist_Medium_AAT_Standard_jungle_F: T1_Specialist_Medium_AAT_Standard_F
	{
		scope = 2;
		faction = "T1_Units_jungle";
		uniformClass = "T1_U_Squad_Standard_jungle";
		hiddenSelectionsTextures[] = {"\t1_textures\units\t1_clothing1_jungle_co.paa"};
		linkedItems[] = {"T1_V_PlateCarrier2_jungle","T1_H_HelmetB_jungle","NVGoggles","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
		respawnLinkedItems[] = {"T1_V_PlateCarrier2_jungle","T1_H_HelmetB_jungle","NVGoggles","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
		backpack = "T1_Carryall_camo_Medium_AAT_jungle";
	};
	class T1_Specialist_AA_Standard_F;
	class T1_Specialist_AA_Standard_jungle_F: T1_Specialist_AA_Standard_F
	{
		scope = 2;
		faction = "T1_Units_jungle";
		uniformClass = "T1_U_Squad_Standard_jungle";
		hiddenSelectionsTextures[] = {"\t1_textures\units\t1_clothing1_jungle_co.paa"};
		linkedItems[] = {"T1_V_PlateCarrier2_jungle","T1_H_HelmetB_jungle","NVGoggles","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
		respawnLinkedItems[] = {"T1_V_PlateCarrier2_jungle","T1_H_HelmetB_jungle","NVGoggles","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
		backpack = "T1_Kitbag_camo_AA_jungle";
	};
	class T1_Specialist_AAA_Standard_F;
	class T1_Specialist_AAA_Standard_jungle_F: T1_Specialist_AAA_Standard_F
	{
		scope = 2;
		faction = "T1_Units_jungle";
		uniformClass = "T1_U_Squad_Standard_jungle";
		hiddenSelectionsTextures[] = {"\t1_textures\units\t1_clothing1_jungle_co.paa"};
		linkedItems[] = {"T1_V_PlateCarrier2_jungle","T1_H_HelmetB_jungle","NVGoggles","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
		respawnLinkedItems[] = {"T1_V_PlateCarrier2_jungle","T1_H_HelmetB_jungle","NVGoggles","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
		backpack = "T1_Carryall_camo_AAA_jungle";
	};	
	class T1_Specialist_MG_Standard_F;
	class T1_Specialist_MG_Standard_jungle_F: T1_Specialist_MG_Standard_F
	{
		scope = 2;
		faction = "T1_Units_jungle";
		uniformClass = "T1_U_Squad_Standard_jungle";
		hiddenSelectionsTextures[] = {"\t1_textures\units\t1_clothing1_jungle_co.paa"};
		linkedItems[] = {"T1_V_PlateCarrier2_jungle","T1_H_HelmetB_jungle","NVGoggles","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
		respawnLinkedItems[] = {"T1_V_PlateCarrier2_jungle","T1_H_HelmetB_jungle","NVGoggles","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
		backpack = "T1_Kitbag_camo_MG_jungle";
	};
	class T1_Specialist_AMG_Standard_F;
	class T1_Specialist_AMG_Standard_jungle_F: T1_Specialist_AMG_Standard_F
	{
		scope = 2;
		faction = "T1_Units_jungle";
		uniformClass = "T1_U_Squad_Standard_jungle";
		hiddenSelectionsTextures[] = {"\t1_textures\units\t1_clothing1_jungle_co.paa"};
		linkedItems[] = {"T1_V_PlateCarrier2_jungle","T1_H_HelmetB_jungle","NVGoggles","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
		respawnLinkedItems[] = {"T1_V_PlateCarrier2_jungle","T1_H_HelmetB_jungle","NVGoggles","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
		backpack = "T1_Carryall_camo_AMG_jungle";
	};
	class T1_Scout_TL_Standard_F;
	class T1_Scout_TL_Standard_jungle_F: T1_Scout_TL_Standard_F
	{
		scope = 2;
		faction = "T1_Units_jungle";
		uniformClass = "T1_U_Squad_Standard_jungle";
		hiddenSelectionsTextures[] = {"\t1_textures\units\t1_clothing1_jungle_co.paa"};
		linkedItems[] = {"V_Chestrig_oli","H_Booniehat_oli","NVGoggles","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
		respawnLinkedItems[] = {"V_Chestrig_oli","H_Booniehat_oli","NVGoggles","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
		backpack = "T1_Kitbag_camo_Scout_Lead_jungle";
	};
	class T1_Scout_Standard_F;
	class T1_Scout_Standard_jungle_F: T1_Scout_Standard_F
	{
		scope = 2;
		faction = "T1_Units_jungle";
		uniformClass = "T1_U_Squad_Standard_jungle";
		hiddenSelectionsTextures[] = {"\t1_textures\units\t1_clothing1_jungle_co.paa"};
		weapons[] = {
			"T1_weap_romeo_jungle_mmdlc",
			"T1_weap_sidearm_l",
			"Throw",
			"Put",
			"Laserdesignator"
		};
		respawnWeapons[] = {
			"T1_weap_romeo_jungle_mmdlc",
			"T1_weap_sidearm_l",
			"Throw",
			"Put",
			"Laserdesignator"
		};
		linkedItems[] = {"V_Chestrig_oli","H_Booniehat_oli","NVGoggles","ItemMap","ItemCompass","ItemWatch","ItemGPS","B_UavTerminal"};
		respawnLinkedItems[] = {"V_Chestrig_oli","H_Booniehat_oli","NVGoggles","ItemMap","ItemCompass","ItemWatch","ItemGPS","B_UavTerminal"};
		backpack = "B_Static_Designator_01_weapon_F";
	};
	// Crewmen placed here
	
	class T1_Section_Lead_Standard_F;
	class T1_Section_Lead_Standard_jungle_F: T1_Section_Lead_Standard_F
	{
		scope = 2;
		faction = "T1_Units_jungle";
		vehicleClass = "Section";
		uniformClass = "T1_U_Squad_Standard_jungle";
		hiddenSelectionsTextures[] = {"\t1_textures\units\t1_clothing1_jungle_co.paa"};
		linkedItems[] = {"T1_V_PlateCarrier2_jungle","T1_H_HelmetB_jungle","NVGoggles","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
		respawnLinkedItems[] = {"T1_V_PlateCarrier2_jungle","T1_H_HelmetB_jungle","NVGoggles","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
		backpack = "T1_Kitbag_camo_Lead_jungle";
	};
	class T1_Section_Sgt_Standard_F;
	class T1_Section_Sgt_Standard_jungle_F: T1_Section_Sgt_Standard_F
	{
		scope = 2;
		faction = "T1_Units_jungle";
		vehicleClass = "Section";
		uniformClass = "T1_U_Squad_Standard_jungle";
		hiddenSelectionsTextures[] = {"\t1_textures\units\t1_clothing1_jungle_co.paa"};
		linkedItems[] = {"T1_V_PlateCarrier2_jungle","T1_H_HelmetB_jungle","NVGoggles","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
		respawnLinkedItems[] = {"T1_V_PlateCarrier2_jungle","T1_H_HelmetB_jungle","NVGoggles","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
		backpack = "T1_Kitbag_camo_Lead_jungle";
	};
	class T1_Section_CLS_Standard_F;
	class T1_Section_CLS_Standard_jungle_F: T1_Section_CLS_Standard_F
	{
		scope = 2;
		faction = "T1_Units_jungle";
		vehicleClass = "Section";
		uniformClass = "T1_U_Medic_Standard_jungle";
		hiddenSelectionsTextures[] = {"\t1_textures\units\t1_clothing1_medic_jungle_co.paa"};
		linkedItems[] = {"T1_V_PlateCarrier2_jungle","T1_H_HelmetB_jungle","NVGoggles","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
		respawnLinkedItems[] = {"T1_V_PlateCarrier2_jungle","T1_H_HelmetB_jungle","NVGoggles","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
		backpack = "T1_Kitbag_camo_cls_jungle";
	};
	class T1_Section_AR_Standard_F;
	class T1_Section_AR_Standard_jungle_F: T1_Section_AR_Standard_F
	{
		scope = 2;
		faction = "T1_Units_jungle";
		vehicleClass = "Section";
		uniformClass = "T1_U_Squad_Standard_jungle";
		hiddenSelectionsTextures[] = {"\t1_textures\units\t1_clothing1_jungle_co.paa"};
		linkedItems[] = {"T1_V_PlateCarrier2_jungle","T1_H_HelmetB_jungle","NVGoggles","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
		respawnLinkedItems[] = {"T1_V_PlateCarrier2_jungle","T1_H_HelmetB_jungle","NVGoggles","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
		backpack = "T1_Kitbag_camo_AR_jungle";
	};
	class T1_Section_AAR_Standard_F;
	class T1_Section_AAR_Standard_jungle_F: T1_Section_AAR_Standard_F
	{
		scope = 2;
		faction = "T1_Units_jungle";
		vehicleClass = "Section";
		uniformClass = "T1_U_Squad_Standard_jungle";
		hiddenSelectionsTextures[] = {"\t1_textures\units\t1_clothing1_jungle_co.paa"};
		linkedItems[] = {"T1_V_PlateCarrier2_jungle","T1_H_HelmetB_jungle","NVGoggles","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
		respawnLinkedItems[] = {"T1_V_PlateCarrier2_jungle","T1_H_HelmetB_jungle","NVGoggles","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
		backpack = "T1_Kitbag_camo_AAR_jungle";
	};
	class T1_Section_AT_Standard_F;
	class T1_Section_AT_Standard_jungle_F: T1_Section_AT_Standard_F
	{
		scope = 2;
		faction = "T1_Units_jungle";
		vehicleClass = "Section";
		uniformClass = "T1_U_Squad_Standard_jungle";
		hiddenSelectionsTextures[] = {"\t1_textures\units\t1_clothing1_jungle_co.paa"};
		linkedItems[] = {"T1_V_PlateCarrier2_jungle","T1_H_HelmetB_jungle","NVGoggles","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
		respawnLinkedItems[] = {"T1_V_PlateCarrier2_jungle","T1_H_HelmetB_jungle","NVGoggles","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
		backpack = "T1_Kitbag_camo_Section_AT_jungle";
	};
	class T1_Platoon_Lead_Standard_F;
	class T1_Platoon_Lead_Standard_jungle_F: T1_Platoon_Lead_Standard_F
	{
		scope = 2;
		faction = "T1_Units_jungle";
		vehicleClass = "Platoon";
		uniformClass = "T1_U_Squad_Standard_jungle";
		hiddenSelectionsTextures[] = {"\t1_textures\units\t1_clothing1_jungle_co.paa"};
		linkedItems[] = {"T1_V_PlateCarrier2_jungle","T1_H_HelmetB_jungle","NVGoggles","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
		respawnLinkedItems[] = {"T1_V_PlateCarrier2_jungle","T1_H_HelmetB_jungle","NVGoggles","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
		backpack = "T1_Kitbag_camo_Lead_Plt_jungle";
	};
	class T1_Platoon_Medic_Standard_F;
	class T1_Platoon_Medic_Standard_jungle_F: T1_Platoon_Medic_Standard_F
	{
		scope = 2;
		faction = "T1_Units_jungle";
		vehicleClass = "Platoon";
		uniformClass = "T1_U_Medic_Standard_jungle";
		hiddenSelectionsTextures[] = {"\t1_textures\units\t1_clothing1_jungle_medic_co.paa"};
		linkedItems[] = {"T1_V_PlateCarrier2_jungle","T1_H_HelmetB_jungle","NVGoggles","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
		respawnLinkedItems[] = {"T1_V_PlateCarrier2_jungle","T1_H_HelmetB_jungle","NVGoggles","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
		backpack = "T1_Kitbag_camo_medic_jungle";
	};
	class T1_Platoon_EOD_Standard_F;
	class T1_Platoon_EOD_Standard_jungle_F: T1_Platoon_EOD_Standard_F
	{
		scope = 2;
		faction = "T1_Units_jungle";
		vehicleClass = "Platoon";
		uniformClass = "T1_U_Squad_Standard_jungle";
		hiddenSelectionsTextures[] = {"\t1_textures\units\t1_clothing1_jungle_co.paa"};
		linkedItems[] = {"T1_V_PlateCarrier2_jungle","T1_H_HelmetB_jungle","NVGoggles","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
		respawnLinkedItems[] = {"T1_V_PlateCarrier2_jungle","T1_H_HelmetB_jungle","NVGoggles","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
		backpack = "T1_Carryall_camo_PLEOD_jungle";
	};
	class T1_Platoon_Sgt_Standard_F;
	class T1_Platoon_Sgt_Standard_jungle_F: T1_Platoon_Sgt_Standard_F
	{
		scope = 2;
		faction = "T1_Units_jungle";
		vehicleClass = "Platoon";
		uniformClass = "T1_U_Squad_Standard_jungle";
		hiddenSelectionsTextures[] = {"\t1_textures\units\t1_clothing1_jungle_co.paa"};
		linkedItems[] = {"T1_V_PlateCarrier2_jungle","T1_H_HelmetB_jungle","NVGoggles","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
		respawnLinkedItems[] = {"T1_V_PlateCarrier2_jungle","T1_H_HelmetB_jungle","NVGoggles","ItemMap","ItemCompass","ItemWatch","ItemGPS"};
		backpack = "T1_Carryall_camo_PLSgt_JTAC_jungle";
	};
};
class CfgWeapons
{
	class Uniform_Base;
	class UniformItem;
	class ItemInfo;
	class T1_U_Squad_Standard_jungle: Uniform_Base
	{
		scope = 2;
		displayName = "T1 Uniform (jungle)";
		picture = "\t1_units\data\ui\icon_t1_u_squad_standard.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "T1_Soldier_jungle_F";
			containerClass = "Supply130";
			mass = 80;
		};
	};
	class T1_U_Medic_Standard_jungle: Uniform_Base
	{
		scope = 2;
		displayName = "T1 Medic Uniform (jungle)";
		picture = "\t1_units\data\ui\icon_t1_u_squad_standard.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "T1_Medic_jungle_F";
			containerClass = "Supply130";
			mass = 80;
		};
	}; 
	 //T1_U_Instructor_Polo_Black missing
	 //T1_U_Instructor_Polo_Orange mssing
	 //T1_U_Pilot_Standard missing
	 //T1_U_Pilot_Black missing 
	 //T1_U_Pilot_BlackCamo missing
	 //T1_U_Pilot_Camo missing
	 //T1_U_Pilot_Night missing
	class V_PlateCarrier2_rgr;
	class T1_V_PlateCarrier2_jungle: V_PlateCarrier2_rgr
	{
		scope = 2;
		displayName = "Carrier Rig (T1 jungle)";
		picture = "\A3\characters_f\Data\UI\icon_V_plate_carrier_2_CA.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\t1_units\data\units\t1_vests_camo_co.paa"};
		class ItemInfo: Iteminfo
		{
			hiddenSelections[] = {"camo"};
		};
	};
	 // Not used by any units ??
	class T1_V_PlateCarrier2_medic_jungle: V_PlateCarrier2_rgr
	{
		scope = 2;
		displayName = "Medic Carrier Rig (T1 jungle)";
		picture = "\A3\characters_f\Data\UI\icon_V_plate_carrier_2_CA.paa";
		model = "\A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\t1_units\data\units\t1_vests_camo_co.paa"};
		class ItemInfo: Iteminfo
		{
			hiddenSelections[] = {"camo"};
		};
	};
	class H_HelmetB_grass;
	class T1_H_HelmetB_jungle: H_HelmetB_grass
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "ECH (T1 jungle)";
		//picture = "\A3\characters_f\Data\UI\icon_H_helmet_plain_ca.paa";
		//hiddenSelections[] = {"camo"};
		//hiddenSelectionsTextures[] = {"\t1_textures\units\t1_equip1_jungle_co.paa"};
	};
	class srifle_DMR_03_woodland_F;
	class T1_weap_romeo_jungle_mmdlc : srifle_DMR_03_woodland_F
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
};
//};
