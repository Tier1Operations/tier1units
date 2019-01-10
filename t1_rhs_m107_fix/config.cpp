class CfgPatches
{
	class t1_rhs_m107_fix
	{
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		requiredAddons[] = {"rhsusf_c_weapons","t1_recoilFix"};
	};
};



class Mode_SemiAuto;
class CfgWeapons
{
	class Rifle_Base_F;
	class Rifle_Long_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};
	
	class GM6_base_F: Rifle_Long_Base_F{};
	
	class rhs_weap_M107_Base_F: GM6_base_F
	{
		recoil = "recoil_m107";
		
		class Single: Mode_SemiAuto
		{
			dispersion = 0.000285;
		};
		
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 276;
		};
	};
};



class CfgMagazines
{
	class 10Rnd_RHS_50BMG_Box;
	class rhsusf_mag_10Rnd_STD_50BMG_M33: 10Rnd_RHS_50BMG_Box
	{
		mass = 38;
	};
	class rhsusf_mag_10Rnd_STD_50BMG_mk211: rhsusf_mag_10Rnd_STD_50BMG_M33
	{
		mass = 38;
	};
};