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

class CfgMagazines
{
	class CA_Magazine;
	class rhsusf_50Rnd_762x51: CA_Magazine
	{
		mass = 30;
	};
	class rhsusf_50Rnd_762x51_m61_ap: rhsusf_50Rnd_762x51
	{
		mass = 30;
	};
	class rhsusf_50Rnd_762x51_m62_tracer: rhsusf_50Rnd_762x51
	{
		mass = 30;
	};
	class rhsusf_50Rnd_762x51_m80a1epr: rhsusf_50Rnd_762x51
	{
		mass = 30;
	};
	class rhsusf_50Rnd_762x51_m82_blank: rhsusf_50Rnd_762x51
	{
		mass = 30;
	};
	class rhsusf_50Rnd_762x51_m993: rhsusf_50Rnd_762x51
	{
		mass = 30;
	};
	class rhsusf_100Rnd_762x51: rhsusf_50Rnd_762x51
	{
		mass = 58;
	};
	class rhsusf_100Rnd_762x51_m61_ap: rhsusf_50Rnd_762x51_m61_ap
	{
		mass = 58;
	};
	class rhsusf_100Rnd_762x51_m62_tracer: rhsusf_50Rnd_762x51_m62_tracer
	{
		mass = 58;
	};
	class rhsusf_100Rnd_762x51_m80a1epr: rhsusf_50Rnd_762x51_m80a1epr
	{
		mass = 58;
	};
	class rhsusf_100Rnd_762x51_m82_blank: rhsusf_50Rnd_762x51_m82_blank
	{
		mass = 58;
	};
	class rhsusf_100Rnd_762x51_m993: rhsusf_50Rnd_762x51_m993
	{
		mass = 58;
	};
};