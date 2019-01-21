class CfgPatches
{
	class t1_silencer_ammo_fix
	{
		requiredaddons[] = {"A3_Weapons_F","A3_Weapons_F_Acc","rhsusf_c_weapons","ace_ballistics"};
		units[] = {};
		weapons[] = {};
		magazines[] = {"T1_30Rnd_556x45_Stanag_SD","T1_150Rnd_556x45_Drum_Mag_F_SD","T1_rhsusf_5Rnd_300winmag_xm2010_SD"};
		version = "1";
	};
};

class CfgAmmo
{	
	class B_556x45_Ball_Tracer_Red;
	class B_762x51_Ball;
	class rhsusf_B_300winmag;
	
	class T1_B_556x45_Ball_SD: B_556x45_Ball_Tracer_Red
	{
		airFriction = -0.0025;
		caliber = 0.55;
		hit = 5;
		supersonicCrackFar[] = {};
		supersonicCrackNear[] = {};
		typicalSpeed = 320;
		audibleFire = 0.45;
		visibleFire = 1.50;
		dangerRadiusBulletClose = 1;
		dangerRadiusHit = 6;
		suppressionRadiusBulletClose = 0.5;
		suppressionRadiusHit = 6;
		
        ACE_caliber=5.69;
        ACE_bulletLength=23.012;
        ACE_bulletMass=4.0176;
        ACE_ammoTempMuzzleVelocityShifts[]={-2.720, -2.644, -2.376, -2.100, -1.754, -1.310, -0.795, -0.162, 0.624, 1.548, 2.775};
        ACE_ballisticCoefficients[]={0.185};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=7;
        ACE_muzzleVelocities[]={305,325,335,340};
        ACE_barrelLengths[]={210.82, 238.76, 269.24, 299.72, 330.2, 360.68, 391.16, 419.1, 449.58, 480.06, 508.0, 609.6};
	};
	
	class T1_rhsusf_B_300winmag_SD: rhsusf_B_300winmag
	{
		airFriction = -0.00275;
		caliber = 0.65;
		hit = 8;
		supersonicCrackFar[] = {};
		supersonicCrackNear[] = {};
		typicalSpeed = 320;
		audibleFire = 0.50;
		visibleFire = 1.60;
		dangerRadiusBulletClose = 1.5;
		dangerRadiusHit = 6;
		suppressionRadiusBulletClose = 0.5;
		suppressionRadiusHit = 6;
		
		ACE_caliber = 7.823;
		ACE_bulletLength = 34.366;
		ACE_bulletMass = 12.312;
		ACE_ammoTempMuzzleVelocityShifts[] = {-5.3,-5.1,-4.6,-4.2,-3.4,-2.6,-1.4,-0.3,1.4,3.0,5.2};
		ACE_ballisticCoefficients[] = {0.268};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 7;
		ACE_muzzleVelocities[] = {305,325,335,340};
		ACE_barrelLengths[] = {508.0,609.6,660.4};
	};
	
	class ACE_762x51_Ball_Subsonic: B_762x51_Ball
	{
		airFriction = -0.0030;
		caliber = 0.7;
		hit = 9;
		supersonicCrackFar[] = {};
		supersonicCrackNear[] = {};
		typicalSpeed = 320;
		audibleFire = 0.55;
		visibleFire = 1.70;
		dangerRadiusBulletClose = 1.25;
		dangerRadiusHit = 6;
		suppressionRadiusBulletClose = 0.5;
		suppressionRadiusHit = 6;
		
		ACE_caliber = 7.823;
		ACE_bulletLength = 34.036;
		ACE_bulletMass = 12.96;
		ACE_ammoTempMuzzleVelocityShifts[] = {-2.655,-2.547,-2.285,-2.012,-1.698,-1.28,-0.764,-0.153,0.596,1.517,2.619};
		ACE_ballisticCoefficients[] = {0.235};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 7;
		ACE_muzzleVelocities[] = {305,325,335,340};
		ACE_barrelLengths[] = {406.4,508.0,609.6,660.4};
	};
};

class CfgMagazines
{
	class 30Rnd_556x45_Stanag;
	class rhsusf_5Rnd_300winmag_xm2010;
	class 150Rnd_556x45_Drum_Mag_F;
	class 20Rnd_762x51_Mag;
	
