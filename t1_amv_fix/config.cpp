class CfgPatches
{
	class t1_amv_fix
	{
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F","A3_Armor_F_AMV"};
	};
};

class CfgMagazines
{
	class VehicleMagazine;
	
	class 60Rnd_40mm_GPR_shells: VehicleMagazine
	{
		count = 120;
	};
	
	class 40Rnd_40mm_APFSDS_shells: 60Rnd_40mm_GPR_shells
	{
		count = 80;
	};
	
	class 40Rnd_40mm_APFSDS_Tracer_Red_shells: 40Rnd_40mm_APFSDS_shells
	{
		count = 80;
	};
};

class CfgVehicles
{
	class Car;
	
	class Car_F: Car
	{
		class HitPoints
		{
			class HitLFWheel;
			class HitLBWheel;
			class HitLMWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitRMWheel;
			class HitRF2Wheel;
		};
	};
	
	class Wheeled_APC_F: Car_F{};
	
	class APC_Wheeled_01_base_F: Wheeled_APC_F
	{
		class HitPoints: HitPoints
		{
			class HitLFWheel: HitLFWheel
			{
				armor = 1.5;
				explosionShielding = 0.5;
			};
			
			class HitLBWheel: HitLBWheel
			{
				armor = 1.5;
				explosionShielding = 0.5;
			};
			
			class HitLMWheel: HitLMWheel
			{
				armor = 1.5;
				explosionShielding = 0.5;
			};
			
			class HitLF2Wheel: HitLF2Wheel
			{
				armor = 1.5;
				explosionShielding = 0.5;
			};
			
			class HitRFWheel: HitRFWheel
			{
				armor = 1.5;
				explosionShielding = 0.5;
			};
			
			class HitRBWheel: HitRBWheel
			{
				armor = 1.5;
				explosionShielding = 0.5;
			};
			
			class HitRMWheel: HitRMWheel
			{
				armor = 1.5;
				explosionShielding = 0.5;
			};
			
			class HitRF2Wheel: HitRF2Wheel
			{
				armor = 1.5;
				explosionShielding = 0.5;
			};
		};
	};
};