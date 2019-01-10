class CfgPatches
{
	class t1_rco_fix
	{
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F","ace_optics"};
	};
};

class CfgWeapons
{
	class ItemCore;
	class InventoryOpticsItem_Base_F;
	
	class optic_Hamr: ItemCore
	{
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class Hamr2Collimator
				{
					distanceZoomMin = 100;
					distanceZoomMax = 100;
				};
			};
		};
	};
};