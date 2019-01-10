class CfgPatches
{
	class t1_ace_flashbang_fix
	{
		requiredaddons[] = {"ace_grenades"};
		units[] = {};
		weapons[] = {};
		magazines[] = {};
	};
};

class CfgFunctions
{
	class ace_grenades
	{
		class ace_grenades
		{
			file = "t1_ace_flashbang_fix\functions";
			class flashbangExplosionEH;
		};
	};
};



class CfgMagazines
{
	class HandGrenade;
	class ACE_M84: HandGrenade
	{
		displayname = "MK20 Stun Grenade";
		displayNameShort = "MK20";
	};
};