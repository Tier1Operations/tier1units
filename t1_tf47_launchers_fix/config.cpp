class CfgPatches
{
	class t1_tf47_launchers_fix
	{
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"tf47_launchers","tf47_m3maaws","tf47_at4","tf47_smaw","tf47_launchers_rhs"};
	};
};



class CfgMissions
{
	class Showcases
	{
		class TF47_launchers_Showcase
		{
			briefingName = "TF47 Launcher Range";
			directory = "t1_tf47_launchers_fix\missions\TF47LaunchersRange.Stratis";
		};
	};
};



class CfgFunctions
{
	class TF47_launchers
	{
		class TF47_launchers
		{
			file = "t1_tf47_launchers_fix\functions";
			class airburst;
		};
	};
};



class CfgWeapons
{
	class Launcher_Base_F;
	
	class tf47_m3maaws: Launcher_Base_F
	{		
		ace_overpressure_angle = 50;
		ace_overpressure_range = 7;
		ace_overpressure_damage = 0.6;
	};
};



class CfgAmmo
{
	class ACE_frag_base;
	class ACE_frag_maaws_hedp_1: ACE_frag_base
	{
		hit = 25;
		airFriction = "(-0.01*4.5)";
		caliber = 1.0;
	};
	
	class ACE_frag_maaws_hedp_2: ACE_frag_base
	{
		hit = 25;
		airFriction = "(-0.01*4.0)";
		caliber = 1.0;
	};
	
	class ACE_frag_maaws_hedp_3: ACE_frag_base
	{
		hit = 25;
		airFriction = "(-0.01*3.0)";
		caliber = 1.0;
	};
	
	class ACE_frag_maaws_he_1: ACE_frag_base
	{
		hit = 25;
		airFriction = "(-0.01*3.5)";
		caliber = 1.2;
	};
	
	class ACE_frag_maaws_he_2: ACE_frag_base
	{
		hit = 25;
		airFriction = "(-0.01*3.0)";
		caliber = 1.2;
	};
	
	class ACE_frag_maaws_he_3: ACE_frag_base
	{
		hit = 25;
		airFriction = "(-0.01*2.0)";
		caliber = 1.2;
	};
	
	
	
	class ammo_Penetrator_Base;
	class ammo_Penetrator_tf47_m3maaws_HEAT: ammo_Penetrator_Base
	{
		caliber = 60;
		hit = 550;
		warheadName = "TandemHEAT";
	};
	class ammo_Penetrator_tf47_m3maaws_HEDP: ammo_Penetrator_Base
	{
		caliber = 40;
		hit = 300;
		warheadName = "HEAT";
	};
	class ammo_Penetrator_tf47_at4_m_HEAT: ammo_Penetrator_Base
	{
		caliber = 50;
		hit = 425;
		warheadName = "HEAT";
	};
	class ammo_Penetrator_tf47_at4_m_HEDP: ammo_Penetrator_Base
	{
		caliber = 40;
		hit = 300;
		warheadName = "HEAT";
	};
	class ammo_Penetrator_tf47_at4_m_HP: ammo_Penetrator_Base
	{
		caliber = 60;
		hit = 450;
		warheadName = "HEAT";
	};
	class ammo_Penetrator_tf47_smaw_HEAA: ammo_Penetrator_Base
	{
		caliber = 60;
		hit = 540;
		warheadName = "TandemHEAT";
	};
	class ammo_Penetrator_tf47_smaw_HEDP: ammo_Penetrator_Base
	{
		caliber = 40;
		hit = 290;
		warheadName = "HEAT";
	};
	
	
	
	class RocketBase;
	class tf47_m3maaws_HEAT: RocketBase
	{
		hit = 150;
		indirectHit = 30;
		indirectHitRange = 8;
		explosive = 0.7;
		
		submunitionAmmo = "ammo_Penetrator_tf47_m3maaws_HEAT";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-0.2};
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		warheadName = "TandemHEAT";
		
