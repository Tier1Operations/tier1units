#define _ARMA_

class CfgPatches
{
	class t1_3cb_apache_fix
	{
		requiredaddons[] = {"uk3cb_baf_vehicles_apache"};
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
	};
};



class CfgFunctions
{
	class uk3cb_baf_vehicles_apache
	{
		class uk3cb_baf_vehicles_apache
		{
			class gunjam {file = "t1_3cb_apache_fix\functions\fn_gunjam.sqf"};
			class fired_EH {file = "t1_3cb_apache_fix\functions\fn_fired_EH.sqf"};
			class ah64_shake {file = "t1_3cb_apache_fix\functions\fn_ah64_shake.sqf"};
			class gunjam_server {file = "t1_3cb_apache_fix\functions\fn_gunjam_server.sqf"};
			class gunjam_unjam {file = "t1_3cb_apache_fix\functions\fn_gunjam_unjam.sqf"};
		};
	};
};



class Mode_FullAuto;
class Mode_Burst;

class CfgWeapons
{
	class gatling_30mm_base;
	
	class UK3CB_gatling_30mm_base: gatling_30mm_base
	{
		modes[] = {"Burst10","Burst50","close","near","short","medium","far"};
		ballisticsComputer = "1 + 2 + 16";
		
		class Burst10: Mode_FullAuto
		{
			dispersion = 0.005;
		};
		class Burst20: Burst10
		{
			dispersion = 0.005;
		};
		class Burst50: Burst20
		{
			dispersion = 0.005;
		};
	};
	
	class UK3CB_BAF_HellfireLauncher_base;
	
	class UK3CB_BAF_HellfireLauncher_K: UK3CB_BAF_HellfireLauncher_base
	{
		ace_hellfire_enabled = 1;
		ace_laser_canSelect = 1;
		ace_laser_showHud = 1;
		
		magazines[] = {"T1_UK3CB_BAF_2Rnd_Hellfire_K","UK3CB_BAF_4Rnd_Hellfire_K","UK3CB_BAF_8Rnd_Hellfire_K","UK3CB_BAF_12Rnd_Hellfire_K","UK3CB_BAF_16Rnd_Hellfire_K","UK3CB_BAF_PylonRack_4Rnd_Hellfire_K"};
	};
	
	class UK3CB_BAF_HellfireLauncher_N: UK3CB_BAF_HellfireLauncher_base
	{
		ace_hellfire_enabled = 1;
		ace_laser_canSelect = 1;
		ace_laser_showHud = 1;
		
		magazines[] = {"T1_UK3CB_BAF_2Rnd_Hellfire_N","UK3CB_BAF_4Rnd_Hellfire_N","UK3CB_BAF_8Rnd_Hellfire_N","UK3CB_BAF_12Rnd_Hellfire_N","UK3CB_BAF_16Rnd_Hellfire_N","UK3CB_BAF_PylonRack_4Rnd_Hellfire_N"};
	};
	
	class UK3CB_BAF_HellfireLauncher_L: UK3CB_BAF_HellfireLauncher_base
	{
		cmImmunity = 0.95;
		lockAcquire = 0;
		weaponLockDelay = 1;
		weaponLockSystem = 8;
		
		magazines[] = {"T1_UK3CB_BAF_2Rnd_Hellfire_L","UK3CB_BAF_4Rnd_Hellfire_L","UK3CB_BAF_8Rnd_Hellfire_L","UK3CB_BAF_12Rnd_Hellfire_L","UK3CB_BAF_16Rnd_Hellfire_L","UK3CB_BAF_PylonRack_4Rnd_Hellfire_L"};
		
		modes[] = {"TopDown"};
		
		class TopDown
		{
			aiDispersionCoefX = 1.4;
			aiDispersionCoefY = 1.7;
			aiRateOfFire = 5;
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 2000;
			artilleryCharge = 1;
			artilleryDispersion = 1;
			autoFire = 0;
			burst = 1;
			burstRangeMax = -1;
			canShootInWater = 0;
			dispersion = 0.0002;
			displayName = "LOBL";
			ffCount = 1;
			ffFrequency = 11;
			ffMagnitude = 0.5;
			flash = "gunfire";
			flashSize = 0.1;
			maxrange = 8000;
			maxrangeprobab = 0.1;
			midrange = 2000;
			midrangeprobab = 0.9;
			minrange = 250;
			minrangeprobab = 0.6;
			multiplier = 1;
			recoil = "recoil_single_primary_3outof10";
			recoilProne = "recoil_single_primary_prone_3outof10";
			reloadTime = 0.1;
			requiredOpticType = -1;
			showToPlayer = 1;
			sound[] = {"",10,1};
			soundBegin[] = {"sound",1};
			soundBeginWater[] = {"sound",1};
			soundBurst = 0;
			soundClosure[] = {"sound",1};
			soundContinuous = 0;
			soundEnd[] = {};
			soundLoop[] = {};
			sounds[] = {"StandardSound"};
			textureType = "topDown";
			useAction = 0;
			useActionTitle = "";
			weaponSoundEffect = "";
			
