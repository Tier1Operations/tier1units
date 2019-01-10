class CfgPatches
{
	class t1_762_weight_fix
	{
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F"};
	};
};

class CfgMagazines
{
	class CA_Magazine;
	class 20Rnd_762x51_Mag: CA_Magazine
	{
		mass = 16;
	};
};