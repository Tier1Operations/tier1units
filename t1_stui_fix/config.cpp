class CfgPatches
{
	class t1_stui_fix
	{
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		requiredAddons[] = {"STUI_GroupHUD"};
	};
};



class CfgFunctions
{
	class t1_stui_fix
	{
		class t1_stui_fix
		{
			class init {file = "t1_stui_fix\functions\fn_init.sqf"};
		};
	};
};



class Extended_PostInit_EventHandlers
{
    class t1_stui_fix_postInit
	{
        init = "[] spawn t1_stui_fix_fnc_init;";
    };
};