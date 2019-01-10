class CfgPatches
{
	class t1_ace_overpressure_fix
	{
		requiredaddons[] = {"ace_overpressure"};
		units[] = {};
		weapons[] = {};
		magazines[] = {};
	};
};



class CfgFunctions
{
	class ace_overpressure
	{
		class ace_overpressure
		{
			file = "t1_ace_overpressure_fix\functions";
			class getDistance;
		};
	};
};



class CfgWeapons
{
	class LauncherCore;
	class Launcher: LauncherCore
	{
		ace_overpressure_priority = 1;
		ace_overpressure_angle = 23;
		ace_overpressure_range = 14;
		ace_overpressure_damage = 0.75;
	};
	class Launcher_Base_F: Launcher{};
	class launch_Titan_base: Launcher_Base_F
	{
		ace_overpressure_priority = 1;
		ace_overpressure_angle = 23;
		ace_overpressure_range = 11;
		ace_overpressure_damage = 0.7;
	};
	class launch_Titan_short_base: launch_Titan_base
	{
		ace_overpressure_priority = 1;
		ace_overpressure_angle = 20;
		ace_overpressure_range = 10;
		ace_overpressure_damage = 0.65;
	};
	class launch_NLAW_F: Launcher_Base_F
	{
		ace_overpressure_priority = 1;
		ace_overpressure_angle = 20;
		ace_overpressure_range = 10;
		ace_overpressure_damage = 0.65;
	};
	class launch_RPG32_F: Launcher_Base_F
	{
		ace_overpressure_priority = 1;
		ace_overpressure_angle = 25;
		ace_overpressure_range = 15;
		ace_overpressure_damage = 0.8;
	};
	class CannonCore;
	class cannon_120mm: CannonCore
	{
		ace_overpressure_priority = 1;
		ace_overpressure_angle = 30;
		ace_overpressure_range = 50;
		ace_overpressure_damage = 0.85;
	};
	class cannon_125mm: CannonCore
	{
		ace_overpressure_priority = 1;
		ace_overpressure_angle = 30;
		ace_overpressure_range = 50;
		ace_overpressure_damage = 0.85;
	};
	class cannon_105mm: CannonCore
	{
		ace_overpressure_priority = 1;
		ace_overpressure_angle = 32;
		ace_overpressure_range = 40;
		ace_overpressure_damage = 0.85;
	};
	class mortar_155mm_AMOS: CannonCore
	{
		ace_overpressure_priority = 1;
		ace_overpressure_angle = 35;
		ace_overpressure_range = 60;
		ace_overpressure_damage = 1;
	};
	class rhs_weap_M136;
	class rhs_weap_m72a7: rhs_weap_M136
	{
		ace_overpressure_priority = 1;
		ace_overpressure_angle = 18;
		ace_overpressure_range = 13;
		ace_overpressure_damage = 0.7;
	};
	class tf47_m3maaws: Launcher_Base_F
	{
		ace_overpressure_priority = 1;
		ace_overpressure_angle = 25;
		ace_overpressure_range = 15;
		ace_overpressure_damage = 0.8;
	};
	class tf47_at4_heat: Launcher_Base_F
	{
		ace_overpressure_priority = 1;
		ace_overpressure_angle = 17;
		ace_overpressure_range = 9;
		ace_overpressure_damage = 0.6;
	};
};