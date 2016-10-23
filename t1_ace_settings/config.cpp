class CfgPatches
{
	class t1_ace_settings
	{
		requiredaddons[] = {
			"ace_advanced_ballistics",
			"ace_zeus",
			"ace_vehiclelock",
			"ace_vehicles",
			"ace_viewdistance",
			"ace_weaponselect",
			"ace_weather",
			"ace_winddeflection",
			"ace_yardage450",
			"ace_tripod",
			"ace_ui",
			"ace_vector",
			"ace_switchunits",
			"ace_tacticalladder",
			"ace_thermals",
			"ace_sandbag",
			"ace_scopes",
			"ace_slideshow",
			"ace_smallarms",
			"ace_spottingscope",
			"ace_rangecard",
			"ace_realisticnames",
			"ace_recoil",
			"ace_reload",
			"ace_reloadlaunchers",
			"ace_respawn",
			"ace_safemode",
			"ace_optics",
			"ace_optionsmenu",
			"ace_overheating",
			"ace_overpressure",
			"ACE_Parachute",
			"ace_mx2a",
			"ace_nametags",
			"ace_nightvision",
			"ace_noidle",
			"ace_noradio",
			"ace_norearm",
			"ace_microdagr",
			"ace_missileguidance",
			"ace_missionModules",
			"ace_mk6mortar",
			"ace_modules",
			"ace_movement",
			"ace_medical",
			"ace_magazinerepack",
			"ace_main",
			"ace_map",
			"ace_maptools",
			"ace_markers",
			"ace_laser",
			"ace_laserpointer",
			"ace_logistics_uavbattery",
			"ace_logistics_wirecutter",
			"ace_interact_menu",
			"ace_interaction",
			"ace_inventory",
			"ace_javelin",
			"ace_kestrel4500",
			"ace_hearing",
			"ace_hitreactions",
			"ace_huntir",
			"ace_frag",
			"ace_gforces",
			"ace_goggles",
			"ace_grenades",
			"ace_disposable",
			"ace_dragging",
			"ace_explosives",
			"ace_fcs",
			"ace_finger",
			"ace_flashsuppressors",
			"ace_concertina_wire",
			"ace_dagr",
			"ace_disarming",
			"ace_captives",
			"ace_common",
			"ace_atragmx",
			"ace_attach",
			"ace_backpacks",
			"ace_ballistics",
			"ace_ai",
			"ace_aircraft",
			"ace_APL"
		};
		units[] = {};
		weapons[] = {};
		magazines[] = {};
	};
};

