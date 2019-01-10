class CfgPatches
{
	class t1_m14_fix
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
	class DMR_06_base_F: Rifle_Long_Base_F
	{
		class Single;
		class FullAuto;
	};
	
	class srifle_DMR_06_camo_F: DMR_06_base_F
	{
		class Single: Single
		{
			dispersion = 0.0005;
		};
		
		class FullAuto: FullAuto
		{
			dispersion = 0.0005;
		};
	};
};