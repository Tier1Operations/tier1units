class CfgPatches
{
	class t1_fragFix
	{
		requiredaddons[] = {"ace_frag"};
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		version = "1";
	};
};

class CfgAmmo
{
	class GrenadeBase;
	class G_40mm_HE: GrenadeBase
	{
		ACE_FRAG_CLASSES[] = {"ACE_frag_tiny_40mm_1", "ACE_frag_tiny_40mm_2"};
	};
	
	class G_40mm_HEDP: G_40mm_HE
	{
		ACE_FRAG_CLASSES[] = {"ACE_frag_tiny_40mm_1", "ACE_frag_tiny_40mm_1", "ACE_frag_tiny_40mm_1", "ACE_frag_tiny_40mm_1", "ACE_frag_tiny_40mm_2", "ACE_frag_tiny_40mm_2", "ACE_frag_tiny_40mm_2", "ACE_frag_tiny_40mm_2", "ACE_frag_tiny_40mm_3", "ACE_frag_tiny_40mm_4"};
	};
	
	class Grenade;
	class GrenadeHand: Grenade
	{
		ACE_FRAG_CLASSES[] = {"ACE_frag_tiny_grenadehand_1", "ACE_frag_tiny_grenadehand_1", "ACE_frag_tiny_grenadehand_1", "ACE_frag_tiny_grenadehand_1", "ACE_frag_tiny_grenadehand_2", "ACE_frag_tiny_grenadehand_2", "ACE_frag_tiny_grenadehand_2", "ACE_frag_tiny_grenadehand_2", "ACE_frag_tiny_grenadehand_3", "ACE_frag_tiny_grenadehand_4"};
	};
	
	class ACE_frag_base;
	class ACE_frag_tiny_40mm_1: ACE_frag_base
	{
		hit = 10;
		airFriction = "(-0.01*10)";
		caliber = 0.75;
	};
	
	class ACE_frag_tiny_40mm_2: ACE_frag_base
	{
		hit = 10;
		airFriction = "(-0.01*9)";
		caliber = 0.75;
	};
	
	class ACE_frag_tiny_40mm_3: ACE_frag_base
	{
		hit = 10;
		airFriction = "(-0.01*8)";
		caliber = 0.75;
	};
	
	class ACE_frag_tiny_40mm_4: ACE_frag_base
	{
		hit = 10;
		airFriction = "(-0.01*7.5)";
		caliber = 0.75;
	};
	
	class ACE_frag_tiny_grenadehand_1: ACE_frag_base
	{
		hit = 25;
		airFriction = "(-0.01*7)";
		caliber = 0.75;
	};
	
	class ACE_frag_tiny_grenadehand_2: ACE_frag_base
	{
		hit = 25;
		airFriction = "(-0.01*6)";
		caliber = 0.75;
	};
	
	class ACE_frag_tiny_grenadehand_3: ACE_frag_base
	{
		hit = 25;
		airFriction = "(-0.01*5)";
		caliber = 0.75;
	};
	
	class ACE_frag_tiny_grenadehand_4: ACE_frag_base
	{
		hit = 25;
		airFriction = "(-0.01*4.5)";
		caliber = 0.75;
	};
};