class CfgPatches
{
	class T1AM
	{
		units[] = {"I_MBT_01_arty_F","I_MBT_01_mlrs_F"};
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
		class Firemission
		{
			class Splash {file = "T1AM\Functions\Firemission\Splash.sqf"};
			class StartFireMission {file = "T1AM\Functions\Firemission\StartFireMission.sqf"};
			class ProcessFireMission_Server {file = "T1AM\Functions\Firemission\ProcessFireMission_Server.sqf"};
			class ProcessFireMission {file = "T1AM\Functions\Firemission\ProcessFireMission.sqf"};
			class LoadMagazine {file = "T1AM\Functions\Firemission\LoadMagazine.sqf"};
			class FindBestCharge {file = "T1AM\Functions\Firemission\FindBestCharge.sqf"};
			class FindCharge {file = "T1AM\Functions\Firemission\FindCharge.sqf"};
			class RemoveDigits {file = "T1AM\Functions\Firemission\RemoveDigits.sqf"};
			class GetAllCharges {file = "T1AM\Functions\Firemission\GetAllCharges.sqf"};
			class GetPrepTime {file = "T1AM\Functions\Firemission\GetPrepTime.sqf"};
			class FailedToFireCheck {file = "T1AM\Functions\Firemission\FailedToFireCheck.sqf"};
			class UpdateGuiTargetPos {file = "T1AM\Functions\Firemission\UpdateGuiTargetPos.sqf"};
		};
		class Dialog
		{
			class DisplayWarheads {file = "T1AM\Functions\Dialog\DisplayWarheads.sqf"};
			class ChangeTube {file = "T1AM\Functions\Dialog\ChangeTube.sqf"};
			class Transmit {file = "T1AM\Functions\Dialog\Transmit.sqf"};
			class CheckForDC {file = "T1AM\Functions\Dialog\CheckForDC.sqf"};
			class CheckFire_Server {file = "T1AM\Functions\Dialog\CheckFire_Server.sqf"};
			class CheckFire_Player {file = "T1AM\Functions\Dialog\CheckFire_Player.sqf"};
			class Aimpoint {file = "T1AM\Functions\Dialog\Aimpoint.sqf"};
			class ShowMessage {file = "T1AM\Functions\Dialog\ShowMessage.sqf"};
			class InputAimpoint {file = "T1AM\Functions\Dialog\InputAimpoint.sqf"};
			class InputAimpointMapClickEffect {file = "T1AM\Functions\Dialog\InputAimpointMapClickEffect.sqf"};
			class Adjust {file = "T1AM\Functions\Dialog\Adjust.sqf"};
			class ControlAsset {file = "T1AM\Functions\Dialog\ControlAsset.sqf"};
			class Assets {file = "T1AM\Functions\Dialog\Assets.sqf"};
			class EndMission {file = "T1AM\Functions\Dialog\EndMission.sqf"};
			class ReleaseAsset {file = "T1AM\Functions\Dialog\ReleaseAsset.sqf"};
			class OpenDisplay {file = "T1AM\Functions\Dialog\OpenDisplay.sqf"};
			class Control {file = "T1AM\Functions\Dialog\Control.sqf"};
			class LoadingScreen {file = "T1AM\Functions\Dialog\LoadingScreen.sqf"};
			class CloseDisplays {file = "T1AM\Functions\Dialog\CloseDisplays.sqf"};
			class ResetVars {file = "T1AM\Functions\Dialog\ResetVars.sqf"};
		};
		class ControlEvents
		{
			class ListSheafEvent {file = "T1AM\Functions\Dialog\ControlEvents\ListSheafEvent.sqf"};
			class ListWarheadTypeEvent {file = "T1AM\Functions\Dialog\ControlEvents\ListWarheadTypeEvent.sqf"};
			class ListFuseEvent {file = "T1AM\Functions\Dialog\ControlEvents\ListFuseEvent.sqf"};
			class ListAngleEvent {file = "T1AM\Functions\Dialog\ControlEvents\ListAngleEvent.sqf"};
			class EditAdjustGPSEvent {file = "T1AM\Functions\Dialog\ControlEvents\EditAdjustGPSEvent.sqf"};
			class EditNumberEvent {file = "T1AM\Functions\Dialog\ControlEvents\EditNumberEvent.sqf"};
			class ListMissionsEvent {file = "T1AM\Functions\Dialog\ControlEvents\ListMissionsEvent.sqf"};
			class EditAdjustCheckboxEvent {file = "T1AM\Functions\Dialog\ControlEvents\EditAdjustCheckboxEvent.sqf"};
			class EditAdjustSpotterPosEvent {file = "T1AM\Functions\Dialog\ControlEvents\EditAdjustSpotterPosEvent.sqf"};
			class ButtonAdjustSpotterMapclickEvent {file = "T1AM\Functions\Dialog\ControlEvents\ButtonAdjustSpotterMapclickEvent.sqf"};
			class EditAdjustImpactPosEvent {file = "T1AM\Functions\Dialog\ControlEvents\EditAdjustImpactPosEvent.sqf"};
			class ButtonAdjustImpactMapclickEvent {file = "T1AM\Functions\Dialog\ControlEvents\ButtonAdjustImpactMapclickEvent.sqf"};
			class ButtonInputAimpointMapclickEvent {file = "T1AM\Functions\Dialog\ControlEvents\ButtonInputAimpointMapclickEvent.sqf"};
			class ListMissionTypeEvent {file = "T1AM\Functions\Dialog\ControlEvents\ListMissionTypeEvent.sqf"};
			class EditAdjustImpactRefPosEvent {file = "T1AM\Functions\Dialog\ControlEvents\EditAdjustImpactRefPosEvent.sqf"};
			class ButtonAdjustImpactRefMapclickEvent {file = "T1AM\Functions\Dialog\ControlEvents\ButtonAdjustImpactRefMapclickEvent.sqf"};
			class EditAimpointGridEvent {file = "T1AM\Functions\Dialog\ControlEvents\EditAimpointGridEvent.sqf"};
			class ButtonStartEvent {file = "T1AM\Functions\Dialog\ControlEvents\ButtonStartEvent.sqf"};
			class EditTRPPosEvent {file = "T1AM\Functions\Dialog\ControlEvents\EditTRPPosEvent.sqf"};
			class ButtonTRPMapclickEvent {file = "T1AM\Functions\Dialog\ControlEvents\ButtonTRPMapclickEvent.sqf"};
			class EditRemarksEvent {file = "T1AM\Functions\Dialog\ControlEvents\EditRemarksEvent.sqf"};
			class EditAimpointCheckboxEvent {file = "T1AM\Functions\Dialog\ControlEvents\EditAimpointCheckboxEvent.sqf"};
			class ButtonInputAimpointSpotterMapclickEvent {file = "T1AM\Functions\Dialog\ControlEvents\ButtonInputAimpointSpotterMapclickEvent.sqf"};
			class EditAimpointSpotterEvent {file = "T1AM\Functions\Dialog\ControlEvents\EditAimpointSpotterEvent.sqf"};
			class EditAimpointPolarDirEvent {file = "T1AM\Functions\Dialog\ControlEvents\EditAimpointPolarDirEvent.sqf"};
			class EditSheafDirEvent {file = "T1AM\Functions\Dialog\ControlEvents\EditSheafDirEvent.sqf"};
			class ButtonAdjustGPSMapclickEvent {file = "T1AM\Functions\Dialog\ControlEvents\ButtonAdjustGPSMapclickEvent.sqf"};
		};
		class Misc
		{
			class CheckAssetStatus {file = "T1AM\Functions\Misc\CheckAssetStatus.sqf"};
			class SendComms {file = "T1AM\Functions\Misc\SendComms.sqf"};
			class PlayComms {file = "T1AM\Functions\Misc\PlayComms.sqf"};
			class PosToMapGrid {file = "T1AM\Functions\Misc\PosToMapGrid.sqf"};
			class MapGridToPos {file = "T1AM\Functions\Misc\MapGridToPos.sqf"};
			class GetMapGridData {file = "T1AM\Functions\Misc\GetMapGridData.sqf"};
			class ApproveVehicles {file = "T1AM\Functions\Misc\ApproveVehicles.sqf"};
			class ParseNumber {file = "T1AM\Functions\Misc\ParseNumber.sqf"};
			class PlaceMarker {file = "T1AM\Functions\Misc\PlaceMarker.sqf"};
			class ExcludeVehicleClass {file = "T1AM\Functions\Misc\ExcludeVehicleClass.sqf"};
			class ExcludeVehicle {file = "T1AM\Functions\Misc\ExcludeVehicle.sqf"};
			class ExcludeGroup {file = "T1AM\Functions\Misc\ExcludeGroup.sqf"};
			class AssetType {file = "T1AM\Functions\Misc\AssetType.sqf"};
			class FormatCoordinates {file = "T1AM\Functions\Misc\FormatCoordinates.sqf"};
			class TubeType {file = "T1AM\Functions\Misc\TubeType.sqf"};
			class AmmoType {file = "T1AM\Functions\Misc\AmmoType.sqf"};
			class TrimGroupName {file = "T1AM\Functions\Misc\TrimGroupName.sqf"};
			class VehicleName {file = "T1AM\Functions\Misc\VehicleName.sqf"};
			class GroupVehicles {file = "T1AM\Functions\Misc\GroupVehicles.sqf"};
			class ArtilleryGroupsBySide {file = "T1AM\Functions\Misc\ArtilleryGroupsBySide.sqf"};
			class HasRadio {file = "T1AM\Functions\Misc\HasRadio.sqf"};
			class GridToPos {file = "T1AM\Functions\Misc\GridToPos.sqf"};
			class GetRandomSpread {file = "T1AM\Functions\Misc\GetRandomSpread.sqf"};
			class ChangeLocality {file = "T1AM\Functions\Misc\ChangeLocality.sqf"};
			class PlaySoundGUI {file = "T1AM\Functions\Misc\PlaySoundGUI.sqf"};
		};
		class Sheafs
		{
			class LineSheaf {file = "T1AM\Functions\Sheafs\LineSheaf.sqf"};
			class BoxSheaf {file = "T1AM\Functions\Sheafs\BoxSheaf.sqf"};
			class CircularSheaf {file = "T1AM\Functions\Sheafs\CircularSheaf.sqf"};
		};
		class Profiles
		{
			class ProfileRocketsHA {file = "T1AM\Functions\Profiles\ProfileRocketsHA.sqf"};
			class ProfileRocketsLA {file = "T1AM\Functions\Profiles\ProfileRocketsLA.sqf"};
			class ProfileCannonHA {file = "T1AM\Functions\Profiles\ProfileCannonHA.sqf"};
			class ProfileCannonLA {file = "T1AM\Functions\Profiles\ProfileCannonLA.sqf"};
			class ProfileMortar {file = "T1AM\Functions\Profiles\ProfileMortar.sqf"};
			class ProfileMK41 {file = "T1AM\Functions\Profiles\ProfileMK41.sqf"};
			class ProfileRHSBM21 {file = "T1AM\Functions\Profiles\ProfileRHSBM21.sqf"};
			class Profile2035RAFBM21LA {file = "T1AM\Functions\Profiles\Profile2035RAFBM21LA.sqf"};
			class Profile2035RAFBM21HA {file = "T1AM\Functions\Profiles\Profile2035RAFBM21HA.sqf"};
		};
		class Debug
		{
			class DebugStart {file = "T1AM\Functions\Debug\DebugStart.sqf"};
			class ProjectileTrack {file = "T1AM\Functions\Debug\ProjectileTrack.sqf"};
			class ProjectileTrail {file = "T1AM\Functions\Debug\ProjectileTrail.sqf"};
		};
		class Airburst
		{
			class AirburstInit {file = "T1AM\Functions\Airburst\AirburstInit.sqf"};
			class AirburstFrag {file = "T1AM\Functions\Airburst\AirburstFrag.sqf"};
		};
		class Special
		{
			class SpecialFired {file = "T1AM\Functions\Special\SpecialFired.sqf"};
			class Guided {file = "T1AM\Functions\Special\Guided.sqf"};
			class GuideProjectile {file = "T1AM\Functions\Special\GuideProjectile.sqf"};
			class MK41Frag {file = "T1AM\Functions\Special\MK41Frag.sqf"};
		};
	};
	
