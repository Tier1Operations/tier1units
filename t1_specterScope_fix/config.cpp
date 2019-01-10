class CfgPatches
{
	class t1_specterScope_fix
	{
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		requiredAddons[] = {"iansky_opt"};
	};
};



class CfgWeapons
{
	class InventoryOpticsItem_Base_F;
	class ItemCore;
	
	class iansky_specterdr: ItemCore
	{
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class Ironsight
				{
					opticsZoomMin = 0.375;
					opticsZoomMax = 1.1;
					opticsZoomInit = 0.75;
					discreteDistance[] = {100};
					discreteDistanceInitIndex = 0;
				};
				
				class DRscope
				{
					visionMode[] = {};
					opticsZoomMin = 0.375;
					opticsZoomMax = 0.375;
					opticsZoomInit = 0.125;
					discretefov[] = {0.375,0.125};
					discreteInitIndex = 1;
					discreteDistance[] = {100,300};
					discreteDistanceInitIndex = 1;
				};
			};
		};
	};
};