	class T1_30Rnd_556x45_Stanag_SD: 30Rnd_556x45_Stanag
	{
		displayName = "$STR_T1_30Rnd_556x45_Stanag_SD_Name";
		displayNameShort = "$STR_T1_30Rnd_556x45_Stanag_SD_Short";
		descriptionShort = "$STR_T1_30Rnd_556x45_Stanag_SD_Description";
		author = "$STR_T1_Author";
		ammo = "T1_B_556x45_Ball_SD";
		count = 30;
		initSpeed = 325;
		mass = 11.5;
		scope = 2;
		tracersEvery = 0;
		lastRoundsTracer = 0;
		type = 256;
	};
	
	class T1_150Rnd_556x45_Drum_Mag_F_SD: 150Rnd_556x45_Drum_Mag_F
	{
		displayName = "$STR_T1_150Rnd_556x45_Drum_Mag_F_SD_Name";
		displayNameShort = "$STR_T1_150Rnd_556x45_Drum_Mag_F_SD_Short";
		descriptionShort = "$STR_T1_150Rnd_556x45_Drum_Mag_F_SD_Description";
		author = "$STR_T1_Author";
		ammo = "T1_B_556x45_Ball_SD";
		count = 150;
		initSpeed = 325;
		mass = 54;
		scope = 2;
		tracersEvery = 0;
		lastRoundsTracer = 0;
		type = 256;
	};
	
	class T1_rhsusf_5Rnd_300winmag_xm2010_SD:  rhsusf_5Rnd_300winmag_xm2010
	{
		displayName = "$STR_T1_rhsusf_5Rnd_300winmag_xm2010_SD_Name";
		displayNameShort = "$STR_T1_rhsusf_5Rnd_300winmag_xm2010_SD_Short";
		descriptionShort = "$STR_T1_rhsusf_5Rnd_300winmag_xm2010_SD_Description";
		ammo = "T1_rhsusf_B_300winmag_SD";
		count = 5;
		initSpeed = 325;
		mass = 10.4;
		scope = 2;
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	
	class ACE_20Rnd_762x51_Mag_SD: 20Rnd_762x51_Mag
	{
		initSpeed = 325;
	};
};

class CfgWeapons
{
	class ItemCore;
	class InventoryMuzzleItem_Base_F;
	
	class muzzle_snds_H: ItemCore
	{
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			class MagazineCoef
			{
				initSpeed = 1.02;
			};
			class AmmoCoef
			{
				hit = 1;
				visibleFire = 0.3;
				audibleFire = 0.6;
				visibleFireTime = 0.6;
				audibleFireTime = 0.9;
				cost = 1;
				typicalSpeed = 1.0;
				airFriction = 1.0;
			};
			class MuzzleCoef
			{
				dispersionCoef = "0.95f";
				artilleryDispersionCoef = "1.0f";
				fireLightCoef = "0.1f";
				recoilCoef = "0.7f";
				recoilProneCoef = "0.7f";
				minRangeCoef = "1.0f";
				minRangeProbabCoef = "1.0f";
				midRangeCoef = "1.0f";
				midRangeProbabCoef = "1.0f";
				maxRangeCoef = "1.0f";
				maxRangeProbabCoef = "1.0f";
			};
		};
	};
	
	class muzzle_snds_H_MG: muzzle_snds_H
	{
		class ItemInfo: ItemInfo
		{
			class MagazineCoef
			{
				initSpeed = 1.02;
			};
			class AmmoCoef
			{
				hit = 1;
				visibleFire = 0.3;
				audibleFire = 0.6;
				visibleFireTime = 0.6;
				audibleFireTime = 0.9;
				cost = 1;
				typicalSpeed = 1.0;
				airFriction = 1.0;
			};
			class MuzzleCoef
			{
				dispersionCoef = "0.95f";
				artilleryDispersionCoef = "1.0f";
				fireLightCoef = "0.1f";
				recoilCoef = "0.7f";
				recoilProneCoef = "0.7f";
				minRangeCoef = "1.0f";
				minRangeProbabCoef = "1.0f";
				midRangeCoef = "1.0f";
				midRangeProbabCoef = "1.0f";
				maxRangeCoef = "1.0f";
				maxRangeProbabCoef = "1.0f";
			};
		};
	};
	