	class RHS
	{
		class Functions
		{
			class fired_m119 {file = "T1AM\Functions\RHS\Empty.sqf"};
			class fired_D30 {file = "T1AM\Functions\RHS\Empty.sqf"};
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
	class T1AM_Sounds_Button1
	{
		name = "T1AM_Sounds_Button1";
		sound[] ={"\T1AM\Data\Sounds\GUI\Button1.ogg",db-10,1.0};
		titles[] = {};
	};
	
	class T1AM_Sounds_Button2
	{
		name = "T1AM_Sounds_Button2";
		sound[] ={"\T1AM\Data\Sounds\GUI\Button2.ogg",db-10,1.0};
		titles[] = {};
	};
	
	class T1AM_Sounds_Button3
	{
		name = "T1AM_Sounds_Button3";
		sound[] ={"\T1AM\Data\Sounds\GUI\Button3.ogg",db-10,1.0};
		titles[] = {};
	};
	
	class T1AM_Sounds_Click1
	{
		name = "T1AM_Sounds_Click1";
		sound[] ={"\T1AM\Data\Sounds\GUI\Click1.ogg",db-5,1.0};
		titles[] = {};
	};
	
	class T1AM_Sounds_Click2
	{
		name = "T1AM_Sounds_Click2";
		sound[] ={"\T1AM\Data\Sounds\GUI\Click2.ogg",db-5,1.0};
		titles[] = {};
	};
	
