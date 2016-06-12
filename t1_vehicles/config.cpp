/*
	Tier 1 Operations
	Custom vehicle definitions
	

*/


#define _ARMA_

// 
class CfgPatches
{
	class t1_vehicles
	{
		units[] = {
			"t1_car_light",
			"t1_car_light_mg",
			"t1_car_light_gl",
			"t1_apc",
			"t1_ifv_wheeled",
			"t1_tank",
			"t1_heli_light_trans",
			"t1_heli_light_attack",
			"t1_heli_medium_rockets",
			"t1_heli_medium_at",
			"t1_heli_heavy_trans",
			"t1_heli_heavy_attack",
			"t1_fighterjet_oneseat",
			"t1_fighterjet_twoseat",
			"t1_support_light",
			"t1_support_heavy"
		};
		weapons[] = {};
		magazines[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"t1_units",
			"rhsusf_vehicles", // Not quite the correct patchname
				// t1_car_light* 
				// t1_heli_medium_rockets 
				// t1_heli_heavy_trans
			"UK3CB_BAF_Vehicles_Coyote_Jackal",	// t1_support_light
			"MELB",	// t1_heli_light_trans t1_heli_light_attack
			"HueyPack", // t1_heli_medium_at
			"JS_JC_FA18"	// t1_fighterjet_oneseat t1_fighterjet_twoseat
		};
	};
};
/*
class CfgFactionClasses
{
	class T1_Units
	{
		displayName = "T1 Units";
		side = 1;
		priority = 10;
		icon = "\t1_units\data\cfgFactionClasses_T1_ca.paa";
	};
};
*/
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
	class Diver
	{
		displayName = "Men (Diver)";
	};
	class Pilot
	{
		displayName = "Men (Pilot)";
	};
	class Ammo
	{
		displayName = "Ammo";
	};
};
class CfgVehicles {
	// car: USA Army-W M1025A2 M2
	// I'm including the unarmed and mk19 variants
	class rhsusf_m1025_w_s;
	class t1_car_light : rhsusf_m1025_w_s {
		faction = "T1_Units";
		crew = "T1_Soldier_F";
		transportmaxmagazines = 99999;
		transportmaxweapons = 9999;
		transportmaxbackpacks = 99;
		maximumload = 999999;
		class TransportMagazines
		{
			class riflemag
			{
				magazine = "SMA_30Rnd_556x45_M855A1";
				count = 18;
			};
			class riflemag_tracer
			{
				magazine = "SMA_30Rnd_556x45_M855A1_Tracer";
				count = 4;
			};
			class section_ar_mag
			{
				magazine = "rhs_200rnd_556x45_M_SAW";
				count = 4;
			};				
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 8;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 6;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 8;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 2;
			};
			class _xx_ACE_M84
			{
				magazine = "ACE_M84";
				count = 4;
			};			
		};
		class TransportItems
		{
			class Bandage1
			{
				count = 40;
				name = "ACE_packingBandage";
			};
			class Bandage2
			{
				count = 10;
				name = "ACE_elasticBandage";
			};
			class Tourniquet
			{
				count = 4;
				name = "ACE_tourniquet";
			};
			class _xx_ACE_morphine
			{
				count = 10;
				name = "ACE_morphine";
			};
			class _xx_ACE_epinephrine
			{
				count = 4;
				name = "ACE_epinephrine";
			};
			class saline
			{
				count = 4;
				name = "ACE_bloodIV_500";
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
				count = 1;
			};
			class _xx_HAFM_LAW
			{
				weapon = "HAFM_LAW";
				count = 2;
			};
		};		
	};
	class rhsusf_m1025_w_s_m2;
	class t1_car_light_mg : rhsusf_m1025_w_s_m2 {
		faction = "T1_Units";
		crew = "T1_Soldier_F";
		transportmaxmagazines = 99999;
		transportmaxweapons = 9999;
		transportmaxbackpacks = 99;
		maximumload = 999999;
		class TransportMagazines
		{
			class riflemag
			{
				magazine = "SMA_30Rnd_556x45_M855A1";
				count = 18;
			};
			class riflemag_tracer
			{
				magazine = "SMA_30Rnd_556x45_M855A1_Tracer";
				count = 4;
			};
			class section_ar_mag
			{
				magazine = "rhs_200rnd_556x45_M_SAW";
				count = 4;
			};				
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 8;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 6;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 8;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 2;
			};
			class _xx_ACE_M84
			{
				magazine = "ACE_M84";
				count = 4;
			};			
		};
		class TransportItems
		{
			class Bandage1
			{
				count = 40;
				name = "ACE_packingBandage";
			};
			class Bandage2
			{
				count = 10;
				name = "ACE_elasticBandage";
			};
			class Tourniquet
			{
				count = 4;
				name = "ACE_tourniquet";
			};
			class _xx_ACE_morphine
			{
				count = 10;
				name = "ACE_morphine";
			};
			class _xx_ACE_epinephrine
			{
				count = 4;
				name = "ACE_epinephrine";
			};
			class saline
			{
				count = 4;
				name = "ACE_bloodIV_500";
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
				count = 1;
			};
			class _xx_HAFM_LAW
			{
				weapon = "HAFM_LAW";
				count = 2;
			};
		};
	};
	class rhsusf_m1025_w_s_Mk19;
	class t1_car_light_gl : rhsusf_m1025_w_s_Mk19 {
		faction = "T1_Units";
		crew = "T1_Soldier_F";
		transportmaxmagazines = 99999;
		transportmaxweapons = 9999;
		transportmaxbackpacks = 99;
		maximumload = 999999;
		class TransportMagazines
		{
			class riflemag
			{
				magazine = "SMA_30Rnd_556x45_M855A1";
				count = 18;
			};
			class riflemag_tracer
			{
				magazine = "SMA_30Rnd_556x45_M855A1_Tracer";
				count = 4;
			};
			class section_ar_mag
			{
				magazine = "rhs_200rnd_556x45_M_SAW";
				count = 4;
			};				
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 8;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 6;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 8;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 2;
			};
			class _xx_ACE_M84
			{
				magazine = "ACE_M84";
				count = 4;
			};			
		};
		class TransportItems
		{
			class Bandage1
			{
				count = 40;
				name = "ACE_packingBandage";
			};
			class Bandage2
			{
				count = 10;
				name = "ACE_elasticBandage";
			};
			class Tourniquet
			{
				count = 4;
				name = "ACE_tourniquet";
			};
			class _xx_ACE_morphine
			{
				count = 10;
				name = "ACE_morphine";
			};
			class _xx_ACE_epinephrine
			{
				count = 4;
				name = "ACE_epinephrine";
			};
			class saline
			{
				count = 4;
				name = "ACE_bloodIV_500";
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
				count = 1;
			};
			class _xx_HAFM_LAW
			{
				weapon = "HAFM_LAW";
				count = 2;
			};
		};
	};
	// APC: NATO Namer
	class B_APC_Tracked_01_rcws_F;
	class t1_apc : B_APC_Tracked_01_rcws_F {
		faction = "T1_Units";
		crew = "T1_Crewman_Standard_F";
		transportmaxmagazines = 99999;
		transportmaxweapons = 9999;
		transportmaxbackpacks = 99;
		maximumload = 999999;
		class TransportMagazines
		{
			class riflemag
			{
				magazine = "SMA_30Rnd_556x45_M855A1";
				count = 62;
			};
			class riflemag_tracer
			{
				magazine = "SMA_30Rnd_556x45_M855A1_Tracer";
				count = 12;
			};
			class section_ar_mag
			{
				magazine = "rhs_200rnd_556x45_M_SAW";
				count = 12;
			};				
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 18;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 24;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 18;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 8;
			};
			class _xx_ACE_M84
			{
				magazine = "ACE_M84";
				count = 12;
			};			
		};
		class TransportItems
		{
			class Bandage1
			{
				count = 92;
				name = "ACE_packingBandage";
			};
			class Bandage2
			{
				count = 28;
				name = "ACE_elasticBandage";
			};
			class Tourniquet
			{
				count = 12;
				name = "ACE_tourniquet";
			};
			class _xx_ACE_morphine
			{
				count = 24;
				name = "ACE_morphine";
			};
			class _xx_ACE_epinephrine
			{
				count = 12;
				name = "ACE_epinephrine";
			};
			class saline
			{
				count = 12;
				name = "ACE_bloodIV_500";
			};			
			class _xx_ACRE_PRC148
			{
				count = 4;
				name = "ACRE_PRC148";
			};
		};
		class TransportWeapons
		{
			class _xx_tf47_at4_heat
			{
				weapon = "tf47_at4_heat";
				count = 2;
			};
			class _xx_HAFM_LAW
			{
				weapon = "HAFM_LAW";
				count = 5;
			};
		};
	};
	// IFV: NATO Patria AMV
	class B_APC_Wheeled_01_cannon_F;
	class t1_ifv_wheeled : B_APC_Wheeled_01_cannon_F {
		faction = "T1_Units";
		crew = "T1_Crewman_Standard_F";
		transportmaxmagazines = 99999;
		transportmaxweapons = 9999;
		transportmaxbackpacks = 99;
		maximumload = 999999;
		class TransportMagazines
		{
			class riflemag
			{
				magazine = "SMA_30Rnd_556x45_M855A1";
				count = 62;
			};
			class riflemag_tracer
			{
				magazine = "SMA_30Rnd_556x45_M855A1_Tracer";
				count = 12;
			};
			class section_ar_mag
			{
				magazine = "rhs_200rnd_556x45_M_SAW";
				count = 12;
			};				
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 18;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 24;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 18;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 8;
			};
			class _xx_ACE_M84
			{
				magazine = "ACE_M84";
				count = 12;
			};			
		};
		class TransportItems
		{
			class Bandage1
			{
				count = 92;
				name = "ACE_packingBandage";
			};
			class Bandage2
			{
				count = 28;
				name = "ACE_elasticBandage";
			};
			class Tourniquet
			{
				count = 12;
				name = "ACE_tourniquet";
			};
			class _xx_ACE_morphine
			{
				count = 24;
				name = "ACE_morphine";
			};
			class _xx_ACE_epinephrine
			{
				count = 12;
				name = "ACE_epinephrine";
			};
			class saline
			{
				count = 12;
				name = "ACE_bloodIV_500";
			};			
			class _xx_ACRE_PRC148
			{
				count = 4;
				name = "ACRE_PRC148";
			};
		};
		class TransportWeapons
		{
			class _xx_tf47_at4_heat
			{
				weapon = "tf47_at4_heat";
				count = 2;
			};
			class _xx_HAFM_LAW
			{
				weapon = "HAFM_LAW";
				count = 5;
			};
		};
	};
	// 	tank: NATO Merkava MK IV M
	class B_MBT_01_cannon_F;
	class t1_tank : B_MBT_01_cannon_F {
		faction = "T1_Units";
		crew = "T1_Crewman_Standard_F";
		transportmaxmagazines = 99999;
		transportmaxweapons = 9999;
		transportmaxbackpacks = 99;
		maximumload = 999999;
		class TransportMagazines
		{
			class riflemag
			{
				magazine = "SMA_30Rnd_556x45_M855A1";
				count = 18;
			};
			class riflemag_tracer
			{
				magazine = "SMA_30Rnd_556x45_M855A1_Tracer";
				count = 4;
			};
			class section_ar_mag
			{
				magazine = "rhs_200rnd_556x45_M_SAW";
				count = 4;
			};				
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 8;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 6;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 8;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 2;
			};
			class _xx_ACE_M84
			{
				magazine = "ACE_M84";
				count = 4;
			};			
		};
		class TransportItems
		{
			class Bandage1
			{
				count = 40;
				name = "ACE_packingBandage";
			};
			class Bandage2
			{
				count = 10;
				name = "ACE_elasticBandage";
			};
			class Tourniquet
			{
				count = 4;
				name = "ACE_tourniquet";
			};
			class _xx_ACE_morphine
			{
				count = 10;
				name = "ACE_morphine";
			};
			class _xx_ACE_epinephrine
			{
				count = 4;
				name = "ACE_epinephrine";
			};
			class saline
			{
				count = 4;
				name = "ACE_bloodIV_500";
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
				count = 1;
			};
			class _xx_HAFM_LAW
			{
				weapon = "HAFM_LAW";
				count = 2;
			};
		};
	};
	// helo transport light: NATO MH-6M Little Bird
	class MELB_MH6M;
	class t1_heli_light_trans : MELB_MH6M {
		faction = "T1_Units";
		crew = "T1_Pilot_Camo_F";
	};
	// helo attack light: NATO AH-6M-M Little Bird
	class MELB_AH6M_M;
	class t1_heli_light_attack : MELB_AH6M_M {
		faction = "T1_Units";
		crew = "T1_Pilot_Camo_F";
	};
	// helo transport medium: USA USMC-W UH-1Y FFAR/MG  /  NATO UH-1Y TOW
	class RHS_UH1Y;
	class t1_heli_medium_rockets : RHS_UH1Y {
		faction = "T1_Units";
		crew = "T1_Pilot_Camo_F";
		vehicleClass = "Air";
	};
	class UH1Y_TOW;
	class t1_heli_medium_at : UH1Y_TOW {
		faction = "T1_Units";
		crew = "T1_Pilot_Camo_F";
		vehicleClass = "Air";
	};
	// helo transport heavy: USA Army-W CH-47F
	class RHS_CH_47F;
	class t1_heli_heavy_trans : RHS_CH_47F {
		faction = "T1_Units";
		crew = "T1_Pilot_Camo_F";
		vehicleClass = "Air";
	};
	// helo attack heavy: USA Army-W AH-64D multi-role
	class RHS_AH64D_wd_AA_FS;
	class t1_heli_heavy_attack : RHS_AH64D_wd_AA_FS {
		faction = "T1_Units";
		crew = "T1_Pilot_Camo_F";
		vehicleClass = "Air";
	};
	// jet: NATO F/A-18E
	class JS_JC_FA18E;
	class t1_fighterjet_oneseat : JS_JC_FA18E {
		faction = "T1_Units";
		crew = "T1_Pilot_Camo_F";
	};
	class JS_JC_FA18F;
	class t1_fighterjet_twoseat : JS_JC_FA18F {
		faction = "T1_Units";
		crew = "T1_Pilot_Camo_F";
	};
	
	class UK3CB_BAF_Coyote_Logistics_L134A1_W;
	class t1_support_light : UK3CB_BAF_Coyote_Logistics_L134A1_W {
		faction = "T1_Units";
		crew = "T1_Soldier_F";
	}
	class B_APC_Tracked_01_CRV_F;
	class t1_support_heavy : B_APC_Tracked_01_CRV_F {
		faction = "T1_Units";
		crew = "T1_Crewman_Standard_F";
	}
	// TODO: Make a derivative of "B_Slingload_01_Ammo_F" that has all service types.
};
/* The following is reference material:

	class B_Heli_Light_01_F;
	class B_Heli_Light_01_armed_F;
	class T1_Heli_Light_01_Camo_F: B_Heli_Light_01_F
	{
		scope = 2;
		faction = "T1_Units";
		displayName = "T1 MH9 (Camo)";
		hiddenSelectionsTextures[] = {"\t1_units\data\vehicles\MH9\t1_mh9_camo_co.paa"};
		crew = "T1_Pilot_Camo_F";
	};

	class NATO_Box_Base;
	class B_supplyCrate_F;
	class T1_section_ammobox: B_supplyCrate_F
	{
		vehicleClass = "Ammo";
		displayName = "T1 Section Supply Box";
		transportMaxWeapons = 999;
		transportMaxMagazines = 9999;
		transportMaxBackpacks = 99;
		transportMaxItems = 9999;
		class TransportMagazines
		{
			class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag
			{
				magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
				count = 72;
			};
			class _xx_rhs_200rnd_556x45_M_SAW
			{
				magazine = "rhs_200rnd_556x45_M_SAW";
				count = 18;
			};
			class _xx_20Rnd_762x51_Mag
			{
				magazine = "20Rnd_762x51_Mag";
				count = 12;
			};
			class _xx_11Rnd_45ACP_Mag
			{
				magazine = "11Rnd_45ACP_Mag";
				count = 8;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 16;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 12;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 32;
			};
			class _xx_ACE_M84
			{
				magazine = "ACE_M84";
				count = 16;
			};
		};
		class TransportItems
		{
			class _xx_ACE_quikclot
			{
				count = 80;
				name = "ACE_quikclot";
			};
			class _xx_ACE_morphine
			{
				count = 18;
				name = "ACE_morphine";
			};
			class _xx_ACE_epinephrine
			{
				count = 18;
				name = "ACE_epinephrine";
			};
			class _xx_ACE_bloodIV_250
			{
				count = 10;
				name = "ACE_bloodIV_250";
			};
			class _xx_ACE_CableTie
			{
				count = 20;
				name = "ACE_CableTie";
			};
			class _xx_ACRE_PRC148
			{
				count = 1;
				name = "ACRE_PRC148";
			};
		};
		class TransportWeapons
		{
			class _xx_tf47_at4_hp
			{
				weapon = "tf47_at4_hp";
				count = 1;
			};
		};
		class TransportBackpacks{};
	};
*/
