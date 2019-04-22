class CfgPatches
{
	class t1_ace_spectator_fix
	{
		requiredaddons[] = {"ace_spectator"};
		units[] = {};
		weapons[] = {};
		magazines[] = {};
	};
};



class CfgFunctions
{
	class ace_spectator
	{
		class ace_spectator
		{
			class ui_handleMouseZChanged {file = "t1_ace_spectator_fix\functions\fnc_ui_handleMouseZChanged.sqf";};
		};
	};
};