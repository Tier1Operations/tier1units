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
#define DTA_X			0
#define DTA_Y			0
#define DTA_H			1
#define DTA_W			1
#define DTA_BUTTON_H	0.05
#define DTA_BUTTON_W	0.13
#define DTA_SPACE		0.011
#define DTA_COL			(DTA_X + DTA_SPACE)
#define DTA_ROW			(DTA_Y + DTA_SPACE)
#define DTA_COLINC		(DTA_BUTTON_W + DTA_SPACE)
#define DTA_ROWINC		(DTA_BUTTON_H + DTA_SPACE)
#define DTA_TEXTSIZE		0.03
#define DTA_TEXTSIZESMALL 0.025
#define DTA_TEXT		"PuristaSemiBold"

class DTA_RscPicture
{
    access = 0;
    idc = -1;
    type = CT_STATIC;
    style = ST_PICTURE;
    colorBackground[] = {0,0,0,0};
    colorText[] = {1,1,1,1};
    font = DTA_TEXT;
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

class DTA_RscText {
	x = 0;
	y = 0;
	h = 0.037;
	w = 0.3;
	type = 0;
	style = 0;
	shadow = 1;
	colorShadow[] = {0, 0, 0, 0.5};
	font = DTA_TEXT;
	SizeEx = DTA_TEXTSIZE;
	text = "";
	colorText[] = {1,1,1,1};
	colorBackground[] = {0, 0, 0, 0};
	linespacing = 1;
};

class DTA_RscEdit
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
	font = DTA_TEXT;
	SizeEx = DTA_TEXTSIZE;
	autocomplete = "";
	text = "";
	size = DTA_TEXTSIZE;
	shadow = 0;
	canModify = 1;
};
	
class DTA_RscTitle : DTA_RscText {
	style = 0;
	SizeEx = DTA_TEXTSIZE;
	//colorText[] = {0.95,0.95,0.95,1};
	colorText[] = {0,0,0,1};
};

class DTA_RscButtonMenu {
	idc = -1;
	type = 16;
	style = "0x02 + 0xC0";
	default = 0;
	shadow = 0;
	x = 0;
	y = 0;
	w = DTA_BUTTON_W;
	h = DTA_BUTTON_H;
	
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
	Size = DTA_TEXTSIZE;
	SizeEx = DTA_TEXTSIZE;
	soundEnter[] = {"",0.0,1};
	soundPush[] = {"",0.0,0};
	soundClick[] = {"",0.0,1};
	soundEscape[] = {"",0.0,1};
	action = "";
	text = "";
	font = DTA_TEXT;
	class HitZone {
		left = 0;
		top = 0;
		right = 0;
		bottom = 0;
	};
	class ShortcutPos {
		left = 0;
		top = 0;
		w = 0;
		h = 0;
	};
	class TextPos {
		left = 0;
		top = 0;
		right = 0;
		bottom = 0;
	};
	class Attributes {
		font = DTA_TEXT;
		color = "#E5E5E5";
		align = "center";
		shadow = "false";
	};
	class AttributesImage {
		font = DTA_TEXT;
		color = "#E5E5E5";
		align = "left";
	};
};

class DTA_RscButtonMenuText : DTA_RscButtonMenu{
	animTextureNormal = "#(argb,8,8,3)color(0,0,0,1)";
	animTextureDisabled = "#(argb,8,8,3)color(0,0,0,1)";
	animTextureOver = "#(argb,8,8,3)color(0,0,0,1)";
	animTextureFocused = "#(argb,8,8,3)color(0,0,0,1)";
	animTexturePressed = "#(argb,8,8,3)color(0,0,0,1)";
	animTextureDefault = "#(argb,8,8,3)color(0,0,0,1)";
	textureNoShortcut = "#(argb,8,8,3)color(0,0,0,1)";
};

class DTA_RscListBox
{
	style = 16;
	idc = -1;
	type = 5;
	w = 0.275;
	h = 0.04;
	font = DTA_TEXT;
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
	SizeEx = DTA_TEXTSIZE;
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

class dta_ActiveText
{
	idc = -1;
	type = CT_ACTIVETEXT;
	style = ST_LEFT;
	x = 0.75;
	y = 0.5;
	w = 0.2;
	h = 0.035;
	font = DTA_TEXT;
	SizeEx = DTA_TEXTSIZE;
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
class dtaDialogAssets
{
	idd = 100;
	name= "DTArtyAssets";
	movingEnable = false;
	enableSimulation = true;
	onLoad = "";
	
