#define STDITEMS    "ItemRadio","ACE_EarPlugs","ACE_microDAGR","ACE_MapTools","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie", "ACE_tourniquet", "ACE_tourniquet", "ACE_tourniquet", "ACE_tourniquet", "ACRE_PRC152", "rhsusf_ANPVS_14", "ACE_Flashlight_MX991"
#define STDITEMS_SF "ItemRadio","ACE_EarPlugs","ACE_microDAGR","ACE_MapTools","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie", "ACE_tourniquet", "ACE_tourniquet", "ACE_tourniquet", "ACE_tourniquet", "ACRE_PRC152", "ACE_NVG_Gen4", "ACE_Flashlight_MX991","ACE_IR_Strobe_Item"

#define MEDICALITEMS "ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_morphine","ACE_morphine","ACE_morphine","ACE_epinephrine"
#define MEDICALITEMS2 "ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_morphine","ACE_morphine","ACE_morphine","ACE_epinephrine" 

class CfgPatches {
    class t1_sf {
		units[] = {
			"T1_AssaultPack_Lead_SF",
			"T1_SF_FTL_Standard_F",
			"T1_SF_AR_Standard_F",
			"T1_SF_Marksman_SOS_Standard_F",
			"T1_B_AssaultPack_SF_DM",
			"T1_B_AssaultPack_AR_SF",
			"T1_SF_AT_Standard_F",
			"T1_B_AssaultPack_AT_SF",
			"T1_SF_Explosive_Standard_F",
			"T1_B_AssaultPack_Exp_SF",
			"T1_SF_Medic_Standard_F",
			"T1_AssaultPack_medic_sf",
			"t1_mrzr_d",
			"t1_mrzr",
			"T1_LSV_Armed",
			"T1_shadow_ammobox",
			"T1_shadow_thermalbox"
		};
		weapons[] = {
			"T1_rhs_uniform_g3_m81",
			"T1_SF_m4a1_blockII_SD_wd",
			"T1_weap_mmg_sf",
			"T1_SF_pistol",
			"T1_45KO_ABR_green_SD"
		};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"t1_units",	// and nested dependencies
			"rhsusf_c_mrzr",
			"A3_Soft_F_Exp_LSV_02"
		};
	};
};

