class CfgPatches
{
	class t1_rhs_mrap_fix
	{
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		requiredAddons[] = {"rhsusf_c_Caiman","rhsusf_c_RG33L"};
	};
};

class CfgVehicles
{
	class LandVehicle;
	class Car: LandVehicle
	{
		class NewTurret;
	};
	
	class Car_F: Car
	{
		class HitPoints
		{
			class HitLFWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRF2Wheel;
			class HitLBWheel;
			class HitLMWheel;
			class HitRBWheel;
			class HitRMWheel;
		};
	};
	
	class Truck_F: Car_F
	{
		class HitPoints: HitPoints
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
	
	class Truck_01_base_F: Truck_F{};
	
	class rhsusf_caiman_base: Truck_01_base_F
	{
		class HitPoints: HitPoints
		{
			class HitLBWheel: HitLBWheel
			{
				armor = 2;
				explosionShielding = 2;
				minimalHit = 0.02;
			};
			class HitLF2Wheel: HitLF2Wheel
			{
				armor = 2;
				explosionShielding = 2;
				minimalHit = 0.02;
			};
			class HitLFWheel: HitLFWheel
			{
				armor = 2;
				explosionShielding = 2;
				minimalHit = 0.02;
			};
			class HitLMWheel: HitLMWheel
			{
				armor = 2;
				explosionShielding = 2;
				minimalHit = 0.02;
			};
			class HitRBWheel: HitRBWheel
			{
				armor = 2;
				explosionShielding = 2;
				minimalHit = 0.02;
			};
			class HitRF2Wheel: HitRF2Wheel
			{
				armor = 2;
				explosionShielding = 2;
				minimalHit = 0.02;
			};
			class HitRFWheel: HitRFWheel
			{
				armor = 2;
				explosionShielding = 2;
				minimalHit = 0.02;
			};
			class HitRMWheel: HitRMWheel
			{
				armor = 2;
				explosionShielding = 2;
				minimalHit = 0.02;
			};
		};
	};
	
	class rhsusf_caiman_GPK_base: rhsusf_caiman_base
	{
		class Turrets;
	};
	
	class rhsusf_M1230_M2_usarmy_d: rhsusf_caiman_GPK_base
	{
		class Turrets: Turrets
		{
			class M2_Turret: NewTurret
			{
				magazines[] = {"rhs_mag_100rnd_127x99_mag_Tracer_Red","rhs_mag_100rnd_127x99_mag_Tracer_Red","rhs_mag_100rnd_127x99_mag_Tracer_Red","rhs_mag_100rnd_127x99_mag_Tracer_Red","rhs_mag_100rnd_127x99_mag_Tracer_Red","rhs_mag_100rnd_127x99_mag_Tracer_Red","rhs_mag_100rnd_127x99_mag_Tracer_Red","rhs_mag_100rnd_127x99_mag_Tracer_Red","rhs_mag_100rnd_127x99_mag_Tracer_Red","rhs_mag_100rnd_127x99_mag_Tracer_Red"};
			};
		};
	};
	
	class rhsusf_M1230_MK19_usarmy_d: rhsusf_M1230_M2_usarmy_d
	{
		class Turrets: Turrets
		{
			class M2_Turret: M2_Turret
			{
				magazines[] = {"RHS_48Rnd_40mm_MK19","RHS_48Rnd_40mm_MK19","RHS_48Rnd_40mm_MK19","RHS_48Rnd_40mm_MK19","RHS_48Rnd_40mm_MK19","RHS_48Rnd_40mm_MK19","RHS_48Rnd_40mm_MK19_M430I","RHS_48Rnd_40mm_MK19_M430I","RHS_48Rnd_40mm_MK19_M430I","RHS_48Rnd_40mm_MK19_M430I","RHS_48Rnd_40mm_MK19_M430I","RHS_48Rnd_40mm_MK19_M1001"};
			};
		};
	};
	
	
	class MRAP_01_base_F: Car_F {};
	
	class rhsusf_RG33L_base: MRAP_01_base_F
	{
		class HitPoints: HitPoints
		{
			class HitLBWheel: HitLBWheel
			{
				armor = 2;
				explosionShielding = 2;
				minimalHit = 0.02;
			};
			class HitLF2Wheel: HitLF2Wheel
			{
				armor = 2;
				explosionShielding = 2;
				minimalHit = 0.02;
			};
			class HitLFWheel: HitLFWheel
			{
				armor = 2;
				explosionShielding = 2;
				minimalHit = 0.02;
			};
			class HitLMWheel: HitLMWheel
			{
				armor = 2;
				explosionShielding = 2;
				minimalHit = 0.02;
			};
			class HitRBWheel: HitRBWheel
			{
				armor = 2;
				explosionShielding = 2;
				minimalHit = 0.02;
			};
			class HitRF2Wheel: HitRF2Wheel
			{
				armor = 2;
				explosionShielding = 2;
				minimalHit = 0.02;
			};
			class HitRFWheel: HitRFWheel
			{
				armor = 2;
				explosionShielding = 2;
				minimalHit = 0.02;
			};
			class HitRMWheel: HitRMWheel
			{
				armor = 2;
				explosionShielding = 2;
				minimalHit = 0.02;
			};
		};
	};
};