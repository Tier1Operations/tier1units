class CfgPatches
{
	class t1_rhs_humvee_fix
	{
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"rhsusf_c_hmmwv"};
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
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRF2Wheel;
		};
	};
	
	class MRAP_01_base_F: Car_F{};
	
	class rhsusf_hmmwe_base: MRAP_01_base_F
	{
		class HitPoints: HitPoints
		{
			class HitLFWheel: HitLFWheel
			{
				armor = 4;
				explosionShielding = 2;
				minimalHit = 0.02;
			};
			class HitRFWheel: HitRFWheel
			{
				armor = 4;
				explosionShielding = 2;
				minimalHit = 0.02;
			};
			class HitLF2Wheel: HitLF2Wheel
			{
				armor = 4;
				explosionShielding = 2;
				minimalHit = 0.02;
			};
			class HitRF2Wheel: HitRF2Wheel
			{
				armor = 4;
				explosionShielding = 2;
				minimalHit = 0.02;
			};
		};
	};
};