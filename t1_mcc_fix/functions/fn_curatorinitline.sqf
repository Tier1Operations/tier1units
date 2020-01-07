if (isclass (configFile >> "CfgPatches" >> "achilles_ui_f")) exitWith {};
if (isclass (configFile >> "CfgPatches" >> "zen_main")) exitWith {};

/*============================================================MCC_fnc_curatorInitLine=====================================================================================
	manage curator init line
	 Example: [] call MCC_fnc_curatorInitLine;
	 	rank - 14769
		pos - 20276
		Damage - 17802
		Skill - 16584
		Respawn - 39809
		Fuel - 14774
		Name - 15000
=======================================================================================================================================================================*/
//#include "..\..\script_component.hpp"
#include "\a3\ui_f\hpp\definedikcodes.inc"

private ["_time","_target","_avtiveControls","_curator","_idc","_control","_display","_controlPos","_posY","_ctrlBackground","_ctrlTitle","_ctrlContent","_ctrlButtonOK","_ctrlButtonCancel","_ctrlBackgroundPos","_ctrlTitlePos","_ctrlContentPos","_ctrlButtonOKPos","_ctrlButtonCancelPos","_ctrlTitleOffsetY","_ctrlContentOffsetY","_name","_ctrlButtonCustom","_ctrlButtonCustomPos","_comboBox","_displayname","_ctrlButtonCustom2","_ctrlButtonCustom2Pos","_ctrlButtonCustom3","_ctrlButtonCustom3Pos","_cargoEnabled","_loadOutEnabled","_presetType","_preset","_targetData","_targetCategory","_targetType","_class","_cfgControl","_keyUp","_keyDown","_garageEnabled"];
disableSerialization;

#define MCCCuratorInit_IDD 10000
#define MCC_NAMEBOX 8003
#define MCC_INITBOX 13766
#define MCC_PRESETS 8005

#define MCC_3DCargoGen 8018

#define IDC_OK	1
#define IDC_CANCEL 2

_curator 		= _this select 0;
_target 		= _this select 1;
_time 			= time +0.1;
MCC_unitInit 	= "";
MCC_unitName 	= "";


//Recognize shift key so we can disable MCC custom Zeus if we want to
_keyUp = (findDisplay 312) displayAddEventHandler  ["KeyUp", "if (_this select 4) then {missionNamespace setvariable ['MCC_ctrlPressed',false]}"];
_keyDown = (findDisplay 312) displayAddEventHandler  ["KeyDown", "if ((_this select 4) && !(missionNamespace getvariable ['MCC_ctrlPressed',false])) then {missionNamespace setvariable ['MCC_ctrlPressed',true]}"];

if (!alive _target || isNull _target || (_target isKindof "Module_F") || (missionNamespace getVariable ["MCC_ctrlPressed",false]) || (missionNamespace getVariable ["MCC_CuratorEditDisabled",false])) exitWith {};

//_target call bis_fnc_showCuratorAttributes;

_str = "<t size='0.8' t font = 'puristaLight' color='#FFFFFF'>" + "Hold Alt to disable MCC edit" + "</t>";
_null = [_str,0,1.1,2,0.1,0.0] spawn bis_fnc_dynamictext;

//What are we dealing here
_targetData = _target call bis_fnc_objectType;
_targetCategory = _targetData select 0;
_targetType = _targetData select 1;

if (_targetCategory != "Object") then {
	waituntil {dialog || (time > _time)};
} else {
	waituntil {(time > _time)};
};

//Not something we handle - exit
if !(_targetCategory in ["Soldier","Vehicle","VehicleAutonomous","Object"]) exitWith {};


while {dialog} do {closeDialog 0};

_loadOutEnabled = isClass (configFile >> "cfgVehicles" >> typeof _target >> "Components" >> "TransportPylonsComponent");

_garageEnabled = false;
_cargoEnabled	= false;

switch (_targetCategory) do {
	case ("Soldier"): {
		_class = "MCC_RscDisplayAttributesMan";
		missionnamespace setvariable ["MCC_CuratorInitLine_presettype","unit"];
	};

	case ("Vehicle"): {
		if (isNull (group _target)) then {
			_class = "MCC_RscDisplayAttributesVehicleEmpty";
		} else {
			_class = "MCC_RscDisplayAttributesVehicle";
		};
		_cargoEnabled = true;
		_garageEnabled = true;
		missionnamespace setvariable ["MCC_CuratorInitLine_presettype","vehicle"];
	};

	case ("VehicleAutonomous"):	{
		_class = "MCC_RscDisplayAttributesVehicle";
		_cargoEnabled	= true;
		_garageEnabled = true;
		missionnamespace setvariable ["MCC_CuratorInitLine_presettype","vehicle"];
	};

	case ("Object"): {
		_class = "MCC_RscDisplayAttributesObject";
		_cargoEnabled	= if (_targetType == "AmmoBox") then {true} else {false};

		missionnamespace setvariable ["MCC_CuratorInitLine_presettype","object"];
	};
};


