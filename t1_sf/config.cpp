#define STDITEMS    "ItemRadio","ACE_EarPlugs","ACE_microDAGR","ACE_MapTools","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie", "ACE_tourniquet", "ACE_tourniquet", "ACE_tourniquet", "ACE_tourniquet", "ACRE_PRC152", "rhsusf_ANPVS_14", "ACE_Flashlight_MX991"
#define STDITEMS_SF "ItemRadio","ACE_EarPlugs","ACE_microDAGR","ACE_MapTools","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie", "ACE_tourniquet", "ACE_tourniquet", "ACE_tourniquet", "ACE_tourniquet", "ACRE_PRC152", "ACE_NVG_Gen4", "ACE_Flashlight_MX991"

#define MEDICALITEMS "ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_morphine","ACE_morphine","ACE_morphine","ACE_epinephrine"
#define MEDICALITEMS2 "ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_morphine","ACE_morphine","ACE_morphine","ACE_epinephrine" 

class CfgPatches {
    class t1_sf {
		units[] = {
			"T1_AssaultPack_Lead_SF",
			"T1_SF_FTL_Standard_F",
			"T1_SF_AR_Standard_F"
		};
		weapons[] = {
			"T1_SF_m4a1_blockII_SD_wd",
			"T1_weap_mmg_sf"
		};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"t1_units"	// and nested dependencies
		};
	};
};

class CfgWeapons {
    class rhs_weap_m4a1_blockII_wd;
    class T1_SF_m4a1_blockII_SD_wd : rhs_weap_m4a1_blockII_wd
    {
        magazines[] += {"T1_30Rnd_556x45_Stanag_SD"};
        class LinkedItems
        {
            class LinkedItemsOptic
            {
                item = "iansky_specterdrkf";
                slot = "CowsSlot";
            };
            class LinkedItemsMuzzle
            {
                item = "rhsusf_acc_rotex5_grey";
                slot = "MuzzleSlot";
            };
            class LinkedItemsAcc
            {
                item = "acc_pointer_IR";
                slot = "PointerSlot";
            };
            class LinkedItemsUnder
            {
                item = "rhsusf_acc_grip2_wd";
                slot = "UnderBarrelSlot";
            };
        };
    };

	class 45KO_zafir_black;
	class T1_weap_mmg_sf: 45KO_zafir_black
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


};

class CfgVehicles {
    class T1_Soldier_F;

    // SF Team lead

	class T1_SF_FTL_Standard_F: T1_Soldier_F	{
		scope = 2;
		uniformClass = "t1_rhs_uniform_g3_m81";
		t1_DutyMod = 0.95;
		faction = "T1_Units";
		vehicleClass = "SF";
		attendant = 1;
		displayName = "T1 SF FTL";
		weapons[] = {
			"T1_SF_m4a1_blockII_SD_wd",
			"rhs_weap_M320",
			"Throw",
			"Put",
			"ACE_MX2A"
		};
		respawnWeapons[] = {
			"T1_SF_m4a1_blockII_SD_wd",
			"rhs_weap_M320",
			"Throw",
			"Put",
			"ACE_MX2A"
		};
		magazines[] = {
			"ACE_M84",			
			"T1_30Rnd_556x45_Stanag_SD",
			"T1_30Rnd_556x45_Stanag_SD",
			"rhs_mag_30Rnd_556x45_Mk262_Stanag",
			"rhs_mag_30Rnd_556x45_Mk262_Stanag",
			"rhs_mag_30Rnd_556x45_Mk262_Stanag",
			"rhs_mag_30Rnd_556x45_Mk262_Stanag",
			"rhs_mag_30Rnd_556x45_Mk262_Stanag",
			"rhs_mag_30Rnd_556x45_Mk262_Stanag",
			"rhs_mag_30Rnd_556x45_Mk262_Stanag",
			"rhs_mag_30Rnd_556x45_Mk262_Stanag",
			"rhs_mag_30Rnd_556x45_Mk262_Stanag",
			"rhs_mag_30Rnd_556x45_Mk262_Stanag",
			"rhs_mag_30Rnd_556x45_Mk262_Stanag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen"
		};
		respawnmagazines[] = {
			"ACE_M84",			
			"T1_30Rnd_556x45_Stanag_SD",
			"T1_30Rnd_556x45_Stanag_SD",
			"rhs_mag_30Rnd_556x45_Mk262_Stanag",
			"rhs_mag_30Rnd_556x45_Mk262_Stanag",
			"rhs_mag_30Rnd_556x45_Mk262_Stanag",
			"rhs_mag_30Rnd_556x45_Mk262_Stanag",
			"rhs_mag_30Rnd_556x45_Mk262_Stanag",
			"rhs_mag_30Rnd_556x45_Mk262_Stanag",
			"rhs_mag_30Rnd_556x45_Mk262_Stanag",
			"rhs_mag_30Rnd_556x45_Mk262_Stanag",
			"rhs_mag_30Rnd_556x45_Mk262_Stanag",
			"rhs_mag_30Rnd_556x45_Mk262_Stanag",
			"rhs_mag_30Rnd_556x45_Mk262_Stanag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen"
			
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
    class B_AssaultPack_rgr;
	class T1_AssaultPack_Lead_SF: B_AssaultPack_rgr
	{
		scope = 1;
		displayName = "AssaultPack SF Lead";
		//hiddenSelectionsTextures[] = {"\t1_textures\backpacks\t1_B_AssaultPack_rgr_camo_co.paa"};
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

	// SF AR

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


};
