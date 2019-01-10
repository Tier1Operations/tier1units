#define _ARMA_

class CfgPatches
{
	class t1_repairtruck_fix
	{
		requiredaddons[] = {"A3_Soft_F_Gamma_Truck_01"};
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
	};
};



class CfgVehicles
{
	class B_Truck_01_mover_F;
	
	class B_Truck_01_Repair_F: B_Truck_01_mover_F
	{
		class TransportItems
		{
			class _xx_ToolKit
			{
				count = 10;
				name = "ToolKit";
			};
		};
		
		class TransportBackpacks
		{
			class _xx_B_AssaultPack_rgr
			{
				count = 10;
				backpack = "B_AssaultPack_rgr";
			};
		};
	};
};