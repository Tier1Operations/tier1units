class CfgPatches
{
	class t1_overheating_off
	{
		requiredaddons[] = {"ace_overheating"};
		units[] = {};
		weapons[] = {};
		magazines[] = {};
	};
};

class Extended_FiredBIS_EventHandlers
{
	class CAManBase
	{
		class ace_overheating_Overheat
		{
			clientFiredBIS = "";
		};
	};
};