	class controlsBackground
	{
		class MainBackground : dta_RscText {
			colorBackground[] = {0, 0, 0, 0.7};
			idc = -1;
			x = DTA_X;
			y = DTA_Y;
			w = DTA_W;
			h = DTA_H;
			//h = DTA_H - (DTA_ROWINC * 2);
		};
		
		class dtaTextAsset : dta_RscText
		{
			idc = -1;
			text = "Assets";
			sizeEx = DTA_TEXTSIZE;
			x = DTA_COL;
			y = DTA_ROW;
			w = DTA_BUTTON_W  + (DTA_COLINC * 2);
			h = DTA_BUTTON_H;
		};

		class dtaTextMissions : dta_RscText
		{
			idc = -1;
			text = "Previous FFE/Plot Missions";
			sizeEx = DTA_TEXTSIZE;
			x = DTA_COL;
			y = DTA_ROW + (DTA_ROWINC * 8);
			w = DTA_BUTTON_W  + (DTA_COLINC * 2);
			h = DTA_BUTTON_H;
		};
	};
	
	class controls
	{
		class dtaListAsset : dta_RscListBox 
		{
			idc = 101;
			text = "";
			onLBSelChanged = "[] execVM 'DrongosArtillery\Dialog\SelectAsset.sqf'";
			x = DTA_COL;
			y = DTA_ROW + (DTA_ROWINC * 1);
			w = DTA_BUTTON_W + (DTA_COLINC * 6);
			h = (DTA_BUTTON_H * 7) - DTA_SPACE;
		};

		class dtaListMissions : dta_RscListBox 
		{
			idc = 102;
			text = "";
			onLBSelChanged = "[] execVM 'DrongosArtillery\Dialog\SelectMission.sqf'";
			x = DTA_COL;
			y = DTA_ROW + (DTA_ROWINC * 9);
			w = DTA_BUTTON_W + (DTA_COLINC * 6);
			h = (DTA_BUTTON_H * 6) - DTA_SPACE;
		};
		
		class dtaButtonControlAsset : dta_RscButtonMenu
		{
			idc = -1;
			text = "Control";
			onButtonClick = "nul = [false] execVM 'DrongosArtillery\Dialog\ControlAsset.sqf'";
			x = DTA_COL + (DTA_COLINC * 0);
			y = DTA_ROW + (DTA_ROWINC * 7);
			w = DTA_BUTTON_W;
			h = DTA_BUTTON_H;
		};
	
		class dtaButtonReleaseAsset : dta_RscButtonMenu
		{
			idc = -1;
			text = "Release";
			onButtonClick = "nul = [] execVM 'DrongosArtillery\Dialog\ReleaseAsset.sqf'";
			x = DTA_COL + (DTA_COLINC * 1);
			y = DTA_ROW + (DTA_ROWINC * 7);
			w = DTA_BUTTON_W;
			h = DTA_BUTTON_H;
		};

		class dtaButtonRefreshAssets : dta_RscButtonMenu
		{
			idc = -1;
			text = "Refresh";
			onButtonClick = "nul = [] execVM 'DrongosArtillery\Dialog\RefreshAssets.sqf'";
			x = DTA_COL + (DTA_COLINC * 6);
			y = DTA_ROW + (DTA_ROWINC * 7);
			w = DTA_BUTTON_W;
			h = DTA_BUTTON_H;
		};

		class dtaButtonControlMission : dta_RscButtonMenu
		{
			idc = -1;
			text = "Select Mission";
			onButtonClick = "nul = [true] execVM 'DrongosArtillery\Dialog\ControlAsset.sqf'";
			x = DTA_COL + (DTA_COLINC * 0);
			y = DTA_ROW + (DTA_ROWINC * 14);
			w = DTA_BUTTON_W;
			h = DTA_BUTTON_H * 1.5;
		};
	};	
};

/////////////////////////////////////////////////////////////
// Artillery
/////////////////////////////////////////////////////////////
class dtaDialogControl
{
	idd = 200;
	name= "DTArty";
	movingEnable = false;
	enableSimulation = true;
	onLoad = "";
	
