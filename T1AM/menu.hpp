/*
PuristaLight
PuristaMedium
PuristaSemiBold
PuristaBold
LucidaConsoleB
EtelkaMonospacePro
EtelkaMonospaceProBold
EtelkaNarrowMediumPro
TahomaB
*/

#define CT_STATIC       0
#define ST_PICTURE        0x30
#define CT_ACTIVETEXT 11
#define T1AM_X			0
#define T1AM_Y			0
#define T1AM_H			1
#define T1AM_W			1
#define T1AM_BUTTON_H	0.05
#define T1AM_BUTTON_W	0.13
#define T1AM_SPACE		0.011
#define T1AM_COL			(T1AM_X + T1AM_SPACE)
#define T1AM_ROW			(T1AM_Y + T1AM_SPACE)
#define T1AM_COLINC		(T1AM_BUTTON_W + T1AM_SPACE)
#define T1AM_ROWINC		(T1AM_BUTTON_H + T1AM_SPACE)
#define T1AM_TEXTSIZE		0.03
#define T1AM_TEXTSIZESMALL 0.025
#define T1AM_TEXT		"PuristaSemiBold"

class T1AM_RscPicture
{
    access = 0;
    idc = -1;
    type = CT_STATIC;
    style = ST_PICTURE;
    colorBackground[] = {0,0,0,0};
    colorText[] = {1,1,1,1};
    font = T1AM_TEXT;
    sizeEx = 0;
    lineSpacing = 0;
    text = "";
    fixedWidth = 0;
    shadow = 0;
    x = 0;
    y = 0;
	w = 0.06 * safezoneW;
	h = 0.08 * safezoneH;
};

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
	
class T1AM_RscTitle : T1AM_RscText
{
	style = 0;
	SizeEx = T1AM_TEXTSIZE;
	//colorText[] = {0.95,0.95,0.95,1};
	colorText[] = {0,0,0,1};
};

class T1AM_RscButtonMenu
{
	idc = -1;
	type = 16;
	style = "0x02 + 0xC0";
	default = 0;
	shadow = 0;
	x = 0;
	y = 0;
	w = T1AM_BUTTON_W;
	h = T1AM_BUTTON_H;
	
	animTextureNormal = "#(argb,8,8,3)color(0,0,0,0.5)";
	animTextureDisabled = "#(argb,8,8,3)color(0,0,0,0.5)";
	animTextureOver = "#(argb,8,8,3)color(0,0,0,0.5)";
	animTextureFocused = "#(argb,8,8,3)color(0,0,0,0.5)";
	animTexturePressed = "#(argb,8,8,3)color(0,0,0,0.5)";
	animTextureDefault = "#(argb,8,8,3)color(0,0,0,0.5)";
	textureNoShortcut = "#(argb,8,8,3)color(0,0,0,0.5)";
	
	/*
	animTextureNormal = "";
	animTextureDisabled = "";
	animTextureOver = "";
	animTextureFocused = "";
	animTexturePressed = "";
	animTextureDefault = "";
	textureNoShortcut = "";
	*/
	
	colorBackground[] = {1,1,1,1};
	colorBackground2[] = {1,1,1,1};
	colorBackgroundFocused[] = {0,0,0,1};  
	// Text colour selected
	color[] = {1,1,1,1};
	// Text colour other
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

class T1AM_RscButtonMenuText : T1AM_RscButtonMenu{
	animTextureNormal = "#(argb,8,8,3)color(0,0,0,1)";
	animTextureDisabled = "#(argb,8,8,3)color(0,0,0,1)";
	animTextureOver = "#(argb,8,8,3)color(0,0,0,1)";
	animTextureFocused = "#(argb,8,8,3)color(0,0,0,1)";
	animTexturePressed = "#(argb,8,8,3)color(0,0,0,1)";
	animTextureDefault = "#(argb,8,8,3)color(0,0,0,1)";
	textureNoShortcut = "#(argb,8,8,3)color(0,0,0,1)";
};

class T1AM_RscListBox
{
	style = 16;
	idc = -1;
	type = 5;
	w = 0.275;
	h = 0.04;
	font = T1AM_TEXT;
	//color[] = {0.7,0.7,0.7,1};
	color[] = {0,0,0,1};
	colorActive[] = {0,0,0,1};
	colorDisabled[] = {0,0,0,0.3};
	colorSelect[] = {0,0,0,1};
	colorText[] = {1,1,1,1};
	colorBackground[] = {0.28,0.28,0.28,0.28};
	colorSelect2[] = {0,0,0,1};
	//colorSelectBackground[] = {0.95,0.95,0.95,1};
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

class T1AM_ActiveText
{
	idc = -1;
	type = CT_ACTIVETEXT;
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

/////////////////////////////////////////////////////////////
// Assets
/////////////////////////////////////////////////////////////
class T1AM_DialogAssets
{
	idd = 100;
	name= "T1AM_rtyAssets";
	movingEnable = false;
	enableSimulation = true;
	onLoad = "";
	
