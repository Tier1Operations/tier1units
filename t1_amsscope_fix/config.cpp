class CfgPatches
{
	class t1_amsscope_fix
	{
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F_Mark"};
	};
};

class CfgWeapons
{
	class InventoryOpticsItem_Base_F;
	class ItemCore;
	
	class optic_AMS_base: ItemCore
	{
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class AMS
				{
					visionMode[] = {};
				};
				
				class Iron
				{
					distanceZoomMin = 100;
					distanceZoomMax = 100;
					discreteDistance[] = {100};
				};
			};
		};
	};
};