class CfgPatches
{
	class t1_whitephosphor
	{
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		requiredAddons[] = {};
	};
};



class CfgFunctions
{
	class t1_whitephosphor
	{
		class t1_whitephosphor
		{
			class init {file = "t1_whitephosphor\functions\fn_init.sqf";};
		};
	};
};



class Extended_PostInit_EventHandlers
{
    class t1_whitephosphor_postInit
	{
        init = "[] spawn t1_whitephosphor_fnc_init;";
    };
};