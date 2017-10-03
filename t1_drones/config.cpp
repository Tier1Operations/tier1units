////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.02
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class t1_drones : config.bin{
class DefaultEventHandlers;
class CfgPatches
{
	class A3_Soft_F_Crusher_UGV_T1
	{
		units[] = {"B_UGV_T1_Camo_F","B_UGV_T1_Camo_rcws_F","B_UGV_T1_Desert_F","B_UGV_T1_Desert_rcws_F"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"t1_units"};
	};
};
class CfgFactionClasses
{
	class T1_Units;
	class T1_Units_Desert;
};
class CfgVehicles
{
	class B_UGV_01_F;
	class B_UGV_01_rcws_F;
	class B_UGV_T1_Camo_F: B_UGV_01_F
	{
		scope = 2;
		side = 1;
		cargoCanControlUAV = 1;
		faction = "T1_Units";
		displayName = "T1 UGV";
		author = "Vasilyevich";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\t1_drones\wood\normal_ugv_01_ext_co.paa","\t1_drones\wood\t1_ugv_01_int_co.paa"};
		transportmaxmagazines = 99999;
		transportmaxweapons = 9999;
		transportmaxbackpacks = 99;
		maximumload = 999999;
		class TransportMagazines
		{
			class riflemag
			{
				magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
				count = 110;
			};
			class t1_longrange_556
			{
				magazine = "t1_longrange_556";
				count = 30;
			};
			class riflemag_tracer
			{
				magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red";
				count = 20;
			};
			class _xx_rhs_rhsusf_100Rnd_556x45_soft_pouch
			{
				magazine = "rhsusf_100Rnd_556x45_soft_pouch";
				count = 60;
			};
			class mmg_mag
			{
				magazine = "rhsusf_100Rnd_762x51_m62_tracer";
				count = 40;
			};
			class _xx_rhsusf_50Rnd_762x51_m62_tracer
			{
				magazine = "rhsusf_50Rnd_762x51_m62_tracer";
				count = 30;
			};
			class _xx_ACE_20Rnd_762x51_Mk316_Mod_0_Mag
			{
				magazine = "ACE_20Rnd_762x51_Mk316_Mod_0_Mag";
				count = 50;
			};
			class _xx_ACE_20Rnd_762x51_Mk319_Mod_0_Mag
			{
				magazine = "ACE_20Rnd_762x51_Mk319_Mod_0_Mag";
				count = 80;
			};
			class ACE_20Rnd_762x51_Mag_SD
			{
				magazine = "ACE_20Rnd_762x51_Mag_SD";
				count = 30;
			};
			class _xx_7Rnd_408_Mag
			{
				magazine = "7Rnd_408_Mag";
				count = 24;
			};
			class _xx_rhsusf_5Rnd_300winmag_xm2010
			{
				magazine = rhsusf_5Rnd_300winmag_xm2010;
				count = 36;
			};
			class _xx_T1_rhsusf_5Rnd_300winmag_xm2010_SD
			{
				magazine = T1_rhsusf_5Rnd_300winmag_xm2010_SD;
				count = 12;
			};
			/*
			class sidearm_m_mag
			{
				magazine = "BWA3_40Rnd_46x30_MP7";
				count = 16;
			};//*/
			class _xx_rhsusf_mag_17Rnd_9x19_FMJ
			{
				magazine = "rhsusf_mag_17Rnd_9x19_FMJ";
				count = 16;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 46;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 80;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 64;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 8;
			};
			class _xx_ACE_M84
			{
				magazine = "ACE_M84";
				count = 32;
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
				count = 20;
			};
			class _xx_tf47_m3maaws_HE
			{
				magazine = "tf47_m3maaws_HE";
				count = 20;
			};
			class _xx_DemoCharge_Remote_Mag
			{
				count = 24;
				magazine = "DemoCharge_Remote_Mag";
			};
		};
		class TransportItems
		{
			class Bandage1
			{
				count = 400;
				name = "ACE_fieldDressing";
			};
			class _xx_ACE_morphine
			{
				count = 70;
				name = "ACE_morphine";
			};
			class _xx_ACE_epinephrine
			{
				count = 64;
				name = "ACE_epinephrine";
			};
			class saline
			{
				count = 32;
				name = "ACE_bloodIV";
			};
			class _xx_ACE_CableTie
			{
				count = 20;
				name = "ACE_CableTie";
			};
			class _xx_ACE_UAVBattery
			{
				count = 8;
				name = "ACE_UAVBattery";
			};
			class _xx_tf_anprc15
			{
				count = 4;
				name = "tf_anprc152";
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
		};
		class TransportWeapons
		{
			class _xx_tf47_at4_heat
			{
				weapon = "tf47_at4_heat";
				count = 5;
			};			
			class _xx_rhs_weap_m72a7
			{
				weapon = "rhs_weap_m72a7";
				count = 14;
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
			class _xx_tf_rt1523g_bwmod
			{
				count = 2;
				backpack = "tf_rt1523g_bwmod";
			};
		};
	};
	class B_UGV_T1_Camo_rcws_F: B_UGV_01_rcws_F
	{
		scope = 2;
		side = 1;
		cargoCanControlUAV = 1;
		faction = "T1_Units";
		displayName = "T1 UGV RCWS";
		author = "Vasilyevich";
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"\t1_drones\wood\normal_ugv_01_ext_co.paa","\t1_drones\wood\t1_ugv_01_int_co.paa","\t1_drones\wood\t1_ugv_01_turret_co.paa"};
		transportmaxmagazines = 99999;
		transportmaxweapons = 9999;
		transportmaxbackpacks = 99;
		maximumload = 999999;
		class TransportMagazines
		{
			class riflemag
			{
				magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
				count = 110;
			};
			class t1_longrange_556
			{
				magazine = "t1_longrange_556";
				count = 30;
			};
			class riflemag_tracer
			{
				magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red";
				count = 20;
			};
			class _xx_rhsusf_100Rnd_556x45_soft_pouch
			{
				magazine = "rhsusf_100Rnd_556x45_soft_pouch";
				count = 60;
			};
			class mmg_mag
			{
				magazine = "rhsusf_100Rnd_762x51_m62_tracer";
				count = 40;
			};
			class _xx_rhsusf_50Rnd_762x51_m62_tracer
			{
				magazine = "rhsusf_50Rnd_762x51_m62_tracer";
				count = 30;
			};
			class _xx_ACE_20Rnd_762x51_Mk316_Mod_0_Mag
			{
				magazine = "ACE_20Rnd_762x51_Mk316_Mod_0_Mag";
				count = 50;
			};
			class _xx_ACE_20Rnd_762x51_Mk319_Mod_0_Mag
			{
				magazine = "ACE_20Rnd_762x51_Mk319_Mod_0_Mag";
				count = 80;
			};
			class ACE_20Rnd_762x51_Mag_SD
			{
				magazine = "ACE_20Rnd_762x51_Mag_SD";
				count = 30;
			};
			class _xx_7Rnd_408_Mag
			{
				magazine = "7Rnd_408_Mag";
				count = 24;
			};
			class _xx_rhsusf_5Rnd_300winmag_xm2010
			{
				magazine = rhsusf_5Rnd_300winmag_xm2010;
				count = 36;
			};
			class _xx_T1_rhsusf_5Rnd_300winmag_xm2010_SD
			{
				magazine = T1_rhsusf_5Rnd_300winmag_xm2010_SD;
				count = 12;
			};
			/*
			class sidearm_m_mag
			{
				magazine = "BWA3_40Rnd_46x30_MP7";
				count = 16;
			};//*/
			class _xx_rhsusf_mag_17Rnd_9x19_FMJ
			{
				magazine = "rhsusf_mag_17Rnd_9x19_FMJ";
				count = 16;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 46;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 80;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 64;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 8;
			};
			class _xx_ACE_M84
			{
				magazine = "ACE_M84";
				count = 32;
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
				count = 20;
			};
			class _xx_tf47_m3maaws_HE
			{
				magazine = "tf47_m3maaws_HE";
				count = 20;
			};
			class _xx_DemoCharge_Remote_Mag
			{
				count = 24;
				magazine = "DemoCharge_Remote_Mag";
			};
		};
		class TransportItems
		{
			class Bandage1
			{
				count = 320;
				name = "ACE_fieldDressing";
			};
			class _xx_ACE_morphine
			{
				count = 70;
				name = "ACE_morphine";
			};
			class _xx_ACE_epinephrine
			{
				count = 64;
				name = "ACE_epinephrine";
			};
			class saline
			{
				count = 32;
				name = "ACE_bloodIV";
			};
			class _xx_ACE_CableTie
			{
				count = 20;
				name = "ACE_CableTie";
			};
			class _xx_ACE_UAVBattery
			{
				count = 8;
				name = "ACE_UAVBattery";
			};
			class _xx_tf_anprc15
			{
				count = 4;
				name = "tf_anprc152";
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
		};
		class TransportWeapons
		{
			class _xx_tf47_at4_heat
			{
				weapon = "tf47_at4_heat";
				count = 5;
			};			
			class _xx_rhs_weap_m72a7
			{
				weapon = "rhs_weap_m72a7";
				count = 14;
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
			class _xx_tf_rt1523g_bwmod
			{
				count = 2;
				backpack = "tf_rt1523g_bwmod";
			};
		};
	};
	class B_UGV_T1_Desert_F: B_UGV_T1_Camo_F
	{
		scope = 2;
		side = 1;
		cargoCanControlUAV = 1;
		faction = "T1_Units_Desert";
		displayName = "T1 UGV";
		author = "Vasilyevich";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\t1_drones\desert\normal_ugv_01_ext_co.paa","\t1_drones\desert\t1_ugv_01_int_co.paa"};

	};
	class B_UGV_T1_Desert_rcws_F: B_UGV_T1_Camo_rcws_F
	{
		scope = 2;
		side = 1;
		cargoCanControlUAV = 1;
		faction = "T1_Units_Desert";
		displayName = "T1 UGV RCWS";
		author = "Vasilyevich";
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"\t1_drones\desert\normal_ugv_01_ext_co.paa","\t1_drones\desert\t1_ugv_01_int_co.paa","\t1_drones\desert\t1_ugv_01_turret_co.paa"};
	};
};
//};