	class T1AM_Sounds_Type1
	{
		name = "T1AM_Sounds_Type1";
		sound[] ={"\T1AM\Data\Sounds\GUI\Type1.ogg",db-2,1.0};
		titles[] = {};
	};
	
	class T1AM_Sounds_Type2
	{
		name = "T1AM_Sounds_Type2";
		sound[] ={"\T1AM\Data\Sounds\GUI\Type2.ogg",db-2,1.0};
		titles[] = {};
	};
	
	class T1AM_Sounds_Error1
	{
		name = "T1AM_Sounds_Error1";
		sound[] ={"\T1AM\Data\Sounds\GUI\Error1.ogg",db-5,1.0};
		titles[] = {};
	};
	
	class T1AM_Sounds_Load1
	{
		name = "T1AM_Sounds_Load1";
		sound[] ={"\T1AM\Data\Sounds\GUI\Load1.ogg",db-13,1.0};
		titles[] = {};
	};
	
	class T1AM_Sounds_Load2
	{
		name = "T1AM_Sounds_Load2";
		sound[] ={"\T1AM\Data\Sounds\GUI\Load2.ogg",db-13,1.0};
		titles[] = {};
	};
	
	class T1AM_Sounds_Load3
	{
		name = "T1AM_Sounds_Load3";
		sound[] ={"\T1AM\Data\Sounds\GUI\Load3.ogg",db-5,1.0};
		titles[] = {};
	};
	
	class T1AM_Sounds_Beep
	{
		name = "T1AM_Sounds_Beep";
		sound[] ={"\T1AM\Data\Sounds\Radio\Beep.ogg",db+17,1.0};
		titles[] = {};
	};
	
