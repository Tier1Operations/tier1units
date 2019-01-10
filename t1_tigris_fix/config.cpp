#define _ARMA_

class CfgPatches
{
	class t1_tigris_fix
	{
		requiredaddons[] = {"A3_Weapons_F","A3_Armor_F_Beta_APC_Tracked_02","ace_fcs"};
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
	};
};

class CfgWeapons
{
	class missiles_titan;
	
	class t1_missiles_titan: missiles_titan
	{
		displayName = "9M311-M1";
		displayNameShort = "9M311-M1";
		minRange = 100;
		minRangeProbab = 0.2;
		midRange = 6000;
		midRangeProbab = 0.5;
		maxRange = 10000;
		maxRangeProbab = 0.9;
		magazines[] = {"t1_4Rnd_Titan_long_missiles","2Rnd_GAT_missiles","5Rnd_GAT_missiles","4Rnd_GAA_missiles","4Rnd_Titan_long_missiles"};
		weaponLockDelay = 5;
		weaponLockSystem = "2";
	};
	
	class CannonCore;
	
	class autocannon_35mm: CannonCore
	{
		class far;
	};
	
	class t1_autocannon_35mm: autocannon_35mm
	{
		cmImmunity = 0.9;
		ballisticsComputer = 1;
		canLock = 2;
		weaponLockDelay = 3;
		weaponLockSystem = 8;
		magazines[] = {"t1_680Rnd_35mm_AA_shells_Tracer_Green","680Rnd_35mm_AA_shells","680Rnd_35mm_AA_shells_Tracer_Red","680Rnd_35mm_AA_shells_Tracer_Green","680Rnd_35mm_AA_shells_Tracer_Yellow"};
		
		class far: far
		{
			aiRateOfFire = 1.25;
			aiRateOfFireDispersion = 2;
			minRange = 1200;
			minRangeProbab = 0.3;
			midRange = 3500;
			midRangeProbab = 0.8;
			maxRange = 4500;
			maxRangeProbab = 0.1;
		};
	};
};

class CfgMagazines
{
	class 4Rnd_Titan_long_missiles;
	
	class t1_4Rnd_Titan_long_missiles: 4Rnd_Titan_long_missiles
	{
		ammo = "t1_M_Titan_AA_long";
		displayName = "AA";
		displayNameShort = "AA";
	};
	
	class 680Rnd_35mm_AA_shells_Tracer_Green;
	
	class t1_680Rnd_35mm_AA_shells_Tracer_Green: 680Rnd_35mm_AA_shells_Tracer_Green
	{
		ammo = "t1_B_35mm_AA_Tracer_Green";
	};
};


class SensorTemplateActiveRadar;

class CfgAmmo
{
	class MissileBase;
	
	class M_Titan_AA: MissileBase
	{
		class Components;
	};
	
	class M_Titan_AA_long: M_Titan_AA
	{
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class RadarSensorComponent: SensorTemplateActiveRadar{};
					class IRSensorComponent;
				};
			};
		};
	};
	
	class t1_M_Titan_AA_long: M_Titan_AA_long
	{
		timeToLive = 30;
		thrustTime = 5;
		missileLockMaxDistance = 10000;
		weaponLockSystem = "2 + 8 + 16";
		
		class Components: Components
		{
			class SensorsManagerComponent: SensorsManagerComponent
			{
				class Components: Components
				{
					class RadarSensorComponent: RadarSensorComponent
					{
						aimDown = 0;
						allowsMarking = 1;
						angleRangeHorizontal = 120;
						angleRangeVertical = 120;
						animDirection = "";
						color[] = {0,1,1,1};
						componentType = "ActiveRadarSensorComponent";
						groundNoiseDistanceCoef = 0.5;
						maxGroundNoiseDistance = 200;
						maxSpeedThreshold = 40;
						maxTrackableATL = 1e+010;
						maxTrackableSpeed = 1e+010;
						minSpeedThreshold = 30;
						minTrackableATL = -1e+010;
						minTrackableSpeed = -1e+010;
						typeRecognitionDistance = 12000;
						
						class AirTarget
						{
							minRange = 16000;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						
						class GroundTarget
						{
							minRange = 10000;
							maxRange = 10000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
					
					class IRSensorComponent: IRSensorComponent
					{
						aimDown = 0;
						allowsMarking = 1;
						angleRangeHorizontal = 40;
						angleRangeVertical = 25;
						animDirection = "";
						color[] = {1,0,0,1};
						componentType = "IRSensorComponent";
						groundNoiseDistanceCoef = 0.2;
						maxFogSeeThrough = 0.995;
						maxGroundNoiseDistance = 50;
						maxSpeedThreshold = 0;
						maxTrackableATL = 1e+010;
						maxTrackableSpeed = 500;
						minSpeedThreshold = 0;
						minTrackableATL = -1e+010;
						minTrackableSpeed = -1e+010;
						typeRecognitionDistance = 6000;
						
						class AirTarget
						{
							minRange = 8000;
							maxRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						
						class GroundTarget
						{
							minRange = 7000;
							maxRange = 7000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
				};
			};
		};
	};
	
	class B_35mm_AA_Tracer_Green;
	
	class t1_B_35mm_AA_Tracer_Green: B_35mm_AA_Tracer_Green
	{
		weaponLockSystem = 8;
		missileKeepLockedCone = 40;
		missileLockCone = 30;
		missileLockMaxDistance = 4000;
		missileLockMaxSpeed = 500;
		missileLockMinDistance = 100;
		
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class RadarSensorComponent: SensorTemplateActiveRadar
					{
						aimDown = 0;
						allowsMarking = 1;
						angleRangeHorizontal = 120;
						angleRangeVertical = 120;
						animDirection = "";
						color[] = {0,1,1,1};
						componentType = "ActiveRadarSensorComponent";
						groundNoiseDistanceCoef = 0.5;
						maxGroundNoiseDistance = 200;
						maxSpeedThreshold = 40;
						maxTrackableATL = 1e+010;
						maxTrackableSpeed = 1e+010;
						minSpeedThreshold = 30;
						minTrackableATL = -1e+010;
						minTrackableSpeed = -1e+010;
						typeRecognitionDistance = 12000;
						
						class AirTarget
						{
							minRange = 4000;
							maxRange = 4000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						
						class GroundTarget
						{
							minRange = 3500;
							maxRange = 3500;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
				};
			};
		};
	};
};


class Components;

class CfgVehicles
{
	class LandVehicle;
	
	class Tank: LandVehicle
	{
		class NewTurret;
	};
	
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
	};
	
	class APC_Tracked_02_base_F: Tank_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics {};
				};
			};
		};
	};
	
	class O_APC_Tracked_02_base_F: APC_Tracked_02_base_F
	{
		class Components;
	};
	
	class O_APC_Tracked_02_AA_F: O_APC_Tracked_02_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				ace_fcs_Enabled = 0;
				turretInfoType = "RscOptics_APC_Tracked_01_gunner";
				discreteDistance[] = {1000};
				discreteDistanceInitIndex = 0;
				showAllTargets = 2;
				weapons[] = {"t1_autocannon_35mm","t1_missiles_titan"};
				magazines[] = {"t1_680Rnd_35mm_AA_shells_Tracer_Green","t1_4Rnd_Titan_long_missiles"};
				
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						ace_fcs_Enabled = 0;
						showAllTargets = 2;
					};
				};
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
						typeRecognitionDistance = 12000;
						
						class AirTarget
						{
							minRange = 16000;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						
						class GroundTarget
						{
							minRange = 10000;
							maxRange = 10000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
				};
			};
		};
	};
};