			class StandardSound
			{
				begin1[] = {"a3\sounds_f\weapons\rockets\missile_2",5,1.3,1000};
				soundBegin[] = {"begin1",1};
			};
		};
	};
	
	class CMFlareLauncher;
	
	class UK3CB_BAF_CMFlareLauncher: CMFlareLauncher
	{
		modes[] = {"Burst6","Burst5","AIBurst"};
	};
	
	class SmokeLauncher;
	
	class UK3CB_BAF_IRJammer: SmokeLauncher
	{
		simulation = "Weapon";
		weaponLockSystem = 2;
		
		class Burst1: Mode_Burst
		{
			reloadTime = 1;
			burst = 10000;
		};
	};
	
	class RocketPods;
	class UK3CB_BAF_Missiles_CRV7_PG: RocketPods
	{
		modes[] = {"Far_AI","Medium_AI","Burst","Ripple1","Ripple2"};
		ace_hellfire_enabled = 1;
		ace_laser_canSelect = 1;
		ace_laser_showHud = 1;
	};
	
	class UK3CB_BAF_Missiles_CRV7: UK3CB_BAF_Missiles_CRV7_PG
	{
		modes[] = {"Far_AI","Medium_AI","Burst","Ripple1","Ripple2"};
		ace_hellfire_enabled = 0;
		ace_laser_canSelect = 0;
		ace_laser_showHud = 0;
	};
	
	class UK3CB_BAF_Missiles_CRV7_HEISAP: UK3CB_BAF_Missiles_CRV7
	{
		modes[] = {"Far_AI","Medium_AI","Burst","Ripple1","Ripple2"};
		ace_hellfire_enabled = 0;
		ace_laser_canSelect = 0;
		ace_laser_showHud = 0;
	};
	
	class UK3CB_BAF_Missiles_CRV7_FAT: UK3CB_BAF_Missiles_CRV7_HEISAP
	{
		modes[] = {"Far_AI","Medium_AI","Burst","Ripple1","Ripple2"};
		ace_hellfire_enabled = 0;
		ace_laser_canSelect = 0;
		ace_laser_showHud = 0;
	};
};



class CfgMagazines
{
	class UK3CB_BAF_4Rnd_Hellfire_K;
	class T1_UK3CB_BAF_2Rnd_Hellfire_K: UK3CB_BAF_4Rnd_Hellfire_K
	{
		count = 2;
	};
	
	class UK3CB_BAF_4Rnd_Hellfire_L;
	class T1_UK3CB_BAF_2Rnd_Hellfire_L: UK3CB_BAF_4Rnd_Hellfire_L
	{
		count = 2;
	};
	
	class UK3CB_BAF_4Rnd_Hellfire_N;
	class T1_UK3CB_BAF_2Rnd_Hellfire_N: UK3CB_BAF_4Rnd_Hellfire_N
	{
		count = 2;
	};
	
	class SmokeLauncherMag;
	
	class UK3CB_BAF_IRJammer_Magazine: SmokeLauncherMag
	{
		count = 10000;
	};
	
	class UK3CB_BAF_1200Rnd_30mm_M230_HEDP_T;
	
	class UK3CB_BAF_JAM_30mm_M230_HEDP_T: UK3CB_BAF_1200Rnd_30mm_M230_HEDP_T
	{
		count = 1;
		displayName = "M230 OVERHEAT";
		displayNameShort = "OVERHEAT";
	};
	
	class UK3CB_BAF_12Rnd_CRV7_PG_FAT;
	class UK3CB_BAF_PylonPod_12Rnd_CRV7_PG_FAT: UK3CB_BAF_12Rnd_CRV7_PG_FAT
	{
		UK3CB_pilotControl = 0;
	};
	
