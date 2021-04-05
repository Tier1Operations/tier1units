class cfgPatches
{
  class T1_Units_Faction_3_Hex_Faction_3
  {
    units[]={"T1_Units_Faction_3_Hex_Platoon_Leader","T1_Units_Faction_3_Hex_Platoon_JTAC","T1_Units_Faction_3_Hex_Platoon_Engineer","T1_Units_Faction_3_Hex_Platoon_Medic","T1_Units_Faction_3_Hex_FireTeam_Lead_AR","T1_Units_Faction_3_Hex_FireTeam_Lead_AT","T1_Units_Faction_3_Hex_FireTeam_AR","T1_Units_Faction_3_Hex_FireTeam_AT","T1_Units_Faction_3_Hex_FireTeam_AT_Assist","T1_Units_Faction_3_Hex_FireTeam_DMR_AR","T1_Units_Faction_3_Hex_MMG_Assist","T1_Units_Faction_3_Hex_MMG_Gunner","T1_Units_Faction_3_Hex_MAT_Assist","T1_Units_Faction_3_Hex_MAT_Gunner","T1_Units_Faction_3_Hex_AA_Assist","T1_Units_Faction_3_Hex_AA_Gunner","T1_Units_Faction_3_Hex_Spotter","T1_Units_Faction_3_Hex_Sniper","T1_Units_Faction_3_Hex_Crew_Commander","T1_Units_Faction_3_Hex_Crew_Engineer","T1_Units_Faction_3_Hex_Crew_CLS","T1_Units_Faction_3_Hex_FireTeam_DMR_AT","T1_Units_Faction_3_Hex_FireTeam_CLS","T1_Units_Faction_3_Hex_Pilot","T1_Units_Faction_3_Hex_BM2T_Stalker","T1_Units_Faction_3_Hex_Takhion_AT","T1_Units_Faction_3_Hex_Takhion_MG","T1_Units_Faction_3_Hex_Takhion","T1_Units_Faction_3_Hex_T140_Angara","T1_Units_Faction_3_Hex_T140K_Angara","T1_Units_Faction_3_Hex_GAZ_2330","T1_Units_Faction_3_Hex_GAZ_2330_CROW","T1_Units_Faction_3_Hex_KA60_Kasatka","T1_Units_Faction_3_Hex_MI48_Kajman","T1_Units_Faction_3_Hex_Takhion_AT_AA","T1_Units_Faction_3_Hex_Takhion_AT_MAT","T1_Units_Faction_3_Hex_Takhion_AT_MMG","T1_Units_Faction3_Hex_supplyCrate","T1_Units_Faction3_Hex_delta_supplyCrate"};
    weapons[]={"T1_Units_Faction_3_Hex_arifle_AK12U_F_acc_pointer_IRoptic_Holosight_blk_F","T1_Units_Faction_3_Hex_arifle_AK12_GL_F_acc_pointer_IRoptic_Holosight_blk_F","T1_Units_Faction_3_Hex_arifle_RPK12_F_acc_pointer_IRoptic_Holosight_blk_F","T1_Units_Faction_3_Hex_launch_RPG32_green_F","T1_Units_Faction_3_Hex_arifle_AK12_F_acc_pointer_IRoptic_Holosight_blk_F","T1_Units_Faction_3_Hex_srifle_DMR_01_F_acc_pointer_IRoptic_DMSbipod_02_F_blk","T1_Units_Faction_3_Hex_hgun_Rook40_F","T1_Units_Faction_3_Hex_LMG_min_rf_6p69_optic_MRCO","T1_Units_Faction_3_Hex_launch_O_Vorona_green_F","T1_Units_Faction_3_Hex_launch_B_Titan_olive_F","T1_Units_Faction_3_Hex_arifle_AK12_lush_F_muzzle_snds_B_lush_Foptic_Arco_AK_lush_Fbipod_02_F_lush","T1_Units_Faction_3_Hex_srifle_min_rf_orsis_t5000_muzzle_snds_338_blackoptic_LRPS","T1_Units_Faction_3_Hex_hgun_Rook40_F_muzzle_snds_L","T1_Units_Faction_3_Hex_SMG_02_F_acc_pointer_IRoptic_Holosight_smg_blk_F"};
    requiredVersion=0.1;
    requiredAddons[]={"ace_captives","ace_hearing","ace_flashlights","ace_microdagr","ace_maptools","acre_sys_prc343","ace_medical_treatment","A3_Weapons_F_Exp","acre_sys_prc117f","ace_vector","A3_Weapons_F","A3_Drones_F_Weapons_F_Gamma_Items","A3_Weapons_F_Enoch_Rifles_AK12","A3_Characters_F_Exp","A3_Weapons_F_Exp_Rifles_AK12","acre_sys_prc152","ace_explosives","A3_Weapons_F_Items","ace_tagging","A3_Characters_F_Exp_Vests","A3_Weapons_F_Enoch_Launchers_RPG32","ace_rangecard","A3_Weapons_F_Pistols_Rook40","min_rf_wp","A3_Weapons_F_Tank_Launchers_Vorona","A3_Weapons_F_Enoch_Launchers_Titan","ace_trenches","A3_Characters_F_Enoch_Vests","A3_Characters_F_Exp_Headgear","ace_attach","A3_Weapons_F_Enoch","A3_Weapons_F_SMGs_SMG_02","A3_Characters_F"};
  };
};

class cfgFactionClasses
{
  class T1_Units_Faction_3_Hex_Faction_3
  {
    icon="";
    displayName="T1 Units Faction 3 (Section)";
    side=0;
    priority=1;
  };
};


class cfgWeapons
{
  class arifle_AK12U_F;
  class arifle_AK12_GL_F;
  class arifle_RPK12_F;
  class launch_RPG32_green_F;
  class arifle_AK12_F;
  class srifle_DMR_01_F;
  class hgun_Rook40_F;
  class LMG_min_rf_6p69;
  class launch_O_Vorona_green_F;
  class launch_B_Titan_olive_F;
  class arifle_AK12_lush_F;
  class srifle_min_rf_orsis_t5000;
  class SMG_02_F;

  class T1_Units_Faction_3_Hex_arifle_AK12U_F_acc_pointer_IRoptic_Holosight_blk_F: arifle_AK12U_F
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

  class T1_Units_Faction_3_Hex_arifle_AK12_GL_F_acc_pointer_IRoptic_Holosight_blk_F: arifle_AK12_GL_F
  {
    displayName="AK-15 GL";
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

  class T1_Units_Faction_3_Hex_arifle_RPK12_F_acc_pointer_IRoptic_Holosight_blk_F: arifle_RPK12_F
  {
    displayName="RPK";
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

  class T1_Units_Faction_3_Hex_launch_RPG32_green_F: launch_RPG32_green_F
  {
    displayName="RPG-32";
    scope=1;
    class LinkedItems
    {
    };
  };

  class T1_Units_Faction_3_Hex_arifle_AK12_F_acc_pointer_IRoptic_Holosight_blk_F: arifle_AK12_F
  {
    displayName="AK-15";
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

  class T1_Units_Faction_3_Hex_srifle_DMR_01_F_acc_pointer_IRoptic_DMSbipod_02_F_blk: srifle_DMR_01_F
  {
    displayName="Rahim 7.62 mm";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="optic_DMS";
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

  class T1_Units_Faction_3_Hex_hgun_Rook40_F: hgun_Rook40_F
  {
    displayName="MP-443 Grach";
    scope=1;
    class LinkedItems
    {
    };
  };

  class T1_Units_Faction_3_Hex_LMG_min_rf_6p69_optic_MRCO: LMG_min_rf_6p69
  {
    displayName="6P69 Pecheneg-SP";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="optic_MRCO";
      };
    };
  };

  class T1_Units_Faction_3_Hex_launch_O_Vorona_green_F: launch_O_Vorona_green_F
  {
    displayName="Metis-M";
    scope=1;
    class LinkedItems
    {
    };
  };

  class T1_Units_Faction_3_Hex_launch_B_Titan_olive_F: launch_B_Titan_olive_F
  {
    displayName="Titan MPRL";
    scope=1;
    class LinkedItems
    {
    };
  };

  class T1_Units_Faction_3_Hex_arifle_AK12_lush_F_muzzle_snds_B_lush_Foptic_Arco_AK_lush_Fbipod_02_F_lush: arifle_AK12_lush_F
  {
    displayName="AK-15";
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
      class LinkedItemsUnder
      {
        slot="UnderBarrelSlot";
        item="bipod_02_F_lush";
      };
    };
  };

