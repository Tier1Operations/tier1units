class CfgPatches
{
	class t1_rhs_m249_fix
	{
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"t1_silencer_ammo_fix","t1_recoilFix","rhsusf_c_weapons","T1_Units_Faction1"};
	};
};



class Mode_FullAuto;
class CfgWeapons
{
	class LMG_Mk200_F;
	class rhs_weap_M249_base: LMG_Mk200_F
	{
		recoil = "recoil_t1_m249_l";
		magazines[] += {"T1_30Rnd_556x45_Stanag_SD","t1_longrange_556"};
		
		ACE_Overheating_JamChance[] = {0, 0.0003, 0.0015, 0.0075};
		
		class FullAuto: Mode_FullAuto
		{
			dispersion = 0.000725;
		};
	};
	
	class Rifle_Base_F;
	class rhs_weap_saw_base: Rifle_Base_F
	{
		recoil = "recoil_t1_m249_l";
		
		class FullAuto: Mode_FullAuto
		{
			dispersion = 0.000725;
		};
	};
	
	class rhs_weap_lmg_minimipara: rhs_weap_saw_base
	{
		recoil = "recoil_t1_m249_l";
		magazines[] += {"T1_30Rnd_556x45_Stanag_SD","t1_longrange_556"};
		
		ACE_Overheating_JamChance[] = {0, 0.000075, 0.000375, 0.001875};
		
		class FullAuto: FullAuto
		{
			dispersion = 0.000725;
		};
	};
	
	class rhs_weap_lmg_minimi_railed: rhs_weap_lmg_minimipara
	{
		class FullAuto;
		class WeaponSlotsInfo;
	};
	
	class rhs_weap_m249_pip_S: rhs_weap_lmg_minimi_railed
	{
		recoil = "recoil_t1_m249_s";
		
		ACE_Overheating_JamChance[] = {0, 0.000075, 0.000375, 0.001875};
		
		class FullAuto: FullAuto
		{
			dispersion = 0.000875;
		};
		
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 157;
		};
	};
	
	class rhs_weap_m249_pip_S_para: rhs_weap_m249_pip_S
	{
		recoil = "recoil_t1_m249_s";
		mass = ;
		ACE_Overheating_JamChance[] = {0, 0.000075, 0.000375, 0.001875};
		
		class FullAuto: FullAuto
		{
			dispersion = 0.000875;
		};
		
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 157;
		};
	};
	
	
	
	class rhs_weap_m249_pip_S_vfg: rhs_weap_m249_pip_S
	{
		recoil = "recoil_t1_m249_s_vfg";
		
		ACE_Overheating_JamChance[] = {0, 0.000075, 0.000375, 0.001875};
		
		class FullAuto: FullAuto
		{
			dispersion = 0.000875;
		};
		
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 126;
		};
	};
	
	class rhs_weap_m249_pip_S_vfg1: rhs_weap_m249_pip_S_vfg
	{
		recoil = "recoil_t1_m249_s_g";
	};
	class rhs_weap_m249_pip_S_vfg2: rhs_weap_m249_pip_S_vfg
	{
		recoil = "recoil_t1_m249_s_g";
	};
	class rhs_weap_m249_pip_S_vfg3: rhs_weap_m249_pip_S_vfg
	{
		recoil = "recoil_t1_m249_s_g";
	};
	
	
	
	class rhs_weap_m249_pip_L: rhs_weap_lmg_minimi_railed
	{
		class WeaponSlotsInfo;
	};
	
	class rhs_weap_m249_pip_L_vfg: rhs_weap_m249_pip_L
	{
		recoil = "recoil_t1_m249_l_vfg";
		
		ACE_Overheating_JamChance[] = {0, 0.000075, 0.000375, 0.001875};
		
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 134;
		};
	};
	
	class rhs_weap_m249_pip_L_vfg1: rhs_weap_m249_pip_L_vfg
	{
		recoil = "recoil_t1_m249_l_g";
	};
	class rhs_weap_m249_pip_L_vfg2: rhs_weap_m249_pip_L_vfg
	{
		recoil = "recoil_t1_m249_l_g";
	};
	class rhs_weap_m249_pip_L_vfg3: rhs_weap_m249_pip_L_vfg
	{
		recoil = "recoil_t1_m249_l_g";
	};
};