	class T1AM_Sounds_CheckingFire
	{
		name = "T1AM_Sounds_CheckingFire";
		sound[] ={"\T1AM\Data\Sounds\Radio\CheckingFire.ogg",db+17,1.0};
		titles[] = {};
	};
	
	class T1AM_Sounds_Designate
	{
		name = "T1AM_Sounds_Designate";
		sound[] ={"\T1AM\Data\Sounds\Radio\Designate.ogg",db+17,1.0};
		titles[] = {};
	};
	
	class T1AM_Sounds_EndOfMission
	{
		name = "T1AM_Sounds_EndOfMission";
		sound[] ={"\T1AM\Data\Sounds\Radio\EndOfMission.ogg",db+17,1.0};
		titles[] = {};
	};
	
	class T1AM_Sounds_FireMissionRegistered
	{
		name = "T1AM_Sounds_FireMissionRegistered";
		sound[] ={"\T1AM\Data\Sounds\Radio\FireMissionRegistered.ogg",db+17,1.0};
		titles[] = {};
	};
	
	class T1AM_Sounds_HoldingFireImpossibleFiringSolution
	{
		name = "T1AM_Sounds_HoldingFireImpossibleFiringSolution";
		sound[] ={"\T1AM\Data\Sounds\Radio\HoldingFireImpossibleFiringSolution.ogg",db+17,1.0};
		titles[] = {};
	};
	
	class T1AM_Sounds_Mto10dGPSAdjustFire
	{
		name = "T1AM_Sounds_Mto10dGPSAdjustFire";
		sound[] ={"\T1AM\Data\Sounds\Radio\Mto10dGPSAdjustFire.ogg",db+17,1.0};
		titles[] = {};
	};
	
	class T1AM_Sounds_Mto10dGPSFFE
	{
		name = "T1AM_Sounds_Mto10dGPSFFE";
		sound[] ={"\T1AM\Data\Sounds\Radio\Mto10dGPSFFE.ogg",db+17,1.0};
		titles[] = {};
	};
	
	class T1AM_Sounds_Mto10dImpactAdjustFire
	{
		name = "T1AM_Sounds_Mto10dImpactAdjustFire";
		sound[] ={"\T1AM\Data\Sounds\Radio\Mto10dImpactAdjustFire.ogg",db+17,1.0};
		titles[] = {};
	};
	
	class T1AM_Sounds_Mto10dImpactCorrectFFE
	{
		name = "T1AM_Sounds_Mto10dImpactCorrectFFE";
		sound[] ={"\T1AM\Data\Sounds\Radio\Mto10dImpactCorrectFFE.ogg",db+17,1.0};
		titles[] = {};
	};
	
	class T1AM_Sounds_MtoAdjustFire
	{
		name = "T1AM_Sounds_MtoAdjustFire";
		sound[] ={"\T1AM\Data\Sounds\Radio\MtoAdjustFire.ogg",db+17,1.0};
		titles[] = {};
	};
	
	class T1AM_Sounds_MtoFFE
	{
		name = "T1AM_Sounds_MtoFFE";
		sound[] ={"\T1AM\Data\Sounds\Radio\MtoFFE.ogg",db+17,1.0};
		titles[] = {};
	};
	
	class T1AM_Sounds_MtoPolarAdjustFire
	{
		name = "T1AM_Sounds_MtoPolarAdjustFire";
		sound[] ={"\T1AM\Data\Sounds\Radio\MtoPolarAdjustFire.ogg",db+17,1.0};
		titles[] = {};
	};
	
	class T1AM_Sounds_MtoPolarCorrectFFE
	{
		name = "T1AM_Sounds_MtoPolarCorrectFFE";
		sound[] ={"\T1AM\Data\Sounds\Radio\MtoPolarCorrectFFE.ogg",db+17,1.0};
		titles[] = {};
	};
	
	class T1AM_Sounds_ObserverNotResponding
	{
		name = "T1AM_Sounds_ObserverNotResponding";
		sound[] ={"\T1AM\Data\Sounds\Radio\ObserverNotResponding.ogg",db+17,1.0};
		titles[] = {};
	};
	
	class T1AM_Sounds_OutOfAmmoRoundsComplete
	{
		name = "T1AM_Sounds_OutOfAmmoRoundsComplete";
		sound[] ={"\T1AM\Data\Sounds\Radio\OutOfAmmoRoundsComplete.ogg",db+17,1.0};
		titles[] = {};
	};
	
	class T1AM_Sounds_OutOfRange
	{
		name = "T1AM_Sounds_OutOfRange";
		sound[] ={"\T1AM\Data\Sounds\Radio\OutOfRange.ogg",db+17,1.0};
		titles[] = {};
	};
	
	class T1AM_Sounds_PreparingTakeAWhile
	{
		name = "T1AM_Sounds_PreparingTakeAWhile";
		sound[] ={"\T1AM\Data\Sounds\Radio\PreparingTakeAWhile.ogg",db+17,1.0};
		titles[] = {};
	};
	
	class T1AM_Sounds_RequestedAmmoNotAvailable
	{
		name = "T1AM_Sounds_RequestedAmmoNotAvailable";
		sound[] ={"\T1AM\Data\Sounds\Radio\RequestedAmmoNotAvailable.ogg",db+17,1.0};
		titles[] = {};
	};
	
