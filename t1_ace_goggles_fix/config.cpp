class CfgPatches
{
	class t1_ace_goggles_fix
	{
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"ace_goggles","extended_eventHandlers"};
	};
};

class Extended_Init_EventHandlers
{
	class Man
	{
		class T1_ReplaceACEGogglesEH
		{
			onRespawn = true;
			clientInit = "[_this select 0] execVM '\t1_ace_goggles_fix\Scripts\replaceACEGogglesEH.sqf';";
		};
	};
};