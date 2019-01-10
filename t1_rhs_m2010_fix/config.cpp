class CfgPatches
{
	class t1_rhs_m2010_fix
	{
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"t1_silencer_ammo_fix","t1_recoilFix","rhsusf_c_weapons"};
	};
};

class CfgMagazines
{
	class CA_Magazine;
	
	class rhsusf_5Rnd_300winmag_xm2010: CA_Magazine
	{
		mass = 10.5;
	};
};

class Mode_SemiAuto;
class CfgWeapons
{
	class Rifle_Base_F;
	
	class rhs_weap_XM2010_Base_F: Rifle_Base_F
	{
		magazines[] += {"T1_rhsusf_5Rnd_300winmag_xm2010_SD"};
		recoil = "recoil_t1_xm2010";
		
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class SilencedSound
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6",0.70794576,1,10};
				closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7",0.70794576,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-20",13,1,100};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-21",13,1,100};
				begin3[] = {"A3\sounds_f\weapons\silenced\silent-22",13,1,100};
				soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
			};
		};
	};
};