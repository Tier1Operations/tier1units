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
	xBack = 0.5;
	yBack = 0.515;
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
	onButtonClick = "[] spawn {sleep 0.3; [0] call T1AM_Fnc_CloseDisplays}";
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
};

class T1AM_ButtonGoToAssets: T1AM_ButtonCloseComputer
{
	x = 0.75;
	y = 1.095;
	w = 0.042;
	h = 0.058;
	onButtonClick = "T1AM_LastDialog = ""Assets""; [0, [], 0] spawn T1AM_Fnc_LoadingScreen";
	tooltip = "Start";
	tooltipColorText[] = {1,1,1,1};
	tooltipColorBox[] = {1,1,1,1};
	tooltipColorShade[] = {0,0,0,0.65};
};

class T1AM_ButtonEscapeMenu: T1AM_ButtonCloseComputer
{
	x = 0.18;
	y = 1.095;
	w = 0.042;
	h = 0.056;
	onButtonClick = "[] spawn {sleep 0.1; closeDialog 0}";
	tooltip = "Escape";
	tooltipColorText[] = {1,1,1,1};
	tooltipColorBox[] = {1,1,1,1};
	tooltipColorShade[] = {0,0,0,0.65};
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
	
	class Objects
	{
		class T1AM_BackgroundTablet1: T1AM_BackgroundTablet{};
	};
	
	class controls
	{
		class T1AM_ButtonCloseComputer1: T1AM_ButtonCloseComputer{};
		class T1AM_ButtonEscapeMenuDummy1: T1AM_ButtonEscapeMenuDummy{};
		class T1AM_ButtonGoToAssets1: T1AM_ButtonGoToAssets{};
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
			w = T1AM_BUTTON_W  + (T1AM_COLINC * 2);
			h = T1AM_BUTTON_H;
		};
		
		class T1AM_TextMissions: T1AM_RscText
		{
			idc = -1;
			text = "PREVIOUS FFE/PLOT MISSIONS";
			sizeEx = T1AM_TEXTSIZE;
			x = T1AM_COL;
			y = T1AM_ROW + (T1AM_ROWINC * 8);
			w = T1AM_BUTTON_W  + (T1AM_COLINC * 2);
			h = T1AM_BUTTON_H;
		};
		
		
		
		class T1AM_ListAsset: T1AM_RscListBox 
		{
			idc = 47101;
			text = "";
			onLBSelChanged = "";
			x = T1AM_COL;
			y = T1AM_ROW + (T1AM_ROWINC * 1);
			w = T1AM_BUTTON_W + (T1AM_COLINC * 6);
			h = (T1AM_BUTTON_H * 7) - T1AM_SPACE;
		};
		
		class T1AM_ListMissions: T1AM_RscListBox 
		{
			idc = 47102;
			text = "";
			onLBSelChanged = "";
			x = T1AM_COL;
			y = T1AM_ROW + (T1AM_ROWINC * 9);
			w = T1AM_BUTTON_W + (T1AM_COLINC * 6);
			h = (T1AM_BUTTON_H * 6) - T1AM_SPACE;
		};
		
		class T1AM_ButtonControlAsset: T1AM_RscButtonMenu
		{
			idc = -1;
			text = "CONTROL";
			onButtonClick = "[false] call T1AM_Fnc_ControlAsset";
			x = T1AM_COL + (T1AM_COLINC * 0);
			y = T1AM_ROW + (T1AM_ROWINC * 7);
		};
		
		class T1AM_ButtonReleaseAsset: T1AM_RscButtonMenu
		{
			idc = -1;
			text = "RELEASE";
			onButtonClick = "call T1AM_Fnc_ReleaseAsset";
			x = T1AM_COL + (T1AM_COLINC * 1);
			y = T1AM_ROW + (T1AM_ROWINC * 7);
		};
		
		class T1AM_ButtonControlMission: T1AM_RscButtonMenu
		{
			idc = -1;
			text = "SELECT MISSION";
			onButtonClick = "[true] call T1AM_Fnc_ControlAsset";
			x = T1AM_COL + (T1AM_COLINC * 0);
			y = T1AM_ROW + (T1AM_ROWINC * 14);
			h = T1AM_BUTTON_H * 1.3;
		};
		
