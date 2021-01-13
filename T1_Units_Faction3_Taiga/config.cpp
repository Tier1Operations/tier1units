class cfgPatches
{
  class T1_Units_Faction3_Taiga
  {
    units[]={"T1_Units_Faction3_Taiga_Mission_Maker","T1_Units_Faction3_Taiga_Element_Leader","T1_Units_Faction3_Taiga_JTAC","T1_Units_Faction3_Taiga_Operator_Lead","T1_Units_Faction3_Taiga_Operator_AR","T1_Units_Faction3_Taiga_Operator_AT","T1_Units_Faction3_Taiga_Operator_Asst_AT","T1_Units_Faction3_Taiga_Operator_Saboteur","T1_Units_Faction3_Taiga_Operator_CLS","T1_Units_Faction3_Taiga_Recon_Spotter","T1_Units_Faction3_Desert_Recon_Marksman","T1_Units_Faction3_Taiga_Crew_CLS","T1_Units_Faction3_Taiga_Crew_Engineer","T1_Units_Faction3_Taiga_Pilot","T1_Units_Faction3_Taiga_T15_Armata_IFV","T1_Units_Faction3_Taiga_Gaz2330","T1_Units_Faction3_Taiga_Gaz2330_HMG","T1_Units_Faction3_Taiga_T14_Armata_MBT","T1_Units_Faction3_Taiga_Mi48_Kajman","T1_Units_Faction3_Taiga_supplyCrate"};
    weapons[]={"T1_Units_Faction3_AR_AK12U","T1_Units_Faction3_P_Rook40","T1_Units_Faction3_AR_AK12_GL","T1_Units_Faction3_SAW_RPK12","T1_arifle_AK12U_lush_F_muzzle_snds_B_lush_Facc_pointer_IRoptic_Arco_AK_lush_F","T1_U_O_R_Gorka_01_camo_F","T1_arifle_AK12_lush_F_muzzle_snds_B_lush_Facc_pointer_IRoptic_Arco_lush_F","T1_arifle_AK12_lush_F_muzzle_snds_B_lush_Facc_pointer_IRoptic_Arco_AK_lush_F","T1_srifle_DMR_05_blk_F_muzzle_snds_93mmg_tanacc_pointer_IRoptic_KHS_tanbipod_02_F_tan","T1_arifle_AK12U_F_acc_pointer_IRoptic_Holosight_blk_F","T1_SMG_02_F_acc_pointer_IRoptic_Holosight_smg_blk_F"};
    requiredVersion=0.1;
    requiredAddons[]={"acre_sys_prc343","A3_Weapons_F_Enoch","acre_sys_prc117f","ace_medical_treatment","A3_Weapons_F","A3_Weapons_F_Enoch_Rifles_AK12","A3_Weapons_F_Pistols_Rook40","A3_Characters_F_Enoch","A3_Characters_F_Enoch_Vests","A3_Characters_F_Enoch_Headgear","ace_hearing","ace_maptools","ace_attach","ace_captives","ace_microdagr","ace_flashlights","ace_vector","acre_sys_prc152","ace_explosives","A3_Weapons_F_Exp","A3_Characters_F","ace_rangecard","A3_Weapons_F_Mark_LongRangeRifles_DMR_05","A3_Weapons_F_Items","A3_Weapons_F_SMGs_SMG_02","CuratorOnly_Characters_F_OPFOR"};
  };
};

class cfgFactionClasses
{
  class T1_Units_Faction3_Taiga
  {
    icon="";
    displayName="T1 Units Faction 3 (Taiga - SF)";
    side=0;
    priority=1;
  };
};


class cfgWeapons
{
  class arifle_AK12U_lush_F;
  class hgun_Rook40_F;
  class arifle_AK12_GL_lush_F;
  class arifle_RPK12_lush_F;
  class arifle_AK12_lush_F;
  class srifle_DMR_05_blk_F;
  class arifle_AK12U_F;
  class SMG_02_F;
  class launch_RPG32_green_F;

  class T1_Units_Faction3_AR_AK12U: arifle_AK12U_lush_F
  {
    displayName="AK-15K (lush)";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsMuzzle
      {
        slot="MuzzleSlot";
        item="muzzle_snds_B_lush_F";
      };
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="optic_Arco_lush_F";
      };
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="acc_pointer_IR";
      };
    };
  };

  class T1_Units_Faction3_P_Rook40: hgun_Rook40_F
  {
    displayName="MP-443 Grach";
    scope=1;
    class LinkedItems
    {
    };
  };

  class T1_Units_Faction3_AR_AK12_GL: arifle_AK12_GL_lush_F
  {
    displayName="AK-15 GL (lush)";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsMuzzle
      {
        slot="MuzzleSlot";
        item="muzzle_snds_B_lush_F";
      };
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="optic_Arco_lush_F";
      };
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="acc_pointer_IR";
      };
    };
  };

  class T1_Units_Faction3_SAW_RPK12: arifle_RPK12_lush_F
  {
    displayName="RPK (lush)";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsMuzzle
      {
        slot="MuzzleSlot";
        item="muzzle_snds_B_lush_F";
      };
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="optic_Arco_AK_lush_F";
      };
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="acc_pointer_IR";
      };
    };
  };

  class T1_arifle_AK12U_lush_F_muzzle_snds_B_lush_Facc_pointer_IRoptic_Arco_AK_lush_F: arifle_AK12U_lush_F
  {
    displayName="AK-15K (lush)";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsMuzzle
      {
        slot="MuzzleSlot";
        item="muzzle_snds_B_lush_F";
      };
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="optic_Arco_AK_lush_F";
      };
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="acc_pointer_IR";
      };
    };
  };

  class T1_arifle_AK12_lush_F_muzzle_snds_B_lush_Facc_pointer_IRoptic_Arco_lush_F: arifle_AK12_lush_F
  {
    displayName="AK-15 (lush)";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsMuzzle
      {
        slot="MuzzleSlot";
        item="muzzle_snds_B_lush_F";
      };
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="optic_Arco_lush_F";
      };
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="acc_pointer_IR";
      };
    };
  };

  class T1_arifle_AK12_lush_F_muzzle_snds_B_lush_Facc_pointer_IRoptic_Arco_AK_lush_F: arifle_AK12_lush_F
  {
    displayName="AK-15 (lush)";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsMuzzle
      {
        slot="MuzzleSlot";
        item="muzzle_snds_B_lush_F";
      };
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="optic_Arco_AK_lush_F";
      };
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="acc_pointer_IR";
      };
    };
  };

  class T1_srifle_DMR_05_blk_F_muzzle_snds_93mmg_tanacc_pointer_IRoptic_KHS_tanbipod_02_F_tan: srifle_DMR_05_blk_F
  {
    displayName="Cyrus (Tan)";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsMuzzle
      {
        slot="MuzzleSlot";
        item="muzzle_snds_93mmg";
      };
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="optic_KHS_blk";
      };
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="acc_pointer_IR";
      };
      class LinkedItemsUnder
      {
        slot="UnderBarrelSlot";
        item="bipod_02_F_blk";
      };
    };
  };

  class T1_arifle_AK12U_F_acc_pointer_IRoptic_Holosight_blk_F: arifle_AK12U_F
  {
    displayName="AK-15K";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="optic_Holosight_blk_F";
      };
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="acc_pointer_IR";
      };
    };
  };

  class T1_SMG_02_F_acc_pointer_IRoptic_Holosight_smg_blk_F: SMG_02_F
  {
    displayName="Scorpion Evo 3 A1";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="optic_Holosight_smg_blk_F";
      };
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="acc_pointer_IR";
      };
    };
  };

};

class cfgVehicles
{
  class O_R_Soldier_TL_F;
  class O_R_JTAC_F;
  class O_R_Soldier_AR_F;
  class O_R_Soldier_LAT_F;
  class O_R_soldier_exp_F;
  class O_R_medic_F;
  class O_R_recon_M_F;
  class B_FieldPack_taiga_F;
  class O_helipilot_F;
  class B_AssaultPack_taiga_F;
  class min_rf_t_15;
  class min_rf_gaz_2330;
  class min_rf_gaz_2330_HMG;
  class min_rf_t_14;
  class O_Heli_Attack_02_dynamicLoadout_F;

