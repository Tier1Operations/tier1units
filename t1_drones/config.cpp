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
		class EventHandlers
		{
			init = "(_this select 0) execVM ""\t1_drones\scripts\wood_texture_randomisation.sqf""";
		};
		transportmaxmagazines = 99999;
		transportmaxweapons = 9999;
		transportmaxbackpacks = 99;
		maximumload = 999999;
		class TransportMagazines
		{
			class _xx_SMA_30Rnd_556x45_M855A1
			{
				magazine = "SMA_30Rnd_556x45_M855A1";
				count = 130;
			};
			class _xx_rhs_200rnd_556x45_M_SAW
			{
				magazine = "rhs_200rnd_556x45_M_SAW";
				count = 30;
			};
			class _xx_BWA3_120Rnd_762x51
			{
				magazine = "BWA3_120Rnd_762x51";
				count = 20;
			};
			class _xx_20Rnd_762x51_Mag
			{
				magazine = "20Rnd_762x51_Mag";
				count = 24;
			};
			class _xx_t1_100Rnd_762x51_Box
			{
				magazine = "t1_100Rnd_762x51_Box";
				count = 8;
			};
			class _xx_7Rnd_408_Mag
			{
				magazine = "7Rnd_408_Mag";
				count = 24;
			};
			class _xx_BWA3_40Rnd_46x30_MP7
			{
				magazine = "BWA3_40Rnd_46x30_MP7";
				count = 16;
			};
			class _xx_rhsusf_mag_17Rnd_9x19_JHP
			{
				magazine = "rhsusf_mag_17Rnd_9x19_JHP";
				count = 16;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 32;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 36;
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
				count = 10;
			};
			class _xx_tf47_m3maaws_HE
			{
				magazine = "tf47_m3maaws_HE";
				count = 10;
			};
		};
		class TransportItems
		{
			class Bandage1
			{
				count = 240;
				name = "ACE_packingBandage";
			};
			class Bandage2
			{
				count = 80;
				name = "ACE_elasticBandage";
			};
			class Tourniquet
			{
				count = 20;
				name = "ACE_tourniquet";
			};
			class _xx_ACE_morphine
			{
				count = 70;
				name = "ACE_morphine";
			};
			class _xx_ACE_epinephrine
			{
				count = 34;
				name = "ACE_epinephrine";
			};
			class saline
			{
				count = 16;
				name = "ACE_salineIV_500";
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
				count = 2;
				name = "ACRE_PRC148";
			};
		};
		class TransportWeapons
		{
			class _xx_tf47_at4_heat
			{
				weapon = "tf47_at4_heat";
				count = 5;
			};
			class _xx_HAFM_LAW
			{
				weapon = "HAFM_LAW";
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
		class EventHandlers
		{
			init = "(_this select 0) execVM ""\t1_drones\scripts\wood_texture_randomisation.sqf""";
		};
		transportmaxmagazines = 99999;
		transportmaxweapons = 9999;
		transportmaxbackpacks = 99;
		maximumload = 999999;
		class TransportMagazines
		{
			class _xx_SMA_30Rnd_556x45_M855A1
			{
				magazine = "SMA_30Rnd_556x45_M855A1";
				count = 130;
			};
			class _xx_hlc_rhs_200rnd_556x45_M_SAW
			{
				magazine = "rhs_200rnd_556x45_M_SAW";
				count = 30;
			};
			class _xx_BWA3_120Rnd_762x51
			{
				magazine = "BWA3_120Rnd_762x51";
				count = 20;
			};
			class _xx_20Rnd_762x51_Mag
			{
				magazine = "20Rnd_762x51_Mag";
				count = 24;
			};
			class _xx_t1_100Rnd_762x51_Box
			{
				magazine = "t1_100Rnd_762x51_Box";
				count = 8;
			};
			class _xx_7Rnd_408_Mag
			{
				magazine = "7Rnd_408_Mag";
				count = 24;
			};
			class _xx_BWA3_40Rnd_46x30_MP7
			{
				magazine = "BWA3_40Rnd_46x30_MP7";
				count = 16;
			};
			class _xx_rhsusf_mag_17Rnd_9x19_JHP
			{
				magazine = "rhsusf_mag_17Rnd_9x19_JHP";
				count = 16;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 32;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 36;
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
				count = 10;
			};
			class _xx_tf47_m3maaws_HE
			{
				magazine = "tf47_m3maaws_HE";
				count = 10;
			};
		};
		class TransportItems
		{
			class Bandage1
			{
				count = 240;
				name = "ACE_packingBandage";
			};
			class Bandage2
			{
				count = 80;
				name = "ACE_elasticBandage";
			};
			class Tourniquet
			{
				count = 20;
				name = "ACE_tourniquet";
			};
			class _xx_ACE_morphine
			{
				count = 70;
				name = "ACE_morphine";
			};
			class _xx_ACE_epinephrine
			{
				count = 34;
				name = "ACE_epinephrine";
			};
			class saline
			{
				count = 16;
				name = "ACE_salineIV_500";
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
				count = 2;
				name = "ACRE_PRC148";
			};
		};
		class TransportWeapons
		{
			class _xx_tf47_at4_heat
			{
				weapon = "tf47_at4_heat";
				count = 5;
			};
			class _xx_HAFM_LAW
			{
				weapon = "HAFM_LAW";
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
		class EventHandlers
		{
			init = "(_this select 0) execVM ""\t1_drones\scripts\desert_texture_randomisation.sqf""";
		};
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
		class EventHandlers
		{
			init = "(_this select 0) execVM ""\t1_drones\scripts\desert_texture_randomisation.sqf""";
		};
	};
};
//};
