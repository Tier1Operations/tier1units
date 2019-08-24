class CfgPatches
{
	class t1_rhs_m240_fix
	{
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"t1_recoilFix","rhsusf_c_weapons"};
	};
};

class Mode_FullAuto;
class CfgWeapons
{
	class rhs_weap_M249_base;
	class rhs_weap_m240_base: rhs_weap_M249_base
	{
		recoil = "recoil_t1_m240";
		
		ACE_Overheating_JamChance[] = {0,0.00008,0.0003,0.002};
		
		class manual: Mode_FullAuto
		{
			dispersion = 0.0004;
		};
	};
};