  class T1_Units_Faction3_Taiga_Mission_Maker: O_R_Soldier_TL_F
  {
    faction="T1_Units_Faction3_Taiga";
    side=0;
	scope = 2;
	t1_DutyMod = 0.965;
	attendant = 1;
    displayName="Mission Maker";
    uniformClass="U_O_R_Gorka_01_camo_F";
    weapons[]={"Laserdesignator","T1_Units_Faction3_AR_AK12U","T1_Units_Faction3_P_Rook40","Put","Throw"};
    respawnWeapons[]={"Laserdesignator","T1_Units_Faction3_AR_AK12U","T1_Units_Faction3_P_Rook40","Put","Throw"};
    items[]={ACE_EarPlugs","ACE_MapTools","ACE_IR_Strobe_Item","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_microDAGR","ACE_Flashlight_XL50","ACRE_PRC343","O_NVGoggles_grn_F"};
    respawnItems[]={ACE_EarPlugs","ACE_MapTools","ACE_IR_Strobe_Item","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_microDAGR","ACE_Flashlight_XL50","ACRE_PRC343","O_NVGoggles_grn_F"};
    magazines[]={"16Rnd_9x21_Mag","16Rnd_9x21_Mag","Laserbatteries","SmokeShellYellow","SmokeShellOrange","SmokeShellRed","SmokeShell","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F"};
    respawnMagazines[]={"16Rnd_9x21_Mag","16Rnd_9x21_Mag","Laserbatteries","SmokeShellYellow","SmokeShellOrange","SmokeShellRed","SmokeShell","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemGPS","Laserdesignator","H_MilCap_grn","V_SmershVest_01_radio_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemGPS","Laserdesignator","H_MilCap_grn","V_SmershVest_01_radio_F"};
    backpack="T1_Units_Faction3_Taiga_Mission_Maker_pack";
  };

  class T1_Units_Faction3_Taiga_Element_Leader: O_R_Soldier_TL_F
  {
    faction="T1_Units_Faction3_Taiga";
    side=0;
	scope = 2;
	t1_DutyMod = 0.965;
	attendant = 1;
	T1_NoMedicIcon = 1;
    displayName="Element Leader";
    uniformClass="U_O_R_Gorka_01_camo_F";
    weapons[]={"Laserdesignator","T1_Units_Faction3_AR_AK12U","Put","Throw"};
    respawnWeapons[]={"Laserdesignator","T1_Units_Faction3_AR_AK12U","Put","Throw"};
    items[]={"ACE_EarPlugs","ACE_MapTools","ACE_IR_Strobe_Item","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_microDAGR","ACE_Flashlight_XL50","ACRE_PRC343"};
    respawnItems[]={"ACE_EarPlugs","ACE_MapTools","ACE_IR_Strobe_Item","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_microDAGR","ACE_Flashlight_XL50","ACRE_PRC343"};
    magazines[]={"MiniGrenade","MiniGrenade","Laserbatteries","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellOrange","SmokeShellOrange","SmokeShellPurple","SmokeShellPurple","SmokeShellRed","SmokeShellRed","SmokeShellYellow","SmokeShellYellow"};
    respawnMagazines[]={"MiniGrenade","MiniGrenade","Laserbatteries","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellOrange","SmokeShellOrange","SmokeShellPurple","SmokeShellPurple","SmokeShellRed","SmokeShellRed","SmokeShellYellow","SmokeShellYellow"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemGPS","Laserdesignator","H_HelmetAggressor_cover_taiga_F","V_CarrierRigKBT_01_light_Olive_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemGPS","Laserdesignator","H_HelmetAggressor_cover_taiga_F","V_CarrierRigKBT_01_light_Olive_F"};
    backpack="T1_Units_Faction3_Taiga_Element_Leader_pack";
  };

  class T1_Units_Faction3_Taiga_JTAC: O_R_JTAC_F
  {
    faction="T1_Units_Faction3_Taiga";
    side=0;
	scope = 2;
	t1_DutyMod = 0.965;
	attendant = 1;
	T1_NoMedicIcon = 1;
    displayName="JTAC";
    uniformClass="U_O_R_Gorka_01_camo_F";
    weapons[]={"Laserdesignator","T1_Units_Faction3_AR_AK12_GL","Put","Throw"};
    respawnWeapons[]={"Laserdesignator","T1_Units_Faction3_AR_AK12_GL","Put","Throw"};
    items[]={"ACE_EarPlugs","ACE_MapTools","ACE_IR_Strobe_Item","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_microDAGR","ACE_Flashlight_XL50","ACRE_PRC343"};
    respawnItems[]={"ACE_EarPlugs","ACE_MapTools","ACE_IR_Strobe_Item","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_microDAGR","ACE_Flashlight_XL50","ACRE_PRC343"};
    magazines[]={"Laserbatteries","SmokeShellPurple","SmokeShellPurple","30rnd_762x39_AK12_lush_Mag_Tracer_F","30rnd_762x39_AK12_lush_Mag_Tracer_F","30rnd_762x39_AK12_lush_Mag_Tracer_F","30rnd_762x39_AK12_lush_Mag_Tracer_F","30rnd_762x39_AK12_lush_Mag_Tracer_F","30rnd_762x39_AK12_lush_Mag_Tracer_F","30rnd_762x39_AK12_lush_Mag_Tracer_F","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell"};
    respawnMagazines[]={"Laserbatteries","SmokeShellPurple","SmokeShellPurple","30rnd_762x39_AK12_lush_Mag_Tracer_F","30rnd_762x39_AK12_lush_Mag_Tracer_F","30rnd_762x39_AK12_lush_Mag_Tracer_F","30rnd_762x39_AK12_lush_Mag_Tracer_F","30rnd_762x39_AK12_lush_Mag_Tracer_F","30rnd_762x39_AK12_lush_Mag_Tracer_F","30rnd_762x39_AK12_lush_Mag_Tracer_F","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemGPS","Laserdesignator","H_HelmetAggressor_cover_taiga_F","V_CarrierRigKBT_01_light_Olive_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemGPS","Laserdesignator","H_HelmetAggressor_cover_taiga_F","V_CarrierRigKBT_01_light_Olive_F"};
    backpack="T1_Units_Faction3_Taiga_JTAC_pack";
  };

  class T1_Units_Faction3_Taiga_Operator_Lead: O_R_Soldier_TL_F
  {
    faction="T1_Units_Faction3_Taiga";
    side=0;
	scope = 2;
	t1_DutyMod = 0.965;
	attendant = 1;
	T1_NoMedicIcon = 1;
    displayName="Operator Leader";
    uniformClass="U_O_R_Gorka_01_camo_F";
    weapons[]={"ACE_Vector","T1_Units_Faction3_AR_AK12_GL","Put","Throw"};
    respawnWeapons[]={"ACE_Vector","T1_Units_Faction3_AR_AK12_GL","Put","Throw"};
    items[]={"ACE_EarPlugs","ACE_MapTools","ACE_IR_Strobe_Item","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_microDAGR","ACE_Flashlight_XL50","ACRE_PRC343"};
    respawnItems[]={"ACE_EarPlugs","ACE_MapTools","ACE_IR_Strobe_Item","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_microDAGR","ACE_Flashlight_XL50","ACRE_PRC343"};
    magazines[]={"SmokeShell","SmokeShell","HandGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","30rnd_762x39_AK12_lush_Mag_F","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F"};
    respawnMagazines[]={"SmokeShell","SmokeShell","HandGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","30rnd_762x39_AK12_lush_Mag_F","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ACE_Vector","H_HelmetAggressor_cover_taiga_F","V_CarrierRigKBT_01_light_Olive_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ACE_Vector","H_HelmetAggressor_cover_taiga_F","V_CarrierRigKBT_01_light_Olive_F"};
    backpack="T1_Units_Faction3_Taiga_Operator_Lead_pack";
  };

  class T1_Units_Faction3_Taiga_Operator_AR: O_R_Soldier_AR_F
  {
    faction="T1_Units_Faction3_Taiga";
    side=0;
	scope = 2;
	t1_DutyMod = 0.965;
	attendant = 1;
	T1_NoMedicIcon = 1;
    displayName="Operator AR";
    uniformClass="U_O_R_Gorka_01_camo_F";
    weapons[]={"ACE_Vector","T1_Units_Faction3_SAW_RPK12","Put","Throw"};
    respawnWeapons[]={"ACE_Vector","T1_Units_Faction3_SAW_RPK12","Put","Throw"};
    items[]={"ACE_EarPlugs","ACE_MapTools","ACE_IR_Strobe_Item","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_microDAGR","ACE_Flashlight_XL50","ACRE_PRC343","ACRE_PRC152"};
    respawnItems[]={"ACE_EarPlugs","ACE_MapTools","ACE_IR_Strobe_Item","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_microDAGR","ACE_Flashlight_XL50","ACRE_PRC343","ACRE_PRC152"};
    magazines[]={"HandGrenade","SmokeShellRed","SmokeShell","SmokeShell","75rnd_762x39_AK12_lush_Mag_F","75rnd_762x39_AK12_lush_Mag_F","75rnd_762x39_AK12_lush_Mag_F","75rnd_762x39_AK12_lush_Mag_F","75rnd_762x39_AK12_lush_Mag_F"};
    respawnMagazines[]={"HandGrenade","SmokeShellRed","SmokeShell","SmokeShell","75rnd_762x39_AK12_lush_Mag_F","75rnd_762x39_AK12_lush_Mag_F","75rnd_762x39_AK12_lush_Mag_F","75rnd_762x39_AK12_lush_Mag_F","75rnd_762x39_AK12_lush_Mag_F"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ACE_Vector","H_HelmetAggressor_cover_taiga_F","V_CarrierRigKBT_01_light_Olive_F","G_Balaclava_oli"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ACE_Vector","H_HelmetAggressor_cover_taiga_F","V_CarrierRigKBT_01_light_Olive_F","G_Balaclava_oli"};
    backpack="T1_Units_Faction3_Taiga_Operator_AR_pack";
  };

  class T1_Units_Faction3_Taiga_Operator_AT: O_R_Soldier_LAT_F
  {
    faction="T1_Units_Faction3_Taiga";
    side=0;
	scope = 2;
	t1_DutyMod = 0.965;
	attendant = 1;
	T1_NoMedicIcon = 1;
    displayName="Operator AT";
    uniformClass="U_O_R_Gorka_01_camo_F";
    weapons[]={"ACE_Vector","T1_arifle_AK12U_lush_F_muzzle_snds_B_lush_Facc_pointer_IRoptic_Arco_AK_lush_F","launch_RPG32_green_F","Put","Throw"};
    respawnWeapons[]={"ACE_Vector","T1_arifle_AK12U_lush_F_muzzle_snds_B_lush_Facc_pointer_IRoptic_Arco_AK_lush_F","launch_RPG32_green_F","Put","Throw"};
    items[]={"ACE_EarPlugs","ACE_MapTools","ACE_IR_Strobe_Item","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_microDAGR","ACE_Flashlight_XL50","ACRE_PRC343","ACRE_PRC152"};
    respawnItems[]={"ACE_EarPlugs","ACE_MapTools","ACE_IR_Strobe_Item","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_microDAGR","ACE_Flashlight_XL50","ACRE_PRC343","ACRE_PRC152"};
    magazines[]={"SmokeShell","SmokeShell","HandGrenade","HandGrenade","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","RPG32_F"};
    respawnMagazines[]={"SmokeShell","SmokeShell","HandGrenade","HandGrenade","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","RPG32_F"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ACE_Vector","H_HelmetAggressor_cover_taiga_F","V_CarrierRigKBT_01_light_Olive_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ACE_Vector","H_HelmetAggressor_cover_taiga_F","V_CarrierRigKBT_01_light_Olive_F"};
    backpack="T1_Units_Faction3_Taiga_Operator_AT_pack";
  };

  class T1_Units_Faction3_Taiga_Operator_Asst_AT: O_R_Soldier_LAT_F
  {
    faction="T1_Units_Faction3_Taiga";
    side=0;
	scope = 2;
	t1_DutyMod = 0.965;
	attendant = 1;
	T1_NoMedicIcon = 1;
    displayName="Operator Asst. AT";
    uniformClass="U_O_R_Gorka_01_camo_F";
    weapons[]={"ACE_Vector","T1_arifle_AK12_lush_F_muzzle_snds_B_lush_Facc_pointer_IRoptic_Arco_lush_F","Put","Throw"};
    respawnWeapons[]={"ACE_Vector","T1_arifle_AK12_lush_F_muzzle_snds_B_lush_Facc_pointer_IRoptic_Arco_lush_F","Put","Throw"};
    items[]={"ACE_EarPlugs","ACE_MapTools","ACE_IR_Strobe_Item","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_microDAGR","ACE_Flashlight_XL50","ACRE_PRC343","ACRE_PRC152"};
    respawnItems[]={"ACE_EarPlugs","ACE_MapTools","ACE_IR_Strobe_Item","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_microDAGR","ACE_Flashlight_XL50","ACRE_PRC343","ACRE_PRC152"};
    magazines[]={"SmokeShell","SmokeShell","HandGrenade","HandGrenade","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F"};
    respawnMagazines[]={"SmokeShell","SmokeShell","HandGrenade","HandGrenade","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ACE_Vector","H_HelmetAggressor_cover_taiga_F","V_CarrierRigKBT_01_light_Olive_F","G_Balaclava_oli"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ACE_Vector","H_HelmetAggressor_cover_taiga_F","V_CarrierRigKBT_01_light_Olive_F","G_Balaclava_oli"};
    backpack="T1_Units_Faction3_Taiga_Operator_Asst_AT_pack";
  };

  class T1_Units_Faction3_Taiga_Operator_Saboteur: O_R_soldier_exp_F
  {
    faction="T1_Units_Faction3_Taiga";
    side=0;
	scope = 2;
	t1_DutyMod = 0.965;
	attendant = 1;
	canDeactivateMines = 1;
	engineer = 1;
	T1_NoMedicIcon = 1;
    displayName="Operator Saboteur";
    uniformClass="U_O_R_Gorka_01_camo_F";
    weapons[]={"ACE_Vector","T1_arifle_AK12_lush_F_muzzle_snds_B_lush_Facc_pointer_IRoptic_Arco_AK_lush_F","Put","Throw"};
    respawnWeapons[]={"ACE_Vector","T1_arifle_AK12_lush_F_muzzle_snds_B_lush_Facc_pointer_IRoptic_Arco_AK_lush_F","Put","Throw"};
    items[]={"ACE_EarPlugs","ACE_MapTools","ACE_IR_Strobe_Item","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_microDAGR","ACE_Flashlight_XL50","ACE_DefusalKit","ACE_M26_Clacker","ACRE_PRC343","ACRE_PRC152"};
    respawnItems[]={"ACE_EarPlugs","ACE_MapTools","ACE_IR_Strobe_Item","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_microDAGR","ACE_Flashlight_XL50","ACE_DefusalKit","ACE_M26_Clacker","ACRE_PRC343","ACRE_PRC152"};
    magazines[]={"HandGrenade","HandGrenade","SmokeShellRed","SmokeShell","SmokeShell","SmokeShell","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F"};
    respawnMagazines[]={"HandGrenade","HandGrenade","SmokeShellRed","SmokeShell","SmokeShell","SmokeShell","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ACE_Vector","H_HelmetAggressor_cover_taiga_F","V_CarrierRigKBT_01_light_Olive_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ACE_Vector","H_HelmetAggressor_cover_taiga_F","V_CarrierRigKBT_01_light_Olive_F"};
    backpack="T1_Units_Faction3_Taiga_Operator_Saboteur_pack";
  };

  class T1_Units_Faction3_Taiga_Operator_CLS: O_R_medic_F
  {
    faction="T1_Units_Faction3_Taiga";
    side=0;
	scope = 2;
	t1_DutyMod = 0.965;
	attendant = 1;
    displayName="Operator CLS";
    uniformClass="U_O_R_Gorka_01_camo_F";
    weapons[]={"ACE_Vector","T1_arifle_AK12_lush_F_muzzle_snds_B_lush_Facc_pointer_IRoptic_Arco_AK_lush_F","Put","Throw"};
    respawnWeapons[]={"ACE_Vector","T1_arifle_AK12_lush_F_muzzle_snds_B_lush_Facc_pointer_IRoptic_Arco_AK_lush_F","Put","Throw"};
    items[]={"ACE_EarPlugs","ACE_MapTools","ACE_IR_Strobe_Item","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_microDAGR","ACE_Flashlight_XL50","ACRE_PRC343","ACRE_PRC152"};
    respawnItems[]={"ACE_EarPlugs","ACE_MapTools","ACE_IR_Strobe_Item","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_microDAGR","ACE_Flashlight_XL50","ACRE_PRC343","ACRE_PRC152"};
    magazines[]={"SmokeShell","SmokeShell","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F"};
    respawnMagazines[]={"SmokeShell","SmokeShell","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F","30rnd_762x39_AK12_lush_Mag_F"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ACE_Vector","H_HelmetAggressor_cover_taiga_F","V_CarrierRigKBT_01_light_Olive_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ACE_Vector","H_HelmetAggressor_cover_taiga_F","V_CarrierRigKBT_01_light_Olive_F"};
    backpack="T1_Units_Faction3_Taiga_Operator_CLS_pack";
  };

  class T1_Units_Faction3_Taiga_Recon_Spotter: O_R_recon_M_F
  {
    faction="T1_Units_Faction3_Taiga";
    side=0;
	scope = 2;
	t1_DutyMod = 0.965;
	attendant = 1;
	camouflage = 0.6;
	T1_NoMedicIcon = 1;
    displayName="Spotter";
    uniformClass="U_O_R_GhillieSuit_taiga_F";
    weapons[]={"Laserdesignator","T1_Units_Faction3_SAW_RPK12","Put","Throw"};
    respawnWeapons[]={"Laserdesignator","T1_Units_Faction3_SAW_RPK12","Put","Throw"};
    items[]={"ACE_EarPlugs","ACE_MapTools","ACE_IR_Strobe_Item","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_microDAGR","ACE_Flashlight_XL50","ACRE_PRC343","O_NVGoggles_grn_F"};
    respawnItems[]={"ACE_EarPlugs","ACE_MapTools","ACE_IR_Strobe_Item","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_microDAGR","ACE_Flashlight_XL50","ACRE_PRC343","O_NVGoggles_grn_F"};
    magazines[]={"SmokeShell","Laserbatteries","SmokeShell","75rnd_762x39_AK12_lush_Mag_F","75rnd_762x39_AK12_lush_Mag_F","75rnd_762x39_AK12_lush_Mag_F","75rnd_762x39_AK12_lush_Mag_F","75rnd_762x39_AK12_lush_Mag_F","75rnd_762x39_AK12_lush_Mag_F"};
    respawnMagazines[]={"SmokeShell","Laserbatteries","SmokeShell","75rnd_762x39_AK12_lush_Mag_F","75rnd_762x39_AK12_lush_Mag_F","75rnd_762x39_AK12_lush_Mag_F","75rnd_762x39_AK12_lush_Mag_F","75rnd_762x39_AK12_lush_Mag_F","75rnd_762x39_AK12_lush_Mag_F"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","Laserdesignator","H_HelmetAggressor_cover_taiga_F","V_CarrierRigKBT_01_light_Olive_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","Laserdesignator","H_HelmetAggressor_cover_taiga_F","V_CarrierRigKBT_01_light_Olive_F"};
    backpack="T1_Units_Faction3_Taiga_Recon_Spotter_pack";
  };

  class T1_Units_Faction3_Taiga_Recon_Marksman: O_R_recon_M_F
  {
    faction="T1_Units_Faction3_Taiga";
    side=0;
	scope = 2;
	t1_DutyMod = 0.965;
	attendant = 1;
	camouflage = 0.6;
	T1_NoMedicIcon = 1;
    displayName="Marksman";
    uniformClass="U_O_R_GhillieSuit_taiga_F";
    weapons[]={"ACE_Vector","T1_srifle_DMR_05_blk_F_muzzle_snds_93mmg_tanacc_pointer_IRoptic_KHS_tanbipod_02_F_tan","Put","Throw"};
    respawnWeapons[]={"ACE_Vector","T1_srifle_DMR_05_blk_F_muzzle_snds_93mmg_tanacc_pointer_IRoptic_KHS_tanbipod_02_F_tan","Put","Throw"};
    items[]={"ACE_EarPlugs","ACE_MapTools","ACE_IR_Strobe_Item","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_microDAGR","ACE_Flashlight_XL50","ACRE_PRC343","ACRE_PRC152"};
    respawnItems[]={"ACE_EarPlugs","ACE_MapTools","ACE_IR_Strobe_Item","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_microDAGR","ACE_Flashlight_XL50","ACRE_PRC343","ACRE_PRC152"};
    magazines[]={"SmokeShell","SmokeShell","HandGrenade","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag"};
    respawnMagazines[]={"SmokeShell","SmokeShell","HandGrenade","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ACE_Vector","H_HelmetAggressor_cover_taiga_F","V_CarrierRigKBT_01_light_Olive_F","G_Balaclava_oli"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ACE_Vector","H_HelmetAggressor_cover_taiga_F","V_CarrierRigKBT_01_light_Olive_F","G_Balaclava_oli"};
    backpack="T1_Units_Faction3_Taiga_Recon_Marksman_pack";
  };

  class T1_Units_Faction3_Taiga_Crew_CLS: O_R_Soldier_LAT_F
  {
    faction="T1_Units_Faction3_Taiga";
    side=0;
	scope = 2;
	t1_DutyMod = 0.965;
	attendant = 1;
    displayName="Crew (CLS)";
    uniformClass="U_O_R_Gorka_01_F";
    weapons[]={"ACE_Vector","T1_arifle_AK12U_F_acc_pointer_IRoptic_Holosight_blk_F","T1_Units_Faction3_P_Rook40","Put","Throw"};
    respawnWeapons[]={"ACE_Vector","T1_arifle_AK12U_F_acc_pointer_IRoptic_Holosight_blk_F","T1_Units_Faction3_P_Rook40","Put","Throw"};
    items[]={"ACE_EarPlugs","ACE_MapTools","ACE_IR_Strobe_Item","ACE_CableTie","ACE_CableTie","ACE_microDAGR","ACE_Flashlight_XL50","ACRE_PRC343","O_NVGoggles_grn_F"};
    respawnItems[]={"ACE_EarPlugs","ACE_MapTools","ACE_IR_Strobe_Item","ACE_CableTie","ACE_CableTie","ACE_microDAGR","ACE_Flashlight_XL50","ACRE_PRC343","O_NVGoggles_grn_F"};
    magazines[]={"HandGrenade","SmokeShell","SmokeShell","16Rnd_9x21_Mag","16Rnd_9x21_Mag","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","16Rnd_9x21_Mag","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F"};
    respawnMagazines[]={"HandGrenade","SmokeShell","SmokeShell","16Rnd_9x21_Mag","16Rnd_9x21_Mag","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","16Rnd_9x21_Mag","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ACE_Vector","H_HelmetCrew_O","V_SmershVest_01_radio_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ACE_Vector","H_HelmetCrew_O","V_SmershVest_01_radio_F"};
    backpack="T1_Units_Faction3_Taiga_Crew_CLS_pack";
  };

  class T1_Units_Faction3_Taiga_Crew_Engineer: O_R_Soldier_LAT_F
  {
    faction="T1_Units_Faction3_Taiga";
    side=0;
	scope = 2;
	t1_DutyMod = 0.965;
	engineer = 1;
    displayName="Crew (Engineer)";
    uniformClass="U_O_R_Gorka_01_F";
    weapons[]={"ACE_Vector","T1_arifle_AK12U_F_acc_pointer_IRoptic_Holosight_blk_F","T1_Units_Faction3_P_Rook40","Put","Throw"};
    respawnWeapons[]={"ACE_Vector","T1_arifle_AK12U_F_acc_pointer_IRoptic_Holosight_blk_F","T1_Units_Faction3_P_Rook40","Put","Throw"};
    items[]={"ACE_EarPlugs","ACE_MapTools","ACE_IR_Strobe_Item","ACE_CableTie","ACE_CableTie","ACE_microDAGR","ACE_Flashlight_XL50","ACRE_PRC343","O_NVGoggles_grn_F"};
    respawnItems[]={"ACE_EarPlugs","ACE_MapTools","ACE_IR_Strobe_Item","ACE_CableTie","ACE_CableTie","ACE_microDAGR","ACE_Flashlight_XL50","ACRE_PRC343","O_NVGoggles_grn_F"};
    magazines[]={"HandGrenade","SmokeShell","SmokeShell","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F"};
    respawnMagazines[]={"HandGrenade","SmokeShell","SmokeShell","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ACE_Vector","H_HelmetCrew_O","V_SmershVest_01_radio_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ACE_Vector","H_HelmetCrew_O","V_SmershVest_01_radio_F"};
    backpack="T1_Units_Faction3_Taiga_Crew_Engineer_pack";
  };

  class T1_Units_Faction3_Taiga_Pilot: O_helipilot_F
  {
    faction="T1_Units_Faction3_Taiga";
    side=0;
	scope = 2;
	t1_DutyMod = 0.965;
    displayName="Pilot";
    uniformClass="U_O_R_PilotCoveralls";
    weapons[]={"ACE_Vector","T1_SMG_02_F_acc_pointer_IRoptic_Holosight_smg_blk_F","T1_Units_Faction3_P_Rook40","Put","Throw"};
    respawnWeapons[]={"ACE_Vector","T1_SMG_02_F_acc_pointer_IRoptic_Holosight_smg_blk_F","T1_Units_Faction3_P_Rook40","Put","Throw"};
    items[]={"ACE_EarPlugs","ACE_MapTools","ACE_IR_Strobe_Item","ACE_CableTie","ACE_CableTie","ACE_microDAGR","ACE_Flashlight_XL50","ACRE_PRC343_ID_1"};
    respawnItems[]={"ACE_EarPlugs","ACE_MapTools","ACE_IR_Strobe_Item","ACE_CableTie","ACE_CableTie","ACE_microDAGR","ACE_Flashlight_XL50","ACRE_PRC343_ID_1"};
    magazines[]={"16Rnd_9x21_Mag","30Rnd_9x21_Mag_SMG_02","16Rnd_9x21_Mag","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02"};
    respawnMagazines[]={"16Rnd_9x21_Mag","30Rnd_9x21_Mag_SMG_02","16Rnd_9x21_Mag","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadioAcreFlagged","O_NVGoggles_grn_F","ACE_Vector","H_PilotHelmetHeli_O","V_Rangemaster_belt","G_Tactical_Black","O_NVGoggles_grn_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadioAcreFlagged","O_NVGoggles_grn_F","ACE_Vector","H_PilotHelmetHeli_O","V_Rangemaster_belt","G_Tactical_Black","O_NVGoggles_grn_F"};
    backpack="T1_Units_Faction3_Taiga_Pilot_pack";
  };

  class T1_Units_Faction3_Taiga_T15_Armata_IFV: min_rf_t_15
  {
    faction="T1_Units_Faction3_Taiga";
    side=0;		
	scope = 2;
	scopeCurator = 2;	
	scopeArsenal = 2;
	transportMaxWeapons = 999;
	transportMaxMagazines = 9999;
	transportMaxBackpacks = 99;
	transportMaxItems = 9999;
    displayName="T-15 Armata - IFV";
    hiddenSelectionsTextures[]={"min_rf_vehicle\data\t_14_body_1_desert_co.paa","min_rf_vehicle\data\t_14_body_2_desert_co.paa","min_rf_vehicle\data\t_14_body_3_co.paa","min_rf_vehicle\data\t_15_body_desert_co.paa","min_rf_vehicle\data\numbers\black\2_ca.paa","min_rf_vehicle\data\numbers\black\1_ca.paa","min_rf_vehicle\data\numbers\black\4_ca.paa"};
    crew="T1_Units_Faction3_Taiga_Crew_Engineer";
    typicalCargo[]={"T1_Units_Faction3_Taiga_Crew_Engineer"};
    class TransportMagazines
		{
			class _xx_30rnd_762x39_AK12_lush_Mag_F {magazine="30rnd_762x39_AK12_lush_Mag_F";count=64;};
			class _xx_75rnd_762x39_AK12_lush_Mag_F {magazine="75rnd_762x39_AK12_lush_Mag_F";count=32;};
			class _xx_10Rnd_93x64_DMR_05_Mag {magazine="10Rnd_93x64_DMR_05_Mag";count=20;};
			class _xx_HandGrenade {magazine="HandGrenade";count=20;};
			class _xx_1Rnd_HE_Grenade_shell {magazine="1Rnd_HE_Grenade_shell";count=16;};
			class _xx_SmokeShell {magazine="SmokeShell";count=24;};
			class _xx_SmokeShellRed {magazine="SmokeShellRed";count=8;};
			class _xx_ACE_M84 {magazine="ACE_M84";count=12;};		
			class _xx_RPG32_F {magazine="RPG32_F";count=8;};						
			class _xx_DemoCharge_Remote_Mag {magazine="DemoCharge_Remote_Mag";count=12;};
			class _xx_SLAMDirectionalMine_Wire_Mag {magazine="SLAMDirectionalMine_Wire_Mag";count=8;};
		};
		class TransportItems
		{
			class _xx_ACE_fieldDressing {count=140;name="ACE_fieldDressing";};
			class _xx_ACE_morphine {count=30;name="ACE_morphine";};
			class _xx_ACE_epinephrine {count=30;name="ACE_epinephrine";};
			class _xx_ACE_tourniquet {count=30;name="ACE_tourniquet";};
			class _xx_ACE_surgicalKit {count=2;name="ACE_surgicalKit";};
			class _xx_ACE_bloodIV_250 {count=30;name="ACE_bloodIV";};
			class _xx_ACE_splint {count=30;name="ACE_splint";};
			class _xx_ACE_CableTie {count=20;name="ACE_CableTie";};
			class _xx_ACRE_PRC152 {count=4;name="ACRE_PRC152";};
			class _xx_ACRE_PRC117F {count=2;name="ACRE_PRC117F";};		
			class _xx_ACE_DefusalKit {count=2;name="ACE_DefusalKit";};		
			class _xx_ACE_M26_Clacker {count=2;name="ACE_M26_Clacker";};
		};
		class TransportWeapons
		{
			class _xx_launch_RPG32_green_F {weapon="launch_RPG32_green_F";count=2;};	
			class _xx_T1_arifle_AK12_lush_F_muzzle_snds_B_lush_Facc_pointer_IRoptic_Arco_AK_lush_F {weapon="T1_arifle_AK12_lush_F_muzzle_snds_B_lush_Facc_pointer_IRoptic_Arco_AK_lush_F";count=2;};		
			class _xx_T1_Units_Faction3_SAW_RPK12 {weapon="T1_Units_Faction3_SAW_RPK12";count=1;};		
		};
		
		class TransportBackpacks
		{			
			class _xx_B_FieldPack_taiga_F {count=4;backpack="B_FieldPack_taiga_F";};
		};	
	};	
  class T1_Units_Faction3_Taiga_Gaz2330: min_rf_gaz_2330
  {
    faction="T1_Units_Faction3_Desert";
    side=0;		
	scope = 2;
	scopeCurator = 2;	
	scopeArsenal = 2;
	transportMaxWeapons = 999;
	transportMaxMagazines = 9999;
	transportMaxBackpacks = 99;
	transportMaxItems = 9999;
    displayName="Gaz-2330";
    hiddenSelectionsTextures[]={"min_rf_vehicle\data\gaz_2330_ext_desert_co.paa","min_rf_vehicle\data\gaz_2330_int_co.paa"};
    crew="T1_Units_Faction3_Desert_Operator_Asst_AT";
    typicalCargo[]={"T1_Units_Faction3_Taiga_Operator_Asst_AT"};
	class TransportMagazines
		{
			class _xx_30rnd_762x39_AK12_lush_Mag_F {magazine="30rnd_762x39_AK12_lush_Mag_F";count=42;};
			class _xx_75rnd_762x39_AK12_lush_Mag_F {magazine="75rnd_762x39_AK12_lush_Mag_F";count=20;};
			class _xx_10Rnd_93x64_DMR_05_Mag {magazine="10Rnd_93x64_DMR_05_Mag";count=16;};
			class _xx_HandGrenade {magazine="HandGrenade";count=14;};
			class _xx_1Rnd_HE_Grenade_shell {magazine="1Rnd_HE_Grenade_shell";count=8;};
			class _xx_SmokeShell {magazine="SmokeShell";count=14;};
			class _xx_SmokeShellRed {magazine="SmokeShellRed";count=4;};
			class _xx_ACE_M84 {magazine="ACE_M84";count=12;};		
			class _xx_RPG32_F {magazine="RPG32_F";count=5;};						
			class _xx_DemoCharge_Remote_Mag {magazine="DemoCharge_Remote_Mag";count=6;};
			class _xx_SLAMDirectionalMine_Wire_Mag {magazine="SLAMDirectionalMine_Wire_Mag";count=4;};
		};
		class TransportItems
		{
			class _xx_ACE_fieldDressing {count=80;name="ACE_fieldDressing";};
			class _xx_ACE_morphine {count=20;name="ACE_morphine";};
			class _xx_ACE_epinephrine {count=20;name="ACE_epinephrine";};
			class _xx_ACE_tourniquet {count=20;name="ACE_tourniquet";};
			class _xx_ACE_surgicalKit {count=1;name="ACE_surgicalKit";};
			class _xx_ACE_bloodIV_250 {count=20;name="ACE_bloodIV";};
			class _xx_ACE_splint {count=20;name="ACE_splint";};
			class _xx_ACE_CableTie {count=20;name="ACE_CableTie";};
			class _xx_ACRE_PRC152 {count=2;name="ACRE_PRC152";};
			class _xx_ACRE_PRC117F {count=1;name="ACRE_PRC117F";};		
			class _xx_ACE_DefusalKit {count=1;name="ACE_DefusalKit";};		
			class _xx_ACE_M26_Clacker {count=1;name="ACE_M26_Clacker";};
		};
		class TransportWeapons
		{
			class _xx_launch_RPG32_green_F {weapon="launch_RPG32_green_F";count=1;};	
			class _xx_T1_arifle_AK12_lush_F_muzzle_snds_B_lush_Facc_pointer_IRoptic_Arco_AK_lush_F {weapon="T1_arifle_AK12_lush_F_muzzle_snds_B_lush_Facc_pointer_IRoptic_Arco_AK_lush_F";count=2;};		
		};
		
		class TransportBackpacks
		{			
			class _xx_B_FieldPack_taiga_F {count=2;backpack="B_FieldPack_taiga_F";};
		};		
	};

  class T1_Units_Faction3_Taiga_Gaz2330_HMG: min_rf_gaz_2330_HMG
  {
    faction="T1_Units_Faction3_Taiga";
    side=0;		
	scope = 2;
	scopeCurator = 2;	
	scopeArsenal = 2;
	transportMaxWeapons = 999;
	transportMaxMagazines = 9999;
	transportMaxBackpacks = 99;
	transportMaxItems = 9999;
    displayName="Gaz-2330 HMG";
    hiddenSelectionsTextures[]={"min_rf_vehicle\data\gaz_2330_ext_desert_co.paa","min_rf_vehicle\data\gaz_2330_int_co.paa","min_rf_vehicle\data\arbalet_dm_desert_co.paa","min_rf_vehicle\data\numbers\black\8_ca.paa","min_rf_vehicle\data\numbers\black\8_ca.paa"};
    crew="T1_Units_Faction3_Taiga_Operator_Asst_AT";
    typicalCargo[]={"T1_Units_Faction3_Taiga_Operator_Asst_AT"};
     class TransportMagazines
		{
			class _xx_30rnd_762x39_AK12_lush_Mag_F {magazine="30rnd_762x39_AK12_lush_Mag_F";count=42;};
			class _xx_75rnd_762x39_AK12_lush_Mag_F {magazine="75rnd_762x39_AK12_lush_Mag_F";count=20;};
			class _xx_10Rnd_93x64_DMR_05_Mag {magazine="10Rnd_93x64_DMR_05_Mag";count = 16;};
			class _xx_HandGrenade {magazine="HandGrenade";count=14;};
			class _xx_1Rnd_HE_Grenade_shell {magazine="1Rnd_HE_Grenade_shell";count=8;};
			class _xx_SmokeShell {magazine="SmokeShell";count=14;};
			class _xx_SmokeShellRed {magazine="SmokeShellRed";count=4;};
			class _xx_ACE_M84 {magazine="ACE_M84";count=12;};		
			class _xx_RPG32_F {magazine="RPG32_F";count=5;};						
			class _xx_DemoCharge_Remote_Mag {magazine="DemoCharge_Remote_Mag";count=6;};
			class _xx_SLAMDirectionalMine_Wire_Mag {magazine="SLAMDirectionalMine_Wire_Mag";count=4;};
		};
		class TransportItems
		{
			class _xx_ACE_fieldDressing {count=80;name="ACE_fieldDressing";};
			class _xx_ACE_morphine {count=20;name="ACE_morphine";};
			class _xx_ACE_epinephrine {count=20;name="ACE_epinephrine";};
			class _xx_ACE_tourniquet {count=20;name="ACE_tourniquet";};
			class _xx_ACE_surgicalKit {count=1;name="ACE_surgicalKit";};
			class _xx_ACE_bloodIV_250 {count=20;name="ACE_bloodIV";};
			class _xx_ACE_splint {count=20;name="ACE_splint";};
			class _xx_ACE_CableTie {count=20;name="ACE_CableTie";};
			class _xx_ACRE_PRC152 {count=2;name="ACRE_PRC152";};
			class _xx_ACRE_PRC117F {count=1;name="ACRE_PRC117F";};		
			class _xx_ACE_DefusalKit {count=1;name="ACE_DefusalKit";};		
			class _xx_ACE_M26_Clacker {count=1;name="ACE_M26_Clacker";};
		};
		class TransportWeapons
		{
			class _xx_launch_RPG32_green_F {weapon="launch_RPG32_green_F";count=1;};	
			class _xx_T1_arifle_AK12_lush_F_muzzle_snds_B_lush_Facc_pointer_IRoptic_Arco_AK_lush_F {weapon="T1_arifle_AK12_lush_F_muzzle_snds_B_lush_Facc_pointer_IRoptic_Arco_AK_lush_F";count=2;};		
		};
		
		class TransportBackpacks
		{			
			class _xx_B_FieldPack_taiga_F {count=2;backpack="B_FieldPack_taiga_F";};
		};		
	};

  class T1_Units_Faction3_Taiga_T14_Armata_MBT: min_rf_t_14
  {
    faction="T1_Units_Faction3_Taiga";
    side=0;		
	scope = 2;
	scopeCurator = 2;	
	scopeArsenal = 2;
	transportMaxWeapons = 999;
	transportMaxMagazines = 9999;
	transportMaxBackpacks = 99;
	transportMaxItems = 9999;
    displayName="T-14 Armata - MBT";
    hiddenSelectionsTextures[]={"min_rf_vehicle\data\t_14_body_1_desert_co.paa","min_rf_vehicle\data\t_14_body_2_desert_co.paa","min_rf_vehicle\data\t_14_body_3_co.paa","min_rf_vehicle\data\numbers\black\6_ca.paa","min_rf_vehicle\data\numbers\black\5_ca.paa","min_rf_vehicle\data\numbers\black\1_ca.paa"};
    crew="T1_Units_Faction3_Taiga_Crew_Engineer";
    typicalCargo[]={"T1_Units_Faction3_Taiga_Crew_Engineer"};
  class TransportMagazines
		{
			class _xx_30rnd_762x39_AK12_lush_Mag_F {magazine="30rnd_762x39_AK12_lush_Mag_F";count = 12;};
			class _xx_HandGrenade {magazine="HandGrenade";count=6;};
			class _xx_SmokeShell {magazine="SmokeShell";count=6;};
		};
		class TransportItems
		{
			class _xx_ACE_fieldDressing {count=30;name="ACE_fieldDressing";};
			class _xx_ACE_morphine {count=6;name="ACE_morphine";};
			class _xx_ACE_epinephrine {count=6;name="ACE_epinephrine";};
			class _xx_ACE_tourniquet {count=8;name="ACE_tourniquet";};
			class _xx_ACE_surgicalKit {count=1;name="ACE_surgicalKit";};
			class _xx_ACE_bloodIV_250 {count=6;name="ACE_bloodIV";};
			class _xx_ACE_splint {count=6;name="ACE_splint";};
			class _xx_ACRE_PRC152 {count=2;name="ACRE_PRC152";};
			class _xx_ACRE_PRC117F {count=1;name="ACRE_PRC117F";};
		};
		class TransportWeapons{};
		
		class TransportBackpacks
		{			
			class _xx_B_FieldPack_taiga_F {count=2;backpack="B_FieldPack_taiga_F";};
		};		
	};

  class T1_Units_Faction3_Taiga_Mi48_Kajman: O_Heli_Attack_02_dynamicLoadout_F
  {
    faction="T1_Units_Faction3_Taiga";
    side=0;		
	scope = 2;
	scopeCurator = 2;	
	scopeArsenal = 2;
	transportMaxWeapons = 999;
	transportMaxMagazines = 9999;
	transportMaxBackpacks = 99;
	transportMaxItems = 9999;
    displayName="Mi48 Kajman";
    hiddenSelectionsTextures[]={"a3\air_f_beta\heli_attack_02\data\heli_attack_02_body1_black_co.paa","a3\air_f_beta\heli_attack_02\data\heli_attack_02_body2_black_co.paa"};
    crew="T1_Units_Faction3_Taiga_Pilot";
    typicalCargo[]={"T1_Units_Faction3_Taiga_Pilot"};
    class TransportMagazines
		{
			class _xx_30rnd_762x39_AK12_lush_Mag_F {magazine="30rnd_762x39_AK12_lush_Mag_F";count=22;};
			class _xx_75rnd_762x39_AK12_lush_Mag_F {magazine="75rnd_762x39_AK12_lush_Mag_F";count=8;};
			class _xx_10Rnd_93x64_DMR_05_Mag {magazine="10Rnd_93x64_DMR_05_Mag";count=8;};
			class _xx_HandGrenade {magazine="HandGrenade";count=8;};
			class _xx_1Rnd_HE_Grenade_shell {magazine="1Rnd_HE_Grenade_shell";count=6;};
			class _xx_SmokeShell {magazine="SmokeShell";count=8;};		
			class _xx_RPG32_F {magazine="RPG32_F";count=2;};
		};
		class TransportItems
		{
			class _xx_ACE_fieldDressing {count=60;name="ACE_fieldDressing";};
			class _xx_ACE_morphine {count=10;name="ACE_morphine";};
			class _xx_ACE_epinephrine {count=10;name="ACE_epinephrine";};
			class _xx_ACE_tourniquet {count=8;name="ACE_tourniquet";};
			class _xx_ACE_surgicalKit {count=1;name="ACE_surgicalKit";};
			class _xx_ACE_bloodIV_250 {count=10;name="ACE_bloodIV";};
			class _xx_ACE_splint {count=10;name="ACE_splint";};
			class _xx_ACRE_PRC152 {count=2;name="ACRE_PRC152";};
			class _xx_ACRE_PRC117F {count=1;name="ACRE_PRC117F";};
			class _xx_ToolKit {count=1;name="ToolKit";};
		};
		class TransportWeapons
		{	
			class _xx_T1_arifle_AK12_lush_F_muzzle_snds_B_lush_Facc_pointer_IRoptic_Arco_AK_lush_F {weapon="T1_arifle_AK12_lush_F_muzzle_snds_B_lush_Facc_pointer_IRoptic_Arco_AK_lush_F";count=2;};		
		};
		
		class TransportBackpacks
		{			
			class _xx_B_FieldPack_taiga_F {count=2;backpack="B_FieldPack_taiga_F";};
		};		
	};

	class O_R_supplyCrate_F;
	class T1_Units_Faction3_Taiga_supplyCrate: O_R_supplyCrate_F
	{
		vehicleClass = "Ammo";
		displayName = "T1 Faction 3 Supply Box - Taiga (SF)";		
		scope = 2;
		scopeCurator = 2;	
		scopeArsenal = 2;
		transportMaxWeapons = 999;
		transportMaxMagazines = 9999;
		transportMaxBackpacks = 99;
		transportMaxItems = 9999;
		class TransportMagazines
		{
			class _xx_30rnd_762x39_AK12_lush_Mag_F {magazine="30rnd_762x39_AK12_lush_Mag_F";count=42;};
			class _xx_75rnd_762x39_AK12_lush_Mag_F {magazine="75rnd_762x39_AK12_lush_Mag_F";count=20;};
			class _xx_10Rnd_93x64_DMR_05_Mag {magazine="10Rnd_93x64_DMR_05_Mag";count = 16;};
			class _xx_HandGrenade {magazine="HandGrenade";count=14;};
			class _xx_1Rnd_HE_Grenade_shell {magazine="1Rnd_HE_Grenade_shell";count=8;};
			class _xx_SmokeShell {magazine="SmokeShell";count=14;};
			class _xx_SmokeShellRed {magazine="SmokeShellRed";count=4;};
			class _xx_ACE_M84 {magazine="ACE_M84";count=12;};		
			class _xx_RPG32_F {magazine="RPG32_F";count=5;};						
			class _xx_DemoCharge_Remote_Mag {magazine="DemoCharge_Remote_Mag";count=6;};
			class _xx_SLAMDirectionalMine_Wire_Mag {magazine="SLAMDirectionalMine_Wire_Mag";count=4;};
		};
		class TransportItems
		{
			class _xx_ACE_fieldDressing {count=80;name="ACE_fieldDressing";};
			class _xx_ACE_morphine {count=20;name="ACE_morphine";};
			class _xx_ACE_epinephrine {count=20;name="ACE_epinephrine";};
			class _xx_ACE_tourniquet {count=20;name="ACE_tourniquet";};
			class _xx_ACE_surgicalKit {count=1;name="ACE_surgicalKit";};
			class _xx_ACE_bloodIV_250 {count=20;name="ACE_bloodIV";};
			class _xx_ACE_splint {count=20;name="ACE_splint";};
			class _xx_ACE_CableTie {count=20;name="ACE_CableTie";};
			class _xx_ACRE_PRC152 {count=2;name="ACRE_PRC152";};
			class _xx_ACRE_PRC117F {count=1;name="ACRE_PRC117F";};		
			class _xx_ACE_DefusalKit {count=1;name="ACE_DefusalKit";};		
			class _xx_ACE_M26_Clacker {count=1;name="ACE_M26_Clacker";};
		};
		class TransportWeapons
		{
			class _xx_launch_RPG32_green_F {weapon="launch_RPG32_green_F";count=1;};	
			class _xx_T1_arifle_AK12_lush_F_muzzle_snds_B_lush_Facc_pointer_IRoptic_Arco_AK_lush_F {weapon="T1_arifle_AK12_lush_F_muzzle_snds_B_lush_Facc_pointer_IRoptic_Arco_AK_lush_F";count=2;};		
		};
		
		class TransportBackpacks
		{			
			class _xx_B_FieldPack_taiga_F {count=2;backpack="B_FieldPack_taiga_F";};
		};		
	};


  class T1_Units_Faction3_Taiga_Mission_Maker_pack: B_FieldPack_taiga_F
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems
    {
     class _xx_ACRE_PRC117F {count=1;name="ACRE_PRC117F";};
     class _xx_ACE_fieldDressing {count=20;name="ACE_fieldDressing";};
     class _xx_ACE_morphine {count=2;name="ACE_morphine";};
     class _xx_ACE_splint {count=2;name="ACE_splint";};
     class _xx_ACE_tourniquet {count=4;name="ACE_tourniquet";};
     class _xx_ACE_epinephrine {count=2;name="ACE_epinephrine";};
    };
    class TransportWeapons{};
  };


  class T1_Units_Faction3_Taiga_Element_Leader_pack: B_FieldPack_taiga_F
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems
    {
     class _xx_ACE_morphine {count=2;name="ACE_morphine";};
     class _xx_ACE_tourniquet {count=4;name="ACE_tourniquet";};
     class _xx_ACE_fieldDressing {count=20;name="ACE_fieldDressing";};
     class _xx_ACE_epinephrine {count=2;name="ACE_epinephrine";};
     class _xx_ACE_splint {count=2;name="ACE_splint";};
     class _xx_ACRE_PRC117F {count=1;name="ACRE_PRC117F";};
     class _xx_O_NVGoggles_grn_F {count=1;name="O_NVGoggles_grn_F";};
    };
    class TransportWeapons{};
  };


  class T1_Units_Faction3_Taiga_JTAC_pack: B_FieldPack_taiga_F
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems
    {
     class _xx_ACE_morphine {count=2;name="ACE_morphine";};
     class _xx_ACE_tourniquet {count=4;name="ACE_tourniquet";};
     class _xx_ACE_fieldDressing {count=20;name="ACE_fieldDressing";};
     class _xx_ACE_epinephrine {count=2;name="ACE_epinephrine";};
     class _xx_ACE_splint {count=2;name="ACE_splint";};
     class _xx_ACRE_PRC117F {count=1;name="ACRE_PRC117F";};
     class _xx_O_NVGoggles_grn_F {count=1;name="O_NVGoggles_grn_F";};
    };
    class TransportWeapons{};
  };


  class T1_Units_Faction3_Taiga_Operator_Lead_pack: B_FieldPack_taiga_F
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_1Rnd_HE_Grenade_shell {count=2;magazine="1Rnd_HE_Grenade_shell";};
    };
    class TransportItems
    {
     class _xx_ACE_fieldDressing {count=20;name="ACE_fieldDressing";};
     class _xx_ACE_morphine {count=2;name="ACE_morphine";};
     class _xx_ACE_tourniquet {count=4;name="ACE_tourniquet";};
     class _xx_ACE_epinephrine {count=2;name="ACE_epinephrine";};
     class _xx_ACE_splint {count=2;name="ACE_splint";};
     class _xx_O_NVGoggles_grn_F {count=1;name="O_NVGoggles_grn_F";};
     class _xx_ACRE_PRC117F {count=1;name="ACRE_PRC117F";};
    };
    class TransportWeapons{};
  };


  class T1_Units_Faction3_Taiga_Operator_AR_pack: B_FieldPack_taiga_F
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_75rnd_762x39_AK12_lush_Mag_F {count=5;magazine="75rnd_762x39_AK12_lush_Mag_F";};
    };
    class TransportItems
    {
     class _xx_ACE_fieldDressing {count=20;name="ACE_fieldDressing";};
     class _xx_ACE_morphine {count=2;name="ACE_morphine";};
     class _xx_ACE_tourniquet {count=4;name="ACE_tourniquet";};
     class _xx_ACE_epinephrine {count=2;name="ACE_epinephrine";};
     class _xx_ACE_splint {count=2;name="ACE_splint";};
     class _xx_O_NVGoggles_grn_F {count=1;name="O_NVGoggles_grn_F";};
    };
    class TransportWeapons{};
  };


