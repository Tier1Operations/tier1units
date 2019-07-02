class CfgPatches
{
	class t1_rhs_m119_fix
	{
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		requiredAddons[] = {"rhsusf_c_statics"};
	};
};



class CfgFunctions
{
	class RHS
	{
		class Functions
		{
			class fired_m119
			{
				file = "t1_rhs_m119_fix\functions\rhs_m119_fired.sqf";
			};
		};
	};
};