	class muzzle_snds_L: muzzle_snds_H
	{
		class ItemInfo: ItemInfo
		{
			class MagazineCoef
			{
				initSpeed = 1.02;
			};
			class AmmoCoef
			{
				hit = 1;
				visibleFire = 0.1;
				audibleFire = 0.4;
				visibleFireTime = 0.4;
				audibleFireTime = 0.8;
				cost = 1;
				typicalSpeed = 1.0;
				airFriction = 1.0;
			};
			class MuzzleCoef
			{
				dispersionCoef = "0.95f";
				artilleryDispersionCoef = "1.0f";
				fireLightCoef = "0.1f";
				recoilCoef = "0.9f";
				recoilProneCoef = "0.9f";
				minRangeCoef = "1.0f";
				minRangeProbabCoef = "1.0f";
				midRangeCoef = "1.0f";
				midRangeProbabCoef = "1.0f";
				maxRangeCoef = "1.0f";
				maxRangeProbabCoef = "1.0f";
			};
		};
	};
	
	class muzzle_snds_acp: muzzle_snds_H
	{
		class ItemInfo: ItemInfo
		{
			class MagazineCoef
			{
				initSpeed = 1.02;
			};
			class AmmoCoef
			{
				hit = 1;
				visibleFire = 0.15;
				audibleFire = 0.35;
				visibleFireTime = 0.35;
				audibleFireTime = 0.85;
				cost = 1;
				typicalSpeed = 1.0;
				airFriction = 1.0;
			};
			class MuzzleCoef
			{
				dispersionCoef = "0.95f";
				artilleryDispersionCoef = "1.0f";
				fireLightCoef = "0.1f";
				recoilCoef = "0.9f";
				recoilProneCoef = "0.9f";
				minRangeCoef = "1.0f";
				minRangeProbabCoef = "1.0f";
				midRangeCoef = "1.0f";
				midRangeProbabCoef = "1.0f";
				maxRangeCoef = "1.0f";
				maxRangeProbabCoef = "1.0f";
			};
		};
	};
	
	class muzzle_snds_M: muzzle_snds_H
	{
		class ItemInfo: ItemInfo
		{
			class MagazineCoef
			{
				initSpeed = 1.02;
			};
			class AmmoCoef
			{
				hit = 1;
				visibleFire = 0.2;
				audibleFire = 0.5;
				visibleFireTime = 0.5;
				audibleFireTime = 0.9;
				cost = 1;
				typicalSpeed = 1.0;
				airFriction = 1.0;
			};
			class MuzzleCoef
			{
				dispersionCoef = "0.95f";
				artilleryDispersionCoef = "1.0f";
				fireLightCoef = "0.1f";
				recoilCoef = "0.8f";
				recoilProneCoef = "0.8f";
				minRangeCoef = "1.0f";
				minRangeProbabCoef = "1.0f";
				midRangeCoef = "1.0f";
				midRangeProbabCoef = "1.0f";
				maxRangeCoef = "1.0f";
				maxRangeProbabCoef = "1.0f";
			};
		};
	};
	
	class muzzle_snds_m_khk_F: muzzle_snds_M
	{
		class ItemInfo: ItemInfo
		{
			class MagazineCoef
			{
				initSpeed = 1.02;
			};
			class AmmoCoef
			{
				hit = 1;
				visibleFire = 0.2;
				audibleFire = 0.5;
				visibleFireTime = 0.5;
				audibleFireTime = 0.9;
				cost = 1;
				typicalSpeed = 1.0;
				airFriction = 1.0;
			};
			class MuzzleCoef
			{
				dispersionCoef = "0.95f";
				artilleryDispersionCoef = "1.0f";
				fireLightCoef = "0.1f";
				recoilCoef = "0.8f";
				recoilProneCoef = "0.8f";
				minRangeCoef = "1.0f";
				minRangeProbabCoef = "1.0f";
				midRangeCoef = "1.0f";
				midRangeProbabCoef = "1.0f";
				maxRangeCoef = "1.0f";
				maxRangeProbabCoef = "1.0f";
			};
		};
	};
	
