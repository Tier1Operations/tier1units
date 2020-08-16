[
	"T1AM_ModEnabled",
	"CHECKBOX",
	["Mod Enabled","This allows you to enable/disable the mod. If you disable it, it will still be there in the background but it won't do anything."],
	"Tier 1 Artillery Mod",
	[true],
	true
] call CBA_fnc_addSetting;

[
	"T1AM_PrepTimes",
	"LIST",
	["Preparation Times","How long you must wait before the battery finishes processing the fire mission."],
	"Tier 1 Artillery Mod",
	[[0, 1, 2], ["Quick", "Normal", "Realistic"], 1],
	true
] call CBA_fnc_addSetting;

[
	"T1AM_AllowMapClick",
	"CHECKBOX",
	["Allow Map Click","Allows you to choose a fire mission position by clicking on the map. Otherwise, you'd need to type in (10 digit) grid coordinates."],
	"Tier 1 Artillery Mod",
	[true],
	true
] call CBA_fnc_addSetting;



[
	"T1AM_AuthorizeEveryone",
	"CHECKBOX",
	["Allow Everyone To Call Artillery","Allows everyone to call in artillery. If this is disabled, only authorized classnames/variables are allowed to make use of artillery."],
	["Tier 1 Artillery Mod","Authorization"],
	[true],
	true
] call CBA_fnc_addSetting;

[
	"T1AM_AuthorizedClasses",
	"EDITBOX",
	["Authorized Classnames","List of classnames who are allowed to use artillery. Must be an array containing strings, separated by commas, eg. [""B_Soldier_F"",""B_RangeMaster_F""]"],
	["Tier 1 Artillery Mod","Authorization"],
	[""],
	true
] call CBA_fnc_addSetting;

[
	"T1AM_AuthorizedVariables",
	"EDITBOX",
	["Authorized Variables","List of variables that are assigned to units. Must be an array containing variables, separated by commas, eg. [t1_unit1,t1_unit2]"],
	["Tier 1 Artillery Mod","Authorization"],
	[""],
	true
] call CBA_fnc_addSetting;



[
	"T1AM_Debug_Mode",
	"CHECKBOX",
	["Enable Debug Mode","Turn on debugging mode. Some additional info will be shown."],
	["Tier 1 Artillery Mod","Debug"],
	[false],
	true,
	{  
		[] spawn T1AM_Fnc_DebugStart;
	}
] call CBA_fnc_addSetting;

[
	"T1AM_DEBUG_ShowRounds",
	"CHECKBOX",
	["Show Rounds On Map","Rounds fired by artillery will be shown on the map."],
	["Tier 1 Artillery Mod","Debug"],
	[false],
	true
] call CBA_fnc_addSetting;

[
	"T1AM_DEBUG_DisableInitialMiss",
	"CHECKBOX",
	["Disable Initial Miss","Disable missing with the first shot. This will make it so the exact target position is always hit."],
	["Tier 1 Artillery Mod","Debug"],
	[false],
	true
] call CBA_fnc_addSetting;

[
	"T1AM_DEBUG_DisableRandomSpread",
	"CHECKBOX",
	["Disable Random Spread","Disable accuracy reduction caused by distance. This will make shots almost pin point accurate."],
	["Tier 1 Artillery Mod","Debug"],
	[false],
	true
] call CBA_fnc_addSetting;