	class UK3CB_BAF_PylonPod_19Rnd_CRV7_PG_FAT: UK3CB_BAF_12Rnd_CRV7_PG_FAT
	{
		UK3CB_pilotControl = 0;
	};
	
	class UK3CB_BAF_12Rnd_CRV7_PG_HEISAP;
	class UK3CB_BAF_PylonPod_12Rnd_CRV7_PG_HEISAP: UK3CB_BAF_12Rnd_CRV7_PG_HEISAP
	{
		UK3CB_pilotControl = 0;
	};
	
	class UK3CB_BAF_PylonPod_19Rnd_CRV7_PG_HEISAP: UK3CB_BAF_12Rnd_CRV7_PG_HEISAP
	{
		UK3CB_pilotControl = 0;
	};
};


class SensorTemplateActiveRadar;

class CfgAmmo
{
	class ammo_Penetrator_Base;
	class ammo_Penetrator_UK3CB_BAF_M_Hellfire_K: ammo_Penetrator_Base
	{
		caliber = 70;
		hit = 900;
		warheadName = "TandemHEAT";
	};
	class ammo_Penetrator_UK3CB_BAF_M_Hellfire_L: ammo_Penetrator_Base
	{
		caliber = 70;
		hit = 900;
		warheadName = "TandemHEAT";
	};
	class ammo_Penetrator_UK3CB_BAF_M_CRV7_FAT: ammo_Penetrator_Base
	{
		caliber = 35;
		hit = 325;
		warheadName = "HEAT";
	};
	class ammo_Penetrator_UK3CB_BAF_M_CRV7_PG_FAT: ammo_Penetrator_Base
	{
		caliber = 35;
		hit = 325;
		warheadName = "HEAT";
	};
	
	class ammo_Penetrator_UK3CB_BAF_M_CRV7_HEISAP: ammo_Penetrator_Base
	{
		caliber = 30;
		hit = 150;
		warheadName = "HEAT";
	};
	
	class ammo_Penetrator_UK3CB_BAF_M_CRV7_PG_HEISAP: ammo_Penetrator_Base
	{
		caliber = 30;
		hit = 150;
		warheadName = "HEAT";
	};
	
	class ammo_Penetrator_UK3CB_BAF_B_30mm_M789_HEDP_T: ammo_Penetrator_Base
	{
		caliber = 30;
		hit = 75;
		warheadName = "HEAT";
	};
	
	class B_30mm_HE_Tracer_Red;
	class UK3CB_BAF_B_30mm_M789_HEDP_T: B_30mm_HE_Tracer_Red
	{
		explosive = 0.9;
		hit = 75;
		indirectHit = 15;
		indirectHitRange = 3;
		tracerEndTime = 3.75;
		tracerScale = 1.8;
		
