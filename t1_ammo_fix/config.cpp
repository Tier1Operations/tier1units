#define _ARMA_

class CfgPatches
{
	class t1_ammo_fix
	{
		//requiredaddons[] = {"A3_Data_F_Oldman_Loadorder","t1_silencer_ammo_fix","ace_ballistics","rhsusf_c_weapons","rhsusf_c_heavyweapons","rhs_c_weapons","rhs_c_heavyweapons"};
		requiredaddons[] = {"A3_Data_F_Oldman_Loadorder","t1_silencer_ammo_fix","ace_ballistics","rhsusf_c_weapons","rhsusf_c_heavyweapons"};
		units[] = {};
		weapons[] = {};
		magazines[] = {};
	};
};

class CfgAmmo
{
	class SubmunitionBase;
	class SubmunitionBullet;
	class B_762x54_Tracer_Green;
	class B_556x45_Ball_Tracer_Red;
	class B_556x45_Ball_Tracer_Green;
	class B_65x39_Case_yellow;
	class B_65x39_Caseless_green;
	class B_762x51_Tracer_Yellow;
	class BulletCore;
	class ShotgunBase;
	
	class BulletBase: BulletCore
	{
		timeToLive = 10;
		suppressionRadiusBulletClose = 6;
		suppressionRadiusHit = 6;
		dangerRadiusBulletClose = 6;
		dangerRadiusHit = 6;
	};
	
	class B_9x21_Ball: BulletBase
	{
		hit = 7;
		airFriction= -0.00211064;
		typicalSpeed = 320;
		caliber = 0.5;
		audibleFire = 3;
		visibleFire = 1;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 0.7;
		suppressionRadiusHit = 4;
		dangerRadiusBulletClose = 1.4;
		dangerRadiusHit = 4;
	};
	class B_9x21_Ball_Tracer_Green: B_9x21_Ball
	{
		hit = 7;
		airFriction= -0.00222;
		typicalSpeed = 320;
		caliber = 0.5;
		audibleFire = 3;
		visibleFire = 1;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 0.7;
		suppressionRadiusHit = 4;
		dangerRadiusBulletClose = 1.4;
		dangerRadiusHit = 4;
	};
	class ACE_9x19_Ball: B_9x21_Ball
	{
		hit = 7.5;
		airFriction= -0.00201185;
		typicalSpeed = 380;
		caliber = 0.5;
		audibleFire = 3;
		visibleFire = 1.5;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 4;
		suppressionRadiusHit = 4;
		dangerRadiusBulletClose = 4;
		dangerRadiusHit = 4;
	};
	class B_45ACP_Ball: BulletBase
	{
		hit = 9.5;
		airFriction = -0.0023;
		typicalSpeed = 280;
		caliber = 0.6;
		audibleFire = 3;
		visibleFire = 1;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 0.7;
		suppressionRadiusHit = 4;
		dangerRadiusBulletClose = 1.4;
		dangerRadiusHit = 4;
	};
	
	class B_12Gauge_Pellets: ShotgunBase
	{
		hit = 6;
		airFriction = -0.00634;
		typicalSpeed = 404;
		caliber = 0.24;
		audibleFire = 10;
		visibleFire = 1.5;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 4;
		suppressionRadiusHit = 4;
		dangerRadiusBulletClose = 4;
		dangerRadiusHit = 4;
	};
	class B_12Gauge_Slug: BulletBase
	{
		hit = 36;
		airFriction = -0.0045;
		typicalSpeed = 475;
		caliber = 0.5;
		audibleFire = 50;
		visibleFire = 3;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 12;
		suppressionRadiusHit = 12;
		dangerRadiusBulletClose = 12;
		dangerRadiusHit = 12;
	};
	
	
	
	class B_56x15_dual: BulletBase
	{
		hit = 8.5;
		airFriction = -0.0018;
		typicalSpeed = 900;
		caliber = 0.4;
		audibleFire = 20;
		visibleFire = 3;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 5;
		suppressionRadiusHit = 5;
		dangerRadiusBulletClose = 5;
		dangerRadiusHit = 5;
	};
	
	// 7N6M
	class B_545x39_Ball_F: BulletBase
	{
		hit = 9.5;
		airFriction = -0.00119458;
		typicalSpeed = 915;
		caliber = 0.6;
		audibleFire = 35;
		visibleFire = 3;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 6;
		suppressionRadiusHit = 6;
		dangerRadiusBulletClose = 6;
		dangerRadiusHit = 6;
	};
	
	// M855A1
	class B_556x45_Ball: BulletBase
	{
		hit = 10;
		airFriction = -0.00135094;
		typicalSpeed = 940;
		caliber = 0.7;
		audibleFire = 37;
		visibleFire = 3;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 6;
		suppressionRadiusHit = 6;
		dangerRadiusBulletClose = 6;
		dangerRadiusHit = 6;
	};
	class ACE_556x45_Ball_Mk262: B_556x45_Ball
	{
		hit = 11;
		airFriction = -0.0006;
		typicalSpeed = 830;
		caliber = 0.8;
		audibleFire = 37;
		visibleFire = 3;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 6;
		suppressionRadiusHit = 6;
		dangerRadiusBulletClose = 6;
		dangerRadiusHit = 6;
	};
	class ACE_556x45_Ball_Mk318: B_556x45_Ball
	{
		hit = 11.5;
		airFriction = -0.0012588;
		typicalSpeed = 922;
		caliber = 0.9;
		audibleFire = 37;
		visibleFire = 3;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 6;
		suppressionRadiusHit = 6;
		dangerRadiusBulletClose = 6;
		dangerRadiusHit = 6;
	};
	class ACE_556x45_Ball_M995_AP: B_556x45_Ball
	{
		hit = 12;
		airFriction = -0.00126182;
		typicalSpeed = 1013;
		caliber = 1.6;
		audibleFire = 37;
		visibleFire = 3;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 6;
		suppressionRadiusHit = 6;
		dangerRadiusBulletClose = 6;
		dangerRadiusHit = 6;
	};
	class ACE_B_556x45_Ball_Tracer_Dim: B_556x45_Ball_Tracer_Red
	{
		hit = 10;
		airFriction = -0.00131;
		typicalSpeed = 920;
		caliber = 0.7;
		audibleFire = 37;
		visibleFire = 3;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 6;
		suppressionRadiusHit = 6;
		dangerRadiusBulletClose = 6;
		dangerRadiusHit = 6;
	};
	//class T1_B_556x45_Ball_SD: B_556x45_Ball_Tracer_Red
	//{
	//	hit = 5;
	//	airFriction = -0.0025;
	//	typicalSpeed = 325;
	//	caliber = 0.55;
	//	audibleFire = 0.45;
	//	visibleFire = 1.50;
	//	suppressionRadiusBulletClose = 0.5;
	//	suppressionRadiusHit = 4;
	//	dangerRadiusBulletClose = 1;
	//	dangerRadiusHit = 4;
	//};
	class B_580x42_Ball_F: BulletBase
	{
		hit = 12;
		airFriction = -0.00121087;
		typicalSpeed = 870;
		caliber = 0.9;
		audibleFire = 40;
		visibleFire = 3;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 7;
		suppressionRadiusHit = 7;
		dangerRadiusBulletClose = 7;
		dangerRadiusHit = 7;
	};
	class B_762x39_Ball_F: BulletBase
	{
		hit = 15;
		airFriction = -0.00154815;
		typicalSpeed = 718;
		caliber = 1.2;
		audibleFire = 40;
		visibleFire = 3;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 7;
		suppressionRadiusHit = 7;
		dangerRadiusBulletClose = 7;
		dangerRadiusHit = 7;
	};
	class B_762x39_Ball_Green_F: B_762x39_Ball_F
	{
		hit = 15;
		airFriction = -0.00155;
		typicalSpeed = 730;
		caliber = 1.2;
		audibleFire = 40;
		visibleFire = 3;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 7;
		suppressionRadiusHit = 7;
		dangerRadiusBulletClose = 7;
		dangerRadiusHit = 7;
	};
	class B_65x39_Caseless: BulletBase
	{
		hit = 16;
		airFriction = -0.00077363;
		typicalSpeed = 800;
		caliber = 1;
		audibleFire = 45;
		visibleFire = 3;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 8;
		suppressionRadiusHit = 8;
		dangerRadiusBulletClose = 8;
		dangerRadiusHit = 8;
	};
	class B_65x39_Case: B_65x39_Caseless
	{
		hit = 15;
		airFriction = -0.00077363;
		typicalSpeed = 800;
		caliber = 0.9;
		audibleFire = 40;
		visibleFire = 3;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 7;
		suppressionRadiusHit = 7;
		dangerRadiusBulletClose = 7;
		dangerRadiusHit = 7;
	};
	class B_65x39_Minigun_Caseless: SubmunitionBullet
	{
		hit = 16;
		airFriction = -0.00077;
		typicalSpeed = 820;
		caliber = 1;
		audibleFire = 45;
		visibleFire = 3;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 8;
		suppressionRadiusHit = 8;
		dangerRadiusBulletClose = 8;
		dangerRadiusHit = 8;
	};
	class ACE_65x39_Caseless_Tracer_Dim: B_65x39_Case_yellow
	{
		hit = 16;
		airFriction = -0.00078;
		typicalSpeed = 800;
		caliber = 1;
		audibleFire = 45;
		visibleFire = 3;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 8;
		suppressionRadiusHit = 8;
		dangerRadiusBulletClose = 8;
		dangerRadiusHit = 8;
	};
	class ACE_65x39_Caseless_green_Tracer_Dim: B_65x39_Caseless_green
	{
		hit = 16;
		airFriction = -0.00078;
		typicalSpeed = 800;
		caliber = 1;
		audibleFire = 45;
		visibleFire = 3;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 8;
		suppressionRadiusHit = 8;
		dangerRadiusBulletClose = 8;
		dangerRadiusHit = 8;
	};
	class ACE_65x47_Ball_Scenar: B_65x39_Caseless
	{
		hit = 16.5;
		airFriction = -0.00069003;
		typicalSpeed = 820;
		caliber = 1.0;
		audibleFire = 47;
		visibleFire = 3;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 9;
		suppressionRadiusHit = 9;
		dangerRadiusBulletClose = 9;
		dangerRadiusHit = 9;
	};
	class ACE_65_Creedmor_Ball: B_65x39_Caseless
	{
		hit = 17;
		airFriction = -0.00062437;
		typicalSpeed = 860;
		caliber = 1.1;
		audibleFire = 50;
		visibleFire = 3;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 9;
		suppressionRadiusHit = 9;
		dangerRadiusBulletClose = 9;
		dangerRadiusHit = 9;
	};
	