		ace_frag_enabled = 1;
		ace_frag_classes[] = {"ACE_frag_tiny_HD"};
		ace_frag_metal = 200;
		ace_frag_charge = 45;
		ace_frag_gurney_c = 2830;
		ace_frag_gurney_k = "1/2";
	};
	
	class tf47_m3maaws_HEDP: RocketBase
	{
		hit = 100;
		indirectHit = 50;
		indirectHitRange = 10;
		explosive = 0.85;
		
		submunitionAmmo = "ammo_Penetrator_tf47_m3maaws_HEDP";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-0.2};
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		warheadName = "HEAT";
		
		ace_frag_enabled = 1;
		ace_frag_classes[] = {"ACE_frag_maaws_hedp_1","ACE_frag_maaws_hedp_1","ACE_frag_maaws_hedp_1","ACE_frag_maaws_hedp_1","ACE_frag_maaws_hedp_1","ACE_frag_maaws_hedp_1","ACE_frag_maaws_hedp_1","ACE_frag_maaws_hedp_1","ACE_frag_maaws_hedp_2","ACE_frag_maaws_hedp_3"};
		ace_frag_metal = 200;
		ace_frag_charge = 45;
		ace_frag_gurney_c = 2830;
		ace_frag_gurney_k = "1/2";
	};
	
	class tf47_m3maaws_HE: RocketBase
	{
		hit = 75;
		indirectHit = 50;
		indirectHitRange = 17;
		explosive = 1;
		
		ace_frag_enabled = 1;
		ace_frag_classes[] = {"ACE_frag_maaws_he_1","ACE_frag_maaws_he_1","ACE_frag_maaws_he_1","ACE_frag_maaws_he_1","ACE_frag_maaws_he_1","ACE_frag_maaws_he_1","ACE_frag_maaws_he_1","ACE_frag_maaws_he_1","ACE_frag_maaws_he_2","ACE_frag_maaws_he_3"};
		ace_frag_metal = 200;
		ace_frag_charge = 45;
		ace_frag_gurney_c = 2830;
		ace_frag_gurney_k = "1/2";
	};
	
	class Grenade;
	class tf47_m3maaws_HEAirburst: Grenade
	{
		hit = 75;
		indirectHit = 50;
		indirectHitRange = 18;
		explosive = 1;
		
		ace_frag_enabled = 1;
		ace_frag_classes[] = {"ACE_frag_maaws_he_1","ACE_frag_maaws_he_1","ACE_frag_maaws_he_1","ACE_frag_maaws_he_1","ACE_frag_maaws_he_1","ACE_frag_maaws_he_1","ACE_frag_maaws_he_1","ACE_frag_maaws_he_1","ACE_frag_maaws_he_2","ACE_frag_maaws_he_3"};
		ace_frag_metal = 200;
		ace_frag_charge = 45;
		ace_frag_gurney_c = 2830;
		ace_frag_gurney_k = "1/2";
		
		CraterEffects = "ArtyShellCrater";
		explosionEffects = "MortarExplosion";
	};
	
	class tf47_at4_m_HEAT: RocketBase
	{
		hit = 150;
		indirectHit = 30;
		indirectHitRange = 8;
		
		submunitionAmmo = "ammo_Penetrator_tf47_at4_m_HEAT";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-0.2};
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		warheadName = "HEAT";
	};
	
	class tf47_at4_m_HEDP: tf47_at4_m_HEAT
	{
		hit = 100;
		indirectHit = 50;
		indirectHitRange = 10;
		
		submunitionAmmo = "ammo_Penetrator_tf47_at4_m_HEDP";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-0.2};
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		warheadName = "HEAT";
	};
	
	class tf47_at4_m_HP: tf47_at4_m_HEAT
	{
		hit = 175;
		indirectHit = 20;
		indirectHitRange = 5;
		
		submunitionAmmo = "ammo_Penetrator_tf47_at4_m_HP";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-0.2};
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		warheadName = "HEAT";
	};

	class tf47_smaw_HEAA: RocketBase
	{
		hit = 140;
		indirectHit = 25;
		indirectHitRange = 7;
		
		submunitionAmmo = "ammo_Penetrator_tf47_smaw_HEAA";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-0.2};
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		warheadName = "TandemHEAT";
	};

	class tf47_smaw_HEDP: RocketBase
	{
		hit = 90;
		indirectHit = 45;
		indirectHitRange = 9;
		
		submunitionAmmo = "ammo_Penetrator_tf47_smaw_HEDP";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-0.2};
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		warheadName = "HEAT";
	};
};