	class controlsBackground
	{
		class MainBackground : T1AM_RscText {
			colorBackground[] = {0, 0, 0, 0.7};
			idc = -1;
			x = T1AM_X;
			y = T1AM_Y;
			w = T1AM_W;
			h = T1AM_H;
			//h = T1AM_H - (T1AM_ROWINC * 2);
		};
		
		class T1AM_TextAsset : T1AM_RscText
		{
			idc = -1;
			text = "Assets";
			sizeEx = T1AM_TEXTSIZE;
			x = T1AM_COL;
			y = T1AM_ROW;
			w = T1AM_BUTTON_W  + (T1AM_COLINC * 2);
			h = T1AM_BUTTON_H;
		};
		
		class T1AM_TextMissions : T1AM_RscText
		{
			idc = -1;
			text = "Previous FFE/Plot Missions";
			sizeEx = T1AM_TEXTSIZE;
			x = T1AM_COL;
			y = T1AM_ROW + (T1AM_ROWINC * 8);
			w = T1AM_BUTTON_W  + (T1AM_COLINC * 2);
			h = T1AM_BUTTON_H;
		};
	};
	
	class controls
	{
		class T1AM_ListAsset : T1AM_RscListBox 
		{
			idc = 101;
			text = "";
			onLBSelChanged = "";
			x = T1AM_COL;
			y = T1AM_ROW + (T1AM_ROWINC * 1);
			w = T1AM_BUTTON_W + (T1AM_COLINC * 6);
			h = (T1AM_BUTTON_H * 7) - T1AM_SPACE;
		};
		
		class T1AM_ListMissions : T1AM_RscListBox 
		{
			idc = 102;
			text = "";
			onLBSelChanged = "";
			x = T1AM_COL;
			y = T1AM_ROW + (T1AM_ROWINC * 9);
			w = T1AM_BUTTON_W + (T1AM_COLINC * 6);
			h = (T1AM_BUTTON_H * 6) - T1AM_SPACE;
		};
		
		class T1AM_ButtonControlAsset : T1AM_RscButtonMenu
		{
			idc = -1;
			text = "Control";
			onButtonClick = "[false] call T1AM_Fnc_ControlAsset";
			x = T1AM_COL + (T1AM_COLINC * 0);
			y = T1AM_ROW + (T1AM_ROWINC * 7);
			w = T1AM_BUTTON_W;
			h = T1AM_BUTTON_H;
		};
		
		class T1AM_ButtonReleaseAsset : T1AM_RscButtonMenu
		{
			idc = -1;
			text = "Release";
			onButtonClick = "call T1AM_Fnc_ReleaseAsset";
			x = T1AM_COL + (T1AM_COLINC * 1);
			y = T1AM_ROW + (T1AM_ROWINC * 7);
			w = T1AM_BUTTON_W;
			h = T1AM_BUTTON_H;
		};
		
		class T1AM_ButtonControlMission : T1AM_RscButtonMenu
		{
			idc = -1;
			text = "Select Mission";
			onButtonClick = "[true] call T1AM_Fnc_ControlAsset";
			x = T1AM_COL + (T1AM_COLINC * 0);
			y = T1AM_ROW + (T1AM_ROWINC * 14);
			w = T1AM_BUTTON_W;
			h = T1AM_BUTTON_H * 1.5;
		};
	};	
};

/////////////////////////////////////////////////////////////
// Artillery
/////////////////////////////////////////////////////////////
class T1AM_DialogControl
{
	idd = 200;
	name= "T1AM_rty";
	movingEnable = false;
	enableSimulation = true;
	onLoad = "";
	