		submunitionAmmo = "ammo_Penetrator_UK3CB_BAF_B_30mm_M789_HEDP_T";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-0.2};
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		warheadName = "HEAT";
	};
	
	class UK3CB_BAF_M_Hellfire_Base;
	class UK3CB_BAF_M_Hellfire_K: UK3CB_BAF_M_Hellfire_Base
	{
		hit = 175;
		
		submunitionAmmo = "ammo_Penetrator_UK3CB_BAF_M_Hellfire_K";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-0.2};
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		warheadName = "TandemHEAT";
		
		class ace_missileguidance
		{
			enabled = 1;
			minDeflection = 0.0005;
			maxDeflection = 0.01;
			incDeflection = 0.0005;
			canVanillaLock = 0;
			defaultSeekerType = "SALH";
			seekerTypes[] = {"SALH"};
			defaultSeekerLockMode = "LOAL";
			seekerLockModes[] = {"LOAL","LOBL"};
			seekLastTargetPos = 1;
			seekerAngle = 25;
			seekerAccuracy = 1;
			seekerMinRange = 475;
			seekerMaxRange = 8200;
			defaultAttackProfile = "hellfire";
			attackProfiles[] = {"hellfire","hellfire_hi","hellfire_lo"};
		};
	};
	
	class UK3CB_BAF_M_Hellfire_N: UK3CB_BAF_M_Hellfire_K
	{
		hit = 600;
		
		submunitionAmmo = "";
		submunitionDirectionType = "";
		submunitionInitialOffset[] = {};
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		warheadName = "HEAT";
		
		class ace_missileguidance
		{
			enabled = 1;
			minDeflection = 0.0005;
			maxDeflection = 0.01;
			incDeflection = 0.0005;
			canVanillaLock = 0;
			defaultSeekerType = "SALH";
			seekerTypes[] = {"SALH"};
			defaultSeekerLockMode = "LOAL";
			seekerLockModes[] = {"LOAL","LOBL"};
			seekLastTargetPos = 1;
			seekerAngle = 25;
			seekerAccuracy = 1;
			seekerMinRange = 475;
			seekerMaxRange = 8200;
			defaultAttackProfile = "hellfire";
			attackProfiles[] = {"hellfire","hellfire_hi","hellfire_lo"};
		};
	};
	
	class UK3CB_BAF_M_Hellfire_L: UK3CB_BAF_M_Hellfire_Base
	{
		hit = 175;
		
		submunitionAmmo = "ammo_Penetrator_UK3CB_BAF_M_Hellfire_L";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-0.2};
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		warheadName = "TandemHEAT";
		
		maneuvrability = 10;
		activeSensorAlwaysOn = 0;
		airLock = 1;
		irLock = 0;
		laserLock = 0;
		nvLock = 0;
		weaponLockSystem = 8;
		missileKeepLockedCone = 90;
		missileLockCone = 90;
		missileLockMaxDistance = 8000;
		missileLockMaxSpeed = 81;
		missileLockMinDistance = 475;
		autoSeekTarget = 0;
		lockSeekRadius = 10;
		flightProfiles[] = {"TopDown"};
		
		class TopDown
		{
			ascendAngle = 30;
			ascendHeight = 150;
			descendDistance = 1200;
			minDistance = 1;
		};
		
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class ActiveRadarSensorComponent
					{
						aimDown = 0;
						allowsMarking = 0;
						angleRangeHorizontal = 45;
						angleRangeVertical = 45;
						animDirection = "";
						color[] = {0,1,1,1};
						componentType = "ActiveRadarSensorComponent";
						groundNoiseDistanceCoef = 0.001;
						maxGroundNoiseDistance = 7;
						maxSpeedThreshold = 15;
						maxTrackableATL = 2000;
						maxTrackableSpeed = 1e+010;
						minSpeedThreshold = 1;
						minTrackableATL = -1e+010;
						minTrackableSpeed = -1e+010;
						typeRecognitionDistance = 3500;
						
						class AirTarget
						{
							maxRange = 8500;
							minRange = 8500;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						
						class GroundTarget
						{
							maxRange = 8100;
							minRange = 8100;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
				};
			};
		};
	};
	
	class CMflareAmmo;
	
	class UK3CB_BAF_IRJammer_Ammo: CMflareAmmo
	{
		weaponLockSystem = 2;
	};
	
	class UK3CB_BAF_M_CRV7_Base;
	class UK3CB_BAF_M_CRV7_FAT: UK3CB_BAF_M_CRV7_Base
	{
		hit = 130;
		indirectHit = 8;
		indirectHitRange = 2;
		
		submunitionAmmo = "ammo_Penetrator_UK3CB_BAF_M_CRV7_FAT";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-0.2};
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		warheadName = "HEAT";
	};
	
	class UK3CB_BAF_M_CRV7_HEISAP: UK3CB_BAF_M_CRV7_Base
	{
		hit = 100;
		indirectHit = 30;
		indirectHitRange = 5;
		
		submunitionAmmo = "ammo_Penetrator_UK3CB_BAF_M_CRV7_HEISAP";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-0.2};
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		warheadName = "HEAT";
	};
	
	class UK3CB_BAF_M_CRV7_Base_PG;
	class UK3CB_BAF_M_CRV7_PG_FAT: UK3CB_BAF_M_CRV7_Base_PG
	{
		hit = 130;
		indirectHit = 8;
		indirectHitRange = 2;
		
		submunitionAmmo = "ammo_Penetrator_UK3CB_BAF_M_CRV7_PG_FAT";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-0.2};
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		warheadName = "HEAT";
		
		irLock = 0;
		laserLock = 0;
		manualControl = 0;
		
		class ace_missileguidance
		{
			enabled = 1;
			minDeflection = 0.0005;
			maxDeflection = 0.01;
			incDeflection = 0.0005;
			canVanillaLock = 0;
			defaultSeekerType = "SALH";
			seekerTypes[] = {"SALH"};
			defaultSeekerLockMode = "LOAL";
			seekerLockModes[] = {"LOAL","LOBL"};
			seekLastTargetPos = 1;
			seekerAngle = 20;
			seekerAccuracy = 1;
			seekerMinRange = 100;
			seekerMaxRange = 4100;
			defaultAttackProfile = "hellfire";
			attackProfiles[] = {"hellfire","hellfire_hi","hellfire_lo"};
		};
	};
	
	class UK3CB_BAF_M_CRV7_PG_HEISAP: UK3CB_BAF_M_CRV7_Base_PG
	{
		hit = 100;
		indirectHit = 30;
		indirectHitRange = 5;
		
		submunitionAmmo = "ammo_Penetrator_UK3CB_BAF_M_CRV7_PG_HEISAP";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-0.2};
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		warheadName = "HEAT";
		
		class ace_missileguidance
		{
			enabled = 1;
			minDeflection = 0.0005;
			maxDeflection = 0.01;
			incDeflection = 0.0005;
			canVanillaLock = 0;
			defaultSeekerType = "SALH";
			seekerTypes[] = {"SALH"};
			defaultSeekerLockMode = "LOAL";
			seekerLockModes[] = {"LOAL","LOBL"};
			seekLastTargetPos = 1;
			seekerAngle = 20;
			seekerAccuracy = 1;
			seekerMinRange = 100;
			seekerMaxRange = 4000;
			defaultAttackProfile = "hellfire";
			attackProfiles[] = {"hellfire","hellfire_hi","hellfire_lo"};
		};
	};
};


