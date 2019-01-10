////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.97
//Fri Oct 21 21:23:06 2016 : Source 'file' date Fri Oct 21 21:23:06 2016
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class t1_ace_settings : config.bin{
class CfgPatches
{
	class t1_mcc_fix
	{
		requiredaddons[] = {"mcc_sandbox"};
		weapons[] = {};
		magazines[] = {};
		units[] = {};
	};
};



class CfgFunctions
{
	class mcc
	{
		class ui
		{
			class curatorInitLine {file = "t1_mcc_fix\functions\fn_curatorInitLine.sqf"};
		};
	};
};