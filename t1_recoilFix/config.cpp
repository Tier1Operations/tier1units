#define _ARMA_

//Class hlc_wp_m60e4 : config.bin{
class CfgPatches
{
	class t1_recoilFix
	{
		requiredaddons[] = {"A3_Weapons_F","ace_recoil","rhsusf_c_weapons"};
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		version = "1";
	};
};
class cfgRecoils
{
	class recoil_default;
	
	// RHS M107
	class recoil_m107: recoil_default
	{
		muzzleInner[] = {0,0,0.1,0.1};
		permanent = 0.1;
		
		muzzleOuter[] = {0.28,3.0,0.22,0.22};
		kickBack[] = {0.1,0.1};
		temporary = 0.003;
	};
	
	// Vanilla GM6 Lynx
	class recoil_gm6: recoil_default
	{
		muzzleInner[] = {0,0,0.1,0.1};
		permanent = 0.1;
		
		muzzleOuter[] = {0.26,2.5,0.2,0.2};
		kickBack[] = {0.09,0.09};
		temporary = 0.003;
	};
	
	// Vanilla Noreen Bad News
	class recoil_dmr_02: recoil_default
	{
		muzzleInner[] = {0,0,0.1,0.1};
		permanent = 0.1;
		
		muzzleOuter[] = {0.25,2.0,0.175,0.175};
		kickBack[] = {0.06,0.07};
		temporary = 0.003;
	};
	
	// RHS XM2010
	class recoil_t1_xm2010: recoil_default
	{
		muzzleInner[] = {0,0,0.1,0.1};
		permanent = 0.1;
		
		muzzleOuter[] = {0.30,1.8,0.15,0.15};
		kickBack[] = {0.055,0.065};
		temporary = 0.003;
	};
	
	
	
	//Vanilla M14
	class recoil_dmr_06: recoil_default
	{
		muzzleInner[] = {0,0,0.1,0.1};
		permanent = 0.1;
		
		muzzleOuter[] = {0.8,1.45,0.15,0.14};
		kickBack[] = {0.0525,0.0625};
		temporary = 0.006;
	};
	
	// Vanilla EBR
	class recoil_ebr: recoil_default
	{
		muzzleInner[] = {0,0,0.1,0.1};
		permanent = 0.1;
		
		muzzleOuter[] = {0.75,1.4,0.145,0.14};
		kickBack[] = {0.0525,0.0625};
		temporary = 0.006;
	};
	
	// Vanilla SIG 556
	class recoil_dmr_03: recoil_default
	{
		muzzleInner[] = {0,0,0.1,0.1};
		permanent = 0.1;
		
		muzzleOuter[] = {0.25,1.35,0.13,0.13};
		kickBack[] = {0.05,0.06};
		temporary = 0.006;
	};
	
	// Vanilla HK121/LWMMG
	class recoil_mmg_01: recoil_default
	{
		muzzleInner[] = {0,0,0.1,0.1};
		permanent = 0.1;
		
		muzzleOuter[] = {0.55,1.35,0.13,0.13};
		kickBack[] = {0.055,0.065};
		temporary = 0.006;
	};
	
	// RHS M240
	class recoil_t1_m240: recoil_default
	{
		muzzleInner[] = {0,0,0.1,0.1};
		permanent = 0.1;
		
		muzzleOuter[] = {0.5,1.3,0.1,0.1};
		kickBack[] = {0.05,0.06};
		temporary = 0.005;
	};
	
	// Vanilla Negev NG7
	class recoil_zafir: recoil_default
	{
		muzzleInner[] = {0,0,0.1,0.1};
		permanent = 0.1;
		
		muzzleOuter[] = {0.425,1.05,0.09,0.09};
		kickBack[] = {0.05,0.06};
		temporary = 0.005;
	};
	
	
	
	// RHS M4 Short
	class recoil_t1_m4_s: recoil_default
	{
		muzzleInner[] = {0,0,0.1,0.1};
		permanent = 0.1;
		
		muzzleOuter[] = {0.25,1.0,0.125,0.13};
		kickBack[] = {0.035,0.045};
		temporary = 0.006;
	};
	
	// RHS M4 Long
	class recoil_t1_m4_l: recoil_default
	{
		muzzleInner[] = {0,0,0.1,0.1};
		permanent = 0.1;
		
		muzzleOuter[] = {0.225,0.95,0.12,0.1275};
		kickBack[] = {0.035,0.045};
		temporary = 0.006;
	};
	
	
	
	// Vanilla Stoner
	class recoil_mk200: recoil_default
	{
		muzzleInner[] = {0,0,0.1,0.1};
		permanent = 0.1;
		