class Components;

class CfgVehicles
{
	class Helicopter;
	
	class Helicopter_Base_F: Helicopter
	{
		class Turrets;
	};
	
	class Heli_Attack_01_base_F: Helicopter_Base_F
	{
		class EventHandlers;
		class UserActions;
		
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	
	class UK3CB_BAF_Apache_base: Heli_Attack_01_base_F
	{
		displayname = "Apache AH-64E";
		
		irTargetSize = 0.9;
		radarTargetSize = 1;
		
		reportOwnPosition = true;
		reportRemoteTargets = true;
		receiveRemoteTargets = true;
		
		magazines[] = {"UK3CB_BAF_IRJammer_Magazine","UK3CB_BAF_38Rnd_CRV7_HEISAP","168Rnd_CMFlare_Chaff_Magazine"};
		weapons[] = {"UK3CB_BAF_IRJammer","UK3CB_BAF_Missiles_CRV7_HEISAP","UK3CB_BAF_CMFlareLauncher"};
		
		class EventHandlers: EventHandlers
		{
			class t1_EventHandlers
			{
				fired = "_this call uk3cb_baf_vehicles_apache_fnc_ah64_shake;";
			};
		};
		
		class Turrets: Turrets
		{			
			class MainTurret: MainTurret
			{
				magazines[] = {"Laserbatteries","UK3CB_BAF_1200Rnd_30mm_M230_HEDP_T","T1_UK3CB_BAF_2Rnd_Hellfire_L","UK3CB_BAF_4Rnd_Hellfire_K","T1_UK3CB_BAF_2Rnd_Hellfire_N"};
				weapons[] = {"UK3CB_BAF_Laserdesignator_mounted","UK3CB_BAF_CannonM230","UK3CB_BAF_HellfireLauncher_L","UK3CB_BAF_HellfireLauncher_K","UK3CB_BAF_HellfireLauncher_N"};
			}
		};
		
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						aimDown = 0;
						allowsMarking = 1;
						angleRangeHorizontal = 360;
						angleRangeVertical = 130;
						animDirection = "";
						color[] = {0,1,1,1};
						componentType = "ActiveRadarSensorComponent";
						groundNoiseDistanceCoef = 0.001;
						maxGroundNoiseDistance = 7;
						maxSpeedThreshold = 15;
						maxTrackableATL = 2000;
						maxTrackableSpeed = 1e+010;
						minSpeedThreshold = 1;
						minTrackableATL = -1e+010;
						minTrackableSpeed = -1e+010;
						typeRecognitionDistance = 3500;
						
						class AirTarget
						{
							maxRange = 8500;
							minRange = 8500;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						
						class GroundTarget
						{
							maxRange = 8100;
							minRange = 8100;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
					
