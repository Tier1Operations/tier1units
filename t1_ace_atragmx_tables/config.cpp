class CfgPatches
{
	class t1_ace_atragmx_tables
	{
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"ace_atragmx"};
	};
};

class CfgFunctions
{
	class t1_ace_atragmx_tables
	{
		class t1_ace_atragmx_tables
		{
			file = "t1_ace_atragmx_tables\functions";
			class addTables;
		};
	};
};

class Extended_Init_EventHandlers
{
	class CAManBase
	{
		class t1_ace_atragmx_tables
		{
			clientInit = "_this spawn t1_ace_atragmx_tables_fnc_addTables";
		};
	};
};