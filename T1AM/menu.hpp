#define T1AM_X				0
#define T1AM_Y				0
#define T1AM_H				1
#define T1AM_W				1
#define T1AM_BUTTON_H		0.05
#define T1AM_BUTTON_W		0.13
#define T1AM_SPACE			0.011
#define T1AM_COL			(T1AM_X + T1AM_SPACE)
#define T1AM_ROW			(T1AM_Y + T1AM_SPACE)
#define T1AM_COLINC			(T1AM_BUTTON_W + T1AM_SPACE)
#define T1AM_ROWINC			(T1AM_BUTTON_H + T1AM_SPACE)
#define T1AM_TEXTSIZE		0.03
#define T1AM_TEXT			"PuristaSemiBold"



class T1AM_RscText
{
	x = 0;
	y = 0;
	h = 0.037;
	w = 0.3;
	type = 0;
	style = 0;
	shadow = 1;
	colorShadow[] = {0, 0, 0, 0.5};
	font = T1AM_TEXT;
	SizeEx = T1AM_TEXTSIZE;
	text = "";
	colorText[] = {1,1,1,1};
	colorBackground[] = {0, 0, 0, 0};
	linespacing = 1;
	
	tooltip = "";
	tooltipColorText[] = {1,1,1,1};
	tooltipColorBox[] = {1,1,1,1};
	tooltipColorShade[] = {0,0,0,0.65};
};

class T1AM_RscEdit
{
	access = 0;
	type = 2;
	style = "0x00";
	x = 0;
	y = 0;
	h = 0.04;
	w = 0.2;
	colorDisabled[] = {1,1,1,0.25};
	colorBackground[] = {0,0,0,0.5};
	colorText[] = {1,1,1,1};
	colorSelection[] = {1,1,1,0.25};
	font = T1AM_TEXT;
	SizeEx = T1AM_TEXTSIZE;
	autocomplete = "";
	text = "";
	size = T1AM_TEXTSIZE;
	shadow = 0;
	canModify = 1;
};

class T1AM_RscCheckbox
{
	access = 0;
	type = 6;
	style = "2";
	x = 0;
	y = 0;
	h = 0.04;
	w = 0.2;
	text = "";
	sizeEx = T1AM_TEXTSIZE;
	size = T1AM_TEXTSIZE;
	font = T1AM_TEXT;
	shadow = 0;
	color[] = {0,0,0,1};
	colorActive[] = {0,0,0,1};
	colorDisabled[] = {0,0,0,1};
	colorSelectBackground2[] = {0,0,0,1};
	colorScrollbar[] = {0.2,0.2,0.2,1};
	colorTextDisable[] = {0,0,0,0};
	colorDisable[] = {0,0,0,0};
	colorSelect[] = {0,0,0,1};
	colorSelect2[] = {0,0,0,1};
	colorBackground[] = {0.28,0.28,0.28,0.28};
	colorText[] = {1,1,1,1};
	colorTextSelect[] = {0,0,0,1};
	colorSelectedBg[] = {1,1,1,1};
	
	tooltip = "";
	tooltipColorText[] = {1,1,1,1};
	tooltipColorBox[] = {1,1,1,1};
	tooltipColorShade[] = {0,0,0,0.65};
	
	rows = 1;
	columns = 1;
	strings[] = {"ON"};
	checked_strings[] = {};
	values[] = {0};
};

class T1AM_RscButtonMenu
{
	idc = -1;
	type = 16;
	style = 2;
	default = 0;
	shadow = 0;
	x = 0;
	y = 0;
	w = T1AM_BUTTON_W;
	h = T1AM_BUTTON_H * 0.69;
	
	animTextureNormal = "#(argb,8,8,3)color(0,0,0,0.75)";
	animTextureDisabled = "#(argb,8,8,3)color(0,0,0,0.75)";
	animTextureOver = "#(argb,8,8,3)color(0,0,0,0.75)";
	animTextureFocused = "#(argb,8,8,3)color(0,0,0,0.75)";
	animTexturePressed = "#(argb,8,8,3)color(0.2,0.2,0.2,0.9)";
	animTextureDefault = "#(argb,8,8,3)color(0,0,0,0.75)";
	textureNoShortcut = "#(argb,8,8,3)color(0,0,0,0.75)";
	
	colorBackground[] = {1,1,1,1};
	colorBackground2[] = {1,1,1,1};
	colorBackgroundFocused[] = {0,0,0,1}; 
	color[] = {1,1,1,1};
	color2[] = {1,1,1,1};
	colorText[] = {1,1,1,1};
	colorFocused[] = {1,1,1,1};
	colorDisabled[] = {0,0,0,1};
	period = 1;
	periodFocus = 1;
	periodOver = 1;
	Size = T1AM_TEXTSIZE;
	SizeEx = T1AM_TEXTSIZE;
	soundEnter[] = {"",0.0,1};
	soundPush[] = {"",0.0,0};
	soundClick[] = {"",0.0,1};
	soundEscape[] = {"",0.0,1};
	action = "";
	text = "";
	font = T1AM_TEXT;
	
	class HitZone
	{
		left = 0;
		top = 0;
		right = 0;
		bottom = 0;
	};
	
	class ShortcutPos
	{
		left = 0;
		top = 0;
		w = 0;
		h = 0;
	};
	
	class TextPos
	{
		left = 0;
		top = 0;
		right = 0;
		bottom = 0;
	};
	
	class Attributes
	{
		font = T1AM_TEXT;
		color = "#E5E5E5";
		align = "center";
		shadow = "false";
	};
	
	class AttributesImage
	{
		font = T1AM_TEXT;
		color = "#E5E5E5";
		align = "left";
	};
};

class T1AM_RscListBox
{
	style = 16;
	idc = -1;
	type = 5;
	w = 0.275;
	h = 0.04;
	font = T1AM_TEXT;
	color[] = {0,0,0,1};
	colorActive[] = {0,0,0,1};
	colorDisabled[] = {0,0,0,0.3};
	colorSelect[] = {0,0,0,1};
	colorText[] = {1,1,1,1};
	colorBackground[] = {0.28,0.28,0.28,0.28};
	colorSelect2[] = {0,0,0,1};
	colorSelectBackground2[] = {1,1,1,0.5};
	colorScrollbar[] = {0.2,0.2,0.2,1};
	arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
	arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
	wholeHeight = 0.45;
	rowHeight = 0.04;
	SizeEx = T1AM_TEXTSIZE;
	soundSelect[] = {"",0.1,1};
	soundExpand[] = {"",0.1,1};
	soundCollapse[] = {"",0.1,1};
	maxHistoryDelay = 1;
	autoScrollSpeed = -1;
	autoScrollDelay = 5;
	autoScrollRewind = 0;
	
	class ListScrollBar
	{
		color[] = {1,1,1,0.6};
		colorActive[] = {1,1,1,1};
		colorDisabled[] = {1,1,1,0.3};
		thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
		arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
		arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
		border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
	};
};

class T1AM_BackgroundTablet
{
	idc = -1;
	type = 82;
	model = "\A3\Props_F_Exp_A\Military\Equipment\Tablet_02_F.p3d";
	scale = 1;
	direction[] = {0,-1,0};
	up[] = {0,1,-1};
	x = 0.499;
	y = 0.517;
	z = 0.215;
	xBack = 0.499;
	yBack = 0.517;
	zBack = 0.215;
	inBack = 0;
	enableZoom = 0;
	zoomDuration = 0.001;
	onLoad = "(_this select 0) ctrlEnable false";
};

class T1AM_ActiveText
{
	idc = -1;
	type = 11;
	style = ST_LEFT;
	x = 0.75;
	y = 0.5;
	w = 0.2;
	h = 0.035;
	font = T1AM_TEXT;
	SizeEx = T1AM_TEXTSIZE;
	color[] = {1,1,1,1};
	colorActive[] = {1,1,1,1};
	colorText[] = {1,1,1,1};
	colorBackground[] = {0,0,0,0};
	soundEnter[] = {"",0,1};
	soundPush[] = {"",0,1};
	soundClick[] = {"", 0,1};
	soundEscape[] = {"",0,1 };
	action = "";
	text = "";
	default = true;
};