					class DataLinkSensorComponent
					{
						aimDown = 0;
						allowsMarking = 1;
						angleRangeHorizontal = 360;
						angleRangeVertical = 360;
						animDirection = "";
						color[] = {1,1,1,0};
						componentType = "DataLinkSensorComponent";
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						maxSpeedThreshold = 0;
						maxTrackableATL = 1e+010;
						maxTrackableSpeed = 1e+010;
						minSpeedThreshold = 0;
						minTrackableATL = -1e+010;
						minTrackableSpeed = -1e+010;
						typeRecognitionDistance = 0;
						
						class AirTarget
						{
							maxRange = 16000;
							minRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						
						class GroundTarget
						{
							maxRange = 16000;
							minRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
					
					class LaserSensorComponent
					{
						aimDown = 0;
						allowsMarking = 1;
						angleRangeHorizontal = 180;
						angleRangeVertical = 180;
						animDirection = "TADSElev";
						color[] = {1,1,1,0};
						componentType = "LaserSensorComponent";
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						maxSpeedThreshold = 0;
						maxTrackableATL = 1e+010;
						maxTrackableSpeed = 1e+010;
						minSpeedThreshold = 0;
						minTrackableATL = -1e+010;
						minTrackableSpeed = -1e+010;
						typeRecognitionDistance = 0;
						
						class AirTarget
						{
							maxRange = 9000;
							minRange = 9000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						
						class GroundTarget
						{
							maxRange = 9000;
							minRange = 9000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
					
					class NVSensorComponent
					{
						aimDown = 0;
						allowsMarking = 1;
						angleRangeHorizontal = 180;
						angleRangeVertical = 180;
						animDirection = "TADSElev";
						color[] = {1,1,1,0};
						componentType = "NVSensorComponent";
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						maxSpeedThreshold = 0;
						maxTrackableATL = 1e+010;
						maxTrackableSpeed = 1e+010;
						minSpeedThreshold = 0;
						minTrackableATL = -1e+010;
						minTrackableSpeed = -1e+010;
						typeRecognitionDistance = 0;
						
						class AirTarget
						{
							maxRange = 9000;
							minRange = 9000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						
						class GroundTarget
						{
							maxRange = 9000;
							minRange = 9000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
					
					class PassiveRadarSensorComponent
					{
						aimDown = 0;
						allowsMarking = 0;
						angleRangeHorizontal = 360;
						angleRangeVertical = 360;
						animDirection = "";
						color[] = {0.5,1,0.5,0.5};
						componentType = "PassiveRadarSensorComponent";
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						maxSpeedThreshold = 0;
						maxTrackableATL = 1e+010;
						maxTrackableSpeed = 1e+010;
						minSpeedThreshold = 0;
						minTrackableATL = -1e+010;
						minTrackableSpeed = -1e+010;
						typeRecognitionDistance = 12000;
						
						class AirTarget
						{
							maxRange = 16000;
							minRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						
						class GroundTarget
						{
							maxRange = 16000;
							minRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
				};
			};
		};
		
		class UserActions: UserActions
		{
			delete HMD_Gunner_FLIR_Off;
			delete HMD_Gunner_FLIR_On;
			delete HMD_Pilot_FLIR_Off;
			delete HMD_Pilot_FLIR_On;
			delete MFD_Gunner_FLIR_Off;
			delete MFD_Gunner_Mode;
			delete MFD_Pilot_FLIR_Off;
			delete MFD_Pilot_Mode;
			delete MFD_Gunner_FLIR_On;
			delete MFD_Pilot_FLIR_On;
		};
		
		class TransportBackpacks
		{
			delete _xx_B_Parachute;
			class _xx_B_AssaultPack_cbr
			{
				backpack = "B_AssaultPack_cbr";
				count = 1;
			};
		};
		class TransportItems
		{
			delete _xx_FirstAidKit;
			delete _xx_ItemGPS;
			delete _xx_Toolkit;
			class _xx_Toolkit2
			{
				name = "Toolkit";
				count = 1;
			};
			class _xx_FirstAidKit2
			{
				name = "FirstAidKit";
				count = 2;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_65x39_caseless_mag;
			delete _xx_SmokeShell;
			delete _xx_SmokeShellBlue;
		};
		class TransportWeapons
		{
			delete _xx_arifle_MXC_F;
		};
	};
	
	class UK3CB_BAF_Apache_AH1: UK3CB_BAF_Apache_base
	{
		class EventHandlers;
		class UserActions;
		
		class Turrets: Turrets
		{
			class MainTurret;
		};
		
		class Components: Components
		{
			class SensorsManagerComponent: SensorsManagerComponent
			{
				class Components;
			};
		};
	};
	