if (isNil "_class") exitWith {};

createDialog _class;
waituntil {dialog};

ctrlShow [MCC_3DCargoGen,false];
_display 	= findDisplay MCCCuratorInit_IDD;
_ctrlBackground = _display displayctrl 10001;
_ctrlTitle = _display displayctrl 10002;
_ctrlContent = _display displayctrl 10003;
_ctrlButtonOK = _display displayctrl IDC_OK;
_ctrlButtonCancel = _display displayctrl IDC_CANCEL;
_ctrlButtonCustom = _display displayctrl 10006;
_ctrlButtonCustom2 = _display displayctrl 10007;
_ctrlButtonCustom3 = _display displayctrl 10008;

_ctrlBackgroundPos = ctrlposition _ctrlBackground;
_ctrlTitlePos = ctrlposition _ctrlTitle;
_ctrlContentPos = ctrlposition _ctrlContent;
_ctrlButtonOKPos = ctrlposition _ctrlButtonOK;
_ctrlButtonCancelPos = ctrlposition _ctrlButtonCancel;
_ctrlButtonCustomPos = ctrlposition _ctrlButtonCustom;
_ctrlButtonCustom2Pos = ctrlposition _ctrlButtonCustom2;
_ctrlButtonCustom3Pos = ctrlposition _ctrlButtonCustom3;

_ctrlTitleOffsetY = (_ctrlBackgroundPos select 1) - (_ctrlTitlePos select 1) - (_ctrlTitlePos select 3);
_ctrlContentOffsetY = (_ctrlContentPos select 1) - (_ctrlBackgroundPos select 1);

_posY = (_ctrlContentPos select 1) - (_ctrlBackgroundPos select 1);

_avtiveControls = configfile >> _class >> "Controls" >> "Content" >> "Controls";

//Set the control groups
for "_i" from 0 to (count _avtiveControls - 1) do
{
	_cfgControl = _avtiveControls select _i;

	if (isclass _cfgControl) then
	{
		_idc = getnumber (_cfgControl >> "idc");
		_control = _display displayctrl _idc;
		_controlPos = ctrlposition _control;
		_controlPos set [0,0];
		_controlPos set [1,_posY];
		_control ctrlsetposition _controlPos;
		_control ctrlShow true;
		_control ctrlcommit 0;
		_posY = _posY + (_controlPos select 3) + 0.005;
		ctrlsetfocus _control;
	};
};

//Set the frame
_posH = ((_posY + _ctrlContentOffsetY) min 0.9) * 0.5;

_ctrlTitlePos set [1,(0.5 - _posH) - (_ctrlTitlePos select 3) - _ctrlTitleOffsetY];
_ctrlTitle ctrlsetposition _ctrlTitlePos;
_ctrlTitle ctrlcommit 0;

_ctrlContentPos set [1,0.5 - _posH];
_ctrlContentPos set [3,_posH * 2];
_ctrlContent ctrlsetposition _ctrlContentPos;
_ctrlContent ctrlcommit 0;

_ctrlBackgroundPos set [1,0.5 - _posH];
_ctrlBackgroundPos set [3,_posH * 2];
_ctrlBackground ctrlsetposition _ctrlBackgroundPos;
_ctrlBackground ctrlcommit 0;

_ctrlButtonOKPos set [1,0.5 + _posH + _ctrlTitleOffsetY];
_ctrlButtonOK ctrlsetposition _ctrlButtonOKPos;
_ctrlButtonOK ctrlcommit 0;
ctrlsetfocus _ctrlButtonOK;

_ctrlButtonCancelPos set [1,0.5 + _posH + _ctrlTitleOffsetY];
_ctrlButtonCancel ctrlsetposition _ctrlButtonCancelPos;
_ctrlButtonCancel ctrlcommit 0;

_ctrlButtonCustomPos set [1,0.5 + _posH + _ctrlTitleOffsetY];
_ctrlButtonCustom ctrlsetposition _ctrlButtonCustomPos;
_ctrlButtonCustom ctrlsetText "Add Preset";
_ctrlButtonCustom ctrlcommit 0;



//Set the tittle
_name = switch (typename _target) do
	{
		case (typename objnull): {gettext (configfile >> "cfgvehicles" >> typeof _target >> "displayname")};
		case (typename grpnull): {groupid _target};
		case (typename []): {format ["%1: %3 #%2",groupid (_target select 0),_target select 1,localize "str_a3_cfgmarkers_waypoint_0"]};
		case (typename ""): {markertext _target};
	};
_ctrlTitle ctrlsettext format ["(MCC) EDIT %1",toupper _name];

//Add presets
_presetType = missionnamespace getvariable ["MCC_CuratorInitLine_presettype",""];
_preset = switch (_presetType) do
			{
				case (""): {[]};
				case ("vehicle"): {mccPresetsVehicle};
				case ("unit"): {mccPresetsUnits};
				case ("object"): {mccPresetsObjects};
			};