class T1AM_ButtonCloseComputer: T1AM_RscButtonMenu
{
	idc = -1;
	text = "";
	x = 0.475;
	y = 1.08;
	w = 0.042;
	h = 0.040;
	animTextureNormal = "#(argb,8,8,3)color(0,0,0,0)";
	animTextureDisabled = "#(argb,8,8,3)color(0,0,0,0)";
	animTextureOver = "#(argb,8,8,3)color(0,0,0,0)";
	animTextureFocused = "#(argb,8,8,3)color(0,0,0,0)";
	animTexturePressed = "#(argb,8,8,3)color(0,0,0,0)";
	animTextureDefault = "#(argb,8,8,3)color(0,0,0,0)";
	textureNoShortcut = "#(argb,8,8,3)color(0,0,0,0)";
	tooltip = "Shutdown";
	tooltipColorText[] = {1,1,1,1};
	tooltipColorBox[] = {1,1,1,1};
	tooltipColorShade[] = {0,0,0,0.65};
	onButtonClick = "[] spawn {sleep 0.3; [0] call T1AM_Fnc_CloseDisplays}";
};

class T1AM_ButtonStart: T1AM_ButtonCloseComputer
{
	x = 0.75;
	y = 1.095;
	w = 0.042;
	h = 0.058;
	tooltip = "Start";
	tooltipColorText[] = {1,1,1,1};
	tooltipColorBox[] = {1,1,1,1};
	tooltipColorShade[] = {0,0,0,0.65};
	onButtonClick = "call T1AM_Fnc_ButtonStartEvent";
};

class T1AM_ButtonEscapeMenu: T1AM_ButtonCloseComputer
{
	x = 0.18;
	y = 1.095;
	w = 0.042;
	h = 0.056;
	tooltip = "Escape";
	tooltipColorText[] = {1,1,1,1};
	tooltipColorBox[] = {1,1,1,1};
	tooltipColorShade[] = {0,0,0,0.65};
	onButtonClick = "[] spawn {sleep 0.1; closeDialog 0}";
};
class T1AM_ButtonEscapeMenuDummy: T1AM_ButtonEscapeMenu
{
	onButtonClick = "";
};



/////////////////////////////////////////////////////////////
// Main Dialog
/////////////////////////////////////////////////////////////
class T1AM_DialogMain
{
	idd = 47050;
	name= "T1AM_DialogMain";
	movingEnable = false;
	enableSimulation = true;
	onLoad = "";
	onChildDestroyed = "_this spawn {params[""_display"", ""_closedChildDisplay"", ""_exitCode""]; [_exitCode] call T1AM_Fnc_CloseDisplays}";
	
	class Objects
	{
		class T1AM_BackgroundTablet1: T1AM_BackgroundTablet{};
	};
	
	class controls
	{
		class T1AM_ButtonCloseComputer1: T1AM_ButtonCloseComputer{};
		class T1AM_ButtonEscapeMenuDummy1: T1AM_ButtonEscapeMenuDummy{};
		class T1AM_ButtonStart1: T1AM_ButtonStart{};
	};
};



/////////////////////////////////////////////////////////////
// Assets
/////////////////////////////////////////////////////////////
class T1AM_DialogAssets
{
	idd = 47100;
	name= "T1AM_DialogAssets";
	movingEnable = false;
	enableSimulation = true;
	onLoad = "";
	
	class Objects
	{
		class T1AM_BackgroundTablet1: T1AM_BackgroundTablet{};
	};
	
	class controls
	{
		class MainBackground: T1AM_RscText
		{
			colorBackground[] = {0.15, 0.15, 0.15, 1};
			idc = -1;
			x = T1AM_X;
			y = T1AM_Y;
			w = T1AM_W;
			h = T1AM_H;
		};
		
		class T1AM_TextAsset: T1AM_RscText
		{
			idc = -1;
			text = "ASSETS";
			sizeEx = T1AM_TEXTSIZE;
			x = T1AM_COL;
			y = T1AM_ROW;
			w = (T1AM_BUTTON_W * 0.6);
			h = T1AM_BUTTON_H;
			tooltip = "List of artillery assets that can be controlled.";
		};
		
		class T1AM_TextMissions: T1AM_RscText
		{
			idc = -1;
			text = "PREVIOUS FFE/PLOT MISSIONS";
			sizeEx = T1AM_TEXTSIZE;
			x = T1AM_COL;
			y = T1AM_ROW + (T1AM_ROWINC * 8);
			w = (T1AM_BUTTON_W * 1.9);
			h = T1AM_BUTTON_H;
			tooltip = "A list of previous Fire For Effect missions and plotted missions.\nYou can load these missions.\nA loaded mission is executed faster than a new mission.\nThe following info is shown for each mission:\n- Time\n- Person who called in the mission\n- Mission type and number\n- Coordinates of aimpoint\n- Ammo type and number\n- Fuze\n- Angle\n- Sheaf\n- Remarks";
		};
		
		
		
		class T1AM_ListAsset: T1AM_RscListBox 
		{
			idc = 47101;
			text = "";
			x = T1AM_COL;
			y = T1AM_ROW + (T1AM_ROWINC * 1);
			w = T1AM_BUTTON_W + (T1AM_COLINC * 6);
			h = (T1AM_BUTTON_H * 7) - T1AM_SPACE;
			onLBSelChanged = "_this call T1AM_Fnc_ListMissionsEvent";
		};
		
		class T1AM_ListMissions: T1AM_RscListBox 
		{
			idc = 47102;
			text = "";
			x = T1AM_COL;
			y = T1AM_ROW + (T1AM_ROWINC * 9);
			w = T1AM_BUTTON_W + (T1AM_COLINC * 6);
			h = (T1AM_BUTTON_H * 6) - T1AM_SPACE;
			onLBSelChanged = "";
		};
		
		class T1AM_ButtonControlAsset: T1AM_RscButtonMenu
		{
			idc = -1;
			text = "CONTROL";
			x = T1AM_COL + (T1AM_COLINC * 0);
			y = T1AM_ROW + (T1AM_ROWINC * 7);
			onButtonClick = "[false] call T1AM_Fnc_ControlAsset";
			tooltip = "Take control of the selected artillery unit.";
		};
		
		class T1AM_ButtonReleaseAsset: T1AM_RscButtonMenu
		{
			idc = -1;
			text = "RELEASE";
			x = T1AM_COL + (T1AM_COLINC * 1);
			y = T1AM_ROW + (T1AM_ROWINC * 7);
			onButtonClick = "call T1AM_Fnc_ReleaseAsset";
			tooltip = "Relinquish control of currently controlled artillery unit.";
		};
		
		class T1AM_ButtonControlMission: T1AM_RscButtonMenu
		{
			idc = -1;
			text = "SELECT MISSION";
			x = T1AM_COL + (T1AM_COLINC * 0);
			y = T1AM_ROW + (T1AM_ROWINC * 14);
			h = T1AM_BUTTON_H * 1.3;
			onButtonClick = "[true] call T1AM_Fnc_ControlAsset";
			tooltip = "Take control of artillery unit\nand load up a previously saved fire mission.";
		};
		
		class T1AM_ButtonCloseComputer1: T1AM_ButtonCloseComputer{};
		class T1AM_ButtonEscapeMenuDummy1: T1AM_ButtonEscapeMenuDummy{};
		class T1AM_ButtonStart1: T1AM_ButtonStart{};
	};
};



/////////////////////////////////////////////////////////////
// Artillery
/////////////////////////////////////////////////////////////
class T1AM_DialogControl
{
	idd = 47200;
	name= "T1AM_DialogControl";
	movingEnable = false;
	enableSimulation = true;
	onLoad = "";
	
	class Objects
	{
		class T1AM_BackgroundTablet1: T1AM_BackgroundTablet{};
	};
	
	class controls
	{
		class MainBackground: T1AM_RscText
		{
			colorBackground[] = {0.15, 0.15, 0.15, 1};
			idc = -1;
			x = T1AM_X;
			y = T1AM_Y;
			w = T1AM_W;
			h = T1AM_H;
		};
		
		class T1AM_TextAsset: T1AM_RscText
		{
			idc = 47201;
			text = "";
			sizeEx = T1AM_TEXTSIZE;
			x = T1AM_COL + (T1AM_COLINC * 0);
			y = T1AM_ROW + (T1AM_ROWINC * 0);
			w = T1AM_BUTTON_W  + (T1AM_COLINC * 3);
			h = T1AM_BUTTON_H;
		};
		
