class CfgPatches
{
	class t1_ace_blood_fix
	{
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"ace_medical_treatment"};
	};
};



class CfgWeapons
{
	class ACE_ItemCore;
	class InventoryItem_Base_F;
	
	class ACE_bloodIV: ACE_ItemCore
	{
		class ItemInfo: InventoryItem_Base_F
		{
			mass = 2.5;
			scope = 0;
			type = 302;
		};
	};
};



class ace_medical_treatment
{
	class IV
	{
		volume = 6000;
		ratio[] = {};
		type = "Blood";
		class BloodIV
		{
			volume = 6000;
			ratio[] = {"Plasma",1};
		};
	};
};