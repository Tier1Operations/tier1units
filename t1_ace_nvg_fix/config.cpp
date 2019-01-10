class CfgPatches
{
	class t1_ace_nvg_fix
	{
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		requiredAddons[] = {"ace_nightvision"};
	};
};


class CfgWeapons
{
	class Binocular;
	
	class NVGoggles: Binocular
	{
		class ItemInfo;
	};
	
	class ACE_NVG_Gen4: NVGoggles
	{
		model = "\A3\Weapons_f\binocular\nvg_proxy_OPFOR";
		modelOptics = "\A3\weapons_f\reticle\optics_night";
		picture = "\A3\Weapons_F\Data\UI\gear_nvg_opfor_CA.paa";
		displayName = "NV Goggles (Gen4)";
		ACE_NightVision_grain = 0.30;
		ACE_NightVision_blur = 0.020;
		ACE_NightVision_radBlur = 0.001;
		
		class ItemInfo: ItemInfo
		{
			modelOff = "A3\weapons_f\binocular\NVG_proxy_off_OPFOR.p3d";
			uniformModel = "A3\weapons_f\binocular\nvg_proxy_OPFOR.p3d";
		};
	};
};