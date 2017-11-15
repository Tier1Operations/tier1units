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
			"t1_car_light_d",
			"t1_car_light_mg_d",
			"t1_car_light_gl_d",
			"t1_mrap",
			"t1_mrap_mg",
			"t1_mrap_gl",
			"t1_mrap_d",
			"t1_mrap_mg_d",
			"t1_mrap_gl_d",
			"t1_mrzr_d",
			"t1_mrzr",
			"t1_apc",
			"t1_ifv_wheeled",
			"t1_tank",
			"t1_heli_light_trans",
			"t1_heli_light_attack",
			"t1_heli_medium_rockets",
			"t1_heli_heavy_trans",
			"t1_heli_heavy_attack",
			"t1_fighterjet_oneseat",
			"t1_support_light",
			"t1_support_heavy"
		};
		weapons[] = {};
		magazines[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"t1_units",
			"rhsusf_c_hmmwv",
			"rhsusf_c_RG33L",
			"rhsusf_c_Caiman",
			"rhsusf_c_mrzr",
			"rhsusf_c_melb",
			"RHS_US_A2_AirImport",
			"UK3CB_BAF_Vehicles_Apache",
			"UK3CB_BAF_Vehicles_Coyote_Jackal"
		};
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
	class t1_car_light : rhsusf_m1025_w_s 
	{
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
				magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
				count = 20;
			};
			class riflemag_tracer
			{
				magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red";
				count = 4;
			};
			class _xx_rhs_mag_30Rnd_556x45_Mk262_Stanag
			{
				magazine =  "t1_longrange_556";
				count = 6;
			};
			class section_ar_mag
			{
				magazine = "rhsusf_100Rnd_556x45_soft_pouch";
				count = 10;
			};				
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 8;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 8;
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
				count = 60;
				name = "ACE_fieldDressing";
			};
			class _xx_ACE_morphine
			{
				count = 10;
				name = "ACE_morphine";
			};
			class _xx_ACE_epinephrine
			{
				count = 8;
				name = "ACE_epinephrine";
			};
			class saline
			{
				count = 8;
				name = "ACE_bloodIV";
			};
			class tf_anprc152
			{
				count = 2;
				name = "tf_anprc152";
			};
		};
		class TransportWeapons
		{
			class _xx_tf47_at4_heat
			{
				weapon = "tf47_at4_heat";
				count = 1;
			};
			class _xx_rhs_weap_m72a7
			{
				weapon = "rhs_weap_m72a7";
				count = 2;
			};
		};
	};
	
	class rhsusf_m1025_w_s_m2;
	class t1_car_light_mg : rhsusf_m1025_w_s_m2 
	{
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
				magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
				count = 20;
			};
			class riflemag_tracer
			{
				magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red";
				count = 4;
			};
			class _xx_rhs_mag_30Rnd_556x45_Mk262_Stanag
			{
				magazine =  "t1_longrange_556";
				count = 6;
			};
			class section_ar_mag
			{
				magazine = "rhsusf_100Rnd_556x45_soft_pouch";
				count = 10;
			};				
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 8;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 8;
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
				count = 50;
				name = "ACE_fieldDressing";
			};
			class _xx_ACE_morphine
			{
				count = 10;
				name = "ACE_morphine";
			};
			class _xx_ACE_epinephrine
			{
				count = 8;
				name = "ACE_epinephrine";
			};
			class saline
			{
				count = 8;
				name = "ACE_bloodIV";
			};			
			class tf_anprc152
			{
				count = 2;
				name = "tf_anprc152";
			};
		};
		class TransportWeapons
		{
			class _xx_tf47_at4_heat
			{
				weapon = "tf47_at4_heat";
				count = 1;
			};
			class _xx_rhs_weap_m72a7
			{
				weapon = "rhs_weap_m72a7";
				count = 2;
			};
		};
	};
	
	class rhsusf_m1025_w_s_Mk19;
	class t1_car_light_gl : rhsusf_m1025_w_s_Mk19 
	{
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
				magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
				count = 20;
			};
			class riflemag_tracer
			{
				magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red";
				count = 4;
			};
			class _xx_rhs_mag_30Rnd_556x45_Mk262_Stanag
			{
				magazine =  "t1_longrange_556";
				count = 6;
			};
			class section_ar_mag
			{
				magazine = "rhsusf_100Rnd_556x45_soft_pouch";
				count = 10;
			};				
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 8;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 8;
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
				count = 50;
				name = "ACE_fieldDressing";
			};
			class _xx_ACE_morphine
			{
				count = 10;
				name = "ACE_morphine";
			};
			class _xx_ACE_epinephrine
			{
				count = 8;
				name = "ACE_epinephrine";
			};
			class saline
			{
				count = 8;
				name = "ACE_bloodIV";
			};			
			class tf_anprc152
			{
				count = 2;
				name = "tf_anprc152";
			};
		};
		class TransportWeapons
		{
			class _xx_tf47_at4_heat
			{
				weapon = "tf47_at4_heat";
				count = 1;
			};
			class _xx_rhs_weap_m72a7
			{
				weapon = "rhs_weap_m72a7";
				count = 2;
			};
		};
	};
	//desert Hummvee
	class rhsusf_m1025_d_s;
	class t1_car_light_d : rhsusf_m1025_d_s 
	{
		faction = "T1_Units_Desert";
		crew = "T1_Soldier_F_D";
		transportmaxmagazines = 99999;
		transportmaxweapons = 9999;
		transportmaxbackpacks = 99;
		maximumload = 999999;
		class TransportMagazines
		{
			class riflemag
			{
				magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
				count = 20;
			};
			class riflemag_tracer
			{
				magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red";
				count = 4;
			};
			class _xx_rhs_mag_30Rnd_556x45_Mk262_Stanag
			{
				magazine =  "t1_longrange_556";
				count = 6;
			};
			class section_ar_mag
			{
				magazine = "rhsusf_100Rnd_556x45_soft_pouch";
				count = 10;
			};				
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 8;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 8;
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
				count = 60;
				name = "ACE_fieldDressing";
			};
			class _xx_ACE_morphine
			{
				count = 10;
				name = "ACE_morphine";
			};
			class _xx_ACE_epinephrine
			{
				count = 8;
				name = "ACE_epinephrine";
			};
			class saline
			{
				count = 8;
				name = "ACE_bloodIV";
			};
			class tf_anprc152
			{
				count = 2;
				name = "tf_anprc152";
			};
		};
		class TransportWeapons
		{
			class _xx_tf47_at4_heat
			{
				weapon = "tf47_at4_heat";
				count = 1;
			};
			class _xx_rhs_weap_m72a7
			{
				weapon = "rhs_weap_m72a7";
				count = 2;
			};
		};
	};
	
	class rhsusf_m1025_d_s_m2;
	class t1_car_light_mg_d : rhsusf_m1025_d_s_m2 
	{
		faction = "T1_Units_Desert";
		crew = "T1_Soldier_F_D";
		transportmaxmagazines = 99999;
		transportmaxweapons = 9999;
		transportmaxbackpacks = 99;
		maximumload = 999999;
		class TransportMagazines
		{
			class riflemag
			{
				magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
				count = 20;
			};
			class riflemag_tracer
			{
				magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red";
				count = 4;
			};
			class _xx_rhs_mag_30Rnd_556x45_Mk262_Stanag
			{
				magazine =  "t1_longrange_556";
				count = 6;
			};
			class section_ar_mag
			{
				magazine = "rhsusf_100Rnd_556x45_soft_pouch";
				count = 10;
			};				
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 8;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 8;
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
				count = 50;
				name = "ACE_fieldDressing";
			};
			class _xx_ACE_morphine
			{
				count = 10;
				name = "ACE_morphine";
			};
			class _xx_ACE_epinephrine
			{
				count = 8;
				name = "ACE_epinephrine";
			};
			class saline
			{
				count = 8;
				name = "ACE_bloodIV";
			};			
			class tf_anprc152
			{
				count = 2;
				name = "tf_anprc152";
			};
		};
		class TransportWeapons
		{
			class _xx_tf47_at4_heat
			{
				weapon = "tf47_at4_heat";
				count = 1;
			};
			class _xx_rhs_weap_m72a7
			{
				weapon = "rhs_weap_m72a7";
				count = 2;
			};
		};
	};
	
	class rhsusf_m1025_d_s_Mk19;
	class t1_car_light_gl_d : rhsusf_m1025_d_s_Mk19 
	{
		faction = "T1_Units_Desert";
		crew = "T1_Soldier_F_D";
		transportmaxmagazines = 99999;
		transportmaxweapons = 9999;
		transportmaxbackpacks = 99;
		maximumload = 999999;
		class TransportMagazines
		{
			class riflemag
			{
				magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
				count = 20;
			};
			class riflemag_tracer
			{
				magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red";
				count = 4;
			};
			class _xx_rhs_mag_30Rnd_556x45_Mk262_Stanag
			{
				magazine =  "t1_longrange_556";
				count = 6;
			};
			class section_ar_mag
			{
				magazine = "rhsusf_100Rnd_556x45_soft_pouch";
				count = 10;
			};				
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 8;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 8;
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
				count = 50;
				name = "ACE_fieldDressing";
			};
			class _xx_ACE_morphine
			{
				count = 10;
				name = "ACE_morphine";
			};
			class _xx_ACE_epinephrine
			{
				count = 8;
				name = "ACE_epinephrine";
			};
			class saline
			{
				count = 8;
				name = "ACE_bloodIV";
			};			
			class tf_anprc152
			{
				count = 2;
				name = "tf_anprc152";
			};
		};
		class TransportWeapons
		{
			class _xx_tf47_at4_heat
			{
				weapon = "tf47_at4_heat";
				count = 1;
			};
			class _xx_rhs_weap_m72a7
			{
				weapon = "rhs_weap_m72a7";
				count = 2;
			};
		};
	};
		
	//MRAPs	
	class Truck_01_base_F;
	class rhsusf_caiman_base: Truck_01_base_F
	{
		class AnimationSources;
	};

	class rhsusf_caiman_GPK_base: rhsusf_caiman_base{};
	class rhsusf_M1230_M2_usarmy_d: rhsusf_caiman_GPK_base
	{
		class AnimationSources: AnimationSources
		{
			class LWPK_hide;
		};
	};
	class rhsusf_M1230_MK19_usarmy_d: rhsusf_M1230_M2_usarmy_d
	{
		class AnimationSources: AnimationSources
		{
			class LWPK_hide;
		};
	};
	class rhsusf_M1230_M2_usarmy_wd: rhsusf_M1230_M2_usarmy_d
	{
		class AnimationSources: AnimationSources
		{
			class LWPK_hide;
		};
	};
	class rhsusf_M1230_MK19_usarmy_wd: rhsusf_M1230_MK19_usarmy_d
	{
		class AnimationSources: AnimationSources
		{
			class LWPK_hide;
		};
	};
		
	//MRAP Woodland
	class rhsusf_M1232_usarmy_wd;
	class t1_mrap : rhsusf_M1232_usarmy_wd 
	{
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
				magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
				count = 30;
			};
			class riflemag_tracer
			{
				magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red";
				count = 6;
			};
			class _xx_rhs_mag_30Rnd_556x45_Mk262_Stanag
			{
				magazine =  "t1_longrange_556";
				count = 9;
			};
			class section_ar_mag
			{
				magazine = "rhsusf_100Rnd_556x45_soft_pouch";
				count = 15;
			};				
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 12;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 12;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 12;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 3;
			};
			class _xx_ACE_M84
			{
				magazine = "ACE_M84";
				count = 6;
			};			
		};
		class TransportItems
		{
			class Bandage1
			{
				count = 90;
				name = "ACE_fieldDressing";
			};
			class _xx_ACE_morphine
			{
				count = 15;
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
				name = "ACE_bloodIV";
			};
			class tf_anprc152
			{
				count = 3;
				name = "tf_anprc152";
			};
		};
		class TransportWeapons
		{
			class _xx_tf47_at4_heat
			{
				weapon = "tf47_at4_heat";
				count = 2;
			};
			class _xx_rhs_weap_m72a7
			{
				weapon = "rhs_weap_m72a7";
				count = 3;
			};
		};
	};
	class t1_mrap_mg : rhsusf_M1230_M2_usarmy_wd 
	{
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
				magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
				count = 30;
			};
			class riflemag_tracer
			{
				magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red";
				count = 6;
			};
			class _xx_rhs_mag_30Rnd_556x45_Mk262_Stanag
			{
				magazine =  "t1_longrange_556";
				count = 9;
			};
			class section_ar_mag
			{
				magazine = "rhsusf_100Rnd_556x45_soft_pouch";
				count = 15;
			};				
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 12;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 12;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 12;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 3;
			};
			class _xx_ACE_M84
			{
				magazine = "ACE_M84";
				count = 6;
			};			
		};
		class TransportItems
		{
			class Bandage1
			{
				count = 90;
				name = "ACE_fieldDressing";
			};
			class _xx_ACE_morphine
			{
				count = 15;
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
				name = "ACE_bloodIV";
			};
			class tf_anprc152
			{
				count = 3;
				name = "tf_anprc152";
			};
		};
		class TransportWeapons
		{
			class _xx_tf47_at4_heat
			{
				weapon = "tf47_at4_heat";
				count = 2;
			};
			class _xx_rhs_weap_m72a7
			{
				weapon = "rhs_weap_m72a7";
				count = 3;
			};
		};
		class AnimationSources: AnimationSources
        {
            class LWPK_hide: LWPK_hide
            {
                initPhase = 1;
            };
        };
	};
	class t1_mrap_gl : rhsusf_M1230_MK19_usarmy_wd 
	{
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
				magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
				count = 30;
			};
			class riflemag_tracer
			{
				magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red";
				count = 6;
			};
			class _xx_rhs_mag_30Rnd_556x45_Mk262_Stanag
			{
				magazine =  "t1_longrange_556";
				count = 9;
			};
			class section_ar_mag
			{
				magazine = "rhsusf_100Rnd_556x45_soft_pouch";
				count = 15;
			};				
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 12;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 12;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 12;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 3;
			};
			class _xx_ACE_M84
			{
				magazine = "ACE_M84";
				count = 6;
			};			
		};
		class TransportItems
		{
			class Bandage1
			{
				count = 90;
				name = "ACE_fieldDressing";
			};
			class _xx_ACE_morphine
			{
				count = 15;
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
				name = "ACE_bloodIV";
			};
			class tf_anprc152
			{
				count = 3;
				name = "tf_anprc152";
			};
		};
		class TransportWeapons
		{
			class _xx_tf47_at4_heat
			{
				weapon = "tf47_at4_heat";
				count = 2;
			};
			class _xx_rhs_weap_m72a7
			{
				weapon = "rhs_weap_m72a7";
				count = 3;
			};
		};
		class AnimationSources: AnimationSources
        {
            class LWPK_hide: LWPK_hide
            {
                initPhase = 1;
            };
        };
	};
	
	//MRAP Desert
	class rhsusf_M1232_usarmy_d;
	class t1_mrap_d : rhsusf_M1232_usarmy_d 
	{
		faction = "T1_Units_Desert";
		crew = "T1_Soldier_F_D";
		transportmaxmagazines = 99999;
		transportmaxweapons = 9999;
		transportmaxbackpacks = 99;
		maximumload = 999999;
		class TransportMagazines
		{
			class riflemag
			{
				magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
				count = 30;
			};
			class riflemag_tracer
			{
				magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red";
				count = 6;
			};
			class _xx_rhs_mag_30Rnd_556x45_Mk262_Stanag
			{
				magazine =  "t1_longrange_556";
				count = 9;
			};
			class section_ar_mag
			{
				magazine = "rhsusf_100Rnd_556x45_soft_pouch";
				count = 15;
			};				
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 12;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 12;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 12;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 3;
			};
			class _xx_ACE_M84
			{
				magazine = "ACE_M84";
				count = 6;
			};			
		};
		class TransportItems
		{
			class Bandage1
			{
				count = 90;
				name = "ACE_fieldDressing";
			};
			class _xx_ACE_morphine
			{
				count = 15;
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
				name = "ACE_bloodIV";
			};
			class tf_anprc152
			{
				count = 3;
				name = "tf_anprc152";
			};
		};
		class TransportWeapons
		{
			class _xx_tf47_at4_heat
			{
				weapon = "tf47_at4_heat";
				count = 2;
			};
			class _xx_rhs_weap_m72a7
			{
				weapon = "rhs_weap_m72a7";
				count = 3;
			};
		};

	};
	class t1_mrap_mg_d : rhsusf_M1230_M2_usarmy_d 
	{
		faction = "T1_Units_Desert";
		crew = "T1_Soldier_F_D";
		transportmaxmagazines = 99999;
		transportmaxweapons = 9999;
		transportmaxbackpacks = 99;
		maximumload = 999999;
		class TransportMagazines {
			class riflemag
			{
				magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
				count = 30;
			};
			class riflemag_tracer
			{
				magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red";
				count = 6;
			};
			class _xx_rhs_mag_30Rnd_556x45_Mk262_Stanag
			{
				magazine =  "t1_longrange_556";
				count = 9;
			};
			class section_ar_mag
			{
				magazine = "rhsusf_100Rnd_556x45_soft_pouch";
				count = 15;
			};				
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 12;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 12;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 12;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 3;
			};
			class _xx_ACE_M84
			{
				magazine = "ACE_M84";
				count = 6;
			};			
		};
		class TransportItems {
			class Bandage1
			{
				count = 90;
				name = "ACE_fieldDressing";
			};
			class _xx_ACE_morphine
			{
				count = 15;
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
				name = "ACE_bloodIV";
			};
			class tf_anprc152
			{
				count = 3;
				name = "tf_anprc152";
			};
		};
		class TransportWeapons {
			class _xx_tf47_at4_heat
			{
				weapon = "tf47_at4_heat";
				count = 2;
			};
			class _xx_rhs_weap_m72a7
			{
				weapon = "rhs_weap_m72a7";
				count = 3;
			};
		};
		class AnimationSources: AnimationSources
        {
            class LWPK_hide: LWPK_hide
            {
                initPhase = 1;
            };
        };
	};
	class t1_mrap_gl_d : rhsusf_M1230_MK19_usarmy_d 
	{
		faction = "T1_Units_Desert";
		crew = "T1_Soldier_F_D";
		transportmaxmagazines = 99999;
		transportmaxweapons = 9999;
		transportmaxbackpacks = 99;
		maximumload = 999999;
		class TransportMagazines
		{
			class riflemag
			{
				magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
				count = 30;
			};
			class riflemag_tracer
			{
				magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red";
				count = 6;
			};
			class _xx_rhs_mag_30Rnd_556x45_Mk262_Stanag
			{
				magazine =  "t1_longrange_556";
				count = 9;
			};
			class section_ar_mag
			{
				magazine = "rhsusf_100Rnd_556x45_soft_pouch";
				count = 15;
			};				
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 12;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 12;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 12;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 3;
			};
			class _xx_ACE_M84
			{
				magazine = "ACE_M84";
				count = 6;
			};			
		};
		class TransportItems
		{
			class Bandage1
			{
				count = 90;
				name = "ACE_fieldDressing";
			};
			class _xx_ACE_morphine
			{
				count = 15;
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
				name = "ACE_bloodIV";
			};
			class tf_anprc152
			{
				count = 3;
				name = "tf_anprc152";
			};
		};
		class TransportWeapons
		{
			class _xx_tf47_at4_heat
			{
				weapon = "tf47_at4_heat";
				count = 2;
			};
			class _xx_rhs_weap_m72a7
			{
				weapon = "rhs_weap_m72a7";
				count = 3;
			};
		};
		class AnimationSources: AnimationSources
        {
            class LWPK_hide: LWPK_hide
            {
                initPhase = 1;
            };
        };
	};

	//MRZR SF Buggy Desert
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
		class TransportMagazines
		{
			class _xx_rhsusf_mag_17Rnd_9x19_JHP
			{
				magazine = "rhsusf_mag_17Rnd_9x19_JHP";
				count = 4;
			};
			class _xx_16Rnd_9x21_Mag
			{
				magazine = "16Rnd_9x21_Mag";
				count = 4;
			};
			class _xx_20Rnd_762x51_Mag
			{
				magazine = "ACE_20Rnd_762x51_Mk319_Mod_0_Mag";
				count = 24;
			};
			class _xx_ACE_20Rnd_762x51_Mk316_Mod_0_Mag
			{
				magazine = "ACE_20Rnd_762x51_Mk316_Mod_0_Mag";
				count = 6;
			};
			class ACE_20Rnd_762x51_Mag_SD
			{
				magazine = "ACE_20Rnd_762x51_Mag_SD";
				count = 8;
			};    
			class _xx_rhsusf_50Rnd_762x51_m62_tracer
			{
				magazine = "rhsusf_50Rnd_762x51_m62_tracer";
				count = 10;
			};
			class GLs // leader GLs
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count=8;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 4;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 4;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 1;
			};
			class _xx_ACE_M84
			{
				magazine = "ACE_M84";
				count = 4;
			};
			class _xx_rhsusf_5Rnd_300winmag_xm2010
			{
				count = 12;
				magazine = rhsusf_5Rnd_300winmag_xm2010;
			};
			class _xx_7Rnd_408_Mag
			{
				count = 10;
				magazine = 7Rnd_408_Mag;
			};
			class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag
			{
				count = 10;
				magazine = rhs_mag_30Rnd_556x45_M855A1_Stanag;
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
			class MAW
			{
				weapon = "tf47_at4_heat";
				count = 2;
			};
		};
	};
	
	//MRZR SF Buggy Woodland
	class t1_mrzr: t1_mrzr_d 
	{
		faction = "T1_Units";
		crew = "T1_Soldier_F";
		hiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_mrzr\data\blue_grn_mud_co.paa","rhsusf\addons\rhsusf_mrzr\data\yel_grn_mud_co.paa","rhsusf\addons\rhsusf_mrzr\data\red_grn_mud_co.paa","rhsusf\addons\rhsusf_mrzr\data\grn_grn_mud_co.paa","rhsusf\addons\rhsusf_mrzr\data\merged\orng_grn_mud_co.paa"};
	}

	
	// APC: NATO Namer
	class B_APC_Tracked_01_rcws_F;
	class t1_apc : B_APC_Tracked_01_rcws_F 
	{
		faction = "T1_Units";
		crew = "T1_Crewman_Standard_F";
		transportmaxmagazines = 99999;
		transportmaxweapons = 9999;
		transportmaxbackpacks = 99;
		maximumload = 999999;
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
			class _xx_tf_anprc15
			{
				count = 4;
				name = "tf_anprc152";
			};			
			class tf_anprc152
			{
				count = 4;
				name = "tf_anprc152";
			};
		};
		class TransportWeapons
		{
			class _xx_tf47_at4_heat
			{
				weapon = "tf47_at4_heat";
				count = 4;
			};		  
			class _xx_rhs_weap_m72a7
			{
				weapon = "rhs_weap_m72a7";
				count = 10;
			};			
		};
	};
	// IFV: NATO Patria AMV
	class B_APC_Wheeled_01_cannon_F;
	class t1_ifv_wheeled : B_APC_Wheeled_01_cannon_F 
	{
		faction = "T1_Units";
		crew = "T1_Crewman_Standard_F";
		transportmaxmagazines = 99999;
		transportmaxweapons = 9999;
		transportmaxbackpacks = 99;
		maximumload = 999999;
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
			class tf_anprc152
			{
				count = 4;
				name = "tf_anprc152";
			};
		};
		class TransportWeapons
		{
			class _xx_tf47_at4_heat
			{
				weapon = "tf47_at4_heat";
				count = 4;
			};		  
			class _xx_rhs_weap_m72a7
			{
				weapon = "rhs_weap_m72a7";
				count = 10;
			};			
		};
	};
	// 	tank: NATO Leopard 2 MBT Revolution Woodland
	class Leopard_2_wd;
	class t1_tank : Leopard_2_wd 
	{
		faction = "T1_Units";
		crew = "T1_Crewman_Standard_F";
	};
	// helo transport light: NATO MH-6M Little Bird
	class RHS_MELB_MH6M;
	class t1_heli_light_trans : RHS_MELB_MH6M 
	{
		faction = "T1_Units";
		crew = "T1_Pilot_Camo_F";
	};
	// helo attack light: NATO AH-6M-M Little Bird
	class RHS_MELB_AH6M_M;
	class t1_heli_light_attack : RHS_MELB_AH6M_M 
	{
		faction = "T1_Units";
		crew = "T1_Pilot_Camo_F";
	};
	// helo transport medium: USA USMC-W UH-1Y FFAR/MG
	class RHS_UH1Y;
	class t1_heli_medium_rockets : RHS_UH1Y 
	{
		faction = "T1_Units";
		crew = "T1_Pilot_Camo_F";
		vehicleClass = "Air";
	};

	// helo transport heavy: USA Army-W CH-47F
	class RHS_CH_47F;
	class t1_heli_heavy_trans : RHS_CH_47F 
	{
		faction = "T1_Units";
		crew = "T1_Pilot_Camo_F";
		vehicleClass = "Air";
	};
    // helo attack heavy: NATO (British) Apache multi-role
    class UK3CB_BAF_Apache_AH1_JS;
    class t1_heli_heavy_attack : UK3CB_BAF_Apache_AH1_JS 
	{
        faction = "T1_Units";
        crew = "T1_Pilot_Camo_F";
        vehicleClass = "Air";
    };
	// Vanilla plane
	class B_Plane_CAS_01_dynamicLoadout_F;
	class t1_fighterjet_oneseat : B_Plane_CAS_01_dynamicLoadout_F 
	{
		faction = "T1_Units";
		crew = "T1_Pilot_Camo_F";
	};
	class UK3CB_BAF_Coyote_Logistics_L134A1_W;
	class t1_support_light : UK3CB_BAF_Coyote_Logistics_L134A1_W 
	{
		faction = "T1_Units";
		crew = "T1_Soldier_F";
	}
	class B_APC_Tracked_01_CRV_F;
	class t1_support_heavy : B_APC_Tracked_01_CRV_F 
	{
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
			class _xx_tf_anprc15
			{
				count = 1;
				name = "tf_anprc152";
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
