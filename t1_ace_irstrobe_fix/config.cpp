class CfgPatches
{
	class t1_ace_irstrobe_fix
	{
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		requiredAddons[] = {"ace_attach","ace_interaction"};
	};
};



class CfgFunctions
{
	class ace_attach
	{
		class ace_attach
		{
			class attach {file = "t1_ace_irstrobe_fix\functions\fnc_attach.sqf"};
			class detach {file = "t1_ace_irstrobe_fix\functions\fnc_detach.sqf"};
			class toggleStrobeBrightness {file = "t1_ace_irstrobe_fix\functions\fn_toggleStrobeBrightness.sqf"};
			class handleItemKilled {file = "t1_ace_irstrobe_fix\functions\fn_handleItemKilled.sqf"};
			class unitInit {file = "t1_ace_irstrobe_fix\functions\fn_unitInit.sqf"};
		};
	};
};



class Extended_Init_EventHandlers
{
	class CAManBase
	{
        class T1_ACE_Attach_InitEH
		{
            init = "[_this select 0] call ace_attach_fnc_unitInit;";
        };
	};
};



class CfgVehicles
{
	class All;
	class ACE_IR_Strobe_Effect: All
	{
		class NVGMarker
		{
			ambient[] = {0.0001,0.0001,0.0001,1};
			brightness = 0.01;
			diffuse[] = {1.0,1.0,1.0,1};
			drawLightCenterSize = 0.003;
			drawLightSize = 0.1;
		};
	};
	
	class ACE_IR_Strobe_Effect_High: ACE_IR_Strobe_Effect
	{
		class NVGMarker: NVGMarker
		{
			ambient[] = {0.0001,0.0001,0.0001,1};
			brightness = 0.01;
			diffuse[] = {4,4,4,1};
			drawLightCenterSize = 0.003;
			drawLightSize = 0.1;
		};
	};
	
	class ACE_IR_Strobe_Effect_Low: ACE_IR_Strobe_Effect
	{
		class NVGMarker: NVGMarker
		{
			ambient[] = {0.0001,0.0001,0.0001,1};
			brightness = 0.01;
			diffuse[] = {0.07,0.07,0.07,1};
			drawLightCenterSize = 0.003;
			drawLightSize = 0.1;
		};
	};
	
	class Man;
	class CAManBase: Man
	{
		class ACE_SelfActions
		{
			class ACE_Equipment
			{
				class T1_ACE_Attach_StrobeModeToggle
				{
					displayName = "Strobe brightness toggle";
					condition = "player getVariable ['T1_ACE_Attach_StrobeMode', -1] != -1";
					statement = "[player] spawn ace_attach_fnc_toggleStrobeBrightness";
					showDisabled = 0;
					exceptions[] = {};
					icon = "\z\ace\addons\attach\UI\irstrobe_item.paa";
				};
			};
		};
	};
};



class CfgWeapons
{
	class ACE_IR_Strobe_Item;
	class ACE_IR_Strobe_Item_Low: ACE_IR_Strobe_Item
	{
		scope = 1;
		ACE_attachable = "ACE_IR_Strobe_Effect_Low";
	};
	
	class ACE_IR_Strobe_Item_High: ACE_IR_Strobe_Item
	{
		scope = 1;
		ACE_attachable = "ACE_IR_Strobe_Effect_High";
	};
};