	class UK3CB_BAF_Apache_AH1_DynamicLoadout: UK3CB_BAF_Apache_AH1
	{
		displayname = "Apache AH-64E";
		
		magazines[] = {"UK3CB_BAF_IRJammer_Magazine","168Rnd_CMFlare_Chaff_Magazine"};
		weapons[] = {"UK3CB_BAF_IRJammer","UK3CB_BAF_CMFlareLauncher"};
		
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] = {"Laserbatteries","UK3CB_BAF_1200Rnd_30mm_M230_HEDP_T"};
				weapons[] = {"UK3CB_BAF_Laserdesignator_mounted","UK3CB_BAF_CannonM230"};
			};
		};
		
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						aimDown = 0;
						allowsMarking = 1;
						angleRangeHorizontal = 360;
						angleRangeVertical = 130;
						animDirection = "";
						color[] = {0,1,1,1};
						componentType = "ActiveRadarSensorComponent";
						groundNoiseDistanceCoef = 0.001;
						maxGroundNoiseDistance = 7;
						maxSpeedThreshold = 15;
						maxTrackableATL = 2000;
						maxTrackableSpeed = 1e+010;
						minSpeedThreshold = 1;
						minTrackableATL = -1e+010;
						minTrackableSpeed = -1e+010;
						typeRecognitionDistance = 3500;
						
						class AirTarget
						{
							maxRange = 8500;
							minRange = 8500;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						
						class GroundTarget
						{
							maxRange = 8100;
							minRange = 8100;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
					
					class DataLinkSensorComponent
					{
						aimDown = 0;
						allowsMarking = 1;
						angleRangeHorizontal = 360;
						angleRangeVertical = 360;
						animDirection = "";
						color[] = {1,1,1,0};
						componentType = "DataLinkSensorComponent";
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						maxSpeedThreshold = 0;
						maxTrackableATL = 1e+010;
						maxTrackableSpeed = 1e+010;
						minSpeedThreshold = 0;
						minTrackableATL = -1e+010;
						minTrackableSpeed = -1e+010;
						typeRecognitionDistance = 0;
						
						class AirTarget
						{
							maxRange = 16000;
							minRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						
						class GroundTarget
						{
							maxRange = 16000;
							minRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
					
					class LaserSensorComponent
					{
						aimDown = 0;
						allowsMarking = 1;
						angleRangeHorizontal = 180;
						angleRangeVertical = 180;
						animDirection = "TADSElev";
						color[] = {1,1,1,0};
						componentType = "LaserSensorComponent";
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						maxSpeedThreshold = 0;
						maxTrackableATL = 1e+010;
						maxTrackableSpeed = 1e+010;
						minSpeedThreshold = 0;
						minTrackableATL = -1e+010;
						minTrackableSpeed = -1e+010;
						typeRecognitionDistance = 0;
						
						class AirTarget
						{
							maxRange = 9000;
							minRange = 9000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						
						class GroundTarget
						{
							maxRange = 9000;
							minRange = 9000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
					
					class NVSensorComponent
					{
						aimDown = 0;
						allowsMarking = 1;
						angleRangeHorizontal = 180;
						angleRangeVertical = 180;
						animDirection = "TADSElev";
						color[] = {1,1,1,0};
						componentType = "NVSensorComponent";
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						maxSpeedThreshold = 0;
						maxTrackableATL = 1e+010;
						maxTrackableSpeed = 1e+010;
						minSpeedThreshold = 0;
						minTrackableATL = -1e+010;
						minTrackableSpeed = -1e+010;
						typeRecognitionDistance = 0;
						
						class AirTarget
						{
							maxRange = 9000;
							minRange = 9000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						
						class GroundTarget
						{
							maxRange = 9000;
							minRange = 9000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
					
					class PassiveRadarSensorComponent
					{
						aimDown = 0;
						allowsMarking = 0;
						angleRangeHorizontal = 360;
						angleRangeVertical = 360;
						animDirection = "";
						color[] = {0.5,1,0.5,0.5};
						componentType = "PassiveRadarSensorComponent";
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						maxSpeedThreshold = 0;
						maxTrackableATL = 1e+010;
						maxTrackableSpeed = 1e+010;
						minSpeedThreshold = 0;
						minTrackableATL = -1e+010;
						minTrackableSpeed = -1e+010;
						typeRecognitionDistance = 12000;
						