	class controlsBackground
	{
		class MainBackground : dta_RscText {
			colorBackground[] = {0,0,0,0.8};
			//colorBackground[] = {0,0,0,1};
			idc = -1;
			x = DTA_X;
			y = DTA_Y;
			w = DTA_W;
			h = DTA_H;
			//w = DTA_W - (DTA_COLINC * 1);
			//h = DTA_H - (DTA_ROWINC * 1);
		};
		
		class dtaTextAsset : dta_RscText
		{
			idc = 201;
			text = "";
			sizeEx = DTA_TEXTSIZE;
			x = DTA_COL + (DTA_COLINC * 0);
			y = DTA_ROW + (DTA_ROWINC * 0);
			w = DTA_BUTTON_W  + (DTA_COLINC * 3);
			h = DTA_BUTTON_H;
		};
		
		class dtaTextAssetTube : dta_RscText
		{
			idc = 218;
			text = "Tube:";
			sizeEx = DTA_TEXTSIZE;
			x = DTA_COL + (DTA_COLINC * 4);
			y = DTA_ROW + (DTA_ROWINC * 0);
			w = DTA_BUTTON_W;
			h = DTA_BUTTON_H;
		};

		class dtaTextPos : dta_RscText
		{
			idc = -1;
			text = "Aimpoint:";
			sizeEx = DTA_TEXTSIZE;
			x = DTA_COL + (DTA_COLINC * 0);
			y = DTA_ROW + (DTA_ROWINC * 1);
			w = DTA_BUTTON_W  + (DTA_COLINC * 1);
			h = DTA_BUTTON_H;
		};

		class dtaTextPosX : dta_RscText
		{
			idc = -1;
			text = "X:";
			sizeEx = DTA_TEXTSIZE;
			x = DTA_COL + (DTA_COLINC * 0);
			y = DTA_ROW + (DTA_ROWINC * 2);
			w = (DTA_BUTTON_W * 0.5);
			h = DTA_BUTTON_H;
		};

		class dtaTextPosY : dta_RscText
		{
			idc = -1;
			text = "Y:";
			sizeEx = DTA_TEXTSIZE;
			x = DTA_COL + (DTA_COLINC * 0);
			y = DTA_ROW + (DTA_ROWINC * 3);
			w = (DTA_BUTTON_W * 0.5);
			h = DTA_BUTTON_H;
		};
		
		class dtaTextPosZ : dta_RscText
		{
			idc = -1;
			text = "Z:";
			sizeEx = DTA_TEXTSIZE;
			x = DTA_COL + (DTA_COLINC * 0);
			y = DTA_ROW + (DTA_ROWINC * 4);
			w = (DTA_BUTTON_W * 0.5);
			h = DTA_BUTTON_H;
		};

		class dtaTextDistance : dta_RscText
		{
			idc = -1;
			text = "DIST:";
			sizeEx = DTA_TEXTSIZE;
			x = DTA_COL + (DTA_COLINC * 0);
			y = DTA_ROW + (DTA_ROWINC * 5);
			w = (DTA_BUTTON_W * 0.5);
			h = DTA_BUTTON_H;
		};

		class dtaTextCEP : dta_RscText
		{
			idc = -1;
			text = "CEP:";
			sizeEx = DTA_TEXTSIZE;
			x = DTA_COL + (DTA_COLINC * 0);
			y = DTA_ROW + (DTA_ROWINC * 6);
			w = (DTA_BUTTON_W * 0.5);
			h = DTA_BUTTON_H;
		};
		
		class dtaTextGTL : dta_RscText
		{
			idc = -1;
			text = "GTL:";
			sizeEx = DTA_TEXTSIZE;
			x = DTA_COL + (DTA_COLINC * 0);
			y = DTA_ROW + (DTA_ROWINC * 7);
			w = (DTA_BUTTON_W * 0.5);
			h = DTA_BUTTON_H;
		};
		
		class dtaTextAdjust : dta_RscText
		{
			idc = -1;
			text = "Adjust (-x for </v)";
			//text = "-99 = < / v";
			sizeEx = DTA_TEXTSIZE;
			x = DTA_COL + (DTA_COLINC * 0);
			y = DTA_ROW + (DTA_ROWINC * 11.5);
			w = DTA_BUTTON_W  + (DTA_COLINC * 1);
			h = DTA_BUTTON_H;
		};

