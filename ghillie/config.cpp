class CfgPatches
{
	class T1_Full_Body_Ghillie
	{
		units[] = {};
		weapons[] = {"T1_FB_Ghillie_Camo","T1_FB_Ghillie_Desert","T1_FB_Ghillie_Snow"};
		requiredVersion = 0.1;
		requiredAddons[] = {"T1_Units_Faction1"};
		version = 0.1;
	};
};
class cfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class U_B_HeliPilotCoveralls;
	class HeadgearItem;
	class Uniform_Base;
	class UniformItem;
	class U_B_CombatUniform_mcam_vest;
	class Vest_Base;
	class VestItem;
	class B_Soldier_base_F;
	class U_B_CombatUniform_mcam;
	class U_I_GhillieSuit;
	class T1_FB_Ghillie_Camo: U_B_CombatUniform_mcam
	{
		scope = 2;
		displayName = "T1 Full Body Ghillie";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Ghillie\ghillie_wood_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "T1_Spotter_Standard_F";
			containerClass = "Supply150";
			mass = 80;
		};
	};
	class T1_FB_Ghillie_Desert: U_B_CombatUniform_mcam
	{
		scope = 2;
		displayName = "T1 Full Body Ghillie";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Ghillie\ghillie_desert_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "T1_Spotter_Standard_Desert_F";
			containerClass = "Supply150";
			mass = 80;
		};
	};
	class T1_FB_Ghillie_Snow: U_B_CombatUniform_mcam
	{
		scope = 2;
		displayName = "T1 Full Body Ghillie";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\Ghillie\ghillie_snow_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "T1_Spotter_Standard_Snow_F";
			containerClass = "Supply150";
			mass = 80;
		};
	};
};