						class AirTarget
						{
							maxRange = 16000;
							minRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						
						class GroundTarget
						{
							maxRange = 16000;
							minRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
				};
			};
			
			class TransportPylonsComponent
			{
				class Presets
				{
					class Default
					{
						attachment[] = {"UK3CB_BAF_PylonRack_4Rnd_Hellfire_K","UK3CB_BAF_PylonPod_19Rnd_CRV7_PG_HEISAP","UK3CB_BAF_PylonRack_4Rnd_Hellfire_N","UK3CB_BAF_PylonRack_4Rnd_Hellfire_L"};
						displayName = "Default";
					};
				};
				
				class Pylons
				{
					class Pylons1
					{
						attachment = "UK3CB_BAF_PylonRack_4Rnd_Hellfire_K";
						bay = -1;
						hardpoints[] = {"UK3CB_BAF_MISSILE_PYLON","UK3CB_BAF_ROCKET_19_PYLON","UK3CB_BAF_ROCKET_19_PG_PYLON","UK3CB_BAF_ROCKET_12_PG_PYLON","UK3CB_BAF_ROCKET_12_PYLON"};
						maxweight = 800;
						priority = 5;
						turret[] = {0};
						UIposition[] = {0.1,0.4};
					};
					class Pylons2
					{
						attachment = "UK3CB_BAF_PylonPod_19Rnd_CRV7_PG_HEISAP";
						bay = -1;
						hardpoints[] = {"UK3CB_BAF_MISSILE_PYLON","UK3CB_BAF_ROCKET_19_PYLON","UK3CB_BAF_ROCKET_19_PG_PYLON","UK3CB_BAF_ROCKET_12_PG_PYLON","UK3CB_BAF_ROCKET_12_PYLON"};
						maxweight = 800;
						priority = 4;
						turret[] = {0};
						UIposition[] = {0.2,0.45};
					};
					class Pylons3
					{
						attachment = "UK3CB_BAF_PylonRack_4Rnd_Hellfire_N";
						bay = -1;
						hardpoints[] = {"UK3CB_BAF_MISSILE_PYLON","UK3CB_BAF_ROCKET_19_PYLON","UK3CB_BAF_ROCKET_19_PG_PYLON","UK3CB_BAF_ROCKET_12_PG_PYLON","UK3CB_BAF_ROCKET_12_PYLON"};
						maxweight = 800;
						mirroredMissilePos = 2;
						priority = 3;
						turret[] = {0};
						UIposition[] = {0.45,0.45};
					};
					
					class Pylons4
					{
						attachment = "UK3CB_BAF_PylonRack_4Rnd_Hellfire_L";
						bay = -1;
						hardpoints[] = {"UK3CB_BAF_MISSILE_PYLON","UK3CB_BAF_ROCKET_19_PYLON","UK3CB_BAF_ROCKET_19_PG_PYLON","UK3CB_BAF_ROCKET_12_PG_PYLON","UK3CB_BAF_ROCKET_12_PYLON"};
						maxweight = 800;
						mirroredMissilePos = 1;
						priority = 2;
						turret[] = {0};
						UIposition[] = {0.5,0.4};
					};
				};
			};
		};
		
		class UserActions: UserActions
		{
			delete HMD_Gunner_FLIR_Off;
			delete HMD_Gunner_FLIR_On;
			delete HMD_Pilot_FLIR_Off;
			delete HMD_Pilot_FLIR_On;
			delete MFD_Gunner_FLIR_Off;
			delete MFD_Gunner_Mode;
			delete MFD_Pilot_FLIR_Off;
			delete MFD_Pilot_Mode;
			delete MFD_Gunner_FLIR_On;
			delete MFD_Pilot_FLIR_On;
		};
		
		class TransportBackpacks
		{
			delete _xx_B_Parachute;
			class _xx_B_AssaultPack_cbr
			{
				backpack = "B_AssaultPack_cbr";
				count = 1;
			};
		};
		class TransportItems
		{
			delete _xx_FirstAidKit;
			delete _xx_ItemGPS;
			delete _xx_Toolkit;
			class _xx_Toolkit2
			{
				name = "Toolkit";
				count = 1;
			};
			class _xx_FirstAidKit2
			{
				name = "FirstAidKit";
				count = 2;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_65x39_caseless_mag;
			delete _xx_SmokeShell;
			delete _xx_SmokeShellBlue;
		};
		class TransportWeapons
		{
			delete _xx_arifle_MXC_F;
		};
	};
};