		class dtaTextAdjustLeftRight : dta_RscText
		{
			idc = -1;
			text = "< / >";
			sizeEx = DTA_TEXTSIZE;
			x = DTA_COL + (DTA_COLINC * 0);
			y = DTA_ROW + (DTA_ROWINC * 12.5);
			w = (DTA_BUTTON_W * 1);
			h = DTA_BUTTON_H;
		};

		class dtaTextAdjustAddDrop : dta_RscText
		{
			idc = -1;
			text = "^ / v";
			sizeEx = DTA_TEXTSIZE;
			x = DTA_COL + (DTA_COLINC * 0);
			y = DTA_ROW + (DTA_ROWINC * 13.5);
			w = (DTA_BUTTON_W * 1);
			h = DTA_BUTTON_H;
		};

		class dtaTextPosXGPS : dta_RscText
		{
			idc = -1;
			text = "GPS X:";
			sizeEx = DTA_TEXTSIZE;
			x = DTA_COL + (DTA_COLINC * 0);
			y = DTA_ROW + (DTA_ROWINC * 8);
			w = (DTA_BUTTON_W * 0.5);
			h = DTA_BUTTON_H;
		};

		class dtaTextPosYGPS : dta_RscText
		{
			idc = -1;
			text = "GPS Y:";
			sizeEx = DTA_TEXTSIZE;
			x = DTA_COL + (DTA_COLINC * 0);
			y = DTA_ROW + (DTA_ROWINC * 9);
			w = (DTA_BUTTON_W * 0.5);
			h = DTA_BUTTON_H;
		};

		class dtaTextAdjustElevGPS : dta_RscText
		{
			idc = -1;
			text = "GPS Z (AGL):";
			sizeEx = DTA_TEXTSIZE;
			x = DTA_COL + (DTA_COLINC * 0);
			y = DTA_ROW + (DTA_ROWINC * 10);
			w = (DTA_BUTTON_W * 1);
			h = DTA_BUTTON_H;
		};
		
		class dtaTextRounds : dta_RscText
		{
			idc = -1;
			text = "RNDS:";
			sizeEx = DTA_TEXTSIZE;
			x = DTA_COL + (DTA_COLINC * 2);
			y = DTA_ROW + (DTA_ROWINC * 8);
			w = DTA_BUTTON_W / 2;
			h = DTA_BUTTON_H;
		};

	/*	class dtaPicRounds : dta_RscPicture
		{
			idc = -1;
			text = "DrongosArtillery\Icons\Rounds.jpg";
			//sizeEx = DTA_TEXTSIZE;
			x = DTA_COL + (DTA_COLINC * 2);
			y = DTA_ROW + (DTA_ROWINC * 8);
			w = DTA_BUTTON_W / 2;
			h = DTA_BUTTON_H;
		};*/

		class dtaTextSheafSize : dta_RscText
		{
			idc = -1;
			text = "     Sheaf Size (Y = BOX ONLY)";
			sizeEx = DTA_TEXTSIZE;
			x = DTA_COL + (DTA_COLINC * 5);
			y = DTA_ROW + (DTA_ROWINC * 4);
			w = (DTA_BUTTON_W * 3);
			h = DTA_BUTTON_H;
		};

		class dtaTextSheafSizeX : dta_RscText
		{
			idc = -1;
			text = "  X:";
			sizeEx = DTA_TEXTSIZE;
			x = DTA_COL + (DTA_COLINC * 5.5);
			y = DTA_ROW + (DTA_ROWINC * 5);
			w = (DTA_BUTTON_W * 1);
			h = DTA_BUTTON_H;
		};

		class dtaTextSheafSizeY : dta_RscText
		{
			idc = -1;
			text = "  Y:";
			sizeEx = DTA_TEXTSIZE;
			x = DTA_COL + (DTA_COLINC * 5.5);
			y = DTA_ROW + (DTA_ROWINC * 6);
			w = (DTA_BUTTON_W * 1);
			h = DTA_BUTTON_H;
		};
		
		class dtaTextSheafLine : dta_RscText
		{
			idc = -1;
			text = "            Sheaf Line";
			sizeEx = DTA_TEXTSIZE;
			x = DTA_COL + (DTA_COLINC * 5);
			y = DTA_ROW + (DTA_ROWINC * 8);
			w = (DTA_BUTTON_W * 3);
			h = DTA_BUTTON_H;
		};