		class T1AM_TextAssetTube: T1AM_RscText
		{
			idc = 47218;
			text = "UNIT:";
			sizeEx = T1AM_TEXTSIZE;
			x = T1AM_COL + (T1AM_COLINC * 3.25);
			y = T1AM_ROW + (T1AM_ROWINC * 0);
			w = T1AM_BUTTON_W;
			h = T1AM_BUTTON_H;
		};
		
		class T1AM_TextPos: T1AM_RscText
		{
			idc = -1;
			text = "AIMPOINT:";
			sizeEx = T1AM_TEXTSIZE;
			x = T1AM_COL + (T1AM_COLINC * 0);
			y = T1AM_ROW + (T1AM_ROWINC * 1);
			w = (T1AM_BUTTON_W * 0.7);
			h = T1AM_BUTTON_H;
			tooltip = "Coordinates that the artillery unit is using to aim.\nUsed for unguided (non-GPS) munition.\nThe artillery unit might not hit this exact position but somewhere nearby.";
		};
		
		class T1AM_TextPosX: T1AM_RscText
		{
			idc = -1;
			text = "X:";
			sizeEx = T1AM_TEXTSIZE;
			x = T1AM_COL + (T1AM_COLINC * 0);
			y = T1AM_ROW + (T1AM_ROWINC * 2);
			w = (T1AM_BUTTON_W * 0.5);
			h = T1AM_BUTTON_H;
			tooltip = "X coordinate of the aimpoint.";
		};
		
		class T1AM_TextPosY: T1AM_RscText
		{
			idc = -1;
			text = "Y:";
			sizeEx = T1AM_TEXTSIZE;
			x = T1AM_COL + (T1AM_COLINC * 0);
			y = T1AM_ROW + (T1AM_ROWINC * 3);
			w = (T1AM_BUTTON_W * 0.5);
			h = T1AM_BUTTON_H;
			tooltip = "Y coordinate of the aimpoint.";
		};
		
		class T1AM_TextPosZ: T1AM_RscText
		{
			idc = -1;
			text = "Z (ASL):";
			sizeEx = T1AM_TEXTSIZE;
			x = T1AM_COL + (T1AM_COLINC * 0);
			y = T1AM_ROW + (T1AM_ROWINC * 4);
			w = (T1AM_BUTTON_W * 0.6);
			h = T1AM_BUTTON_H;
			tooltip = "Z coordinate of the aimpoint, Above Sea Level.";
		};
		
		class T1AM_TextDistance: T1AM_RscText
		{
			idc = -1;
			text = "DIST:";
			sizeEx = T1AM_TEXTSIZE;
			x = T1AM_COL + (T1AM_COLINC * 0);
			y = T1AM_ROW + (T1AM_ROWINC * 5);
			w = (T1AM_BUTTON_W * 0.5);
			h = T1AM_BUTTON_H;
			tooltip = "Distance from artillery unit to target position.\nWith unguided munition, it's the distance to the aimpoint.\nWith GPS munition, it's the distance to the GPS target position.";
		};
		
		class T1AM_TextCEP: T1AM_RscText
		{
			idc = -1;
			text = "CEP:";
			sizeEx = T1AM_TEXTSIZE;
			x = T1AM_COL + (T1AM_COLINC * 0);
			y = T1AM_ROW + (T1AM_ROWINC * 6);
			w = (T1AM_BUTTON_W * 0.5);
			h = T1AM_BUTTON_H;
			tooltip = "The precision of the shots.\nThe CEP goes up when the distance to the target increases.\nThe CEP can be seen as a radius:\n- 50% of shots will land within this radius.\n- 44% of shots will land at twice the radius.\n- 6% will land at further distances.";
		};
		
		class T1AM_TextGTL: T1AM_RscText
		{
			idc = -1;
			text = "GTL:";
			sizeEx = T1AM_TEXTSIZE;
			x = T1AM_COL + (T1AM_COLINC * 0);
			y = T1AM_ROW + (T1AM_ROWINC * 7);
			w = (T1AM_BUTTON_W * 0.5);
			h = T1AM_BUTTON_H;
			tooltip = "The direction the shots will take.\nIf you draw a line in this direction over the target area,\nyou'll get the Gun Target Line.\nUnadjusted shots tend to impact somewhere along this line.";
		};
		
		class T1AM_TextAdjust: T1AM_RscText
		{
			idc = 47229;
			text = "ADJUST PARAMETERS";
			sizeEx = T1AM_TEXTSIZE;
			x = T1AM_COL + (T1AM_COLINC * 0.25);
			y = T1AM_ROW + (T1AM_ROWINC * 9.3);
			w = (T1AM_BUTTON_W * 1.45);
			h = T1AM_BUTTON_H;
			tooltip = "Call for adjust fire mission.\nUse these options to guide the artillery on target.\nTwo adjust modes are available.\nTurn off if you don't wish to adjust.";
		};
		
		class T1AM_TextAdjust2: T1AM_RscText
		{
			idc = 47238;
			text = "DIRECTION";
			sizeEx = T1AM_TEXTSIZE;
			x = T1AM_COL + (T1AM_COLINC * 0.25);
			y = T1AM_ROW + (T1AM_ROWINC * 11.2);
			w = (T1AM_BUTTON_W * 0.8);
			h = T1AM_BUTTON_H;
			tooltip = "Adjust fire from the point of view of the spotter.\nDefine how much the impact position should move right/left and forwards/backwards.";
		};
		
		class T1AM_TextAdjustLeftRight: T1AM_RscText
		{
			idc = 47230;
			text = "< / >";
			sizeEx = T1AM_TEXTSIZE;
			x = T1AM_COL + (T1AM_COLINC * 0);
			y = T1AM_ROW + (T1AM_ROWINC * 12.2);
			w = (T1AM_BUTTON_W * 1);
			h = T1AM_BUTTON_H;
			tooltip = "How many meters to adjust right/left.\nPositive numbers for right and negative for left.";
		};
		
		class T1AM_TextAdjustAddDrop: T1AM_RscText
		{
			idc = 47231;
			text = "^ / v";
			sizeEx = T1AM_TEXTSIZE;
			x = T1AM_COL + (T1AM_COLINC * 0);
			y = T1AM_ROW + (T1AM_ROWINC * 13.2);
			w = (T1AM_BUTTON_W * 1);
			h = T1AM_BUTTON_H;
			tooltip = "How many meters to add/drop.\nPositive numbers for add and negative for drop.";
		};
		
		class T1AM_TextAdjustSpotter: T1AM_RscText
		{
			idc = 47241;
			text = "SPOTTER POSITION";
			sizeEx = T1AM_TEXTSIZE;
			x = T1AM_COL + (T1AM_COLINC * 2.15);
			y = T1AM_ROW + (T1AM_ROWINC * 11.2);
			w = (T1AM_BUTTON_W * 1.25);
			h = T1AM_BUTTON_H;
			tooltip = "Coordinates of the spotter position.\nThe adjustments will happen from the point of view of this position.";
		};
		
		class T1AM_TextAdjustSpotterX: T1AM_RscText
		{
			idc = 47242;
			text = "X:";
			sizeEx = T1AM_TEXTSIZE;
			x = T1AM_COL + (T1AM_COLINC * 1.9);
			y = T1AM_ROW + (T1AM_ROWINC * 12.2);
			w = (T1AM_BUTTON_W * 1);
			h = T1AM_BUTTON_H;
			tooltip = "X coordinate of spotter position.";
		};
		
		class T1AM_TextAdjustSpotterY: T1AM_RscText
		{
			idc = 47243;
			text = "Y:";
			sizeEx = T1AM_TEXTSIZE;
			x = T1AM_COL + (T1AM_COLINC * 1.9);
			y = T1AM_ROW + (T1AM_ROWINC * 13.2);
			w = (T1AM_BUTTON_W * 1);
			h = T1AM_BUTTON_H;
			tooltip = "Y coordinate of spotter position.";
		};
		