	// M80
	class B_762x51_Ball: BulletBase
	{
		hit = 19;
		airFriction = -0.00103711;
		typicalSpeed = 833;
		caliber = 1.6;
		audibleFire = 55;
		visibleFire = 3;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 10;
		suppressionRadiusHit = 10;
		dangerRadiusBulletClose = 10;
		dangerRadiusHit = 10;
	};
	// M62
	class ACE_B_762x51_Tracer_Dim: B_762x51_Tracer_Yellow
	{
		hit = 19;
		airFriction = -0.00104;
		typicalSpeed = 833;
		caliber = 1.6;
		audibleFire = 55;
		visibleFire = 3;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 10;
		suppressionRadiusHit = 10;
		dangerRadiusBulletClose = 10;
		dangerRadiusHit = 10;
	};
	class B_762x51_Minigun_Tracer_Red_splash: B_762x51_Ball
	{
		hit = 19;
		airFriction = -0.00103711;
		typicalSpeed = 833;
		caliber = 1.6;
		audibleFire = 55;
		visibleFire = 3;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 10;
		suppressionRadiusHit = 10;
		dangerRadiusBulletClose = 10;
		dangerRadiusHit = 10;
	};
	class B_762x51_Minigun_Tracer_Yellow_splash: B_762x51_Minigun_Tracer_Red_splash
	{
		hit = 19;
		airFriction = -0.00103711;
		typicalSpeed = 833;
		caliber = 1.6;
		audibleFire = 55;
		visibleFire = 3;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 10;
		suppressionRadiusHit = 10;
		dangerRadiusBulletClose = 10;
		dangerRadiusHit = 10;
	};
	class ACE_762x51_Ball_M118LR: B_762x51_Ball
	{
		hit = 20.5;
		airFriction = -0.00085157;
		typicalSpeed = 805;
		caliber = 1.8;
		audibleFire = 55;
		visibleFire = 3;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 10;
		suppressionRadiusHit = 10;
		dangerRadiusBulletClose = 10;
		dangerRadiusHit = 10;
	};
	class ACE_762x51_Ball_Mk316_Mod_0: B_762x51_Ball
	{
		hit = 20.5;
		airFriction = -0.00084311;
		typicalSpeed = 550;
		caliber = 1.5;
		audibleFire = 55;
		visibleFire = 3;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 10;
		suppressionRadiusHit = 10;
		dangerRadiusBulletClose = 10;
		dangerRadiusHit = 10;
	};
	class ACE_762x51_Ball_Mk319_Mod_0: B_762x51_Ball
	{
		hit = 21;
		airFriction = -0.00104515;
		typicalSpeed = 900;
		caliber = 1.8;
		audibleFire = 55;
		visibleFire = 3;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 10;
		suppressionRadiusHit = 10;
		dangerRadiusBulletClose = 10;
		dangerRadiusHit = 10;
	};
	class ACE_762x51_Ball_M993_AP: B_762x51_Ball
	{
		hit = 22;
		airFriction = -0.0010939;
		typicalSpeed = 700;
		caliber = 2.2;
		audibleFire = 55;
		visibleFire = 3;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 10;
		suppressionRadiusHit = 10;
		dangerRadiusBulletClose = 10;
		dangerRadiusHit = 10;
	};
	//class ACE_762x51_Ball_Subsonic: B_762x51_Ball
	//{
	//	hit = 9;
	//	airFriction = -0.0030;
	//	typicalSpeed = 320;
	//	caliber = 0.7;
	//	audibleFire = 0.55;
	//	visibleFire = 1.70;
	//	suppressionRadiusBulletClose = 0.5;
	//	suppressionRadiusHit = 4;
	//	dangerRadiusBulletClose = 1.25;
	//	dangerRadiusHit = 4;
	//};
	class B_762x54_Ball: B_762x51_Ball
	{
		hit = 19;
		airFriction = -0.00102329;
		typicalSpeed = 828;
		caliber = 1.8;
		audibleFire = 57;
		visibleFire = 3;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 10;
		suppressionRadiusHit = 10;
		dangerRadiusBulletClose = 10;
		dangerRadiusHit = 10;
	};
	class ACE_762x54_Ball_7T2: B_762x54_Tracer_Green
	{
		hit = 19;
		airFriction = -0.00106104;
		typicalSpeed = 828;
		caliber = 1.8;
		audibleFire = 57;
		visibleFire = 3;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 10;
		suppressionRadiusHit = 10;
		dangerRadiusBulletClose = 10;
		dangerRadiusHit = 10;
	};
	class ACE_762x67_Ball_Mk248_Mod_0: B_762x51_Ball
	{
		hit = 26;
		airFriction = -0.00072468;
		typicalSpeed = 900;
		caliber = 1.8;
		audibleFire = 65;
		visibleFire = 3;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 11;
		suppressionRadiusHit = 11;
		dangerRadiusBulletClose = 11;
		dangerRadiusHit = 11;
	};
	class ACE_762x67_Ball_Mk248_Mod_1: B_762x51_Ball
	{
		hit = 27;
		airFriction = -0.00063027;
		typicalSpeed = 867;
		caliber = 1.9;
		audibleFire = 65;
		visibleFire = 3;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 11;
		suppressionRadiusHit = 11;
		dangerRadiusBulletClose = 11;
		dangerRadiusHit = 11;
	};
	class ACE_762x67_Ball_Berger_Hybrid_OTM: B_762x51_Ball
	{
		hit = 27;
		airFriction = -0.00055262;
		typicalSpeed = 853;
		caliber = 2.0;
		audibleFire = 65;
		visibleFire = 3;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 11;
		suppressionRadiusHit = 11;
		dangerRadiusBulletClose = 11;
		dangerRadiusHit = 11;
	};
	class B_338_NM_Ball: BulletBase
	{
		hit = 26;
		airFriction = -0.00053639;
		typicalSpeed = 820;
		caliber = 1.8;
		audibleFire = 70;
		visibleFire = 4;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 12;
		suppressionRadiusHit = 12;
		dangerRadiusBulletClose = 12;
		dangerRadiusHit = 12;
	};
	class B_338_Ball: BulletBase
	{
		hit = 29;
		airFriction = -0.00060841;
		typicalSpeed = 915;
		caliber = 2;
		audibleFire = 90;
		visibleFire = 5;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 13;
		suppressionRadiusHit = 13;
		dangerRadiusBulletClose = 13;
		dangerRadiusHit = 13;
	};
	class ACE_338_Ball: B_338_Ball
	{
		hit = 29;
		airFriction = -0.00055706;
		typicalSpeed = 826;
		caliber = 2;
		audibleFire = 90;
		visibleFire = 5;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 13;
		suppressionRadiusHit = 13;
		dangerRadiusBulletClose = 13;
		dangerRadiusHit = 13;
	};
	class ACE_338_Ball_API526: B_338_Ball
	{
		hit = 30;
		airFriction = -0.0006922;
		typicalSpeed = 895;
		caliber = 2.8;
		audibleFire = 90;
		visibleFire = 5;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 13;
		suppressionRadiusHit = 13;
		dangerRadiusBulletClose = 13;
		dangerRadiusHit = 13;
	};
	class B_93x64_Ball: BulletBase
	{
		hit = 30;
		airFriction = -0.00110727;
		typicalSpeed = 880;
		caliber = 2.2;
		audibleFire = 100;
		visibleFire = 5;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 14;
		suppressionRadiusHit = 14;
		dangerRadiusBulletClose = 14;
		dangerRadiusHit = 14;
	};
	class B_408_Ball: BulletBase
	{
		hit = 40;
		airFriction = -0.00046249;
		typicalSpeed = 910;
		caliber = 2.4;
		audibleFire = 110;
		visibleFire = 5;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 15;
		suppressionRadiusHit = 15;
		dangerRadiusBulletClose = 15;
		dangerRadiusHit = 15;
	};
	class ACE_408_Ball: BulletBase
	{
		hit = 41;
		airFriction = -0.00065414;
		typicalSpeed = 1067;
		caliber = 2.5;
		audibleFire = 110;
		visibleFire = 5;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 15;
		suppressionRadiusHit = 15;
		dangerRadiusBulletClose = 15;
		dangerRadiusHit = 15;
	};
	class B_127x33_Ball: BulletBase
	{
		hit = 13;
		airFriction = -0.002;
		typicalSpeed = 420;
		caliber = 1;
		suppressionRadiusBulletClose = 5;
		suppressionRadiusHit = 5;
		dangerRadiusBulletClose = 5;
		dangerRadiusHit = 5;
	};
	class B_127x54_Ball: BulletBase
	{
		hit = 22;
		airFriction = -0.00019568;
		typicalSpeed = 300;
		caliber = 1.8;
		audibleFire = 3;
		visibleFire = 1;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 0.7;
		suppressionRadiusHit = 4;
		dangerRadiusBulletClose = 1.4;
		dangerRadiusHit = 4;
	};
	class B_50BW_Ball_F: BulletBase
	{
		hit = 23;
		airFriction = -0.00205896;
		typicalSpeed = 550;
		caliber = 1.9;
		audibleFire = 60;
		visibleFire = 1;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 11;
		suppressionRadiusHit = 11;
		dangerRadiusBulletClose = 11;
		dangerRadiusHit = 11;
	};
	class B_127x99_Ball: BulletBase
	{
		hit = 44;
		airFriction = -0.00058679;
		typicalSpeed = 900;
		caliber = 2.6;
		audibleFire = 120;
		visibleFire = 6;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 16;
		suppressionRadiusHit = 16;
		dangerRadiusBulletClose = 16;
		dangerRadiusHit = 16;
	};
	class ACE_127x99_Ball_AMAX: B_127x99_Ball
	{
		hit = 44;
		airFriction = -0.00037397;
		typicalSpeed = 900;
		caliber = 3;
		audibleFire = 120;
		visibleFire = 6;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 16;
		suppressionRadiusHit = 16;
		dangerRadiusBulletClose = 16;
		dangerRadiusHit = 16;
	};
	class ACE_127x99_API: BulletBase
	{
		hit = 48;
		airFriction = -0.00058679;
		typicalSpeed = 900;
		caliber = 3.5;
		audibleFire = 120;
		visibleFire = 6;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 16;
		suppressionRadiusHit = 16;
		dangerRadiusBulletClose = 16;
		dangerRadiusHit = 16;
	};
	class B_127x108_Ball: BulletBase
	{
		hit = 46.5;
		airFriction = -0.00065098;
		typicalSpeed = 820;
		caliber = 2.8;
		audibleFire = 130;
		visibleFire = 6;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 16;
		suppressionRadiusHit = 16;
		dangerRadiusBulletClose = 16;
		dangerRadiusHit = 16;
	};
	class B_127x108_APDS: B_127x108_Ball
	{
		hit = 54;
		airFriction = -0.0007;
		typicalSpeed = 820;
		caliber = 4;
		audibleFire = 130;
		visibleFire = 6;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 16;
		suppressionRadiusHit = 16;
		dangerRadiusBulletClose = 16;
		dangerRadiusHit = 16;
	};
	
	
	
