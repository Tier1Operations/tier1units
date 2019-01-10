class CfgPatches
{
	class t1_556_weight_fix
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
	class 30Rnd_556x45_Stanag: CA_Magazine
	{
		mass = 11;
	};
};