		muzzleOuter[] = {0.3,0.9,0.085,0.08};
		kickBack[] = {0.04,0.05};
		temporary = 0.005;
	};
	
	
	
	// RHS M27
	class recoil_t1_m27: recoil_default
	{
		muzzleInner[] = {0,0,0.1,0.1};
		permanent = 0.1;
		
		muzzleOuter[] = {0.2,0.9,0.11,0.125};
		kickBack[] = {0.0325,0.0425};
		temporary = 0.006;
	};
	
	// RHS M16
	class recoil_t1_m16: recoil_default
	{
		muzzleInner[] = {0,0,0.1,0.1};
		permanent = 0.1;
		
		muzzleOuter[] = {0.175,0.8,0.11,0.12};
		kickBack[] = {0.03,0.0375};
		temporary = 0.006;
	};
	
	// RHS M4 Short Grip
	class recoil_t1_m4_s_g: recoil_default
	{
		muzzleInner[] = {0,0,0.1,0.1};
		permanent = 0.1;
		
		muzzleOuter[] = {0.15,0.9,0.11,0.12};
		kickBack[] = {0.0325,0.0425};
		temporary = 0.005;
	};
	
	// RHS M4 Long Grip
	class recoil_t1_m4_l_g: recoil_default
	{
		muzzleInner[] = {0,0,0.1,0.1};
		permanent = 0.1;
		
		muzzleOuter[] = {0.14,0.85,0.11,0.11};
		kickBack[] = {0.0325,0.0425};
		temporary = 0.005;
	};
	
	// RHS M27 Grip
	class recoil_t1_m27_g: recoil_default
	{
		muzzleInner[] = {0,0,0.1,0.1};
		permanent = 0.1;
		
		muzzleOuter[] = {0.13,0.8,0.105,0.105};
		kickBack[] = {0.03,0.04};
		temporary = 0.005;
	};
	
	// RHS M16 Grip
	class recoil_t1_m16_g: recoil_default
	{
		muzzleInner[] = {0,0,0.1,0.1};
		permanent = 0.1;
		
		muzzleOuter[] = {0.12,0.7,0.1,0.1};
		kickBack[] = {0.025,0.035};
		temporary = 0.005;
	};
	
	
	
	// RHS M249 Short (Unknown, No Grip)
	class recoil_t1_m249_s_vfg: recoil_default
	{
		muzzleInner[] = {0,0,0.1,0.1};
		permanent = 0.1;
		
		muzzleOuter[] = {0.45,0.7,0.1,0.1};
		kickBack[] = {0.0375,0.0475};
		temporary = 0.00525;
	};
	
	// RHS M249 Long (Unknown, No Grip)
	class recoil_t1_m249_l_vfg: recoil_default
	{
		muzzleInner[] = {0,0,0.1,0.1};
		permanent = 0.1;
		
		muzzleOuter[] = {0.43,0.68,0.095,0.095};
		kickBack[] = {0.037,0.047};
		temporary = 0.00475;
	};
	
	// RHS M249 Short
	class recoil_t1_m249_s: recoil_default
	{
		muzzleInner[] = {0,0,0.1,0.1};
		permanent = 0.1;
		
		muzzleOuter[] = {0.41,0.675,0.09,0.09};
		kickBack[] = {0.037,0.047};
		temporary = 0.005;
	};
	
	// RHS M249 Long
	class recoil_t1_m249_l: recoil_default
	{
		muzzleInner[] = {0,0,0.1,0.1};
		permanent = 0.1;
		
		muzzleOuter[] = {0.4,0.65,0.085,0.085};
		kickBack[] = {0.035,0.045};
		temporary = 0.0045;
	};
	
	// RHS M249 Short Grip
	class recoil_t1_m249_s_g: recoil_default
	{
		muzzleInner[] = {0,0,0.1,0.1};
		permanent = 0.1;
		
		muzzleOuter[] = {0.27,0.625,0.08,0.08};
		kickBack[] = {0.0325,0.0425};
		temporary = 0.00425;
	};
	
	// Vanilla M249
	class recoil_lim: recoil_default
	{
		muzzleInner[] = {0,0,0.1,0.1};
		permanent = 0.1;
		
		muzzleOuter[] = {0.26,0.61,0.08,0.08};
		kickBack[] = {0.0325,0.0425};
		temporary = 0.00415;
	};
	
	// RHS M249 Long Grip
	class recoil_t1_m249_l_g: recoil_default
	{
		muzzleInner[] = {0,0,0.1,0.1};
		permanent = 0.1;
		
		muzzleOuter[] = {0.25,0.6,0.075,0.075};
		kickBack[] = {0.0325,0.0425};
		temporary = 0.004;
	};
};