class CfgPatches
{
	class T1AM
	{
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {"A3_Data_F_Oldman_Loadorder","A3_Data_F_Mod_Loadorder","cba_main"};
		author[]= {"BlackAlpha"};
	};
};



class Extended_PreInit_Eventhandlers
{
	T1AM_PRE1 = call compile preprocessFileLineNumbers "T1AM\XEH_preInit.sqf";
};



class Extended_PostInit_EventHandlers 
{
	T1AM_POST1 = call compile preprocessFileLineNumbers "T1AM\XEH_postInit.sqf";
};



class CfgFunctions
{
	class T1AM
	{
		class Functions
		{
			class Splash {file = "T1AM\Control\Splash.sqf"};
			class Tube {file = "T1AM\Control\Tube.sqf"};
			class ProcessFireMission_Server {file = "T1AM\Control\ProcessFireMission_Server.sqf"};
			class ProcessFireMission {file = "T1AM\Control\ProcessFireMission.sqf"};
			class LoadMagazine {file = "T1AM\Control\LoadMagazine.sqf"};
			class FindBestCharge {file = "T1AM\Control\FindBestCharge.sqf"};
			class FindCharge {file = "T1AM\Control\FindCharge.sqf"};
			class RemoveDigits {file = "T1AM\Control\RemoveDigits.sqf"};
			class GetAllCharges {file = "T1AM\Control\GetAllCharges.sqf"};
			class GetPrepTime {file = "T1AM\Control\GetPrepTime.sqf"};
			class DisplayWarheads {file = "T1AM\Dialog\DisplayWarheads.sqf"};
			class ChangeTube {file = "T1AM\Dialog\ChangeTube.sqf"};
			class Transmit {file = "T1AM\Dialog\Transmit.sqf"};
			class SelectFuse {file = "T1AM\Dialog\SelectFuse.sqf"};
			class CheckForDC {file = "T1AM\Dialog\CheckForDC.sqf"};
			class CheckFire_Server {file = "T1AM\Dialog\CheckFire_Server.sqf"};
			class CheckFire_Player {file = "T1AM\Dialog\CheckFire_Player.sqf"};
			class Aimpoint {file = "T1AM\Dialog\Aimpoint.sqf"};
			class AimpointHelp {file = "T1AM\Dialog\AimpointHelp.sqf"};
			class InputAimpoint {file = "T1AM\Dialog\InputAimpoint.sqf"};
			class InputAimpointMapClick {file = "T1AM\Dialog\InputAimpointMapClick.sqf"};
			class InputAimpointMapClickProcess {file = "T1AM\Dialog\InputAimpointMapClickProcess.sqf"};
			class InputAimpointMapClickEffect {file = "T1AM\Dialog\InputAimpointMapClickEffect.sqf"};
			class Adjust {file = "T1AM\Dialog\Adjust.sqf"};
			class ControlAsset {file = "T1AM\Dialog\ControlAsset.sqf"};
			class Assets {file = "T1AM\Dialog\Assets.sqf"};
			class EndMission {file = "T1AM\Dialog\EndMission.sqf"};
			class ReleaseAsset {file = "T1AM\Dialog\ReleaseAsset.sqf"};
			class Control {file = "T1AM\Dialog\Control.sqf"};
			class CheckAssetStatus {file = "T1AM\Misc\CheckAssetStatus.sqf"};
			class KeyPressed {file = "T1AM\Misc\KeyPressed.sqf"};
			class SendComms {file = "T1AM\Misc\SendComms.sqf"};
			class PlayComms {file = "T1AM\Misc\PlayComms.sqf"};
			class PosToMapGrid {file = "T1AM\Misc\PosToMapGrid.sqf"};
			class MapGridToPos {file = "T1AM\Misc\MapGridToPos.sqf"};
			class GetMapGridData {file = "T1AM\Misc\GetMapGridData.sqf"};
			class ApproveVehicles {file = "T1AM\Misc\ApproveVehicles.sqf"};
			class ParseNumber {file = "T1AM\Misc\ParseNumber.sqf"};
			class PlaceMarker {file = "T1AM\Misc\PlaceMarker.sqf"};
			class ExcludeVehicleClass {file = "T1AM\Misc\ExcludeVehicleClass.sqf"};
			class ExcludeVehicle {file = "T1AM\Misc\ExcludeVehicle.sqf"};
			class ExcludeGroup {file = "T1AM\Misc\ExcludeGroup.sqf"};
			class AssetType {file = "T1AM\Misc\AssetType.sqf"};
			class FormatCoordinates {file = "T1AM\Misc\FormatCoordinates.sqf"};
			class TubeType {file = "T1AM\Misc\TubeType.sqf"};
			class AmmoType {file = "T1AM\Misc\AmmoType.sqf"};
			class GroupType {file = "T1AM\Misc\GroupType.sqf"};
			class TrimGroupName {file = "T1AM\Misc\TrimGroupName.sqf"};
			class VehicleName {file = "T1AM\Misc\VehicleName.sqf"};
			class GroupVehicles {file = "T1AM\Misc\GroupVehicles.sqf"};
			class ArtilleryGroupsBySide {file = "T1AM\Misc\ArtilleryGroupsBySide.sqf"};
			class HasRadio {file = "T1AM\Misc\HasRadio.sqf"};
			class GridToPos {file = "T1AM\Misc\GridToPos.sqf"};
			class LineSheaf {file = "T1AM\Sheafs\LineSheaf.sqf"};
			class BoxSheaf {file = "T1AM\Sheafs\BoxSheaf.sqf"};
			class CircularSheaf {file = "T1AM\Sheafs\CircularSheaf.sqf"};
			class ProfileBM21 {file = "T1AM\Profiles\ProfileBM21.sqf"};
			class ProfileRocketsHA {file = "T1AM\Profiles\ProfileRocketsHA.sqf"};
			class ProfileRocketsLA {file = "T1AM\Profiles\ProfileRocketsLA.sqf"};
			class ProfileCannonHA {file = "T1AM\Profiles\ProfileCannonHA.sqf"};
			class ProfileCannonLA {file = "T1AM\Profiles\ProfileCannonLA.sqf"};
			class ProfileMortar {file = "T1AM\Profiles\ProfileMortar.sqf"};
			class ProfileMK41 {file = "T1AM\Profiles\ProfileMK41.sqf"};
			class DebugStart {file = "T1AM\Debug\DebugStart.sqf"};
			class ProjectileTrack {file = "T1AM\Debug\ProjectileTrack.sqf"};
			class ProjectileTrail {file = "T1AM\Debug\ProjectileTrail.sqf"};
		};
	};
	
