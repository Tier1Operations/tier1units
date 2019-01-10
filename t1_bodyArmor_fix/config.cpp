class CfgPatches
{
	class t1_bodyArmor_fix
	{
		units[] = {};
		//weapons[] = {"rhs_6b23_crew_t1","rhs_6b23_digi_rifleman_t1","rhs_6b23_digi_6sh92_radio_t1","rhs_6b23_digi_6sh92_vog_t1","rhs_6b23_digi_t1","rhs_6b23_digi_6sh92_t1","rhs_6b23_digi_sniper_t1","rhs_6b23_digi_6sh92_headset_mapcase_t1","rhs_6b23_digi_6sh92_vog_headset_t1","rhs_6b23_rifleman_t1","rhs_6b23_6sh92_radio_t1","rhs_6b23_6sh92_vog_t1","rhs_6b23_t1","rhs_6b23_6sh92_t1","rhs_6b23_sniper_t1","rhs_6b23_crewofficer_t1","rhs_6b23_digi_crew_t1","rhs_6b23_digi_crewofficer_t1","rhs_6b23_6sh92_headset_mapcase_t1","rhs_6b23_6sh92_vog_headset_t1","rhs_6b23_medic_t1","rhs_6b23_ML_6sh92_t1","rhs_6b23_ML_sniper_t1","rhs_6b23_ML_crewofficer_t1","rhs_6b23_ML_6sh92_headset_mapcase_t1","rhs_6b23_ML_rifleman_t1","rhs_6b23_ML_medic_t1","rhs_6b27m_t1","rhs_6b27m_digi_t1","rhs_6b27m_ml_t1","rhs_6b27m_ess_bala_t1","rhs_6b27m_digi_ess_bala_t1","rhs_6b27m_ML_ess_bala_t1","rhs_6b27m_bala_t1","rhs_6b27m_digi_bala_t1","rhs_6b27m_ml_bala_t1","rhs_6b27m_ess_t1","rhs_6b27m_digi_ess_t1","rhs_6b27m_ml_ess_t1","rhs_6b27m_green_t1","rhs_6b27m_green_ess_t1","rhs_6b27m_green_bala_t1","rhs_6b27m_green_ess_bala_t1"};
		weapons[] = {};
		magazines[] = {};
		requiredVersion = 0.1;
		//requiredAddons[] = {"A3_Characters_F","rhs_c_troops"};
		requiredAddons[] = {"A3_Characters_F"};
	};
};

class CfgWeapons
{
	class ItemCore;
	class VestItem;
	
	class Vest_NoCamo_Base: ItemCore
	{
		class ItemInfo: VestItem{};
	};
	
	class V_PlateCarrier1_rgr: Vest_NoCamo_Base{};
	
	class V_PlateCarrier2_rgr: V_PlateCarrier1_rgr
	{
		class ItemInfo: ItemInfo
		{
			armor = 120;
			passThrough = 0.13;
		};
	};
	
	class H_HelmetB: ItemCore
	{
		class ItemInfo;
	};
	