	class controlsBackground
	{
		class MainBackground : T1AM_RscText {
			colorBackground[] = {0,0,0,0.8};
			//colorBackground[] = {0,0,0,1};
			idc = -1;
			x = T1AM_X;
			y = T1AM_Y;
			w = T1AM_W;
			h = T1AM_H;
			//w = T1AM_W - (T1AM_COLINC * 1);
			//h = T1AM_H - (T1AM_ROWINC * 1);
		};
		
		class T1AM_TextAsset : T1AM_RscText
		{
			idc = 201;
			text = "";
			sizeEx = T1AM_TEXTSIZE;
			x = T1AM_COL + (T1AM_COLINC * 0);
			y = T1AM_ROW + (T1AM_ROWINC * 0);
			w = T1AM_BUTTON_W  + (T1AM_COLINC * 3);
			h = T1AM_BUTTON_H;
		};
		
		class T1AM_TextAssetTube : T1AM_RscText
		{
			idc = 218;
			text = "Tube:";
			sizeEx = T1AM_TEXTSIZE;
			x = T1AM_COL + (T1AM_COLINC * 4);
			y = T1AM_ROW + (T1AM_ROWINC * 0);
			w = T1AM_BUTTON_W;
			h = T1AM_BUTTON_H;
		};
		
		class T1AM_TextPos : T1AM_RscText
		{
			idc = -1;
			text = "Aimpoint:";
			sizeEx = T1AM_TEXTSIZE;
			x = T1AM_COL + (T1AM_COLINC * 0);
			y = T1AM_ROW + (T1AM_ROWINC * 1);
			w = T1AM_BUTTON_W  + (T1AM_COLINC * 1);
			h = T1AM_BUTTON_H;
		};
		
		class T1AM_TextPosX : T1AM_RscText
		{
			idc = -1;
			text = "X:";
			sizeEx = T1AM_TEXTSIZE;
			x = T1AM_COL + (T1AM_COLINC * 0);
			y = T1AM_ROW + (T1AM_ROWINC * 2);
			w = (T1AM_BUTTON_W * 0.5);
			h = T1AM_BUTTON_H;
		};
		
		class T1AM_TextPosY : T1AM_RscText
		{
			idc = -1;
			text = "Y:";
			sizeEx = T1AM_TEXTSIZE;
			x = T1AM_COL + (T1AM_COLINC * 0);
			y = T1AM_ROW + (T1AM_ROWINC * 3);
			w = (T1AM_BUTTON_W * 0.5);
			h = T1AM_BUTTON_H;
		};
		
		class T1AM_TextPosZ : T1AM_RscText
		{
			idc = -1;
			text = "Z:";
			sizeEx = T1AM_TEXTSIZE;
			x = T1AM_COL + (T1AM_COLINC * 0);
			y = T1AM_ROW + (T1AM_ROWINC * 4);
			w = (T1AM_BUTTON_W * 0.5);
			h = T1AM_BUTTON_H;
		};
		
		class T1AM_TextDistance : T1AM_RscText
		{
			idc = -1;
			text = "DIST:";
			sizeEx = T1AM_TEXTSIZE;
			x = T1AM_COL + (T1AM_COLINC * 0);
			y = T1AM_ROW + (T1AM_ROWINC * 5);
			w = (T1AM_BUTTON_W * 0.5);
			h = T1AM_BUTTON_H;
		};
		
		class T1AM_TextCEP : T1AM_RscText
		{
			idc = -1;
			text = "CEP:";
			sizeEx = T1AM_TEXTSIZE;
			x = T1AM_COL + (T1AM_COLINC * 0);
			y = T1AM_ROW + (T1AM_ROWINC * 6);
			w = (T1AM_BUTTON_W * 0.5);
			h = T1AM_BUTTON_H;
		};
		
		class T1AM_TextGTL : T1AM_RscText
		{
			idc = -1;
			text = "GTL:";
			sizeEx = T1AM_TEXTSIZE;
			x = T1AM_COL + (T1AM_COLINC * 0);
			y = T1AM_ROW + (T1AM_ROWINC * 7);
			w = (T1AM_BUTTON_W * 0.5);
			h = T1AM_BUTTON_H;
		};
		
