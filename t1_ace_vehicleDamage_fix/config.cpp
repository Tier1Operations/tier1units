class CfgPatches
{
	class t1_ace_vehicleDamage_fix
	{
		requiredaddons[] = {"ace_cookoff","ace_vehicle_damage"};
		units[] = {"ace_cookoff_Sound"};
		weapons[] = {};
		magazines[] = {};
	};
};



class CfgFunctions
{
	class ace_vehicle_damage
	{
		class ace_vehicle_damage
		{
			file = "t1_ace_vehicleDamage_fix\functions";
			class processHit;
			class t1_disableVehicle;
			class t1_hitPartEF;
			class t1_disableRadar;
		};
	};
};



class CfgSFX
{
	class t1_ace_cookoff_CookOff
	{
		name = "t1_ace_cookoff_cookoff";
		variant0[] = {"\z\ace\addons\cookoff\sounds\cookoff_low_pressure.ogg",6,1,400,0.1,0,0,0};
		variant1[] = {"\z\ace\addons\cookoff\sounds\cookoff_mid_pressure.ogg",6,1,400,0.25,0,0,0};
		variant2[] = {"\z\ace\addons\cookoff\sounds\cookoff_high_pressure.ogg",6,1,400,0.65,0,0,0};
		sounds[] = {"variant0","variant1","variant2"};
		titles[] = {};
		empty[] = {"",0,0,0,0,0,0,0};
	};
};



class CfgSounds
{
	class t1_ace_cookoff_cookoff1
	{
		name = "t1_ace_cookoff_cookoff1";
		sound[] = {"t1_ace_cookOff_fix\sounds\t1_ace_cookoff_cookoff1.ogg",12,1,400,0.1,0,0,0};
		titles[] = {};
	};
	class t1_ace_cookoff_cookoff2
	{
		name = "t1_ace_cookoff_cookoff2";
		sound[] = {"t1_ace_cookOff_fix\sounds\t1_ace_cookoff_cookoff2.ogg",15,1,400,0.25,0,0,0};
		titles[] = {};
	};
	class t1_ace_cookoff_cookoff3
	{
		name = "t1_ace_cookoff_cookoff3";
		sound[] = {"t1_ace_cookOff_fix\sounds\t1_ace_cookoff_cookoff3.ogg",18,1,400,0.65,0,0,0};
		titles[] = {};
	};
	class t1_ace_cookoff_cookoff1_end
	{
		name = "t1_ace_cookoff_cookoff1_end";
		sound[] = {"t1_ace_cookOff_fix\sounds\t1_ace_cookoff_cookoff1_end.ogg",12,1,400,0.1,0,0,0};
		titles[] = {};
	};
	class t1_ace_cookoff_cookoff2_end
	{
		name = "t1_ace_cookoff_cookoff2_end";
		sound[] = {"t1_ace_cookOff_fix\sounds\t1_ace_cookoff_cookoff2_end.ogg",15,1,400,0.25,0,0,0};
		titles[] = {};
	};
	class t1_ace_cookoff_cookoff3_end
	{
		name = "t1_ace_cookoff_cookoff3_end";
		sound[] = {"t1_ace_cookOff_fix\sounds\t1_ace_cookoff_cookoff3_end.ogg",18,1,400,0.65,0,0,0};
		titles[] = {};
	};
};



class CfgVehicles
{
	class Sound;
	class t1_ace_cookoff_Sound: Sound
	{
		_generalMacro = "t1_ace_cookoff_Sound";
		scope = 1;
		sound = "t1_ace_cookoff_CookOff";
	};
};



class Extended_Init_EventHandlers
{
	class Car_F
	{
		class t1_ace_vehicleDamage_fix_HitPartEF
		{
			init = "_this call ace_vehicle_damage_fnc_t1_hitPartEF";
		};
	};
	class Tank_F
	{
		class t1_ace_vehicleDamage_fix_HitPartEF
		{
			init = "_this call ace_vehicle_damage_fnc_t1_hitPartEF";
		};
	};
};