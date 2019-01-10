class CfgPatches
{
	class t1_ace_fatigue_fix
	{
		requiredaddons[] = {"ace_advanced_fatigue"};
		units[] = {};
		weapons[] = {};
		magazines[] = {};
	};
};

class CfgFunctions
{
	class ace_advanced_fatigue
	{
		class ace_advanced_fatigue
		{
			file = "t1_ace_fatigue_fix\functions";
			class getAnimDuty;
		};
	};
};

class CfgMovesBasic;
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class AmovPercMwlkSlowWrflDf_ver2;
		class AmovPercMwlkSlowWrflDfl_ver2;
		class AmovPercMtacSlowWrflDf_ver2: AmovPercMwlkSlowWrflDf_ver2
		{
			speed = 0.63457;
		};
		class AmovPercMtacSlowWrflDfl_ver2: AmovPercMwlkSlowWrflDfl_ver2
		{
			speed = 0.63457;
		};
		class AmovPercMtacSlowWrflDfr_ver2: AmovPercMtacSlowWrflDf_ver2
		{
			speed = 0.63457;
		};
		class AmovPercMtacSlowWrflDr_ver2: AmovPercMtacSlowWrflDf_ver2
		{
			speed = 0.63457;
		};
		class AmovPercMtacSlowWrflDl_ver2: AmovPercMtacSlowWrflDf_ver2
		{
			speed = 0.63457;
		};
		class AmovPercMtacSlowWrflDb_ver2: AmovPercMtacSlowWrflDf_ver2
		{
			speed = 0.684541;
		};
		class AmovPercMtacSlowWrflDbl_ver2: AmovPercMtacSlowWrflDb_ver2
		{
			speed = 0.684541;
		};
		class AmovPercMtacSlowWrflDbr_ver2: AmovPercMtacSlowWrflDb_ver2
		{
			speed = 0.684541;
		};
	};
};