		class dtaTextSheafLineDir : dta_RscText
		{
			idc = -1;
			text = "DIR:";
			sizeEx = DTA_TEXTSIZE;
			x = DTA_COL + (DTA_COLINC * 5.5);
			y = DTA_ROW + (DTA_ROWINC * 9);
			w = (DTA_BUTTON_W * 1);
			h = DTA_BUTTON_H;
		};

		class dtaTextSheafLineDist : dta_RscText
		{
			idc = -1;
			text = "DIST:";
			sizeEx = DTA_TEXTSIZE;
			x = DTA_COL + (DTA_COLINC * 5.5);
			y = DTA_ROW + (DTA_ROWINC * 10);
			w = (DTA_BUTTON_W * 1);
			h = DTA_BUTTON_H;
		};
	};
	
	class controls
	{
		class dtaButtonTubePrevious : dta_ActiveText
		{
			idc = -1;
			text = "<<";
			action = "[""Previous""] execVM 'DrongosArtillery\Dialog\ChangeTube.sqf'";
			x = DTA_COL + (DTA_COLINC * 5);
			y = DTA_ROW + (DTA_ROWINC * 0);
			w = DTA_BUTTON_W / 2;
			h = DTA_BUTTON_H;
			colorDisabled[] = {1,1,1,0.25};
		};

		class dtaButtonTubeNext : dta_ActiveText
		{
			idc = -1;
			text = ">>";
			action = "[""Next""] execVM 'DrongosArtillery\Dialog\ChangeTube.sqf'";
			x = DTA_COL + (DTA_COLINC * 5.5);
			y = DTA_ROW + (DTA_ROWINC * 0);
			w = DTA_BUTTON_W / 2;
			h = DTA_BUTTON_H;
			colorDisabled[] = {1,1,1,0.25};
		};
		
		class dtaEditX : dta_RscText
		{
			idc = 202;
			x = DTA_COL + (DTA_COLINC * 0.5);
			y = DTA_ROW + (DTA_ROWINC * 2);
			w = DTA_BUTTON_W;
			h = DTA_BUTTON_H;
			text = "";
		};

		class dtaEditY : dta_RscText
		{
			idc = 203;
			x = DTA_COL + (DTA_COLINC * 0.5);
			y = DTA_ROW + (DTA_ROWINC * 3);
			w = DTA_BUTTON_W;
			h = DTA_BUTTON_H;
			text = "";
		};
		
		class dtaEditElev : dta_RscText
		{
			idc = 219;
			text = "XXXX";
			x = DTA_COL + (DTA_COLINC * 0.5);
			y = DTA_ROW + (DTA_ROWINC * 4);
			w = DTA_BUTTON_W;
			h = DTA_BUTTON_H;
		};

		class dtaEditDistance : dta_RscText
		{
			idc = 216;
			text = "XXXX";
			x = DTA_COL + (DTA_COLINC * 0.5);
			y = DTA_ROW + (DTA_ROWINC * 5);
			w = DTA_BUTTON_W;
			h = DTA_BUTTON_H;
		};

		class dtaEditCEP : dta_RscText
		{
			idc = 220;
			text = "XXXX";
			x = DTA_COL + (DTA_COLINC * 0.5);
			y = DTA_ROW + (DTA_ROWINC * 6);
			w = DTA_BUTTON_W * 1.4;
			h = DTA_BUTTON_H;
		};
		
		class dtaEditGTL : dta_RscText
		{
			idc = 217;
			text = "XXXX";
			x = DTA_COL + (DTA_COLINC * 0.5);
			y = DTA_ROW + (DTA_ROWINC * 7);
			w = DTA_BUTTON_W;
			h = DTA_BUTTON_H;
		};

		class dtaEditAdjustLR : dta_RscEdit
		{
			idc = 204;
			x = DTA_COL + (DTA_COLINC * 1);
			y = DTA_ROW + (DTA_ROWINC * 12.5);
			w = DTA_BUTTON_W;
			h = DTA_BUTTON_H;
			text = "0";
		};
		
		class dtaEditAdjustAddDrop : dta_RscEdit
		{
			idc = 205;
			x = DTA_COL + (DTA_COLINC * 1);
			y = DTA_ROW + (DTA_ROWINC * 13.5);
			w = DTA_BUTTON_W;
			h = DTA_BUTTON_H;
			text = "0";
		};