	// RHS USAF
	class rhs_ammo_9x19_FMJ: BulletBase
	{
		hit = 7.5;
		airFriction= -0.00211185;
		typicalSpeed = 390;
		caliber = 0.5;
		audibleFire = 3;
		visibleFire = 1.5;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 4;
		suppressionRadiusHit = 4;
		dangerRadiusBulletClose = 4;
		dangerRadiusHit = 4;
	};
	class rhs_ammo_9x19_JHP: BulletBase
	{
		hit = 7;
		airFriction= -0.0022;
		typicalSpeed = 300;
		caliber = 0.4;
		audibleFire = 3;
		visibleFire = 1;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 0.7;
		suppressionRadiusHit = 4;
		dangerRadiusBulletClose = 1.4;
		dangerRadiusHit = 4;
	};
	class rhs_ammo_45ACP_MHP: BulletBase
	{
		hit = 9.5;
		airFriction = -0.0023;
		typicalSpeed = 280;
		caliber = 0.5;
		audibleFire = 3;
		visibleFire = 1;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 0.7;
		suppressionRadiusHit = 4;
		dangerRadiusBulletClose = 1.4;
		dangerRadiusHit = 4;
	};
	
	class rhs_ammo_m576_buckshot: B_12Gauge_Pellets
	{
		hit = 11;
		airFriction = -0.008;
		typicalSpeed = 400;
		caliber = 1;
		audibleFire = 11;
		visibleFire = 1.5;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 4;
		suppressionRadiusHit = 4;
		dangerRadiusBulletClose = 4;
		dangerRadiusHit = 4;
	};
	class rhs_ammo_12g_00buckshot: B_12Gauge_Pellets
	{
		hit = 6;
		airFriction = -0.00634;
		typicalSpeed = 404;
		caliber = 0.24;
		audibleFire = 10;
		visibleFire = 1.5;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 4;
		suppressionRadiusHit = 4;
		dangerRadiusBulletClose = 4;
		dangerRadiusHit = 4;
	};
	class rhs_ammo_12g_slug: B_12Gauge_Slug
	{
		hit = 36;
		airFriction = -0.0045;
		typicalSpeed = 475;
		caliber = 0.5;
		audibleFire = 50;
		visibleFire = 3;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 12;
		suppressionRadiusHit = 12;
		dangerRadiusBulletClose = 12;
		dangerRadiusHit = 12;
	};
	class rhs_ammo_12g_FRAG: B_12Gauge_Slug
	{
		hit = 5.75;
		airFriction = -0.0015;
		typicalSpeed = 50;
		caliber = 0.2;
		indirectHit = 6;
		indirectHitRange = 0.5;
		explosive = 1;
		fuseDistance = 3;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		nvgOnly = 0;
		tracerScale = 1.3;
		tracerStartTime = 0.1;
		tracerEndTime = 5;
		audibleFire = 50;
		visibleFire = 3;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 12;
		suppressionRadiusHit = 12;
		dangerRadiusBulletClose = 12;
		dangerRadiusHit = 12;
	};
	class rhs_ammo_12g_HE: rhs_ammo_12g_FRAG
	{
		hit = 30.0;
		airFriction = -0.0015;
		typicalSpeed = 50;
		caliber = 0.25;
		indirectHit = 1;
		indirectHitRange = 0.1667;
		explosive = 0.69;
		fuseDistance = 1.5;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		nvgOnly = 0;
		tracerScale = 1.3;
		tracerStartTime = 0.1;
		tracerEndTime = 5;
		audibleFire = 50;
		visibleFire = 3;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 12;
		suppressionRadiusHit = 12;
		dangerRadiusBulletClose = 12;
		dangerRadiusHit = 12;
	};
	class rhs_ammo_12gHEAP_penetrator: BulletBase
	{
		hit = 20;
		caliber = 0.9;
		class HitEffects
		{
			hitMetal = "ImpactMetal";
			hitMetalPlate = "ImpactMetal";
			hitBuilding = "ImpactPlaster";
			hitConcrete = "ImpactConcrete";
			hitGroundSoft = "ImpactEffectsSmall";
			hitGroundHard = "ImpactEffectsHardGround";
			Hit_Foliage_green = "ImpactLeavesGreen";
			Hit_Foliage_Dead = "ImpactLeavesDead";
			Hit_Foliage_Green_big = "ImpactLeavesGreenBig";
			Hit_Foliage_Palm = "ImpactLeavesPalm";
			Hit_Foliage_Pine = "ImpactLeavesPine";
			hitFoliage = "ImpactLeaves";
			hitGlass = "ImpactGlass";
			hitGlassArmored = "ImpactGlassThin";
			hitWood = "ImpactWood";
			hitPlastic = "ImpactPlastic";
			hitRubber = "ImpactRubber";
			hitMan = "ImpactEffectsBlood";
			hitWater = "ImpactEffectsWater";
			default_mat = "ImpactEffectsHardGround";
		};
	};
	class rhs_ammo_doomsday_buckshot: B_12Gauge_Pellets
	{
		hit = 14;
		indirectHit = 14;
		typicalSpeed = 400;
		caliber = 1;
		audibleFire = 10;
		visibleFire = 1.5;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 4;
		suppressionRadiusHit = 4;
		dangerRadiusBulletClose = 4;
		dangerRadiusHit = 4;
	};
	
	
	class rhs_ammo_556x45_M855_Ball: B_556x45_Ball
	{
		hit = 9.5;
		airFriction = -0.0014;
		typicalSpeed = 750;
		caliber = 0.6;
		audibleFire = 37;
		visibleFire = 3;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 6;
		suppressionRadiusHit = 6;
		dangerRadiusBulletClose = 6;
		dangerRadiusHit = 6;
	};
	class rhs_ammo_556x45_M855_Ball_Red: rhs_ammo_556x45_M855_Ball
	{
		hit = 9.5;
		airFriction = -0.00141;
		typicalSpeed = 750;
		caliber = 0.6;
		audibleFire = 37;
		visibleFire = 3;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 6;
		suppressionRadiusHit = 6;
		dangerRadiusBulletClose = 6;
		dangerRadiusHit = 6;
	};
	class rhs_ammo_556x45_M855_Ball_Green: rhs_ammo_556x45_M855_Ball_Red
	{
		hit = 9.5;
		airFriction = -0.00141;
		typicalSpeed = 750;
		caliber = 0.6;
		audibleFire = 37;
		visibleFire = 3;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 6;
		suppressionRadiusHit = 6;
		dangerRadiusBulletClose = 6;
		dangerRadiusHit = 6;
	};
	class rhs_ammo_556x45_M855_Ball_Yellow: rhs_ammo_556x45_M855_Ball_Red
	{
		hit = 9.5;
		airFriction = -0.00141;
		typicalSpeed = 750;
		caliber = 0.6;
		audibleFire = 37;
		visibleFire = 3;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 6;
		suppressionRadiusHit = 6;
		dangerRadiusBulletClose = 6;
		dangerRadiusHit = 6;
	};
	class rhs_ammo_556x45_M855_Ball_Orange: rhs_ammo_556x45_M855_Ball_Red
	{
		hit = 9.5;
		airFriction = -0.00141;
		typicalSpeed = 750;
		caliber = 0.6;
		audibleFire = 37;
		visibleFire = 3;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 6;
		suppressionRadiusHit = 6;
		dangerRadiusBulletClose = 6;
		dangerRadiusHit = 6;
	};
	class rhs_ammo_556x45_M855A1_Ball: B_556x45_Ball
	{
		hit = 10;
		airFriction = -0.00135094;
		typicalSpeed = 940;
		caliber = 0.7;
		audibleFire = 37;
		visibleFire = 3;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 6;
		suppressionRadiusHit = 6;
		dangerRadiusBulletClose = 6;
		dangerRadiusHit = 6;
	};
	class rhs_ammo_556x45_M855A1_Ball_Red: rhs_ammo_556x45_M855A1_Ball
	{
		hit = 10;
		airFriction = -0.00136;
		typicalSpeed = 940;
		caliber = 0.7;
		audibleFire = 37;
		visibleFire = 3;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 6;
		suppressionRadiusHit = 6;
		dangerRadiusBulletClose = 6;
		dangerRadiusHit = 6;
	};
	class rhs_ammo_556x45_M855A1_Ball_Green: rhs_ammo_556x45_M855A1_Ball_Red
	{
		hit = 10;
		airFriction = -0.00136;
		typicalSpeed = 940;
		caliber = 0.7;
		audibleFire = 37;
		visibleFire = 3;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 6;
		suppressionRadiusHit = 6;
		dangerRadiusBulletClose = 6;
		dangerRadiusHit = 6;
	};
	class rhs_ammo_556x45_M855A1_Ball_Yellow: rhs_ammo_556x45_M855A1_Ball_Red
	{
		hit = 10;
		airFriction = -0.00136;
		typicalSpeed = 940;
		caliber = 0.7;
		audibleFire = 37;
		visibleFire = 3;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 6;
		suppressionRadiusHit = 6;
		dangerRadiusBulletClose = 6;
		dangerRadiusHit = 6;
	};
	class rhs_ammo_556x45_M855A1_Ball_Orange: rhs_ammo_556x45_M855A1_Ball_Red
	{
		hit = 10;
		airFriction = -0.00136;
		typicalSpeed = 940;
		caliber = 0.7;
		audibleFire = 37;
		visibleFire = 3;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 6;
		suppressionRadiusHit = 6;
		dangerRadiusBulletClose = 6;
		dangerRadiusHit = 6;
	};
	class rhs_ammo_556x45_Mk318_Ball: B_556x45_Ball
	{
		hit = 11.5;
		airFriction = -0.0012588;
		typicalSpeed = 922;
		caliber = 0.9;
		audibleFire = 37;
		visibleFire = 3;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 6;
		suppressionRadiusHit = 6;
		dangerRadiusBulletClose = 6;
		dangerRadiusHit = 6;
	};
	class rhs_ammo_556x45_Mk262_Ball: B_556x45_Ball
	{
		hit = 11;
		airFriction = -0.0006;
		typicalSpeed = 830;
		caliber = 0.8;
		audibleFire = 37;
		visibleFire = 3;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 6;
		suppressionRadiusHit = 6;
		dangerRadiusBulletClose = 6;
		dangerRadiusHit = 6;
	};
	class rhs_ammo_762x51_M80_Ball: BulletBase
	{
		hit = 19;
		airFriction = -0.00103711;
		typicalSpeed = 833;
		caliber = 1.6;
		audibleFire = 55;
		visibleFire = 3;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 10;
		suppressionRadiusHit = 10;
		dangerRadiusBulletClose = 10;
		dangerRadiusHit = 10;
	};
	class rhs_ammo_762x51_M61_AP: rhs_ammo_762x51_M80_Ball
	{
		hit = 21.5;
		airFriction = -0.00105148;
		typicalSpeed = 700;
		caliber = 2.0;
		audibleFire = 55;
		visibleFire = 3;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 10;
		suppressionRadiusHit = 10;
		dangerRadiusBulletClose = 10;
		dangerRadiusHit = 10;
	};
	class rhs_ammo_762x51_M62_tracer: rhs_ammo_762x51_M80_Ball
	{
		hit = 19;
		airFriction = -0.00104;
		typicalSpeed = 833;
		caliber = 1.6;
		audibleFire = 55;
		visibleFire = 3;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 10;
		suppressionRadiusHit = 10;
		dangerRadiusBulletClose = 10;
		dangerRadiusHit = 10;
	};
	class rhs_ammo_762x51_M80A1EPR_Ball: rhs_ammo_762x51_M80_Ball
	{
		hit = 20;
		airFriction = -0.00100957;
		typicalSpeed = 900;
		caliber = 1.7;
		audibleFire = 55;
		visibleFire = 3;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 10;
		suppressionRadiusHit = 10;
		dangerRadiusBulletClose = 10;
		dangerRadiusHit = 10;
	};
	class rhs_ammo_762x51_M118_Special_Ball: rhs_ammo_762x51_M80_Ball
	{
		hit = 20.5;
		airFriction = -0.00085157;
		typicalSpeed = 805;
		caliber = 1.8;
		audibleFire = 55;
		visibleFire = 3;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 10;
		suppressionRadiusHit = 10;
		dangerRadiusBulletClose = 10;
		dangerRadiusHit = 10;
	};
	class rhs_ammo_762x51_M993_Ball: rhs_ammo_762x51_M80_Ball
	{
		hit = 22;
		airFriction = -0.0010939;
		typicalSpeed = 700;
		caliber = 2.2;
		audibleFire = 55;
		visibleFire = 3;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 10;
		suppressionRadiusHit = 10;
		dangerRadiusBulletClose = 10;
		dangerRadiusHit = 10;
	};
	class rhsusf_B_300winmag: BulletBase
	{
		hit = 25;
		airFriction = -0.0007034;
		typicalSpeed = 869;
		caliber = 1.8;
		audibleFire = 65;
		visibleFire = 3;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 11;
		suppressionRadiusHit = 11;
		dangerRadiusBulletClose = 11;
		dangerRadiusHit = 11;
	};
	//class T1_rhsusf_B_300winmag_SD: rhsusf_B_300winmag
	//{
	//	hit = 8;
	//	airFriction = -0.00275;
	//	typicalSpeed = 320;
	//	caliber = 0.65;
	//	audibleFire = 0.50;
	//	visibleFire = 1.60;
	//	suppressionRadiusBulletClose = 0.5;
	//	suppressionRadiusHit = 4;
	//	dangerRadiusBulletClose = 1.5;
	//	dangerRadiusHit = 4;
	//};
	class rhsusf_ammo_127x99_M33_Ball: B_127x99_Ball
	{
		hit = 44;
		airFriction = -0.00058679;
		typicalSpeed = 900;
		caliber = 2.6;
		audibleFire = 120;
		visibleFire = 6;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 16;
		suppressionRadiusHit = 16;
		dangerRadiusBulletClose = 16;
		dangerRadiusHit = 16;
	};
	class rhsusf_ammo_127x99_mk211: rhsusf_ammo_127x99_M33_Ball
	{
		hit = 75;
		airFriction = -0.00058;
		typicalSpeed = 900;
		caliber = 4.5;
		explosive = 0.1;
		indirectHit = 4;
		indirectHitRange = 0.6;
		audibleFire = 120;
		visibleFire = 6;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 16;
		suppressionRadiusHit = 16;
		dangerRadiusBulletClose = 16;
		dangerRadiusHit = 16;
	};
	
	
	
