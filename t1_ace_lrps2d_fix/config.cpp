class CfgPatches
{
	class t1_ace_lrps2d_fix
	{
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"ace_optics"};
	};
};

class CfgWeapons
{
	class InventoryOpticsItem_Base_F;
	class ItemCore;
	
	class optic_LRPS: ItemCore
	{
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class Snip
				{
				};
			};
		};
	};
	
	class ACE_optic_LRPS_2D: optic_LRPS
	{
		class ItemInfo: ItemInfo
		{
			class OpticsModes: OpticsModes
			{
				class Snip: Snip
				{
					visionMode[] = {};
				};
			};
		};
	};
};