	class RHS
	{
		class Functions
		{
			class fired_m119 {file = "T1AM\Misc\Empty.sqf"};
			class fired_D30 {file = "T1AM\Misc\Empty.sqf"};
		};
	};
};



#include "Menu.hpp"



class cfgVehicles
{
	class B_MBT_01_arty_F;
	class I_MBT_01_arty_F: B_MBT_01_arty_F
	{
		crew = "I_crew_F";
		typicalCargo[] = {"I_Soldier_F"};
		side = 2;
		faction = "IND_F";
	};
	class B_MBT_01_mlrs_F;
	class I_MBT_01_mlrs_F: B_MBT_01_mlrs_F
	{
		crew = "I_crew_F";
		typicalCargo[] = {"I_Soldier_F"};
		side = 2;
		faction = "IND_F";
	};
	
	class Tank_F;
	class MBT_01_base_F: Tank_F
	{
		class Turrets
		{
			class MainTurret;
		};
	};
	
	class MBT_01_arty_base_F: MBT_01_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] = {"32Rnd_155mm_Mo_shells","2Rnd_155mm_Mo_LG","2Rnd_155mm_Mo_LG","2Rnd_155mm_Mo_guided","6Rnd_155mm_Mo_mine","2Rnd_155mm_Mo_Cluster","6Rnd_155mm_Mo_AT_mine","6Rnd_155mm_Mo_smoke","6Rnd_155mm_Mo_smoke"};
			};
		};
	};
	
	class StaticWeapon;
	class StaticMortar: StaticWeapon
	{
		class Turrets
		{
			class MainTurret;
		};
	};
	
	class Mortar_01_base_F: StaticMortar
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] = {"8Rnd_82mm_Mo_shells","8Rnd_82mm_Mo_shells","8Rnd_82mm_Mo_shells","8Rnd_82mm_Mo_shells","8Rnd_82mm_Mo_LG","8Rnd_82mm_Mo_guided","8Rnd_82mm_Mo_Flare_white","8Rnd_82mm_Mo_Flare_white","8Rnd_82mm_Mo_Smoke_white","8Rnd_82mm_Mo_Smoke_white"};
			};
		};
	};
};



class CfgGroups
{
	class INDEP
	{
		name = "Independent";
		class IND_F
		{
			name = "AAF";
			class Armored
			{
				name = "Armored";
				class HAF_SPGPlatoon_Scorcher
				{
					name = "Artillery SPG Platoon";
					faction = "IND_F";
					side = 2;
					rarityGroup = 0.5;
					class Unit0
					{
						side = 2;
						vehicle = "I_MBT_01_arty_F";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "I_MBT_01_arty_F";
						rank = "SERGEANT";
						position[] = {20,-30,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "I_MBT_01_arty_F";
						rank = "SERGEANT";
						position[] = {-20,-30,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "I_MBT_01_arty_F";
						rank = "CORPORAL";
						position[] = {-40,-60,3};
					};
				};
				class HAF_SPGSection_Scorcher
				{
					name = "Artillery SPG Section";
					faction = "IND_F";
					side = 2;
					rarityGroup = 0.5;
					class Unit0
					{
						side = 2;
						vehicle = "I_MBT_01_arty_F";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "I_MBT_01_arty_F";
						rank = "SERGEANT";
						position[] = {20,-30,0};
					};
				};
			};
		};
	};
};



class CfgSounds
{
	class T1AM_Beep
	{
		name = "T1AM_Beep";
		sound[] ={"\T1AM\Sounds\beep.ogg",db-10,1.0};
		titles[] = {};
	};

	// US radio
	class T1AM_AdjustFireUS
	{
		name = "T1AM_AdjustFireUS";
		sound[] ={"\T1AM\Sounds\US\AdjustFire.ogg",db-10,1.0};
		titles[] = {};
	};

