class CfgPatches
{
	class t1_doubleweapons_fix
	{
		requiredaddons[] = {"DW_functions","DW_ACE"};
		units[] = {};
		weapons[] = {};
		magazines[] = {};
	};
};



class CfgFunctions
{
	class DW_doubleWeapons
	{
		tag = "DW";
		
		class Inventory
		{
			class weaponDrop
			{
				file = "t1_doubleweapons_fix\functions\fn_weaponDrop.sqf";
			};
			
			class weaponsShow
			{
				file = "t1_doubleweapons_fix\functions\fn_weaponsShow.sqf";
				postInit = 1;
			};
			
			class weaponOnBack
			{
				file = "t1_doubleweapons_fix\functions\fn_weaponOnBack.sqf";
			};
			
			class fatigueEffect
			{
				file = "t1_doubleweapons_fix\functions\fn_fatigueEffect.sqf";
				postInit = 1;
			};
		};
		
		class Misc
		{
			class unitInit
			{
				file = "t1_doubleweapons_fix\functions\fn_unitInit.sqf";
			};
		};
		
		class Actions
		{
			class weaponsActions
			{
				file = "t1_doubleweapons_fix\functions\fn_weaponsActions.sqf";
				postInit = 1;
			};
		};
	};
	
	class ace_common
	{
		class ace_common
		{
			file = "t1_doubleweapons_fix\functions";
			class getWeight;
		};
	};
};