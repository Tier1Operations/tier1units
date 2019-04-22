#define _ARMA_

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
			"t1_support_light"
		};
		weapons[] = {};
		magazines[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"t1_units",
			"rhsusf_c_hmmwv",
			"rhsusf_c_RG33L",
			"rhsusf_c_Caiman",
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
	class rhsusf_m1025_w_s;
	class t1_car_light : rhsusf_m1025_w_s 
	{
		faction = "T1_Units";
		crew = "T1_Soldier_F";
		transportmaxmagazines = 99999;
		transportmaxweapons = 9999;
		transportmaxbackpacks = 99;
		maximumload = 999999;
		reportOwnPosition = 1;
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
			class acre_prc152
			{
				count = 2;
				name = "acre_prc152";
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
#include "acre_rack_hmmwv.hpp"
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
		reportOwnPosition = 1;
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
			class acre_prc152
			{
				count = 2;
				name = "acre_prc152";
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
#include "acre_rack_hmmwv.hpp"
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
		reportOwnPosition = 1;
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
			class acre_prc152
			{
				count = 2;
				name = "acre_prc152";
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
#include "acre_rack_hmmwv.hpp"
	};
	class rhsusf_m1025_d_s;
	class t1_car_light_d : rhsusf_m1025_d_s 
	{
		faction = "T1_Units_Desert";
		crew = "T1_Soldier_F_D";
		transportmaxmagazines = 99999;
		transportmaxweapons = 9999;
		transportmaxbackpacks = 99;
		maximumload = 999999;
		reportOwnPosition = 1;
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
			class acre_prc152
			{
				count = 2;
				name = "acre_prc152";
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
#include "acre_rack_hmmwv.hpp"
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
		reportOwnPosition = 1;
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
			class acre_prc152
			{
				count = 2;
				name = "acre_prc152";
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
#include "acre_rack_hmmwv.hpp"
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
		reportOwnPosition = 1;
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
			class acre_prc152
			{
				count = 2;
				name = "acre_prc152";
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
#include "acre_rack_hmmwv.hpp"
	};
		
	class Truck_01_base_F;
	class rhsusf_caiman_base: Truck_01_base_F
	{
		class AnimationSources;
	};

	class rhsusf_caiman_GPK_base: rhsusf_caiman_base{};
	class rhsusf_M1230_M2_usarmy_d: rhsusf_caiman_GPK_base
	{
		reportOwnPosition = 1;
		class AnimationSources: AnimationSources
		{
			class LWPK_hide;
		};
	};
	class rhsusf_M1230_MK19_usarmy_d: rhsusf_M1230_M2_usarmy_d
	{
		reportOwnPosition = 1;
		class AnimationSources: AnimationSources
		{
			class LWPK_hide;
		};
	};
	class rhsusf_M1230_M2_usarmy_wd: rhsusf_M1230_M2_usarmy_d
	{
		reportOwnPosition = 1;
		class AnimationSources: AnimationSources
		{
			class LWPK_hide;
		};
	};
	class rhsusf_M1230_MK19_usarmy_wd: rhsusf_M1230_MK19_usarmy_d
	{
		reportOwnPosition = 1;
		class AnimationSources: AnimationSources
		{
			class LWPK_hide;
		};
	};
		
	class rhsusf_M1232_usarmy_wd;
	class t1_mrap : rhsusf_M1232_usarmy_wd 
	{
		faction = "T1_Units";
		crew = "T1_Soldier_F";
		transportmaxmagazines = 99999;
		transportmaxweapons = 9999;
		transportmaxbackpacks = 99;
		maximumload = 999999;
		reportOwnPosition = 1;
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
			class acre_prc152
			{
				count = 3;
				name = "acre_prc152";
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
		reportOwnPosition = 1;
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
			class acre_prc152
			{
				count = 3;
				name = "acre_prc152";
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
		reportOwnPosition = 1;
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
			class acre_prc152
			{
				count = 3;
				name = "acre_prc152";
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
	
	class rhsusf_M1232_usarmy_d;
	class t1_mrap_d : rhsusf_M1232_usarmy_d 
	{
		faction = "T1_Units_Desert";
		crew = "T1_Soldier_F_D";
		transportmaxmagazines = 99999;
		transportmaxweapons = 9999;
		transportmaxbackpacks = 99;
		maximumload = 999999;
		reportOwnPosition = 1;
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
			class acre_prc152
			{
				count = 3;
				name = "acre_prc152";
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
		reportOwnPosition = 1;
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
			class acre_prc152
			{
				count = 3;
				name = "acre_prc152";
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
		reportOwnPosition = 1;
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
			class acre_prc152
			{
				count = 3;
				name = "acre_prc152";
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

	class UK3CB_BAF_Coyote_Logistics_L134A1_W;
	class t1_support_light : UK3CB_BAF_Coyote_Logistics_L134A1_W 
	{
		faction = "T1_Units";
		crew = "T1_Soldier_F";
		editorSubcategory = "LOP_Support";	// should check where LOP_ comes from
		reportOwnPosition = 1;
	};

	// TODO: Make a derivative of "B_Slingload_01_Ammo_F" that has all service types.
};