		class T1AM_TextAdjust : T1AM_RscText
		{
			idc = -1;
			text = "Adjust (-x for </v)";
			//text = "-99 = < / v";
			sizeEx = T1AM_TEXTSIZE;
			x = T1AM_COL + (T1AM_COLINC * 0);
			y = T1AM_ROW + (T1AM_ROWINC * 11.5);
			w = T1AM_BUTTON_W  + (T1AM_COLINC * 1);
			h = T1AM_BUTTON_H;
		};
		
		class T1AM_TextAdjustLeftRight : T1AM_RscText
		{
			idc = -1;
			text = "< / >";
			sizeEx = T1AM_TEXTSIZE;
			x = T1AM_COL + (T1AM_COLINC * 0);
			y = T1AM_ROW + (T1AM_ROWINC * 12.5);
			w = (T1AM_BUTTON_W * 1);
			h = T1AM_BUTTON_H;
		};
		
		class T1AM_TextAdjustAddDrop : T1AM_RscText
		{
			idc = -1;
			text = "^ / v";
			sizeEx = T1AM_TEXTSIZE;
			x = T1AM_COL + (T1AM_COLINC * 0);
			y = T1AM_ROW + (T1AM_ROWINC * 13.5);
			w = (T1AM_BUTTON_W * 1);
			h = T1AM_BUTTON_H;
		};
		
		class T1AM_TextPosXGPS : T1AM_RscText
		{
			idc = -1;
			text = "GPS X:";
			sizeEx = T1AM_TEXTSIZE;
			x = T1AM_COL + (T1AM_COLINC * 0);
			y = T1AM_ROW + (T1AM_ROWINC * 8);
			w = (T1AM_BUTTON_W * 0.5);
			h = T1AM_BUTTON_H;
		};
		
		class T1AM_TextPosYGPS : T1AM_RscText
		{
			idc = -1;
			text = "GPS Y:";
			sizeEx = T1AM_TEXTSIZE;
			x = T1AM_COL + (T1AM_COLINC * 0);
			y = T1AM_ROW + (T1AM_ROWINC * 9);
			w = (T1AM_BUTTON_W * 0.5);
			h = T1AM_BUTTON_H;
		};
		
		class T1AM_TextAdjustElevGPS : T1AM_RscText
		{
			idc = -1;
			text = "GPS Z (AGL):";
			sizeEx = T1AM_TEXTSIZE;
			x = T1AM_COL + (T1AM_COLINC * 0);
			y = T1AM_ROW + (T1AM_ROWINC * 10);
			w = (T1AM_BUTTON_W * 1);
			h = T1AM_BUTTON_H;
		};
		
		class T1AM_TextRounds : T1AM_RscText
		{
			idc = -1;
			text = "RNDS:";
			sizeEx = T1AM_TEXTSIZE;
			x = T1AM_COL + (T1AM_COLINC * 2);
			y = T1AM_ROW + (T1AM_ROWINC * 8);
			w = T1AM_BUTTON_W / 2;
			h = T1AM_BUTTON_H;
		};
		
		class T1AM_TextSheafSize : T1AM_RscText
		{
			idc = -1;
			text = "     Sheaf Size (Y = BOX ONLY)";
			sizeEx = T1AM_TEXTSIZE;
			x = T1AM_COL + (T1AM_COLINC * 5);
			y = T1AM_ROW + (T1AM_ROWINC * 4);
			w = (T1AM_BUTTON_W * 3);
			h = T1AM_BUTTON_H;
		};
		
		class T1AM_TextSheafSizeX : T1AM_RscText
		{
			idc = -1;
			text = "  X:";
			sizeEx = T1AM_TEXTSIZE;
			x = T1AM_COL + (T1AM_COLINC * 5.5);
			y = T1AM_ROW + (T1AM_ROWINC * 5);
			w = (T1AM_BUTTON_W * 1);
			h = T1AM_BUTTON_H;
		};
		
		class T1AM_TextSheafSizeY : T1AM_RscText
		{
			idc = -1;
			text = "  Y:";
			sizeEx = T1AM_TEXTSIZE;
			x = T1AM_COL + (T1AM_COLINC * 5.5);
			y = T1AM_ROW + (T1AM_ROWINC * 6);
			w = (T1AM_BUTTON_W * 1);
			h = T1AM_BUTTON_H;
		};
		