class ACE_Settings {
	class ace_common_forceAllSettings {
		value = 0;
		typeName = "BOOL";
		force = 0;
	};
	class ace_common_checkPBOsAction {
		value = 0;
		typeName = "SCALAR";
		force = 0;
	};
	class ace_common_checkPBOsCheckAll {
		value = 0;
		typeName = "BOOL";
		force = 0;
	};
	class ace_common_checkPBOsWhitelist {
		value = "[]";
		typeName = "STRING";
		force = 0;
	};
	class ace_finger_enabled {
		value = 1;
		typeName = "BOOL";
		force = 0;
	};
	class ace_finger_maxRange {
		value = 4;
		typeName = "SCALAR";
		force = 0;
	};
	class ace_frag_Enabled {
		value = 1;
		typeName = "BOOL";
		force = 0;
	};
	class ace_frag_SpallEnabled {
		value = 0;
		typeName = "BOOL";
		force = 0;
	};
	class ace_frag_ReflectionsEnabled {
		value = 0;
		typeName = "BOOL";
		force = 0;
	};
	class ace_frag_maxTrack {
		value = 500;
		typeName = "SCALAR";
		force = 0;
	};
	class ace_frag_MaxTrackPerFrame {
		value = 50;
		typeName = "SCALAR";
		force = 0;
	};
	class ace_frag_EnableDebugTrace {
		value = 0;
		typeName = "BOOL";
		force = 0;
	};
	class ace_hitreactions_minDamageToTrigger {
		value = 0.1;
		typeName = "SCALAR";
		force = 0;
	};
	class ace_interaction_EnableTeamManagement {
		value = 0;
		typeName = "BOOL";
		force = 0;
	};
	class ace_laserpointer_enabled {
		value = 1;
		typeName = "BOOL";
		force = 0;
	};
	class ace_magazinerepack_TimePerAmmo {
		value = 1.5;
		typeName = "SCALAR";
		force = 0;
	};
	class ace_magazinerepack_TimePerMagazine {
		value = 2;
		typeName = "SCALAR";
		force = 0;
	};
	class ace_magazinerepack_TimePerBeltLink {
		value = 8;
		typeName = "SCALAR";
		force = 0;
	};
	class ace_map_BFT_Interval {
		value = 1;
		typeName = "SCALAR";
		force = 0;
	};
	class ace_map_BFT_Enabled {
		value = 0;
		typeName = "BOOL";
		force = 0;
	};
	class ace_map_BFT_HideAiGroups {
		value = 0;
		typeName = "BOOL";
		force = 0;
	};
	class ace_map_BFT_ShowPlayerNames {
		value = 0;
		typeName = "BOOL";
		force = 0;
	};
	class ace_map_mapIllumination {
		value = 0;
		typeName = "BOOL";
		force = 0;
	};
	class ace_map_mapGlow {
		value = 1;
		typeName = "BOOL";
		force = 0;
	};
	class ace_map_mapShake {
		value = 1;
		typeName = "BOOL";
		force = 0;
	};
	class ace_map_mapLimitZoom {
		value = 0;
		typeName = "BOOL";
		force = 0;
	};
	class ace_map_mapShowCursorCoordinates {
		value = 0;
		typeName = "BOOL";
		force = 0;
	};
	class ace_map_DefaultChannel {
		value = -1;
		typeName = "SCALAR";
		force = 0;
	};
	class ace_map_gestures_enabled {
		value = 1;
		typeName = "BOOL";
		force = 0;
	};
	class ace_map_gestures_maxRange {
		value = 10;
		typeName = "SCALAR";
		force = 0;
	};
	class ace_map_gestures_interval {
		value = 0.03;
		typeName = "SCALAR";
		force = 0;
	};
	class ace_map_gestures_GroupColorConfigurations {
		
		typeName = "ARRAY";
		force = 0;
	};
	class ace_map_gestures_GroupColorConfigurationMapping {
		