	class T1AM_MTOUS
	{
		name = "T1AM_MTOIS";
		sound[] ={"\T1AM\Sounds\US\MTO.ogg",db-10,1.0};
		titles[] = {};
	};

	class T1AM_ShotUS
	{
		name = "T1AM_ShotUS";
		sound[] ={"\T1AM\Sounds\US\Shot.ogg",db-10,1.0};
		titles[] = {};
	};

	class T1AM_SplashUS
	{
		name = "T1AM_SplashUS";
		sound[] ={"\T1AM\Sounds\US\Splash.ogg",db-10,1.0};
		titles[] = {};
	};

	class T1AM_EndOfMissionUS
	{
		name = "T1AM_EndOfMissionUS";
		sound[] ={"\T1AM\Sounds\US\EndOfMission.ogg",db-10,1.0};
		titles[] = {};
	};
	
	// Iranian radio	
	class T1AM_AffirmativePER
	{
		name = "T1AM_AffirmativePER";
		sound[] ={"\T1AM\Sounds\PER\Confirmation.ogg",db-10,1.0};
		titles[] = {};
	};

	class T1AM_NegativePER
	{
		name = "T1AM_NegativePER";
		sound[] ={"\T1AM\Sounds\PER\Negative.ogg",db-10,1.0};
		titles[] = {};
	};

	class T1AM_FireMissionReadyPER
	{
		name = "T1AM_FireMissionReadyPER";
		sound[] ={"\T1AM\Sounds\PER\ReadyToFire.ogg",db-10,1.0};
		titles[] = {};
	};

	class T1AM_AdjustFirePER
	{
		name = "T1AM_AdjustFirePER";
		sound[] ={"\T1AM\Sounds\PER\ReadyForOrders.ogg",db-10,1.0};
		titles[] = {};
	};

	class T1AM_MTOPER
	{
		name = "T1AM_MTOIS";
		sound[] ={"\T1AM\Sounds\PER\RequestAcknowledged.ogg",db-10,1.0};
		titles[] = {};
	};

	class T1AM_ShotPER
	{
		name = "T1AM_ShotPER";
		sound[] ={"\T1AM\Sounds\PER\Fire_1.ogg",db-10,1.0};
		titles[] = {};
	};

	class T1AM_SplashPER
	{
		name = "T1AM_SplashPER";
		sound[] ={"\T1AM\Sounds\PER\Splash.ogg",db-10,1.0};
		titles[] = {};
	};

	class T1AM_EndOfMissionPER
	{
		name = "T1AM_EndOfMissionPER";
		sound[] ={"\T1AM\Sounds\PER\RoundsComplete.ogg",db-10,1.0};
		titles[] = {};
	};

	// Greek radio
	class T1AM_AffirmativeGRE
	{
		name = "T1AM_AffirmativeGRE";
		sound[] ={"\T1AM\Sounds\GRE\Confirmation.ogg",db-10,1.0};
		titles[] = {};
	};

	class T1AM_NegativeGRE
	{
		name = "T1AM_NegativeGRE";
		sound[] ={"\T1AM\Sounds\GRE\Negative.ogg",db-10,1.0};
		titles[] = {};
	};

	class T1AM_AdjustFireGRE
	{
		name = "T1AM_AdjustFireGRE";
		sound[] ={"\T1AM\Sounds\GRE\AdjustFire.ogg",db-10,1.0};
		titles[] = {};
	};

	class T1AM_MTOGRE
	{
		name = "T1AM_MTOIS";
		sound[] ={"\T1AM\Sounds\GRE\MTO.ogg",db-10,1.0};
		titles[] = {};
	};

	class T1AM_ShotGRE
	{
		name = "T1AM_ShotGRE";
		sound[] ={"\T1AM\Sounds\GRE\Shot.ogg",db-10,1.0};
		titles[] = {};
	};

	class T1AM_SplashGRE
	{
		name = "T1AM_SplashGRE";
		sound[] ={"\T1AM\Sounds\GRE\Splash.ogg",db-10,1.0};
		titles[] = {};
	};

	class T1AM_EndOfMissionGRE
	{
		name = "T1AM_EndOfMissionGRE";
		sound[] ={"\T1AM\Sounds\GRE\RoundsComplete.ogg",db-10,1.0};
		titles[] = {};
	};
	
	class T1AM_FireMissionReadyGRE
	{
		name = "T1AM_FireMissionReadyGRE";
		sound[] ={"\T1AM\Sounds\GRE\FireMissionReady.ogg",db-10,1.0};
		titles[] = {};
	};	
};



class CfgMagazines
{
	class 8Rnd_82mm_Mo_shells;
	class 8Rnd_82mm_Mo_guided: 8Rnd_82mm_Mo_shells
	{
		count = 2;
	};
	
	class 8Rnd_82mm_Mo_LG: 8Rnd_82mm_Mo_shells
	{
		count = 2;
	};
};



class CfgAmmo
{
	class B_65x39_Caseless;
	class ace_frag_base_T1AM_Copy: B_65x39_Caseless
	{
		timeToLive = 12;
		typicalSpeed = 1500;
		deflecting = 65;
	};
	