		class T1AM_TextSheafLine : T1AM_RscText
		{
			idc = -1;
			text = "            Sheaf Line";
			sizeEx = T1AM_TEXTSIZE;
			x = T1AM_COL + (T1AM_COLINC * 5);
			y = T1AM_ROW + (T1AM_ROWINC * 8);
			w = (T1AM_BUTTON_W * 3);
			h = T1AM_BUTTON_H;
		};
		
		class T1AM_TextSheafLineDir : T1AM_RscText
		{
			idc = -1;
			text = "DIR:";
			sizeEx = T1AM_TEXTSIZE;
			x = T1AM_COL + (T1AM_COLINC * 5.5);
			y = T1AM_ROW + (T1AM_ROWINC * 9);
			w = (T1AM_BUTTON_W * 1);
			h = T1AM_BUTTON_H;
		};
		
		class T1AM_TextSheafLineDist : T1AM_RscText
		{
			idc = -1;
			text = "DIST:";
			sizeEx = T1AM_TEXTSIZE;
			x = T1AM_COL + (T1AM_COLINC * 5.5);
			y = T1AM_ROW + (T1AM_ROWINC * 10);
			w = (T1AM_BUTTON_W * 1);
			h = T1AM_BUTTON_H;
		};
	};
	
	class controls
	{
		class T1AM_ButtonTubePrevious : T1AM_ActiveText
		{
			idc = -1;
			text = "<<";
			action = "[""Previous""] execVM 'T1AM\Dialog\ChangeTube.sqf'";
			x = T1AM_COL + (T1AM_COLINC * 5);
			y = T1AM_ROW + (T1AM_ROWINC * 0);
			w = T1AM_BUTTON_W / 2;
			h = T1AM_BUTTON_H;
			colorDisabled[] = {1,1,1,0.25};
		};

		class T1AM_ButtonTubeNext : T1AM_ActiveText
		{
			idc = -1;
			text = ">>";
			action = "[""Next""] execVM 'T1AM\Dialog\ChangeTube.sqf'";
			x = T1AM_COL + (T1AM_COLINC * 5.5);
			y = T1AM_ROW + (T1AM_ROWINC * 0);
			w = T1AM_BUTTON_W / 2;
			h = T1AM_BUTTON_H;
			colorDisabled[] = {1,1,1,0.25};
		};
		
		class T1AM_EditX : T1AM_RscText
		{
			idc = 202;
			x = T1AM_COL + (T1AM_COLINC * 0.5);
			y = T1AM_ROW + (T1AM_ROWINC * 2);
			w = T1AM_BUTTON_W;
			h = T1AM_BUTTON_H;
			text = "";
		};

		class T1AM_EditY : T1AM_RscText
		{
			idc = 203;
			x = T1AM_COL + (T1AM_COLINC * 0.5);
			y = T1AM_ROW + (T1AM_ROWINC * 3);
			w = T1AM_BUTTON_W;
			h = T1AM_BUTTON_H;
			text = "";
		};
		
		class T1AM_EditElev : T1AM_RscText
		{
			idc = 219;
			text = "XXXX";
			x = T1AM_COL + (T1AM_COLINC * 0.5);
			y = T1AM_ROW + (T1AM_ROWINC * 4);
			w = T1AM_BUTTON_W;
			h = T1AM_BUTTON_H;
		};

		class T1AM_EditDistance : T1AM_RscText
		{
			idc = 216;
			text = "XXXX";
			x = T1AM_COL + (T1AM_COLINC * 0.5);
			y = T1AM_ROW + (T1AM_ROWINC * 5);
			w = T1AM_BUTTON_W;
			h = T1AM_BUTTON_H;
		};

		class T1AM_EditCEP : T1AM_RscText
		{
			idc = 220;
			text = "XXXX";
			x = T1AM_COL + (T1AM_COLINC * 0.5);
			y = T1AM_ROW + (T1AM_ROWINC * 6);
			w = T1AM_BUTTON_W * 1.4;
			h = T1AM_BUTTON_H;
		};
		