	class muzzle_snds_m_snd_F: muzzle_snds_M
	{
		class ItemInfo: ItemInfo
		{
			class MagazineCoef
			{
				initSpeed = 1.02;
			};
			class AmmoCoef
			{
				hit = 1;
				visibleFire = 0.2;
				audibleFire = 0.5;
				visibleFireTime = 0.5;
				audibleFireTime = 0.9;
				cost = 1;
				typicalSpeed = 1.0;
				airFriction = 1.0;
			};
			class MuzzleCoef
			{
				dispersionCoef = "0.95f";
				artilleryDispersionCoef = "1.0f";
				fireLightCoef = "0.1f";
				recoilCoef = "0.8f";
				recoilProneCoef = "0.8f";
				minRangeCoef = "1.0f";
				minRangeProbabCoef = "1.0f";
				midRangeCoef = "1.0f";
				midRangeProbabCoef = "1.0f";
				maxRangeCoef = "1.0f";
				maxRangeProbabCoef = "1.0f";
			};
		};
	};
	
	class rhsusf_silencer_base: muzzle_snds_H
	{
		class ItemInfo: ItemInfo
		{
			class MagazineCoef
			{
				initSpeed = 1.02;
			};
			class AmmoCoef
			{
				hit = 1;
				visibleFire = 0.2;
				audibleFire = 0.5;
				visibleFireTime = 0.5;
				audibleFireTime = 0.9;
				cost = 1.0;
				typicalSpeed = 1.0;
				airFriction = 1.0;
			};
			class MuzzleCoef
			{
				dispersionCoef = "0.95f";
				artilleryDispersionCoef = "1.0f";
				fireLightCoef = "0.1f";
				recoilCoef = "0.8f";
				recoilProneCoef = "0.8f";
				minRangeCoef = "1.0f";
				minRangeProbabCoef = "1.0f";
				midRangeCoef = "1.0f";
				midRangeProbabCoef = "1.0f";
				maxRangeCoef = "1.0f";
				maxRangeProbabCoef = "1.0f";
			};
		};
	};
	
	class rhsusf_acc_rotex5_grey: rhsusf_silencer_base
	{
		class ItemInfo: ItemInfo
		{
			class MagazineCoef
			{
				initSpeed = 1.02;
			};
			class AmmoCoef
			{
				hit = 1;
				visibleFire = 0.2;
				audibleFire = 0.5;
				visibleFireTime = 0.5;
				audibleFireTime = 0.9;
				cost = 1.0;
				typicalSpeed = 1.0;
				airFriction = 1.0;
			};
			class MuzzleCoef
			{
				dispersionCoef = "0.95f";
				artilleryDispersionCoef = "1.0f";
				fireLightCoef = "0.1f";
				recoilCoef = "0.8f";
				recoilProneCoef = "0.8f";
				minRangeCoef = "1.0f";
				minRangeProbabCoef = "1.0f";
				midRangeCoef = "1.0f";
				midRangeProbabCoef = "1.0f";
				maxRangeCoef = "1.0f";
				maxRangeProbabCoef = "1.0f";
			};
		};
	};
	
	class rhsusf_acc_rotex5_tan: rhsusf_acc_rotex5_grey
	{
		class ItemInfo: ItemInfo
		{
			class MagazineCoef
			{
				initSpeed = 1.02;
			};
			class AmmoCoef
			{
				hit = 1;
				visibleFire = 0.2;
				audibleFire = 0.5;
				visibleFireTime = 0.5;
				audibleFireTime = 0.9;
				cost = 1.0;
				typicalSpeed = 1.0;
				airFriction = 1.0;
			};
			class MuzzleCoef
			{
				dispersionCoef = "0.95f";
				artilleryDispersionCoef = "1.0f";
				fireLightCoef = "0.1f";
				recoilCoef = "0.8f";
				recoilProneCoef = "0.8f";
				minRangeCoef = "1.0f";
				minRangeProbabCoef = "1.0f";
				midRangeCoef = "1.0f";
				midRangeProbabCoef = "1.0f";
				maxRangeCoef = "1.0f";
				maxRangeProbabCoef = "1.0f";
			};
		};
	};
	