	class ace_frag_medium_T1AM_Copy: ace_frag_base_T1AM_Copy
	{
		hit = 30;
		airFriction = "(-0.01)*0.75";
		caliber = 1.5;
	};
	
	class ace_frag_medium_HD_T1AM_Copy: ace_frag_base_T1AM_Copy
	{
		hit = 30;
		airFriction = "(-0.01*5)*0.75";
		caliber = 1.5;
	};
	
	class ace_frag_large_T1AM_Copy: ace_frag_base_T1AM_Copy
	{
		hit = 35;
		indirectHit = 4;
		indirectHitRange = 0.25;
		airFriction = "(-0.01)*0.5";
		caliber = 2.0;
	};
	
	class ace_frag_large_HD_T1AM_Copy: ace_frag_large_T1AM_Copy
	{
		hit = 35;
		indirectHit = 4;
		indirectHitRange = 0.25;
		airFriction = "(-0.01*5)*0.5";
		caliber = 2.0;
	};
	
	class ace_frag_huge_T1AM_Copy: ace_frag_large_T1AM_Copy
	{
		hit = 40;
		indirectHit = 5;
		indirectHitRange = 0.5;
		airFriction = "(-0.01)*0.35";
		caliber = 3.0;
	};
	
	class ace_frag_huge_HD_T1AM_Copy: ace_frag_large_T1AM_Copy
	{
		hit = 40;
		indirectHit = 5;
		indirectHitRange = 0.5;
		airFriction = "(-0.01*5)*0.35";
		caliber = 3.0;
	};
	
	class ace_frag_huge2_T1AM_Copy: ace_frag_large_T1AM_Copy
	{
		hit = 40;
		indirectHit = 5;
		indirectHitRange = 0.5;
		airFriction = "(-0.01)*0.25";
		caliber = 5.0;
	};
	
	class ACE_frag_T1AM_HE_AIRBURST_1: ace_frag_base_T1AM_Copy
	{
		hit = 30;
		airFriction = "(-0.01)*0.5";
		caliber = 1.5;
	};
	
	class ACE_frag_T1AM_HE_AIRBURST_2: ace_frag_base_T1AM_Copy
	{
		hit = 35;
		airFriction = "(-0.01)*0.35";
		caliber = 2.0;
		indirectHit = 4;
		indirectHitRange = 0.25;
	};
	
	class ACE_frag_T1AM_HE_AIRBURST_3: ace_frag_base_T1AM_Copy
	{
		hit = 40;
		airFriction = "(-0.01)*0.25";
		caliber = 3.0;
		indirectHit = 5;
		indirectHitRange = 0.5;
	};
	
	
	
	class Grenade;
	class T1AM_Airburst_Mortar: Grenade
	{
		hit = 75;
		indirectHit = 50;
		indirectHitRange = 25;
		explosive = 1;
		
		ace_frag_enabled = 1;
		ace_frag_classes[] = {"ACE_frag_T1AM_HE_AIRBURST_1","ACE_frag_T1AM_HE_AIRBURST_2","ACE_frag_T1AM_HE_AIRBURST_2","ACE_frag_T1AM_HE_AIRBURST_2","ACE_frag_T1AM_HE_AIRBURST_2","ACE_frag_T1AM_HE_AIRBURST_2","ACE_frag_T1AM_HE_AIRBURST_3","ACE_frag_T1AM_HE_AIRBURST_3","ACE_frag_T1AM_HE_AIRBURST_3","ACE_frag_T1AM_HE_AIRBURST_3"};
		ace_frag_metal = 36000;
		ace_frag_charge = 9979;
		ace_frag_gurney_c = 2440;
		ace_frag_gurney_k = "1/2";
		
		CraterEffects = "ArtyShellCrater";
		explosionEffects = "MortarExplosion";
		
		typicalSpeed = 100;
		cost = 300;
		model = "\A3\Weapons_f\empty";
		airFriction = 0;
		timeToLive = 1;
		explosionTime = 0.001;
		soundHit[] = {"A3\Sounds_F\weapons\Rockets\explosion_missile_01",db20,1,1200};
		soundFly[] = {"",1,1};
		soundEngine[] = {"",1,4};
	};
	
	class T1AM_Airburst_Cannon: Grenade
	{
		hit = 175;
		indirectHit = 60;
		indirectHitRange = 30;
		explosive = 1;
		
		ace_frag_enabled = 1;
		ace_frag_classes[] = {"ACE_frag_T1AM_HE_AIRBURST_1","ACE_frag_T1AM_HE_AIRBURST_2","ACE_frag_T1AM_HE_AIRBURST_2","ACE_frag_T1AM_HE_AIRBURST_2","ACE_frag_T1AM_HE_AIRBURST_3","ACE_frag_T1AM_HE_AIRBURST_3","ACE_frag_T1AM_HE_AIRBURST_3","ACE_frag_T1AM_HE_AIRBURST_3","ACE_frag_T1AM_HE_AIRBURST_3","ACE_frag_T1AM_HE_AIRBURST_3"};
		ace_frag_metal = 36000;
		ace_frag_charge = 9979;
		ace_frag_gurney_c = 2440;
		ace_frag_gurney_k = "1/2";
		
		CraterEffects = "ImpactEffectsMedium";
		explosionEffects = "MortarExplosion";
		