		//class dtaButtonAdjustClear : dta_RscButtonMenu
		//{
		//	idc = -1;
		//	text = "CLR";
		//	//onButtonClick = "[false] execVM 'DrongosArtillery\Dialog\ClearAdjust.sqf'";
		//	onButtonClick = "[] execVM 'DrongosArtillery\Dialog\ClearAdjust.sqf'";
		//	x = DTA_COL;
		//	y = DTA_ROW + (DTA_ROWINC * 11);
		//	w = DTA_BUTTON_W;
		//	h = DTA_BUTTON_H;
		//};

		//class dtaButtonAdjustSend : dta_RscButtonMenu
		//{
		//	idc = -1;
		//	text = "OK";
		//	//onButtonClick = "[false] execVM 'DrongosArtillery\Dialog\Adjust.sqf'";
		//	onButtonClick = "[] execVM 'DrongosArtillery\Dialog\Adjust.sqf'";
		//	x = DTA_COL + (DTA_COLINC * 1);
		//	y = DTA_ROW + (DTA_ROWINC * 11);
		//	w = DTA_BUTTON_W;
		//	h = DTA_BUTTON_H;
		//};
		
		//class dtaEditXGPS : dta_RscText
		//{
		//	idc = 222;
		//	x = DTA_COL + (DTA_COLINC * 6);
		//	y = DTA_ROW + (DTA_ROWINC * 8);
		//	w = DTA_BUTTON_W;
		//	h = DTA_BUTTON_H;
		//	text = "";
		//};
		
		//class dtaEditYGPS : dta_RscText
		//{
		//	idc = 223;
		//	x = DTA_COL + (DTA_COLINC * 6);
		//	y = DTA_ROW + (DTA_ROWINC * 9);
		//	w = DTA_BUTTON_W;
		//	h = DTA_BUTTON_H;
		//	text = "";
		//};
		
		class dtaEditAdjustXGPS : dta_RscEdit
		{
			idc = 222;
			x = DTA_COL + (DTA_COLINC * 1);
			y = DTA_ROW + (DTA_ROWINC * 8);
			w = DTA_BUTTON_W;
			h = DTA_BUTTON_H;
			text = "0";
		};
		
		class dtaEditAdjustYGPS : dta_RscEdit
		{
			idc = 223;
			x = DTA_COL + (DTA_COLINC * 1);
			y = DTA_ROW + (DTA_ROWINC * 9);
			w = DTA_BUTTON_W;
			h = DTA_BUTTON_H;
			text = "0";
		};
		
		class dtaEditAdjustElevGPS : dta_RscEdit
		{
			idc = 221;
			x = DTA_COL + (DTA_COLINC * 1);
			y = DTA_ROW + (DTA_ROWINC * 10);
			w = DTA_BUTTON_W;
			h = DTA_BUTTON_H;
			text = "0";
		};

		class dtaListWarheadType : dta_RscListBox 
		{
			idc = 206;
			text = "";
			onLBSelChanged = "";
			x = DTA_COL + (DTA_COLINC * 2);
			y = DTA_ROW + (DTA_ROWINC * 1);
			w = DTA_BUTTON_W + (DTA_COLINC * 2);
			h = (DTA_BUTTON_H * 8);
		};
		
		class dtaEditRounds : dta_RscEdit
		{
			idc = 207;
			x = DTA_COL + (DTA_COLINC * 2.5);
			y = DTA_ROW + (DTA_ROWINC * 8);
			w = (DTA_BUTTON_W / 2);
			h = DTA_BUTTON_H;
			text = "1";
		};

		class dtaListAngle : dta_RscListBox 
		{
			idc = 209;
			text = "";
			onLBSelChanged = "";
			x = DTA_COL + (DTA_COLINC * 4);
			y = DTA_ROW + (DTA_ROWINC * 8);
			w = DTA_BUTTON_W;
			h = (DTA_BUTTON_H * 3);
		};

		class dtaListMissionType : dta_RscListBox 
		{
			idc = 208;
			text = "";
			onLBSelChanged = "";
			x = DTA_COL + (DTA_COLINC * 3);
			y = DTA_ROW + (DTA_ROWINC * 8);
			w = DTA_BUTTON_W;
			h = (DTA_BUTTON_H * 3);
		};