	class rhsusf_acc_nt4_black: rhsusf_silencer_base
	{
		class ItemInfo: ItemInfo
		{
			class MagazineCoef
			{
				initSpeed = 1.02;
			};
			class AmmoCoef
			{
				hit = 1;
				visibleFire = 0.2;
				audibleFire = 0.5;
				visibleFireTime = 0.5;
				audibleFireTime = 0.9;
				cost = 1.0;
				typicalSpeed = 1.0;
				airFriction = 1.0;
			};
			class MuzzleCoef
			{
				dispersionCoef = "0.95f";
				artilleryDispersionCoef = "1.0f";
				fireLightCoef = "0.1f";
				recoilCoef = "0.8f";
				recoilProneCoef = "0.8f";
				minRangeCoef = "1.0f";
				minRangeProbabCoef = "1.0f";
				midRangeCoef = "1.0f";
				midRangeProbabCoef = "1.0f";
				maxRangeCoef = "1.0f";
				maxRangeProbabCoef = "1.0f";
			};
		};
	};
	
	class rhsusf_acc_nt4_tan: rhsusf_acc_nt4_black
	{
		class ItemInfo: ItemInfo
		{
			class MagazineCoef
			{
				initSpeed = 1.02;
			};
			class AmmoCoef
			{
				hit = 1;
				visibleFire = 0.2;
				audibleFire = 0.5;
				visibleFireTime = 0.5;
				audibleFireTime = 0.9;
				cost = 1.0;
				typicalSpeed = 1.0;
				airFriction = 1.0;
			};
			class MuzzleCoef
			{
				dispersionCoef = "0.95f";
				artilleryDispersionCoef = "1.0f";
				fireLightCoef = "0.1f";
				recoilCoef = "0.8f";
				recoilProneCoef = "0.8f";
				minRangeCoef = "1.0f";
				minRangeProbabCoef = "1.0f";
				midRangeCoef = "1.0f";
				midRangeProbabCoef = "1.0f";
				maxRangeCoef = "1.0f";
				maxRangeProbabCoef = "1.0f";
			};
		};
	};
	
	class muzzle_snds_B: muzzle_snds_H
	{
		class ItemInfo: ItemInfo
		{
			class MagazineCoef
			{
				initSpeed = 1.02;
			};
			class AmmoCoef
			{
				hit = 1;
				visibleFire = 0.3;
				audibleFire = 0.6;
				visibleFireTime = 0.6;
				audibleFireTime = 0.9;
				cost = 1;
				typicalSpeed = 1.0;
				airFriction = 1.0;
			};
			class MuzzleCoef
			{
				dispersionCoef = "0.95f";
				artilleryDispersionCoef = "1.0f";
				fireLightCoef = "0.1f";
				recoilCoef = "0.7f";
				recoilProneCoef = "0.7f";
				minRangeCoef = "1.0f";
				minRangeProbabCoef = "1.0f";
				midRangeCoef = "1.0f";
				midRangeProbabCoef = "1.0f";
				maxRangeCoef = "1.0f";
				maxRangeProbabCoef = "1.0f";
			};
		};
	};
	
	class muzzle_snds_B_khk_F: muzzle_snds_B
	{
		class ItemInfo: ItemInfo
		{
			class MagazineCoef
			{
				initSpeed = 1.02;
			};
			class AmmoCoef
			{
				hit = 1;
				visibleFire = 0.3;
				audibleFire = 0.6;
				visibleFireTime = 0.6;
				audibleFireTime = 0.9;
				cost = 1;
				typicalSpeed = 1.0;
				airFriction = 1.0;
			};
			class MuzzleCoef
			{
				dispersionCoef = "0.95f";
				artilleryDispersionCoef = "1.0f";
				fireLightCoef = "0.1f";
				recoilCoef = "0.7f";
				recoilProneCoef = "0.7f";
				minRangeCoef = "1.0f";
				minRangeProbabCoef = "1.0f";
				midRangeCoef = "1.0f";
				midRangeProbabCoef = "1.0f";
				maxRangeCoef = "1.0f";
				maxRangeProbabCoef = "1.0f";
			};
		};
	};
	