		typicalSpeed = 100;
		cost = 300;
		model = "\A3\Weapons_f\empty";
		airFriction = 0;
		timeToLive = 1;
		explosionTime = 0.001;
		soundHit[] = {"A3\Sounds_F\weapons\Rockets\explosion_missile_01",db20,1,1200};
		soundFly[] = {"",1,1};
		soundEngine[] = {"",1,4};
	};
	
	class T1AM_Airburst_Rocket: Grenade
	{
		hit = 200;
		indirectHit = 200;
		indirectHitRange = 35;
		explosive = 1;
		
		ace_frag_enabled = 1;
		ace_frag_classes[] = {"ACE_frag_T1AM_HE_AIRBURST_1","ACE_frag_T1AM_HE_AIRBURST_2","ACE_frag_T1AM_HE_AIRBURST_3","ACE_frag_T1AM_HE_AIRBURST_3","ACE_frag_T1AM_HE_AIRBURST_3","ACE_frag_T1AM_HE_AIRBURST_3","ACE_frag_T1AM_HE_AIRBURST_3","ACE_frag_T1AM_HE_AIRBURST_3","ACE_frag_T1AM_HE_AIRBURST_3","ACE_frag_T1AM_HE_AIRBURST_3"};
		ace_frag_metal = 36000;
		ace_frag_charge = 9979;
		ace_frag_gurney_c = 2440;
		ace_frag_gurney_k = "1/2";
		
		CraterEffects = "ImpactEffectsMedium";
		explosionEffects = "MortarExplosion";
		
		typicalSpeed = 100;
		cost = 300;
		model = "\A3\Weapons_f\empty";
		airFriction = 0;
		timeToLive = 1;
		explosionTime = 0.001;
		soundHit[] = {"A3\Sounds_F\weapons\Rockets\explosion_missile_01",db20,1,1200};
		soundFly[] = {"",1,1};
		soundEngine[] = {"",1,4};
	};
	
	
	
	class SubmunitionBase;
	class Sh_82mm_AMOS_guided: SubmunitionBase
	{
		hit = 450;
		indirectHit = 47;
		indirectHitRange = 10;
		
		ace_frag_charge = 320;
		ace_frag_classes[] = {"ace_frag_medium_HD_T1AM_Copy","ace_frag_medium_HD_T1AM_Copy","ace_frag_medium_T1AM_Copy","ace_frag_medium_T1AM_Copy","ace_frag_medium_T1AM_Copy","ace_frag_large_HD_T1AM_Copy","ace_frag_large_T1AM_Copy","ace_frag_large_T1AM_Copy","ace_frag_large_T1AM_Copy","ace_frag_large_T1AM_Copy"};
		ace_frag_enabled = 1;
		ace_frag_gurney_c = 2440;
		ace_frag_gurney_k = "1/2";
		ace_frag_metal = 3200;
		ace_frag_skip = 1;
	};
	
	class Sh_82mm_AMOS_LG: Sh_82mm_AMOS_guided
	{
		hit = 450;
		indirectHit = 47;
		indirectHitRange = 10;
		
		ace_frag_charge = 320;
		ace_frag_classes[] = {"ace_frag_medium_HD_T1AM_Copy","ace_frag_medium_HD_T1AM_Copy","ace_frag_medium_T1AM_Copy","ace_frag_medium_T1AM_Copy","ace_frag_medium_T1AM_Copy","ace_frag_large_HD_T1AM_Copy","ace_frag_large_T1AM_Copy","ace_frag_large_T1AM_Copy","ace_frag_large_T1AM_Copy","ace_frag_large_T1AM_Copy"};
		ace_frag_enabled = 1;
		ace_frag_gurney_c = 2440;
		ace_frag_gurney_k = "1/2";
		ace_frag_metal = 3200;
		ace_frag_skip = 1;
	};
	
	class MissileBase;
	class M_Mo_82mm_AT: MissileBase
	{

		hit = 450;
		indirectHit = 47;
		indirectHitRange = 10;
		
		ace_frag_charge = 320;
		ace_frag_classes[] = {"ace_frag_medium_HD_T1AM_Copy","ace_frag_medium_HD_T1AM_Copy","ace_frag_medium_T1AM_Copy","ace_frag_medium_T1AM_Copy","ace_frag_medium_T1AM_Copy","ace_frag_large_HD_T1AM_Copy","ace_frag_large_T1AM_Copy","ace_frag_large_T1AM_Copy","ace_frag_large_T1AM_Copy","ace_frag_large_T1AM_Copy"};
		ace_frag_enabled = 1;
		ace_frag_gurney_c = 2440;
		ace_frag_gurney_k = "1/2";
		ace_frag_metal = 3200;
	};
	
	class M_Mo_82mm_AT_LG: M_Mo_82mm_AT
	{

		hit = 450;
		indirectHit = 47;
		indirectHitRange = 10;
		