		class T1AM_ButtonCloseComputer1: T1AM_ButtonCloseComputer{};
		class T1AM_ButtonEscapeMenu1: T1AM_ButtonEscapeMenu{};
		class T1AM_ButtonGoToAssets1: T1AM_ButtonGoToAssets{};
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
			w = T1AM_BUTTON_W  + (T1AM_COLINC * 1);
			h = T1AM_BUTTON_H;
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
		};
		
		class T1AM_TextPosZ: T1AM_RscText
		{
			idc = -1;
			text = "Z:";
			sizeEx = T1AM_TEXTSIZE;
			x = T1AM_COL + (T1AM_COLINC * 0);
			y = T1AM_ROW + (T1AM_ROWINC * 4);
			w = (T1AM_BUTTON_W * 0.5);
			h = T1AM_BUTTON_H;
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
		};
		
		class T1AM_TextAdjust: T1AM_RscText
		{
			idc = -1;
			text = "ADJUST (NEGATIVE FOR LEFT/DOWN)";
			sizeEx = T1AM_TEXTSIZE;
			x = T1AM_COL + (T1AM_COLINC * 0);
			y = T1AM_ROW + (T1AM_ROWINC * 11.5);
			w = T1AM_BUTTON_W  + (T1AM_COLINC * 1.3);
			h = T1AM_BUTTON_H;
		};
		
		class T1AM_TextAdjustLeftRight: T1AM_RscText
		{
			idc = -1;
			text = "< / >";
			sizeEx = T1AM_TEXTSIZE;
			x = T1AM_COL + (T1AM_COLINC * 0);
			y = T1AM_ROW + (T1AM_ROWINC * 12.5);
			w = (T1AM_BUTTON_W * 1);
			h = T1AM_BUTTON_H;
		};
		
		class T1AM_TextAdjustAddDrop: T1AM_RscText
		{
			idc = -1;
			text = "^ / v";
			sizeEx = T1AM_TEXTSIZE;
			x = T1AM_COL + (T1AM_COLINC * 0);
			y = T1AM_ROW + (T1AM_ROWINC * 13.5);
			w = (T1AM_BUTTON_W * 1);
			h = T1AM_BUTTON_H;
		};
		
		class T1AM_TextPosXGPS: T1AM_RscText
		{
			idc = -1;
			text = "GPS X:";
			sizeEx = T1AM_TEXTSIZE;
			x = T1AM_COL + (T1AM_COLINC * 0);
			y = T1AM_ROW + (T1AM_ROWINC * 8);
			w = (T1AM_BUTTON_W * 0.5);
			h = T1AM_BUTTON_H;
		};
		
		class T1AM_TextPosYGPS: T1AM_RscText
		{
			idc = -1;
			text = "GPS Y:";
			sizeEx = T1AM_TEXTSIZE;
			x = T1AM_COL + (T1AM_COLINC * 0);
			y = T1AM_ROW + (T1AM_ROWINC * 9);
			w = (T1AM_BUTTON_W * 0.5);
			h = T1AM_BUTTON_H;
		};
		
		class T1AM_TextAdjustElevGPS: T1AM_RscText
		{
			idc = -1;
			text = "GPS Z (AGL):";
			sizeEx = T1AM_TEXTSIZE;
			x = T1AM_COL + (T1AM_COLINC * 0);
			y = T1AM_ROW + (T1AM_ROWINC * 10);
			w = (T1AM_BUTTON_W * 1);
			h = T1AM_BUTTON_H;
		};
		
		class T1AM_TextRounds: T1AM_RscText
		{
			idc = -1;
			text = "RNDS:";
			sizeEx = T1AM_TEXTSIZE;
			x = T1AM_COL + (T1AM_COLINC * 2);
			y = T1AM_ROW + (T1AM_ROWINC * 8);
			w = T1AM_BUTTON_W / 2;
			h = T1AM_BUTTON_H;
		};
		
		class T1AM_TextSheafParameters: T1AM_RscText
		{
			idc = -1;
			text = "SHEAF PARAMETERS";
			sizeEx = T1AM_TEXTSIZE;
			x = T1AM_COL + (T1AM_COLINC * 5.2);
			y = T1AM_ROW + (T1AM_ROWINC * 4);
			w = (T1AM_BUTTON_W * 3);
			h = T1AM_BUTTON_H;
		};
		
		class T1AM_TextSheafSizeX: T1AM_RscText
		{
			idc = -1;
			text = "X:";
			sizeEx = T1AM_TEXTSIZE;
			x = T1AM_COL + (T1AM_COLINC * 5);
			y = T1AM_ROW + (T1AM_ROWINC * 5);
			w = (T1AM_BUTTON_W * 1);
			h = T1AM_BUTTON_H;
			style = 1;
		};
		
		class T1AM_TextSheafSizeY: T1AM_RscText
		{
			idc = -1;
			text = "BOX Y:";
			sizeEx = T1AM_TEXTSIZE;
			x = T1AM_COL + (T1AM_COLINC * 5);
			y = T1AM_ROW + (T1AM_ROWINC * 6);
			w = (T1AM_BUTTON_W * 1);
			h = T1AM_BUTTON_H;
			style = 1;
		};
		
		class T1AM_TextSheafDir: T1AM_RscText
		{
			idc = -1;
			text = "LINE/BOX DIR:";
			sizeEx = T1AM_TEXTSIZE;
			x = T1AM_COL + (T1AM_COLINC * 5);
			y = T1AM_ROW + (T1AM_ROWINC * 7);
			w = (T1AM_BUTTON_W * 1);
			h = T1AM_BUTTON_H;
			style = 1;
		};
		
		class T1AM_TextSheafDist: T1AM_RscText
		{
			idc = -1;
			text = "LINE DIST:";
			sizeEx = T1AM_TEXTSIZE;
			x = T1AM_COL + (T1AM_COLINC * 5);
			y = T1AM_ROW + (T1AM_ROWINC * 8);
			w = (T1AM_BUTTON_W * 1);
			h = T1AM_BUTTON_H;
			style = 1;
		};
		
		
		
		class T1AM_ButtonTubePrevious: T1AM_ActiveText
		{
			idc = -1;
			text = "<<";
			action = "[""Previous""] call T1AM_Fnc_ChangeTube";
			x = T1AM_COL + (T1AM_COLINC * 3);
			y = T1AM_ROW + (T1AM_ROWINC * 0);
			w = T1AM_BUTTON_W / 2;
			h = T1AM_BUTTON_H;
			colorDisabled[] = {1,1,1,0.25};
		};

		class T1AM_ButtonTubeNext: T1AM_ActiveText
		{
			idc = -1;
			text = ">>";
			action = "[""Next""] call T1AM_Fnc_ChangeTube";
			x = T1AM_COL + (T1AM_COLINC * 3.9);
			y = T1AM_ROW + (T1AM_ROWINC * 0);
			w = T1AM_BUTTON_W / 2;
			h = T1AM_BUTTON_H;
			colorDisabled[] = {1,1,1,0.25};
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
			text = "XXXX";
			x = T1AM_COL + (T1AM_COLINC * 0.5);
			y = T1AM_ROW + (T1AM_ROWINC * 4);
			w = T1AM_BUTTON_W;
			h = T1AM_BUTTON_H;
		};

		class T1AM_EditDistance: T1AM_RscText
		{
			idc = 47216;
			text = "XXXX";
			x = T1AM_COL + (T1AM_COLINC * 0.5);
			y = T1AM_ROW + (T1AM_ROWINC * 5);
			w = T1AM_BUTTON_W;
			h = T1AM_BUTTON_H;
		};

		class T1AM_EditCEP: T1AM_RscText
		{
			idc = 47220;
			text = "XXXX";
			x = T1AM_COL + (T1AM_COLINC * 0.5);
			y = T1AM_ROW + (T1AM_ROWINC * 6);
			w = T1AM_BUTTON_W * 1.4;
			h = T1AM_BUTTON_H;
		};
		
		class T1AM_EditGTL: T1AM_RscText
		{
			idc = 47217;
			text = "XXXX";
			x = T1AM_COL + (T1AM_COLINC * 0.5);
			y = T1AM_ROW + (T1AM_ROWINC * 7);
			w = T1AM_BUTTON_W;
			h = T1AM_BUTTON_H;
		};
		
		class T1AM_EditAdjustLR: T1AM_RscEdit
		{
			idc = 47204;
			x = T1AM_COL + (T1AM_COLINC * 1);
			y = T1AM_ROW + (T1AM_ROWINC * 12.5);
			w = T1AM_BUTTON_W;
			h = T1AM_BUTTON_H;
			text = "0";
		};
		
		class T1AM_EditAdjustAddDrop: T1AM_RscEdit
		{
			idc = 47205;
			x = T1AM_COL + (T1AM_COLINC * 1);
			y = T1AM_ROW + (T1AM_ROWINC * 13.5);
			w = T1AM_BUTTON_W;
			h = T1AM_BUTTON_H;
			text = "0";
		};
		
		class T1AM_EditAdjustXGPS: T1AM_RscEdit
		{
			idc = 47222;
			x = T1AM_COL + (T1AM_COLINC * 1);
			y = T1AM_ROW + (T1AM_ROWINC * 8);
			w = T1AM_BUTTON_W;
			h = T1AM_BUTTON_H;
			text = "0";
		};
		
		class T1AM_EditAdjustYGPS: T1AM_RscEdit
		{
			idc = 47223;
			x = T1AM_COL + (T1AM_COLINC * 1);
			y = T1AM_ROW + (T1AM_ROWINC * 9);
			w = T1AM_BUTTON_W;
			h = T1AM_BUTTON_H;
			text = "0";
		};
		
		class T1AM_EditAdjustElevGPS: T1AM_RscEdit
		{
			idc = 47221;
			x = T1AM_COL + (T1AM_COLINC * 1);
			y = T1AM_ROW + (T1AM_ROWINC * 10);
			w = T1AM_BUTTON_W;
			h = T1AM_BUTTON_H;
			text = "0";
		};
		
		class T1AM_ListWarheadType: T1AM_RscListBox 
		{
			idc = 47206;
			text = "";
			onLBSelChanged = "";
			x = T1AM_COL + (T1AM_COLINC * 2);
			y = T1AM_ROW + (T1AM_ROWINC * 1);
			w = T1AM_BUTTON_W + (T1AM_COLINC * 2);
			h = (T1AM_BUTTON_H * 8);
		};
		
		class T1AM_EditRounds: T1AM_RscEdit
		{
			idc = 47207;
			x = T1AM_COL + (T1AM_COLINC * 2.5);
			y = T1AM_ROW + (T1AM_ROWINC * 8);
			w = (T1AM_BUTTON_W / 2);
			h = T1AM_BUTTON_H;
			text = "1";
		};
		
		class T1AM_ListAngle: T1AM_RscListBox 
		{
			idc = 47209;
			text = "";
			onLBSelChanged = "";
			x = T1AM_COL + (T1AM_COLINC * 4);
			y = T1AM_ROW + (T1AM_ROWINC * 8);
			w = T1AM_BUTTON_W;
			h = (T1AM_BUTTON_H * 3);
		};
		
		class T1AM_ListMissionType: T1AM_RscListBox 
		{
			idc = 47208;
			text = "";
			onLBSelChanged = "";
			x = T1AM_COL + (T1AM_COLINC * 3);
			y = T1AM_ROW + (T1AM_ROWINC * 8);
			w = T1AM_BUTTON_W;
			h = (T1AM_BUTTON_H * 3);
		};
		
		class T1AM_ButtonTransmit: T1AM_RscButtonMenu
		{
			idc = -1;
			text = "TRANSMIT";
			onButtonClick = "call T1AM_Fnc_Transmit";
			x = T1AM_COL + (T1AM_COLINC * 0);
			y = T1AM_ROW + (T1AM_ROWINC * 15);
			w = T1AM_BUTTON_W * 1.5;
		};
		
		class T1AM_ButtonCheckFire: T1AM_RscButtonMenu
		{
			idc = -1;
			text = "CHECK FIRE";
			onButtonClick = "call T1AM_Fnc_CheckFire_Player;";
			x = T1AM_COL + (T1AM_COLINC * 1.83);
			y = T1AM_ROW + (T1AM_ROWINC * 15);
			w = T1AM_BUTTON_W * 1.5;
		};
		
		class T1AM_ListSheaf: T1AM_RscListBox 
		{
			idc = 47211;
			text = "";
			onLBSelChanged = "";
			x = T1AM_COL + (T1AM_COLINC * 5);
			y = T1AM_ROW + (T1AM_ROWINC * 1);
			w = T1AM_BUTTON_W;
			h = (T1AM_BUTTON_H * 3.5);
		};
		
		class T1AM_EditSheafSizeX: T1AM_RscEdit
		{
			idc = 47213;
			x = T1AM_COL + (T1AM_COLINC * 6);
			y = T1AM_ROW + (T1AM_ROWINC * 5);
			w = (T1AM_BUTTON_W);
			h = T1AM_BUTTON_H;
			text = "100";
		};
		
		class T1AM_EditSheafSizeY: T1AM_RscEdit
		{
			idc = 47214;
			x = T1AM_COL + (T1AM_COLINC * 6);
			y = T1AM_ROW + (T1AM_ROWINC * 6);
			w = (T1AM_BUTTON_W);
			h = T1AM_BUTTON_H;
			text = "0";
		};
		
		class T1AM_EditSheafDir: T1AM_RscEdit
		{
			idc = 47224;
			x = T1AM_COL + (T1AM_COLINC * 6);
			y = T1AM_ROW + (T1AM_ROWINC * 7);
			w = (T1AM_BUTTON_W);
			h = T1AM_BUTTON_H;
			text = "360";
		};
		
		class T1AM_EditSheafDist: T1AM_RscEdit
		{
			idc = 47225;
			x = T1AM_COL + (T1AM_COLINC * 6);
			y = T1AM_ROW + (T1AM_ROWINC * 8);
			w = (T1AM_BUTTON_W);
			h = T1AM_BUTTON_H;
			text = "100";
		};
		
		class T1AM_ListFuse: T1AM_RscListBox
		{
			idc = 47212;
			text = "";
			onLBSelChanged = "call T1AM_Fnc_SelectFuse";
			x = T1AM_COL + (T1AM_COLINC * 3);
			y = T1AM_ROW + (T1AM_ROWINC * 12);
			w = T1AM_BUTTON_W * 2;
			h = (T1AM_BUTTON_H * 3);
		};
		
		class T1AM_ListAirburstHeight: T1AM_RscListBox 
		{
			idc = 47215;
			text = "";
			onLBSelChanged = "";
			x = T1AM_COL + (T1AM_COLINC * 4.9);
			y = T1AM_ROW + (T1AM_ROWINC * 12);
			w = T1AM_BUTTON_W;
			h = (T1AM_BUTTON_H * 3);
		};
		
		class T1AM_ButtonControlAssets: T1AM_RscButtonMenu
		{
			idc = -1;
			text = "ASSETS";
			onButtonClick = "T1AM_LastDialog = ""Assets""; [0, [], 0] spawn T1AM_Fnc_LoadingScreen";
			x = T1AM_COL + (T1AM_COLINC * 5.5);
			y = T1AM_ROW + (T1AM_ROWINC * 15);
			w = T1AM_BUTTON_W * 1.5;
		};
		
		class T1AM_ButtonControlEndMission: T1AM_RscButtonMenu
		{
			idc = -1;
			text = "END MISSION";
			onButtonClick = "[true] call T1AM_Fnc_EndMission;";
			x = T1AM_COL + (T1AM_COLINC * 3.66);
			y = T1AM_ROW + (T1AM_ROWINC * 15);
			w = T1AM_BUTTON_W * 1.5;
		};
		
		class T1AM_ButtonCloseComputer1: T1AM_ButtonCloseComputer{};
		class T1AM_ButtonEscapeMenu1: T1AM_ButtonEscapeMenu{};
		class T1AM_ButtonGoToAssets1: T1AM_ButtonGoToAssets{};
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
		class T1AM_ButtonEscapeMenu1: T1AM_ButtonEscapeMenu{};
		class T1AM_ButtonGoToAssets1: T1AM_ButtonGoToAssets{};
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
			x = T1AM_COL + (T1AM_COLINC * 3);
			y = T1AM_ROW + (T1AM_ROWINC * 3);
			w = T1AM_BUTTON_W  + (T1AM_COLINC * 6);
			h = T1AM_BUTTON_H;
		};
		
		class T1AM_TextPosXaimpoint: T1AM_RscText
		{
			idc = -1;
			text = "X:";
			sizeEx = T1AM_TEXTSIZE;
			x = T1AM_COL + (T1AM_COLINC * 2.5);
			y = T1AM_ROW + (T1AM_ROWINC * 4);
			w = (T1AM_BUTTON_W * 0.5);
			h = T1AM_BUTTON_H;
		};
		
		class T1AM_TextPosYaimpoint: T1AM_RscText
		{
			idc = -1;
			text = "Y:";
			sizeEx = T1AM_TEXTSIZE;
			x = T1AM_COL + (T1AM_COLINC * 2.5);
			y = T1AM_ROW + (T1AM_ROWINC * 5);
			w = (T1AM_BUTTON_W * 0.5);
			h = T1AM_BUTTON_H;
		};
		
		
		
		class T1AM_EditXaimpoint: T1AM_RscEdit
		{
			idc = 47402;
			x = T1AM_COL + (T1AM_COLINC * 3);
			y = T1AM_ROW + (T1AM_ROWINC * 4);
			w = T1AM_BUTTON_W;
			h = T1AM_BUTTON_H;
			text = "";
		};
		
		class T1AM_EditYaimpoint: T1AM_RscEdit
		{
			idc = 47403;
			x = T1AM_COL + (T1AM_COLINC * 3);
			y = T1AM_ROW + (T1AM_ROWINC * 5);
			w = T1AM_BUTTON_W;
			h = T1AM_BUTTON_H;
			text = "";
		};
		
		class T1AM_ButtonInputAimpoint: T1AM_RscButtonMenu
		{
			idc = -1;
			text = "INPUT";
			onButtonClick = "[true, []]call T1AM_Fnc_InputAimpoint";
			x = T1AM_COL + (T1AM_COLINC * 3);
			y = T1AM_ROW + (T1AM_ROWINC * 6);
		};
		
		class T1AM_ButtonInputAimpointMapclick: T1AM_RscButtonMenu
		{
			idc = -1;
			text = "MAPCLICK";
			onButtonClick = "[] spawn {[0] call T1AM_Fnc_CloseDisplays; sleep 0.2; call T1AM_Fnc_InputAimpointMapclick};";
			x = T1AM_COL + (T1AM_COLINC * 4);
			y = T1AM_ROW + (T1AM_ROWINC * 6);
		};
		
		class T1AM_ButtonAimpointAssets: T1AM_RscButtonMenu
		{
			idc = -1;
			text = "ASSETS";
			onButtonClick = "T1AM_LastDialog = ""Assets""; [0, [], 0] spawn T1AM_Fnc_LoadingScreen";
			x = T1AM_COL + (T1AM_COLINC * 3);
			y = T1AM_ROW + (T1AM_ROWINC * 8);
		};
		
		class T1AM_ButtonAimpointHelp: T1AM_RscButtonMenu
		{
			idc = -1;
			text = "HELP";
			onButtonClick = "[2,"""", 15] spawn T1AM_Fnc_ShowMessage";
			x = T1AM_COL + (T1AM_COLINC * 4.4);
			y = T1AM_ROW + (T1AM_ROWINC * 8);
			w = T1AM_BUTTON_W / 2;
		};
		
		class T1AM_ButtonCloseComputer1: T1AM_ButtonCloseComputer{};
		class T1AM_ButtonEscapeMenu1: T1AM_ButtonEscapeMenu{};
		class T1AM_ButtonGoToAssets1: T1AM_ButtonGoToAssets{};
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
			x = T1AM_COL + (T1AM_COLINC * 0);
			y = T1AM_ROW + (T1AM_ROWINC * 0) + 0.01;
			w = T1AM_BUTTON_W  + (T1AM_COLINC * 6);
			h = T1AM_BUTTON_H + (T1AM_ROWINC * 15);
			style = 16 + 2 + 512;
		};
		
		class T1AM_ButtonCloseComputer1: T1AM_ButtonCloseComputer{};
		class T1AM_ButtonEscapeMenu1: T1AM_ButtonEscapeMenu{};
		class T1AM_ButtonGoToAssets1: T1AM_ButtonGoToAssets{};
	};
};