	class rhs_ammo_46x30_FMJ: rhs_ammo_556x45_M855A1_Ball
	{
		hit = 9.5;
		airFriction = -0.0016;
		typicalSpeed = 620;
		caliber = 0.65;
		audibleFire = 33;
		visibleFire = 2;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 5;
		suppressionRadiusHit = 5;
		dangerRadiusBulletClose = 5;
		dangerRadiusHit = 5;
	};
	class rhs_ammo_46x30_JHP: rhs_ammo_46x30_FMJ
	{
		hit = 9;
		airFriction = -0.0017;
		typicalSpeed = 700;
		caliber = 0.6;
		audibleFire = 33;
		visibleFire = 2;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 5;
		suppressionRadiusHit = 5;
		dangerRadiusBulletClose = 5;
		dangerRadiusHit = 5;
	};
	class rhs_ammo_46x30_AP: rhs_ammo_46x30_FMJ
	{
		hit = 10;
		airFriction = -0.00165;
		typicalSpeed = 735;
		caliber = 0.6;
		audibleFire = 33;
		visibleFire = 2;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 5;
		suppressionRadiusHit = 5;
		dangerRadiusBulletClose = 5;
		dangerRadiusHit = 5;
	};
	
	
	
	// RHS AFRF
	// 7N6
	/*
	class rhs_B_9x18_57N181S: B_9x21_Ball
	{
		hit = 6.5;
		airFriction= -0.0017671455;
		typicalSpeed = 272;
		caliber = 0.6;
		audibleFire = 3;
		visibleFire = 1.5;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 4;
		suppressionRadiusHit = 4;
		dangerRadiusBulletClose = 4;
		dangerRadiusHit = 4;
	};
	class rhs_B_9x19_7N21: B_9x21_Ball
	{
		hit = 8;
		airFriction= -0.0018;
		typicalSpeed = 393;
		caliber = 0.65;
		audibleFire = 3;
		visibleFire = 1.5;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 4;
		suppressionRadiusHit = 4;
		dangerRadiusBulletClose = 4;
		dangerRadiusHit = 4;
	};
	class rhs_B_9x19_7N31: rhs_B_9x19_7N21
	{
		hit = 8.5;
		airFriction= -0.0017;
		typicalSpeed = 600;
		caliber = 0.7;
		audibleFire = 3;
		visibleFire = 1.5;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 4;
		suppressionRadiusHit = 4;
		dangerRadiusBulletClose = 4;
		dangerRadiusHit = 4;
	};
	
	
	
	class rhs_B_545x39_Ball: B_556x45_Ball
	{
		hit = 9.5;
		airFriction = -0.0016564;
		typicalSpeed = 915;
		caliber = 0.5;
		audibleFire = 35;
		visibleFire = 3;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 6;
		suppressionRadiusHit = 6;
		dangerRadiusBulletClose = 6;
		dangerRadiusHit = 6;
	};
	class rhs_B_545x39_Ball_Tracer_Green: rhs_B_545x39_Ball
	{
		hit = 9.5;
		airFriction = -0.00166;
		typicalSpeed = 915;
		caliber = 0.5;
		audibleFire = 35;
		visibleFire = 3;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 6;
		suppressionRadiusHit = 6;
		dangerRadiusBulletClose = 6;
		dangerRadiusHit = 6;
	};
	class rhs_B_545x39_7N6_Ball: rhs_B_545x39_Ball
	{
		hit = 10;
		airFriction = -0.00119458;
		typicalSpeed = 880;
		caliber = 0.6;
		audibleFire = 35;
		visibleFire = 3;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 6;
		suppressionRadiusHit = 6;
		dangerRadiusBulletClose = 6;
		dangerRadiusHit = 6;
	};
	class rhs_B_545x39_7N10_Ball: rhs_B_545x39_Ball
	{
		hit = 10.5;
		airFriction = -0.0013;
		typicalSpeed = 880;
		caliber = 1.3;
		audibleFire = 35;
		visibleFire = 3;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 6;
		suppressionRadiusHit = 6;
		dangerRadiusBulletClose = 6;
		dangerRadiusHit = 6;
	};
	class rhs_B_545x39_7N22_Ball: rhs_B_545x39_Ball
	{
		hit = 11;
		airFriction = -0.0014;
		typicalSpeed = 890;
		caliber = 1.5;
		audibleFire = 35;
		visibleFire = 3;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 6;
		suppressionRadiusHit = 6;
		dangerRadiusBulletClose = 6;
		dangerRadiusHit = 6;
	};
	class rhs_B_545x39_7N24_Ball: rhs_B_545x39_Ball
	{
		hit = 11.5;
		airFriction = -0.0016;
		typicalSpeed = 890;
		caliber = 1.7;
		audibleFire = 35;
		visibleFire = 3;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 6;
		suppressionRadiusHit = 6;
		dangerRadiusBulletClose = 6;
		dangerRadiusHit = 6;
	};
	class rhs_B_545x39_7U1_Ball: rhs_B_545x39_Ball
	{
		hit = 8.5;
		airFriction = -0.0012;
		typicalSpeed = 303;
		caliber = 0.4;
		audibleFire = 0.50;
		visibleFire = 1.50;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 0.5;
		suppressionRadiusHit = 4;
		dangerRadiusBulletClose = 1;
		dangerRadiusHit = 4;
	};
	class rhs_B_762x39_Ball: B_762x51_Ball
	{
		hit = 16;
		airFriction = -0.00154815;
		typicalSpeed = 718;
		caliber = 1.2;
		audibleFire = 40;
		visibleFire = 3;
		visibleFireTime = 2;
		audibleFire = 40;
		visibleFire = 3;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 7;
		suppressionRadiusHit = 7;
		dangerRadiusBulletClose = 7;
		dangerRadiusHit = 7;
	};
	class rhs_B_762x39_Ball_89: rhs_B_762x39_Ball
	{
		hit = 17;
		airFriction = -0.00151621;
		typicalSpeed = 718;
		caliber = 1.4;
		audibleFire = 40;
		visibleFire = 3;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 7;
		suppressionRadiusHit = 7;
		dangerRadiusBulletClose = 7;
		dangerRadiusHit = 7;
	};
	class rhs_B_762x39_U_Ball: rhs_B_762x39_Ball
	{
		hit = 10;
		airFriction = -0.0013;
		typicalSpeed = 293;
		audibleFire = 0.60;
		visibleFire = 1.65;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 0.5;
		suppressionRadiusHit = 4;
		dangerRadiusBulletClose = 1;
		dangerRadiusHit = 4;
	};
	class rhs_B_762x54_Ball: B_762x51_Ball
	{
		hit = 19;
		airFriction = -0.00102329;
		typicalSpeed = 828;
		caliber = 1.7;
		audibleFire = 57;
		visibleFire = 3;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 10;
		suppressionRadiusHit = 10;
		dangerRadiusBulletClose = 10;
		dangerRadiusHit = 10;
	};
	class rhs_B_762x54_Ball_Tracer_Green: rhs_B_762x54_Ball
	{
		hit = 19;
		airFriction = -0.00103;
		typicalSpeed = 828;
		caliber = 1.7;
		audibleFire = 57;
		visibleFire = 3;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 10;
		suppressionRadiusHit = 10;
		dangerRadiusBulletClose = 10;
		dangerRadiusHit = 10;
	};
	class rhs_B_762x54_7N1_Ball: rhs_B_762x54_Ball
	{
		hit = 20;
		airFriction = -0.00095;
		typicalSpeed = 823;
		caliber = 1.9;
		audibleFire = 57;
		visibleFire = 3;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 10;
		suppressionRadiusHit = 10;
		dangerRadiusBulletClose = 10;
		dangerRadiusHit = 10;
	};
	class rhs_B_762x54_7N13_Ball: rhs_B_762x54_Ball
	{
		hit = 21.5;
		airFriction = -0.00108;
		typicalSpeed = 828;
		caliber = 2.3;
		audibleFire = 57;
		visibleFire = 3;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 10;
		suppressionRadiusHit = 10;
		dangerRadiusBulletClose = 10;
		dangerRadiusHit = 10;
	};
	class rhs_B_762x54_7BZ3_Ball: rhs_B_762x54_Ball
	{
		hit = 22.5;
		airFriction = -0.00115;
		typicalSpeed = 808;
		caliber = 2.7;
		audibleFire = 57;
		visibleFire = 3;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 10;
		suppressionRadiusHit = 10;
		dangerRadiusBulletClose = 10;
		dangerRadiusHit = 10;
	};
	class rhs_B_762x54_7N26_Ball: rhs_B_762x54_Ball
	{
		hit = 22;
		airFriction = -0.0011;
		typicalSpeed = 835;
		caliber = 2.4;
		audibleFire = 57;
		visibleFire = 3;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 10;
		suppressionRadiusHit = 10;
		dangerRadiusBulletClose = 10;
		dangerRadiusHit = 10;
	};
	class rhs_B_9x39_SP5: rhs_B_762x39_Ball
	{
		hit = 11;
		airFriction = -0.00052;
		typicalSpeed = 295;
		audibleFire = 1.0;
		visibleFire = 1.70;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 0.6;
		suppressionRadiusHit = 4;
		dangerRadiusBulletClose = 1.3;
		dangerRadiusHit = 4;
	};
	class rhs_B_9x39_SP6: rhs_B_9x39_SP5
	{
		hit = 11.5;
		airFriction = -0.00042;
		typicalSpeed = 295;
		audibleFire = 1.0;
		visibleFire = 1.70;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 0.6;
		suppressionRadiusHit = 4;
		dangerRadiusBulletClose = 1.3;
		dangerRadiusHit = 4;
	};
	class rhs_ammo_127x107mm: B_127x108_Ball
	{
		hit = 46.5;
		airFriction = -0.00065098;
		typicalSpeed = 820;
		caliber = 2.8;
		audibleFire = 130;
		visibleFire = 6;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 16;
		suppressionRadiusHit = 16;
		dangerRadiusBulletClose = 16;
		dangerRadiusHit = 16;
	};
	class rhs_ammo_127x108mm_x5: SubmunitionBase
	{
		hit = 46.5;
		airFriction = -0.00065098;
		typicalSpeed = 820;
		caliber = 2.8;
		audibleFire = 130;
		visibleFire = 6;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 16;
		suppressionRadiusHit = 16;
		dangerRadiusBulletClose = 16;
		dangerRadiusHit = 16;
	};
	class rhs_ammo_145x115mm: rhs_ammo_127x107mm
	{
		hit = 55;
		airFriction = -0.00052;
		typicalSpeed = 988;
		caliber = 4.1;
		audibleFire = 140;
		visibleFire = 6;
		visibleFireTime = 2;
		suppressionRadiusBulletClose = 17;
		suppressionRadiusHit = 17;
		dangerRadiusBulletClose = 17;
		dangerRadiusHit = 17;
	};
	*/
};