		class T1AM_EditGTL : T1AM_RscText
		{
			idc = 217;
			text = "XXXX";
			x = T1AM_COL + (T1AM_COLINC * 0.5);
			y = T1AM_ROW + (T1AM_ROWINC * 7);
			w = T1AM_BUTTON_W;
			h = T1AM_BUTTON_H;
		};
		
		class T1AM_EditAdjustLR : T1AM_RscEdit
		{
			idc = 204;
			x = T1AM_COL + (T1AM_COLINC * 1);
			y = T1AM_ROW + (T1AM_ROWINC * 12.5);
			w = T1AM_BUTTON_W;
			h = T1AM_BUTTON_H;
			text = "0";
		};
		
		class T1AM_EditAdjustAddDrop : T1AM_RscEdit
		{
			idc = 205;
			x = T1AM_COL + (T1AM_COLINC * 1);
			y = T1AM_ROW + (T1AM_ROWINC * 13.5);
			w = T1AM_BUTTON_W;
			h = T1AM_BUTTON_H;
			text = "0";
		};
		
		class T1AM_EditAdjustXGPS : T1AM_RscEdit
		{
			idc = 222;
			x = T1AM_COL + (T1AM_COLINC * 1);
			y = T1AM_ROW + (T1AM_ROWINC * 8);
			w = T1AM_BUTTON_W;
			h = T1AM_BUTTON_H;
			text = "0";
		};
		
		class T1AM_EditAdjustYGPS : T1AM_RscEdit
		{
			idc = 223;
			x = T1AM_COL + (T1AM_COLINC * 1);
			y = T1AM_ROW + (T1AM_ROWINC * 9);
			w = T1AM_BUTTON_W;
			h = T1AM_BUTTON_H;
			text = "0";
		};
		
		class T1AM_EditAdjustElevGPS : T1AM_RscEdit
		{
			idc = 221;
			x = T1AM_COL + (T1AM_COLINC * 1);
			y = T1AM_ROW + (T1AM_ROWINC * 10);
			w = T1AM_BUTTON_W;
			h = T1AM_BUTTON_H;
			text = "0";
		};
		
		class T1AM_ListWarheadType : T1AM_RscListBox 
		{
			idc = 206;
			text = "";
			onLBSelChanged = "";
			x = T1AM_COL + (T1AM_COLINC * 2);
			y = T1AM_ROW + (T1AM_ROWINC * 1);
			w = T1AM_BUTTON_W + (T1AM_COLINC * 2);
			h = (T1AM_BUTTON_H * 8);
		};
		
		class T1AM_EditRounds : T1AM_RscEdit
		{
			idc = 207;
			x = T1AM_COL + (T1AM_COLINC * 2.5);
			y = T1AM_ROW + (T1AM_ROWINC * 8);
			w = (T1AM_BUTTON_W / 2);
			h = T1AM_BUTTON_H;
			text = "1";
		};
		
		class T1AM_ListAngle : T1AM_RscListBox 
		{
			idc = 209;
			text = "";
			onLBSelChanged = "";
			x = T1AM_COL + (T1AM_COLINC * 4);
			y = T1AM_ROW + (T1AM_ROWINC * 8);
			w = T1AM_BUTTON_W;
			h = (T1AM_BUTTON_H * 3);
		};
		
		class T1AM_ListMissionType : T1AM_RscListBox 
		{
			idc = 208;
			text = "";
			onLBSelChanged = "";
			x = T1AM_COL + (T1AM_COLINC * 3);
			y = T1AM_ROW + (T1AM_ROWINC * 8);
			w = T1AM_BUTTON_W;
			h = (T1AM_BUTTON_H * 3);
		};
		
		class T1AM_ButtonTransmit : T1AM_RscButtonMenu
		{
			idc = -1;
			text = "Transmit";
			onButtonClick = "[] execVM 'T1AM\Dialog\Transmit.sqf'";
			x = T1AM_COL + (T1AM_COLINC * 0);
			y = T1AM_ROW + (T1AM_ROWINC * 15);
			w = T1AM_BUTTON_W * 1.5;
			h = T1AM_BUTTON_H;
		};
		
		class T1AM_ButtonCheckFire : T1AM_RscButtonMenu
		{
			idc = -1;
			text = "Check Fire";
			onButtonClick = "call T1AM_Fnc_CheckFire_Player;";
			x = T1AM_COL + (T1AM_COLINC * 1.83);
			y = T1AM_ROW + (T1AM_ROWINC * 15);
			w = T1AM_BUTTON_W * 1.5;
			h = T1AM_BUTTON_H;
		};
		