		ace_frag_charge = 320;
		ace_frag_classes[] = {"ace_frag_medium_HD_T1AM_Copy","ace_frag_medium_HD_T1AM_Copy","ace_frag_medium_T1AM_Copy","ace_frag_medium_T1AM_Copy","ace_frag_medium_T1AM_Copy","ace_frag_large_HD_T1AM_Copy","ace_frag_large_T1AM_Copy","ace_frag_large_T1AM_Copy","ace_frag_large_T1AM_Copy","ace_frag_large_T1AM_Copy"};
		ace_frag_enabled = 1;
		ace_frag_gurney_c = 2440;
		ace_frag_gurney_k = "1/2";
		ace_frag_metal = 3200;
	};
	
	class ShellBase;
	class Sh_155mm_AMOS: ShellBase
	{
		hit = 375;
		indirectHit = 120;
		indirectHitRange = 25;
		
		ace_frag_charge = 420;
		ace_frag_classes[] = {"ace_frag_large_HD_T1AM_Copy","ace_frag_large_T1AM_Copy","ace_frag_large_T1AM_Copy","ace_frag_large_T1AM_Copy","ace_frag_large_T1AM_Copy","ace_frag_huge_HD_T1AM_Copy","ace_frag_huge_T1AM_Copy","ace_frag_huge_T1AM_Copy","ace_frag_huge_T1AM_Copy","ace_frag_huge_T1AM_Copy"};
		ace_frag_enabled = 1;
		ace_frag_gurney_c = 2440;
		ace_frag_gurney_k = "1/2";
		ace_frag_metal = 3200;
		
		whistleDist = 60;
	};
	
	class Sh_82mm_AMOS: Sh_155mm_AMOS
	{
		hit = 275;
		indirectHit = 52;
		indirectHitRange = 18;
		
		ace_frag_charge = 320;
		ace_frag_classes[] = {"ace_frag_medium_HD_T1AM_Copy","ace_frag_medium_T1AM_Copy","ace_frag_medium_T1AM_Copy","ace_frag_medium_T1AM_Copy","ace_frag_medium_T1AM_Copy","ace_frag_large_HD_T1AM_Copy","ace_frag_large_T1AM_Copy","ace_frag_large_T1AM_Copy","ace_frag_large_T1AM_Copy","ace_frag_huge_T1AM_Copy"};
		ace_frag_enabled = 1;
		ace_frag_gurney_c = 2440;
		ace_frag_gurney_k = "1/2";
		ace_frag_metal = 3200;
	};
	
	class Sh_155mm_AMOS_guided: Sh_82mm_AMOS_guided
	{
		hit = 1100;
		indirectHit = 100;
		indirectHitRange = 16;
		
		ace_frag_charge = 420;
		ace_frag_classes[] = {"ace_frag_large_HD_T1AM_Copy","ace_frag_large_HD_T1AM_Copy","ace_frag_large_HD_T1AM_Copy","ace_frag_large_HD_T1AM_Copy","ace_frag_large_T1AM_Copy","ace_frag_large_T1AM_Copy","ace_frag_large_T1AM_Copy","ace_frag_large_T1AM_Copy","ace_frag_large_T1AM_Copy","ace_frag_large_T1AM_Copy"};
		ace_frag_enabled = 1;
		ace_frag_gurney_c = 2440;
		ace_frag_gurney_k = "1/2";
		ace_frag_metal = 3200;
		ace_frag_skip = 1;
	};
	
	class Sh_155mm_AMOS_LG: Sh_82mm_AMOS_LG
	{
		hit = 1100;
		indirectHit = 100;
		indirectHitRange = 16;
		
		ace_frag_charge = 420;
		ace_frag_classes[] = {"ace_frag_large_HD_T1AM_Copy","ace_frag_large_HD_T1AM_Copy","ace_frag_large_HD_T1AM_Copy","ace_frag_large_HD_T1AM_Copy","ace_frag_large_T1AM_Copy","ace_frag_large_T1AM_Copy","ace_frag_large_T1AM_Copy","ace_frag_large_T1AM_Copy","ace_frag_large_T1AM_Copy","ace_frag_large_T1AM_Copy"};
		ace_frag_enabled = 1;
		ace_frag_gurney_c = 2440;
		ace_frag_gurney_k = "1/2";
		ace_frag_metal = 3200;
		ace_frag_skip = 1;
	};
	
	class M_Mo_120mm_AT;
	class M_Mo_155mm_AT: M_Mo_120mm_AT
	{
		hit = 1100;
		indirectHit = 100;
		indirectHitRange = 16;
		
		ace_frag_charge = 420;
		ace_frag_classes[] = {"ace_frag_large_HD_T1AM_Copy","ace_frag_large_HD_T1AM_Copy","ace_frag_large_HD_T1AM_Copy","ace_frag_large_HD_T1AM_Copy","ace_frag_large_T1AM_Copy","ace_frag_large_T1AM_Copy","ace_frag_large_T1AM_Copy","ace_frag_large_T1AM_Copy","ace_frag_large_T1AM_Copy","ace_frag_large_T1AM_Copy"};
		ace_frag_enabled = 1;
		ace_frag_gurney_c = 2440;
		ace_frag_gurney_k = "1/2";
		ace_frag_metal = 3200;
	};
	
	class M_Mo_120mm_AT_LG;
	class M_Mo_155mm_AT_LG: M_Mo_120mm_AT_LG
	{
		hit = 1100;
		indirectHit = 100;
		indirectHitRange = 16;
		