  class T1_Units_Faction3_Taiga_Operator_AT_pack: B_FieldPack_taiga_F
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_RPG32_F {count=2;magazine="RPG32_F";};
    };
    class TransportItems
    {
     class _xx_ACE_fieldDressing {count=20;name="ACE_fieldDressing";};
     class _xx_ACE_morphine {count=2;name="ACE_morphine";};
     class _xx_ACE_tourniquet {count=4;name="ACE_tourniquet";};
     class _xx_ACE_epinephrine {count=2;name="ACE_epinephrine";};
     class _xx_ACE_splint {count=2;name="ACE_splint";};
     class _xx_O_NVGoggles_grn_F {count=1;name="O_NVGoggles_grn_F";};
    };
    class TransportWeapons{};
  };


  class T1_Units_Faction3_Taiga_Operator_Asst_AT_pack: B_FieldPack_taiga_F
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_RPG32_HE_F {count=2;magazine="RPG32_HE_F";};
     class _xx_RPG32_F {count=1;magazine="RPG32_F";};
    };
    class TransportItems
    {
     class _xx_ACE_fieldDressing {count=20;name="ACE_fieldDressing";};
     class _xx_ACE_morphine {count=2;name="ACE_morphine";};
     class _xx_ACE_tourniquet {count=4;name="ACE_tourniquet";};
     class _xx_ACE_epinephrine {count=2;name="ACE_epinephrine";};
     class _xx_ACE_splint {count=2;name="ACE_splint";};
     class _xx_O_NVGoggles_grn_F {count=1;name="O_NVGoggles_grn_F";};
    };
    class TransportWeapons{};
  };


  class T1_Units_Faction3_Taiga_Operator_Saboteur_pack: B_FieldPack_taiga_F
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_DemoCharge_Remote_Mag {count=6;magazine="DemoCharge_Remote_Mag";};
     class _xx_30rnd_762x39_AK12_lush_Mag_F {count=2;magazine="30rnd_762x39_AK12_lush_Mag_F";};
    };
    class TransportItems
    {
     class _xx_ACE_fieldDressing {count=20;name="ACE_fieldDressing";};
     class _xx_ACE_morphine {count=2;name="ACE_morphine";};
     class _xx_ACE_tourniquet {count=4;name="ACE_tourniquet";};
     class _xx_ACE_epinephrine {count=2;name="ACE_epinephrine";};
     class _xx_ACE_splint {count=2;name="ACE_splint";};
     class _xx_O_NVGoggles_grn_F {count=1;name="O_NVGoggles_grn_F";};
    };
    class TransportWeapons{};
  };


  class T1_Units_Faction3_Taiga_Operator_CLS_pack: B_FieldPack_taiga_F
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems
    {
     class _xx_ACE_fieldDressing {count=70;name="ACE_fieldDressing";};
     class _xx_ACE_morphine {count=20;name="ACE_morphine";};
     class _xx_ACE_epinephrine {count=20;name="ACE_epinephrine";};
     class _xx_ACE_splint {count=10;name="ACE_splint";};
     class _xx_O_NVGoggles_grn_F {count=1;name="O_NVGoggles_grn_F";};
     class _xx_ACE_bloodIV {count=12;name="ACE_bloodIV";};
     class _xx_ACE_tourniquet {count=4;name="ACE_tourniquet";};
     class _xx_ACE_surgicalKit {count=1;name="ACE_surgicalKit";};
    };
    class TransportWeapons{};
  };


  class T1_Units_Faction3_Taiga_Recon_Spotter_pack: B_FieldPack_taiga_F
  {
    scope=1;
    class TransportMagazines
    {};
    class TransportItems
    {
	 class _xx_ACRE_PRC117F {count=1;name="ACRE_PRC117F";};
     class _xx_ACE_fieldDressing {count=30;name="ACE_fieldDressing";};
     class _xx_ACE_tourniquet {count=4;name="ACE_tourniquet";};
     class _xx_ACE_epinephrine {count=4;name="ACE_epinephrine";};
	 class _xx_ACE_morphine {count=4;name="ACE_morphine";};
     class _xx_ACE_bloodIV {count=2;name="ACE_bloodIV";};
     class _xx_ACE_splint {count=4;name="ACE_splint";};
    };
    class TransportWeapons{};
  };


  class T1_Units_Faction3_Taiga_Recon_Marksman_pack: B_FieldPack_taiga_F
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_10Rnd_93x64_DMR_05_Mag {count=9;magazine="10Rnd_93x64_DMR_05_Mag";};
    };
    class TransportItems
    {
     class _xx_ACE_fieldDressing {count=20;name="ACE_fieldDressing";};
     class _xx_ACE_morphine {count=2;name="ACE_morphine";};
     class _xx_ACE_tourniquet {count=4;name="ACE_tourniquet";};
     class _xx_ACE_epinephrine {count=2;name="ACE_epinephrine";};
     class _xx_ACE_splint {count=2;name="ACE_splint";};
     class _xx_O_NVGoggles_grn_F {count=1;name="O_NVGoggles_grn_F";};
    };
    class TransportWeapons{};
  };


  class T1_Units_Faction3_Taiga_Crew_CLS_pack: B_FieldPack_taiga_F
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems
    {
     class _xx_ACRE_PRC117F {count=1;name="ACRE_PRC117F";};
     class _xx_ACE_fieldDressing {count=30;name="ACE_fieldDressing";};
     class _xx_ACE_bloodIV {count=6;name="ACE_bloodIV";};
     class _xx_ACE_epinephrine {count=6;name="ACE_epinephrine";};
     class _xx_ACE_morphine {count=6;name="ACE_morphine";};
     class _xx_ACE_splint {count=4;name="ACE_splint";};
     class _xx_ACE_surgicalKit {count=1;name="ACE_surgicalKit";};
    };
    class TransportWeapons{};
  };


  class T1_Units_Faction3_Taiga_Crew_Engineer_pack: B_FieldPack_taiga_F
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems
    {
     class _xx_ToolKit {count=1;name="ToolKit";};
     class _xx_ACRE_PRC117F {count=1;name="ACRE_PRC117F";};
    };
    class TransportWeapons{};
  };


  class T1_Units_Faction3_Taiga_Pilot_pack: B_AssaultPack_taiga_F
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_SmokeShellBlue {count=1;magazine="SmokeShellBlue";};
     class _xx_SmokeShellYellow {count=1;magazine="SmokeShellYellow";};
     class _xx_SmokeShellOrange {count=1;magazine="SmokeShellOrange";};
     class _xx_SmokeShellGreen {count=1;magazine="SmokeShellGreen";};
     class _xx_SmokeShellPurple {count=1;magazine="SmokeShellPurple";};
     class _xx_SmokeShell {count=1;magazine="SmokeShell";};
    };
    class TransportItems
    {
     class _xx_ACRE_PRC117F {count=1;name="ACRE_PRC117F";};
    };
    class TransportWeapons{};
  };

};

//////////////// Paste cfgGroups after this line //////////////// 