		class T1AM_TextAdjustImpact: T1AM_RscText
		{
			idc = 47247;
			text = "IMPACT POSITION";
			sizeEx = T1AM_TEXTSIZE;
			x = T1AM_COL + (T1AM_COLINC * 0.25);
			y = T1AM_ROW + (T1AM_ROWINC * 11.2);
			w = (T1AM_BUTTON_W * 1.1);
			h = T1AM_BUTTON_H;
			tooltip = "Adjust fire using the impact position.\nInput the position where the round has impacted.";
		};
		
		class T1AM_TextAdjustImpactX: T1AM_RscText
		{
			idc = 47248;
			text = "X:";
			sizeEx = T1AM_TEXTSIZE;
			x = T1AM_COL + (T1AM_COLINC * 0);
			y = T1AM_ROW + (T1AM_ROWINC * 12.2);
			w = (T1AM_BUTTON_W * 1);
			h = T1AM_BUTTON_H;
			tooltip = "X coordinate of impact position.";
		};
		
		class T1AM_TextAdjustImpactY: T1AM_RscText
		{
			idc = 47249;
			text = "Y:";
			sizeEx = T1AM_TEXTSIZE;
			x = T1AM_COL + (T1AM_COLINC * 0);
			y = T1AM_ROW + (T1AM_ROWINC * 13.2);
			w = (T1AM_BUTTON_W * 1);
			h = T1AM_BUTTON_H;
			tooltip = "Y coordinate of impact position.";
		};
		
		class T1AM_TextAdjustImpactRef: T1AM_RscText
		{
			idc = 47257;
			text = "TARGET POSITION";
			sizeEx = T1AM_TEXTSIZE;
			x = T1AM_COL + (T1AM_COLINC * 2.25);
			y = T1AM_ROW + (T1AM_ROWINC * 11.2);
			w = (T1AM_BUTTON_W * 1.15);
			h = T1AM_BUTTON_H;
			tooltip = "Target position coordinates.\nInput the position where you're trying to hit.";
		};
		
		class T1AM_TextAdjustImpactRefX: T1AM_RscText
		{
			idc = 47258;
			text = "X:";
			sizeEx = T1AM_TEXTSIZE;
			x = T1AM_COL + (T1AM_COLINC * 2);
			y = T1AM_ROW + (T1AM_ROWINC * 12.2);
			w = (T1AM_BUTTON_W * 1);
			h = T1AM_BUTTON_H;
			tooltip = "X coordinate of target position.";
		};
		
		class T1AM_TextAdjustImpactRefY: T1AM_RscText
		{
			idc = 47259;
			text = "Y:";
			sizeEx = T1AM_TEXTSIZE;
			x = T1AM_COL + (T1AM_COLINC * 2);
			y = T1AM_ROW + (T1AM_ROWINC * 13.2);
			w = (T1AM_BUTTON_W * 1);
			h = T1AM_BUTTON_H;
			tooltip = "Y coordinate of target position.";
		};
		
		class T1AM_TextTRPPos: T1AM_RscText
		{
			idc = 47260;
			text = "TRP POSITION";
			sizeEx = T1AM_TEXTSIZE;
			x = T1AM_COL + (T1AM_COLINC * 2.05);
			y = T1AM_ROW + (T1AM_ROWINC * 7);
			w = (T1AM_BUTTON_W * 1);
			h = T1AM_BUTTON_H;
			tooltip = "Target Reference Point marker position.\nWhen TRP X and TRP Y are both zero, the TRP marker is created on the Aimpoint.\nThis is done because the artillery unit doesn't know where the rounds have landed.\nYou can manually input the position where you want the marker to be created.\nIt's recommended to input the position where the shots have landed.\nThe marker that is shown on the map is a visual aid for you.\nThe artillery unit might place the actual TRP on a slightly different location.";
		};
		
		class T1AM_TextTRPPosX: T1AM_RscText
		{
			idc = 47261;
			text = "X:";
			sizeEx = T1AM_TEXTSIZE;
			x = T1AM_COL + (T1AM_COLINC * 2);
			y = T1AM_ROW + (T1AM_ROWINC * 8);
			w = (T1AM_BUTTON_W * 1);
			h = T1AM_BUTTON_H;
			tooltip = "X coordinate of TRP position.";
		};
		
		class T1AM_TextTRPPosY: T1AM_RscText
		{
			idc = 47262;
			text = "Y:";
			sizeEx = T1AM_TEXTSIZE;
			x = T1AM_COL + (T1AM_COLINC * 2);
			y = T1AM_ROW + (T1AM_ROWINC * 9);
			w = (T1AM_BUTTON_W * 1);
			h = T1AM_BUTTON_H;
			tooltip = "Y coordinate of TRP position.";
		};
		
		class T1AM_TextPosGPS: T1AM_RscText
		{
			idc = 47232;
			text = "GPS TARGET COORDINATES";
			sizeEx = T1AM_TEXTSIZE;
			x = T1AM_COL + (T1AM_COLINC * 0.25);
			y = T1AM_ROW + (T1AM_ROWINC * 9.3);
			w = (T1AM_BUTTON_W * 1.8);
			h = T1AM_BUTTON_H;
			tooltip = "Coordinates for GPS guided munitions.\nGPS guided munitions will hit this position very accurately.";
		};
		
		class T1AM_TextPosXGPS: T1AM_RscText
		{
			idc = 47226;
			text = "X:";
			sizeEx = T1AM_TEXTSIZE;
			x = T1AM_COL + (T1AM_COLINC * 0);
			y = T1AM_ROW + (T1AM_ROWINC * 10.2);
			w = (T1AM_BUTTON_W * 0.5);
			h = T1AM_BUTTON_H;
			tooltip = "X coordinate of GPS position.";
		};
		
		class T1AM_TextPosYGPS: T1AM_RscText
		{
			idc = 47227;
			text = "Y:";
			sizeEx = T1AM_TEXTSIZE;
			x = T1AM_COL + (T1AM_COLINC * 0);
			y = T1AM_ROW + (T1AM_ROWINC * 11.2);
			w = (T1AM_BUTTON_W * 0.5);
			h = T1AM_BUTTON_H;
			tooltip = "Y coordinate of GPS position.";
		};
		
		class T1AM_TextAdjustElevGPS: T1AM_RscText
		{
			idc = 47228;
			text = "Z (AGL):";
			sizeEx = T1AM_TEXTSIZE;
			x = T1AM_COL + (T1AM_COLINC * 0);
			y = T1AM_ROW + (T1AM_ROWINC * 12.2);
			w = (T1AM_BUTTON_W * 1);
			h = T1AM_BUTTON_H;
			tooltip = "Height for GPS position, Above Ground Level.";
		};
		
		class T1AM_TextRemarks: T1AM_RscText
		{
			idc = 47266;
			text = "REMARKS:";
			sizeEx = T1AM_TEXTSIZE;
			x = T1AM_COL + (T1AM_COLINC * 3.7);
			y = T1AM_ROW + (T1AM_ROWINC * 9);
			w = (T1AM_BUTTON_W * 1);
			h = T1AM_BUTTON_H;
			tooltip = "A brief remark (optional).\nIt will be shown on the mission selection screen.\nIf you intend to load the mission at a later time,\nyou can use this to more easily identify the mission in the missions list.\nA maximum of 15 characters can be used.";
		};
		
		class T1AM_TextRounds: T1AM_RscText
		{
			idc = 47252;
			text = "ROUNDS:";
			sizeEx = T1AM_TEXTSIZE;
			x = T1AM_COL + (T1AM_COLINC * 3.7);
			y = T1AM_ROW + (T1AM_ROWINC * 7);
			w = (T1AM_BUTTON_W * 0.6);
			h = T1AM_BUTTON_H;
			tooltip = "How many salvoes to fire.\nEach unit will fire this amount of rounds.";
		};
		
		class T1AM_TextMissionParameters: T1AM_RscText
		{
			idc = -1;
			text = "MISSION";
			sizeEx = T1AM_TEXTSIZE;
			x = T1AM_COL + (T1AM_COLINC * 5);
			y = T1AM_ROW + (T1AM_ROWINC * 1.1);
			w = T1AM_BUTTON_W;
			h = T1AM_BUTTON_H;
			style = 2;
			tooltip = "Spotting mission will fire a single round.\nFire For Effect will fire in salvoes.\nPlotting will save a mission that can be loaded from the start screen.\nAdjusting fire before plotting will save the adjustments.\nPlotting will also create a Target Reference Point.\nA TRP will allow for quicker reaction times for all nearby missions.";
		};
		