class CfgMagazines
{
	class CA_Magazine;
	class 30Rnd_580x42_Mag_F: CA_Magazine
	{
		initSpeed = 930;
	};
	class 100Rnd_580x42_Mag_F: 30Rnd_580x42_Mag_F
	{
		initSpeed = 930;
	};
	class 20Rnd_650x39_Cased_Mag_F: CA_Magazine
	{
		initSpeed = 760;
	};
	class 30Rnd_65x39_caseless_mag: CA_Magazine
	{
		initSpeed = 760;
	};
	class 100Rnd_65x39_caseless_mag: CA_Magazine
	{
		initSpeed = 760;
	};
	class 100Rnd_65x39_caseless_mag_Tracer: 100Rnd_65x39_caseless_mag
	{
		initSpeed = 760;
	};
	class ACE_100Rnd_65x39_caseless_mag_Tracer_Dim: 100Rnd_65x39_caseless_mag_Tracer
	{
		initSpeed = 760;
	};
	class 200Rnd_65x39_cased_Box: 100Rnd_65x39_caseless_mag
	{
		initSpeed = 760;
	};
	class ACE_200Rnd_65x39_cased_Box_Tracer_Dim: 200Rnd_65x39_cased_Box
	{
		initSpeed = 760;
	};
	class 30Rnd_65x39_caseless_mag_Tracer;
	class ACE_30Rnd_65x39_caseless_mag_Tracer_Dim: 30Rnd_65x39_caseless_mag_Tracer
	{
		initSpeed = 760;
	};
	class 30Rnd_65x39_caseless_green_mag_Tracer;
	class ACE_30Rnd_65x39_caseless_green_mag_Tracer_Dim: 30Rnd_65x39_caseless_green_mag_Tracer
	{
		initSpeed = 760;
	};
	class 30Rnd_556x45_Stanag: CA_Magazine
	{
		mass = 11;
		initSpeed = 940;
	};
	class ACE_30Rnd_556x45_Stanag_M995_AP_mag: 30Rnd_556x45_Stanag
	{
		initSpeed = 1013;
	};
	class ACE_30Rnd_556x45_Stanag_Mk262_mag: 30Rnd_556x45_Stanag
	{
		initSpeed = 830;
	};
	class ACE_30Rnd_556x45_Stanag_Mk318_mag: 30Rnd_556x45_Stanag
	{
		initSpeed = 922;
	};
	class 30Rnd_556x45_Stanag_Tracer_Red: 30Rnd_556x45_Stanag
	{
		initSpeed = 940;
	};
	class ACE_30Rnd_556x45_Stanag_Tracer_Dim: 30Rnd_556x45_Stanag_Tracer_Red
	{
		initSpeed = 940;
	};
	class 20Rnd_762x51_Mag: CA_Magazine
	{
		mass = 16;
		initSpeed = 833;
	};
	class 10Rnd_762x51_Mag: 20Rnd_762x51_Mag
	{
		initSpeed = 833;
	};
	class 150Rnd_762x51_Box: CA_Magazine
	{
		initSpeed = 833;
	};
	class 150Rnd_762x51_Box_Tracer: 150Rnd_762x51_Box
	{
		initSpeed = 833;
	};
	class ACE_20Rnd_762x51_Mag_Tracer: 20Rnd_762x51_Mag
	{
		initSpeed = 833;
	};
	class ACE_20Rnd_762x51_Mag_Tracer_Dim: ACE_20Rnd_762x51_Mag_Tracer
	{
		initSpeed = 833;
	};
	class ACE_10Rnd_762x51_M118LR_Mag: 10Rnd_762x51_Mag
	{
		initSpeed = 805;
	};
	class ACE_10Rnd_762x51_Mk316_Mod_0_Mag: 10Rnd_762x51_Mag
	{
		initSpeed = 790;
	};
	class ACE_10Rnd_762x51_Mk319_Mod_0_Mag: 10Rnd_762x51_Mag
	{
		initSpeed = 900;
	};
	class ACE_10Rnd_762x51_M993_AP_Mag: 10Rnd_762x51_Mag
	{
		initSpeed = 920;
	};
	class ACE_20Rnd_762x51_M118LR_Mag: 20Rnd_762x51_Mag
	{
		initSpeed = 805;
	};
	class ACE_20Rnd_762x51_Mk316_Mod_0_Mag: 20Rnd_762x51_Mag
	{
		initSpeed = 790;
	};
	class ACE_20Rnd_762x51_Mk319_Mod_0_Mag: 20Rnd_762x51_Mag
	{
		initSpeed = 900;
	};
	class ACE_20Rnd_762x51_M993_AP_Mag: 20Rnd_762x51_Mag
	{
		initSpeed = 920;
	};
	class ACE_20Rnd_762x67_Mk248_Mod_0_Mag: 20Rnd_762x51_Mag
	{
		initSpeed = 900;
	};
	class ACE_20Rnd_762x67_Mk248_Mod_1_Mag: 20Rnd_762x51_Mag
	{
		initSpeed = 880;
	};
	class ACE_20Rnd_762x67_Berger_Hybrid_OTM_Mag: 20Rnd_762x51_Mag
	{
		initSpeed = 832;
	};
	class ACE_30Rnd_65x47_Scenar_mag: 30Rnd_65x39_caseless_mag
	{
		initSpeed = 761;
	};
	class ACE_20Rnd_65x47_Scenar_mag: 20Rnd_650x39_Cased_Mag_F
	{
		initSpeed = 779;
	};
	class ACE_30Rnd_65_Creedmor_mag: 30Rnd_65x39_caseless_mag
	{
		initSpeed = 815;
	};
	class ACE_20Rnd_65_Creedmor_mag: 20Rnd_650x39_Cased_Mag_F
	{
		initSpeed = 808;
	};
	class 10Rnd_338_Mag;
	class ACE_10Rnd_338_300gr_HPBT_Mag: 10Rnd_338_Mag
	{
		initSpeed = 800;
	};
	class 7Rnd_408_Mag: CA_Magazine
	{
		initSpeed = 867;
	};
	class ACE_7Rnd_408_305gr_Mag: 7Rnd_408_Mag
	{
		initSpeed = 1067;
	};
	class ACE_10Rnd_338_API526_Mag: 10Rnd_338_Mag
	{
		initSpeed = 880;
	};
	class 5Rnd_127x108_Mag;
	class 5Rnd_127x108_APDS_Mag: 5Rnd_127x108_Mag
	{
		initSpeed = 820;
	};
	class ACE_5Rnd_127x99_Mag: 5Rnd_127x108_Mag
	{
		initSpeed = 900;
	};
	class ACE_5Rnd_127x99_API_Mag: 5Rnd_127x108_Mag
	{
		initSpeed = 900;
	};
	class ACE_5Rnd_127x99_AMAX_Mag: 5Rnd_127x108_Mag
	{
		initSpeed = 860;
	};
	class 30Rnd_9x21_Mag: CA_Magazine
	{
		initSpeed = 320;
	};
	class ACE_30Rnd_9x19_mag: 30Rnd_9x21_Mag
	{
		initSpeed = 370;
	};
	class 10Rnd_50BW_Mag_F: CA_Magazine
	{
		initSpeed = 552;
	};
	class 11Rnd_45ACP_Mag: CA_Magazine
	{
		initSpeed = 250;
	};
	class 6Rnd_45ACP_Cylinder: 11Rnd_45ACP_Mag
	{
		initSpeed = 250;
	};
	class 30Rnd_45ACP_Mag_SMG_01: 30Rnd_9x21_Mag
	{
		initSpeed = 250;
	};
	class 9Rnd_45ACP_Mag: 30Rnd_45ACP_Mag_SMG_01
	{
		initSpeed = 250;
	};
	class 30Rnd_45ACP_Mag_SMG_01_Tracer_Green: 30Rnd_45ACP_Mag_SMG_01
	{
		initSpeed = 250;
	};
	class 16Rnd_9x21_Mag: 30Rnd_9x21_Mag
	{
		initSpeed = 320;
	};
	class 10Rnd_9x21_Mag: 16Rnd_9x21_Mag
	{
		initSpeed = 320;
	};
	class ACE_16Rnd_9x19_mag: 16Rnd_9x21_Mag
	{
		initSpeed = 370;
	};
	class 10Rnd_762x54_Mag: 10Rnd_762x51_Mag
	{
		initSpeed = 800;
	};
	class ACE_10Rnd_762x54_Tracer_mag: 10Rnd_762x54_Mag
	{
		initSpeed = 800;
	};
	class 150Rnd_762x54_Box: 150Rnd_762x51_Box
	{
		initSpeed = 750;
	};
	class 150Rnd_93x64_Mag: CA_Magazine
	{
		initSpeed = 860;
	};
	class 10Rnd_127x54_Mag: CA_Magazine
	{
		initSpeed = 300;
	};
	
	
	