	class T1AM_Sounds_RequestedAmmoNotAvailable2
	{
		name = "T1AM_Sounds_RequestedAmmoNotAvailable2";
		sound[] ={"\T1AM\Data\Sounds\Radio\RequestedAmmoNotAvailable2.ogg",db+17,1.0};
		titles[] = {};
	};
	
	class T1AM_Sounds_RoundsComplete
	{
		name = "T1AM_Sounds_RoundsComplete";
		sound[] ={"\T1AM\Data\Sounds\Radio\RoundsComplete.ogg",db+17,1.0};
		titles[] = {};
	};
	
	class T1AM_Sounds_Shot
	{
		name = "T1AM_Sounds_Shot";
		sound[] ={"\T1AM\Data\Sounds\Radio\Shot.ogg",db+17,1.0};
		titles[] = {};
	};
	
	class T1AM_Sounds_ShotDesignate
	{
		name = "T1AM_Sounds_ShotDesignate";
		sound[] ={"\T1AM\Data\Sounds\Radio\ShotDesignate.ogg",db+18,1.0};
		titles[] = {};
	};
	
	class T1AM_Sounds_Splash
	{
		name = "T1AM_Sounds_Splash";
		sound[] ={"\T1AM\Data\Sounds\Radio\Splash.ogg",db+17,1.0};
		titles[] = {};
	};
	
	class T1AM_Sounds_UnderMinimumRange
	{
		name = "T1AM_Sounds_UnderMinimumRange";
		sound[] ={"\T1AM\Data\Sounds\Radio\UnderMinimumRange.ogg",db+17,1.0};
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
	
	class 14Rnd_80mm_rockets;
	class 12Rnd_230mm_rockets: 14Rnd_80mm_rockets
	{
		muzzleImpulseFactor[]={0.02,0.02};
	};
	
	class 12Rnd_230mm_rockets_cluster: 12Rnd_230mm_rockets
	{
		muzzleImpulseFactor[]={0.02,0.02};
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
		indirectHit = 5;
		indirectHitRange = 0.25;
	};
	
	class ACE_frag_T1AM_HE_AIRBURST_3: ace_frag_base_T1AM_Copy
	{
		hit = 40;
		airFriction = "(-0.01)*0.25";
		caliber = 3.0;
		indirectHit = 6;
		indirectHitRange = 0.5;
	};
	
	
	class B_127x99_Ball;
	class ACE_frag_T1AM_HE_AIRBURST_S1: B_127x99_Ball
	{
		timeToLive = 12;
		typicalSpeed = 1500;
		deflecting = 65;
		
		airFriction = -0.0003;
		caliber = 6.0;
		hit = 50;
	};
	class ACE_frag_T1AM_HE_AIRBURST_S2: B_127x99_Ball
	{
		timeToLive = 12;
		typicalSpeed = 1500;
		deflecting = 65;
		
		airFriction = -0.0006;
		caliber = 3.0;
		hit = 30;
	};
	
	
	class SubmunitionBase;
	class Sh_82mm_AMOS_guided: SubmunitionBase
	{
		hit = 450;
		indirectHit = 55;
		indirectHitRange = 8;
		
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
		indirectHit = 55;
		indirectHitRange = 8;
		
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
		indirectHit = 55;
		indirectHitRange = 8;
		
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
		indirectHit = 55;
		indirectHitRange = 8;
		
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
		indirectHit = 150;
		indirectHitRange = 18;
		
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
		indirectHit = 65;
		indirectHitRange = 10;
		
		ace_frag_charge = 320;
		ace_frag_classes[] = {"ace_frag_medium_HD_T1AM_Copy","ace_frag_medium_T1AM_Copy","ace_frag_medium_T1AM_Copy","ace_frag_medium_T1AM_Copy","ace_frag_medium_T1AM_Copy","ace_frag_large_HD_T1AM_Copy","ace_frag_large_T1AM_Copy","ace_frag_large_T1AM_Copy","ace_frag_large_T1AM_Copy","ace_frag_huge_T1AM_Copy"};
		ace_frag_enabled = 1;
		ace_frag_gurney_c = 2440;
		ace_frag_gurney_k = "1/2";
		ace_frag_metal = 3200;
	};
	
	class ammo_Penetrator_Base;
	class ammo_Penetrator_T1AM_155mm_HEAT: ammo_Penetrator_Base
	{
		caliber = 65;
		hit = 850;
		warheadName = "HEAT";
	};
	class Sh_155mm_AMOS_guided: Sh_82mm_AMOS_guided
	{
		hit = 500;
		indirectHit = 75;
		indirectHitRange = 10;
		
		ace_frag_charge = 420;
		ace_frag_classes[] = {"ace_frag_large_HD_T1AM_Copy","ace_frag_large_HD_T1AM_Copy","ace_frag_large_HD_T1AM_Copy","ace_frag_large_HD_T1AM_Copy","ace_frag_large_T1AM_Copy","ace_frag_large_T1AM_Copy","ace_frag_large_T1AM_Copy","ace_frag_large_T1AM_Copy","ace_frag_large_T1AM_Copy","ace_frag_large_T1AM_Copy"};
		ace_frag_enabled = 1;
		ace_frag_gurney_c = 2440;
		ace_frag_gurney_k = "1/2";
		ace_frag_metal = 3200;
		ace_frag_skip = 1;
		
