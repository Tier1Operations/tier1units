////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.90
//Thu Sep 17 17:35:51 2015 : Source 'file' date Thu Sep 17 17:35:51 2015
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class t1_units_desert : config.bin{
class CfgPatches
{
	class t1_units_desert
	{
		units[] = {"T1_Kitbag_camo_Lead_desert","T1_Kitbag_camo_desert","T1_Carryall_camo_PLSgt_JTAC","T1_Carryall_camo_PLEOD_desert","T1_Kitbag_camo_medic_desert","T1_Kitbag_camo_cls_desert","T1_Kitbag_camo_Section_AT_desert","T1_Kitbag_camo_AR_desert","T1_Carryall_camo_AMG_desert","T1_Specialist_AMG_Standard_Desert_F","T1_Carryall_camo_AAA_desert","T1_Kitbag_camo_AA_desert","T1_Carryall_camo_AAT_desert","T1_Kitbag_camo_AT_desert","T1_Kitbag_camo_medic_sf_desert","T1_Carryall_camo_Exp_SF_desert","T1_Kitbag_camo_SF_Marksman_desert","T1_Soldier_Desert_F","T1_Section_Lead_Standard_Desert_F","T1_Section_Sgt_Standard_Desert_F","T1_Section_AR_Standard_Desert_F","T1_Section_AAR_Standard_Desert_F","T1_Section_AT_Standard_Desert_F","T1_Section_CLS_Standard_Desert_F","T1_Platoon_Lead_Standard_Desert_F","T1_Platoon_Medic_Standard_Desert_F","T1_Platoon_EOD_Standard_Desert_F","T1_Platoon_Sgt_Standard_Desert_F","T1_SF_Marksman_SOS_Standard_Desert_F","T1_SF_Explosive_Standard_Desert_F","T1_SF_Medic_Standard_Desert_F","T1_SF_FTL_Standard_Desert_F","T1_SF_AT_Standard_Desert_F","T1_SF_AR_Standard_Desert_F","T1_Spotter_Standard_Desert_F","T1_Sniper_Standard_Desert_F","T1_Specialist_AT_Standard_Desert_F","T1_Specialist_AAT_Standard_D","T1_Specialist_AA_Standard_Desert_F","T1_Specialist_AAA_Standard_Desert_F","T1_Specialist_MG_Standard_Desert_F","T1_Specialist_AMG_Standard_Desert_F","T1_Scout_Standard_Desert_F","T1_Scout_TL_Standard_Desert_F","T1_B_MRAP_01_hmg_DesertPlain_F","T1_B_MRAP_01_gmg_DesertPlain_F","T1_B_MRAP_01_DesertPlain_F","T1_B_MRAP_01_hmg_Desert_F","T1_B_MRAP_01_gmg_Desert_F","T1_B_MRAP_01_Desert_F"};
		weapons[] = {"T1_U_Sniper_Standard_desert","T1_U_Medic_Standard_desert","T1_U_Squad_Standard_desert","T1_V_PlateCarrier2_desert","T1_V_PlateCarrier2_medic_desert","T1_H_HelmetB_desert"};
		requiredVersion = 0.1;
		requiredAddons[] = {"t1_units"};
	};
};
class CfgFactionClasses
{
	class T1_Units_Desert
	{
		displayName = "T1 Units (Desert)";
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
	class T1_Kitbag_camo_Lead;
	class T1_Kitbag_camo_Lead_desert: T1_Kitbag_camo_Lead
	{
		scope = 1;
		displayName = "Kitbag (T1 Desert)";
		hiddenSelectionsTextures[] = {"\t1_units_desert\data\backpacks\t1_kitbag_desert_co.paa"};
	};
	class T1_Kitbag_camo;
	class T1_Kitbag_camo_desert: T1_Kitbag_camo
	{
		scope = 1;
		displayName = "Kitbag (T1 Desert)";
		hiddenSelectionsTextures[] = {"\t1_units_desert\data\backpacks\t1_kitbag_desert_co.paa"};
	};
	class T1_Carryall_camo_PLSgt_JTAC;
	class T1_Carryall_camo_PLSgt_JTAC_desert: T1_Carryall_camo_PLSgt_JTAC
	{
		scope = 1;
		displayName = "Carryall Backpack (T1 Desert)";
		hiddenSelectionsTextures[] = {"\t1_units_desert\data\backpacks\t1_carryall_desert_co.paa"};
	};
	class T1_Carryall_camo_PLEOD;
	class T1_Carryall_camo_PLEOD_desert: T1_Carryall_camo_PLEOD
	{
		scope = 1;
		displayName = "Carryall Backpack (T1 Desert)";
		hiddenSelectionsTextures[] = {"\t1_units_desert\data\backpacks\t1_carryall_desert_co.paa"};
	};
	class T1_Kitbag_camo_medic;
	class T1_Kitbag_camo_medic_desert: T1_Kitbag_camo_medic
	{
		scope = 1;
		displayName = "Kitbag (T1 Desert)";
		hiddenSelectionsTextures[] = {"\t1_units_desert\data\backpacks\t1_kitbag_desert_co.paa"};
	};
	class T1_Kitbag_camo_cls;
	class T1_Kitbag_camo_cls_desert: T1_Kitbag_camo_cls
	{
		scope = 1;
		displayName = "Kitbag (T1 Desert)";
		hiddenSelectionsTextures[] = {"\t1_units_desert\data\backpacks\t1_kitbag_desert_co.paa"};
	};
	class T1_Kitbag_camo_Section_AT;
	class T1_Kitbag_camo_Section_AT_desert: T1_Kitbag_camo_Section_AT
	{
		scope = 1;
		displayName = "Kitbag (T1 Desert)";
		hiddenSelectionsTextures[] = {"\t1_units_desert\data\backpacks\t1_kitbag_desert_co.paa"};
	};
	class T1_Kitbag_camo_AR;
	class T1_Kitbag_camo_AR_desert: T1_Kitbag_camo_AR
	{
		scope = 1;
		displayName = "Kitbag (T1 Desert)";
		hiddenSelectionsTextures[] = {"\t1_units_desert\data\backpacks\t1_kitbag_desert_co.paa"};
	};
	class T1_Carryall_camo_AMG;
	class T1_Carryall_camo_AMG_desert: T1_Carryall_camo_AMG
	{
		scope = 1;
		displayName = "Carryall Backpack (T1 Desert)";
		hiddenSelectionsTextures[] = {"\t1_units_desert\data\backpacks\t1_carryall_desert_co.paa"};
	};
	class T1_Carryall_camo_AAA;
	class T1_Carryall_camo_AAA_desert: T1_Carryall_camo_AAA
	{
		scope = 1;
		displayName = "Carryall Backpack (T1 Desert)";
		hiddenSelectionsTextures[] = {"\t1_units_desert\data\backpacks\t1_carryall_desert_co.paa"};
	};
	class T1_Kitbag_camo_AA;
	class T1_Kitbag_camo_AA_desert: T1_Kitbag_camo_AA
	{
		scope = 1;
		displayName = "Kitbag (T1 Desert)";
		hiddenSelectionsTextures[] = {"\t1_units_desert\data\backpacks\t1_kitbag_desert_co.paa"};
	};
	class T1_Carryall_camo_AAT;
	class T1_Carryall_camo_AAT_desert: T1_Carryall_camo_AAT
	{
		scope = 1;
		displayName = "Carryall Backpack (T1 Desert)";
		hiddenSelectionsTextures[] = {"\t1_units_desert\data\backpacks\t1_carryall_desert_co.paa"};
	};
	class T1_Kitbag_camo_AT;
	class T1_Kitbag_camo_AT_desert: T1_Kitbag_camo_AT
	{
		scope = 1;
		displayName = "Kitbag (T1 Desert)";
		hiddenSelectionsTextures[] = {"\t1_units_desert\data\backpacks\t1_kitbag_desert_co.paa"};
	};
	class T1_Kitbag_camo_medic_sf;
	class T1_Kitbag_camo_medic_sf_desert: T1_Kitbag_camo_medic_sf
	{
		scope = 1;
		displayName = "Kitbag (T1 Desert)";
		hiddenSelectionsTextures[] = {"\t1_units_desert\data\backpacks\t1_kitbag_desert_co.paa"};
	};
	class T1_Carryall_camo_Exp_SF;
	class T1_Carryall_camo_Exp_SF_desert: T1_Carryall_camo_Exp_SF
	{
		scope = 1;
		displayName = "Carryall Backpack (T1 Desert)";
		hiddenSelectionsTextures[] = {"\t1_units_desert\data\backpacks\t1_carryall_desert_co.paa"};
	};
	class T1_Kitbag_camo_SF_Marksman;
	class T1_Kitbag_camo_SF_Marksman_desert: T1_Kitbag_camo_SF_Marksman
	{
		scope = 1;
		displayName = "Kitbag (T1 Desert)";
		hiddenSelectionsTextures[] = {"\t1_units_desert\data\backpacks\t1_kitbag_desert_co.paa"};
	};
	class T1_Soldier_F;
	class T1_Soldier_Desert_F: T1_Soldier_F
	{
		scope = 1;
		uniformClass = "T1_U_Squad_Standard_desert";
		hiddenSelectionsTextures[] = {"\t1_units_desert\data\units\t1_clothing1_desert_co.paa"};
	};
	class T1_Section_Lead_Standard_F;
	class T1_Section_Lead_Standard_Desert_F: T1_Section_Lead_Standard_F
	{
		scope = 2;
		faction = "T1_Units_Desert";
		vehicleClass = "Section";
		uniformClass = "T1_U_Squad_Standard_desert";
		hiddenSelectionsTextures[] = {"\t1_units_desert\data\units\t1_clothing1_desert_co.paa"};
		linkedItems[] = {"T1_V_PlateCarrier2_desert","T1_H_HelmetB_desert","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		respawnLinkedItems[] = {"T1_V_PlateCarrier2_desert","T1_H_HelmetB_desert","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		backpack = "T1_Kitbag_camo_Lead_desert";
	};
	class T1_Section_Sgt_Standard_F;
	class T1_Section_Sgt_Standard_Desert_F: T1_Section_Sgt_Standard_F
	{
		scope = 2;
		faction = "T1_Units_Desert";
		vehicleClass = "Section";
		uniformClass = "T1_U_Squad_Standard_desert";
		hiddenSelectionsTextures[] = {"\t1_units_desert\data\units\t1_clothing1_desert_co.paa"};
		linkedItems[] = {"T1_V_PlateCarrier2_desert","T1_H_HelmetB_desert","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		respawnLinkedItems[] = {"T1_V_PlateCarrier2_desert","T1_H_HelmetB_desert","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		backpack = "T1_Kitbag_camo_Lead_desert";
	};
	class T1_Section_AR_Standard_F;
	class T1_Section_AR_Standard_Desert_F: T1_Section_AR_Standard_F
	{
		scope = 2;
		faction = "T1_Units_Desert";
		vehicleClass = "Section";
		uniformClass = "T1_U_Squad_Standard_desert";
		hiddenSelectionsTextures[] = {"\t1_units_desert\data\units\t1_clothing1_desert_co.paa"};
		linkedItems[] = {"T1_V_PlateCarrier2_desert","T1_H_HelmetB_desert","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		respawnLinkedItems[] = {"T1_V_PlateCarrier2_desert","T1_H_HelmetB_desert","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		backpack = "T1_Kitbag_camo_desert";
	};
	class T1_Section_AAR_Standard_F;
	class T1_Section_AAR_Standard_Desert_F: T1_Section_AAR_Standard_F
	{
		scope = 2;
		faction = "T1_Units_Desert";
		vehicleClass = "Section";
		uniformClass = "T1_U_Squad_Standard_desert";
		hiddenSelectionsTextures[] = {"\t1_units_desert\data\units\t1_clothing1_desert_co.paa"};
		linkedItems[] = {"T1_V_PlateCarrier2_desert","T1_H_HelmetB_desert","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		respawnLinkedItems[] = {"T1_V_PlateCarrier2_desert","T1_H_HelmetB_desert","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		backpack = "T1_Kitbag_camo_AR_desert";
	};
	class T1_Section_AT_Standard_F;
	class T1_Section_AT_Standard_Desert_F: T1_Section_AT_Standard_F
	{
		scope = 2;
		faction = "T1_Units_Desert";
		vehicleClass = "Section";
		uniformClass = "T1_U_Squad_Standard_desert";
		hiddenSelectionsTextures[] = {"\t1_units_desert\data\units\t1_clothing1_desert_co.paa"};
		linkedItems[] = {"T1_V_PlateCarrier2_desert","T1_H_HelmetB_desert","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		respawnLinkedItems[] = {"T1_V_PlateCarrier2_desert","T1_H_HelmetB_desert","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		backpack = "T1_Kitbag_camo_Section_AT_desert";
	};
	class T1_Section_CLS_Standard_F;
	class T1_Section_CLS_Standard_Desert_F: T1_Section_CLS_Standard_F
	{
		scope = 2;
		faction = "T1_Units_Desert";
		vehicleClass = "Section";
		uniformClass = "T1_U_Squad_Standard_desert";
		hiddenSelectionsTextures[] = {"\t1_units_desert\data\units\t1_clothing1_desert_co.paa"};
		linkedItems[] = {"T1_V_PlateCarrier2_desert","T1_H_HelmetB_desert","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		respawnLinkedItems[] = {"T1_V_PlateCarrier2_desert","T1_H_HelmetB_desert","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		backpack = "T1_Kitbag_camo_cls_desert";
	};
	class T1_Platoon_Lead_Standard_F;
	class T1_Platoon_Lead_Standard_Desert_F: T1_Platoon_Lead_Standard_F
	{
		scope = 2;
		faction = "T1_Units_Desert";
		vehicleClass = "Platoon";
		uniformClass = "T1_U_Squad_Standard_desert";
		hiddenSelectionsTextures[] = {"\t1_units_desert\data\units\t1_clothing1_desert_co.paa"};
		linkedItems[] = {"T1_V_PlateCarrier2_desert","T1_H_HelmetB_desert","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		respawnLinkedItems[] = {"T1_V_PlateCarrier2_desert","T1_H_HelmetB_desert","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		backpack = "T1_Kitbag_camo_Lead_desert";
	};
	class T1_Platoon_Medic_Standard_F;
	class T1_Platoon_Medic_Standard_Desert_F: T1_Platoon_Medic_Standard_F
	{
		scope = 2;
		faction = "T1_Units_Desert";
		vehicleClass = "Platoon";
		uniformClass = "T1_U_Squad_Standard_desert";
		hiddenSelectionsTextures[] = {"\t1_units_desert\data\units\t1_clothing1_desert_co.paa"};
		linkedItems[] = {"T1_V_PlateCarrier2_desert","T1_H_HelmetB_desert","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		respawnLinkedItems[] = {"T1_V_PlateCarrier2_desert","T1_H_HelmetB_desert","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		backpack = "T1_Kitbag_camo_medic_desert";
	};
	class T1_Platoon_EOD_Standard_F;
	class T1_Platoon_EOD_Standard_Desert_F: T1_Platoon_EOD_Standard_F
	{
		scope = 2;
		faction = "T1_Units_Desert";
		vehicleClass = "Platoon";
		uniformClass = "T1_U_Medic_Standard_desert";
		hiddenSelectionsTextures[] = {"\t1_units_desert\data\units\t1_clothing1_medic_desert_co.paa"};
		linkedItems[] = {"T1_V_PlateCarrier2_desert","T1_H_HelmetB_desert","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		respawnLinkedItems[] = {"T1_V_PlateCarrier2_desert","T1_H_HelmetB_desert","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		backpack = "T1_Carryall_camo_PLEOD_desert";
	};
	class T1_Platoon_Sgt_Standard_F;
	class T1_Platoon_Sgt_Standard_Desert_F: T1_Platoon_Sgt_Standard_F
	{
		scope = 2;
		faction = "T1_Units_Desert";
		vehicleClass = "Platoon";
		uniformClass = "T1_U_Squad_Standard_desert";
		hiddenSelectionsTextures[] = {"\t1_units_desert\data\units\t1_clothing1_desert_co.paa"};
		linkedItems[] = {"T1_V_PlateCarrier2_desert","T1_H_HelmetB_desert","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		respawnLinkedItems[] = {"T1_V_PlateCarrier2_desert","T1_H_HelmetB_desert","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		backpack = "T1_Carryall_camo_PLSgt_JTAC_desert";
	};
	class T1_SF_Marksman_SOS_Standard_F;
	class T1_SF_Marksman_SOS_Standard_Desert_F: T1_SF_Marksman_SOS_Standard_F
	{
		scope = 2;
		faction = "T1_Units_Desert";
		uniformClass = "T1_U_Squad_Standard_desert";
		hiddenSelectionsTextures[] = {"\t1_units_desert\data\units\t1_clothing1_desert_co.paa"};
		linkedItems[] = {"T1_V_PlateCarrier2_desert","T1_H_HelmetB_desert","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		respawnLinkedItems[] = {"T1_V_PlateCarrier2_desert","T1_H_HelmetB_desert","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		backpack = "T1_Kitbag_camo_SF_Marksman_desert";
	};
	class T1_SF_Explosive_Standard_F;
	class T1_SF_Explosive_Standard_Desert_F: T1_SF_Explosive_Standard_F
	{
		scope = 2;
		faction = "T1_Units_Desert";
		uniformClass = "T1_U_Squad_Standard_desert";
		hiddenSelectionsTextures[] = {"\t1_units_desert\data\units\t1_clothing1_desert_co.paa"};
		linkedItems[] = {"T1_V_PlateCarrier2_desert","T1_H_HelmetB_desert","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		respawnLinkedItems[] = {"T1_V_PlateCarrier2_desert","T1_H_HelmetB_desert","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		backpack = "T1_Carryall_camo_Exp_SF_desert";
	};
	class T1_SF_Medic_Standard_F;
	class T1_SF_Medic_Standard_Desert_F: T1_SF_Medic_Standard_F
	{
		scope = 2;
		faction = "T1_Units_Desert";
		uniformClass = "T1_U_Medic_Standard_desert";
		hiddenSelectionsTextures[] = {"\t1_units_desert\data\units\t1_clothing1_medic_desert_co.paa"};
		linkedItems[] = {"T1_V_PlateCarrier2_desert","T1_H_HelmetB_desert","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		respawnLinkedItems[] = {"T1_V_PlateCarrier2_desert","T1_H_HelmetB_desert","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		backpack = "T1_Kitbag_camo_medic_sf_desert";
	};
	class T1_SF_FTL_Standard_F;
	class T1_SF_FTL_Standard_Desert_F: T1_SF_FTL_Standard_F
	{
		scope = 2;
		faction = "T1_Units_Desert";
		uniformClass = "T1_U_Squad_Standard_desert";
		hiddenSelectionsTextures[] = {"\t1_units_desert\data\units\t1_clothing1_desert_co.paa"};
		linkedItems[] = {"T1_V_PlateCarrier2_desert","T1_H_HelmetB_desert","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		respawnLinkedItems[] = {"T1_V_PlateCarrier2_desert","T1_H_HelmetB_desert","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		backpack = "T1_Kitbag_camo_Lead_desert";
	};
	class T1_SF_AT_Standard_F;
	class T1_SF_AT_Standard_Desert_F: T1_SF_AT_Standard_F
	{
		scope = 2;
		faction = "T1_Units_Desert";
		uniformClass = "T1_U_Squad_Standard_desert";
		hiddenSelectionsTextures[] = {"\t1_units_desert\data\units\t1_clothing1_desert_co.paa"};
		linkedItems[] = {"T1_V_PlateCarrier2_desert","T1_H_HelmetB_desert","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		respawnLinkedItems[] = {"T1_V_PlateCarrier2_desert","T1_H_HelmetB_desert","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		backpack = "T1_Kitbag_camo_Lead_desert";
	};
	class T1_SF_AR_Standard_F;
	class T1_SF_AR_Standard_Desert_F: T1_SF_AR_Standard_F
	{
		scope = 2;
		faction = "T1_Units_Desert";
		uniformClass = "T1_U_Squad_Standard_desert";
		hiddenSelectionsTextures[] = {"\t1_units_desert\data\units\t1_clothing1_desert_co.paa"};
		linkedItems[] = {"T1_V_PlateCarrier2_desert","T1_H_HelmetB_desert","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		respawnLinkedItems[] = {"T1_V_PlateCarrier2_desert","T1_H_HelmetB_desert","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		backpack = "T1_Kitbag_camo_desert";
	};
	class T1_Spotter_Standard_F;
	class T1_Spotter_Standard_Desert_F: T1_Spotter_Standard_F
	{
		faction = "T1_Units_Desert";
		uniformClass = "T1_FB_Ghillie_Desert";
		model = "\Ghillie\ghillie.p3d";
		modelSides[] = {3,1};
		uniformAccessories[] = {};
		hiddenSelectionsTextures[] = {"\Ghillie\ghillie_desert_co.paa"};
		linkedItems[] = {"T1_V_PlateCarrier2_desert","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		respawnLinkedItems[] = {"T1_V_PlateCarrier2_desert","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		glassesEnabled = 0;
	};
	class T1_Sniper_Standard_F;
	class T1_Sniper_Standard_Desert_F: T1_Sniper_Standard_F
	{
		faction = "T1_Units_Desert";
		uniformClass = "T1_FB_Ghillie_Desert";
		model = "\Ghillie\ghillie.p3d";
		modelSides[] = {3,1};
		uniformAccessories[] = {};
		hiddenSelectionsTextures[] = {"\Ghillie\ghillie_desert_co.paa"};
		linkedItems[] = {"T1_V_PlateCarrier2_desert","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		respawnLinkedItems[] = {"T1_V_PlateCarrier2_desert","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		glassesEnabled = 0;
	};
	class T1_Specialist_AT_Standard_F;
	class T1_Specialist_AT_Standard_Desert_F: T1_Specialist_AT_Standard_F
	{
		scope = 2;
		faction = "T1_Units_Desert";
		uniformClass = "T1_U_Squad_Standard_desert";
		hiddenSelectionsTextures[] = {"\t1_units_desert\data\units\t1_clothing1_desert_co.paa"};
		linkedItems[] = {"T1_V_PlateCarrier2_desert","T1_H_HelmetB_desert","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		respawnLinkedItems[] = {"T1_V_PlateCarrier2_desert","T1_H_HelmetB_desert","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		backpack = "T1_Kitbag_camo_AT_desert";
	};
	class T1_Specialist_AAT_Standard_F;
	class T1_Specialist_AAT_Standard_Desert_F: T1_Specialist_AAT_Standard_F
	{
		scope = 2;
		faction = "T1_Units_Desert";
		uniformClass = "T1_U_Squad_Standard_desert";
		hiddenSelectionsTextures[] = {"\t1_units_desert\data\units\t1_clothing1_desert_co.paa"};
		linkedItems[] = {"T1_V_PlateCarrier2_desert","T1_H_HelmetB_desert","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		respawnLinkedItems[] = {"T1_V_PlateCarrier2_desert","T1_H_HelmetB_desert","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		backpack = "T1_Carryall_camo_AAT_desert";
	};
	class T1_Specialist_AA_Standard_F;
	class T1_Specialist_AA_Standard_Desert_F: T1_Specialist_AA_Standard_F
	{
		scope = 2;
		faction = "T1_Units_Desert";
		uniformClass = "T1_U_Squad_Standard_desert";
		hiddenSelectionsTextures[] = {"\t1_units_desert\data\units\t1_clothing1_desert_co.paa"};
		linkedItems[] = {"T1_V_PlateCarrier2_desert","T1_H_HelmetB_desert","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		respawnLinkedItems[] = {"T1_V_PlateCarrier2_desert","T1_H_HelmetB_desert","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		backpack = "T1_Kitbag_camo_AA_desert";
	};
	class T1_Specialist_AAA_Standard_F;
	class T1_Specialist_AAA_Standard_Desert_F: T1_Specialist_AAA_Standard_F
	{
		scope = 2;
		faction = "T1_Units_Desert";
		uniformClass = "T1_U_Squad_Standard_desert";
		hiddenSelectionsTextures[] = {"\t1_units_desert\data\units\t1_clothing1_desert_co.paa"};
		linkedItems[] = {"T1_V_PlateCarrier2_desert","T1_H_HelmetB_desert","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		respawnLinkedItems[] = {"T1_V_PlateCarrier2_desert","T1_H_HelmetB_desert","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		backpack = "T1_Carryall_camo_AAA_desert";
	};
	class T1_Specialist_MG_Standard_F;
	class T1_Specialist_MG_Standard_Desert_F: T1_Specialist_MG_Standard_F
	{
		scope = 2;
		faction = "T1_Units_Desert";
		uniformClass = "T1_U_Squad_Standard_desert";
		hiddenSelectionsTextures[] = {"\t1_units_desert\data\units\t1_clothing1_desert_co.paa"};
		linkedItems[] = {"T1_V_PlateCarrier2_desert","T1_H_HelmetB_desert","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		respawnLinkedItems[] = {"T1_V_PlateCarrier2_desert","T1_H_HelmetB_desert","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		backpack = "T1_Kitbag_camo_desert";
	};
	class T1_Specialist_AMG_Standard_F;
	class T1_Specialist_AMG_Standard_Desert_F: T1_Specialist_AMG_Standard_F
	{
		scope = 2;
		faction = "T1_Units_Desert";
		uniformClass = "T1_U_Squad_Standard_desert";
		hiddenSelectionsTextures[] = {"\t1_units_desert\data\units\t1_clothing1_desert_co.paa"};
		linkedItems[] = {"T1_V_PlateCarrier2_desert","T1_H_HelmetB_desert","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		respawnLinkedItems[] = {"T1_V_PlateCarrier2_desert","T1_H_HelmetB_desert","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		backpack = "T1_Carryall_camo_AMG_desert";
	};
	class T1_Scout_Standard_F;
	class T1_Scout_Standard_Desert_F: T1_Scout_Standard_F
	{
		scope = 2;
		faction = "T1_Units_Desert";
		uniformClass = "T1_U_Squad_Standard_desert";
		hiddenSelectionsTextures[] = {"\t1_units_desert\data\units\t1_clothing1_desert_co.paa"};
		linkedItems[] = {"V_Chestrig_khk","H_Booniehat_khk","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		respawnLinkedItems[] = {"V_Chestrig_khk","H_Booniehat_khk","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		backpack = "T1_Kitbag_camo_Lead_desert";
	};
	class T1_Scout_TL_Standard_F;
	class T1_Scout_TL_Standard_Desert_F: T1_Scout_TL_Standard_F
	{
		scope = 2;
		faction = "T1_Units_Desert";
		uniformClass = "T1_U_Squad_Standard_desert";
		hiddenSelectionsTextures[] = {"\t1_units_desert\data\units\t1_clothing1_desert_co.paa"};
		linkedItems[] = {"V_Chestrig_khk","H_Booniehat_khk","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		respawnLinkedItems[] = {"V_Chestrig_khk","H_Booniehat_khk","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		backpack = "T1_Kitbag_camo_Lead_desert";
	};
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
};
class CfgWeapons
{
	class Uniform_Base;
	class UniformItem;
	class ItemInfo;
	class T1_U_Squad_Standard_desert: Uniform_Base
	{
		scope = 2;
		displayName = "T1 Uniform (Desert)";
		picture = "\t1_units\data\ui\icon_t1_u_squad_standard.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "T1_Soldier_Desert_F";
			containerClass = "Supply130";
			mass = 80;
		};
	};
	class T1_U_Medic_Standard_desert: Uniform_Base
	{
		scope = 2;
		displayName = "T1 Medic Uniform (Desert)";
		picture = "\t1_units\data\ui\icon_t1_u_squad_standard.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "T1_Squad_Medic_Standard_Desert_F";
			containerClass = "Supply130";
			mass = 80;
		};
	};
	class T1_U_Sniper_Standard_desert: Uniform_Base
	{
		scope = 2;
		displayName = "T1 Ghillie Suit (Desert)";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "T1_Sniper_Standard_Desert_F";
			containerClass = "Supply110";
			mass = 80;
		};
	};
	class V_PlateCarrier2_rgr;
	class T1_V_PlateCarrier2_desert: V_PlateCarrier2_rgr
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
	class H_HelmetB;
	class T1_H_HelmetB_desert: H_HelmetB
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "ECH (T1 Desert)";
		picture = "\A3\characters_f\Data\UI\icon_H_helmet_plain_ca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\t1_units_desert\data\units\t1_equip1_desert_co.paa"};
	};
};
//};