	class muzzle_snds_B_snd_F: muzzle_snds_B
	{
		class ItemInfo: ItemInfo
		{
			class MagazineCoef
			{
				initSpeed = 1.02;
			};
			class AmmoCoef
			{
				hit = 1;
				visibleFire = 0.3;
				audibleFire = 0.6;
				visibleFireTime = 0.6;
				audibleFireTime = 0.9;
				cost = 1;
				typicalSpeed = 1.0;
				airFriction = 1.0;
			};
			class MuzzleCoef
			{
				dispersionCoef = "0.95f";
				artilleryDispersionCoef = "1.0f";
				fireLightCoef = "0.1f";
				recoilCoef = "0.7f";
				recoilProneCoef = "0.7f";
				minRangeCoef = "1.0f";
				minRangeProbabCoef = "1.0f";
				midRangeCoef = "1.0f";
				midRangeProbabCoef = "1.0f";
				maxRangeCoef = "1.0f";
				maxRangeProbabCoef = "1.0f";
			};
		};
	};
	
	class ACE_muzzle_mzls_H: ItemCore
	{
		class ItemInfo;
	};
	
	class ACE_muzzle_mzls_B: ACE_muzzle_mzls_H
	{
		class ItemInfo: ItemInfo
		{
			class MagazineCoef
			{
				initSpeed = 1.0;
			};
			class AmmoCoef
			{
				hit = 1;
				visibleFire = 0.5;
				audibleFire = 1.3;
				visibleFireTime = 0.5;
				audibleFireTime = 1.15;
				cost = 1;
				typicalSpeed = 1;
				airFriction = 1;
			};
			class MuzzleCoef
			{
				dispersionCoef = "1.0f";
				artilleryDispersionCoef = "1.0f";
				fireLightCoef = "0.5f";
				recoilCoef = "0.65f";
				recoilProneCoef = "0.65f";
				minRangeCoef = "1.0f"; 
				minRangeProbabCoef = "1.0f";
				midRangeCoef = "1.0f";
				midRangeProbabCoef = "1.0f";
				maxRangeCoef = "1.0f";
				maxRangeProbabCoef = "1.0f";
			};
		};
	};
	
	class rhsusf_acc_SR25S: rhsusf_silencer_base
	{
		class ItemInfo: ItemInfo
		{
			class MagazineCoef
			{
				initSpeed = 1.02;
			};
			class AmmoCoef
			{
				hit = 1;
				visibleFire = 0.3;
				audibleFire = 0.6;
				visibleFireTime = 0.6;
				audibleFireTime = 0.9;
				cost = 1.0;
				typicalSpeed = 1.0;
				airFriction = 1.0;
			};
			class MuzzleCoef
			{
				dispersionCoef = "0.95f";
				artilleryDispersionCoef = "1.0f";
				fireLightCoef = "0.1f";
				recoilCoef = "0.7f";
				recoilProneCoef = "0.7f";
				minRangeCoef = "1.0f";
				minRangeProbabCoef = "1.0f";
				midRangeCoef = "1.0f";
				midRangeProbabCoef = "1.0f";
				maxRangeCoef = "1.0f";
				maxRangeProbabCoef = "1.0f";
			};
		};
	};
	
	class rhsusf_acc_M2010S: rhsusf_silencer_base
	{
		class ItemInfo: ItemInfo
		{
			class MagazineCoef
			{
				initSpeed = 1.02;
			};
			class AmmoCoef
			{
				hit = 1;
				visibleFire = 0.35;
				audibleFire = 0.65;
				visibleFireTime = 0.65;
				audibleFireTime = 0.9;
				cost = 1.0;
				typicalSpeed = 1.0;
				airFriction = 1.0;
			};
			class MuzzleCoef
			{
				dispersionCoef = "0.95f";
				artilleryDispersionCoef = "1.0f";
				fireLightCoef = "0.1f";
				recoilCoef = "0.7f";
				recoilProneCoef = "0.7f";
				minRangeCoef = "1.0f";
				minRangeProbabCoef = "1.0f";
				midRangeCoef = "1.0f";
				midRangeProbabCoef = "1.0f";
				maxRangeCoef = "1.0f";
				maxRangeProbabCoef = "1.0f";
			};
		};
	};
};