	// RHS USAF
	class rhsusf_8Rnd_Slug;
	class rhsusf_5Rnd_HE: rhsusf_8Rnd_Slug
	{
		tracersEvery = 1;
	};
	class rhsusf_8Rnd_HE: rhsusf_5Rnd_HE
	{
		tracersEvery = 1;
	};
	class rhsusf_5Rnd_FRAG: rhsusf_8Rnd_HE
	{
		tracersEvery = 1;
	};
	class rhsusf_8Rnd_FRAG: rhsusf_5Rnd_FRAG
	{
		tracersEvery = 1;
	};
	
	class rhs_mag_30Rnd_556x45_M855_Stanag: 30Rnd_556x45_Stanag
	{
		mass = 11;
		initSpeed = 750;
	};
	class rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red: rhs_mag_30Rnd_556x45_M855_Stanag
	{
		mass = 11;
		initSpeed = 750;
	};
	class rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Green: rhs_mag_30Rnd_556x45_M855_Stanag
	{
		mass = 11;
		initSpeed = 750;
	};
	class rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Yellow: rhs_mag_30Rnd_556x45_M855_Stanag
	{
		mass = 11;
		initSpeed = 750;
	};
	class rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Orange: rhs_mag_30Rnd_556x45_M855_Stanag
	{
		mass = 11;
		initSpeed = 750;
	};
	class rhs_mag_30Rnd_556x45_M855A1_Stanag: 30Rnd_556x45_Stanag
	{
		mass = 11;
		initSpeed = 940;
	};
	class rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer: rhs_mag_30Rnd_556x45_M855A1_Stanag
	{
		mass = 11;
		initSpeed = 940;
	};
	class rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red: rhs_mag_30Rnd_556x45_M855A1_Stanag
	{
		mass = 11;
		initSpeed = 940;
	};
	class rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green: rhs_mag_30Rnd_556x45_M855A1_Stanag
	{
		mass = 11;
		initSpeed = 940;
	};
	class rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Yellow: rhs_mag_30Rnd_556x45_M855A1_Stanag
	{
		mass = 11;
		initSpeed = 940;
	};
	class rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Orange: rhs_mag_30Rnd_556x45_M855A1_Stanag
	{
		mass = 11;
		initSpeed = 940;
	};
	class rhs_mag_30Rnd_556x45_M855A1_PMAG: rhs_mag_30Rnd_556x45_M855A1_Stanag
	{
		mass = 11;
		initSpeed = 940;
	};
	class rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red: rhs_mag_30Rnd_556x45_M855A1_PMAG
	{
		mass = 11;
		initSpeed = 940;
	};
	class rhs_mag_30Rnd_556x45_M855_PMAG: rhs_mag_30Rnd_556x45_M855A1_PMAG
	{
		mass = 11;
		initSpeed = 750;
	};
	class rhs_mag_30Rnd_556x45_M855_PMAG_Tracer_Red: rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red
	{
		mass = 11;
		initSpeed = 750;
	};
	class rhs_mag_30Rnd_556x45_Mk318_Stanag: rhs_mag_30Rnd_556x45_M855A1_Stanag
	{
		mass = 11;
		initSpeed = 922;
	};
	class rhs_mag_30Rnd_556x45_Mk262_Stanag: rhs_mag_30Rnd_556x45_M855A1_Stanag
	{
		mass = 11;
		initSpeed = 830;
	};
	class rhs_mag_100Rnd_556x45_M855A1_cmag: rhs_mag_30Rnd_556x45_M855A1_Stanag
	{
		mass = 39;
		initSpeed = 940;
	};
	class rhs_mag_100Rnd_556x45_M855A1_cmag_mixed: rhs_mag_100Rnd_556x45_M855A1_cmag
	{
		mass = 39;
		initSpeed = 940;
	};
	class rhs_mag_100Rnd_556x45_M855_cmag: rhs_mag_100Rnd_556x45_M855A1_cmag
	{
		mass = 39;
		initSpeed = 750;
	};
	class rhs_mag_100Rnd_556x45_M855_cmag_mixed: rhs_mag_100Rnd_556x45_M855_cmag
	{
		mass = 39;
		initSpeed = 750;
	};
	class rhs_mag_100Rnd_556x45_Mk318_cmag: rhs_mag_100Rnd_556x45_M855A1_cmag
	{
		mass = 39;
		initSpeed = 922;
	};
	class rhs_mag_100Rnd_556x45_Mk262_cmag: rhs_mag_100Rnd_556x45_M855A1_cmag
	{
		mass = 39;
		initSpeed = 830;
	};
	class rhsusf_5Rnd_300winmag_xm2010: CA_Magazine
	{
		mass = 3.5;
		initSpeed = 869;
	};
	class 10Rnd_RHS_50BMG_Box: CA_Magazine
	{
		initSpeed = 900;
	};
	class rhsusf_mag_10Rnd_STD_50BMG_M33: 10Rnd_RHS_50BMG_Box
	{
		initSpeed = 900;
	};
	class rhsusf_mag_10Rnd_STD_50BMG_mk211: rhsusf_mag_10Rnd_STD_50BMG_M33
	{
		initSpeed = 900;
	};
	class rhsusf_100Rnd_556x45_soft_pouch: rhs_mag_30Rnd_556x45_M855A1_Stanag
	{
		mass = 34;
		initSpeed = 940;
	};
	class rhsusf_100Rnd_556x45_mixed_soft_pouch: rhsusf_100Rnd_556x45_soft_pouch
	{
		mass = 34;
		initSpeed = 940;
	};
	class rhsusf_100Rnd_556x45_M855_soft_pouch: rhs_mag_30Rnd_556x45_M855_Stanag
	{
		mass = 34;
		initSpeed = 750;
	};
	class rhsusf_100Rnd_556x45_M855_mixed_soft_pouch: rhsusf_100Rnd_556x45_M855_soft_pouch
	{
		mass = 34;
		initSpeed = 750;
	};
	class rhsusf_200Rnd_556x45_soft_pouch: rhsusf_100Rnd_556x45_soft_pouch
	{
		mass = 69;
		initSpeed = 940;
	};
	class rhsusf_200Rnd_556x45_mixed_soft_pouch: rhsusf_200Rnd_556x45_soft_pouch
	{
		mass = 69;
		initSpeed = 940;
	};
	class rhs_200rnd_556x45_M_SAW: rhsusf_200Rnd_556x45_soft_pouch
	{
		mass = 69;
		initSpeed = 940;
	};
	class rhs_200rnd_556x45_T_SAW: rhs_200rnd_556x45_M_SAW
	{
		mass = 69;
		initSpeed = 940;
	};
	class rhs_200rnd_556x45_B_SAW: rhs_200rnd_556x45_M_SAW
	{
		mass = 69;
		initSpeed = 940;
	};
	class rhsusf_200Rnd_556x45_M855_soft_pouch: rhsusf_100Rnd_556x45_M855_soft_pouch
	{
		mass = 69;
		initSpeed = 750;
	};
	class rhsusf_200Rnd_556x45_M855_mixed_soft_pouch: rhsusf_200Rnd_556x45_M855_soft_pouch
	{
		mass = 69;
		initSpeed = 750;
	};
	class rhsusf_50Rnd_762x51: CA_Magazine
	{
		mass = 30;
		initSpeed = 833;
	};
	class rhsusf_50Rnd_762x51_m61_ap: rhsusf_50Rnd_762x51
	{
		mass = 30;
		initSpeed = 850;
	};
	class rhsusf_50Rnd_762x51_m62_tracer: rhsusf_50Rnd_762x51
	{
		mass = 30;
		initSpeed = 833;
	};
	class rhsusf_50Rnd_762x51_m80a1epr: rhsusf_50Rnd_762x51
	{
		mass = 30;
		initSpeed = 915;
	};
	class rhsusf_100Rnd_762x51: rhsusf_50Rnd_762x51
	{
		mass = 58;
		initSpeed = 833;
	};
	class rhsusf_100Rnd_762x51_m61_ap: rhsusf_50Rnd_762x51_m61_ap
	{
		mass = 58;
		initSpeed = 850;
	};
	class rhsusf_100Rnd_762x51_m62_tracer: rhsusf_50Rnd_762x51_m62_tracer
	{
		mass = 58;
		initSpeed = 833;
	};
	class rhsusf_100Rnd_762x51_m80a1epr: rhsusf_50Rnd_762x51_m80a1epr
	{
		mass = 58;
		initSpeed = 915;
	};
	class rhsusf_50Rnd_762x51_m993: rhsusf_50Rnd_762x51
	{
		mass = 30;
		initSpeed = 920;
	};
	class rhsusf_100Rnd_762x51_m993: rhsusf_50Rnd_762x51_m993
	{
		mass = 58;
		initSpeed = 920;
	};
	class rhsusf_20Rnd_762x51_m118_special_Mag: CA_Magazine
	{
		mass = 16;
		initSpeed = 805;
	};
	class rhsusf_20Rnd_762x51_m993_Mag: rhsusf_20Rnd_762x51_m118_special_Mag
	{
		mass = 16;
		initSpeed = 920;
	};
	class rhsusf_20Rnd_762x51_m62_Mag: rhsusf_20Rnd_762x51_m118_special_Mag
	{
		mass = 16;
		initSpeed = 833;
	};
	class rhsusf_20Rnd_762x51_SR25_m118_special_Mag: rhsusf_20Rnd_762x51_m118_special_Mag
	{
		mass = 16;
		initSpeed = 805;
	};
	class rhsusf_20Rnd_762x51_SR25_m993_Mag: rhsusf_20Rnd_762x51_m993_Mag
	{
		mass = 16;
		initSpeed = 920;
	};
	class rhsusf_20Rnd_762x51_SR25_m62_Mag: rhsusf_20Rnd_762x51_m62_Mag
	{
		mass = 16;
		initSpeed = 833;
	};
	class rhsusf_5Rnd_762x51_m118_special_Mag: CA_Magazine
	{
		mass = 2.75;
		initSpeed = 805;
	};
	class rhsusf_5Rnd_762x51_m993_Mag: rhsusf_5Rnd_762x51_m118_special_Mag
	{
		mass = 2.75;
		initSpeed = 920;
	};
	class rhsusf_5Rnd_762x51_m62_Mag: rhsusf_5Rnd_762x51_m118_special_Mag
	{
		mass = 2.75;
		initSpeed = 833;
	};
	class rhsusf_10Rnd_762x51_m118_special_Mag: CA_Magazine
	{
		mass = 9;
		initSpeed = 805;
	};
	class rhsusf_10Rnd_762x51_m993_Mag: rhsusf_5Rnd_762x51_m118_special_Mag
	{
		mass = 9;
		initSpeed = 920;
	};
	class rhsusf_10Rnd_762x51_m62_Mag: rhsusf_5Rnd_762x51_m118_special_Mag
	{
		mass = 9;
		initSpeed = 833;
	};
	class rhsusf_mag_40Rnd_46x30_FMJ: CA_Magazine
	{
		initSpeed = 620;
	};
	class rhsusf_mag_40Rnd_46x30_JHP: CA_Magazine
	{
		initSpeed = 700;
	};
	class rhsusf_mag_40Rnd_46x30_AP: CA_Magazine
	{
		initSpeed = 735;
	};
	class rhsusf_mag_7x45acp_MHP: CA_Magazine
	{
		initSpeed = 250;
	};
	class rhsusf_mag_17Rnd_9x19_FMJ: CA_Magazine
	{
		initSpeed = 370;
	};
	class rhsusf_mag_17Rnd_9x19_JHP: rhsusf_mag_17Rnd_9x19_FMJ
	{
		initSpeed = 305;
	};
	class rhsusf_mag_15Rnd_9x19_FMJ: rhsusf_mag_17Rnd_9x19_FMJ
	{
		initSpeed = 370;
	};
	class rhsusf_mag_15Rnd_9x19_JHP: rhsusf_mag_17Rnd_9x19_JHP
	{
		initSpeed = 305;
	};
	