	class H_HelmetB_light: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			armor = 10;
			passThrough = 0.13;
		};
	};
	
	
	
	class V_PlateCarrierIA1_dgtl: Vest_NoCamo_Base
	{
		class ItemInfo: ItemInfo
		{
			armor = 120;
			passThrough = 0.13;
		};
	};
	
	class V_PlateCarrierIA2_dgtl: V_PlateCarrierIA1_dgtl
	{
		class ItemInfo: VestItem
		{
			armor = 120;
			passThrough = 0.13;
		};
	};
	
	class V_PlateCarrierIAGL_dgtl: V_PlateCarrierIA2_dgtl
	{
		class ItemInfo: ItemInfo
		{
			mass = 160;
			armor = 180;
			passThrough = 0.11;
		};
	};
	
	class V_PlateCarrierIAGL_oli: V_PlateCarrierIAGL_dgtl
	{
		class ItemInfo: ItemInfo
		{
			mass = 160;
			armor = 180;
			passThrough = 0.11;
		};
	};
	
	class H_HelmetIA: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			armor = 10;
			passThrough = 0.13;
		};
	};
	

	/*
	class Vest_Camo_Base: ItemCore
	{
		class ItemInfo: VestItem{};
	};
	
	class rhs_6b23: Vest_Camo_Base
	{
		class ItemInfo: ItemInfo{};
	};
	class rhs_6b23_crew: rhs_6b23
	{
		class ItemInfo: ItemInfo{};
	};
	class rhs_6b23_digi: rhs_6b23
	{
		class ItemInfo: ItemInfo{};
	};
	class rhs_6b23_rifleman: rhs_6b23
	{
		class ItemInfo: ItemInfo{};
	};
	class rhs_6b23_6sh92: rhs_6b23
	{
		class ItemInfo: ItemInfo{};
	};
	class rhs_6b23_sniper: rhs_6b23
	{
		class ItemInfo: ItemInfo{};
	};
	class rhs_6b23_crewofficer: rhs_6b23
	{
		class ItemInfo: ItemInfo{};
	};
	class rhs_6b23_medic: rhs_6b23
	{
		class ItemInfo: ItemInfo{};
	};
	class rhs_6b23_6sh92_radio: rhs_6b23_6sh92
	{
		class ItemInfo: ItemInfo{};
	};
	class rhs_6b23_6sh92_vog: rhs_6b23_6sh92
	{
		class ItemInfo: ItemInfo{};
	};
	class rhs_6b23_digi_rifleman: rhs_6b23_rifleman
	{
		class ItemInfo: ItemInfo{};
	};
	class rhs_6b23_digi_6sh92_radio: rhs_6b23_6sh92_radio
	{
		class ItemInfo: ItemInfo{};
	};
	class rhs_6b23_digi_6sh92_vog: rhs_6b23_6sh92_vog
	{
		class ItemInfo: ItemInfo{};
	};
	class rhs_6b23_6sh92_headset_mapcase: rhs_6b23_6sh92
	{
		class ItemInfo: ItemInfo{};
	};
	class rhs_6b23_6sh92_vog_headset: rhs_6b23_6sh92_vog
	{
		class ItemInfo: ItemInfo{};
	};
	class rhs_6b23_digi_6sh92: rhs_6b23_6sh92
	{
		class ItemInfo: ItemInfo{};
	};
	class rhs_6b23_digi_sniper: rhs_6b23_sniper
	{
		class ItemInfo: ItemInfo{};
	};
	class rhs_6b23_digi_6sh92_headset_mapcase: rhs_6b23_6sh92_headset_mapcase
	{
		class ItemInfo: ItemInfo{};
	};
	class rhs_6b23_digi_6sh92_vog_headset: rhs_6b23_6sh92_vog_headset
	{
		class ItemInfo: ItemInfo{};
	};
	class rhs_6b23_digi_crew: rhs_6b23_crew
	{
		class ItemInfo: ItemInfo{};
	};
	class rhs_6b23_digi_crewofficer: rhs_6b23_crewofficer
	{
		class ItemInfo: ItemInfo{};
	};
	class rhs_6b23_ML_6sh92: rhs_6b23_6sh92
	{
		class ItemInfo: ItemInfo{};
	};
	class rhs_6b23_ML_sniper: rhs_6b23_sniper
	{
		class ItemInfo: ItemInfo{};
	};
	class rhs_6b23_ML_crewofficer: rhs_6b23_crewofficer
	{
		class ItemInfo: ItemInfo{};
	};
	class rhs_6b23_ML_6sh92_headset_mapcase: rhs_6b23_6sh92_headset_mapcase
	{
		class ItemInfo: ItemInfo{};
	};
	class rhs_6b23_ML_rifleman: rhs_6b23_rifleman
	{
		class ItemInfo: ItemInfo{};
	};
	class rhs_6b23_ML_medic: rhs_6b23_medic
	{
		class ItemInfo: ItemInfo{};
	};
	class rhs_6b23_crew_t1: rhs_6b23_crew
	{
		class ItemInfo: ItemInfo
		{
			armor = 120;
			passThrough = 0.13;
		};
	};
	class rhs_6b23_digi_rifleman_t1: rhs_6b23_digi_rifleman
	{
		class ItemInfo: ItemInfo
		{
			armor = 120;
			passThrough = 0.13;
		};
	};
	class rhs_6b23_digi_6sh92_radio_t1: rhs_6b23_digi_6sh92_radio
	{
		class ItemInfo: ItemInfo
		{
			armor = 120;
			passThrough = 0.13;
		};
	};
	class rhs_6b23_digi_6sh92_vog_t1: rhs_6b23_digi_6sh92_vog
	{
		class ItemInfo: ItemInfo
		{
			armor = 120;
			passThrough = 0.13;
		};
	};
	class rhs_6b23_digi_t1: rhs_6b23_digi
	{
		class ItemInfo: ItemInfo
		{
			armor = 120;
			passThrough = 0.13;
		};
	};
	class rhs_6b23_digi_6sh92_t1: rhs_6b23_digi_6sh92
	{
		class ItemInfo: ItemInfo
		{
			armor = 120;
			passThrough = 0.13;
		};
	};
	class rhs_6b23_digi_sniper_t1: rhs_6b23_digi_sniper
	{
		class ItemInfo: ItemInfo
		{
			armor = 120;
			passThrough = 0.13;
		};
	};
	class rhs_6b23_digi_6sh92_headset_mapcase_t1: rhs_6b23_digi_6sh92_headset_mapcase
	{
		class ItemInfo: ItemInfo
		{
			armor = 120;
			passThrough = 0.13;
		};
	};
	class rhs_6b23_digi_6sh92_vog_headset_t1: rhs_6b23_digi_6sh92_vog_headset
	{
		class ItemInfo: ItemInfo
		{
			armor = 120;
			passThrough = 0.13;
		};
	};
	class rhs_6b23_rifleman_t1: rhs_6b23_rifleman
	{
		class ItemInfo: ItemInfo
		{
			armor = 120;
			passThrough = 0.13;
		};
	};
	class rhs_6b23_6sh92_radio_t1: rhs_6b23_6sh92_radio
	{
		class ItemInfo: ItemInfo
		{
			armor = 120;
			passThrough = 0.13;
		};
	};
	class rhs_6b23_6sh92_vog_t1: rhs_6b23_6sh92_vog
	{
		class ItemInfo: ItemInfo
		{
			armor = 120;
			passThrough = 0.13;
		};
	};
	class rhs_6b23_t1: rhs_6b23
	{
		class ItemInfo: ItemInfo
		{
			armor = 120;
			passThrough = 0.13;
		};
	};
	class rhs_6b23_6sh92_t1: rhs_6b23_6sh92
	{
		class ItemInfo: ItemInfo
		{
			armor = 120;
			passThrough = 0.13;
		};
	};
	class rhs_6b23_sniper_t1: rhs_6b23_sniper
	{
		class ItemInfo: ItemInfo
		{
			armor = 120;
			passThrough = 0.13;
		};
	};
	class rhs_6b23_crewofficer_t1: rhs_6b23_crewofficer
	{
		class ItemInfo: ItemInfo
		{
			armor = 120;
			passThrough = 0.13;
		};
	};
	class rhs_6b23_digi_crew_t1: rhs_6b23_digi_crew
	{
		class ItemInfo: ItemInfo
		{
			armor = 120;
			passThrough = 0.13;
		};
	};
	class rhs_6b23_digi_crewofficer_t1: rhs_6b23_digi_crewofficer
	{
		class ItemInfo: ItemInfo
		{
			armor = 120;
			passThrough = 0.13;
		};
	};
	class rhs_6b23_6sh92_headset_mapcase_t1: rhs_6b23_6sh92_headset_mapcase
	{
		class ItemInfo: ItemInfo
		{
			armor = 120;
			passThrough = 0.13;
		};
	};
	class rhs_6b23_6sh92_vog_headset_t1: rhs_6b23_6sh92_vog_headset
	{
		class ItemInfo: ItemInfo
		{
			armor = 120;
			passThrough = 0.13;
		};
	};
	class rhs_6b23_medic_t1: rhs_6b23_medic
	{
		class ItemInfo: ItemInfo
		{
			armor = 120;
			passThrough = 0.13;
		};
	};
	class rhs_6b23_ML_6sh92_t1: rhs_6b23_ML_6sh92
	{
		class ItemInfo: ItemInfo
		{
			armor = 120;
			passThrough = 0.13;
		};
	};
	class rhs_6b23_ML_sniper_t1: rhs_6b23_ML_sniper
	{
		class ItemInfo: ItemInfo
		{
			armor = 120;
			passThrough = 0.13;
		};
	};
	class rhs_6b23_ML_crewofficer_t1: rhs_6b23_ML_crewofficer
	{
		class ItemInfo: ItemInfo
		{
			armor = 120;
			passThrough = 0.13;
		};
	};
	class rhs_6b23_ML_6sh92_headset_mapcase_t1: rhs_6b23_ML_6sh92_headset_mapcase
	{
		class ItemInfo: ItemInfo
		{
			armor = 120;
			passThrough = 0.13;
		};
	};
	class rhs_6b23_ML_rifleman_t1: rhs_6b23_ML_rifleman
	{
		class ItemInfo: ItemInfo
		{
			armor = 120;
			passThrough = 0.13;
		};
	};
	class rhs_6b23_ML_medic_t1: rhs_6b23_ML_medic
	{
		class ItemInfo: ItemInfo
		{
			armor = 120;
			passThrough = 0.13;
		};
	};
	
	
	
	class rhs_6b27m: H_HelmetB
	{
		class ItemInfo;
	};
	class rhs_6b27m_digi: rhs_6b27m
	{
		class ItemInfo: ItemInfo{};
	};
	class rhs_6b27m_ml: rhs_6b27m
	{
		class ItemInfo: ItemInfo{};
	};
	class rhs_6b27m_ess_bala: rhs_6b27m
	{
		class ItemInfo: ItemInfo{};
	};
	class rhs_6b27m_digi_ess_bala: rhs_6b27m_ess_bala
	{
		class ItemInfo: ItemInfo{};
	};
	class rhs_6b27m_ML_ess_bala: rhs_6b27m_ess_bala
	{
		class ItemInfo: ItemInfo{};
	};
	class rhs_6b27m_bala: rhs_6b27m
	{
		class ItemInfo: ItemInfo{};
	};
	class rhs_6b27m_digi_bala: rhs_6b27m_bala
	{
		class ItemInfo: ItemInfo{};
	};
	class rhs_6b27m_ml_bala: rhs_6b27m_bala
	{
		class ItemInfo: ItemInfo{};
	};
	class rhs_6b27m_ess: rhs_6b27m
	{
		class ItemInfo: ItemInfo{};
	};
	class rhs_6b27m_digi_ess: rhs_6b27m_ess
	{
		class ItemInfo: ItemInfo{};
	};
	class rhs_6b27m_ml_ess: rhs_6b27m_ess
	{
		class ItemInfo: ItemInfo{};
	};
	class rhs_6b27m_green: rhs_6b27m
	{
		class ItemInfo: ItemInfo{};
	};
	class rhs_6b27m_green_ess: rhs_6b27m_ess
	{
		class ItemInfo: ItemInfo{};
	};
	class rhs_6b27m_green_bala: rhs_6b27m_bala
	{
		class ItemInfo: ItemInfo{};
	};
	class rhs_6b27m_green_ess_bala: rhs_6b27m_ess_bala
	{
		class ItemInfo: ItemInfo{};
	};
	
	class rhs_6b27m_t1: rhs_6b27m
	{
		class ItemInfo: ItemInfo
		{
			armor = 10;
			passThrough = 0.13;
		};
	};
	class rhs_6b27m_digi_t1: rhs_6b27m_digi
	{
		class ItemInfo: ItemInfo
		{
			armor = 10;
			passThrough = 0.13;
		};
	};
	class rhs_6b27m_ml_t1: rhs_6b27m_ml
	{
		class ItemInfo: ItemInfo
		{
			armor = 10;
			passThrough = 0.13;
		};
	};
	class rhs_6b27m_ess_bala_t1: rhs_6b27m_ess_bala
	{
		class ItemInfo: ItemInfo
		{
			armor = 10;
			passThrough = 0.13;
		};
	};
	class rhs_6b27m_digi_ess_bala_t1: rhs_6b27m_digi_ess_bala
	{
		class ItemInfo: ItemInfo
		{
			armor = 10;
			passThrough = 0.13;
		};
	};
	class rhs_6b27m_ML_ess_bala_t1: rhs_6b27m_ML_ess_bala
	{
		class ItemInfo: ItemInfo
		{
			armor = 10;
			passThrough = 0.13;
		};
	};
	class rhs_6b27m_bala_t1: rhs_6b27m_bala
	{
		class ItemInfo: ItemInfo
		{
			armor = 10;
			passThrough = 0.13;
		};
	};
	class rhs_6b27m_digi_bala_t1: rhs_6b27m_digi_bala
	{
		class ItemInfo: ItemInfo
		{
			armor = 10;
			passThrough = 0.13;
		};
	};
	class rhs_6b27m_ml_bala_t1: rhs_6b27m_ml_bala
	{
		class ItemInfo: ItemInfo
		{
			armor = 10;
			passThrough = 0.13;
		};
	};
	class rhs_6b27m_ess_t1: rhs_6b27m_ess
	{
		class ItemInfo: ItemInfo
		{
			armor = 10;
			passThrough = 0.13;
		};
	};
	class rhs_6b27m_digi_ess_t1: rhs_6b27m_digi_ess
	{
		class ItemInfo: ItemInfo
		{
			armor = 10;
			passThrough = 0.13;
		};
	};
	class rhs_6b27m_ml_ess_t1: rhs_6b27m_ml_ess
	{
		class ItemInfo: ItemInfo
		{
			armor = 10;
			passThrough = 0.13;
		};
	};
	class rhs_6b27m_green_t1: rhs_6b27m_green
	{
		class ItemInfo: ItemInfo
		{
			armor = 10;
			passThrough = 0.13;
		};
	};
	class rhs_6b27m_green_ess_t1: rhs_6b27m_green_ess
	{
		class ItemInfo: ItemInfo
		{
			armor = 10;
			passThrough = 0.13;
		};
	};
	class rhs_6b27m_green_bala_t1: rhs_6b27m_green_bala
	{
		class ItemInfo: ItemInfo
		{
			armor = 10;
			passThrough = 0.13;
		};
	};
	class rhs_6b27m_green_ess_bala_t1: rhs_6b27m_green_ess_bala
	{
		class ItemInfo: ItemInfo
		{
			armor = 10;
			passThrough = 0.13;
		};
	};
};

class CfgVehicles
{
	class rhs_infantry_msv_base;
	class rhs_vdv_crew;
	
	class rhs_infantry_vdv_base: rhs_infantry_msv_base
	{
		linkedItems[] = {"rhs_6b27m_digi_t1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b27m_digi_t1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class rhs_vdv_rifleman: rhs_infantry_vdv_base
	{
		linkedItems[] = {"rhs_6b27m_t1","rhs_6b23_digi_rifleman_t1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b27m_t1","rhs_6b23_digi_rifleman_t1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class rhs_vdv_efreitor: rhs_vdv_rifleman
	{
		linkedItems[] = {"rhs_6b27m_t1","rhs_6b23_digi_6sh92_radio_t1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b27m_t1","rhs_6b23_digi_6sh92_radio_t1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class rhs_vdv_grenadier: rhs_vdv_rifleman
	{
		linkedItems[] = {"rhs_6b27m_t1","rhs_6b23_digi_6sh92_vog_t1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b27m_t1","rhs_6b23_digi_6sh92_vog_t1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class rhs_vdv_grenadier_rpg: rhs_vdv_grenadier
	{
		linkedItems[] = {"rhs_6b27m_t1","rhs_6b23_digi_rifleman_t1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b27m_t1","rhs_6b23_digi_rifleman_t1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class rhs_vdv_machinegunner: rhs_vdv_rifleman
	{
		linkedItems[] = {"rhs_6b27m_green_ess_t1","rhs_6b23_digi_t1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b27m_green_ess_t1","rhs_6b23_digi_t1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class rhs_vdv_machinegunner_assistant: rhs_vdv_rifleman
	{
		linkedItems[] = {"rhs_6b27m_bala_t1","rhs_6b23_digi_6sh92_t1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b27m_bala_t1","rhs_6b23_digi_6sh92_t1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class rhs_vdv_at: rhs_vdv_rifleman
	{
		linkedItems[] = {"rhs_6b27m_green_t1","rhs_6b23_digi_rifleman_t1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b27m_green_t1","rhs_6b23_digi_rifleman_t1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class rhs_vdv_aa: rhs_vdv_at
	{
		linkedItems[] = {"rhs_6b27m_ess_t1","rhs_6b23_digi_rifleman_t1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b27m_ess_t1","rhs_6b23_digi_rifleman_t1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class rhs_vdv_strelok_rpg_assist: rhs_vdv_rifleman
	{
		linkedItems[] = {"rhs_6b27m_t1","rhs_6b23_digi_6sh92_t1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b27m_t1","rhs_6b23_digi_6sh92_t1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class rhs_vdv_marksman: rhs_vdv_rifleman
	{
		linkedItems[] = {"rhs_Booniehat_digi","rhs_6b23_digi_sniper_t1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_Booniehat_digi","rhs_6b23_digi_sniper_t1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class rhs_vdv_officer_armored: rhs_vdv_rifleman
	{
		linkedItems[] = {"rhs_fieldcap_digi","rhs_6b23_digi_crewofficer_t1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_fieldcap_digi","rhs_6b23_digi_crewofficer_t1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class rhs_vdv_sergeant: rhs_vdv_rifleman
	{
		linkedItems[] = {"rhs_6b27m_green_t1","rhs_6b23_digi_6sh92_headset_mapcase_t1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b27m_green_t1","rhs_6b23_digi_6sh92_headset_mapcase_t1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class rhs_vdv_junior_sergeant: rhs_vdv_sergeant
	{
		linkedItems[] = {"rhs_6b27m_t1","rhs_6b23_digi_6sh92_vog_headset_t1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b27m_t1","rhs_6b23_digi_6sh92_vog_headset_t1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class rhs_vdv_engineer: rhs_vdv_rifleman
	{
		linkedItems[] = {"rhs_6b27m_green_ess_bala_t1","rhs_6b23_digi_rifleman_t1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b27m_green_ess_bala_t1","rhs_6b23_digi_rifleman_t1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class rhs_vdv_driver_armored: rhs_vdv_rifleman
	{
		linkedItems[] = {"rhs_fieldcap_digi","rhs_6b23_digi","ItemMap_t1","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_fieldcap_digi","rhs_6b23_digi_t1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class rhs_vdv_medic: rhs_vdv_rifleman
	{
		linkedItems[] = {"rhs_6b27m_t1","rhs_6b23_digi_medic_t1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b27m_t1","rhs_6b23_digi_medic_t1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class rhs_vdv_LAT: rhs_vdv_rifleman
	{
		linkedItems[] = {"rhs_6b27m_green_t1","rhs_scarf","rhs_6b23_digi_6sh92_vog_t1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b27m_green_t1","rhs_scarf","rhs_6b23_digi_6sh92_vog_t1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class rhs_vdv_RShG2: rhs_vdv_LAT
	{
		linkedItems[] = {"rhs_6b27m_green_t1","rhs_scarf","rhs_6b23_digi_6sh92_vog_t1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b27m_green_t1","rhs_scarf","rhs_6b23_digi_6sh92_vog_t1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class rhs_vdv_armoredcrew: rhs_vdv_crew
	{
		linkedItems[] = {"rhs_tsh4_ess","rhs_6b23_digi_crew_t1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_tsh4_ess","rhs_6b23_digi_crew_t1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class rhs_vdv_gorka_r_rifleman: rhs_vdv_rifleman
	{
		linkedItems[] = {"rhs_6b27m_green_t1","rhs_6b23_rifleman_t1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b27m_green_t1","rhs_6b23_rifleman_t1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class rhs_vdv_flora_rifleman: rhs_vdv_rifleman
	{
		linkedItems[] = {"rhs_6b27m_green_t1","rhs_6b23_rifleman_t1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b27m_green_t1","rhs_6b23_rifleman_t1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class rhs_vdv_flora_efreitor: rhs_vdv_efreitor
	{
		linkedItems[] = {"rhs_6b27m_green_t1","rhs_6b23_6sh92_radio_t1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b27m_green_t1","rhs_6b23_6sh92_radio_t1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class rhs_vdv_flora_grenadier: rhs_vdv_grenadier
	{
		linkedItems[] = {"rhs_6b27m_green_ess_t1","rhs_6b23_6sh92_vog_t1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b27m_green_ess_t1","rhs_6b23_6sh92_vog_t1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class rhs_vdv_flora_grenadier_rpg: rhs_vdv_grenadier_rpg
	{
		linkedItems[] = {"rhs_6b27m_green_ess_t1","rhs_6b23_rifleman_t1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b27m_green_ess_t1","rhs_6b23_rifleman_t1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class rhs_vdv_flora_machinegunner: rhs_vdv_machinegunner
	{
		linkedItems[] = {"rhs_6b27m_green_ess_t1","rhs_6b23_t1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b27m_green_ess_t1","rhs_6b23_t1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class rhs_vdv_flora_machinegunner_assistant: rhs_vdv_machinegunner_assistant
	{
		linkedItems[] = {"rhs_6b27m_green_t1","rhs_6b23_6sh92_t1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b27m_green_t1","rhs_6b23_6sh92_t1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class rhs_vdv_flora_at: rhs_vdv_at
	{
		linkedItems[] = {"rhs_6b27m_green_t1","rhs_6b23_rifleman_t1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b27m_green_t1","rhs_6b23_rifleman_t1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class rhs_vdv_flora_aa: rhs_vdv_aa
	{
		linkedItems[] = {"rhs_6b27m_green_ess_t1","rhs_6b23_rifleman_t1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b27m_green_ess_t1","rhs_6b23_rifleman_t1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class rhs_vdv_flora_strelok_rpg_assist: rhs_vdv_strelok_rpg_assist
	{
		linkedItems[] = {"rhs_6b27m_green_t1","rhs_6b23_6sh92_t1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b27m_green_t1","rhs_6b23_6sh92_t1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class rhs_vdv_flora_marksman: rhs_vdv_marksman
	{
		linkedItems[] = {"rhs_fieldcap_helm","rhs_6b23_sniper_t1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_fieldcap_helm","rhs_6b23_sniper_t1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class rhs_vdv_flora_officer_armored: rhs_vdv_officer_armored
	{
		linkedItems[] = {"rhs_fieldcap","rhs_6b23_crewofficer_t1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_fieldcap","rhs_6b23_crewofficer_t1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class rhs_vdv_flora_sergeant: rhs_vdv_sergeant
	{
		linkedItems[] = {"rhs_6b27m_green_t1","rhs_6b23_6sh92_headset_mapcase_t1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b27m_green_t1","rhs_6b23_6sh92_headset_mapcase_t1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class rhs_vdv_flora_junior_sergeant: rhs_vdv_junior_sergeant
	{
		linkedItems[] = {"rhs_6b27m_green_t1","rhs_6b23_6sh92_vog_headset_t1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b27m_green_t1","rhs_6b23_6sh92_vog_headset_t1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class rhs_vdv_flora_engineer: rhs_vdv_engineer
	{
		linkedItems[] = {"rhs_6b27m_green_t1","rhs_6b23_rifleman_t1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b27m_green_t1","rhs_6b23_rifleman_t1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class rhs_vdv_flora_driver_armored: rhs_vdv_driver_armored
	{
		linkedItems[] = {"rhs_fieldcap","rhs_6b23_t1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_fieldcap","rhs_6b23_t1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class rhs_vdv_flora_medic: rhs_vdv_medic
	{
		linkedItems[] = {"rhs_6b27m_green_t1","rhs_6b23_medic_t1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b27m_green_t1","rhs_6b23_medic_t1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class rhs_vdv_flora_LAT: rhs_vdv_LAT
	{
		linkedItems[] = {"rhs_6b27m_green_t1","rhs_6b23_6sh92_vog_t1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b27m_green_t1","rhs_6b23_6sh92_vog_t1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class rhs_vdv_flora_RShG2: rhs_vdv_RShG2
	{
		linkedItems[] = {"rhs_6b27m_green_t1","rhs_6b23_6sh92_vog_t1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b27m_green_t1","rhs_6b23_6sh92_vog_t1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class rhs_vdv_flora_armoredcrew: rhs_vdv_armoredcrew
	{
		linkedItems[] = {"rhs_tsh4_ess","rhs_6b23_crew_t1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_tsh4_ess","rhs_6b23_crew_t1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class rhs_vdv_mflora_rifleman: rhs_vdv_rifleman
	{
		linkedItems[] = {"rhs_6b27m_green_ess_t1","rhs_6sh92_digi","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b27m_green_ess_t1","rhs_6sh92_digi","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class rhs_vdv_mflora_efreitor: rhs_vdv_efreitor
	{
		linkedItems[] = {"rhs_6b27m_green_ess_t1","rhs_6sh92_digi_radio","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b27m_green_ess_t1","rhs_6sh92_digi_radio","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class rhs_vdv_mflora_grenadier: rhs_vdv_grenadier
	{
		linkedItems[] = {"rhs_6b27m_green_t1","rhs_6sh92_digi_vog","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b27m_green_t1","rhs_6sh92_digi_vog","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class rhs_vdv_mflora_grenadier_rpg: rhs_vdv_grenadier_rpg
	{
		linkedItems[] = {"rhs_6b27m_green_t1","rhs_6sh92_digi","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b27m_green_t1","rhs_6sh92_digi","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class rhs_vdv_mflora_machinegunner: rhs_vdv_machinegunner
	{
		linkedItems[] = {"rhs_6b27m_green_t1","rhs_6sh92_digi","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b27m_green_t1","rhs_6sh92_digi","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class rhs_vdv_mflora_machinegunner_assistant: rhs_vdv_machinegunner_assistant
	{
		linkedItems[] = {"rhs_6b27m_ml_t1","rhs_6sh92","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b27m_ml_t1","rhs_6sh92","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class rhs_vdv_mflora_at: rhs_vdv_at
	{
		linkedItems[] = {"rhs_6b27m_green_t1","rhs_6sh92","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b27m_green_t1","rhs_6sh92","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class rhs_vdv_mflora_aa: rhs_vdv_aa
	{
		linkedItems[] = {"rhs_6b27m_green_t1","rhs_6sh92","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b27m_green_t1","rhs_6sh92","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class rhs_vdv_mflora_strelok_rpg_assist: rhs_vdv_strelok_rpg_assist
	{
		linkedItems[] = {"rhs_6b27m_ml_t1","rhs_6b23_ML_6sh92_t1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b27m_ml_t1","rhs_6b23_ML_6sh92_t1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class rhs_vdv_mflora_marksman: rhs_vdv_marksman
	{
		linkedItems[] = {"rhs_fieldcap_helm_digi","rhs_6b23_ML_sniper_t1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_fieldcap_helm_digi","rhs_6b23_ML_sniper_t1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class rhs_vdv_mflora_officer_armored: rhs_vdv_officer_armored
	{
		linkedItems[] = {"rhs_fieldcap_digi","rhs_6b23_ML_crewofficer_t1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_fieldcap_digi","rhs_6b23_ML_crewofficer_t1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class rhs_vdv_mflora_sergeant: rhs_vdv_sergeant
	{
		linkedItems[] = {"rhs_6b27m_green_t1","rhs_6b23_ML_6sh92_headset_mapcase_t1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b27m_green_t1","rhs_6b23_ML_6sh92_headset_mapcase_t1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class rhs_vdv_mflora_junior_sergeant: rhs_vdv_junior_sergeant
	{
		linkedItems[] = {"rhs_6b27m_green_ess_t1","rhs_6sh92_digi_vog_headset","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b27m_green_ess_t1","rhs_6sh92_digi_vog_headset","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class rhs_vdv_mflora_engineer: rhs_vdv_engineer
	{
		linkedItems[] = {"rhs_6b27m_green_ess_t1","rhs_6b23_ML_rifleman_t1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b27m_green_ess_t1","rhs_6b23_ML_rifleman_t1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class rhs_vdv_mflora_medic: rhs_vdv_medic
	{
		linkedItems[] = {"rhs_6b27m_green_ess_t1","rhs_6b23_ML_medic_t1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b27m_green_ess_t1","rhs_6b23_ML_medic_t1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class rhs_vdv_mflora_LAT: rhs_vdv_LAT
	{
		linkedItems[] = {"rhs_6b27m_green_t1","rhs_6sh92_digi_vog","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b27m_green_t1","rhs_6sh92_digi_vog","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class rhs_vdv_mflora_RShG2: rhs_vdv_RShG2
	{
		linkedItems[] = {"rhs_6b27m_green_t1","rhs_6sh92_vog","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b27m_green_t1","rhs_6sh92_vog","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class rhs_vdv_mflora_armoredcrew: rhs_vdv_armoredcrew
	{
		linkedItems[] = {"rhs_tsh4_ess","rhs_6b23_ML_crew_t1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_tsh4_ess","rhs_6b23_ML_crew_t1","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	*/
};