		submunitionAmmo = "ammo_Penetrator_T1AM_155mm_HEAT";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-0.2};
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		warheadName = "HEAT";
	};
	
	class Sh_155mm_AMOS_LG: Sh_82mm_AMOS_LG
	{
		hit = 1300;
		indirectHit = 100;
		indirectHitRange = 15;
		
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
		hit = 1300;
		indirectHit = 100;
		indirectHitRange = 15;
		
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
		hit = 1300;
		indirectHit = 100;
		indirectHitRange = 15;
		
		ace_frag_charge = 420;
		ace_frag_classes[] = {"ace_frag_large_HD_T1AM_Copy","ace_frag_large_HD_T1AM_Copy","ace_frag_large_HD_T1AM_Copy","ace_frag_large_HD_T1AM_Copy","ace_frag_large_T1AM_Copy","ace_frag_large_T1AM_Copy","ace_frag_large_T1AM_Copy","ace_frag_large_T1AM_Copy","ace_frag_large_T1AM_Copy","ace_frag_large_T1AM_Copy"};
		ace_frag_enabled = 1;
		ace_frag_gurney_c = 2440;
		ace_frag_gurney_k = "1/2";
		ace_frag_metal = 3200;
	};
	
	class R_230mm_fly: ShellBase
	{
		hit = 2000;
		indirectHit = 400;
		indirectHitRange = 25;
		
		ace_frag_charge = 420;
		ace_frag_classes[] = {"ace_frag_large_HD_T1AM_Copy","ace_frag_large_T1AM_Copy","ace_frag_huge_HD_T1AM_Copy","ace_frag_huge_T1AM_Copy","ace_frag_huge_T1AM_Copy","ace_frag_huge_T1AM_Copy","ace_frag_huge_T1AM_Copy","ace_frag_huge_T1AM_Copy","ace_frag_huge_T1AM_Copy","ace_frag_huge_T1AM_Copy"};
		ace_frag_enabled = 1;
		ace_frag_gurney_c = 2440;
		ace_frag_gurney_k = "1/2";
		ace_frag_metal = 3200;
	};
	
	class R_230mm_HE: SubmunitionBase
	{
		hit = 2000;
		indirectHit = 400;
		indirectHitRange = 25;
		ace_frag_enabled = 0;
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
		
		hit = 6000;
		indirectHit = 700;
		indirectHitRange = 35;
		
		class Cruise
		{
			lockDistanceToTarget = 400;
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
		
		submunitionConeAngle = 19;
		submunitionConeType[] = {"poissondisc",55};
		
		hit = 6000;
		indirectHit = 450;
		indirectHitRange = 30;
		
		class Cruise
		{
			lockDistanceToTarget = 400;
			preferredFlightAltitude = 175;
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
	
	class Mo_cluster_AP: ShellBase
	{
		hit = 200;
		indirectHit = 350;
		indirectHitRange = 10;
	};
	
	
	
	class T1AM_Airburst_MortarL: Sh_82mm_AMOS
	{
		hit = 275;
		indirectHit = 65;
		indirectHitRange = 12;
		explosive = 1;
		
		ace_frag_enabled = 1;
		ace_frag_classes[] = {"ACE_frag_T1AM_HE_AIRBURST_1","ACE_frag_T1AM_HE_AIRBURST_1","ACE_frag_T1AM_HE_AIRBURST_1","ACE_frag_T1AM_HE_AIRBURST_2","ACE_frag_T1AM_HE_AIRBURST_2","ACE_frag_T1AM_HE_AIRBURST_2","ACE_frag_T1AM_HE_AIRBURST_3"};
		ace_frag_metal = 36000;
		ace_frag_charge = 9979;
		ace_frag_gurney_c = 2440;
		ace_frag_gurney_k = "1/2";
		
		CraterEffects = "T1AM_Airburst_Crater";
		craterShape = "\A3\weapons_f\empty.p3d";
		explosionEffects = "T1AM_Airburst_Effect_Mortar";
		
		typicalSpeed = 100;
		cost = 300;
		model = "\A3\Weapons_f\empty";
		airFriction = 0;
		timeToLive = 1;
		explosionTime = 0.001;
	};
	class T1AM_Airburst_MortarM: Sh_82mm_AMOS
	{
		hit = 325;
		indirectHit = 80;
		indirectHitRange = 14;
		explosive = 1;
		
		ace_frag_enabled = 1;
		ace_frag_classes[] = {"ACE_frag_T1AM_HE_AIRBURST_1","ACE_frag_T1AM_HE_AIRBURST_1","ACE_frag_T1AM_HE_AIRBURST_2","ACE_frag_T1AM_HE_AIRBURST_2","ACE_frag_T1AM_HE_AIRBURST_2","ACE_frag_T1AM_HE_AIRBURST_2","ACE_frag_T1AM_HE_AIRBURST_3"};
		ace_frag_metal = 36000;
		ace_frag_charge = 9979;
		ace_frag_gurney_c = 2440;
		ace_frag_gurney_k = "1/2";
		
