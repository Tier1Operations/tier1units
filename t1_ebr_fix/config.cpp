class CfgPatches
{
	class t1_ebr_fix
	{
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F"};
	};
};

class Mode_SemiAuto;
class Mode_FullAuto;
class CfgWeapons
{
	class Rifle_Base_F;
	class Rifle_Long_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};
	
	class EBR_base_F: Rifle_Long_Base_F
	{
		class Single;
		class FullAuto;
	};
	
	class srifle_EBR_F: EBR_base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 113;
		};
		
		class Single: Single
		{
			dispersion = 0.00055;
		};
		
		class FullAuto: FullAuto
		{
			dispersion = 0.00055;
		};
	};
};