		ace_frag_charge = 420;
		ace_frag_classes[] = {"ace_frag_large_HD_T1AM_Copy","ace_frag_large_HD_T1AM_Copy","ace_frag_large_HD_T1AM_Copy","ace_frag_large_HD_T1AM_Copy","ace_frag_large_T1AM_Copy","ace_frag_large_T1AM_Copy","ace_frag_large_T1AM_Copy","ace_frag_large_T1AM_Copy","ace_frag_large_T1AM_Copy","ace_frag_large_T1AM_Copy"};
		ace_frag_enabled = 1;
		ace_frag_gurney_c = 2440;
		ace_frag_gurney_k = "1/2";
		ace_frag_metal = 3200;
	};
	
	class R_230mm_fly: ShellBase
	{
		hit = 1200;
		indirectHit = 400;
		indirectHitRange = 30;
		
		ace_frag_charge = 420;
		ace_frag_classes[] = {"ace_frag_large_HD_T1AM_Copy","ace_frag_large_T1AM_Copy","ace_frag_huge_HD_T1AM_Copy","ace_frag_huge_T1AM_Copy","ace_frag_huge_T1AM_Copy","ace_frag_huge_T1AM_Copy","ace_frag_huge_T1AM_Copy","ace_frag_huge_T1AM_Copy","ace_frag_huge_T1AM_Copy","ace_frag_huge_T1AM_Copy"};
		ace_frag_enabled = 1;
		ace_frag_gurney_c = 2440;
		ace_frag_gurney_k = "1/2";
		ace_frag_metal = 3200;
	};
	
	class R_230mm_HE: SubmunitionBase
	{
		hit = 1200;
		indirectHit = 400;
		indirectHitRange = 30;
		
		ace_frag_classes[] = {"ace_frag_large_HD_T1AM_Copy","ace_frag_large_T1AM_Copy","ace_frag_huge_HD_T1AM_Copy","ace_frag_huge_T1AM_Copy","ace_frag_huge_T1AM_Copy","ace_frag_huge_T1AM_Copy","ace_frag_huge_T1AM_Copy","ace_frag_huge_T1AM_Copy","ace_frag_huge_T1AM_Copy","ace_frag_huge_T1AM_Copy"};
		ace_frag_metal = 40000;
		ace_frag_charge = 10000;
		ace_frag_gurney_c = 2500;
		ace_frag_gurney_k = "1/2";
	};
	
	class Smoke_120mm_AMOS_White: SubmunitionBase
	{
		//submunitionConeType[] = {"poissondisc",3};
		//submunitionConeType[] = {"custom", {{1, 0.866}, {-1, 0.866}, {0, -0.866}} };
		submunitionConeType[] = {"custom", {{2.5, 0}, {-2.5, 0}} };
		ace_frag_enabled = 0;
	};
	
	class SmokeShell;
	class SmokeShellArty: SmokeShell
	{
		deflecting = 10;
		thrust = 10;
		timeToLive = 140;
		effectsSmoke = "SmokeShellWhiteEffect_T1AM_";
		ace_frag_enabled = 0;
	};
	
	class ammo_Missile_CruiseBase;
	class ammo_Missile_Cruise_01: ammo_Missile_CruiseBase
	{
		lockSeekRadius = 1500;
		missileKeepLockedCone = 110;
		missileLockCone = 110;
		missileLockMaxSpeed = 150;
		missileLockMinDistance = 0.1;
		
		ace_frag_classes[] = {"ace_frag_huge2_T1AM_Copy"};
		ace_frag_metal = 45000;
		ace_frag_charge = 6000;
		ace_frag_gurney_c = 3000;
		ace_frag_gurney_k = "1/2";
		
