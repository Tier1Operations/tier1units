class CfgPatches
{
	class t1_rhs_law_fix
	{
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"rhsusf_c_weapons"};
	};
};

class CfgFunctions
{
	class t1_rhs_law_fix
	{
		class t1_rhs_law_fix
		{
			file = "t1_rhs_law_fix\functions";
			class giveLawRocket;
		};
	};
};

class Extended_Init_EventHandlers
{
	class CAManBase
	{
		class t1_rhs_law_fix_Init
		{
			clientInit = "_this spawn t1_rhs_law_fix_fnc_giveLawRocket";
		};
	};
};

class CfgAmmo
{
	class rhs_ammo_M136_hedp_penetrator;
	class ammo_Penetrator_rhs_ammo_m72a7_rocket: rhs_ammo_M136_hedp_penetrator
	{
		caliber = 30;
		hit = 330;
		warheadName = "HEAT";
	};
	
	class rhs_ammo_M136_hedp_rocket;
	class rhs_ammo_m72a7_rocket: rhs_ammo_M136_hedp_rocket
	{
		hit = 110;
		indirectHit = 25;
		indirectHitRange = 5;
		explosive = 0.8;
		
		submunitionAmmo = "ammo_Penetrator_rhs_ammo_m72a7_rocket";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-0.2};
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		warheadName = "HEAT";
		
		ace_frag_enabled = 1;
		ace_frag_classes[] = {"ACE_frag_tiny_HD"};
		ace_frag_metal = 200;
		ace_frag_charge = 45;
		ace_frag_gurney_c = 2830;
		ace_frag_gurney_k = "1/2";
	};
};

class CfgMagazines
{
	class rhs_m136_hedp_mag;
	
	class rhs_m72a7_mag: rhs_m136_hedp_mag
	{
		displayName = "M72 HEAT";
		descriptionshort = "Type: High Explosive Anti Tank";
		mass = 0;
		initSpeed = 260;
	};
};

class CfgWeapons
{
	class Launcher_Base_F;
	
	class rhs_weap_M136: Launcher_Base_F
	{
		class WeaponSlotsInfo;
	};
	
	class rhs_weap_m72a7: rhs_weap_M136
	{
		displayName = "M72E9";
		descriptionShort = "Rocket launcher<br/>Caliber: 66mm<br/>Type: Single-shot HEAT";
		
		class ItemInfo
		{
			RMBhint = "M72E9";
			onHoverText = "M72E9";
		};
		
		class Library
		{
			libTextDesc = "M72E9 LAW is a portable, one-shot, unguided, anti-tank weapon";
		};
		
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 79;
		};
	};
	
	class rhs_weap_m72a7_used: rhs_weap_m72a7
	{
		descriptionShort = "Used rocket launcher<br/>Caliber: 66mm<br/>Type: Used launcher tube";
		displayname = "M72E9 (used)";
		
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 20;
		};
	};
};