		CraterEffects = "T1AM_Airburst_Crater";
		craterShape = "\A3\weapons_f\empty.p3d";
		explosionEffects = "T1AM_Airburst_Effect_Mortar";
		
		typicalSpeed = 100;
		cost = 300;
		model = "\A3\Weapons_f\empty";
		airFriction = 0;
		timeToLive = 1;
		explosionTime = 0.001;
	};
	
	
	class T1AM_Airburst_CannonL: Sh_155mm_AMOS
	{
		hit = 350;
		indirectHit = 120;
		indirectHitRange = 17;
		explosive = 1;
		
		ace_frag_enabled = 1;
		ace_frag_classes[] = {"ACE_frag_T1AM_HE_AIRBURST_1","ACE_frag_T1AM_HE_AIRBURST_2","ACE_frag_T1AM_HE_AIRBURST_2","ACE_frag_T1AM_HE_AIRBURST_2","ACE_frag_T1AM_HE_AIRBURST_2","ACE_frag_T1AM_HE_AIRBURST_3","ACE_frag_T1AM_HE_AIRBURST_3"};
		ace_frag_metal = 36000;
		ace_frag_charge = 9979;
		ace_frag_gurney_c = 2440;
		ace_frag_gurney_k = "1/2";
		
		CraterEffects = "T1AM_Airburst_Crater";
		craterShape = "\A3\weapons_f\empty.p3d";
		explosionEffects = "T1AM_Airburst_Effect_Cannon";
		
		typicalSpeed = 100;
		cost = 300;
		model = "\A3\Weapons_f\empty";
		airFriction = 0;
		timeToLive = 1;
		explosionTime = 0.001;
	};
	class T1AM_Airburst_CannonM: Sh_155mm_AMOS
	{
		hit = 375;
		indirectHit = 150;
		indirectHitRange = 20;
		explosive = 1;
		
		ace_frag_enabled = 1;
		ace_frag_classes[] = {"ACE_frag_T1AM_HE_AIRBURST_1","ACE_frag_T1AM_HE_AIRBURST_2","ACE_frag_T1AM_HE_AIRBURST_2","ACE_frag_T1AM_HE_AIRBURST_2","ACE_frag_T1AM_HE_AIRBURST_3","ACE_frag_T1AM_HE_AIRBURST_3","ACE_frag_T1AM_HE_AIRBURST_3"};
		ace_frag_metal = 36000;
		ace_frag_charge = 9979;
		ace_frag_gurney_c = 2440;
		ace_frag_gurney_k = "1/2";
		
		CraterEffects = "T1AM_Airburst_Crater";
		craterShape = "\A3\weapons_f\empty.p3d";
		explosionEffects = "T1AM_Airburst_Effect_Cannon";
		
		typicalSpeed = 100;
		cost = 300;
		model = "\A3\Weapons_f\empty";
		airFriction = 0;
		timeToLive = 1;
		explosionTime = 0.001;
	};
	
	
	class T1AM_Airburst_RocketL: R_230mm_fly
	{
		hit = 550;
		indirectHit = 200;
		indirectHitRange = 23;
		explosive = 1;
		
		ace_frag_enabled = 1;
		ace_frag_classes[] = {"ACE_frag_T1AM_HE_AIRBURST_1","ACE_frag_T1AM_HE_AIRBURST_2","ACE_frag_T1AM_HE_AIRBURST_3","ACE_frag_T1AM_HE_AIRBURST_3","ACE_frag_T1AM_HE_AIRBURST_3","ACE_frag_T1AM_HE_AIRBURST_3","ACE_frag_T1AM_HE_AIRBURST_3"};
		ace_frag_metal = 36000;
		ace_frag_charge = 9979;
		ace_frag_gurney_c = 2440;
		ace_frag_gurney_k = "1/2";
		
		CraterEffects = "T1AM_Airburst_Crater";
		craterShape = "\A3\weapons_f\empty.p3d";
		explosionEffects = "T1AM_Airburst_Effect_Rocket";
		
		typicalSpeed = 100;
		cost = 300;
		model = "\A3\Weapons_f\empty";
		airFriction = 0;
		timeToLive = 1;
		explosionTime = 0.001;
	};
	class T1AM_Airburst_RocketM: R_230mm_fly
	{
		hit = 1000;
		indirectHit = 400;
		indirectHitRange = 27;
		explosive = 1;
		
		ace_frag_enabled = 1;
		ace_frag_classes[] = {"ACE_frag_T1AM_HE_AIRBURST_2","ACE_frag_T1AM_HE_AIRBURST_3","ACE_frag_T1AM_HE_AIRBURST_3","ACE_frag_T1AM_HE_AIRBURST_3","ACE_frag_T1AM_HE_AIRBURST_3","ACE_frag_T1AM_HE_AIRBURST_3","ACE_frag_T1AM_HE_AIRBURST_3"};
		ace_frag_metal = 36000;
		ace_frag_charge = 9979;
		ace_frag_gurney_c = 2440;
		ace_frag_gurney_k = "1/2";
		
		CraterEffects = "T1AM_Airburst_Crater";
		craterShape = "\A3\weapons_f\empty.p3d";
		explosionEffects = "T1AM_Airburst_Effect_Rocket";
		