		typeName = "ARRAY";
		force = 0;
	};
	class ace_maptools_EveryoneCanDrawOnBriefing {
		value = 1;
		typeName = "BOOL";
		force = 0;
	};
	class ace_medical_level {
		value = 1;
		typeName = "SCALAR";
		force = 0;
	};
	class ace_medical_medicSetting {
		value = 2;
		typeName = "SCALAR";
		force = 0;
	};
	class ace_medical_increaseTrainingInLocations {
		value = 0;
		typeName = "BOOL";
		force = 0;
	};
	class ace_medical_enableFor {
		value = 1;
		typeName = "SCALAR";
		force = 0;
	};
	class ace_medical_enableOverdosing {
		value = 1;
		typeName = "BOOL";
		force = 0;
	};
	class ace_medical_bleedingCoefficient {
		value = 1;
		typeName = "SCALAR";
		force = 0;
	};
	class ace_medical_painCoefficient {
		value = 1;
		typeName = "SCALAR";
		force = 0;
	};
	class ace_medical_enableAirway {
		value = 0;
		typeName = "BOOL";
		force = 0;
	};
	class ace_medical_enableFractures {
		value = 0;
		typeName = "BOOL";
		force = 0;
	};
	class ace_medical_enableAdvancedWounds {
		value = 0;
		typeName = "BOOL";
		force = 0;
	};
	class ace_medical_enableVehicleCrashes {
		value = 1;
		typeName = "BOOL";
		force = 0;
	};
	class ace_medical_enableScreams {
		value = 1;
		typeName = "BOOL";
		force = 0;
	};
	class ace_medical_playerDamageThreshold {
		value = 1;
		typeName = "SCALAR";
		force = 0;
	};
	class ace_medical_AIDamageThreshold {
		value = 0.6;
		typeName = "SCALAR";
		force = 0;
	};
	class ace_medical_enableUnconsciousnessAI {
		value = 2;
		typeName = "SCALAR";
		force = 0;
	};
	class ace_medical_remoteControlledAI {
		value = 1;
		typeName = "BOOL";
		force = 0;
	};
	class ace_medical_preventInstaDeath {
		value = 0;
		typeName = "BOOL";
		force = 0;
	};
	class ace_medical_enableRevive {
		value = 1;
		typeName = "SCALAR";
		force = 0;
	};
	class ace_medical_maxReviveTime {
		value = 1200;
		typeName = "SCALAR";
		force = 0;
	};
	class ace_medical_amountOfReviveLives {
		value = -1;
		typeName = "SCALAR";
		force = 0;
	};
	class ace_medical_allowDeadBodyMovement {
		value = 1;
		typeName = "BOOL";
		force = 0;
	};
	class ace_medical_allowLitterCreation {
		value = 1;
		typeName = "BOOL";
		force = 0;
	};
	class ace_medical_litterCleanUpDelay {
		value = 1800;
		typeName = "SCALAR";
		force = 0;
	};
	class ace_medical_medicSetting_basicEpi {
		value = 1;
		typeName = "SCALAR";
		force = 0;
	};
	class ace_medical_medicSetting_PAK {
		value = 1;
		typeName = "SCALAR";
		force = 0;
	};
	class ace_medical_medicSetting_SurgicalKit {
		value = 1;
		typeName = "SCALAR";
		force = 0;
	};
	class ace_medical_consumeItem_PAK {
		value = 0;
		typeName = "SCALAR";
		force = 0;
	};
	class ace_medical_consumeItem_SurgicalKit {
		value = 0;
		typeName = "SCALAR";
		force = 0;
	};
	class ace_medical_useLocation_basicEpi {
		value = 0;
		typeName = "SCALAR";
		force = 0;
	};
	class ace_medical_useLocation_PAK {
		value = 3;
		typeName = "SCALAR";
		force = 0;
	};
	class ace_medical_useLocation_SurgicalKit {
		value = 3;
		typeName = "SCALAR";
		force = 0;
	};
	class ace_medical_useCondition_PAK {
		value = 1;
		typeName = "SCALAR";
		force = 0;
	};
	class ace_medical_useCondition_SurgicalKit {
		value = 0;
		typeName = "SCALAR";
		force = 0;
	};
	class ace_medical_keepLocalSettingsSynced {
		value = 1;
		typeName = "BOOL";
		force = 0;
	};
	class ace_medical_healHitPointAfterAdvBandage {
		value = 1;
		typeName = "BOOL";
		force = 0;
	};
	class ace_medical_painIsOnlySuppressed {
		value = 1;
		typeName = "BOOL";
		force = 0;
	};
	class ace_medical_allowUnconsciousAnimationOnTreatment {
		value = 0;
		typeName = "BOOL";
		force = 0;
	};
	class ace_medical_moveUnitsFromGroupOnUnconscious {
		value = 0;
		typeName = "BOOL";
		force = 0;
	};
	class ace_medical_delayUnconCaptive {
		value = 3;
		typeName = "SCALAR";
		force = 0;
	};
	class ace_medical_menu_allow {
		value = 1;
		typeName = "SCALAR";
		force = 0;
	};
	class ace_medical_menu_maxRange {
		value = 3;
		typeName = "SCALAR";
		force = 0;
	};
	class ace_microdagr_MapDataAvailable {
		value = 2;
		typeName = "SCALAR";
		force = 0;
	};
	class ace_mk6mortar_airResistanceEnabled {
		value = 0;
		typeName = "BOOL";
		force = 0;
	};
	class ace_mk6mortar_allowComputerRangefinder {
		value = 1;
		typeName = "BOOL";
		force = 0;
	};
	class ace_mk6mortar_allowCompass {
		value = 1;
		typeName = "BOOL";
		force = 0;
	};
	class ace_mk6mortar_useAmmoHandling {
		value = 1;
		typeName = "BOOL";
		force = 0;
	};
	class ace_nametags_showCursorTagForVehicles {
		value = 1;
		typeName = "BOOL";
		force = 0;
	};
	class ace_nametags_playerNamesViewDistance {
		value = 6;
		typeName = "SCALAR";
		force = 0;
	};
	class ace_nametags_playerNamesMaxAlpha {
		value = 0.8;
		typeName = "SCALAR";
		force = 0;
	};
	class ace_nightvision_disableNVGsWithSights {
		value = 0;
		typeName = "BOOL";
		force = 0;
	};
	class ace_overheating_overheatingDispersion {
		value = 1;
		typeName = "BOOL";
		force = 0;
	};
	class ace_overheating_unJamOnreload {
		value = 1;
		typeName = "BOOL";
		force = 0;
	};
	class ace_overheating_unJamFailChance {
		value = 0;
		typeName = "SCALAR";
		force = 0;
	};
	class ace_rearm_level {
		value = 0;
		typeName = "SCALAR";
		force = 0;
	};
	class ace_refuel_rate {
		value = 1;
		typeName = "SCALAR";
		force = 0;
	};
	class ace_repair_engineerSetting_Repair {
		value = 1;
		typeName = "SCALAR";
		force = 0;
	};
	class ace_repair_engineerSetting_Wheel {
		value = 0;
		typeName = "SCALAR";
		force = 0;
	};
	class ace_repair_repairDamageThreshold {
		value = 0.6;
		typeName = "SCALAR";
		force = 0;
	};
	class ace_repair_repairDamageThreshold_Engineer {
		value = 0.4;
		typeName = "SCALAR";
		force = 0;
	};
	class ace_repair_consumeItem_ToolKit {
		value = 0;
		typeName = "SCALAR";
		force = 0;
	};
	class ace_repair_fullRepairLocation {
		value = 3;
		typeName = "SCALAR";
		force = 0;
	};
	class ace_repair_engineerSetting_fullRepair {
		value = 1;
		typeName = "SCALAR";
		force = 0;
	};
	class ace_repair_addSpareParts {
		value = 1;
		typeName = "BOOL";
		force = 0;
	};
	class ace_repair_wheelRepairRequiredItems {
		value = 0;
		typeName = "SCALAR";
		force = 0;
	};
	class ace_respawn_SavePreDeathGear {
		value = 0;
		typeName = "BOOL";
		force = 0;
	};
	class ace_respawn_RemoveDeadBodiesDisconnected {
		value = 0;
		typeName = "BOOL";
		force = 0;
	};
	class ace_respawn_BodyRemoveTimer {
		value = 0;
		typeName = "SCALAR";
		force = 0;
	};
	class ace_sitting_enable {
		value = 0;
		typeName = "BOOL";
		force = 0;
	};
	class ace_spectator_filterUnits {
		value = 1;
		typeName = "SCALAR";
		force = 0;
	};
	class ace_spectator_filterSides {
		value = 0;
		typeName = "SCALAR";
		force = 0;
	};
	class ace_spectator_restrictModes {
		value = 1;
		typeName = "SCALAR";
		force = 0;
	};
	class ace_spectator_restrictVisions {
		value = 0;
		typeName = "SCALAR";
		force = 0;
	};
	class ace_switchunits_EnableSwitchUnits {
		value = 0;
		typeName = "BOOL";
		force = 0;
	};
	class ace_switchunits_SwitchToWest {
		value = 0;
		typeName = "BOOL";
		force = 0;
	};
	class ace_switchunits_SwitchToEast {
		value = 0;
		typeName = "BOOL";
		force = 0;
	};
	class ace_switchunits_SwitchToIndependent {
		value = 0;
		typeName = "BOOL";
		force = 0;
	};
	class ace_switchunits_SwitchToCivilian {
		value = 0;
		typeName = "BOOL";
		force = 0;
	};
	class ace_switchunits_EnableSafeZone {
		value = 1;
		typeName = "BOOL";
		force = 0;
	};
	class ace_switchunits_SafeZoneRadius {
		value = 100;
		typeName = "SCALAR";
		force = 0;
	};
	class ace_vehiclelock_DefaultLockpickStrength {
		value = 10;
		typeName = "SCALAR";
		force = 0;
	};
	class ace_vehiclelock_LockVehicleInventory {
		value = 0;
		typeName = "BOOL";
		force = 0;
	};
	class ace_vehiclelock_VehicleStartingLockState {
		value = -1;
		typeName = "SCALAR";
		force = 0;
	};
	class ace_viewdistance_enabled {
		value = 0;
		typeName = "BOOL";
		force = 0;
	};
	class ace_viewdistance_limitViewDistance {
		value = 10000;
		typeName = "SCALAR";
		force = 0;
	};
	class ace_weather_enableServerController {
		value = 0;
		typeName = "BOOL";
		force = 0;
	};
	class ace_weather_useACEWeather {
		value = 0;
		typeName = "BOOL";
		force = 0;
	};
	class ace_weather_syncRain {
		value = 0;
		typeName = "BOOL";
		force = 0;
	};
	class ace_weather_syncWind {
		value = 0;
		typeName = "BOOL";
		force = 0;
	};
	class ace_weather_syncMisc {
		value = 0;
		typeName = "BOOL";
		force = 0;
	};
	class ace_weather_serverUpdateInterval {
		value = 60;
		typeName = "SCALAR";
		force = 0;
	};
	class ace_winddeflection_enabled {
		value = 1;
		typeName = "BOOL";
		force = 0;
	};
	class ace_winddeflection_vehicleEnabled {
		value = 1;
		typeName = "BOOL";
		force = 0;
	};
	class ace_winddeflection_simulationInterval {
		value = 0.05;
		typeName = "SCALAR";
		force = 0;
	};
	class ace_winddeflection_simulationRadius {
		value = 3000;
		typeName = "SCALAR";
		force = 0;
	};
	class ace_zeus_zeusAscension {
		value = 0;
		typeName = "BOOL";
		force = 0;
	};
	class ace_zeus_zeusBird {
		value = 0;
		typeName = "BOOL";
		force = 0;
	};
	class ace_zeus_remoteWind {
		value = 0;
		typeName = "BOOL";
		force = 0;
	};
	class ace_zeus_radioOrdnance {
		value = 0;
		typeName = "BOOL";
		force = 0;
	};
	class ace_zeus_revealMines {
		value = 0;
		typeName = "SCALAR";
		force = 0;
	};
	class ace_zeus_autoAddObjects {
		value = 1;
		typeName = "BOOL";
		force = 0;
	};
	class ace_captives_allowHandcuffOwnSide {
		value = 1;
		typeName = "BOOL";
		force = 0;
	};
	class ace_captives_requireSurrender {
		value = 0;
		typeName = "SCALAR";
		force = 0;
	};
	class ace_captives_allowSurrender {
		value = 1;
		typeName = "BOOL";
		force = 0;
	};
	class ace_cargo_enable {
		value = 1;
		typeName = "BOOL";
		force = 0;
	};
	class ace_explosives_RequireSpecialist {
		value = 0;
		typeName = "BOOL";
		force = 0;
	};
	class ace_explosives_PunishNonSpecialists {
		value = 1;
		typeName = "BOOL";
		force = 0;
	};
	class ace_explosives_ExplodeOnDefuse {
		value = 1;
		typeName = "BOOL";
		force = 0;
	};
	class ace_hearing_EnableCombatDeafness {
		value = 1;
		typeName = "BOOL";
		force = 0;
	};
	class ace_hearing_EarplugsVolume {
		value = 0.5;
		typeName = "SCALAR";
		force = 0;
	};
	class ace_hearing_UnconsciousnessVolume {
		value = 0.4;
		typeName = "SCALAR";
		force = 0;
	};
	class ace_hearing_enabledForZeusUnits {
		value = 1;
		typeName = "BOOL";
		force = 0;
	};
	class ace_hearing_autoAddEarplugsToUnits {
		value = 1;
		typeName = "BOOL";
		force = 0;
	};
	class ace_advanced_ballistics_enabled {
		value = 0;
		typeName = "BOOL";
		force = 0;
	};
	class ace_advanced_ballistics_simulateForSnipers {
		value = 1;
		typeName = "BOOL";
		force = 0;
	};
	class ace_advanced_ballistics_simulateForGroupMembers {
		value = 0;
		typeName = "BOOL";
		force = 0;
	};
	class ace_advanced_ballistics_simulateForEveryone {
		value = 0;
		typeName = "BOOL";
		force = 0;
	};
	class ace_advanced_ballistics_disabledInFullAutoMode {
		value = 0;
		typeName = "BOOL";
		force = 0;
	};
	class ace_advanced_ballistics_ammoTemperatureEnabled {
		value = 1;
		typeName = "BOOL";
		force = 0;
	};
	class ace_advanced_ballistics_barrelLengthInfluenceEnabled {
		value = 1;
		typeName = "BOOL";
		force = 0;
	};
	class ace_advanced_ballistics_bulletTraceEnabled {
		value = 1;
		typeName = "BOOL";
		force = 0;
	};
	class ace_advanced_ballistics_simulationInterval {
		value = 0;
		typeName = "SCALAR";
		force = 0;
	};
	class ace_advanced_ballistics_simulationRadius {
		value = 3000;
		typeName = "SCALAR";
		force = 0;
	};
};