		class dtaButtonTransmit : dta_RscButtonMenu
		{
			idc = -1;
			text = "Transmit";
			onButtonClick = "[] execVM 'DrongosArtillery\Dialog\Transmit.sqf'";
			x = DTA_COL + (DTA_COLINC * 0);
			y = DTA_ROW + (DTA_ROWINC * 15);
			w = DTA_BUTTON_W * 1.5;
			h = DTA_BUTTON_H;
		};
		
		class dtaButtonCheckFire : dta_RscButtonMenu
		{
			idc = -1;
			text = "Check Fire";
			onButtonClick = "call dta_fnc_CheckFire_Player;";
			x = DTA_COL + (DTA_COLINC * 1.83);
			y = DTA_ROW + (DTA_ROWINC * 15);
			w = DTA_BUTTON_W * 1.5;
			h = DTA_BUTTON_H;
		};

		class dtaListSheaf : dta_RscListBox 
		{
			idc = 211;
			text = "";
			onLBSelChanged = "";
			x = DTA_COL + (DTA_COLINC * 5);
			y = DTA_ROW + (DTA_ROWINC * 1);
			w = DTA_BUTTON_W;
			h = (DTA_BUTTON_H * 3.5);
		};

		class dtaEditSheafSizeX : dta_RscEdit
		{
			idc = 213;
			x = DTA_COL + (DTA_COLINC * 6);
			y = DTA_ROW + (DTA_ROWINC * 5);
			w = (DTA_BUTTON_W);
			h = DTA_BUTTON_H;
			text = "100";
		};

		class dtaEditSheafSizeY : dta_RscEdit
		{
			idc = 214;
			x = DTA_COL + (DTA_COLINC * 6);
			y = DTA_ROW + (DTA_ROWINC * 6);
			w = (DTA_BUTTON_W);
			h = DTA_BUTTON_H;
			text = "0";
		};

		class dtaEditSheafLineDir : dta_RscEdit
		{
			idc = 224;
			x = DTA_COL + (DTA_COLINC * 6);
			y = DTA_ROW + (DTA_ROWINC * 9);
			w = (DTA_BUTTON_W);
			h = DTA_BUTTON_H;
			text = "0";
		};

		class dtaEditSheafLineDist : dta_RscEdit
		{
			idc = 225;
			x = DTA_COL + (DTA_COLINC * 6);
			y = DTA_ROW + (DTA_ROWINC * 10);
			w = (DTA_BUTTON_W);
			h = DTA_BUTTON_H;
			text = "100";
		};

		class dtaListFuse : dta_RscListBox
		{
			idc = 212;
			text = "";
			onLBSelChanged = "[] execVM 'DrongosArtillery\Dialog\SelectFuse.sqf'";
			x = DTA_COL + (DTA_COLINC * 3);
			y = DTA_ROW + (DTA_ROWINC * 12);
			w = DTA_BUTTON_W * 2;
			h = (DTA_BUTTON_H * 3);
		};
		
		class dtaListAirburstHeight : dta_RscListBox 
		{
			idc = 215;
			text = "";
			onLBSelChanged = "";
			x = DTA_COL + (DTA_COLINC * 4.9);
			y = DTA_ROW + (DTA_ROWINC * 12);
			w = DTA_BUTTON_W;
			h = (DTA_BUTTON_H * 3);
		};

		class dtaButtonControlAssets : dta_RscButtonMenu
		{
			idc = -1;
			text = "Assets";
			onButtonClick = "[] execVM 'DrongosArtillery\Dialog\BackToAssets.sqf'";
			x = DTA_COL + (DTA_COLINC * 5.5);
			y = DTA_ROW + (DTA_ROWINC * 15);
			w = DTA_BUTTON_W * 1.5;
			h = DTA_BUTTON_H;
		};

		class dtaButtonControlEndMission : dta_RscButtonMenu
		{
			idc = -1;
			text = "End Mission";
			onButtonClick = "[true] execVM 'DrongosArtillery\Dialog\EndMission.sqf'";
			x = DTA_COL + (DTA_COLINC * 3.66);
			y = DTA_ROW + (DTA_ROWINC * 15);
			w = DTA_BUTTON_W * 1.5;
			h = DTA_BUTTON_H;
		};

	};
};

/////////////////////////////////////////////////////////////
// Aimpoint input
/////////////////////////////////////////////////////////////
class dtaDialogAimpoint
{
	idd = 400;
	name= "DTAaimpoint";
	movingEnable = false;
	enableSimulation = true;
	onLoad = "";
	