		typicalSpeed = 100;
		cost = 300;
		model = "\A3\Weapons_f\empty";
		airFriction = 0;
		timeToLive = 1;
		explosionTime = 0.001;
	};
	class T1AM_Airburst_RocketH: R_230mm_fly
	{
		hit = 1500;
		indirectHit = 550;
		indirectHitRange = 30;
		explosive = 1;
		
		ace_frag_enabled = 1;
		ace_frag_classes[] = {"ACE_frag_T1AM_HE_AIRBURST_3","ACE_frag_T1AM_HE_AIRBURST_3","ACE_frag_T1AM_HE_AIRBURST_3","ACE_frag_T1AM_HE_AIRBURST_3","ACE_frag_T1AM_HE_AIRBURST_3","ACE_frag_T1AM_HE_AIRBURST_3","ACE_frag_T1AM_HE_AIRBURST_3"};
		ace_frag_metal = 36000;
		ace_frag_charge = 9979;
		ace_frag_gurney_c = 2440;
		ace_frag_gurney_k = "1/2";
		
		CraterEffects = "T1AM_Airburst_Crater";
		craterShape = "\A3\weapons_f\empty.p3d";
		explosionEffects = "T1AM_Airburst_Effect_Rocket";
		
		typicalSpeed = 100;
		cost = 300;
		model = "\A3\Weapons_f\empty";
		airFriction = 0;
		timeToLive = 1;
		explosionTime = 0.001;
	};
	class T1AM_Airburst_RocketMK41: T1AM_Airburst_RocketH
	{
		ace_frag_enabled = 0;
		hit = 1;
		indirectHit = 1;
		indirectHitRange = 1;
		CraterEffects = "";
		craterShape = "\A3\weapons_f\empty.p3d";
		explosionEffects = "";
		SoundSetExplosion[] = {};
		soundHit1[] = {};
		soundHit2[] = {};
		soundHit3[] = {};
	};
};



class T1AM_Airburst_Crater
{
	class CircleDust
	{
		enabled = "distToWater interpolate [0.0,0.01,-1,1]";
		intensity = 1;
		interval = 1;
		lifeTime = 0.25;
		position[] = {0,0,0};
		simulation = "particles";
		type = "CircleDustSmall";
	};
	class ExploAmmoStones
	{
		intensity = 0;
		interval = 1;
		lifeTime = 0;
		position[] = {0,0,0};
		simulation = "particles";
		type = "DirtSmall";
	};
};



class T1AM_Airburst_Effect_Mortar
{
	class Explosion1
	{
		intensity = 3;
		interval = 1;
		lifeTime = 0.08;
		position[] = {0,0,0};
		simulation = "particles";
		type = "ExplosionParticles";
	};
	class LightExp
	{
		intensity = 0.001;
		interval = 1;
		lifeTime = 0.25;
		position[] = {0,1.5,0};
		simulation = "light";
		type = "ExploLight";
	};
	class SmallSmoke1
	{
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		position[] = {0,0,0};
		simulation = "particles";
		type = "CloudBigLight";
	};
};

class T1AM_Airburst_Effect_Cannon
{
	class Explosion1
	{
		intensity = 3;
		interval = 1;
		lifeTime = 0.25;
		position[] = {0,0,0};
		simulation = "particles";
		type = "ExplosionParticles";
	};
	class LightExp
	{
		intensity = 0.001;
		interval = 1;
		lifeTime = 0.25;
		position[] = {0,1.5,0};
		simulation = "light";
		type = "ExploLight";
	};
	class SmallSmoke1
	{
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		position[] = {0,0,0};
		simulation = "particles";
		type = "CloudMedDark";
	};
};

class T1AM_Airburst_Effect_Rocket
{
	class Explosion1
	{
		intensity = 3;
		interval = 1;
		lifeTime = 0.25;
		position[] = {0,0,0};
		simulation = "particles";
		type = "ExplosionParticles";
	};
	class LightExp
	{
		intensity = 0.001;
		interval = 1;
		lifeTime = 0.25;
		position[] = {0,1.5,0};
		simulation = "light";
		type = "ExploLight";
	};
	class SmallSmoke1
	{
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		position[] = {0,0,0};
		simulation = "particles";
		type = "CloudMedLight";
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
			artilleryDispersion = 0.50;
		};
		class Burst1: Mode_Burst
		{
			artilleryDispersion = 0.50;
		};
		
		class Single3;
		class Single4: Single3
		{
			artilleryDispersion = 0.50;
			artilleryCharge = 1.45;
			displayName = "Semi (very far)";
		};
		
		class Burst3;
		class Burst4: Burst3
		{
			artilleryDispersion = 0.50;
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
		magazineReloadTime = 46;
		
		class Close: RocketPods
		{
			artilleryDispersion = 0.30;
		};
		class Medium: Close
		{
			artilleryDispersion = 0.30;
		};
		class Far: Close
		{
			artilleryDispersion = 0.30;
		};
		class Full: Close
		{
			artilleryDispersion = 0.30;
		};
	};
	
	class weapon_VLSBase;
	class weapon_VLS_01: weapon_VLSBase
	{
		magazineReloadTime = 60;
	};
};