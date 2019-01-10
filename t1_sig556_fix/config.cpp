class CfgPatches
{
	class t1_sig556_fix
	{
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F","ace_flashsuppressors"};
	};
};

class Mode_SemiAuto;
class Mode_FullAuto;
class CfgWeapons
{
	class Rifle_Long_Base_F;
	class DMR_03_base_F: Rifle_Long_Base_F
	{
		class Single;
		class FullAuto;
		class WeaponSlotsInfo;
	};
	
	class srifle_DMR_03_F: DMR_03_base_F
	{
		class Single: Single
		{
			dispersion = 0.0007;
		};
		
		class FullAuto: FullAuto
		{
			dispersion = 0.0007;
		};
		
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 79;
		};
	};
};