		class T1AM_ListSheaf : T1AM_RscListBox 
		{
			idc = 211;
			text = "";
			onLBSelChanged = "";
			x = T1AM_COL + (T1AM_COLINC * 5);
			y = T1AM_ROW + (T1AM_ROWINC * 1);
			w = T1AM_BUTTON_W;
			h = (T1AM_BUTTON_H * 3.5);
		};
		
		class T1AM_EditSheafSizeX : T1AM_RscEdit
		{
			idc = 213;
			x = T1AM_COL + (T1AM_COLINC * 6);
			y = T1AM_ROW + (T1AM_ROWINC * 5);
			w = (T1AM_BUTTON_W);
			h = T1AM_BUTTON_H;
			text = "100";
		};
		
		class T1AM_EditSheafSizeY : T1AM_RscEdit
		{
			idc = 214;
			x = T1AM_COL + (T1AM_COLINC * 6);
			y = T1AM_ROW + (T1AM_ROWINC * 6);
			w = (T1AM_BUTTON_W);
			h = T1AM_BUTTON_H;
			text = "0";
		};
		
		class T1AM_EditSheafLineDir : T1AM_RscEdit
		{
			idc = 224;
			x = T1AM_COL + (T1AM_COLINC * 6);
			y = T1AM_ROW + (T1AM_ROWINC * 9);
			w = (T1AM_BUTTON_W);
			h = T1AM_BUTTON_H;
			text = "0";
		};
		
		class T1AM_EditSheafLineDist : T1AM_RscEdit
		{
			idc = 225;
			x = T1AM_COL + (T1AM_COLINC * 6);
			y = T1AM_ROW + (T1AM_ROWINC * 10);
			w = (T1AM_BUTTON_W);
			h = T1AM_BUTTON_H;
			text = "100";
		};
		
		class T1AM_ListFuse : T1AM_RscListBox
		{
			idc = 212;
			text = "";
			onLBSelChanged = "[] execVM 'T1AM\Dialog\SelectFuse.sqf'";
			x = T1AM_COL + (T1AM_COLINC * 3);
			y = T1AM_ROW + (T1AM_ROWINC * 12);
			w = T1AM_BUTTON_W * 2;
			h = (T1AM_BUTTON_H * 3);
		};
		
		class T1AM_ListAirburstHeight : T1AM_RscListBox 
		{
			idc = 215;
			text = "";
			onLBSelChanged = "";
			x = T1AM_COL + (T1AM_COLINC * 4.9);
			y = T1AM_ROW + (T1AM_ROWINC * 12);
			w = T1AM_BUTTON_W;
			h = (T1AM_BUTTON_H * 3);
		};
		
		class T1AM_ButtonControlAssets : T1AM_RscButtonMenu
		{
			idc = -1;
			text = "Assets";
			onButtonClick = "closeDialog 0; [] spawn {sleep 0.3; [] spawn T1AM_Fnc_Assets};";
			x = T1AM_COL + (T1AM_COLINC * 5.5);
			y = T1AM_ROW + (T1AM_ROWINC * 15);
			w = T1AM_BUTTON_W * 1.5;
			h = T1AM_BUTTON_H;
		};
		
		class T1AM_ButtonControlEndMission : T1AM_RscButtonMenu
		{
			idc = -1;
			text = "End Mission";
			onButtonClick = "[true] call T1AM_Fnc_EndMission;";
			x = T1AM_COL + (T1AM_COLINC * 3.66);
			y = T1AM_ROW + (T1AM_ROWINC * 15);
			w = T1AM_BUTTON_W * 1.5;
			h = T1AM_BUTTON_H;
		};
	};
};

/////////////////////////////////////////////////////////////
// Aimpoint input
/////////////////////////////////////////////////////////////
class T1AM_DialogAimpoint
{
	idd = 400;
	name= "T1AM_aimpoint";
	movingEnable = false;
	enableSimulation = true;
	onLoad = "";
	
