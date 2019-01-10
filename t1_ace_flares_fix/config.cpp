class CfgPatches
{
	class t1_ace_flares_fix
	{
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		requiredAddons[] = {"ace_attach"};
	};
};



class CfgFunctions
{
	class ace_grenades
	{
		class ace_grenades
		{
			class flare {file = "t1_ace_flares_fix\functions\fnc_flare.sqf"};
		};
	};
};