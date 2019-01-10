class CfgPatches
{
	class t1_hk416_fix
	{
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F", "t1_recoilFix","ace_ballistics","t1_units"};
	};
};

class Mode_SemiAuto;
class Mode_FullAuto;
class CfgWeapons
{
	class Rifle_Base_F;
	class arifle_SPAR_01_base_F: Rifle_Base_F
	{
		magazines[] += {"T1_30Rnd_556x45_Stanag_SD","t1_longrange_556","rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk262_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Yellow","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Orange","rhs_mag_30Rnd_556x45_M200_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Yellow"};
		
		class Single;
		class FullAuto;
		class WeaponSlotsInfo;
	};
	
	class arifle_SPAR_01_blk_F: arifle_SPAR_01_base_F
	{
		recoil = "recoil_t1_m4_s";
		initSpeed = -0.93;
		
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 54;
		};
		
		class Single: Single
		{
			dispersion = 0.00095;
		};
		
		class FullAuto: FullAuto
		{
			dispersion = 0.00095;
		};
	};
	
	class arifle_SPAR_01_GL_base_F: arifle_SPAR_01_base_F
	{
		class Single;
		class FullAuto;
		class WeaponSlotsInfo;
	};
	
	class arifle_SPAR_01_GL_blk_F: arifle_SPAR_01_GL_base_F
	{
		recoil = "recoil_t1_m4_s";
		initSpeed = -0.93;
		
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 81;
		};
		
		class Single: Single
		{
			dispersion = 0.00095;
		};
		
		class FullAuto: FullAuto
		{
			dispersion = 0.00095;
		};
	};
	
	class arifle_SPAR_02_base_F: Rifle_Base_F
	{
		magazines[] += {"T1_150Rnd_556x45_Drum_Mag_F_SD"};
		
		class Single;
		class FullAuto;
		class WeaponSlotsInfo;
	};
	
	class arifle_SPAR_02_blk_F: arifle_SPAR_02_base_F
	{
		recoil = "recoil_t1_m4_l";
		initSpeed = -0.94;
		
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 69;
		};
		
		class Single: Single
		{
			dispersion = 0.00085;
		};
		
		class FullAuto: FullAuto
		{
			dispersion = 0.00085;
		};
	};
};