class Components  {
	class SensorsManagerComponent {
		class Components {
			class IRSensorComponent : SensorTemplateIR {
				class AirTarget {
					minRange = 500;
					maxRange = 2500;
					objectDistanceLimitCoef = -1;
					viewDistanceLimitCoef = 1;
				};
				class GroundTarget {
					minRange = 500;
					maxRange = 2000;
					objectDistanceLimitCoef = 1;
					viewDistanceLimitCoef = 1;
				};
				angleRangeHorizontal = 360;
				angleRangeVertical = 90;
				maxTrackableSpeed = 400;
			};
			class VisualSensorComponent : SensorTemplateVisual {
				class AirTarget {
					minRange = 500;
					maxRange = 4000;
					objectDistanceLimitCoef = -1;
					viewDistanceLimitCoef = 1;
				};
				class GroundTarget {
					minRange = 500;
					maxRange = 3000;
					objectDistanceLimitCoef = 1;
					viewDistanceLimitCoef = 1;
				};
				angleRangeHorizontal = 26;
				angleRangeVertical = 20;
				maxTrackableSpeed = 100;
				aimDown = 1;
				animDirection = "mainGun";
			};
			class PassiveRadarSensorComponent : SensorTemplatePassiveRadar {};
			class ActiveRadarSensorComponent : SensorTemplateActiveRadar {
				class AirTarget {
					minRange = 15000;
					maxRange = 15000;
					objectDistanceLimitCoef = -1;
					viewDistanceLimitCoef = -1;
				};
				class GroundTarget {
					minRange = 8000;
					maxRange = 8000;
					objectDistanceLimitCoef = -1;
					viewDistanceLimitCoef = -1;
				};
				typeRecognitionDistance = 8000;
				angleRangeHorizontal = 45;
				angleRangeVertical = 45;
				groundNoiseDistanceCoef = 0.2;
			};
			class AntiRadiationSensorComponent : SensorTemplateAntiRadiation {
				class AirTarget {
					minRange = 16000;
					maxRange = 16000;
					objectDistanceLimitCoef = -1;
					viewDistanceLimitCoef = -1;
				};
				class GroundTarget {
					minRange = 16000;
					maxRange = 16000;
					objectDistanceLimitCoef = -1;
					viewDistanceLimitCoef = -1;
				};
				maxTrackableATL = 100;
				maxTrackableSpeed = 60;
				angleRangeHorizontal = 60;
				angleRangeVertical = 180;
			};
			class LaserSensorComponent : SensorTemplateLaser {};
			class NVSensorComponent : SensorTemplateNV {};
            class DataLinkSensorComponent : SensorTemplateDataLink {};
		};
	};
    class DefaultVehicleSystemsDisplayManagerLeft;
	class VehicleSystemsDisplayManagerComponentLeft : DefaultVehicleSystemsDisplayManagerLeft {
		class Components {
			class EmptyDisplay {
				componentType = "EmptyDisplayComponent";
			};
			class MinimapDisplay {
				componentType = "MinimapDisplayComponent";
				resource = "RscCustomInfoAirborneMiniMap";
			};
			class UAVDisplay {
				componentType = "UAVFeedDisplayComponent";
			};
			class VehicleDriverDisplay {
				componentType = "TransportFeedDisplayComponent";
				source = "Driver";
			};
			class VehicleMissileDisplay {
				componentType = "TransportFeedDisplayComponent";
				source = "Missile";
			};
			class SensorDisplay {
				componentType = "SensorsDisplayComponent";
				range[] = {
					16000,
					8000,
					4000,
					2000
				};
				resource = "RscCustomInfoSensors";
			};
		};
	};
    class DefaultVehicleSystemsDisplayManagerRight;
	class VehicleSystemsDisplayManagerComponentRight : DefaultVehicleSystemsDisplayManagerRight {
		defaultDisplay = "SensorDisplay";
		class Components {
			class EmptyDisplay {
				componentType = "EmptyDisplayComponent";
			};
			class MinimapDisplay {
				componentType = "MinimapDisplayComponent";
				resource = "RscCustomInfoAirborneMiniMap";
			};
			class UAVDisplay {
				componentType = "UAVFeedDisplayComponent";
			};
			class VehicleDriverDisplay {
				componentType = "TransportFeedDisplayComponent";
				source = "Driver";
			};
			class VehicleMissileDisplay {
				componentType = "TransportFeedDisplayComponent";
				source = "Missile";
			};
			class SensorDisplay {
				componentType = "SensorsDisplayComponent";
				range[] = {
					16000,
					8000,
					4000,
					2000
				};
				resource = "RscCustomInfoSensors";
			};
		};
	};
	class TransportPylonsComponent {
		UIPicture = "\A3\Air_F_Jets\Plane_Fighter_01\Data\UI\Fighter_01_3DEN_CA.paa";
		class pylons {
			class pylon1 {
				hardpoints[] = {
					"B_BIM9X_RAIL",
					"B_BIM9X_DUAL_RAIL",
					"B_AMRAAM_D_RAIL",
					"B_AMRAAM_D_DUAL_RAIL",
					"B_AGM65_RAIL",
					"B_GBU12"
				};
				attachment = "PylonRack_Missile_AGM_02_x1";
				priority = 12;
				maxweight = 300;
				UIposition[] = {
					0.6,
					0.45
				};
			};
			class pylon2 : pylon1 {
				UIposition[] = {
					0.05,
					0.45
				};
				mirroredMissilePos = 1;
			};
			class pylon3 {
				hardpoints[] = {
					"B_BIM9X_RAIL",
					"B_BIM9X_DUAL_RAIL",
					"B_AMRAAM_D_RAIL",
					"B_AMRAAM_D_DUAL_RAIL",
					"B_AGM65_RAIL",
					"B_AGM65_DUAL_RAIL",
					"B_GBU12",
					"B_GBU12_DUAL_RAIL",
					"B_HARM_RAIL",
					"B_SDB_QUAD_RAIL"
				};
				priority = 11;
				attachment = "PylonRack_Missile_AGM_02_x2";
				maxweight = 1050;
				UIposition[] = {
					0.55,
					0.35
				};
			};
			class pylon4 : pylon3 {
				UIposition[] = {
					0.1,
					0.35
				};
				mirroredMissilePos = 3;
			};
			class pylonBayRight1 {
				hardpoints[] = {
					"B_BIM9X"
				};
				priority = 10;
				attachment = "PylonMissile_Missile_BIM9X_x1";
				maxweight = 1200;
				UIposition[] = {
					0.5,
					0.25
				};
				bay = 2;
			};
			class pylonBayLeft1 : pylonBayRight1 {
				UIposition[] = {
					0.16,
					0.25
				};
				mirroredMissilePos = 5;
				bay = 1;
			};
			class pylonBayCenter1 {
				hardpoints[] = {
					"B_AMRAAM_D_INT"
				};
				priority = 9;
				attachment = "PylonMissile_Missile_AMRAAM_D_INT_x1";
				maxweight = 1200;
				UIposition[] = {
					0.33,
					0.3
				};
				bay = 3;
			};
			class pylonBayCenter2 : pylonBayCenter1 {
				UIposition[] = {
					0.33,
					0.35
				};
				mirroredMissilePos = 7;
			};
			class pylonBayCenter3 {
				hardpoints[] = {
					"B_AMRAAM_D_INT",
					"B_SDB_QUAD_RAIL"
				};
                attachment = "PylonRack_Bomb_SDB_x4";
				priority = 7;
				maxweight = 1200;
				UIposition[] = {
					0.33,
					0.4
				};
				bay = 3;
			};
			class pylonBayCenter4 : pylonBayCenter3 {
				UIposition[] = {
					0.33,
					0.45
				};
				mirroredMissilePos = 9;
			};
			class pylonBayCenter5 {
				hardpoints[] = {
					"B_AMRAAM_D_INT",
					"B_GBU12"
				};
				priority = 5;
				attachment = "PylonMissile_Bomb_GBU12_x1";
				maxweight = 1200;
				UIposition[] = {
					0.33,
					0.5
				};
				bay = 3;
			};
			class pylonBayCenter6 : pylonBayCenter5 {
				UIposition[] = {
					0.33,
					0.55
				};
				mirroredMissilePos = 11;
			};
		};
		class Bays {
			class BayLeft1 {
				bayOpenTime = 0.5;
				openBayWhenWeaponSelected = 0;
				autoCloseWhenEmptyDelay = 2;
			};
			class BayRight1 {
				bayOpenTime = 0.5;
				openBayWhenWeaponSelected = 0;
				autoCloseWhenEmptyDelay = 2;
			};
			class BayCenter1 {
				bayOpenTime = 0.5;
				openBayWhenWeaponSelected = 0;
				autoCloseWhenEmptyDelay = 3;
			};
		};
		class Presets {
			class Empty {
				displayName = "Empty";
				attachment[] = {
				};
			};
			class Default {
				displayName = "Default";
				attachment[] = {
					"PylonRack_Missile_AMRAAM_D_x1",
					"PylonRack_Missile_AMRAAM_D_x1",
					"PylonRack_Missile_AGM_02_x2",
					"PylonRack_Missile_AGM_02_x2",
					"PylonMissile_Missile_BIM9X_x1",
					"PylonMissile_Missile_BIM9X_x1",
					"PylonMissile_Missile_AMRAAM_D_INT_x1",
					"PylonMissile_Missile_AMRAAM_D_INT_x1",
					"PylonRack_Bomb_SDB_x4",
					"PylonRack_Bomb_SDB_x4",
					"PylonMissile_Bomb_GBU12_x1",
					"PylonMissile_Bomb_GBU12_x1"
				};
			};
			class AA {
				displayName = "AA";
				attachment[] = {
					"PylonRack_Missile_AMRAAM_D_x2",
					"PylonRack_Missile_AMRAAM_D_x2",
					"PylonRack_Missile_AMRAAM_D_x2",
					"PylonRack_Missile_AMRAAM_D_x2",
					"PylonMissile_Missile_BIM9X_x1",
					"PylonMissile_Missile_BIM9X_x1",
					"PylonMissile_Missile_AMRAAM_D_INT_x1",
					"PylonMissile_Missile_AMRAAM_D_INT_x1",
					"PylonMissile_Missile_AMRAAM_D_INT_x1",
					"PylonMissile_Missile_AMRAAM_D_INT_x1",
					"PylonMissile_Missile_AMRAAM_D_INT_x1",
					"PylonMissile_Missile_AMRAAM_D_INT_x1",
					"PylonMissile_Missile_AMRAAM_D_INT_x1",
					"PylonMissile_Missile_AMRAAM_D_INT_x1"
				};
			};
			class CAS {
				displayName = "CAS";
				attachment[] = {
					"PylonRack_Missile_AGM_02_x1",
					"PylonRack_Missile_AGM_02_x1",
					"PylonRack_Missile_AGM_02_x2",
					"PylonRack_Missile_AGM_02_x2",
					"PylonMissile_Missile_BIM9X_x1",
					"PylonMissile_Missile_BIM9X_x1",
					"PylonMissile_Missile_AMRAAM_D_INT_x1",
					"PylonMissile_Missile_AMRAAM_D_INT_x1",
					"PylonRack_Bomb_SDB_x4",
					"PylonRack_Bomb_SDB_x4",
					"PylonMissile_Bomb_GBU12_x1",
					"PylonMissile_Bomb_GBU12_x1"
				};
			};
			class Cluster {
				displayName = "Cluster";
				attachment[] = {
					"PylonRack_Missile_AMRAAM_D_x1",
					"PylonRack_Missile_AMRAAM_D_x1",
					"PylonRack_2Rnd_BombCluster_01_F",
					"PylonRack_2Rnd_BombCluster_01_F",
					"PylonMissile_Missile_BIM9X_x1",
					"PylonMissile_Missile_BIM9X_x1",
					"PylonMissile_Missile_AMRAAM_D_INT_x1",
					"PylonMissile_Missile_AMRAAM_D_INT_x1",
					"PylonRack_Bomb_SDB_x4",
					"PylonRack_Bomb_SDB_x4",
					"PylonMissile_1Rnd_BombCluster_01_F",
					"PylonMissile_1Rnd_BombCluster_01_F"
				};
			};
		};
	};
};