		class T1AM_TextAngleParameters: T1AM_RscText
		{
			idc = -1;
			text = "ANGLE";
			sizeEx = T1AM_TEXTSIZE;
			x = T1AM_COL + (T1AM_COLINC * 6);
			y = T1AM_ROW + (T1AM_ROWINC * 1.1);
			w = T1AM_BUTTON_W;
			h = T1AM_BUTTON_H;
			style = 2;
			tooltip = "Angle at which the artillery unit will fire.\nHigh angle will avoid obstacles but has a long flight time and is less accurate.\nDPICM often works best with a high angle.\nLow angle has a low flight time and is more accurate but might hit an obstacle.";
		};
		
		class T1AM_TextAirburstParameters: T1AM_RscText
		{
			idc = -1;
			text = "FUZE";
			sizeEx = T1AM_TEXTSIZE;
			x = T1AM_COL + (T1AM_COLINC * 5);
			y = T1AM_ROW + (T1AM_ROWINC * 5.1);
			w = T1AM_BUTTON_W;
			h = T1AM_BUTTON_H;
			style = 2;
			tooltip = "Changes how the round detonates.\nImpact will detonate on impact.\nImpact is useful against hard targets, like vehicles and buildings.\nAirburst will detonate in the air, moments before impact.\nAirburst is useful against infantry.";
		};
		
		class T1AM_TextHeightParameters: T1AM_RscText
		{
			idc = 47251;
			text = "HEIGHT";
			sizeEx = T1AM_TEXTSIZE;
			x = T1AM_COL + (T1AM_COLINC * 6);
			y = T1AM_ROW + (T1AM_ROWINC * 5.1);
			w = T1AM_BUTTON_W;
			h = T1AM_BUTTON_H;
			style = 2;
			tooltip = "Height of airburst.\nLow: 0.9\nMedium: 9\nHigh: 18";
		};
		
		class T1AM_TextSheafParameters: T1AM_RscText
		{
			idc = 47253;
			text = "SHEAF PARAMETERS";
			sizeEx = T1AM_TEXTSIZE;
			x = T1AM_COL + (T1AM_COLINC * 5);
			y = T1AM_ROW + (T1AM_ROWINC * 10.3);
			w = (T1AM_BUTTON_W * 1.4);
			h = T1AM_BUTTON_H;
			tooltip = "Spread of shots on the target area.\nIt gives you control over where the rounds will land.";
		};
		
		class T1AM_TextSheafSizeX: T1AM_RscText
		{
			idc = 47233;
			text = "X:";
			sizeEx = T1AM_TEXTSIZE;
			x = T1AM_COL + (T1AM_COLINC * 5);
			y = T1AM_ROW + (T1AM_ROWINC * 11.2);
			w = (T1AM_BUTTON_W * 1);
			h = T1AM_BUTTON_H;
			style = 1;
			tooltip = "The width radius of the sheaf.";
		};
		
		class T1AM_TextSheafSizeY: T1AM_RscText
		{
			idc = 47234;
			text = "Y:";
			sizeEx = T1AM_TEXTSIZE;
			x = T1AM_COL + (T1AM_COLINC * 5);
			y = T1AM_ROW + (T1AM_ROWINC * 12.2);
			w = (T1AM_BUTTON_W * 1);
			h = T1AM_BUTTON_H;
			style = 1;
			tooltip = "The length radius of the sheaf.";
		};
		
		class T1AM_TextSheafDir: T1AM_RscText
		{
			idc = 47235;
			text = "DIR:";
			sizeEx = T1AM_TEXTSIZE;
			x = T1AM_COL + (T1AM_COLINC * 5);
			y = T1AM_ROW + (T1AM_ROWINC * 13.2);
			w = (T1AM_BUTTON_W * 1);
			h = T1AM_BUTTON_H;
			style = 1;
			tooltip = "The starting direction of the sheaf from\nwhich the X, Y and DISTANCE are calculated.";
		};
		
		class T1AM_TextSheafDist: T1AM_RscText
		{
			idc = 47236;
			text = "DIST:";
			sizeEx = T1AM_TEXTSIZE;
			x = T1AM_COL + (T1AM_COLINC * 5);
			y = T1AM_ROW + (T1AM_ROWINC * 12.2);
			w = (T1AM_BUTTON_W * 1);
			h = T1AM_BUTTON_H;
			style = 1;
			tooltip = "The length of the sheaf.";
		};
		
		
		
		class T1AM_ButtonTubePrevious: T1AM_ActiveText
		{
			idc = -1;
			text = "<<";
			action = "[""PREVIOUS""] call T1AM_Fnc_ChangeTube";
			x = T1AM_COL + (T1AM_COLINC * 3);
			y = T1AM_ROW + (T1AM_ROWINC * 0);
			w = (T1AM_BUTTON_W * 0.5);
			h = T1AM_BUTTON_H;
			colorDisabled[] = {1,1,1,0.25};
			tooltip = "Previous unit";
		};

		class T1AM_ButtonTubeNext: T1AM_ActiveText
		{
			idc = -1;
			text = ">>";
			action = "[""NEXT""] call T1AM_Fnc_ChangeTube";
			x = T1AM_COL + (T1AM_COLINC * 3.9);
			y = T1AM_ROW + (T1AM_ROWINC * 0);
			w = (T1AM_BUTTON_W * 0.5);
			h = T1AM_BUTTON_H;
			colorDisabled[] = {1,1,1,0.25};
			tooltip = "Next unit";
		};
		
		class T1AM_EditX: T1AM_RscText
		{
			idc = 47202;
			x = T1AM_COL + (T1AM_COLINC * 0.5);
			y = T1AM_ROW + (T1AM_ROWINC * 2);
			w = T1AM_BUTTON_W;
			h = T1AM_BUTTON_H;
			text = "";
		};

		class T1AM_EditY: T1AM_RscText
		{
			idc = 47203;
			x = T1AM_COL + (T1AM_COLINC * 0.5);
			y = T1AM_ROW + (T1AM_ROWINC * 3);
			w = T1AM_BUTTON_W;
			h = T1AM_BUTTON_H;
			text = "";
		};
		
		class T1AM_EditElev: T1AM_RscText
		{
			idc = 47219;
			text = "";
			x = T1AM_COL + (T1AM_COLINC * 0.5);
			y = T1AM_ROW + (T1AM_ROWINC * 4);
			w = T1AM_BUTTON_W;
			h = T1AM_BUTTON_H;
		};

		class T1AM_EditDistance: T1AM_RscText
		{
			idc = 47216;
			text = "";
			x = T1AM_COL + (T1AM_COLINC * 0.5);
			y = T1AM_ROW + (T1AM_ROWINC * 5);
			w = T1AM_BUTTON_W;
			h = T1AM_BUTTON_H;
		};

		class T1AM_EditCEP: T1AM_RscText
		{
			idc = 47220;
			text = "";
			x = T1AM_COL + (T1AM_COLINC * 0.5);
			y = T1AM_ROW + (T1AM_ROWINC * 6);
			w = T1AM_BUTTON_W * 1.4;
			h = T1AM_BUTTON_H;
		};
		
		class T1AM_EditGTL: T1AM_RscText
		{
			idc = 47217;
			text = "";
			x = T1AM_COL + (T1AM_COLINC * 0.5);
			y = T1AM_ROW + (T1AM_ROWINC * 7);
			w = T1AM_BUTTON_W;
			h = T1AM_BUTTON_H;
		};
		
		class T1AM_EditAdjustLR: T1AM_RscEdit
		{
			idc = 47204;
			x = T1AM_COL + (T1AM_COLINC * 0.5);
			y = T1AM_ROW + (T1AM_ROWINC * 12.2);
			w = T1AM_BUTTON_W;
			h = T1AM_BUTTON_H;
			text = "0";
			onKeyUp = "_this pushback 0; _this call T1AM_Fnc_EditNumberEvent";
		};
		
		class T1AM_EditAdjustAddDrop: T1AM_RscEdit
		{
			idc = 47205;
			x = T1AM_COL + (T1AM_COLINC * 0.5);
			y = T1AM_ROW + (T1AM_ROWINC * 13.2);
			w = T1AM_BUTTON_W;
			h = T1AM_BUTTON_H;
			text = "0";
			onKeyUp = "_this pushback 1; _this call T1AM_Fnc_EditNumberEvent";
		};
		
