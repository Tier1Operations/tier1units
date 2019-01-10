class CfgPatches
{
	class t1_negev_fix
	{
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F","A3_Weapons_F_Machineguns_Zafir","45KO_SO_weapons_ABR","ace_flashsuppressors"};
	};
};



class asdg_MuzzleSlot_762MG;

class CfgWeapons
{
	class Rifle_Long_Base_F
	{
		class WeaponSlotsInfo;
	};
	
	class LMG_Zafir_F: Rifle_Long_Base_F
	{
		displayName = "Negev NG7 SF (WP)";
		
		class WeaponSlotsInfo;
		class Single;
		class FullAuto;
	};
	
	class 45KO_zafir_black: LMG_Zafir_F
	{
		displayName = "Negev NG7 SF (Black)";
		magazines[] = {"rhsusf_50Rnd_762x51","rhsusf_50Rnd_762x51_m61_ap","rhsusf_50Rnd_762x51_m62_tracer","rhsusf_50Rnd_762x51_m80a1epr","rhsusf_50Rnd_762x51_m82_blank","rhsusf_100Rnd_762x51","rhsusf_100Rnd_762x51_m61_ap","rhsusf_100Rnd_762x51_m62_tracer","rhsusf_100Rnd_762x51_m80a1epr","rhsusf_100Rnd_762x51_m82_blank","rhsusf_50Rnd_762x51_m993","rhsusf_100Rnd_762x51_m993"};
		
		ACE_Overheating_JamChance[] = {0,0.0001,0.0005,0.0025};
		
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 168;
			class MuzzleSlot: asdg_MuzzleSlot_762MG
			{
				access = 0;
				displayName = "$str_a3_cfgweapons_abr_base_f_weaponslotsinfo_muzzleslot0";
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
				iconPinpoint = "Center";
				iconPosition[] = {0,0.4};
				iconScale = 0.2;
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				scope = 0;
			};
		};
		
		class Single: Single
		{
			dispersion = 0.00055;
			