	// SD mags - Reference
	//class T1_30Rnd_556x45_Stanag_SD: 30Rnd_556x45_Stanag
	//{
	//	initSpeed = 325;
	//};
	//class T1_150Rnd_556x45_Drum_Mag_F_SD: 150Rnd_556x45_Drum_Mag_F
	//{
	//	initSpeed = 325;
	//};
	//class T1_rhsusf_5Rnd_300winmag_xm2010_SD:  rhsusf_5Rnd_300winmag_xm2010
	//{
	//	initSpeed = 325;
	//};
	//class ACE_20Rnd_762x51_Mag_SD: 20Rnd_762x51_Mag
	//{
	//	initSpeed = 325;
	//};
};



class RHSUSF_12gExplosion
{
	class FiredLightMed
	{
		simulation = "light";
		type = "FiredLightMed";
		position[] = {0,0,0};
		intensity = 0;
		interval = 1;
		lifeTime = 0.1;
	};
	class ExploAmmoFlash
	{
		simulation = "particles";
		type = "ExploShotgunAmmoFlash";
		position[] = {0,0,0};
		intensity = 0.015;
		interval = 1;
		lifeTime = 1;
	};
	class RHSUSF_12gExplo_Smoke
	{
		simulation = "particles";
		type = "RHSUSF_12gExplo_Smoke";
		position[] = {0,0,0};
		intensity = 0.01;
		interval = 1;
		lifeTime = 1;
	};
	class ImpactSparks
	{
		simulation = "particles";
		type = "ImpactSparks0";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};

class CfgCloudlets
{
	class Default;
	class ExploAmmoFlash;
	
	class ExploShotgunAmmoFlash: ExploAmmoFlash
	{
		lifeTime = 0.25;
		size[] = {0.1, 0.02};
		sizeVar = 1.5;
		weight = 1.275;
		volume = 1;
		color[] = {{0.85,0.85,0.85,0.80},{0.85,0.85,0.85,0}};
	};
	
	class RHSUSF_12gExplo_Smoke: Default
	{
		lifeTime = 3;
		sizeVar = 0.5;
		size[] = {0.4,0.9};
		color[] = {{ 0.15,0.15,0.15,0.35 },{ 0.15,0.15,0.15,0.15 },{ 0.20,0.20,0.20,0.05 },{ 0.25,0.25,0.25,0 }};
		moveVelocityVar[] = {0.5,0.5,0.5};
		moveVelocity[] = {0.12,0.12,0.12};
		positionVar[] = {0.1,0.1,0.1};
	};
};