		class T1AM_EditAdjustCheckbox: T1AM_RscCheckbox
		{
			idc = 47237;
			x = T1AM_COL + (T1AM_COLINC * 0);
			y = T1AM_ROW + (T1AM_ROWINC * 10.2);
			w = 0.28;
			h = 0.05;
			rows = 1;
			columns = 3;
			strings[] = {"OFF","SPOTTER","IMPACT"};
			checked_strings[] = {};
			values[] = {0,0,0};
			onToolBoxSelChanged = "_this spawn T1AM_Fnc_EditAdjustCheckboxEvent";
		};
		
		class T1AM_EditAdjustSpotterPosX: T1AM_RscEdit
		{
			idc = 47239;
			x = T1AM_COL + (T1AM_COLINC * 2.4);
			y = T1AM_ROW + (T1AM_ROWINC * 12.2);
			w = T1AM_BUTTON_W;
			h = T1AM_BUTTON_H;
			text = "0";
			onKeyUp = "_this pushback 0; _this call T1AM_Fnc_EditAdjustSpotterPosEvent";
		};
		
		class T1AM_EditAdjustSpotterPosY: T1AM_RscEdit
		{
			idc = 47240;
			x = T1AM_COL + (T1AM_COLINC * 2.4);
			y = T1AM_ROW + (T1AM_ROWINC * 13.2);
			w = T1AM_BUTTON_W;
			h = T1AM_BUTTON_H;
			text = "0";
			onKeyUp = "_this pushback 1; _this call T1AM_Fnc_EditAdjustSpotterPosEvent";
		};
		
		class T1AM_ButtonAdjustSpotterMapclick: T1AM_RscButtonMenu
		{
			idc = 47244;
			x = T1AM_COL + (T1AM_COLINC * 3.4);
			y = T1AM_ROW + (T1AM_ROWINC * 12.8);
			text = "M";
			w = (T1AM_BUTTON_W * 0.21);
			h = T1AM_BUTTON_H * 0.69;
			onButtonClick = "[] spawn {[0] call T1AM_Fnc_CloseDisplays; sleep 0.2; call T1AM_Fnc_ButtonAdjustSpotterMapclickEvent}";
			tooltip = "Use map click to input spotter position coordinates.";
		};
		
		class T1AM_EditAdjustImpactPosX: T1AM_RscEdit
		{
			idc = 47245;
			x = T1AM_COL + (T1AM_COLINC * 0.5);
			y = T1AM_ROW + (T1AM_ROWINC * 12.2);
			w = T1AM_BUTTON_W;
			h = T1AM_BUTTON_H;
			text = "0";
			onKeyUp = "_this pushback 0; _this call T1AM_Fnc_EditAdjustImpactPosEvent";
		};
		
		class T1AM_EditAdjustImpactPosY: T1AM_RscEdit
		{
			idc = 47246;
			x = T1AM_COL + (T1AM_COLINC * 0.5);
			y = T1AM_ROW + (T1AM_ROWINC * 13.2);
			w = T1AM_BUTTON_W;
			h = T1AM_BUTTON_H;
			text = "0";
			onKeyUp = "_this pushback 1; _this call T1AM_Fnc_EditAdjustImpactPosEvent";
		};
		
		class T1AM_ButtonAdjustImpactMapclick: T1AM_RscButtonMenu
		{
			idc = 47250;
			x = T1AM_COL + (T1AM_COLINC * 1.5);
			y = T1AM_ROW + (T1AM_ROWINC * 12.8);
			text = "M";
			w = (T1AM_BUTTON_W * 0.21);
			h = T1AM_BUTTON_H * 0.69;
			onButtonClick = "[] spawn {[0] call T1AM_Fnc_CloseDisplays; sleep 0.2; call T1AM_Fnc_ButtonAdjustImpactMapclickEvent}";
			tooltip = "Use map click to input impact position coordinates.";
		};
		
		class T1AM_EditAdjustImpactRefPosX: T1AM_RscEdit
		{
			idc = 47254;
			x = T1AM_COL + (T1AM_COLINC * 2.5);
			y = T1AM_ROW + (T1AM_ROWINC * 12.2);
			w = T1AM_BUTTON_W;
			h = T1AM_BUTTON_H;
			text = "0";
			onKeyUp = "_this pushback 0; _this call T1AM_Fnc_EditAdjustImpactRefPosEvent";
		};
		
		class T1AM_EditAdjustImpactRefPosY: T1AM_RscEdit
		{
			idc = 47255;
			x = T1AM_COL + (T1AM_COLINC * 2.5);
			y = T1AM_ROW + (T1AM_ROWINC * 13.2);
			w = T1AM_BUTTON_W;
			h = T1AM_BUTTON_H;
			text = "0";
			onKeyUp = "_this pushback 1; _this call T1AM_Fnc_EditAdjustImpactRefPosEvent";
		};
		
		class T1AM_ButtonAdjustImpactRefMapclick: T1AM_RscButtonMenu
		{
			idc = 47256;
			x = T1AM_COL + (T1AM_COLINC * 3.5);
			y = T1AM_ROW + (T1AM_ROWINC * 12.8);
			text = "M";
			w = (T1AM_BUTTON_W * 0.21);
			h = T1AM_BUTTON_H * 0.69;
			onButtonClick = "[] spawn {[0] call T1AM_Fnc_CloseDisplays; sleep 0.2; call T1AM_Fnc_ButtonAdjustImpactRefMapclickEvent}";
			tooltip = "Use map click to input target position coordinates.";
		};
		
		class T1AM_EditTRPPosX: T1AM_RscEdit
		{
			idc = 47263;
			x = T1AM_COL + (T1AM_COLINC * 2.4);
			y = T1AM_ROW + (T1AM_ROWINC * 8);
			w = T1AM_BUTTON_W;
			h = T1AM_BUTTON_H;
			text = "0";
			onKeyUp = "_this pushback 0; _this call T1AM_Fnc_EditTRPPosEvent";
		};
		
		class T1AM_EditTRPPosY: T1AM_RscEdit
		{
			idc = 47264;
			x = T1AM_COL + (T1AM_COLINC * 2.4);
			y = T1AM_ROW + (T1AM_ROWINC * 9);
			w = T1AM_BUTTON_W;
			h = T1AM_BUTTON_H;
			text = "0";
			onKeyUp = "_this pushback 1; _this call T1AM_Fnc_EditTRPPosEvent";
		};
		
		class T1AM_ButtonTRPMapclick: T1AM_RscButtonMenu
		{
			idc = 47265;
			x = T1AM_COL + (T1AM_COLINC * 3.4);
			y = T1AM_ROW + (T1AM_ROWINC * 8.6);
			text = "M";
			w = (T1AM_BUTTON_W * 0.21);
			h = T1AM_BUTTON_H * 0.69;
			onButtonClick = "[] spawn {[0] call T1AM_Fnc_CloseDisplays; sleep 0.2; call T1AM_Fnc_ButtonTRPMapclickEvent}";
			tooltip = "Use map click to input TRP coordinates.";
		};
		
		class T1AM_EditAdjustXGPS: T1AM_RscEdit
		{
			idc = 47222;
			x = T1AM_COL + (T1AM_COLINC * 1);
			y = T1AM_ROW + (T1AM_ROWINC * 10.2);
			w = T1AM_BUTTON_W;
			h = T1AM_BUTTON_H;
			text = "0";
			onKeyUp = "_this pushback 0; _this call T1AM_Fnc_EditAdjustGPSEvent";
		};
		
		class T1AM_EditAdjustYGPS: T1AM_RscEdit
		{
			idc = 47223;
			x = T1AM_COL + (T1AM_COLINC * 1);
			y = T1AM_ROW + (T1AM_ROWINC * 11.2);
			w = T1AM_BUTTON_W;
			h = T1AM_BUTTON_H;
			text = "0";
			onKeyUp = "_this pushback 1; _this call T1AM_Fnc_EditAdjustGPSEvent";
		};
		
		class T1AM_EditAdjustElevGPS: T1AM_RscEdit
		{
			idc = 47221;
			x = T1AM_COL + (T1AM_COLINC * 1);
			y = T1AM_ROW + (T1AM_ROWINC * 12.2);
			w = T1AM_BUTTON_W;
			h = T1AM_BUTTON_H;
			text = "0";
			onKeyUp = "_this pushback 2; _this call T1AM_Fnc_EditAdjustGPSEvent";
		};
		