  class T1_Units_Faction_3_Hex_srifle_min_rf_orsis_t5000_muzzle_snds_338_blackoptic_LRPS: srifle_min_rf_orsis_t5000
  {
    displayName="Orsis T-5000";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsMuzzle
      {
        slot="MuzzleSlot";
        item="muzzle_snds_338_black";
      };
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="optic_LRPS";
      };
    };
  };

  class T1_Units_Faction_3_Hex_hgun_Rook40_F_muzzle_snds_L: hgun_Rook40_F
  {
    displayName="MP-443 Grach";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsMuzzle
      {
        slot="MuzzleSlot";
        item="muzzle_snds_L";
      };
    };
  };

  class T1_Units_Faction_3_Hex_SMG_02_F_acc_pointer_IRoptic_Holosight_smg_blk_F: SMG_02_F
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
  class O_R_Gorka_base_F;
  class B_ViperLightHarness_ghex_F;
  class B_FieldPack_ghex_F;
  class B_Carryall_ghex_F;
  class B_AssaultPack_khk;
  class O_T_APC_Tracked_02_cannon_ghex_F;
  class O_T_LSV_02_AT_F;
  class O_T_LSV_02_armed_F;
  class O_T_LSV_02_unarmed_F;
  class O_T_MBT_04_cannon_F;
  class O_T_MBT_04_command_F;
  class min_rf_gaz_2330;
  class min_rf_gaz_2330_HMG;
  class O_Heli_Light_02_unarmed_F;
  class O_Heli_Attack_02_dynamicLoadout_F;

  class T1_Units_Faction_3_Hex_Platoon_Leader: O_R_Gorka_base_F
  {
    faction="T1_Units_Faction_3_Hex_Faction_3";
    side=0;
	scope = 2;
	attendant = 1;
	T1_NoMedicIcon = 1;
    displayName="Platoon Leader";
    uniformClass="U_O_T_Soldier_F";
    weapons[]={"Laserdesignator_02_ghex_F","ACE_Vector","T1_Units_Faction_3_Hex_arifle_AK12U_F_acc_pointer_IRoptic_Holosight_blk_F","Put","Throw"};
    respawnWeapons[]={"Laserdesignator_02_ghex_F","ACE_Vector","T1_Units_Faction_3_Hex_arifle_AK12U_F_acc_pointer_IRoptic_Holosight_blk_F","Put","Throw"};
    items[]={"ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACE_Flashlight_MX991","ACE_microDAGR","ACE_MapTools","ACRE_PRC343_ID_1"};
    respawnItems[]={"ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACE_Flashlight_MX991","ACE_microDAGR","ACE_MapTools","ACRE_PRC343_ID_1"};
    magazines[]={"SmokeShell","SmokeShell","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","MiniGrenade","MiniGrenade","SmokeShellBlue","SmokeShellBlue","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","SmokeShellRed","SmokeShellYellow","30Rnd_762x39_AK12_Mag_Tracer_F"};
    respawnMagazines[]={"SmokeShell","SmokeShell","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","MiniGrenade","MiniGrenade","SmokeShellBlue","SmokeShellBlue","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","SmokeShellRed","SmokeShellYellow","30Rnd_762x39_AK12_Mag_Tracer_F"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadioAcreFlagged","O_UavTerminal","Laserdesignator_02_ghex_F","H_HelmetLeaderO_ghex_F","V_HarnessO_ghex_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadioAcreFlagged","O_UavTerminal","Laserdesignator_02_ghex_F","H_HelmetLeaderO_ghex_F","V_HarnessO_ghex_F"};
    backpack="T1_Units_Faction_3_Hex_Platoon_Leader_pack";
  };

  class T1_Units_Faction_3_Hex_Platoon_JTAC: O_R_Gorka_base_F
  {
    faction="T1_Units_Faction_3_Hex_Faction_3";
    side=0;
	scope = 2;
	attendant = 1;
	T1_NoMedicIcon = 1;
    displayName="Platoon JTAC";
    uniformClass="U_O_T_Soldier_F";
    weapons[]={"Laserdesignator_02_ghex_F","ACE_Vector","T1_Units_Faction_3_Hex_arifle_AK12_GL_F_acc_pointer_IRoptic_Holosight_blk_F","Put","Throw"};
    respawnWeapons[]={"Laserdesignator_02_ghex_F","ACE_Vector","T1_Units_Faction_3_Hex_arifle_AK12_GL_F_acc_pointer_IRoptic_Holosight_blk_F","Put","Throw"};
    items[]={"ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACE_Flashlight_MX991","ACE_microDAGR","ACE_MapTools","ACRE_PRC343"};
    respawnItems[]={"ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACE_Flashlight_MX991","ACE_microDAGR","ACE_MapTools","ACRE_PRC343"};
    magazines[]={"SmokeShell","SmokeShell","30Rnd_762x39_AK12_Mag_Tracer_F","30Rnd_762x39_AK12_Mag_Tracer_F","30Rnd_762x39_AK12_Mag_Tracer_F","30Rnd_762x39_AK12_Mag_Tracer_F","30Rnd_762x39_AK12_Mag_Tracer_F","30Rnd_762x39_AK12_Mag_Tracer_F","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","30Rnd_762x39_AK12_Mag_Tracer_F"};
    respawnMagazines[]={"SmokeShell","SmokeShell","30Rnd_762x39_AK12_Mag_Tracer_F","30Rnd_762x39_AK12_Mag_Tracer_F","30Rnd_762x39_AK12_Mag_Tracer_F","30Rnd_762x39_AK12_Mag_Tracer_F","30Rnd_762x39_AK12_Mag_Tracer_F","30Rnd_762x39_AK12_Mag_Tracer_F","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","30Rnd_762x39_AK12_Mag_Tracer_F"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","O_UavTerminal","Laserdesignator_02_ghex_F","H_HelmetLeaderO_ghex_F","V_HarnessO_ghex_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","O_UavTerminal","Laserdesignator_02_ghex_F","H_HelmetLeaderO_ghex_F","V_HarnessO_ghex_F"};
    backpack="T1_Units_Faction_3_Hex_Platoon_JTAC_pack";
  };

  class T1_Units_Faction_3_Hex_Platoon_Engineer: O_R_Gorka_base_F
  {
    faction="T1_Units_Faction_3_Hex_Faction_3";
    side=0;
	scope = 2;
	attendant = 1;	
	engineer = 1;
	T1_NoMedicIcon = 1;
    displayName="Platoon Engineer";
    uniformClass="U_O_T_Soldier_F";
    weapons[]={"ACE_Vector","T1_Units_Faction_3_Hex_arifle_AK12U_F_acc_pointer_IRoptic_Holosight_blk_F","Put","Throw"};
    respawnWeapons[]={"ACE_Vector","T1_Units_Faction_3_Hex_arifle_AK12U_F_acc_pointer_IRoptic_Holosight_blk_F","Put","Throw"};
    items[]={"ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACRE_PRC343","ACE_Flashlight_MX991","ACE_microDAGR","ACE_MapTools","ACRE_PRC152","ACE_M26_Clacker","MineDetector","ACE_DefusalKit"};
    respawnItems[]={"ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACRE_PRC343","ACE_Flashlight_MX991","ACE_microDAGR","ACE_MapTools","ACRE_PRC152","ACE_M26_Clacker","MineDetector","ACE_DefusalKit"};
    magazines[]={"SmokeShell","SmokeShell","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","MiniGrenade","MiniGrenade","30Rnd_762x39_AK12_Mag_Tracer_F"};
    respawnMagazines[]={"SmokeShell","SmokeShell","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","MiniGrenade","MiniGrenade","30Rnd_762x39_AK12_Mag_Tracer_F"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ACE_Vector","H_HelmetLeaderO_ghex_F","V_HarnessOGL_ghex_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ACE_Vector","H_HelmetLeaderO_ghex_F","V_HarnessOGL_ghex_F"};
    backpack="T1_Units_Faction_3_Hex_Platoon_Engineer_pack";
  };

  class T1_Units_Faction_3_Hex_Platoon_Medic: O_R_Gorka_base_F
  {
    faction="T1_Units_Faction_3_Hex_Faction_3";
    side=0;
	scope = 2;
	attendant = 1;
    displayName="Platoon Medic";
    uniformClass="U_O_T_Soldier_F";
    weapons[]={"ACE_Vector","T1_Units_Faction_3_Hex_arifle_AK12U_F_acc_pointer_IRoptic_Holosight_blk_F","Put","Throw"};
    respawnWeapons[]={"ACE_Vector","T1_Units_Faction_3_Hex_arifle_AK12U_F_acc_pointer_IRoptic_Holosight_blk_F","Put","Throw"};
    items[]={"ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACE_MapTools","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_Flashlight_MX991","ACE_microDAGR","ACRE_PRC343","ACRE_PRC152"};
    respawnItems[]={"ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACE_MapTools","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_Flashlight_MX991","ACE_microDAGR","ACRE_PRC343","ACRE_PRC152"};
    magazines[]={"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","30Rnd_762x39_AK12_Mag_Tracer_F"};
    respawnMagazines[]={"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","30Rnd_762x39_AK12_Mag_Tracer_F"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ACE_Vector","H_HelmetLeaderO_ghex_F","V_HarnessO_ghex_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ACE_Vector","H_HelmetLeaderO_ghex_F","V_HarnessO_ghex_F"};
    backpack="T1_Units_Faction_3_Hex_Platoon_Medic_pack";
  };

  class T1_Units_Faction_3_Hex_FireTeam_Lead_AR: O_R_Gorka_base_F
  {
    faction="T1_Units_Faction_3_Hex_Faction_3";
    side=0;
	scope = 2;
    displayName="FireTeam Lead (AR)";
    uniformClass="U_O_T_Soldier_F";
    weapons[]={"ACE_Vector","T1_Units_Faction_3_Hex_arifle_AK12_GL_F_acc_pointer_IRoptic_Holosight_blk_F","Put","Throw"};
    respawnWeapons[]={"ACE_Vector","T1_Units_Faction_3_Hex_arifle_AK12_GL_F_acc_pointer_IRoptic_Holosight_blk_F","Put","Throw"};
    items[]={"ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACE_Flashlight_MX991","ACE_microDAGR","ACE_MapTools","ACRE_PRC343","ACRE_PRC152"};
    respawnItems[]={"ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACE_Flashlight_MX991","ACE_microDAGR","ACE_MapTools","ACRE_PRC343","ACRE_PRC152"};
    magazines[]={"SmokeShell","SmokeShell","MiniGrenade","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F"};
    respawnMagazines[]={"SmokeShell","SmokeShell","MiniGrenade","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ACE_Vector","H_HelmetLeaderO_ghex_F","V_HarnessO_ghex_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ACE_Vector","H_HelmetLeaderO_ghex_F","V_HarnessO_ghex_F"};
    backpack="T1_Units_Faction_3_Hex_FireTeam_Lead_AR_pack";
  };

  class T1_Units_Faction_3_Hex_FireTeam_Lead_AT: O_R_Gorka_base_F
  {
    faction="T1_Units_Faction_3_Hex_Faction_3";
    side=0;
	scope = 2;
    displayName="FireTeam Lead (AT)";
    uniformClass="U_O_T_Soldier_F";
    weapons[]={"ACE_Vector","T1_Units_Faction_3_Hex_arifle_AK12_GL_F_acc_pointer_IRoptic_Holosight_blk_F","Put","Throw"};
    respawnWeapons[]={"ACE_Vector","T1_Units_Faction_3_Hex_arifle_AK12_GL_F_acc_pointer_IRoptic_Holosight_blk_F","Put","Throw"};
    items[]={"ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACE_Flashlight_MX991","ACE_microDAGR","ACE_MapTools","ACRE_PRC343","ACRE_PRC152"};
    respawnItems[]={"ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACE_Flashlight_MX991","ACE_microDAGR","ACE_MapTools","ACRE_PRC343","ACRE_PRC152"};
    magazines[]={"SmokeShell","SmokeShell","MiniGrenade","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F"};
    respawnMagazines[]={"SmokeShell","SmokeShell","MiniGrenade","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ACE_Vector","H_HelmetLeaderO_ghex_F","V_HarnessO_ghex_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ACE_Vector","H_HelmetLeaderO_ghex_F","V_HarnessO_ghex_F"};
    backpack="T1_Units_Faction_3_Hex_FireTeam_Lead_AT_pack";
  };

  class T1_Units_Faction_3_Hex_FireTeam_AR: O_R_Gorka_base_F
  {
    faction="T1_Units_Faction_3_Hex_Faction_3";
    side=0;
	scope = 2;
    displayName="FireTeam AR";
    uniformClass="U_O_T_Soldier_F";
    weapons[]={"ACE_Vector","T1_Units_Faction_3_Hex_arifle_RPK12_F_acc_pointer_IRoptic_Holosight_blk_F","Put","Throw"};
    respawnWeapons[]={"ACE_Vector","T1_Units_Faction_3_Hex_arifle_RPK12_F_acc_pointer_IRoptic_Holosight_blk_F","Put","Throw"};
    items[]={"ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACE_Flashlight_MX991","ACE_microDAGR","ACE_MapTools","ACRE_PRC343","ACRE_PRC152"};
    respawnItems[]={"ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACE_Flashlight_MX991","ACE_microDAGR","ACE_MapTools","ACRE_PRC343","ACRE_PRC152"};
    magazines[]={"SmokeShell","SmokeShell","MiniGrenade","75rnd_762x39_AK12_Mag_Tracer_F","75rnd_762x39_AK12_Mag_Tracer_F","75rnd_762x39_AK12_Mag_Tracer_F","75rnd_762x39_AK12_Mag_Tracer_F","75rnd_762x39_AK12_Mag_Tracer_F","75rnd_762x39_AK12_Mag_Tracer_F"};
    respawnMagazines[]={"SmokeShell","SmokeShell","MiniGrenade","75rnd_762x39_AK12_Mag_Tracer_F","75rnd_762x39_AK12_Mag_Tracer_F","75rnd_762x39_AK12_Mag_Tracer_F","75rnd_762x39_AK12_Mag_Tracer_F","75rnd_762x39_AK12_Mag_Tracer_F","75rnd_762x39_AK12_Mag_Tracer_F"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ACE_Vector","H_HelmetLeaderO_ghex_F","V_HarnessO_ghex_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ACE_Vector","H_HelmetLeaderO_ghex_F","V_HarnessO_ghex_F"};
    backpack="T1_Units_Faction_3_Hex_FireTeam_AR_pack";
  };

  class T1_Units_Faction_3_Hex_FireTeam_AT: O_R_Gorka_base_F
  {
    faction="T1_Units_Faction_3_Hex_Faction_3";
    side=0;
	scope = 2;
    displayName="FireTeam AT";
    uniformClass="U_O_T_Soldier_F";
    weapons[]={"ACE_Vector","T1_Units_Faction_3_Hex_arifle_AK12U_F_acc_pointer_IRoptic_Holosight_blk_F","T1_Units_Faction_3_Hex_launch_RPG32_green_F","Put","Throw"};
    respawnWeapons[]={"ACE_Vector","T1_Units_Faction_3_Hex_arifle_AK12U_F_acc_pointer_IRoptic_Holosight_blk_F","T1_Units_Faction_3_Hex_launch_RPG32_green_F","Put","Throw"};
    items[]={"ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACE_Flashlight_MX991","ACE_microDAGR","ACE_MapTools","ACRE_PRC343","ACRE_PRC152"};
    respawnItems[]={"ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACE_Flashlight_MX991","ACE_microDAGR","ACE_MapTools","ACRE_PRC343","ACRE_PRC152"};
    magazines[]={"SmokeShell","SmokeShell","MiniGrenade","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","RPG32_F","30Rnd_762x39_AK12_Mag_F"};
    respawnMagazines[]={"SmokeShell","SmokeShell","MiniGrenade","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","RPG32_F","30Rnd_762x39_AK12_Mag_F"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ACE_Vector","H_HelmetLeaderO_ghex_F","V_HarnessO_ghex_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ACE_Vector","H_HelmetLeaderO_ghex_F","V_HarnessO_ghex_F"};
    backpack="T1_Units_Faction_3_Hex_FireTeam_AT_pack";
  };

  class T1_Units_Faction_3_Hex_FireTeam_AT_Assist: O_R_Gorka_base_F
  {
    faction="T1_Units_Faction_3_Hex_Faction_3";
    side=0;
	scope = 2;
    displayName="FireTeam AT Assist";
    uniformClass="U_O_T_Soldier_F";
    weapons[]={"ACE_Vector","T1_Units_Faction_3_Hex_arifle_AK12_F_acc_pointer_IRoptic_Holosight_blk_F","Put","Throw"};
    respawnWeapons[]={"ACE_Vector","T1_Units_Faction_3_Hex_arifle_AK12_F_acc_pointer_IRoptic_Holosight_blk_F","Put","Throw"};
    items[]={"ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACE_Flashlight_MX991","ACE_microDAGR","ACE_MapTools","ACRE_PRC343","ACRE_PRC152"};
    respawnItems[]={"ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACE_Flashlight_MX991","ACE_microDAGR","ACE_MapTools","ACRE_PRC343","ACRE_PRC152"};
    magazines[]={"SmokeShell","SmokeShell","MiniGrenade","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F"};
    respawnMagazines[]={"SmokeShell","SmokeShell","MiniGrenade","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ACE_Vector","H_HelmetLeaderO_ghex_F","V_HarnessO_ghex_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ACE_Vector","H_HelmetLeaderO_ghex_F","V_HarnessO_ghex_F"};
    backpack="T1_Units_Faction_3_Hex_FireTeam_AT_Assist_pack";
  };

  class T1_Units_Faction_3_Hex_FireTeam_DMR_AR: O_R_Gorka_base_F
  {
    faction="T1_Units_Faction_3_Hex_Faction_3";
    side=0;
	scope = 2;
    displayName="FireTeam DMR (AR)";
    uniformClass="U_O_T_Soldier_F";
    weapons[]={"ACE_Vector","T1_Units_Faction_3_Hex_srifle_DMR_01_F_acc_pointer_IRoptic_DMSbipod_02_F_blk","T1_Units_Faction_3_Hex_hgun_Rook40_F","Put","Throw"};
    respawnWeapons[]={"ACE_Vector","T1_Units_Faction_3_Hex_srifle_DMR_01_F_acc_pointer_IRoptic_DMSbipod_02_F_blk","T1_Units_Faction_3_Hex_hgun_Rook40_F","Put","Throw"};
    items[]={"ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACE_Flashlight_MX991","ACE_microDAGR","ACE_MapTools","ACE_RangeCard","ACRE_PRC343","ACRE_PRC152"};
    respawnItems[]={"ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACE_Flashlight_MX991","ACE_microDAGR","ACE_MapTools","ACE_RangeCard","ACRE_PRC343","ACRE_PRC152"};
    magazines[]={"SmokeShell","SmokeShell","MiniGrenade","MiniGrenade","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","10Rnd_762x54_Mag"};
    respawnMagazines[]={"SmokeShell","SmokeShell","MiniGrenade","MiniGrenade","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","10Rnd_762x54_Mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ACE_Vector","H_HelmetLeaderO_ghex_F","V_HarnessO_ghex_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ACE_Vector","H_HelmetLeaderO_ghex_F","V_HarnessO_ghex_F"};
    backpack="T1_Units_Faction_3_Hex_FireTeam_DMR_AR_pack";
  };

  class T1_Units_Faction_3_Hex_MMG_Assist: O_R_Gorka_base_F
  {
    faction="T1_Units_Faction_3_Hex_Faction_3";
    side=0;
	scope = 2;
	t1_DutyMod = 0.965;
    displayName="MMG Assist";
    uniformClass="U_O_T_Soldier_F";
    weapons[]={"Laserdesignator_02_ghex_F","T1_Units_Faction_3_Hex_arifle_AK12U_F_acc_pointer_IRoptic_Holosight_blk_F","Put","Throw"};
    respawnWeapons[]={"Laserdesignator_02_ghex_F","T1_Units_Faction_3_Hex_arifle_AK12U_F_acc_pointer_IRoptic_Holosight_blk_F","Put","Throw"};
    items[]={"ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACE_Flashlight_MX991","ACE_microDAGR","ACE_MapTools","ACRE_PRC343","ACRE_PRC152"};
    respawnItems[]={"ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACE_Flashlight_MX991","ACE_microDAGR","ACE_MapTools","ACRE_PRC343","ACRE_PRC152"};
    magazines[]={"SmokeShell","SmokeShell","MiniGrenade","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F"};
    respawnMagazines[]={"SmokeShell","SmokeShell","MiniGrenade","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","Laserdesignator_02_ghex_F","H_HelmetLeaderO_ghex_F","V_HarnessO_ghex_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","Laserdesignator_02_ghex_F","H_HelmetLeaderO_ghex_F","V_HarnessO_ghex_F"};
    backpack="T1_Units_Faction_3_Hex_MMG_Assist_pack";
  };

  class T1_Units_Faction_3_Hex_MMG_Gunner: O_R_Gorka_base_F
  {
    faction="T1_Units_Faction_3_Hex_Faction_3";
    side=0;
	scope = 2;
	t1_DutyMod = 0.965;
    displayName="MMG Gunner";
    uniformClass="U_O_T_Soldier_F";
    weapons[]={"ACE_Vector","T1_Units_Faction_3_Hex_LMG_min_rf_6p69_optic_MRCO","Put","Throw"};
    respawnWeapons[]={"ACE_Vector","T1_Units_Faction_3_Hex_LMG_min_rf_6p69_optic_MRCO","Put","Throw"};
    items[]={"ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACE_Flashlight_MX991","ACE_microDAGR","ACE_MapTools","ACRE_PRC343","ACRE_PRC152"};
    respawnItems[]={"ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACE_Flashlight_MX991","ACE_microDAGR","ACE_MapTools","ACRE_PRC343","ACRE_PRC152"};
    magazines[]={"SmokeShell","SmokeShell","MiniGrenade","150Rnd_762x54_Box_Tracer","150Rnd_762x54_Box_Tracer","150Rnd_762x54_Box_Tracer"};
    respawnMagazines[]={"SmokeShell","SmokeShell","MiniGrenade","150Rnd_762x54_Box_Tracer","150Rnd_762x54_Box_Tracer","150Rnd_762x54_Box_Tracer"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ACE_Vector","H_HelmetLeaderO_ghex_F","V_HarnessO_ghex_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ACE_Vector","H_HelmetLeaderO_ghex_F","V_HarnessO_ghex_F"};
    backpack="T1_Units_Faction_3_Hex_MMG_Gunner_pack";
  };

  class T1_Units_Faction_3_Hex_MAT_Assist: O_R_Gorka_base_F
  {
    faction="T1_Units_Faction_3_Hex_Faction_3";
    side=0;
	scope = 2;
	t1_DutyMod = 0.965;
    displayName="MAT Assist";
    uniformClass="U_O_T_Soldier_F";
    weapons[]={"ACE_Vector","T1_Units_Faction_3_Hex_arifle_AK12U_F_acc_pointer_IRoptic_Holosight_blk_F","Put","Throw"};
    respawnWeapons[]={"ACE_Vector","T1_Units_Faction_3_Hex_arifle_AK12U_F_acc_pointer_IRoptic_Holosight_blk_F","Put","Throw"};
    items[]={"ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACE_MapTools","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_morphine","ACE_morphine","ACE_morphine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","O_NVGoggles_ghex_F","ACE_microDAGR","ACE_Flashlight_MX991","ACRE_PRC343","ACRE_PRC152"};
    respawnItems[]={"ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACE_MapTools","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_morphine","ACE_morphine","ACE_morphine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","O_NVGoggles_ghex_F","ACE_microDAGR","ACE_Flashlight_MX991","ACRE_PRC343","ACRE_PRC152"};
    magazines[]={"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","SmokeShell","SmokeShell","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F"};
    respawnMagazines[]={"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","SmokeShell","SmokeShell","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ACE_Vector","H_HelmetLeaderO_ghex_F","V_HarnessO_ghex_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ACE_Vector","H_HelmetLeaderO_ghex_F","V_HarnessO_ghex_F"};
    backpack="T1_Units_Faction_3_Hex_MAT_Assist_pack";
  };

  class T1_Units_Faction_3_Hex_MAT_Gunner: O_R_Gorka_base_F
  {
    faction="T1_Units_Faction_3_Hex_Faction_3";
    side=0;
	scope = 2;
	t1_DutyMod = 0.965;
    displayName="MAT Gunner";
    uniformClass="U_O_T_Soldier_F";
    weapons[]={"ACE_Vector","T1_Units_Faction_3_Hex_arifle_AK12U_F_acc_pointer_IRoptic_Holosight_blk_F","T1_Units_Faction_3_Hex_launch_O_Vorona_green_F","Put","Throw"};
    respawnWeapons[]={"ACE_Vector","T1_Units_Faction_3_Hex_arifle_AK12U_F_acc_pointer_IRoptic_Holosight_blk_F","T1_Units_Faction_3_Hex_launch_O_Vorona_green_F","Put","Throw"};
    items[]={"ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACE_Flashlight_MX991","ACE_microDAGR","ACE_MapTools","ACRE_PRC343","ACRE_PRC152","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_morphine","ACE_morphine","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_splint","ACE_splint","O_NVGoggles_ghex_F"};
    respawnItems[]={"ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACE_Flashlight_MX991","ACE_microDAGR","ACE_MapTools","ACRE_PRC343","ACRE_PRC152","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_morphine","ACE_morphine","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_splint","ACE_splint","O_NVGoggles_ghex_F"};
    magazines[]={"SmokeShell","SmokeShell","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","Vorona_HEAT","30Rnd_762x39_AK12_Mag_F"};
    respawnMagazines[]={"SmokeShell","SmokeShell","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","Vorona_HEAT","30Rnd_762x39_AK12_Mag_F"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ACE_Vector","H_HelmetLeaderO_ghex_F","V_HarnessO_ghex_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ACE_Vector","H_HelmetLeaderO_ghex_F","V_HarnessO_ghex_F"};
    backpack="T1_Units_Faction_3_Hex_MAT_Gunner_pack";
  };

  class T1_Units_Faction_3_Hex_AA_Assist: O_R_Gorka_base_F
  {
    faction="T1_Units_Faction_3_Hex_Faction_3";
    side=0;
	scope = 2;
	t1_DutyMod = 0.965;
    displayName="AA Assist";
    uniformClass="U_O_T_Soldier_F";
    weapons[]={"ACE_Vector","T1_Units_Faction_3_Hex_arifle_AK12U_F_acc_pointer_IRoptic_Holosight_blk_F","Put","Throw"};
    respawnWeapons[]={"ACE_Vector","T1_Units_Faction_3_Hex_arifle_AK12U_F_acc_pointer_IRoptic_Holosight_blk_F","Put","Throw"};
    items[]={"ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACE_MapTools","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_morphine","ACE_morphine","ACE_morphine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","O_NVGoggles_ghex_F","ACE_microDAGR","ACE_Flashlight_MX991","ACRE_PRC343","ACRE_PRC152"};
    respawnItems[]={"ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACE_MapTools","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_morphine","ACE_morphine","ACE_morphine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","O_NVGoggles_ghex_F","ACE_microDAGR","ACE_Flashlight_MX991","ACRE_PRC343","ACRE_PRC152"};
    magazines[]={"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","SmokeShell","SmokeShell","30Rnd_762x39_AK12_Mag_F"};
    respawnMagazines[]={"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","SmokeShell","SmokeShell","30Rnd_762x39_AK12_Mag_F"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ACE_Vector","H_HelmetLeaderO_ghex_F","V_HarnessO_ghex_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ACE_Vector","H_HelmetLeaderO_ghex_F","V_HarnessO_ghex_F"};
    backpack="T1_Units_Faction_3_Hex_AA_Assist_pack";
  };

  class T1_Units_Faction_3_Hex_AA_Gunner: O_R_Gorka_base_F
  {
    faction="T1_Units_Faction_3_Hex_Faction_3";
    side=0;
	scope = 2;
	t1_DutyMod = 0.965;
    displayName="AA Gunner";
    uniformClass="U_O_T_Soldier_F";
    weapons[]={"ACE_Vector","T1_Units_Faction_3_Hex_arifle_AK12U_F_acc_pointer_IRoptic_Holosight_blk_F","T1_Units_Faction_3_Hex_launch_B_Titan_olive_F","Put","Throw"};
    respawnWeapons[]={"ACE_Vector","T1_Units_Faction_3_Hex_arifle_AK12U_F_acc_pointer_IRoptic_Holosight_blk_F","T1_Units_Faction_3_Hex_launch_B_Titan_olive_F","Put","Throw"};
    items[]={"ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACE_Flashlight_MX991","ACE_microDAGR","ACE_MapTools","ACRE_PRC343","ACRE_PRC152","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_morphine","ACE_morphine","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_splint","ACE_splint","O_NVGoggles_ghex_F"};
    respawnItems[]={"ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACE_Flashlight_MX991","ACE_microDAGR","ACE_MapTools","ACRE_PRC343","ACRE_PRC152","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_morphine","ACE_morphine","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_splint","ACE_splint","O_NVGoggles_ghex_F"};
    magazines[]={"SmokeShell","SmokeShell","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","Titan_AA","30Rnd_762x39_AK12_Mag_F"};
    respawnMagazines[]={"SmokeShell","SmokeShell","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","Titan_AA","30Rnd_762x39_AK12_Mag_F"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ACE_Vector","H_HelmetLeaderO_ghex_F","V_HarnessO_ghex_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ACE_Vector","H_HelmetLeaderO_ghex_F","V_HarnessO_ghex_F"};
    backpack="T1_Units_Faction_3_Hex_AA_Gunner_pack";
  };

  class T1_Units_Faction_3_Hex_Spotter: O_R_Gorka_base_F
  {
    faction="T1_Units_Faction_3_Hex_Faction_3";
    side=0;
	scope = 2;
	attendant = 1;
	camouflage = 0.6;
	t1_DutyMod = 0.965;
	T1_NoMedicIcon = 1;
    displayName="Spotter";
    uniformClass="U_O_T_Sniper_F";
    weapons[]={"Laserdesignator_02_ghex_F","ACE_Vector","T1_Units_Faction_3_Hex_arifle_AK12_lush_F_muzzle_snds_B_lush_Foptic_Arco_AK_lush_Fbipod_02_F_lush","Put","Throw"};
    respawnWeapons[]={"Laserdesignator_02_ghex_F","ACE_Vector","T1_Units_Faction_3_Hex_arifle_AK12_lush_F_muzzle_snds_B_lush_Foptic_Arco_AK_lush_Fbipod_02_F_lush","Put","Throw"};
    items[]={"ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACE_Flashlight_MX991","ACE_microDAGR","ACE_MapTools","ACE_RangeCard","ACE_EntrenchingTool","ACRE_PRC343","O_NVGoggles_ghex_F","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV","ACE_splint","ACE_splint","ACE_splint","ACE_splint"};
    respawnItems[]={"ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACE_Flashlight_MX991","ACE_microDAGR","ACE_MapTools","ACE_RangeCard","ACE_EntrenchingTool","ACRE_PRC343","O_NVGoggles_ghex_F","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV","ACE_splint","ACE_splint","ACE_splint","ACE_splint"};
    magazines[]={"SmokeShell","SmokeShell","MiniGrenade","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","75rnd_762x39_AK12_Lush_Mag_F"};
    respawnMagazines[]={"SmokeShell","SmokeShell","MiniGrenade","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","30rnd_762x39_AK12_Lush_Mag_F","75rnd_762x39_AK12_Lush_Mag_F"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","Laserdesignator_02_ghex_F","H_HelmetLeaderO_ghex_F","V_HarnessO_ghex_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","Laserdesignator_02_ghex_F","H_HelmetLeaderO_ghex_F","V_HarnessO_ghex_F"};
    backpack="T1_Units_Faction_3_Hex_Spotter_pack";
  };

  class T1_Units_Faction_3_Hex_Sniper: O_R_Gorka_base_F
  {
    faction="T1_Units_Faction_3_Hex_Faction_3";
    side=0;
	scope = 2;
	attendant = 1;
	camouflage = 0.6;
	t1_DutyMod = 0.965;
	T1_NoMedicIcon = 1;
    displayName="Sniper";
    uniformClass="U_O_T_Sniper_F";
    weapons[]={"ACE_Vector","T1_Units_Faction_3_Hex_srifle_min_rf_orsis_t5000_muzzle_snds_338_blackoptic_LRPS","T1_Units_Faction_3_Hex_hgun_Rook40_F_muzzle_snds_L","Put","Throw"};
    respawnWeapons[]={"ACE_Vector","T1_Units_Faction_3_Hex_srifle_min_rf_orsis_t5000_muzzle_snds_338_blackoptic_LRPS","T1_Units_Faction_3_Hex_hgun_Rook40_F_muzzle_snds_L","Put","Throw"};
    items[]={"ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACE_Flashlight_MX991","ACE_microDAGR","ACE_MapTools","ACE_RangeCard","ACRE_PRC343","ACRE_PRC152"};
    respawnItems[]={"ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACE_Flashlight_MX991","ACE_microDAGR","ACE_MapTools","ACE_RangeCard","ACRE_PRC343","ACRE_PRC152"};
    magazines[]={"SmokeShell","SmokeShell","MiniGrenade","16Rnd_9x21_Mag","5Rnd_min_rf_338_Mag","5Rnd_min_rf_338_Mag","5Rnd_min_rf_338_Mag","5Rnd_min_rf_338_Mag","5Rnd_min_rf_338_Mag","5Rnd_min_rf_338_Mag","5Rnd_min_rf_338_Mag","5Rnd_min_rf_338_Mag","5Rnd_min_rf_338_Mag","5Rnd_min_rf_338_Mag","5Rnd_min_rf_338_Mag"};
    respawnMagazines[]={"SmokeShell","SmokeShell","MiniGrenade","16Rnd_9x21_Mag","5Rnd_min_rf_338_Mag","5Rnd_min_rf_338_Mag","5Rnd_min_rf_338_Mag","5Rnd_min_rf_338_Mag","5Rnd_min_rf_338_Mag","5Rnd_min_rf_338_Mag","5Rnd_min_rf_338_Mag","5Rnd_min_rf_338_Mag","5Rnd_min_rf_338_Mag","5Rnd_min_rf_338_Mag","5Rnd_min_rf_338_Mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ACE_Vector","H_HelmetLeaderO_ghex_F","V_HarnessO_ghex_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ACE_Vector","H_HelmetLeaderO_ghex_F","V_HarnessO_ghex_F"};
    backpack="T1_Units_Faction_3_Hex_Sniper_pack";
  };

  class T1_Units_Faction_3_Hex_Crew_Commander: O_R_Gorka_base_F
  {
    faction="T1_Units_Faction_3_Hex_Faction_3";
    side=0;
	scope = 2;
	attendant = 1;	
	engineer = 1;
	T1_NoMedicIcon = 1;
    displayName="Crew Commander";
    uniformClass="U_O_T_Soldier_F";
    weapons[]={"ACE_Vector","T1_Units_Faction_3_Hex_arifle_AK12U_F_acc_pointer_IRoptic_Holosight_blk_F","T1_Units_Faction_3_Hex_hgun_Rook40_F","Put","Throw"};
    respawnWeapons[]={"ACE_Vector","T1_Units_Faction_3_Hex_arifle_AK12U_F_acc_pointer_IRoptic_Holosight_blk_F","T1_Units_Faction_3_Hex_hgun_Rook40_F","Put","Throw"};
    items[]={"ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACE_Flashlight_MX991","ACE_microDAGR","ACE_MapTools","ACRE_PRC343","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_morphine","ACE_morphine","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_splint","ACE_splint","O_NVGoggles_ghex_F"};
    respawnItems[]={"ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACE_Flashlight_MX991","ACE_microDAGR","ACE_MapTools","ACRE_PRC343","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_morphine","ACE_morphine","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_splint","ACE_splint","O_NVGoggles_ghex_F"};
    magazines[]={"SmokeShell","SmokeShell","MiniGrenade","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag"};
    respawnMagazines[]={"SmokeShell","SmokeShell","MiniGrenade","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ACE_Vector","H_HelmetCrew_O_ghex_F","V_SmershVest_01_radio_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ACE_Vector","H_HelmetCrew_O_ghex_F","V_SmershVest_01_radio_F"};
    backpack="T1_Units_Faction_3_Hex_Crew_Commander_pack";
  };

  class T1_Units_Faction_3_Hex_Crew_Engineer: O_R_Gorka_base_F
  {
    faction="T1_Units_Faction_3_Hex_Faction_3";
    side=0;
	scope = 2;
	attendant = 1;	
	engineer = 1;
	T1_NoMedicIcon = 1;
    displayName="Crew Engineer";
    uniformClass="U_O_T_Soldier_F";
    weapons[]={"ACE_Vector","T1_Units_Faction_3_Hex_arifle_AK12U_F_acc_pointer_IRoptic_Holosight_blk_F","T1_Units_Faction_3_Hex_hgun_Rook40_F","Put","Throw"};
    respawnWeapons[]={"ACE_Vector","T1_Units_Faction_3_Hex_arifle_AK12U_F_acc_pointer_IRoptic_Holosight_blk_F","T1_Units_Faction_3_Hex_hgun_Rook40_F","Put","Throw"};
    items[]={"ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACE_Flashlight_MX991","ACE_microDAGR","ACE_MapTools","ACRE_PRC343","ACRE_PRC152"};
    respawnItems[]={"ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACE_Flashlight_MX991","ACE_microDAGR","ACE_MapTools","ACRE_PRC343","ACRE_PRC152"};
    magazines[]={"SmokeShell","SmokeShell","MiniGrenade","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag"};
    respawnMagazines[]={"SmokeShell","SmokeShell","MiniGrenade","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ACE_Vector","H_HelmetCrew_O_ghex_F","V_SmershVest_01_radio_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ACE_Vector","H_HelmetCrew_O_ghex_F","V_SmershVest_01_radio_F"};
    backpack="T1_Units_Faction_3_Hex_Crew_Engineer_pack";
  };

  class T1_Units_Faction_3_Hex_Crew_CLS: O_R_Gorka_base_F
  {
    faction="T1_Units_Faction_3_Hex_Faction_3";
    side=0;
	scope = 2;
	attendant = 1;	
	engineer = 1;
    displayName="Crew CLS";
    uniformClass="U_O_T_Soldier_F";
    weapons[]={"ACE_Vector","T1_Units_Faction_3_Hex_arifle_AK12U_F_acc_pointer_IRoptic_Holosight_blk_F","T1_Units_Faction_3_Hex_hgun_Rook40_F","Put","Throw"};
    respawnWeapons[]={"ACE_Vector","T1_Units_Faction_3_Hex_arifle_AK12U_F_acc_pointer_IRoptic_Holosight_blk_F","T1_Units_Faction_3_Hex_hgun_Rook40_F","Put","Throw"};
    items[]={"ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACE_Flashlight_MX991","ACE_microDAGR","ACE_MapTools","ACRE_PRC343","ACRE_PRC152"};
    respawnItems[]={"ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACE_Flashlight_MX991","ACE_microDAGR","ACE_MapTools","ACRE_PRC343","ACRE_PRC152"};
    magazines[]={"SmokeShell","SmokeShell","MiniGrenade","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag"};
    respawnMagazines[]={"SmokeShell","SmokeShell","MiniGrenade","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ACE_Vector","H_HelmetCrew_O_ghex_F","V_SmershVest_01_radio_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ACE_Vector","H_HelmetCrew_O_ghex_F","V_SmershVest_01_radio_F"};
    backpack="T1_Units_Faction_3_Hex_Crew_CLS_pack";
  };

  class T1_Units_Faction_3_Hex_FireTeam_DMR_AT: O_R_Gorka_base_F
  {
    faction="T1_Units_Faction_3_Hex_Faction_3";
    side=0;
	scope = 2;
    displayName="FireTeam DMR (AT)";
    uniformClass="U_O_T_Soldier_F";
    weapons[]={"ACE_Vector","T1_Units_Faction_3_Hex_srifle_DMR_01_F_acc_pointer_IRoptic_DMSbipod_02_F_blk","T1_Units_Faction_3_Hex_hgun_Rook40_F","Put","Throw"};
    respawnWeapons[]={"ACE_Vector","T1_Units_Faction_3_Hex_srifle_DMR_01_F_acc_pointer_IRoptic_DMSbipod_02_F_blk","T1_Units_Faction_3_Hex_hgun_Rook40_F","Put","Throw"};
    items[]={"ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACE_Flashlight_MX991","ACE_microDAGR","ACE_MapTools","ACE_RangeCard","ACRE_PRC343","ACRE_PRC152"};
    respawnItems[]={"ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACE_Flashlight_MX991","ACE_microDAGR","ACE_MapTools","ACE_RangeCard","ACRE_PRC343","ACRE_PRC152"};
    magazines[]={"SmokeShell","SmokeShell","MiniGrenade","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag"};
    respawnMagazines[]={"SmokeShell","SmokeShell","MiniGrenade","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ACE_Vector","H_HelmetLeaderO_ghex_F","V_HarnessO_ghex_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ACE_Vector","H_HelmetLeaderO_ghex_F","V_HarnessO_ghex_F"};
    backpack="T1_Units_Faction_3_Hex_FireTeam_DMR_AT_pack";
  };

  class T1_Units_Faction_3_Hex_FireTeam_CLS: O_R_Gorka_base_F
  {
    faction="T1_Units_Faction_3_Hex_Faction_3";
    side=0;
	scope = 2;
	attendant = 1;
    displayName="FireTeam CLS";
    uniformClass="U_O_T_Soldier_F";
    weapons[]={"ACE_Vector","T1_Units_Faction_3_Hex_arifle_AK12_F_acc_pointer_IRoptic_Holosight_blk_F","Put","Throw"};
    respawnWeapons[]={"ACE_Vector","T1_Units_Faction_3_Hex_arifle_AK12_F_acc_pointer_IRoptic_Holosight_blk_F","Put","Throw"};
    items[]={"ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACE_Flashlight_MX991","ACE_microDAGR","ACE_MapTools","ACRE_PRC343","ACRE_PRC152"};
    respawnItems[]={"ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACE_Flashlight_MX991","ACE_microDAGR","ACE_MapTools","ACRE_PRC343","ACRE_PRC152"};
    magazines[]={"SmokeShell","SmokeShell","MiniGrenade","MiniGrenade","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F"};
    respawnMagazines[]={"SmokeShell","SmokeShell","MiniGrenade","MiniGrenade","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ACE_Vector","H_HelmetLeaderO_ghex_F","V_HarnessO_ghex_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ACE_Vector","H_HelmetLeaderO_ghex_F","V_HarnessO_ghex_F"};
    backpack="T1_Units_Faction_3_Hex_FireTeam_CLS_pack";
  };

  class T1_Units_Faction_3_Hex_Pilot: O_R_Gorka_base_F
  {
    faction="T1_Units_Faction_3_Hex_Faction_3";
    side=0;
	scope = 2;
	attendant = 1;	
	engineer = 1;
	T1_NoMedicIcon = 1;
    displayName="Pilot";
    uniformClass="U_O_PilotCoveralls";
    weapons[]={"ACE_Vector","T1_Units_Faction_3_Hex_SMG_02_F_acc_pointer_IRoptic_Holosight_smg_blk_F","T1_Units_Faction_3_Hex_hgun_Rook40_F","Put","Throw"};
    respawnWeapons[]={"ACE_Vector","T1_Units_Faction_3_Hex_SMG_02_F_acc_pointer_IRoptic_Holosight_smg_blk_F","T1_Units_Faction_3_Hex_hgun_Rook40_F","Put","Throw"};
    items[]={"ACE_EarPlugs","ACE_MapTools","ACE_IR_Strobe_Item","ACE_CableTie","ACE_CableTie","ACE_microDAGR","ACE_Flashlight_XL50","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACRE_PRC343","ACE_morphine","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_epinephrine","ACE_epinephrine","ACE_splint","ACE_splint","ACE_splint","ACE_splint"};
    respawnItems[]={"ACE_EarPlugs","ACE_MapTools","ACE_IR_Strobe_Item","ACE_CableTie","ACE_CableTie","ACE_microDAGR","ACE_Flashlight_XL50","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACRE_PRC343","ACE_morphine","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_epinephrine","ACE_epinephrine","ACE_splint","ACE_splint","ACE_splint","ACE_splint"};
    magazines[]={"30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02"};
    respawnMagazines[]={"30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","O_NVGoggles_grn_F","ACE_Vector","H_PilotHelmetHeli_O","V_Rangemaster_belt","O_NVGoggles_grn_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","O_NVGoggles_grn_F","ACE_Vector","H_PilotHelmetHeli_O","V_Rangemaster_belt","O_NVGoggles_grn_F"};
    backpack="T1_Units_Faction_3_Hex_Pilot_pack";
  };

  class T1_Units_Faction_3_Hex_BM2T_Stalker: O_T_APC_Tracked_02_cannon_ghex_F
  {
    faction="T1_Units_Faction_3_Hex_Faction_3";
    side=0;		
	scope = 2;
	scopeCurator = 2;	
	scopeArsenal = 2;
	transportMaxWeapons = 999;
	transportMaxMagazines = 9999;
	transportMaxBackpacks = 99;
	transportMaxItems = 9999;
    displayName="BM-2T Stalker";
    hiddenSelectionsTextures[]={"a3\armor_f_exp\apc_tracked_02\data\apc_tracked_02_ext_01_ghex_co.paa","a3\armor_f_exp\apc_tracked_02\data\apc_tracked_02_ext_02_ghex_co.paa","a3\armor_f_exp\apc_tracked_02\data\rcws30_ghex_co.paa","a3\armor_f\data\camonet_csat_hex_green_co.paa","a3\armor_f\data\cage_csat_green_co.paa"};
    crew="T1_Units_Faction_3_Hex_Crew_Engineer";
    typicalCargo[]={"T1_Units_Faction_3_Hex_Crew_Engineer"};
	class TransportMagazines
		{
			class _xx_30Rnd_762x39_AK12_Mag_F {magazine="30Rnd_762x39_AK12_Mag_F";count=52;};
			class _xx_75rnd_762x39_AK12_Mag_Tracer_F {magazine="75rnd_762x39_AK12_Mag_Tracer_F";count=22;};
			class _xx_10Rnd_762x54_Mag {magazine="10Rnd_762x54_Mag";count=18;};
			class _xx_HandGrenade {magazine="HandGrenade";count=12;};
			class _xx_1Rnd_HE_Grenade_shell {magazine="1Rnd_HE_Grenade_shell";count=12;};
			class _xx_SmokeShell {magazine="SmokeShell";count=12;};
			class _xx_SmokeShellRed {magazine="SmokeShellRed";count=12;};		
			class _xx_RPG32_F {magazine="RPG32_F";count=6;};						
		};
		class TransportItems
		{
			class _xx_ACE_fieldDressing {count=80;name="ACE_fieldDressing";};
			class _xx_ACE_morphine {count=20;name="ACE_morphine";};
			class _xx_ACE_epinephrine {count=20;name="ACE_epinephrine";};
			class _xx_ACE_tourniquet {count=20;name="ACE_tourniquet";};
			class _xx_ACE_surgicalKit {count=1;name="ACE_surgicalKit";};
			class _xx_ACE_bloodIV_1000 {count=20;name="ACE_bloodIV";};
			class _xx_ACE_splint {count=20;name="ACE_splint";};
			class _xx_ACE_CableTie {count=20;name="ACE_CableTie";};
			class _xx_ACRE_PRC152 {count=2;name="ACRE_PRC152";};
			class _xx_ACRE_PRC117F {count=1;name="ACRE_PRC117F";};
		};
		class TransportWeapons
		{
			class _xx_launch_RPG32_green_F {weapon="launch_RPG32_green_F";count=1;};	
			class _xx_T1_Units_Faction_3_Hex_arifle_AK12_F_acc_pointer_IRoptic_Holosight_blk_F {weapon="T1_Units_Faction_3_Hex_arifle_AK12_F_acc_pointer_IRoptic_Holosight_blk_F";count=2;};		
		};
		
		class TransportBackpacks
		{			
			class _xx_B_ViperLightHarness_ghex_F {count=2;backpack="B_ViperLightHarness_ghex_F";};
		};		
	};

  class T1_Units_Faction_3_Hex_Takhion_AT: O_T_LSV_02_AT_F
  {
    faction="T1_Units_Faction_3_Hex_Faction_3";
    side=0;		
	scope = 2;
	scopeCurator = 2;	
	scopeArsenal = 2;
	transportMaxWeapons = 999;
	transportMaxMagazines = 9999;
	transportMaxBackpacks = 99;
	transportMaxItems = 9999;
    displayName="Takhion (AT)";
    hiddenSelectionsTextures[]={"a3\soft_f_exp\lsv_02\data\csat_lsv_01_ghex_co.paa","a3\soft_f_exp\lsv_02\data\csat_lsv_02_ghex_co.paa","a3\soft_f_exp\lsv_02\data\csat_lsv_03_ghex_co.paa","a3\weapons_f_tank\launchers\vorona\data\vorona_green_f_co.paa","a3\weapons_f_tank\launchers\vorona\data\vorona_green_f_co.paa"};
    crew="T1_Units_Faction_3_Hex_Platoon_Leader";
    typicalCargo[]={"T1_Units_Faction_3_Hex_Platoon_Leader"};
	class TransportMagazines
		{
			class _xx_30Rnd_762x39_AK12_Mag_F {magazine="30Rnd_762x39_AK12_Mag_F";count=24;};
			class _xx_75rnd_762x39_AK12_Mag_Tracer_F {magazine="75rnd_762x39_AK12_Mag_Tracer_F";count=8;};
			class _xx_10Rnd_762x54_Mag {magazine="10Rnd_762x54_Mag";count=8;};
			class _xx_HandGrenade {magazine="HandGrenade";count=6;};
			class _xx_1Rnd_HE_Grenade_shell {magazine="1Rnd_HE_Grenade_shell";count=6;};
			class _xx_SmokeShell {magazine="SmokeShell";count=6;};
			class _xx_SmokeShellRed {magazine="SmokeShellRed";count=6;};		
			class _xx_RPG32_F {magazine="RPG32_F";count=3;};						
		};
		class TransportItems
		{
			class _xx_ACE_fieldDressing {count=40;name="ACE_fieldDressing";};
			class _xx_ACE_morphine {count=10;name="ACE_morphine";};
			class _xx_ACE_epinephrine {count=10;name="ACE_epinephrine";};
			class _xx_ACE_tourniquet {count=8;name="ACE_tourniquet";};
			class _xx_ACE_surgicalKit {count=1;name="ACE_surgicalKit";};
			class _xx_ACE_bloodIV_1000 {count=10;name="ACE_bloodIV";};
			class _xx_ACE_splint {count=10;name="ACE_splint";};
		};
		class TransportWeapons
		{
			class _xx_launch_RPG32_green_F {weapon="launch_RPG32_green_F";count=1;};	
			class _xx_T1_Units_Faction_3_Hex_arifle_AK12_F_acc_pointer_IRoptic_Holosight_blk_F {weapon="T1_Units_Faction_3_Hex_arifle_AK12_F_acc_pointer_IRoptic_Holosight_blk_F";count=1;};		
		};
		
		class TransportBackpacks
		{			
			class _xx_B_ViperLightHarness_ghex_F {count=1;backpack="B_ViperLightHarness_ghex_F";};
		};		
	};

  class T1_Units_Faction_3_Hex_Takhion_MG: O_T_LSV_02_armed_F
  {
    faction="T1_Units_Faction_3_Hex_Faction_3";
    side=0;		
	scope = 2;
	scopeCurator = 2;	
	scopeArsenal = 2;
	transportMaxWeapons = 999;
	transportMaxMagazines = 9999;
	transportMaxBackpacks = 99;
	transportMaxItems = 9999;
    displayName="Takhion (MG)";
    hiddenSelectionsTextures[]={"a3\soft_f_exp\lsv_02\data\csat_lsv_01_ghex_co.paa","a3\soft_f_exp\lsv_02\data\csat_lsv_02_ghex_co.paa","a3\soft_f_exp\lsv_02\data\csat_lsv_03_ghex_co.paa"};
    crew="T1_Units_Faction_3_Hex_Platoon_Leader";
    typicalCargo[]={"T1_Units_Faction_3_Hex_Platoon_Leader"};
	class TransportMagazines
		{
			class _xx_30Rnd_762x39_AK12_Mag_F {magazine="30Rnd_762x39_AK12_Mag_F";count=24;};
			class _xx_75rnd_762x39_AK12_Mag_Tracer_F {magazine="75rnd_762x39_AK12_Mag_Tracer_F";count=8;};
			class _xx_10Rnd_762x54_Mag {magazine="10Rnd_762x54_Mag";count=8;};
			class _xx_HandGrenade {magazine="HandGrenade";count=6;};
			class _xx_1Rnd_HE_Grenade_shell {magazine="1Rnd_HE_Grenade_shell";count=6;};
			class _xx_SmokeShell {magazine="SmokeShell";count=6;};
			class _xx_SmokeShellRed {magazine="SmokeShellRed";count=6;};		
			class _xx_RPG32_F {magazine="RPG32_F";count=3;};						
		};
		class TransportItems
		{
			class _xx_ACE_fieldDressing {count=40;name="ACE_fieldDressing";};
			class _xx_ACE_morphine {count=10;name="ACE_morphine";};
			class _xx_ACE_epinephrine {count=10;name="ACE_epinephrine";};
			class _xx_ACE_tourniquet {count=8;name="ACE_tourniquet";};
			class _xx_ACE_surgicalKit {count=1;name="ACE_surgicalKit";};
			class _xx_ACE_bloodIV_1000 {count=10;name="ACE_bloodIV";};
			class _xx_ACE_splint {count=10;name="ACE_splint";};
		};
		class TransportWeapons
		{
			class _xx_launch_RPG32_green_F {weapon="launch_RPG32_green_F";count=1;};	
			class _xx_T1_Units_Faction_3_Hex_arifle_AK12_F_acc_pointer_IRoptic_Holosight_blk_F {weapon="T1_Units_Faction_3_Hex_arifle_AK12_F_acc_pointer_IRoptic_Holosight_blk_F";count=1;};		
		};
		
		class TransportBackpacks
		{			
			class _xx_B_ViperLightHarness_ghex_F {count=1;backpack="B_ViperLightHarness_ghex_F";};
		};		
	};

  class T1_Units_Faction_3_Hex_Takhion: O_T_LSV_02_unarmed_F
  {
    faction="T1_Units_Faction_3_Hex_Faction_3";
    side=0;		
	scope = 2;
	scopeCurator = 2;	
	scopeArsenal = 2;
	transportMaxWeapons = 999;
	transportMaxMagazines = 9999;
	transportMaxBackpacks = 99;
	transportMaxItems = 9999;
    displayName="Takhion";
    hiddenSelectionsTextures[]={"a3\soft_f_exp\lsv_02\data\csat_lsv_01_ghex_co.paa","a3\soft_f_exp\lsv_02\data\csat_lsv_02_ghex_co.paa","a3\soft_f_exp\lsv_02\data\csat_lsv_03_ghex_co.paa"};
    crew="T1_Units_Faction_3_Hex_Platoon_Leader";
    typicalCargo[]={"T1_Units_Faction_3_Hex_Platoon_Leader"};
	class TransportMagazines
		{
			class _xx_30Rnd_762x39_AK12_Mag_F {magazine="30Rnd_762x39_AK12_Mag_F";count=24;};
			class _xx_75rnd_762x39_AK12_Mag_Tracer_F {magazine="75rnd_762x39_AK12_Mag_Tracer_F";count=8;};
			class _xx_10Rnd_762x54_Mag {magazine="10Rnd_762x54_Mag";count=8;};
			class _xx_HandGrenade {magazine="HandGrenade";count=6;};
			class _xx_1Rnd_HE_Grenade_shell {magazine="1Rnd_HE_Grenade_shell";count=6;};
			class _xx_SmokeShell {magazine="SmokeShell";count=6;};
			class _xx_SmokeShellRed {magazine="SmokeShellRed";count=6;};		
			class _xx_RPG32_F {magazine="RPG32_F";count=3;};						
		};
		class TransportItems
		{
			class _xx_ACE_fieldDressing {count=40;name="ACE_fieldDressing";};
			class _xx_ACE_morphine {count=10;name="ACE_morphine";};
			class _xx_ACE_epinephrine {count=10;name="ACE_epinephrine";};
			class _xx_ACE_tourniquet {count=8;name="ACE_tourniquet";};
			class _xx_ACE_surgicalKit {count=1;name="ACE_surgicalKit";};
			class _xx_ACE_bloodIV_1000 {count=10;name="ACE_bloodIV";};
			class _xx_ACE_splint {count=10;name="ACE_splint";};
		};
		class TransportWeapons
		{
			class _xx_launch_RPG32_green_F {weapon="launch_RPG32_green_F";count=1;};	
			class _xx_T1_Units_Faction_3_Hex_arifle_AK12_F_acc_pointer_IRoptic_Holosight_blk_F {weapon="T1_Units_Faction_3_Hex_arifle_AK12_F_acc_pointer_IRoptic_Holosight_blk_F";count=1;};		
		};
		
		class TransportBackpacks
		{			
			class _xx_B_ViperLightHarness_ghex_F {count=1;backpack="B_ViperLightHarness_ghex_F";};
		};		
	};

  class T1_Units_Faction_3_Hex_T140_Angara: O_T_MBT_04_cannon_F
  {
    faction="T1_Units_Faction_3_Hex_Faction_3";
    side=0;		
	scope = 2;
	scopeCurator = 2;	
	scopeArsenal = 2;
	transportMaxWeapons = 999;
	transportMaxMagazines = 9999;
	transportMaxBackpacks = 99;
	transportMaxItems = 9999;
    displayName="T140 Angara";
    hiddenSelectionsTextures[]={"a3\armor_f_tank\mbt_04\data\mbt_04_exterior_green_hex_1_co.paa","a3\armor_f_tank\mbt_04\data\mbt_04_exterior_green_hex_2_co.paa","a3\armor_f\data\camonet_csat_hex_green_co.paa"};
    crew="T1_Units_Faction_3_Hex_Crew_Engineer";
    typicalCargo[]={"T1_Units_Faction_3_Hex_Crew_Engineer"};
	class TransportMagazines
		{
			class _xx_30Rnd_762x39_AK12_Mag_F {magazine="30Rnd_762x39_AK12_Mag_F";count=8;};
			class _xx_HandGrenade {magazine="HandGrenade";count=6;};
			class _xx_SmokeShell {magazine="SmokeShell";count=6;};						
		};
		class TransportItems
		{
			class _xx_ACE_fieldDressing {count=20;name="ACE_fieldDressing";};
			class _xx_ACE_morphine {count=6;name="ACE_morphine";};
			class _xx_ACE_epinephrine {count=6;name="ACE_epinephrine";};
			class _xx_ACE_tourniquet {count=4;name="ACE_tourniquet";};
			class _xx_ACE_surgicalKit {count=1;name="ACE_surgicalKit";};
			class _xx_ACE_bloodIV_1000 {count=4;name="ACE_bloodIV";};
			class _xx_ACE_splint {count=4;name="ACE_splint";};
			class _xx_ToolKit {count=1;name="ToolKit";};
		};
		class TransportWeapons
		{
			class _xx_launch_RPG32_green_F {weapon="launch_RPG32_green_F";count=0;};	
			class _xx_T1_Units_Faction_3_Hex_arifle_AK12_F_acc_pointer_IRoptic_Holosight_blk_F {weapon="T1_Units_Faction_3_Hex_arifle_AK12_F_acc_pointer_IRoptic_Holosight_blk_F";count=0;};		
		};
		
		class TransportBackpacks
		{			
			class _xx_B_ViperLightHarness_ghex_F {count=0;backpack="B_ViperLightHarness_ghex_F";};
		};		
	};

  class T1_Units_Faction_3_Hex_T140K_Angara: O_T_MBT_04_command_F
  {
    faction="T1_Units_Faction_3_Hex_Faction_3";
    side=0;		
	scope = 2;
	scopeCurator = 2;	
	scopeArsenal = 2;
	transportMaxWeapons = 999;
	transportMaxMagazines = 9999;
	transportMaxBackpacks = 99;
	transportMaxItems = 9999;
    displayName="T140K Angara";
    hiddenSelectionsTextures[]={"a3\armor_f_tank\mbt_04\data\mbt_04_exterior_green_hex_1_co.paa","a3\armor_f_tank\mbt_04\data\mbt_04_exterior_green_hex_2_co.paa","a3\armor_f\data\camonet_csat_hex_green_co.paa"};
    crew="T1_Units_Faction_3_Hex_Crew_Engineer";
    typicalCargo[]={"T1_Units_Faction_3_Hex_Crew_Engineer"};
	class TransportMagazines
		{
			class _xx_30Rnd_762x39_AK12_Mag_F {magazine="30Rnd_762x39_AK12_Mag_F";count=8;};
			class _xx_HandGrenade {magazine="HandGrenade";count=6;};
			class _xx_SmokeShell {magazine="SmokeShell";count=6;};						
		};
		class TransportItems
		{
			class _xx_ACE_fieldDressing {count=20;name="ACE_fieldDressing";};
			class _xx_ACE_morphine {count=6;name="ACE_morphine";};
			class _xx_ACE_epinephrine {count=6;name="ACE_epinephrine";};
			class _xx_ACE_tourniquet {count=4;name="ACE_tourniquet";};
			class _xx_ACE_surgicalKit {count=1;name="ACE_surgicalKit";};
			class _xx_ACE_bloodIV_1000 {count=4;name="ACE_bloodIV";};
			class _xx_ACE_splint {count=4;name="ACE_splint";};
			class _xx_ToolKit {count=1;name="ToolKit";};
		};
		class TransportWeapons
		{
			class _xx_launch_RPG32_green_F {weapon="launch_RPG32_green_F";count=0;};	
			class _xx_T1_Units_Faction_3_Hex_arifle_AK12_F_acc_pointer_IRoptic_Holosight_blk_F {weapon="T1_Units_Faction_3_Hex_arifle_AK12_F_acc_pointer_IRoptic_Holosight_blk_F";count=0;};		
		};
		
		class TransportBackpacks
		{			
			class _xx_B_ViperLightHarness_ghex_F {count=0;backpack="B_ViperLightHarness_ghex_F";};
		};		
	};

  class T1_Units_Faction_3_Hex_GAZ_2330: min_rf_gaz_2330
  {
    faction="T1_Units_Faction_3_Hex_Faction_3";
    side=0;		
	scope = 2;
	scopeCurator = 2;	
	scopeArsenal = 2;
	transportMaxWeapons = 999;
	transportMaxMagazines = 9999;
	transportMaxBackpacks = 99;
	transportMaxItems = 9999;
    displayName="GAZ 2330";
    hiddenSelectionsTextures[]={"min_rf_vehicle\data\gaz_2330_ext_co.paa","min_rf_vehicle\data\gaz_2330_int_co.paa"};
    crew="T1_Units_Faction_3_Hex_Platoon_Leader";
    typicalCargo[]={"T1_Units_Faction_3_Hex_Platoon_Leader"};
	class TransportMagazines
		{
			class _xx_30Rnd_762x39_AK12_Mag_F {magazine="30Rnd_762x39_AK12_Mag_F";count=24;};
			class _xx_75rnd_762x39_AK12_Mag_Tracer_F {magazine="75rnd_762x39_AK12_Mag_Tracer_F";count=8;};
			class _xx_10Rnd_762x54_Mag {magazine="10Rnd_762x54_Mag";count=8;};
			class _xx_HandGrenade {magazine="HandGrenade";count=6;};
			class _xx_1Rnd_HE_Grenade_shell {magazine="1Rnd_HE_Grenade_shell";count=6;};
			class _xx_SmokeShell {magazine="SmokeShell";count=6;};
			class _xx_SmokeShellRed {magazine="SmokeShellRed";count=6;};		
			class _xx_RPG32_F {magazine="RPG32_F";count=3;};						
		};
		class TransportItems
		{
			class _xx_ACE_fieldDressing {count=40;name="ACE_fieldDressing";};
			class _xx_ACE_morphine {count=10;name="ACE_morphine";};
			class _xx_ACE_epinephrine {count=10;name="ACE_epinephrine";};
			class _xx_ACE_tourniquet {count=8;name="ACE_tourniquet";};
			class _xx_ACE_surgicalKit {count=1;name="ACE_surgicalKit";};
			class _xx_ACE_bloodIV_1000 {count=10;name="ACE_bloodIV";};
			class _xx_ACE_splint {count=10;name="ACE_splint";};
		};
		class TransportWeapons
		{
			class _xx_launch_RPG32_green_F {weapon="launch_RPG32_green_F";count=1;};	
			class _xx_T1_Units_Faction_3_Hex_arifle_AK12_F_acc_pointer_IRoptic_Holosight_blk_F {weapon="T1_Units_Faction_3_Hex_arifle_AK12_F_acc_pointer_IRoptic_Holosight_blk_F";count=1;};		
		};
		
		class TransportBackpacks
		{			
			class _xx_B_ViperLightHarness_ghex_F {count=1;backpack="B_ViperLightHarness_ghex_F";};
		};		
	};

  class T1_Units_Faction_3_Hex_GAZ_2330_CROW: min_rf_gaz_2330_HMG
  {
    faction="T1_Units_Faction_3_Hex_Faction_3";
    side=0;		
	scope = 2;
	scopeCurator = 2;	
	scopeArsenal = 2;
	transportMaxWeapons = 999;
	transportMaxMagazines = 9999;
	transportMaxBackpacks = 99;
	transportMaxItems = 9999;
    displayName="GAZ 2330 (CROW)";
    hiddenSelectionsTextures[]={"min_rf_vehicle\data\gaz_2330_ext_co.paa","min_rf_vehicle\data\gaz_2330_int_co.paa","min_rf_vehicle\data\arbalet_dm_co.paa","min_rf_vehicle\data\numbers\1_ca.paa","min_rf_vehicle\data\numbers\0_ca.paa"};
    crew="T1_Units_Faction_3_Hex_Platoon_Leader";
    typicalCargo[]={"T1_Units_Faction_3_Hex_Platoon_Leader"};
	class TransportMagazines
		{
			class _xx_30Rnd_762x39_AK12_Mag_F {magazine="30Rnd_762x39_AK12_Mag_F";count=24;};
			class _xx_75rnd_762x39_AK12_Mag_Tracer_F {magazine="75rnd_762x39_AK12_Mag_Tracer_F";count=8;};
			class _xx_10Rnd_762x54_Mag {magazine="10Rnd_762x54_Mag";count=8;};
			class _xx_HandGrenade {magazine="HandGrenade";count=6;};
			class _xx_1Rnd_HE_Grenade_shell {magazine="1Rnd_HE_Grenade_shell";count=6;};
			class _xx_SmokeShell {magazine="SmokeShell";count=6;};
			class _xx_SmokeShellRed {magazine="SmokeShellRed";count=6;};		
			class _xx_RPG32_F {magazine="RPG32_F";count=3;};						
		};
		class TransportItems
		{
			class _xx_ACE_fieldDressing {count=40;name="ACE_fieldDressing";};
			class _xx_ACE_morphine {count=10;name="ACE_morphine";};
			class _xx_ACE_epinephrine {count=10;name="ACE_epinephrine";};
			class _xx_ACE_tourniquet {count=8;name="ACE_tourniquet";};
			class _xx_ACE_surgicalKit {count=1;name="ACE_surgicalKit";};
			class _xx_ACE_bloodIV_1000 {count=10;name="ACE_bloodIV";};
			class _xx_ACE_splint {count=10;name="ACE_splint";};
		};
		class TransportWeapons
		{
			class _xx_launch_RPG32_green_F {weapon="launch_RPG32_green_F";count=1;};	
			class _xx_T1_Units_Faction_3_Hex_arifle_AK12_F_acc_pointer_IRoptic_Holosight_blk_F {weapon="T1_Units_Faction_3_Hex_arifle_AK12_F_acc_pointer_IRoptic_Holosight_blk_F";count=1;};		
		};
		
		class TransportBackpacks
		{			
			class _xx_B_ViperLightHarness_ghex_F {count=1;backpack="B_ViperLightHarness_ghex_F";};
		};		
	};

  class T1_Units_Faction_3_Hex_KA60_Kasatka: O_Heli_Light_02_unarmed_F
  {
    faction="T1_Units_Faction_3_Hex_Faction_3";
    side=0;		
	scope = 2;
	scopeCurator = 2;	
	scopeArsenal = 2;
	transportMaxWeapons = 999;
	transportMaxMagazines = 9999;
	transportMaxBackpacks = 99;
	transportMaxItems = 9999;
    displayName="KA60 Kasatka";
    hiddenSelectionsTextures[]={"a3\air_f\heli_light_02\data\heli_light_02_ext_co.paa"};
    crew="T1_Units_Faction_3_Hex_Pilot";
    typicalCargo[]={"T1_Units_Faction_3_Hex_Pilot"};
	class TransportMagazines
		{
			class _xx_30Rnd_762x39_AK12_Mag_F {magazine="30Rnd_762x39_AK12_Mag_F";count=24;};
			class _xx_75rnd_762x39_AK12_Mag_Tracer_F {magazine="75rnd_762x39_AK12_Mag_Tracer_F";count=8;};
			class _xx_10Rnd_762x54_Mag {magazine="10Rnd_762x54_Mag";count=8;};
			class _xx_HandGrenade {magazine="HandGrenade";count=6;};
			class _xx_1Rnd_HE_Grenade_shell {magazine="1Rnd_HE_Grenade_shell";count=6;};
			class _xx_SmokeShell {magazine="SmokeShell";count=6;};
			class _xx_SmokeShellRed {magazine="SmokeShellRed";count=6;};						
		};
		class TransportItems
		{
			class _xx_ACE_fieldDressing {count=40;name="ACE_fieldDressing";};
			class _xx_ACE_morphine {count=10;name="ACE_morphine";};
			class _xx_ACE_epinephrine {count=10;name="ACE_epinephrine";};
			class _xx_ACE_tourniquet {count=8;name="ACE_tourniquet";};
			class _xx_ACE_surgicalKit {count=1;name="ACE_surgicalKit";};
			class _xx_ACE_bloodIV_1000 {count=10;name="ACE_bloodIV";};
			class _xx_ACE_splint {count=10;name="ACE_splint";};
			class _xx_ToolKit {count=1;name="ToolKit";};
		};
		class TransportWeapons
		{
			class _xx_launch_RPG32_green_F {weapon="launch_RPG32_green_F";count=0;};	
			class _xx_T1_Units_Faction_3_Hex_arifle_AK12_F_acc_pointer_IRoptic_Holosight_blk_F {weapon="T1_Units_Faction_3_Hex_arifle_AK12_F_acc_pointer_IRoptic_Holosight_blk_F";count=0;};		
		};
		
		class TransportBackpacks
		{			
			class _xx_B_ViperLightHarness_ghex_F {count=0;backpack="B_ViperLightHarness_ghex_F";};
		};		
	};

  class T1_Units_Faction_3_Hex_MI48_Kajman: O_Heli_Attack_02_dynamicLoadout_F
  {
    faction="T1_Units_Faction_3_Hex_Faction_3";
    side=0;		
	scope = 2;
	scopeCurator = 2;	
	scopeArsenal = 2;
	transportMaxWeapons = 999;
	transportMaxMagazines = 9999;
	transportMaxBackpacks = 99;
	transportMaxItems = 9999;
    displayName="MI48 Kajman";
    hiddenSelectionsTextures[]={"a3\air_f_beta\heli_attack_02\data\heli_attack_02_body1_black_co.paa","a3\air_f_beta\heli_attack_02\data\heli_attack_02_body2_black_co.paa"};
    crew="T1_Units_Faction_3_Hex_Pilot";
    typicalCargo[]={"T1_Units_Faction_3_Hex_Pilot"};
	class TransportMagazines
		{
			class _xx_30Rnd_762x39_AK12_Mag_F {magazine="30Rnd_762x39_AK12_Mag_F";count=24;};
			class _xx_75rnd_762x39_AK12_Mag_Tracer_F {magazine="75rnd_762x39_AK12_Mag_Tracer_F";count=8;};
			class _xx_10Rnd_762x54_Mag {magazine="10Rnd_762x54_Mag";count=8;};
			class _xx_HandGrenade {magazine="HandGrenade";count=6;};
			class _xx_1Rnd_HE_Grenade_shell {magazine="1Rnd_HE_Grenade_shell";count=6;};
			class _xx_SmokeShell {magazine="SmokeShell";count=6;};
			class _xx_SmokeShellRed {magazine="SmokeShellRed";count=6;};						
		};
		class TransportItems
		{
			class _xx_ACE_fieldDressing {count=40;name="ACE_fieldDressing";};
			class _xx_ACE_morphine {count=10;name="ACE_morphine";};
			class _xx_ACE_epinephrine {count=10;name="ACE_epinephrine";};
			class _xx_ACE_tourniquet {count=8;name="ACE_tourniquet";};
			class _xx_ACE_surgicalKit {count=1;name="ACE_surgicalKit";};
			class _xx_ACE_bloodIV_1000 {count=10;name="ACE_bloodIV";};
			class _xx_ACE_splint {count=10;name="ACE_splint";};
			class _xx_ToolKit {count=1;name="ToolKit";};
		};
		class TransportWeapons
		{
			class _xx_launch_RPG32_green_F {weapon="launch_RPG32_green_F";count=0;};	
			class _xx_T1_Units_Faction_3_Hex_arifle_AK12_F_acc_pointer_IRoptic_Holosight_blk_F {weapon="T1_Units_Faction_3_Hex_arifle_AK12_F_acc_pointer_IRoptic_Holosight_blk_F";count=0;};		
		};
		
		class TransportBackpacks
		{			
			class _xx_B_ViperLightHarness_ghex_F {count=0;backpack="B_ViperLightHarness_ghex_F";};
		};		
	};

  class T1_Units_Faction_3_Hex_Takhion_AT_AA: O_T_LSV_02_AT_F
  {
    faction="T1_Units_Faction_3_Hex_Faction_3";
    side=0;		
	scope = 2;
	scopeCurator = 2;	
	scopeArsenal = 2;
	transportMaxWeapons = 999;
	transportMaxMagazines = 9999;
	transportMaxBackpacks = 99;
	transportMaxItems = 9999;
    displayName="Takhion AT (AA)";
    hiddenSelectionsTextures[]={"a3\soft_f_exp\lsv_02\data\csat_lsv_01_ghex_co.paa","a3\soft_f_exp\lsv_02\data\csat_lsv_02_ghex_co.paa","a3\soft_f_exp\lsv_02\data\csat_lsv_03_ghex_co.paa","a3\weapons_f_tank\launchers\vorona\data\vorona_green_f_co.paa","a3\weapons_f_tank\launchers\vorona\data\vorona_green_f_co.paa"};
    crew="T1_Units_Faction_3_Hex_Platoon_Leader";
    typicalCargo[]={"T1_Units_Faction_3_Hex_Platoon_Leader"};
	class TransportMagazines
		{
			class _xx_30Rnd_762x39_AK12_Mag_F {magazine="30Rnd_762x39_AK12_Mag_F";count=22;};
			class _xx_HandGrenade {magazine="HandGrenade";count=8;};
			class _xx_SmokeShell {magazine="SmokeShell";count=8;};		
			class _xx_Titan_AA {magazine="Titan_AA";count=16;};						
		};
		class TransportItems
		{
			class _xx_ACE_fieldDressing {count=20;name="ACE_fieldDressing";};
			class _xx_ACE_morphine {count=8;name="ACE_morphine";};
			class _xx_ACE_epinephrine {count=8;name="ACE_epinephrine";};
			class _xx_ACE_tourniquet {count=4;name="ACE_tourniquet";};
			class _xx_ACE_surgicalKit {count=1;name="ACE_surgicalKit";};
			class _xx_ACE_bloodIV_1000 {count=6;name="ACE_bloodIV";};
			class _xx_ACE_splint {count=6;name="ACE_splint";};
		};
		class TransportWeapons
		{
			class _xx_launch_B_Titan_olive_F {weapon="launch_B_Titan_olive_F";count=1;};	
			class _xx_T1_Units_Faction_3_Hex_arifle_AK12_F_acc_pointer_IRoptic_Holosight_blk_F {weapon="T1_Units_Faction_3_Hex_arifle_AK12_F_acc_pointer_IRoptic_Holosight_blk_F";count=1;};		
		};
		
		class TransportBackpacks
		{			
			class _xx_B_ViperLightHarness_ghex_F {count=1;backpack="B_ViperLightHarness_ghex_F";};
		};		
	};
  
  class T1_Units_Faction_3_Hex_Takhion_AT_MAT: O_T_LSV_02_AT_F
  {
    faction="T1_Units_Faction_3_Hex_Faction_3";
    side=0;		
	scope = 2;
	scopeCurator = 2;	
	scopeArsenal = 2;
	transportMaxWeapons = 999;
	transportMaxMagazines = 9999;
	transportMaxBackpacks = 99;
	transportMaxItems = 9999;
    displayName="Takhion AT (MAT)";
    hiddenSelectionsTextures[]={"a3\soft_f_exp\lsv_02\data\csat_lsv_01_ghex_co.paa","a3\soft_f_exp\lsv_02\data\csat_lsv_02_ghex_co.paa","a3\soft_f_exp\lsv_02\data\csat_lsv_03_ghex_co.paa","a3\weapons_f_tank\launchers\vorona\data\vorona_green_f_co.paa","a3\weapons_f_tank\launchers\vorona\data\vorona_green_f_co.paa"};
    crew="T1_Units_Faction_3_Hex_Platoon_Leader";
    typicalCargo[]={"T1_Units_Faction_3_Hex_Platoon_Leader"};
	class TransportMagazines
		{
			class _xx_30Rnd_762x39_AK12_Mag_F {magazine="30Rnd_762x39_AK12_Mag_F";count=22;};
			class _xx_HandGrenade {magazine="HandGrenade";count=8;};
			class _xx_SmokeShell {magazine="SmokeShell";count=8;};		
			class _xx_Vorona_HEAT {magazine="Vorona_HEAT";count=16;};						
		};
		class TransportItems
		{
			class _xx_ACE_fieldDressing {count=20;name="ACE_fieldDressing";};
			class _xx_ACE_morphine {count=8;name="ACE_morphine";};
			class _xx_ACE_epinephrine {count=8;name="ACE_epinephrine";};
			class _xx_ACE_tourniquet {count=4;name="ACE_tourniquet";};
			class _xx_ACE_surgicalKit {count=1;name="ACE_surgicalKit";};
			class _xx_ACE_bloodIV_1000 {count=6;name="ACE_bloodIV";};
			class _xx_ACE_splint {count=6;name="ACE_splint";};
		};
		class TransportWeapons
		{
			class _xx_launch_O_Vorona_green_F {weapon="launch_O_Vorona_green_F";count=1;};	
			class _xx_T1_Units_Faction_3_Hex_arifle_AK12_F_acc_pointer_IRoptic_Holosight_blk_F {weapon="T1_Units_Faction_3_Hex_arifle_AK12_F_acc_pointer_IRoptic_Holosight_blk_F";count=1;};		
		};
		
		class TransportBackpacks
		{			
			class _xx_B_ViperLightHarness_ghex_F {count=1;backpack="B_ViperLightHarness_ghex_F";};
		};		
	};

  class T1_Units_Faction_3_Hex_Takhion_AT_MMG: O_T_LSV_02_AT_F
  {
    faction="T1_Units_Faction_3_Hex_Faction_3";
    side=0;		
	scope = 2;
	scopeCurator = 2;	
	scopeArsenal = 2;
	transportMaxWeapons = 999;
	transportMaxMagazines = 9999;
	transportMaxBackpacks = 99;
	transportMaxItems = 9999;
    displayName="Takhion AT (MMG)";
    hiddenSelectionsTextures[]={"a3\soft_f_exp\lsv_02\data\csat_lsv_01_ghex_co.paa","a3\soft_f_exp\lsv_02\data\csat_lsv_02_ghex_co.paa","a3\soft_f_exp\lsv_02\data\csat_lsv_03_ghex_co.paa","a3\weapons_f_tank\launchers\vorona\data\vorona_green_f_co.paa","a3\weapons_f_tank\launchers\vorona\data\vorona_green_f_co.paa"};
    crew="T1_Units_Faction_3_Hex_Platoon_Leader";
    typicalCargo[]={"T1_Units_Faction_3_Hex_Platoon_Leader"};
	class TransportMagazines
		{
			class _xx_30Rnd_762x39_AK12_Mag_F {magazine="30Rnd_762x39_AK12_Mag_F";count=22;};
			class _xx_HandGrenade {magazine="HandGrenade";count=8;};
			class _xx_SmokeShell {magazine="SmokeShell";count=8;};		
			class _xx_150Rnd_762x54_Box_Tracer {magazine="150Rnd_762x54_Box_Tracer";count=26;};						
		};
		class TransportItems
		{
			class _xx_ACE_fieldDressing {count=20;name="ACE_fieldDressing";};
			class _xx_ACE_morphine {count=8;name="ACE_morphine";};
			class _xx_ACE_epinephrine {count=8;name="ACE_epinephrine";};
			class _xx_ACE_tourniquet {count=4;name="ACE_tourniquet";};
			class _xx_ACE_surgicalKit {count=1;name="ACE_surgicalKit";};
			class _xx_ACE_bloodIV_1000 {count=6;name="ACE_bloodIV";};
			class _xx_ACE_splint {count=6;name="ACE_splint";};
		};
		class TransportWeapons
		{
			class _xx_T1_Units_Faction_3_Hex_LMG_min_rf_6p69_optic_MRCO {weapon="T1_Units_Faction_3_Hex_LMG_min_rf_6p69_optic_MRCO";count=1;};	
			class _xx_T1_Units_Faction_3_Hex_arifle_AK12_F_acc_pointer_IRoptic_Holosight_blk_F {weapon="T1_Units_Faction_3_Hex_arifle_AK12_F_acc_pointer_IRoptic_Holosight_blk_F";count=1;};		
		};
		
		class TransportBackpacks
		{			
			class _xx_B_ViperLightHarness_ghex_F {count=1;backpack="B_ViperLightHarness_ghex_F";};
		};		
	};
	
	class O_supplyCrate_F;
	class T1_Units_Faction3_Hex_supplyCrate: O_supplyCrate_F
	{
		vehicleClass = "Ammo";
		displayName = "T1 Faction 3 Supply Box - Section";		
		scope = 2;
		scopeCurator = 2;	
		scopeArsenal = 2;
		transportMaxWeapons = 999;
		transportMaxMagazines = 9999;
		transportMaxBackpacks = 99;
		transportMaxItems = 9999;
		class TransportMagazines
		{
			class _xx_30Rnd_762x39_AK12_Mag_F {magazine="30Rnd_762x39_AK12_Mag_F";count=52;};
			class _xx_75rnd_762x39_AK12_Mag_Tracer_F {magazine="75rnd_762x39_AK12_Mag_Tracer_F";count=22;};
			class _xx_10Rnd_762x54_Mag {magazine="10Rnd_762x54_Mag";count=18;};
			class _xx_HandGrenade {magazine="HandGrenade";count=12;};
			class _xx_1Rnd_HE_Grenade_shell {magazine="1Rnd_HE_Grenade_shell";count=12;};
			class _xx_SmokeShell {magazine="SmokeShell";count=12;};
			class _xx_SmokeShellRed {magazine="SmokeShellRed";count=12;};		
			class _xx_RPG32_F {magazine="RPG32_F";count=6;};						
		};
		class TransportItems
		{
			class _xx_ACE_fieldDressing {count=80;name="ACE_fieldDressing";};
			class _xx_ACE_morphine {count=20;name="ACE_morphine";};
			class _xx_ACE_epinephrine {count=20;name="ACE_epinephrine";};
			class _xx_ACE_tourniquet {count=20;name="ACE_tourniquet";};
			class _xx_ACE_surgicalKit {count=1;name="ACE_surgicalKit";};
			class _xx_ACE_bloodIV_1000 {count=20;name="ACE_bloodIV";};
			class _xx_ACE_splint {count=20;name="ACE_splint";};
			class _xx_ACE_CableTie {count=20;name="ACE_CableTie";};
			class _xx_ACRE_PRC152 {count=2;name="ACRE_PRC152";};
			class _xx_ACRE_PRC117F {count=1;name="ACRE_PRC117F";};
			class _xx_ACE_EntrenchingTool {count=2;name="ACE_EntrenchingTool";};
		};
		class TransportWeapons
		{
			class _xx_launch_RPG32_green_F {weapon="launch_RPG32_green_F";count=1;};	
			class _xx_T1_Units_Faction_3_Hex_arifle_AK12_F_acc_pointer_IRoptic_Holosight_blk_F {weapon="T1_Units_Faction_3_Hex_arifle_AK12_F_acc_pointer_IRoptic_Holosight_blk_F";count=2;};		
		};
		
		class TransportBackpacks
		{			
			class _xx_B_ViperLightHarness_ghex_F {count=2;backpack="B_ViperLightHarness_ghex_F";};
		};		
	};
	
	class T1_Units_Faction3_Hex_delta_supplyCrate: O_supplyCrate_F
	{
		vehicleClass = "Ammo";
		displayName = "T1 Faction 3 Supply Box - Delta";		
		scope = 2;
		scopeCurator = 2;	
		scopeArsenal = 2;
		transportMaxWeapons = 999;
		transportMaxMagazines = 9999;
		transportMaxBackpacks = 99;
		transportMaxItems = 9999;
		class TransportMagazines
		{
			class _xx_30Rnd_762x39_AK12_Mag_F {magazine="30Rnd_762x39_AK12_Mag_F";count=24;};
			class _xx_150Rnd_762x54_Box_Tracer {magazine="150Rnd_762x54_Box_Tracer";count=26;};
			class _xx_Vorona_HEAT {magazine="Vorona_HEAT";count=16;};
			class _xx_Titan_AA {magazine="Titan_AA";count=16;};
			class _xx_HandGrenade {magazine="HandGrenade";count=12;};
			class _xx_16Rnd_9x21_Mag {magazine="16Rnd_9x21_Mag";count=8;};
			class _xx_5Rnd_min_rf_338_Mag {magazine="5Rnd_min_rf_338_Mag";count=22;};							
		};
		class TransportItems
		{
			class _xx_ACE_fieldDressing {count=40;name="ACE_fieldDressing";};
			class _xx_ACE_morphine {count=10;name="ACE_morphine";};
			class _xx_ACE_epinephrine {count=10;name="ACE_epinephrine";};
			class _xx_ACE_tourniquet {count=8;name="ACE_tourniquet";};
			class _xx_ACE_surgicalKit {count=1;name="ACE_surgicalKit";};
			class _xx_ACE_bloodIV_1000 {count=12;name="ACE_bloodIV";};
			class _xx_ACE_splint {count=8;name="ACE_splint";};
			class _xx_ACRE_PRC152 {count=2;name="ACRE_PRC152";};
			class _xx_ACRE_PRC117F {count=1;name="ACRE_PRC117F";};
			class _xx_ACE_Vector {count=1;name="ACE_Vector";};
			class _xx_ACE_EntrenchingTool {count=2;name="ACE_EntrenchingTool";};
			class _xx_ACE_ACE_RangeCard {count=1;name="ACE_RangeCard";};
		};
		class TransportWeapons
		{
			class _xx_T1_Units_Faction_3_Hex_arifle_AK12_F_acc_pointer_IRoptic_Holosight_blk_F {weapon="T1_Units_Faction_3_Hex_arifle_AK12_F_acc_pointer_IRoptic_Holosight_blk_F";count=2;};
			class _xx_T1_Units_Faction_3_Hex_LMG_min_rf_6p69_optic_MRCO {weapon="T1_Units_Faction_3_Hex_LMG_min_rf_6p69_optic_MRCO";count=1;};	
			class _xx_launch_O_Vorona_green_F {weapon="launch_O_Vorona_green_F";count=1;};
			class _xx_launch_B_Titan_olive_F {weapon="launch_B_Titan_olive_F";count=1;};			
		};
		
		class TransportBackpacks
		{			
			class _xx_B_ViperLightHarness_ghex_F {count=2;backpack="B_ViperLightHarness_ghex_F";};
		};		
	};

  class T1_Units_Faction_3_Hex_Platoon_Leader_pack: B_ViperLightHarness_ghex_F
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems
    {
     class _xx_ACE_fieldDressing {count=20;name="ACE_fieldDressing";};
     class _xx_ACE_morphine {count=3;name="ACE_morphine";};
     class _xx_ACE_epinephrine {count=3;name="ACE_epinephrine";};
     class _xx_ACE_splint {count=2;name="ACE_splint";};
     class _xx_ACE_tourniquet {count=4;name="ACE_tourniquet";};
     class _xx_O_NVGoggles_ghex_F {count=1;name="O_NVGoggles_ghex_F";};
     class _xx_ACRE_PRC117F_ID_1 {count=1;name="ACRE_PRC117F_ID_1";};
     class _xx_ACE_Vector {count=1;name="ACE_Vector";};
    };
    class TransportWeapons{};
  };


  class T1_Units_Faction_3_Hex_Platoon_JTAC_pack: B_ViperLightHarness_ghex_F
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems
    {
     class _xx_ACE_fieldDressing {count=20;name="ACE_fieldDressing";};
     class _xx_ACE_morphine {count=3;name="ACE_morphine";};
     class _xx_ACE_epinephrine {count=3;name="ACE_epinephrine";};
     class _xx_ACE_splint {count=2;name="ACE_splint";};
     class _xx_ACE_tourniquet {count=4;name="ACE_tourniquet";};
     class _xx_O_NVGoggles_ghex_F {count=1;name="O_NVGoggles_ghex_F";};
     class _xx_ACRE_PRC117F {count=1;name="ACRE_PRC117F";};
     class _xx_ACE_Vector {count=1;name="ACE_Vector";};
    };
    class TransportWeapons{};
  };


  class T1_Units_Faction_3_Hex_Platoon_Engineer_pack: B_ViperLightHarness_ghex_F
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_DemoCharge_Remote_Mag {count=4;magazine="DemoCharge_Remote_Mag";};
    };
    class TransportItems
    {
     class _xx_ACE_fieldDressing {count=20;name="ACE_fieldDressing";};
     class _xx_ACE_morphine {count=3;name="ACE_morphine";};
     class _xx_ACE_epinephrine {count=3;name="ACE_epinephrine";};
     class _xx_ACE_splint {count=2;name="ACE_splint";};
     class _xx_ACE_tourniquet {count=4;name="ACE_tourniquet";};
     class _xx_O_NVGoggles_ghex_F {count=1;name="O_NVGoggles_ghex_F";};
     class _xx_ToolKit {count=1;name="ToolKit";};
     class _xx_ACE_SpraypaintGreen {count=1;name="ACE_SpraypaintGreen";};
    };
    class TransportWeapons{};
  };


  class T1_Units_Faction_3_Hex_Platoon_Medic_pack: B_ViperLightHarness_ghex_F
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems
    {
     class _xx_ACE_morphine {count=20;name="ACE_morphine";};
     class _xx_ACE_epinephrine {count=20;name="ACE_epinephrine";};
     class _xx_ACE_fieldDressing {count=90;name="ACE_fieldDressing";};
     class _xx_ACE_splint {count=20;name="ACE_splint";};
     class _xx_ACE_bloodIV {count=20;name="ACE_bloodIV";};
     class _xx_O_NVGoggles_ghex_F {count=1;name="O_NVGoggles_ghex_F";};
     class _xx_ACE_surgicalKit {count=1;name="ACE_surgicalKit";};
    };
    class TransportWeapons{};
  };


  class T1_Units_Faction_3_Hex_FireTeam_Lead_AR_pack: B_ViperLightHarness_ghex_F
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_1Rnd_HE_Grenade_shell {count=12;magazine="1Rnd_HE_Grenade_shell";};
     class _xx_75rnd_762x39_AK12_Mag_Tracer_F {count=4;magazine="75rnd_762x39_AK12_Mag_Tracer_F";};
     class _xx_1Rnd_SmokeRed_Grenade_shell {count=4;magazine="1Rnd_SmokeRed_Grenade_shell";};
    };
    class TransportItems
    {
     class _xx_ACE_fieldDressing {count=20;name="ACE_fieldDressing";};
     class _xx_ACE_morphine {count=3;name="ACE_morphine";};
     class _xx_ACE_tourniquet {count=4;name="ACE_tourniquet";};
     class _xx_ACE_epinephrine {count=3;name="ACE_epinephrine";};
     class _xx_ACE_splint {count=2;name="ACE_splint";};
     class _xx_O_NVGoggles_ghex_F {count=1;name="O_NVGoggles_ghex_F";};
    };
    class TransportWeapons{};
  };


  class T1_Units_Faction_3_Hex_FireTeam_Lead_AT_pack: B_ViperLightHarness_ghex_F
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_1Rnd_HE_Grenade_shell {count=10;magazine="1Rnd_HE_Grenade_shell";};
     class _xx_1Rnd_SmokeRed_Grenade_shell {count=4;magazine="1Rnd_SmokeRed_Grenade_shell";};
     class _xx_RPG32_F {count=2;magazine="RPG32_F";};
    };
    class TransportItems
    {
     class _xx_ACE_fieldDressing {count=20;name="ACE_fieldDressing";};
     class _xx_ACE_morphine {count=3;name="ACE_morphine";};
     class _xx_ACE_tourniquet {count=4;name="ACE_tourniquet";};
     class _xx_ACE_epinephrine {count=3;name="ACE_epinephrine";};
     class _xx_ACE_splint {count=2;name="ACE_splint";};
     class _xx_O_NVGoggles_ghex_F {count=1;name="O_NVGoggles_ghex_F";};
    };
    class TransportWeapons{};
  };


  class T1_Units_Faction_3_Hex_FireTeam_AR_pack: B_FieldPack_ghex_F
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_75rnd_762x39_AK12_Mag_Tracer_F {count=5;magazine="75rnd_762x39_AK12_Mag_Tracer_F";};
    };
    class TransportItems
    {
     class _xx_ACE_fieldDressing {count=20;name="ACE_fieldDressing";};
     class _xx_ACE_morphine {count=3;name="ACE_morphine";};
     class _xx_ACE_tourniquet {count=4;name="ACE_tourniquet";};
     class _xx_ACE_epinephrine {count=3;name="ACE_epinephrine";};
     class _xx_ACE_splint {count=2;name="ACE_splint";};
     class _xx_O_NVGoggles_ghex_F {count=1;name="O_NVGoggles_ghex_F";};
    };
    class TransportWeapons{};
  };


  class T1_Units_Faction_3_Hex_FireTeam_AT_pack: B_ViperLightHarness_ghex_F
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_RPG32_F {count=1;magazine="RPG32_F";};
     class _xx_RPG32_HE_F {count=1;magazine="RPG32_HE_F";};
    };
    class TransportItems
    {
     class _xx_ACE_fieldDressing {count=20;name="ACE_fieldDressing";};
     class _xx_ACE_morphine {count=3;name="ACE_morphine";};
     class _xx_ACE_tourniquet {count=4;name="ACE_tourniquet";};
     class _xx_ACE_epinephrine {count=3;name="ACE_epinephrine";};
     class _xx_ACE_splint {count=2;name="ACE_splint";};
     class _xx_O_NVGoggles_ghex_F {count=1;name="O_NVGoggles_ghex_F";};
    };
    class TransportWeapons{};
  };


  class T1_Units_Faction_3_Hex_FireTeam_AT_Assist_pack: B_ViperLightHarness_ghex_F
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_RPG32_F {count=3;magazine="RPG32_F";};
    };
    class TransportItems
    {
     class _xx_ACE_fieldDressing {count=20;name="ACE_fieldDressing";};
     class _xx_ACE_morphine {count=3;name="ACE_morphine";};
     class _xx_ACE_tourniquet {count=4;name="ACE_tourniquet";};
     class _xx_ACE_epinephrine {count=3;name="ACE_epinephrine";};
     class _xx_ACE_splint {count=2;name="ACE_splint";};
     class _xx_O_NVGoggles_ghex_F {count=1;name="O_NVGoggles_ghex_F";};
    };
    class TransportWeapons{};
  };


  class T1_Units_Faction_3_Hex_FireTeam_DMR_AR_pack: B_ViperLightHarness_ghex_F
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_10Rnd_762x54_Mag {count=10;magazine="10Rnd_762x54_Mag";};
     class _xx_75rnd_762x39_AK12_Mag_Tracer_F {count=3;magazine="75rnd_762x39_AK12_Mag_Tracer_F";};
    };
    class TransportItems
    {
     class _xx_ACE_fieldDressing {count=20;name="ACE_fieldDressing";};
     class _xx_ACE_morphine {count=3;name="ACE_morphine";};
     class _xx_ACE_tourniquet {count=4;name="ACE_tourniquet";};
     class _xx_ACE_epinephrine {count=3;name="ACE_epinephrine";};
     class _xx_ACE_splint {count=2;name="ACE_splint";};
     class _xx_O_NVGoggles_ghex_F {count=1;name="O_NVGoggles_ghex_F";};
    };
    class TransportWeapons{};
  };


  class T1_Units_Faction_3_Hex_MMG_Assist_pack: B_Carryall_ghex_F
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_150Rnd_762x54_Box_Tracer {count=5;magazine="150Rnd_762x54_Box_Tracer";};
    };
    class TransportItems
    {
     class _xx_ACE_fieldDressing {count=20;name="ACE_fieldDressing";};
     class _xx_ACE_morphine {count=3;name="ACE_morphine";};
     class _xx_ACE_tourniquet {count=4;name="ACE_tourniquet";};
     class _xx_ACE_epinephrine {count=3;name="ACE_epinephrine";};
     class _xx_ACE_splint {count=2;name="ACE_splint";};
     class _xx_O_NVGoggles_ghex_F {count=1;name="O_NVGoggles_ghex_F";};
    };
    class TransportWeapons{};
  };


  class T1_Units_Faction_3_Hex_MMG_Gunner_pack: B_ViperLightHarness_ghex_F
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_150Rnd_762x54_Box_Tracer {count=4;magazine="150Rnd_762x54_Box_Tracer";};
    };
    class TransportItems
    {
     class _xx_ACE_fieldDressing {count=20;name="ACE_fieldDressing";};
     class _xx_ACE_morphine {count=3;name="ACE_morphine";};
     class _xx_ACE_tourniquet {count=4;name="ACE_tourniquet";};
     class _xx_ACE_epinephrine {count=3;name="ACE_epinephrine";};
     class _xx_ACE_splint {count=2;name="ACE_splint";};
     class _xx_O_NVGoggles_ghex_F {count=1;name="O_NVGoggles_ghex_F";};
    };
    class TransportWeapons{};
  };


  class T1_Units_Faction_3_Hex_MAT_Assist_pack: B_Carryall_ghex_F
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_Vorona_HEAT {count=3;magazine="Vorona_HEAT";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class T1_Units_Faction_3_Hex_MAT_Gunner_pack: B_AssaultPack_khk
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_Vorona_HEAT {count=1;magazine="Vorona_HEAT";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class T1_Units_Faction_3_Hex_AA_Assist_pack: B_Carryall_ghex_F
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_Titan_AA {count=3;magazine="Titan_AA";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class T1_Units_Faction_3_Hex_AA_Gunner_pack: B_FieldPack_ghex_F
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_Titan_AA {count=2;magazine="Titan_AA";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class T1_Units_Faction_3_Hex_Spotter_pack: B_ViperLightHarness_ghex_F
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_5Rnd_min_rf_338_Mag {count=4;magazine="5Rnd_min_rf_338_Mag";};
    };
    class TransportItems
    {
     class _xx_ACE_fieldDressing {count=30;name="ACE_fieldDressing";};
     class _xx_ACE_morphine {count=5;name="ACE_morphine";};
     class _xx_ACE_tourniquet {count=4;name="ACE_tourniquet";};
     class _xx_ACE_epinephrine {count=5;name="ACE_epinephrine";};
     class _xx_ACRE_PRC117F {count=1;name="ACRE_PRC117F";};
     class _xx_ACE_Vector {count=1;name="ACE_Vector";};
    };
    class TransportWeapons{};
  };


  class T1_Units_Faction_3_Hex_Sniper_pack: B_FieldPack_ghex_F
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_5Rnd_min_rf_338_Mag {count=10;magazine="5Rnd_min_rf_338_Mag";};
    };
    class TransportItems
    {
     class _xx_ACE_fieldDressing {count=20;name="ACE_fieldDressing";};
     class _xx_ACE_morphine {count=3;name="ACE_morphine";};
     class _xx_ACE_tourniquet {count=4;name="ACE_tourniquet";};
     class _xx_ACE_epinephrine {count=3;name="ACE_epinephrine";};
     class _xx_ACE_splint {count=2;name="ACE_splint";};
     class _xx_O_NVGoggles_ghex_F {count=1;name="O_NVGoggles_ghex_F";};
    };
    class TransportWeapons{};
  };


  class T1_Units_Faction_3_Hex_Crew_Commander_pack: B_AssaultPack_khk
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems
    {
     class _xx_ACRE_PRC117F {count=1;name="ACRE_PRC117F";};
    };
    class TransportWeapons{};
  };


  class T1_Units_Faction_3_Hex_Crew_Engineer_pack: B_AssaultPack_khk
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems
    {
     class _xx_ACE_fieldDressing {count=20;name="ACE_fieldDressing";};
     class _xx_ACE_morphine {count=3;name="ACE_morphine";};
     class _xx_ACE_tourniquet {count=4;name="ACE_tourniquet";};
     class _xx_ACE_epinephrine {count=3;name="ACE_epinephrine";};
     class _xx_ACE_splint {count=2;name="ACE_splint";};
     class _xx_O_NVGoggles_ghex_F {count=1;name="O_NVGoggles_ghex_F";};
     class _xx_ToolKit {count=1;name="ToolKit";};
    };
    class TransportWeapons{};
  };


  class T1_Units_Faction_3_Hex_Crew_CLS_pack: B_AssaultPack_khk
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems
    {
     class _xx_ACE_fieldDressing {count=60;name="ACE_fieldDressing";};
     class _xx_ACE_morphine {count=8;name="ACE_morphine";};
     class _xx_ACE_tourniquet {count=8;name="ACE_tourniquet";};
     class _xx_ACE_epinephrine {count=8;name="ACE_epinephrine";};
     class _xx_ACE_splint {count=8;name="ACE_splint";};
     class _xx_O_NVGoggles_ghex_F {count=1;name="O_NVGoggles_ghex_F";};
     class _xx_ACE_surgicalKit {count=1;name="ACE_surgicalKit";};
     class _xx_ACE_bloodIV {count=8;name="ACE_bloodIV";};
    };
    class TransportWeapons{};
  };


  class T1_Units_Faction_3_Hex_FireTeam_DMR_AT_pack: B_ViperLightHarness_ghex_F
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_10Rnd_762x54_Mag {count=6;magazine="10Rnd_762x54_Mag";};
     class _xx_RPG32_F {count=1;magazine="RPG32_F";};
     class _xx_RPG32_HE_F {count=1;magazine="RPG32_HE_F";};
    };
    class TransportItems
    {
     class _xx_ACE_fieldDressing {count=20;name="ACE_fieldDressing";};
     class _xx_ACE_morphine {count=3;name="ACE_morphine";};
     class _xx_ACE_tourniquet {count=4;name="ACE_tourniquet";};
     class _xx_ACE_epinephrine {count=3;name="ACE_epinephrine";};
     class _xx_ACE_splint {count=2;name="ACE_splint";};
     class _xx_O_NVGoggles_ghex_F {count=1;name="O_NVGoggles_ghex_F";};
    };
    class TransportWeapons{};
  };


  class T1_Units_Faction_3_Hex_FireTeam_CLS_pack: B_ViperLightHarness_ghex_F
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_SmokeShell {count=8;magazine="SmokeShell";};
    };
    class TransportItems
    {
     class _xx_ACE_fieldDressing {count=80;name="ACE_fieldDressing";};
     class _xx_ACE_morphine {count=10;name="ACE_morphine";};
     class _xx_ACE_tourniquet {count=8;name="ACE_tourniquet";};
     class _xx_ACE_epinephrine {count=10;name="ACE_epinephrine";};
     class _xx_ACE_splint {count=10;name="ACE_splint";};
     class _xx_O_NVGoggles_ghex_F {count=1;name="O_NVGoggles_ghex_F";};
     class _xx_ACE_bloodIV {count=10;name="ACE_bloodIV";};
     class _xx_ACE_surgicalKit {count=1;name="ACE_surgicalKit";};
    };
    class TransportWeapons{};
  };


  class T1_Units_Faction_3_Hex_Pilot_pack: B_AssaultPack_khk
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_SmokeShellBlue {count=1;magazine="SmokeShellBlue";};
     class _xx_SmokeShellGreen {count=1;magazine="SmokeShellGreen";};
     class _xx_SmokeShellOrange {count=1;magazine="SmokeShellOrange";};
     class _xx_SmokeShellPurple {count=1;magazine="SmokeShellPurple";};
     class _xx_SmokeShellRed {count=1;magazine="SmokeShellRed";};
     class _xx_SmokeShellYellow {count=1;magazine="SmokeShellYellow";};
     class _xx_SmokeShell {count=2;magazine="SmokeShell";};
    };
    class TransportItems
    {
     class _xx_ACRE_PRC117F {count=1;name="ACRE_PRC117F";};
    };
    class TransportWeapons{};
  };

};

//////////////// Paste cfgGroups after this line //////////////// 
