class CfgPatches
{
	class t1_leopard2rev_fix
	{
		units[] = {"Leopard_2_Base"};
		weapons[] = {"T1_LMG_Coax_Leopard2", "T1_HMG_RCWS_Leopard2", "T1_Cannon_Leopard2"};
		magazines[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"rhsusf_c_weapons","Leopard2","A3_Armor_F_EPB_MBT_03"};
	};
};



class CfgWeapons
{
	class LMG_RCWS;
	class LMG_coax: LMG_RCWS
	{
		class manual;
		class close;
		class short;
		class medium;
		class far;
	};
	class T1_LMG_Coax_Leopard2: LMG_coax
	{
		maxZeroing = 2000;
		FCSZeroingDelay = 2;
		displayName = "FN MAG";
		
		class manual: manual
		{
			dispersion = 0.0015;
		};
		class close: close
		{
			dispersion = 0.0015;
		};
		class short: short
		{
			dispersion = 0.0015;
		};
		class medium: medium
		{
			dispersion = 0.0015;
		};
		class far: far
		{
			dispersion = 0.0015;
		};
	};
	
	class HMG_127_APC;
	class T1_HMG_RCWS_Leopard2: HMG_127_APC
	{
		maxZeroing = 2000;
		FCSZeroingDelay = 1.75;
	};
	
	class cannon_120mm_long;
	class T1_Cannon_Leopard2: cannon_120mm_long
	{
		maxZeroing = 5000;
		FCSZeroingDelay = 2;
	};
};



class Optics_Commander_02;
class Optics_Gunner_MBT_03;

class CfgVehicles
{
	class LandVehicle;
	class Tank: LandVehicle
	{
		class NewTurret;
	};
	
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
	};
	
	class MBT_03_base_F: Tank_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						class OpticsIn: Optics_Commander_02
						{
							class Wide;
							class Medium;
							class Narrow;
						};
					};
				};
				class OpticsIn: Optics_Gunner_MBT_03
				{
					class Wide;
					class Medium;
					class Narrow;
				};
			};
		};
	};
	
	class Leopard_2_Base: MBT_03_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"T1_Cannon_Leopard2","T1_LMG_Coax_Leopard2"};
				magazines[] = {"28Rnd_120mm_APFSDS_shells_Tracer_Red","14Rnd_120mm_HE_shells_Tracer_Red","2000Rnd_762x51_Belt_Red","2000Rnd_762x51_Belt_Red"};
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400,2500,2600,2700,2800,2900,3000,3100,3200,3300,3400,3500,3600,3700,3800,3900,4000,4100,4200,4300,4400,4500,4600,4700,4800,4900,5000};
				
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						weapons[] = {"T1_HMG_RCWS_Leopard2","SmokeLauncher"};
						magazines[] = {"500Rnd_127x99_mag_Tracer_Red","SmokeLauncherMag"};
						discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000};
						
						class OpticsIn: OpticsIn
						{
							class Wide: Wide{};
							class Medium: Medium{};
							class Narrow: Narrow{};
							class VeryNarrow: Narrow
							{
								initFov = "(35 * 0.05625 / 120)";
								maxFov = "(35 * 0.05625 / 120)";
								minFov = "(35 * 0.05625 / 120)";
							};
						};
					};
				};
				
				class OpticsIn: OpticsIn
				{
					class Wide: Wide{};
					class Medium: Medium{};
					class Narrow: Narrow{};
					class VeryNarrow: Narrow
					{
						initFov = "(35 * 0.05625 / 120)";
						maxFov = "(35 * 0.05625 / 120)";
						minFov = "(35 * 0.05625 / 120)";
					};
				};
			};
		};
		
		class TransportMagazines
		{
			delete _xx_SmokeShell;
			delete _xx_SmokeShellGreen;
			delete _xx_30Rnd_65x39_caseless_mag;
			
			class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag
			{
				magazine = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
				count = 8;
			};
		};
		class TransportWeapons
		{
			delete _xx_arifle_MXC_F;
			
			class rhs_weap_m4a1_carryhandle
			{
				weapon = "rhs_weap_m4a1_carryhandle";
				count = 4;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 4;
			};
			class _xx_Toolkit
			{
				name = "Toolkit";
				count = 1;
			};
		};
	};
};