class CfgWeapons {
	class ItemInfo;
	class rhs_uniform_g3_m81;
	class T1_rhs_uniform_g3_m81: rhs_uniform_g3_m81
	{
		scope = 2;
		displayName = "T1 Uniform 1";
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply130";
		};
	};
	
    class rhs_weap_hk416d10_m320;
    class T1_SF_hk416d10_m320_SD : rhs_weap_hk416d10_m320
    {
        class LinkedItems
        {
            class LinkedItemsOptic
            {
                item = "optic_ERCO_blk_F";
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
        };
    };
	
    class rhs_weap_m4a1_blockII_wd;
    class T1_SF_m4a1_blockII_SD_wd : rhs_weap_m4a1_blockII_wd
    {
        class LinkedItems
        {
            class LinkedItemsOptic
            {
                item = "optic_ERCO_blk_F";
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
				item = "iansky_specterdrkf_t";
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
	class rhsusf_weap_glock17g4;
	class T1_SF_pistol : rhsusf_weap_glock17g4
	{
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				item = "rhsusf_acc_omega9k";
				slot = "MuzzleSlot";
			};		
		};
	};

	class 45KO_ABR_camo_green_F;
	class T1_45KO_ABR_green_SD : 45KO_ABR_camo_green_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_AMS";
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
				item = "bipod_01_F_blk";
				slot = "UnderBarrelSlot";
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
			"T1_SF_hk416d10_m320_SD",
			"Throw",
			"Put",
			"ACE_MX2A"
		};
		respawnWeapons[] = {
			"T1_SF_hk416d10_m320_SD",
			"Throw",
			"Put",
			"ACE_MX2A"
		};
		magazines[] = {
			"rhsusf_50Rnd_762x51_m62_tracer",		
			"T1_30Rnd_556x45_Stanag_SD",
			"T1_30Rnd_556x45_Stanag_SD",
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellBlue",
			"SmokeShellRed",
			"ACE_M84",
			"ACE_HuntIR_M203",
			"ACE_HuntIR_M203",
			"ACE_HuntIR_M203",
			"ACE_HuntIR_M203",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell"
		};
		respawnmagazines[] = {
			"rhsusf_50Rnd_762x51_m62_tracer",
			"T1_30Rnd_556x45_Stanag_SD",
			"T1_30Rnd_556x45_Stanag_SD",
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellBlue",
			"SmokeShellRed",
			"ACE_M84",
			"ACE_HuntIR_M203",
			"ACE_HuntIR_M203",
			"ACE_HuntIR_M203",
			"ACE_HuntIR_M203",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell"
		};
		icon = "iconManLeader";
		backpack = "T1_AssaultPack_Lead_SF";
		items[] = {
			"ACE_IR_Strobe_Item",
			"ItemRadio",
			"ACE_EarPlugs",
			"ACE_microDAGR",
			"ACE_MapTools",
			"ACE_CableTie",
			"ACE_CableTie",
			"ACE_CableTie",
			"ACE_CableTie",
			"ACE_CableTie",
			"ACE_CableTie",
			"ACE_CableTie",
			"ACE_CableTie",
			"ACE_CableTie",
			"ACE_CableTie",
			"ACE_tourniquet",
			"ACE_tourniquet",
			"ACE_tourniquet",
			"ACE_tourniquet",
			"ACE_NVG_Gen4",
			"ACE_Flashlight_MX991",
			"ACE_HuntIR_monitor"
		};
		respawnItems[] = {
			"ACE_IR_Strobe_Item",
			"ItemRadio",
			"ACE_EarPlugs",
			"ACE_microDAGR",
			"ACE_MapTools",
			"ACE_CableTie",
			"ACE_CableTie",
			"ACE_CableTie",
			"ACE_CableTie",
			"ACE_CableTie",
			"ACE_CableTie",
			"ACE_CableTie",
			"ACE_CableTie",
			"ACE_CableTie",
			"ACE_CableTie",
			"ACE_tourniquet",
			"ACE_tourniquet",
			"ACE_tourniquet",
			"ACE_tourniquet",
			"ACE_NVG_Gen4",
			"ACE_Flashlight_MX991",
			"ACE_HuntIR_monitor"
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
			class _xx_ACRE_PRC117F
			{
				count = 1;
				name = "ACRE_PRC117F";
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
			"T1_SF_pistol",
			"Throw",
			"Put",
			"ACE_Vector"
		};
		respawnweapons[] = {
			"T1_weap_mmg_sf",
			"T1_SF_pistol",
			"Throw",
			"Put",
			"ACE_Vector"
		};
		magazines[] = {
			"rhsusf_100Rnd_762x51_m62_tracer",
			"rhsusf_100Rnd_762x51_m62_tracer",
			"rhsusf_50Rnd_762x51_m62_tracer",
			"rhsusf_50Rnd_762x51_m62_tracer",
			"rhsusf_50Rnd_762x51_m62_tracer",
			"rhsusf_50Rnd_762x51_m62_tracer",
			"rhsusf_50Rnd_762x51_m62_tracer",
			"rhsusf_50Rnd_762x51_m62_tracer",
			"rhsusf_mag_17Rnd_9x19_JHP",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellBlue",
			"ACE_M84"
		};
		respawnmagazines[] = {
			"rhsusf_100Rnd_762x51_m62_tracer",
			"rhsusf_100Rnd_762x51_m62_tracer",
			"rhsusf_50Rnd_762x51_m62_tracer",
			"rhsusf_50Rnd_762x51_m62_tracer",
			"rhsusf_50Rnd_762x51_m62_tracer",
			"rhsusf_50Rnd_762x51_m62_tracer",
			"rhsusf_50Rnd_762x51_m62_tracer",
			"rhsusf_50Rnd_762x51_m62_tracer",
			"rhsusf_mag_17Rnd_9x19_JHP",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellBlue",
			"ACE_M84"
		};
		backpack = "T1_B_AssaultPack_AR_SF";
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

	// SF DM

	class T1_SF_Marksman_SOS_Standard_F: T1_Soldier_F
	{
		scope = 2;
		uniformClass = "t1_rhs_uniform_g3_m81";
		t1_DutyMod = 0.95;
		faction = "T1_Units";
		vehicleClass = "SF";
		attendant = 1;
		displayName = "T1 SF DM";
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
			"SmokeShellBlue",
			"SmokeShellRed",
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
			"ACE_20Rnd_762x51_Mag_SD",
			"ACE_20Rnd_762x51_Mag_SD",
			"HandGrenade",
			"SmokeShellBlue",
			"SmokeShellRed",
			"ACE_M84"
		};
		backpack = "T1_B_AssaultPack_SF_DM";
		items[] = {
			STDITEMS_SF,
			"ACE_RangeCard"
		};
		respawnItems[] = {
			STDITEMS_SF,
			"ACE_RangeCard"
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
	class T1_B_AssaultPack_AR_SF: B_AssaultPack_rgr
	{
		scope = 1;
		displayName = "Assaultpack SF AR (T1 Camo)";
		//hiddenSelectionsTextures[] = {"\t1_textures\backpacks\ogao_117.paa"};
	};
	class T1_B_AssaultPack_SF_DM: B_AssaultPack_rgr
	{
		scope = 1;
		displayName = "Assaultpack SF Marksman (T1 Camo)";
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
		};
		class TransportMagazines
		{
			class _xx_rhsusf_50Rnd_762x51_m62_tracer
			{
				count = 2;
				magazine = "rhsusf_50Rnd_762x51_m62_tracer";
			};
			class _xx_rhsusf_100Rnd_762x51_m62_tracer
			{
				count = 1;
				magazine = "rhsusf_100Rnd_762x51_m62_tracer";
			};
		};
	};
	
	// SF AT
	
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
			"T1_SF_m4a1_blockII_SD_wd",
			"Throw",
			"Put",
			"ACE_Vector",
			"tf47_at4_heat"
		};
		respawnWeapons[] = {
			"T1_SF_m4a1_blockII_SD_wd",
			"Throw",
			"Put",
			"ACE_Vector",
			"tf47_at4_heat"
		};
		magazines[] = {
			"rhsusf_50Rnd_762x51_m62_tracer",
			"T1_30Rnd_556x45_Stanag_SD",
			"T1_30Rnd_556x45_Stanag_SD",
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"HandGrenade"
		};
		respawnmagazines[] = {
			"rhsusf_50Rnd_762x51_m62_tracer",
			"T1_30Rnd_556x45_Stanag_SD",
			"T1_30Rnd_556x45_Stanag_SD",
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"HandGrenade"
		};
		backpack = "T1_B_AssaultPack_AT_SF";
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

	// SF Expl

	class T1_SF_Explosive_Standard_F: T1_Soldier_F
	{
		scope = 2;
		uniformClass = "t1_rhs_uniform_g3_m81";
		t1_DutyMod = 0.95;
		faction = "T1_Units";
		vehicleClass = "SF";
		displayName = "T1 SF Explosive Specialist";
		weapons[] = {
			"T1_SF_m4a1_blockII_SD_wd",
			"T1_SF_pistol",
			"Throw",
			"Put",
			"ACE_Vector"
		};
		respawnWeapons[] = {
			"T1_SF_m4a1_blockII_SD_wd",
			"T1_SF_pistol",
			"Throw",
			"Put",
			"ACE_Vector"
		};
		magazines[] = {
			"DemoCharge_Remote_Mag",
			"rhsusf_50Rnd_762x51_m62_tracer",
			"T1_30Rnd_556x45_Stanag_SD",
			"T1_30Rnd_556x45_Stanag_SD",
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellBlue",
			"SmokeShellRed",
			"ACE_M84",
			"ACE_M84"
		};
		respawnmagazines[] = {
			"DemoCharge_Remote_Mag",
			"rhsusf_50Rnd_762x51_m62_tracer",
			"T1_30Rnd_556x45_Stanag_SD",
			"T1_30Rnd_556x45_Stanag_SD",
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShellBlue",
			"SmokeShellRed",
			"ACE_M84",
			"ACE_M84"
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
	class T1_B_AssaultPack_AT_SF: B_AssaultPack_rgr
	{
		scope = 1;
		//hiddenSelectionsTextures[] = {"\t1_textures\backpacks\t1_B_AssaultPack_rgr_camo_co.paa"};
		class TransportWeapons
		{
			class _xx_rhs_weap_m72a7
			{
				count = 1;
				weapon = "rhs_weap_m72a7";
			};
		};
	};
	class T1_B_AssaultPack_Exp_SF: B_AssaultPack_rgr
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
			class _xx_DemoCharge_Remote_Mag
			{
				count = 3;
				magazine = "DemoCharge_Remote_Mag";
			};
			class _xx_rhsusf_mag_17Rnd_9x19_JHP
			{
				count = 1;
				magazine = "rhsusf_mag_17Rnd_9x19_JHP";
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

	// SF Medic

	class T1_SF_Medic_Standard_F: T1_Soldier_F
	{
		scope = 2;
		uniformClass = "t1_rhs_uniform_g3_m81";
		t1_DutyMod = 0.95;
		faction = "T1_Units";
		vehicleClass = "SF";
		displayName = "T1 SF Medic";
		T1_NoMedicIcon = 0;
		weapons[] = {
			"T1_SF_m4a1_blockII_SD_wd",
			"Throw",
			"Put",
			"ACE_Vector",
			"rhs_weap_m72a7"
		};
		respawnWeapons[] = {
			"T1_SF_m4a1_blockII_SD_wd",
			"Throw",
			"Put",
			"ACE_Vector",
			"rhs_weap_m72a7"
		};
		magazines[] = {
			"rhsusf_50Rnd_762x51_m62_tracer",
			"rhsusf_50Rnd_762x51_m62_tracer",
			"T1_30Rnd_556x45_Stanag_SD",
			"T1_30Rnd_556x45_Stanag_SD",
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"HandGrenade",
			"ACE_M84"
		};
		respawnmagazines[] = {
			"rhsusf_50Rnd_762x51_m62_tracer",
			"rhsusf_50Rnd_762x51_m62_tracer",
			"T1_30Rnd_556x45_Stanag_SD",
			"T1_30Rnd_556x45_Stanag_SD",
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"HandGrenade",
			"ACE_M84"
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
	class T1_AssaultPack_medic_sf: B_AssaultPack_rgr
	{
		scope = 1;
		displayName = "AssaultPack Medic (T1 Camo)";
		//hiddenSelectionsTextures[] = {"\t1_textures\backpacks\t1_B_AssaultPack_rgr_camo_co.paa"};
		class TransportMagazines
		{			
			class _xx_SmokeShellBlue
			{
				count = 5;
				magazine = "SmokeShellBlue";
			};
			class _xx_SmokeShellRed
			{
				count = 2;
				magazine = "SmokeShellRed";
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

	// Vehicles

	class rhsusf_mrzr4_d;
	class t1_mrzr_d: rhsusf_mrzr4_d 
	{
		faction = "T1_Units_Desert";
		crew = "T1_Soldier_F_D";
		transportmaxmagazines = 99999;
		transportmaxweapons = 9999;
		transportmaxbackpacks = 99;
		maximumload = 999999;
		hiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_mrzr\data\blue_tan_mud_co.paa","rhsusf\addons\rhsusf_mrzr\data\yel_tan_mud_co.paa","rhsusf\addons\rhsusf_mrzr\data\red_tan_mud_co.paa","rhsusf\addons\rhsusf_mrzr\data\grn_tan_mud_co.paa","rhsusf\addons\rhsusf_mrzr\data\merged\orng_tan_mud_co.paa"};
		editorSubcategory = "EdSubcat_Cars";	// rhs_EdSubCat_Cars
		vehicleClass = "rhs_vehclass_car";	// "class rhs_vehclass_car"
		reportOwnPosition = 1;
		displayName = "T1 MRZR - SF";
		
		class TransportMagazines
		{
			class sidearm_mags {
				magazine = "rhsusf_mag_17Rnd_9x19_JHP";
				count = 4;
			};
			class sidearm_mags2 {
				magazine = "16Rnd_9x21_Mag";
				count = 4;
			};
			class marksman_mags {
				magazine = "ACE_20Rnd_762x51_Mk316_Mod_0_Mag";
				count = 10;
			};
			class marksman_sd_mags {
				magazine = "ACE_20Rnd_762x51_Mag_SD";
				count = 4;
			};
			class mg_mags {
				magazine = "rhsusf_50Rnd_762x51_m62_tracer";
				count = 10;
			};
			class GLs {
				magazine = "1Rnd_HE_Grenade_shell";
				count = 8;
			};
			class _xx_HandGrenade {
				magazine = "HandGrenade";
				count = 6;
			};
			class _xx_SmokeShellBlue {
				magazine = "SmokeShellBlue";
				count = 4;
			};
			class _xx_SmokeShellRed {
				magazine = "SmokeShellRed";
				count = 1;
			};
			class _xx_ACE_M84 {
				magazine = "ACE_M84";
				count = 4;
			};
			class _xx_rhs_mag_30Rnd_556x45_Mk318_Stanag {
				count = 24;
				magazine = "rhs_mag_30Rnd_556x45_Mk318_Stanag";
			};
			class _xx_T1_30Rnd_556x45_Stanag_SD {
				count = 8;
				magazine = "T1_30Rnd_556x45_Stanag_SD";
			};
			class echo1_mag {
				count = 15;
				magazine = "rhsusf_5Rnd_300winmag_xm2010";
			};
			class echo1_mag2 {
				count = 4;
				magazine = "T1_rhsusf_5Rnd_300winmag_xm2010_SD";
			};
			class echo2_mag {
				count = 10;
				magazine = "7Rnd_408_Mag";
			};
		};
		class TransportItems
		{
			class Bandage1
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
				count = 6;
				name = "ACE_epinephrine";
			};
			class _xx_ACE_bloodIV
			{
				count = 6;
				name = "ACE_bloodIV";
			};
			class _xx_ACE_CableTie
			{
				count = 6;
				name = "ACE_CableTie";
			};
			class _xx_ACE_wirecutter
			{
				count = 1;
				name = "ACE_wirecutter";
			};
			class _xx_ACE_UAVBattery
			{
				count = 1;
				name = "ACE_UAVBattery";
			};
			class UavTerminal
			{
				count = 1;
				name = "B_UavTerminal";
			};
		};
		class TransportWeapons
		{            
			class rhs_weap_m72a7
			{
				weapon = "rhs_weap_m72a7";
				count = 3;
			};
			class AT4
			{
				weapon = "tf47_at4_heat";
				count = 2;
			};
		};
	};
	
	class t1_mrzr: t1_mrzr_d 
	{
		faction = "T1_Units";
		crew = "T1_Soldier_F";
		reportOwnPosition = 1;

		hiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_mrzr\data\blue_grn_mud_co.paa","rhsusf\addons\rhsusf_mrzr\data\yel_grn_mud_co.paa","rhsusf\addons\rhsusf_mrzr\data\red_grn_mud_co.paa","rhsusf\addons\rhsusf_mrzr\data\grn_grn_mud_co.paa","rhsusf\addons\rhsusf_mrzr\data\merged\orng_grn_mud_co.paa"};
	};
	
	class LSV_02_base_F;
	class LSV_02_armed_base_F: LSV_02_base_F
	{
		class Turrets;
	};
	class O_LSV_02_armed_F: LSV_02_armed_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret;
			class CargoTurret_01;
			class CargoTurret_02;
			class CargoTurret_03;
			class CargoTurret_04;
			class CargoTurret_05;
		};
	};
	class T1_LSV_Armed: O_LSV_02_armed_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] = {"500Rnd_65x39_Belt_Tracer_Red_Splash","500Rnd_65x39_Belt_Tracer_Red_Splash","500Rnd_65x39_Belt_Tracer_Red_Splash","500Rnd_65x39_Belt_Tracer_Red_Splash","500Rnd_65x39_Belt_Tracer_Red_Splash"};
			};
			class CargoTurret_01: CargoTurret_01{};
			class CargoTurret_02: CargoTurret_02{};
			class CargoTurret_03: CargoTurret_03{};
			class CargoTurret_04: CargoTurret_04{};
			class CargoTurret_05: CargoTurret_05{};
		};
		
		faction = "T1_Units";
		crew = "T1_Soldier_F";
		transportmaxmagazines = 99999;
		transportmaxweapons = 9999;
		transportmaxbackpacks = 99;
		maximumload = 999999;
		reportOwnPosition = 1;
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_black_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa"};
		textureList[] = {"Black",1};
		side = 1;
		displayName = "T1 LSV - SF";
		
		class TransportMagazines
		{
			class sidearm_mags {
				magazine = "rhsusf_mag_17Rnd_9x19_JHP";
				count = 4;
			};
			class sidearm_mags2 {
				magazine = "16Rnd_9x21_Mag";
				count = 4;
			};
			class marksman_mags {
				magazine = "ACE_20Rnd_762x51_Mk316_Mod_0_Mag";
				count = 10;
			};
			class marksman_sd_mags {
				magazine = "ACE_20Rnd_762x51_Mag_SD";
				count = 4;
			};
			class mg_mags {
				magazine = "rhsusf_50Rnd_762x51_m62_tracer";
				count = 10;
			};
			class GLs {
				magazine = "1Rnd_HE_Grenade_shell";
				count = 8;
			};
			class _xx_HandGrenade {
				magazine = "HandGrenade";
				count = 6;
			};
			class _xx_SmokeShellBlue {
				magazine = "SmokeShellBlue";
				count = 4;
			};
			class _xx_SmokeShellRed {
				magazine = "SmokeShellRed";
				count = 1;
			};
			class _xx_ACE_M84 {
				magazine = "ACE_M84";
				count = 4;
			};
			class _xx_rhs_mag_30Rnd_556x45_Mk318_Stanag {
				count = 24;
				magazine = "rhs_mag_30Rnd_556x45_Mk318_Stanag";
			};
			class _xx_T1_30Rnd_556x45_Stanag_SD {
				count = 8;
				magazine = "T1_30Rnd_556x45_Stanag_SD";
			};
			class echo1_mag {
				count = 15;
				magazine = "rhsusf_5Rnd_300winmag_xm2010";
			};
			class echo1_mag2 {
				count = 4;
				magazine = "T1_rhsusf_5Rnd_300winmag_xm2010_SD";
			};
			class echo2_mag {
				count = 10;
				magazine = "7Rnd_408_Mag";
			};
		};
		class TransportItems
		{
			class Bandage1
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
				count = 6;
				name = "ACE_epinephrine";
			};
			class _xx_ACE_bloodIV
			{
				count = 6;
				name = "ACE_bloodIV";
			};
			class _xx_ACE_CableTie
			{
				count = 6;
				name = "ACE_CableTie";
			};
			class _xx_ACE_wirecutter
			{
				count = 1;
				name = "ACE_wirecutter";
			};
			class _xx_ACE_UAVBattery
			{
				count = 1;
				name = "ACE_UAVBattery";
			};
			class UavTerminal
			{
				count = 1;
				name = "B_UavTerminal";
			};
		};
		class TransportWeapons
		{            
			class rhs_weap_m72a7
			{
				weapon = "rhs_weap_m72a7";
				count = 3;
			};
			class AT4
			{
				weapon = "tf47_at4_heat";
				count = 2;
			};
		};
	};
	
	// Supply box
	class B_supplyCrate_F;
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
			class sidearm {
				magazine = "rhsusf_mag_17Rnd_9x19_JHP";
				count = 8;
			};
			class marksman {
				magazine = "ACE_20Rnd_762x51_Mk316_Mod_0_Mag";
				count = 20;
			};
			class marksman_sd {
				magazine = "ACE_20Rnd_762x51_Mag_SD";
				count = 16;
			};	
			class mg {
				magazine = "rhsusf_50Rnd_762x51_m62_tracer";
				count = 32;
			};
			class GLs {
				magazine = "1Rnd_HE_Grenade_shell";
				count = 16;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 12;
			};
			class _xx_SmokeShellBlue
			{
				magazine = "SmokeShellBlue";
				count = 16;
			};
			class _xx_SmokeShellRed
			{
				magazine = "SmokeShellRed";
				count = 4;
			};
			class _xx_ACE_M84
			{
				magazine = "ACE_M84";
				count = 12;
			};
			class _xx_rhs_mag_30Rnd_556x45_Mk318_Stanag {
				count = 64;
				magazine = "rhs_mag_30Rnd_556x45_Mk318_Stanag";
			};
			class _xx_T1_30Rnd_556x45_Stanag_SD {
				count = 32;
				magazine = "T1_30Rnd_556x45_Stanag_SD";
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
				count = 2;
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
			class AT4
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
			class bp
			{
				count = 2;
				backpack = "B_AssaultPack_rgr";
			};
		}; 
	};
	
	class T1_shadow_thermalbox: B_supplyCrate_F
	{
		vehicleClass = "Ammo";
		displayName = "T1 Shadow Thermal Box";
		transportMaxWeapons = 999;
		transportMaxMagazines = 9999;
		transportMaxBackpacks = 99;
		transportMaxItems = 9999;
		class TransportItems
		{
			class _xx_NVGogglesB_blk_F
			{
				count = 50;
				name = "NVGogglesB_blk_F";
			};
			class _xx_optic_tws
			{
				count = 50;
				name = "optic_tws";
			};
			class _xx_optic_ERCO_blk_F
			{
				count = 50;
				name = "optic_ERCO_blk_F";
			};
		};
	};
};