			sounds[] = {"StandardSound","SilencedSound"};
			class SilencedSound
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_short_01",0.891251,1,200};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_short_02",0.891251,1,200};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_short_03",0.891251,1,200};
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Closure_Mk200_01",0.251189,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Closure_Mk200_02",0.251189,1,10};
				closure3[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Closure_Mk200_03",0.251189,1,10};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin1",0.34};
				soundClosure[] = {"closure1",0.33,"closure2",0.33,"closure3",0.34};
				SoundSetShot[] = {"Mk200_silencerShot_SoundSet","Mk200_silencerTail_SoundSet","Mk200_silencerInteriorTail_SoundSet"};
				class SoundTails
				{
					class TailForest
					{
						frequency = 1;
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_tail_forest",1,1,1800};
						volume = "(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						frequency = 1;
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_tail_houses",1,1,1800};
						volume = "(1-interior/1.4)*houses";
					};
					class TailInterior
					{
						frequency = 1;
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_tail_interior",1.99526,1,1200};
						volume = "interior";
					};
					class TailMeadows
					{
						frequency = 1;
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_tail_meadows",1,1,1800};
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						frequency = 1;
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_tail_trees",1,1,1800};
						volume = "(1-interior/1.4)*trees";
					};
				};
			};
		};
		
		class FullAuto: FullAuto
		{
			dispersion = 0.00055;
			
			sounds[] = {"StandardSound","SilencedSound"};
			class SilencedSound
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_short_01",0.891251,1,200};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_short_02",0.891251,1,200};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_short_03",0.891251,1,200};
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Closure_Mk200_01",0.251189,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Closure_Mk200_02",0.251189,1,10};
				closure3[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Closure_Mk200_03",0.251189,1,10};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin1",0.34};
				soundClosure[] = {"closure1",0.33,"closure2",0.33,"closure3",0.34};
				SoundSetShot[] = {"Mk200_silencerShot_SoundSet","Mk200_silencerTail_SoundSet","Mk200_silencerInteriorTail_SoundSet"};
				class SoundTails
				{
					class TailForest
					{
						frequency = 1;
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_tail_forest",1,1,1800};
						volume = "(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						frequency = 1;
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_tail_houses",1,1,1800};
						volume = "(1-interior/1.4)*houses";
					};
					class TailInterior
					{
						frequency = 1;
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_tail_interior",1.99526,1,1200};
						volume = "interior";
					};
					class TailMeadows
					{
						frequency = 1;
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_tail_meadows",1,1,1800};
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						frequency = 1;
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_tail_trees",1,1,1800};
						volume = "(1-interior/1.4)*trees";
					};
				};
			};
		};
	};
	
	class 45KO_zafir_camo_brown: LMG_Zafir_F
	{
		displayName = "Negev NG7 SF (Brown)";
		magazines[] = {"rhsusf_50Rnd_762x51","rhsusf_50Rnd_762x51_m61_ap","rhsusf_50Rnd_762x51_m62_tracer","rhsusf_50Rnd_762x51_m80a1epr","rhsusf_50Rnd_762x51_m82_blank","rhsusf_100Rnd_762x51","rhsusf_100Rnd_762x51_m61_ap","rhsusf_100Rnd_762x51_m62_tracer","rhsusf_100Rnd_762x51_m80a1epr","rhsusf_100Rnd_762x51_m82_blank","rhsusf_50Rnd_762x51_m993","rhsusf_100Rnd_762x51_m993"};
		
		ACE_Overheating_JamChance[] = {0,0.0001,0.0005,0.0025};
		
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 168;
			class MuzzleSlot: asdg_MuzzleSlot_762MG
			{
				access = 0;
				displayName = "$str_a3_cfgweapons_abr_base_f_weaponslotsinfo_muzzleslot0";
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
				iconPinpoint = "Center";
				iconPosition[] = {0,0.4};
				iconScale = 0.2;
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				scope = 0;
			};
		};
		
		class Single: Single
		{
			dispersion = 0.00045;
			
			sounds[] = {"StandardSound","SilencedSound"};
			class SilencedSound
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_short_01",0.891251,1,200};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_short_02",0.891251,1,200};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_short_03",0.891251,1,200};
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Closure_Mk200_01",0.251189,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Closure_Mk200_02",0.251189,1,10};
				closure3[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Closure_Mk200_03",0.251189,1,10};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin1",0.34};
				soundClosure[] = {"closure1",0.33,"closure2",0.33,"closure3",0.34};
				SoundSetShot[] = {"Mk200_silencerShot_SoundSet","Mk200_silencerTail_SoundSet","Mk200_silencerInteriorTail_SoundSet"};
				class SoundTails
				{
					class TailForest
					{
						frequency = 1;
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_tail_forest",1,1,1800};
						volume = "(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						frequency = 1;
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_tail_houses",1,1,1800};
						volume = "(1-interior/1.4)*houses";
					};
					class TailInterior
					{
						frequency = 1;
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_tail_interior",1.99526,1,1200};
						volume = "interior";
					};
					class TailMeadows
					{
						frequency = 1;
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_tail_meadows",1,1,1800};
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						frequency = 1;
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_tail_trees",1,1,1800};
						volume = "(1-interior/1.4)*trees";
					};
				};
			};
		};
		
		class FullAuto: FullAuto
		{
			dispersion = 0.00045;
			
			sounds[] = {"StandardSound","SilencedSound"};
			class SilencedSound
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_short_01",0.891251,1,200};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_short_02",0.891251,1,200};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_short_03",0.891251,1,200};
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Closure_Mk200_01",0.251189,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Closure_Mk200_02",0.251189,1,10};
				closure3[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Closure_Mk200_03",0.251189,1,10};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin1",0.34};
				soundClosure[] = {"closure1",0.33,"closure2",0.33,"closure3",0.34};
				SoundSetShot[] = {"Mk200_silencerShot_SoundSet","Mk200_silencerTail_SoundSet","Mk200_silencerInteriorTail_SoundSet"};
				class SoundTails
				{
					class TailForest
					{
						frequency = 1;
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_tail_forest",1,1,1800};
						volume = "(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						frequency = 1;
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_tail_houses",1,1,1800};
						volume = "(1-interior/1.4)*houses";
					};
					class TailInterior
					{
						frequency = 1;
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_tail_interior",1.99526,1,1200};
						volume = "interior";
					};
					class TailMeadows
					{
						frequency = 1;
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_tail_meadows",1,1,1800};
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						frequency = 1;
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_tail_trees",1,1,1800};
						volume = "(1-interior/1.4)*trees";
					};
				};
			};
		};
	};
};