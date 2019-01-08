#define STDITEMS    "ItemRadio","ACE_EarPlugs","ACE_microDAGR","ACE_MapTools","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie", "ACE_tourniquet", "ACE_tourniquet", "ACE_tourniquet", "ACE_tourniquet", "ACRE_PRC152", "rhsusf_ANPVS_14", "ACE_Flashlight_MX991"
// MEDICALITEMS is used in addition to STDITEMS for units without backpacks
#define MEDICALITEMS "ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_morphine","ACE_morphine","ACE_morphine","ACE_epinephrine"
#define MEDICALITEMS2 "ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_morphine","ACE_morphine","ACE_morphine","ACE_epinephrine" 

class CfgPatches
{
	class t1_armor
	{
		units[] = {
			"T1_Crewman_Standard_F",
			"T1_Crew_Commander_Standard_F",
			"T1_Sentinel_Commander_Standard_F",
			"T1_Sentinel_Gunner_Standard_F",
			"T1_Sentinel_Driver_Standard_F",
//			"t1_apc",
			"t1_ifv_wheeled",
			"t1_tank",
			"t1_support_heavy"
		};
		weapons[] = {};
		magazines[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"t1_units"
		};
	};
};
class cfgVehicles {
    class T1_Soldier_F;
	class T1_Crewman_Standard_F: T1_Soldier_F {
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "Special";
		displayName = "T1 Crewman";
		uniformClass = "T1_U_Pilot_Camo";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\t1_textures\units\pilot\t1_pilot_camo_co.paa"};
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
			"rhsusf_mag_17Rnd_9x19_FMJ",
			"rhsusf_mag_17Rnd_9x19_FMJ",
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
			"rhsusf_mag_17Rnd_9x19_FMJ",
			"rhsusf_mag_17Rnd_9x19_FMJ",
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
	class T1_Crew_Commander_Standard_F: T1_Soldier_F {
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "Special";
		displayName = "T1 Crew Commander";
		uniformClass = "T1_U_Pilot_Camo";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\t1_textures\units\pilot\t1_pilot_camo_co.paa"};
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
			"rhsusf_mag_17Rnd_9x19_FMJ",
			"rhsusf_mag_17Rnd_9x19_FMJ",
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
			"rhsusf_mag_17Rnd_9x19_FMJ",
			"rhsusf_mag_17Rnd_9x19_FMJ",
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
	class T1_Sentinel_Commander_Standard_F: T1_Soldier_F {
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "Special";
		displayName = "T1 Sentinel Commander";
		uniformClass = "T1_U_Pilot_Camo";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\t1_textures\units\pilot\t1_pilot_camo_co.paa"};
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
			"rhsusf_mag_17Rnd_9x19_FMJ",
			"rhsusf_mag_17Rnd_9x19_FMJ",
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
			"rhsusf_mag_17Rnd_9x19_FMJ",
			"rhsusf_mag_17Rnd_9x19_FMJ",
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
	class T1_Sentinel_Gunner_Standard_F: T1_Soldier_F {
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "Special";
		displayName = "T1 Sentinel Gunner";
		uniformClass = "T1_U_Pilot_Camo";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\t1_textures\units\pilot\t1_pilot_camo_co.paa"};
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
			"rhsusf_mag_17Rnd_9x19_FMJ",
			"rhsusf_mag_17Rnd_9x19_FMJ",
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
			"rhsusf_mag_17Rnd_9x19_FMJ",
			"rhsusf_mag_17Rnd_9x19_FMJ",
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
	class T1_Sentinel_Driver_Standard_F: T1_Soldier_F {
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "Special";
		displayName = "T1 Sentinel Driver Medic";
		uniformClass = "T1_U_Pilot_Camo";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\t1_textures\units\pilot\t1_pilot_camo_co.paa"};
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
			"rhsusf_mag_17Rnd_9x19_FMJ",
			"rhsusf_mag_17Rnd_9x19_FMJ",
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
			"rhsusf_mag_17Rnd_9x19_FMJ",
			"rhsusf_mag_17Rnd_9x19_FMJ",
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
		T1_NoMedicIcon = 0;
	};
	class B_APC_Wheeled_01_cannon_F;
	class t1_ifv_wheeled : B_APC_Wheeled_01_cannon_F {
		faction = "T1_Units";
		crew = "T1_Crewman_Standard_F";
		transportmaxmagazines = 99999;
		transportmaxweapons = 9999;
		transportmaxbackpacks = 99;
		maximumload = 999999;
		reportOwnPosition = 1;
		
		class TransportMagazines
		{
			class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag
			{
				magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
				count = 142;
			};
			class _xx_rhs_mag_30Rnd_556x45_Mk262_Stanag
			{
				magazine =  "t1_longrange_556";
				count = 24;
			};
			class _xx_rhsusf_100Rnd_556x45_soft_pouch
			{
				magazine = "rhsusf_100Rnd_556x45_soft_pouch";
				count = 48;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 36;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 48;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 36;
			};
			class _xx_ACE_M84
			{
				magazine = "ACE_M84";
				count = 16;
			};
			class manpad_missiles
			{
				magazine = "Titan_AA";
				count = 3;
			};
		};
		class TransportItems
		{
			class Bandage1
			{
				count = 280;
				name = "ACE_fieldDressing";
			};
			class _xx_ACE_morphine
			{
				count = 64;
				name = "ACE_morphine";
			};
			class _xx_ACE_epinephrine
			{
				count = 64;
				name = "ACE_epinephrine";
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
			class acre_prc152
			{
				count = 4;
				name = "acre_prc152";
			};
		};
		class TransportWeapons
		{
			class at4
			{
				weapon = "tf47_at4_heat";
				count = 4;
			};		  
			class law
			{
				weapon = "rhs_weap_m72a7";
				count = 10;
			};
			class manpad {
				count = 1;
				weapon = "";
			};
		};
	};
	class Leopard_2_wd;
	class t1_tank : Leopard_2_wd {
		faction = "T1_Units";
		crew = "T1_Crewman_Standard_F";
		reportOwnPosition = 1;
	};
	class B_APC_Tracked_01_CRV_F;
	class t1_support_heavy : B_APC_Tracked_01_CRV_F 
	{
		faction = "T1_Units";
		crew = "T1_Crewman_Standard_F";
		editorSubcategory = "LOP_Support";	// should check where LOP_ comes from
		ace_repair_canRepair = 1;
		ace_rearm_defaultSupply = 1200;
		reportOwnPosition = 1;
	};
	
};