_comboBox = _display displayCtrl MCC_PRESETS;		//fill combobox Presets
lbClear _comboBox;
{
	_displayname = _x select 0;
	_comboBox lbAdd _displayname;
} foreach _preset;
_comboBox lbSetCurSel 0;

//Add init
ctrlSetText [MCC_INITBOX, _target getvariable ["vehicleinit",""]];

//Add event handlers
//ok
_ctrlButtonOK ctrladdeventhandler [
		"setFocus",
		{
			MCC_unitName = ctrlText 8003;
			MCC_unitInit = ctrlText 13766;
		}
	];

//Hide preset controls - we don't need them anymore
{_x ctrlShow false} forEach [_ctrlButtonCustom, _ctrlButtonCustom2,_ctrlButtonCustom3];

//Build custom controls
private ["_ctrlPos","_lastCtrl","_baseCtrlPos","_counter"];
_lastCtrl = _ctrlButtonOK;
_baseCtrlPos = ctrlPosition _ctrlButtonOK;
_counter = 0;
{
	_x params ["_condition","_text","_code"];

	if (_condition) then {


		//Get down one line when mod 3
		if (_counter mod 3 == 0 && _counter != 0) then {
			_baseCtrlPos set [1, (_baseCtrlPos select 1) + (_baseCtrlPos select 3)*1.2];
			_ctrlPos = _baseCtrlPos;
		} else {
			_ctrlPos = ctrlPosition _lastCtrl;
		};

		_ctrlPos set [0, (_ctrlPos select 0) - ((_ctrlPos select 2)*1.1)];
		_ctrl = (ctrlParent _lastCtrl) ctrlCreate ["RscButtonMenuOK", -1];
		_ctrl ctrlSetPosition _ctrlPos;
		_ctrl ctrlsetText _text;
		_ctrl ctrlSetBackgroundColor [(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69]),(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75]),(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5]),(profilenamespace getvariable ['GUI_BCG_RGB_A',0.8])];
		_ctrl ctrlcommit 0;

		_ctrl ctrladdeventhandler ["ButtonDown",_code];

		_lastCtrl = _ctrl;
		_counter = _counter + 1;
	};

} forEach [
	[true ,"Add Preset",{
			params ["_ctrl"];
			_display = ctrlParent _ctrl;
			_presetType = missionnamespace getvariable ["MCC_CuratorInitLine_presettype",""];
			_preset = switch (_presetType) do
						{
							case (""): {[]};
							case ("vehicle"): {mccPresetsVehicle};
							case ("unit"): {mccPresetsUnits};
							case ("object"): {mccPresetsObjects};
						};
			_ctrl = (_display displayCtrl 13766);
			_tempText = ctrlText 13766;
			_presetText = (_preset select (lbCurSel MCC_PRESETS)) select 1;
			ctrlSetText [13766,format ["%1 %2",_tempText,_presetText]];
		}],
	[_cargoEnabled ,"Cargo",{createdialog "RscDisplayAttributesInventory";}],
	[_garageEnabled ,"Garage",{closeDialog 0;["Open", [false, BIS_fnc_initCuratorAttributes_target]] call BIS_fnc_garage;}],
	[_loadOutEnabled ,"Payload",{[true,[]] spawn MCC_fnc_pylonsChange;}]
];

//--- Close the display when entity is altered
[_display] spawn
{
	disableserialization;
	_display = _this select 0;
	_target = missionnamespace getvariable ["BIS_fnc_initCuratorAttributes_target",objnull];
	switch (typename _target) do
	{
		case (typename objnull):
		{
			_isAlive = alive _target;
			waituntil {isnull _display || (_isAlive && !alive _target)};
		};
		case (typename grpnull):
		{
			waituntil {isnull _display || isnull _target};
		};
		case (typename []):
		{
			_grp = _target select 0;
			_wpCount = count waypoints _grp;
			waituntil {isnull _display || (count waypoints _grp != _wpCount)};
		};
		case (typename ""):
		{
			waituntil {isnull _display || markertype _target == ""};
		};
	};
	_display closedisplay 2;
};

//Process the init and name
waituntil {!dialog};
if (MCC_unitName != "") then
{
	[[[netid _target,_target], MCC_unitName], "MCC_fnc_setVehicleName", true, true] spawn BIS_fnc_MP;
};

if (MCC_unitInit != "" && (MCC_unitInit != (_target getVariable ["vehicleInit",""]))) then
{
	[[[netid _target,_target], MCC_unitInit], "MCC_fnc_setVehicleInit", true, true] spawn BIS_fnc_MP;
};

/*
_keyUp = (findDisplay 312) displayRemoveEventHandler  ["KeyUp",_keyUp];
_keyDown = (findDisplay 312) displayRemoveEventHandler  ["KeyDown", _keyDown];
*/