	class controlsBackground
	{
		class MainBackground:T1AM_RscText {
			colorBackground[] = {0, 0, 0, 0.7};
			idc = -1;
			x = T1AM_X + (T1AM_BUTTON_W * 2);
			y = T1AM_Y;
			//w = T1AM_W;
			//h = T1AM_H;
			w = T1AM_W - (T1AM_BUTTON_W * 4);
			h = (T1AM_H / 2) - T1AM_BUTTON_H;
		};
		
		class T1AM_TextAimpoint : T1AM_RscText
		{
			idc = 401;
			text = "Input aimpoint (10-digit grid)";
			sizeEx = T1AM_TEXTSIZE;
			x = T1AM_COL + (T1AM_COLINC * 3);
			y = T1AM_ROW + (T1AM_ROWINC * 1);
			w = T1AM_BUTTON_W  + (T1AM_COLINC * 6);
			h = T1AM_BUTTON_H;
		};
		
		class T1AM_TextPosXaimpoint : T1AM_RscText
		{
			idc = -1;
			text = "X:";
			sizeEx = T1AM_TEXTSIZE;
			x = T1AM_COL + (T1AM_COLINC * 2.5);
			y = T1AM_ROW + (T1AM_ROWINC * 2);
			w = (T1AM_BUTTON_W * 0.5);
			h = T1AM_BUTTON_H;
		};
		
		class T1AM_TextPosYaimpoint : T1AM_RscText
		{
			idc = -1;
			text = "Y:";
			sizeEx = T1AM_TEXTSIZE;
			x = T1AM_COL + (T1AM_COLINC * 2.5);
			y = T1AM_ROW + (T1AM_ROWINC * 3);
			w = (T1AM_BUTTON_W * 0.5);
			h = T1AM_BUTTON_H;
		};
	};
	
	class controls
	{
		class T1AM_EditXaimpoint : T1AM_RscEdit
		{
			idc = 402;
			x = T1AM_COL + (T1AM_COLINC * 3);
			y = T1AM_ROW + (T1AM_ROWINC * 2);
			w = T1AM_BUTTON_W;
			h = T1AM_BUTTON_H;
			text = "";
		};
		
		class T1AM_EditYaimpoint : T1AM_RscEdit
		{
			idc = 403;
			x = T1AM_COL + (T1AM_COLINC * 3);
			y = T1AM_ROW + (T1AM_ROWINC * 3);
			w = T1AM_BUTTON_W;
			h = T1AM_BUTTON_H;
			text = "";
		};
		
		class T1AM_ButtonInputAimpoint : T1AM_RscButtonMenu
		{
			idc = -1;
			text = "Input";
			onButtonClick = "call T1AM_Fnc_InputAimpoint";
			x = T1AM_COL + (T1AM_COLINC * 3);
			y = T1AM_ROW + (T1AM_ROWINC * 4);
			w = T1AM_BUTTON_W;
			h = T1AM_BUTTON_H;
		};
		
		class T1AM_ButtonInputAimpointMapclick : T1AM_RscButtonMenu
		{
			idc = -1;
			text = "Mapclick";
			onButtonClick = "[] spawn {closeDialog 0;sleep 0.3;call T1AM_Fnc_InputAimpointMapclick};";
			x = T1AM_COL + (T1AM_COLINC * 4);
			y = T1AM_ROW + (T1AM_ROWINC * 4);
			w = T1AM_BUTTON_W;
			h = T1AM_BUTTON_H;
		};
		
		class T1AM_ButtonAimpointAssets : T1AM_RscButtonMenu
		{
			idc = -1;
			text = "Assets";
			onButtonClick = "closeDialog 0; [] spawn {sleep 0.3; [] spawn T1AM_Fnc_Assets};";
			x = T1AM_COL + (T1AM_COLINC * 3);
			y = T1AM_ROW + (T1AM_ROWINC * 6);
			w = T1AM_BUTTON_W;
			h = T1AM_BUTTON_H;
		};
		
		class T1AM_ButtonAimpointHelp : T1AM_RscButtonMenu
		{
			idc = -1;
			text = "Help";
			onButtonClick = "call T1AM_Fnc_AimpointHelp";
			x = T1AM_COL + (T1AM_COLINC * 4.5);
			y = T1AM_ROW + (T1AM_ROWINC * 6);
			w = T1AM_BUTTON_W / 2;
			h = T1AM_BUTTON_H;
		};
	};
};