	class controlsBackground
	{
	
		class MainBackground:dta_RscText {
			colorBackground[] = {0, 0, 0, 0.7};
			idc = -1;
			x = DTA_X + (DTA_BUTTON_W * 2);
			y = DTA_Y;
			//w = DTA_W;
			//h = DTA_H;
			w = DTA_W - (DTA_BUTTON_W * 4);
			h = (DTA_H / 2) - DTA_BUTTON_H;
		};
		
		class dtaTextAimpoint : dta_RscText
		{
			idc = 401;
			text = "Input aimpoint (10-digit GR)";
			sizeEx = DTA_TEXTSIZE;
			x = DTA_COL + (DTA_COLINC * 3);
			y = DTA_ROW + (DTA_ROWINC * 1);
			w = DTA_BUTTON_W  + (DTA_COLINC * 6);
			h = DTA_BUTTON_H;
		};

		class dtaTextPosXaimpoint : dta_RscText
		{
			idc = -1;
			text = "X:";
			sizeEx = DTA_TEXTSIZE;
			x = DTA_COL + (DTA_COLINC * 2.5);
			y = DTA_ROW + (DTA_ROWINC * 2);
			w = (DTA_BUTTON_W * 0.5);
			h = DTA_BUTTON_H;
		};

		class dtaTextPosYaimpoint : dta_RscText
		{
			idc = -1;
			text = "Y:";
			sizeEx = DTA_TEXTSIZE;
			x = DTA_COL + (DTA_COLINC * 2.5);
			y = DTA_ROW + (DTA_ROWINC * 3);
			w = (DTA_BUTTON_W * 0.5);
			h = DTA_BUTTON_H;
		};
	};
	
	class controls
	{
		class dtaEditXaimpoint : dta_RscEdit
		{
			idc = 402;
			x = DTA_COL + (DTA_COLINC * 3);
			y = DTA_ROW + (DTA_ROWINC * 2);
			w = DTA_BUTTON_W;
			h = DTA_BUTTON_H;
			text = "";
		};

		class dtaEditYaimpoint : dta_RscEdit
		{
			idc = 403;
			x = DTA_COL + (DTA_COLINC * 3);
			y = DTA_ROW + (DTA_ROWINC * 3);
			w = DTA_BUTTON_W;
			h = DTA_BUTTON_H;
			text = "";
		};

		class dtaButtonInputAimpoint : dta_RscButtonMenu
		{
			idc = -1;
			text = "Input";
			onButtonClick = "[] execVM 'DrongosArtillery\Dialog\InputAimpoint.sqf'";
			x = DTA_COL + (DTA_COLINC * 3);
			y = DTA_ROW + (DTA_ROWINC * 4);
			w = DTA_BUTTON_W;
			h = DTA_BUTTON_H;
		};

		class dtaButtonInputAimpointMapclick : dta_RscButtonMenu
		{
			idc = -1;
			text = "Mapclick";
			onButtonClick = "[] execVM 'DrongosArtillery\Dialog\InputAimpointMapclick.sqf'";
			x = DTA_COL + (DTA_COLINC * 4);
			y = DTA_ROW + (DTA_ROWINC * 4);
			w = DTA_BUTTON_W;
			h = DTA_BUTTON_H;
		};

		class dtaButtonAimpointAssets : dta_RscButtonMenu
		{
			idc = -1;
			text = "Assets";
			onButtonClick = "[] execVM 'DrongosArtillery\Dialog\BackToAssets.sqf'";
			x = DTA_COL + (DTA_COLINC * 3);
			y = DTA_ROW + (DTA_ROWINC * 6);
			w = DTA_BUTTON_W;
			h = DTA_BUTTON_H;
		};
		class dtaButtonAimpointHelp : dta_RscButtonMenu
		{
			idc = -1;
			text = "Help";
			onButtonClick = "[] execVM 'DrongosArtillery\Dialog\AimpointHelp.sqf'";
			x = DTA_COL + (DTA_COLINC * 4.5);
			y = DTA_ROW + (DTA_ROWINC * 6);
			w = DTA_BUTTON_W / 2;
			h = DTA_BUTTON_H;
		};

	};
};