		class Cruise
		{
			lockDistanceToTarget = 800;
			preferredFlightAltitude = 100;
		};
		
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class DataLinkSensorComponent
					{
						aimDown = 0;
						allowsMarking = 0;
						angleRangeHorizontal = 360;
						angleRangeVertical = 360;
						animDirection = "";
						color[] = {1,1,1,0};
						componentType = "DataLinkSensorComponent";
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						maxSpeedThreshold = 0;
						maxTrackableATL = 1e+010;
						maxTrackableSpeed = 1;
						minSpeedThreshold = 0;
						minTrackableATL = -1e+010;
						minTrackableSpeed = -1e+010;
						typeRecognitionDistance = 0;
						
						class AirTarget
						{
							maxRange = 32000;
							minRange = 32000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						
						class GroundTarget
						{
							maxRange = 32000;
							minRange = 32000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
					
					class SensorTemplateLaser
					{
						aimDown = 30;
						allowsMarking = 0;
						angleRangeHorizontal = 110;
						angleRangeVertical = 110;
						animDirection = "";
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
							maxRange = 1500;
							minRange = 1500;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						
						class GroundTarget
						{
							maxRange = 1500;
							minRange = 1500;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
				};
			};
		};
	};
	class ammo_Missile_Cruise_01_Cluster: ammo_Missile_Cruise_01
	{
		lockSeekRadius = 1000;
		missileKeepLockedCone = 110;
		missileLockCone = 110;
		missileLockMaxSpeed = 150;
		missileLockMinDistance = 0.1;
		
		class Cruise
		{
			lockDistanceToTarget = 800;
			preferredFlightAltitude = 100;
		};
		
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class DataLinkSensorComponent
					{
						aimDown = 0;
						allowsMarking = 0;
						angleRangeHorizontal = 360;
						angleRangeVertical = 360;
						animDirection = "";
						color[] = {1,1,1,0};
						componentType = "DataLinkSensorComponent";
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						maxSpeedThreshold = 0;
						maxTrackableATL = 1e+010;
						maxTrackableSpeed = 1;
						minSpeedThreshold = 0;
						minTrackableATL = -1e+010;
						minTrackableSpeed = -1e+010;
						typeRecognitionDistance = 0;
						
						class AirTarget
						{
							maxRange = 32000;
							minRange = 32000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						
						class GroundTarget
						{
							maxRange = 32000;
							minRange = 32000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
					
					class SensorTemplateLaser
					{
						aimDown = 30;
						allowsMarking = 0;
						angleRangeHorizontal = 110;
						angleRangeVertical = 110;
						animDirection = "";
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
							maxRange = 1500;
							minRange = 1500;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						
						class GroundTarget
						{
							maxRange = 1500;
							minRange = 1500;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
				};
			};
		};
	};
};



class SmokeShellWhiteEffect_T1AM_
{
	class SmokeShell
	{
		intensity = 1;
		interval = 1;
		position[] = {0,0,0};
		simulation = "particles";
		type = "SmokeShellWhite_T1AM_";
	};
};



class CfgCloudlets
{
	class SmokeShellWhite_T1AM_
	{
		angle = 0;
		angleVar = 360;
		animationName = "";
		animationSpeed[] = {0.2};
		animationSpeedCoef = 1;
		beforeDestroyScript = "";
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		color[] = {{0.5, 0.475, 0.46, 1},{0.5, 0.475, 0.46, 1}, {0.5, 0.475, 0.46, 1}, {0.5, 0.475, 0.46, 1}, {0.5, 0.475, 0.46, 0.9}, {0.5, 0.475, 0.46, 0.01}};
		colorCoef[] = {0.5,0.5,0.5,1};
		colorVar[] = {0.03, 0.03, 0.03, 0.05};
		destroyOnWaterSurface = 1;
		destroyOnWaterSurfaceOffset = -0.3;
		interval = 0.04;
		lifeTime = 30;
		lifeTimeVar = 1;
		moveVelocity[] = {0.35,0.30,0.35};
		MoveVelocityVar[] = {0.05, 0.15, 0.05};
		MoveVelocityVarConst[] = {0,0,0};
		onTimerScript = "";
		particleFSFrameCount = 48;
		particleFSIndex = 7;
		particleFSLoop = 1;
		particleFSNtieth = 16;
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleType = "Billboard";
		position[] = {0,0,0};
		positionVar[] = {0.05, 0.05, 0.05};
		positionVarConst[] = {0,0,0};
		randomDirectionIntensity = 0.04;
		randomDirectionIntensityVar = 0;
		randomDirectionPeriod = 1;
		randomDirectionPeriodVar = 0;
		rotationVelocity = 0;
		rotationVelocityVar = 20;
		rubbing = 0.030;
		size[] = {0.1,3,3.5,4};
		sizeCoef = 1;
		sizeVar = 0.5;
		timerPeriod = 1;
		volume = 1;
		weight = 1.277;
	};
};



class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

class cfgWeapons
{
	class Default;
	class MGunCore;
	class CannonCore;
	class LauncherCore;
	class RocketPods: LauncherCore{};

	class mortar_82mm: CannonCore
	{
		modes[] = {"Single1","Single2","Single3","Single4","Burst1","Burst2","Burst3","Burst4"};
		
		class Single1: Mode_SemiAuto
		{
			artilleryDispersion = 0.25;
		};
		class Burst1: Mode_Burst
		{
			artilleryDispersion = 0.25;
		};
		
		class Single3;
		class Single4: Single3
		{
			artilleryDispersion = 0.25;
			artilleryCharge = 1.45;
			displayName = "Semi (very far)";
		};
		
		class Burst3;
		class Burst4: Burst3
		{
			artilleryDispersion = 0.25;
			artilleryCharge = 1.45;
			maxRange = 6500;
			maxRangeProbab = 0.3;
			midRange = 4500;
			midRangeProbab = 0.4;
			minRange = 2500;
			minRangeProbab = 0.3;
			displayName = "Burst (very far)";
		};
	};
	
	
	class mortar_155mm_AMOS: CannonCore
	{
		class Single1: Mode_SemiAuto
		{
			artilleryDispersion = 0.15;
		};

		class Burst1: Mode_Burst
		{
			artilleryDispersion = 0.15;
		};
	};

	class rockets_230mm_GAT: RocketPods
	{
		class Close: RocketPods
		{
			artilleryDispersion = 0.15;
		};
		class Medium: Close
		{
			artilleryDispersion = 0.15;
		};
		class Far: Close
		{
			artilleryDispersion = 0.15;
		};
		class Full: Close
		{
			artilleryDispersion = 0.15;
		};
	};
	
	class weapon_VLSBase;
	class weapon_VLS_01: weapon_VLSBase
	{
		magazineReloadTime = 60;
	};
};