		class T1AM_ListWarheadType: T1AM_RscListBox 
		{
			idc = 47206;
			text = "";
			x = T1AM_COL + (T1AM_COLINC * 2);
			y = T1AM_ROW + (T1AM_ROWINC * 1);
			w = T1AM_BUTTON_W + (T1AM_COLINC * 2);
			h = (T1AM_BUTTON_H * 7);
			onLBSelChanged = "_this call T1AM_Fnc_ListWarheadTypeEvent";
		};
		
		class T1AM_EditRemarks: T1AM_RscEdit
		{
			idc = 47267;
			x = T1AM_COL + (T1AM_COLINC * 4.5);
			y = T1AM_ROW + (T1AM_ROWINC * 9);
			w = (T1AM_BUTTON_W * 1.2);
			h = T1AM_BUTTON_H;
			text = "";
			onKeyUp = "_this call T1AM_Fnc_EditRemarksEvent";
		};
		
		class T1AM_EditRounds: T1AM_RscEdit
		{
			idc = 47207;
			x = T1AM_COL + (T1AM_COLINC * 4.4);
			y = T1AM_ROW + (T1AM_ROWINC * 7);
			w = (T1AM_BUTTON_W / 2);
			h = T1AM_BUTTON_H;
			text = "1";
			onKeyUp = "_this pushback 2; _this call T1AM_Fnc_EditNumberEvent";
		};
		
		class T1AM_ListAngle: T1AM_RscListBox 
		{
			idc = 47209;
			text = "";
			x = T1AM_COL + (T1AM_COLINC * 6);
			y = T1AM_ROW + (T1AM_ROWINC * 2);
			w = T1AM_BUTTON_W;
			h = (T1AM_BUTTON_H * 3);
			onLBSelChanged = "_this call T1AM_Fnc_ListAngleEvent";
		};
		
		class T1AM_ListMissionType: T1AM_RscListBox 
		{
			idc = 47208;
			text = "";
			x = T1AM_COL + (T1AM_COLINC * 5);
			y = T1AM_ROW + (T1AM_ROWINC * 2);
			w = T1AM_BUTTON_W;
			h = (T1AM_BUTTON_H * 3);
			onLBSelChanged = "_this call T1AM_Fnc_ListMissionTypeEvent";
		};
		
		class T1AM_ButtonTransmit: T1AM_RscButtonMenu
		{
			idc = -1;
			text = "TRANSMIT";
			x = T1AM_COL + (T1AM_COLINC * 0);
			y = T1AM_ROW + (T1AM_ROWINC * 15);
			w = (T1AM_BUTTON_W * 1.5);
			onButtonClick = "call T1AM_Fnc_Transmit";
			tooltip = "Call in fire mission.";
		};
		
		class T1AM_ButtonCheckFire: T1AM_RscButtonMenu
		{
			idc = -1;
			text = "CHECK FIRE";
			x = T1AM_COL + (T1AM_COLINC * 1.83);
			y = T1AM_ROW + (T1AM_ROWINC * 15);
			w = (T1AM_BUTTON_W * 1.5);
			onButtonClick = "call T1AM_Fnc_CheckFire_Player;";
			tooltip = "Tell the artillery unit to cease fire immediately.";
		};
		
		class T1AM_ListSheaf: T1AM_RscListBox 
		{
			idc = 47211;
			text = "";
			x = T1AM_COL + (T1AM_COLINC * 4.5);
			y = T1AM_ROW + (T1AM_ROWINC * 11.2);
			w = T1AM_BUTTON_W;
			h = (T1AM_BUTTON_H * 3.5);
			onLBSelChanged = "_this call T1AM_Fnc_ListSheafEvent";
		};
		
		class T1AM_EditSheafSizeX: T1AM_RscEdit
		{
			idc = 47213;
			x = T1AM_COL + (T1AM_COLINC * 6);
			y = T1AM_ROW + (T1AM_ROWINC * 11.2);
			w = T1AM_BUTTON_W;
			h = T1AM_BUTTON_H;
			text = "100";
			onKeyUp = "_this pushback 3; _this call T1AM_Fnc_EditNumberEvent";
		};
		
		class T1AM_EditSheafSizeY: T1AM_RscEdit
		{
			idc = 47214;
			x = T1AM_COL + (T1AM_COLINC * 6);
			y = T1AM_ROW + (T1AM_ROWINC * 12.2);
			w = T1AM_BUTTON_W;
			h = T1AM_BUTTON_H;
			text = "100";
			onKeyUp = "_this pushback 4; _this call T1AM_Fnc_EditNumberEvent";
		};
		
		class T1AM_EditSheafDir: T1AM_RscEdit
		{
			idc = 47224;
			x = T1AM_COL + (T1AM_COLINC * 6);
			y = T1AM_ROW + (T1AM_ROWINC * 13.2);
			w = T1AM_BUTTON_W;
			h = T1AM_BUTTON_H;
			text = "360";
			onKeyUp = "_this pushback 5; _this call T1AM_Fnc_EditNumberEvent";
		};
		
		class T1AM_EditSheafDist: T1AM_RscEdit
		{
			idc = 47225;
			x = T1AM_COL + (T1AM_COLINC * 6);
			y = T1AM_ROW + (T1AM_ROWINC * 12.2);
			w = T1AM_BUTTON_W;
			h = T1AM_BUTTON_H;
			text = "100";
			onKeyUp = "_this pushback 6; _this call T1AM_Fnc_EditNumberEvent";
		};
		
		class T1AM_ListFuse: T1AM_RscListBox
		{
			idc = 47212;
			text = "";
			x = T1AM_COL + (T1AM_COLINC * 5);
			y = T1AM_ROW + (T1AM_ROWINC * 6);
			w = T1AM_BUTTON_W;
			h = (T1AM_BUTTON_H * 3);
			onLBSelChanged = "call T1AM_Fnc_ListFuseEvent";
		};
		
		class T1AM_ListAirburstHeight: T1AM_RscListBox 
		{
			idc = 47215;
			text = "";
			x = T1AM_COL + (T1AM_COLINC * 6);
			y = T1AM_ROW + (T1AM_ROWINC * 6);
			w = T1AM_BUTTON_W;
			h = (T1AM_BUTTON_H * 3);
			onLBSelChanged = "_this spawn {params[""_control"",""_selectedIndex""]; T1AM_LastAirburstHeight = _control lbData _selectedIndex}";
		};
		
		class T1AM_ButtonControlAssets: T1AM_RscButtonMenu
		{
			idc = -1;
			text = "ASSETS";
			x = T1AM_COL + (T1AM_COLINC * 5.5);
			y = T1AM_ROW + (T1AM_ROWINC * 15);
			w = T1AM_BUTTON_W * 1.5;
			onButtonClick = "T1AM_LastDialog = ""ASSETS""; [0, [], 0] spawn T1AM_Fnc_LoadingScreen";
			tooltip = "Go back to the start screen, asset selection,\nwithout relinquishing control of the artillery unit.";
		};
		
		class T1AM_ButtonControlEndMission: T1AM_RscButtonMenu
		{
			idc = -1;
			text = "END MISSION";
			x = T1AM_COL + (T1AM_COLINC * 3.66);
			y = T1AM_ROW + (T1AM_ROWINC * 15);
			w = T1AM_BUTTON_W * 1.5;
			onButtonClick = "[true] call T1AM_Fnc_EndMission";
			tooltip = "End the mission and relinquish control of the artillery unit.";
		};
		
		class T1AM_ButtonCloseComputer1: T1AM_ButtonCloseComputer{};
		class T1AM_ButtonEscapeMenuDummy1: T1AM_ButtonEscapeMenuDummy{};
		class T1AM_ButtonStart1: T1AM_ButtonStart{};
	};
};



/////////////////////////////////////////////////////////////
// Loading Screen
/////////////////////////////////////////////////////////////
class T1AM_DialogLoading
{
	idd = 47300;
	name= "T1AM_DialogLoading";
	movingEnable = false;
	enableSimulation = true;
	onLoad = "";
	
	class Objects
	{
		class T1AM_BackgroundTablet1: T1AM_BackgroundTablet{};
	};
	
	class controls
	{
		class MainBackground: T1AM_RscText
		{
			colorBackground[] = {0.15, 0.15, 0.15, 1};
			idc = -1;
			x = T1AM_X;
			y = T1AM_Y;
			w = T1AM_W;
			h = T1AM_H;
		};
		
		class T1AM_TextLoading: T1AM_RscText
		{
			idc = 47301;
			text = "LOADING";
			sizeEx = T1AM_TEXTSIZE;
			x = 0.45;
			y = 0.48;
			w = T1AM_BUTTON_W  + (T1AM_COLINC * 2);
			h = T1AM_BUTTON_H;
			style = 0;
		};
		
		class T1AM_ButtonCloseComputer1: T1AM_ButtonCloseComputer{};
		class T1AM_ButtonEscapeMenuDummy1: T1AM_ButtonEscapeMenuDummy{};
		class T1AM_ButtonStart1: T1AM_ButtonStart{};
	};
};



/////////////////////////////////////////////////////////////
// Aimpoint input
/////////////////////////////////////////////////////////////
class T1AM_DialogAimpoint
{
	idd = 47400;
	name= "T1AM_DialogAimpoint";
	movingEnable = false;
	enableSimulation = true;
	onLoad = "";
	
	class Objects
	{
		class T1AM_BackgroundTablet1: T1AM_BackgroundTablet{};
	};
	
	class controls
	{
		class MainBackground: T1AM_RscText
		{
			colorBackground[] = {0.15, 0.15, 0.15, 1};
			idc = -1;
			x = T1AM_X;
			y = T1AM_Y;
			w = T1AM_W;
			h = T1AM_H;
		};
		
		class T1AM_TextAimpoint: T1AM_RscText
		{
			idc = 47401;
			text = "INPUT AIMPOINT (10-DIGIT GRID)";
			sizeEx = T1AM_TEXTSIZE;
			x = T1AM_COL + (T1AM_COLINC * 2.8);
			y = T1AM_ROW + (T1AM_ROWINC * 3);
			w = (T1AM_BUTTON_W * 1.95);
			h = T1AM_BUTTON_H;
			tooltip = "Coordinates of the target position.";
		};
		
		class T1AM_TextPosAimpointX: T1AM_RscText
		{
			idc = -1;
			text = "X:";
			sizeEx = T1AM_TEXTSIZE;
			x = T1AM_COL + (T1AM_COLINC * 2.5);
			y = T1AM_ROW + (T1AM_ROWINC * 4);
			w = (T1AM_BUTTON_W * 0.5);
			h = T1AM_BUTTON_H;
			tooltip = "X coordinate of target position.";
		};
		
		class T1AM_TextPosAimpointY: T1AM_RscText
		{
			idc = -1;
			text = "Y:";
			sizeEx = T1AM_TEXTSIZE;
			x = T1AM_COL + (T1AM_COLINC * 2.5);
			y = T1AM_ROW + (T1AM_ROWINC * 5);
			w = (T1AM_BUTTON_W * 0.5);
			h = T1AM_BUTTON_H;
			tooltip = "Y coordinate of target position.";
		};
		
		
		
		class T1AM_EditAimpointX: T1AM_RscEdit
		{
			idc = 47402;
			x = T1AM_COL + (T1AM_COLINC * 3);
			y = T1AM_ROW + (T1AM_ROWINC * 4);
			w = T1AM_BUTTON_W;
			h = T1AM_BUTTON_H;
			text = "";
			onKeyUp = "_this pushback 0; _this call T1AM_Fnc_EditAimpointEvent";
		};
		
		class T1AM_EditAimpointY: T1AM_RscEdit
		{
			idc = 47403;
			x = T1AM_COL + (T1AM_COLINC * 3);
			y = T1AM_ROW + (T1AM_ROWINC * 5);
			w = T1AM_BUTTON_W;
			h = T1AM_BUTTON_H;
			text = "";
			onKeyUp = "_this pushback 1; _this call T1AM_Fnc_EditAimpointEvent";
		};
		
		class T1AM_ButtonInputAimpoint: T1AM_RscButtonMenu
		{
			idc = -1;
			text = "INPUT";
			x = T1AM_COL + (T1AM_COLINC * 3);
			y = T1AM_ROW + (T1AM_ROWINC * 6);
			onButtonClick = "call T1AM_Fnc_InputAimpoint";
			tooltip = "Apply coordinates.";
		};
		
		class T1AM_ButtonInputAimpointMapclick: T1AM_RscButtonMenu
		{
			idc = 47404;
			x = T1AM_COL + (T1AM_COLINC * 4);
			y = T1AM_ROW + (T1AM_ROWINC * 4.6);
			text = "M";
			w = (T1AM_BUTTON_W * 0.21);
			h = T1AM_BUTTON_H * 0.69;
			onButtonClick = "[] spawn {[0] call T1AM_Fnc_CloseDisplays; sleep 0.2; call T1AM_Fnc_ButtonInputAimpointMapclickEvent}";
			tooltip = "Use map click to input target position coordinates.";
		};
		
		class T1AM_ButtonAimpointAssets: T1AM_RscButtonMenu
		{
			idc = -1;
			text = "ASSETS";
			x = T1AM_COL + (T1AM_COLINC * 3);
			y = T1AM_ROW + (T1AM_ROWINC * 8);
			onButtonClick = "T1AM_LastDialog = ""ASSETS""; [0, [], 0] spawn T1AM_Fnc_LoadingScreen";
			tooltip = "Go back to the start screen, asset selection,\nwithout relinquishing control of the artillery unit.";
		};
		
		class T1AM_ButtonAimpointHelp: T1AM_RscButtonMenu
		{
			idc = -1;
			text = "HELP";
			x = T1AM_COL + (T1AM_COLINC * 4.4);
			y = T1AM_ROW + (T1AM_ROWINC * 8);
			w = (T1AM_BUTTON_W * 0.5);
			onButtonClick = "[2,"""", 15] spawn T1AM_Fnc_ShowMessage";
			tooltip = "Learn more about the coordinates system.";
		};
		
		class T1AM_ButtonCloseComputer1: T1AM_ButtonCloseComputer{};
		class T1AM_ButtonEscapeMenuDummy1: T1AM_ButtonEscapeMenuDummy{};
		class T1AM_ButtonStart1: T1AM_ButtonStart{};
	};
};



/////////////////////////////////////////////////////////////
// Error/Message Screen
/////////////////////////////////////////////////////////////
class T1AM_DialogMessage
{
	idd = 47500;
	name= "T1AM_DialogMessage";
	movingEnable = false;
	enableSimulation = true;
	onLoad = "";
	
	class Objects
	{
		class T1AM_BackgroundTablet1: T1AM_BackgroundTablet{};
	};
	
	class controls
	{
		class MainBackground: T1AM_RscText
		{
			colorBackground[] = {0.15, 0.15, 0.15, 1};
			idc = -1;
			x = T1AM_X;
			y = T1AM_Y;
			w = T1AM_W;
			h = T1AM_H;
		};
		
		class T1AM_TextError: T1AM_RscText
		{
			idc = 47501;
			text = "";
			sizeEx = T1AM_TEXTSIZE;
			x = T1AM_COL + (T1AM_COLINC * 0);
			y = 0.475;
			w = T1AM_BUTTON_W  + (T1AM_COLINC * 6);
			h = T1AM_BUTTON_H + (T1AM_ROWINC * 2);
			style = 16 + 2 + 512;
		};
		
		class T1AM_TextMessage: T1AM_RscText
		{
			idc = 47502;
			text = "";
			sizeEx = T1AM_TEXTSIZE;
			x = T1AM_COL + (T1AM_COLINC * 1.75);
			y = T1AM_ROW + (T1AM_ROWINC * 0) + 0.01;
			w = T1AM_BUTTON_W  + (T1AM_COLINC * 2.5);
			h = T1AM_BUTTON_H + (T1AM_ROWINC * 15);
			style = 16 + 2 + 512;
		};
		
		class T1AM_ButtonCloseComputer1: T1AM_ButtonCloseComputer{};
		class T1AM_ButtonEscapeMenu1: T1AM_ButtonEscapeMenu{};
		class T1AM_ButtonStart1: T1AM_ButtonStart{};
	};
};