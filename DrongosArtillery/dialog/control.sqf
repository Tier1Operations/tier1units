// This is the arty menu in which the player can select various options before transmitting the fire mission.


// If old instances of this script are still running, then exit.
if (dtaControlRunning) exitWith {};


private["_prePlotted","_iccCode","_assetName","_dialogName","_fireMission","_lastWarheadType",
"_rounds","_angle","_sheaf","_sheafSize","_fuse","_airburstHeight","_lastAngle","_lastRounds",
"_lastAngle","_lastSheaf","_lastSheafSize","_lastFuse","_lastAirburstHeight","_lastWarheadTypeIndex",
"_lastRoundsIndex","_lastAngleIndex","_lastSheafIndex","_lastFuseIndex","_lastAirburstHeightIndex",
"_asset","_name","_tubes","_assetName","_tubeType","_pos","_posArty","_xText","_yText",
"_dtaXtext","_dtaYtext","_list","_warheads","_warheadInfo","_roundType","_roundTypeClass",
"_roundsAvailable","_type","_types","_vehicle","_count","_missionTypes","_missionType",
"_lastPosDisplay","_newMission","_angleTypes","_dtaXNr","_dtaYNr","_82mm","_cfgVehicles",
"_class","_sheafTypes","_sheafType","_fuseTypes","_fuseType","_airburstHeights","_lastPos",
"_maximumRange","_warheadType","_scatterSpread","_scatterSpread2","_posGPS","_height",
"_lastMissionTypeIndex","_lastGPSZ_AGL","_scatterSpreadHigh","_scatterSpreadLow","_posGPSX",
"_lastGPSX","_lastGPSY","_posGPSY","_newExactPos","_distance","_elev","_posMap","_xMap","_yMap",
"_posReal","_xTemp","_yTemp","_lastSheafLineDir","_lastSheafLineDist"];

disableSerialization;

//diag_log "CONTROL START";


// Abort if there's something wrong with the leader's vehicle/gunner.
_veh = (vehicle (leader dtaSelectedAsset));
_gunner = gunner _veh;
_abort = false;

switch true do {
	case (isNull _gunner):{_abort = true};
	case (isNull _veh):{_abort = true};
	case (!(alive _gunner)):{_abort = true};
	case (!(alive _veh)):{_abort = true};
	case (vehicle _gunner == _gunner):{_abort = true};
	case (!(canFire _veh)):{_abort = true};
};
if (_abort) exitWith {hint "Asset is not responding."; [false] execVM "DrongosArtillery\Dialog\EndMission.sqf"};



dtaLastDialog = "Control";
_prePlotted = _this select 0;

//diag_log format["CONTROL - _prePlotted: %1", _prePlotted];

if (_prePlotted and {count dtaSelectedPrePlotted < 1}) exitWith {hint format["No mission selected.\n\nEnding mission."];[false] execVM "DrongosArtillery\Dialog\EndMission.sqf"};

if (_prePlotted) then {dtaHaveAimpoint = true};

if ((NOT dtaHaveAimpoint) AND (NOT _prePlotted)) exitWith {nul = [_prePlotted] execVM "DrongosArtillery\Dialog\Aimpoint.sqf"};


_assetName = format ["%1",dtaSelectedAsset];
if (_assetName == "<NULL-group>") exitWith {hint "No asset selected."};
if (_assetName == "any") exitWith {hint "No asset selected."};


// ICC code of menu.
_iccCode = 200;

dtaControlRunning = true;
_dialogName = "dtaDialogControl";
//if (_prePlotted) then {_dialogName = "dtaDialogControl2"};
createDialog _dialogName;


// Only required for pre-plotted missions
_fireMission = [];
_lastWarheadType = "";
_rounds = 0;
_angle = "";
_sheaf = "";
_sheafSize = [];
_fuse = "";
_airburstHeight = "";

_lastPos = [];
_lastWarheadType = "";
_lastRounds = 0;
_lastAngle = "";
_lastSheaf = "";
_lastSheafSize = [];
_lastFuse = "";
_lastAirburstHeight = "";

_lastWarheadTypeIndex = 0;
_lastRoundsIndex = 0;
_lastMissionTypeIndex = 0;
_lastAngleIndex = 0;
_lastSheafIndex = 0;
_lastFuseIndex = 0;
_lastAirburstHeightIndex = 0;

_newMission = false;


if (_prePlotted) then {
	_fireMission = dtaSelectedPrePlotted;
	_lastPos = _fireMission select 1;
	_lastWarheadType = _fireMission select 2;
	_rounds = _fireMission select 3;
	_lastAngle = _fireMission select 6;
	_lastSheaf = _fireMission select 10;
	_lastFuse = _fireMission select 11;
	_sheafSize = _fireMission select 12;
	_lastPosDisplay = _fireMission select 13;
	_lastAirburstHeight = _fireMission select 14;
	_newMission = _fireMission select 16;
	_lastSheafLineDir = _fireMission select 18;
	_lastSheafLineDist = _fireMission select 19;
	
	dtaLastMission = _fireMission select 5;
	dtaLastAngle = _lastAngle;
	dtaLastRounds = _rounds;
	dtaLastWarhead = _lastWarheadType;
	dtaLastFuse = _lastFuse;
	dtaLastAirburstHeight = _lastAirburstHeight;
	dtaLastSheaf = _lastSheaf;
	dtaLastSheafX = _sheafSize select 0;
	dtaLastSheafY = _sheafSize select 1;
	dtaLastGPSZ_AGL = _fireMission select 16;
	dtaLastSheafLineDir = _lastSheafLineDir;
	dtaLastSheafLineDist = _lastSheafLineDist;
	
	// If it's a preplotted mission, put the adjust values to 0.
	dtaLastAdjustX = 0;
	dtaLastAdjustY = 0;
	
	dtaFireMissionCurrent = [];
	
	dtaSelectedAsset setVariable ["DTA_exactPos", _lastPosDisplay, true];
	dtaLastGPSX = _lastPosDisplay select 0;
	dtaLastGPSY = _lastPosDisplay select 1;
	
	dtaLastPos = _lastPos;
	
	//diag_log format["CONTROL - PREPLOTTED MISSION - dtaLastPos: %1", dtaLastPos];
};


// Get current settings
if ((count dtaFireMissionCurrent) > 0) then {
	_fireMission = dtaFireMissionCurrent;
	_lastPos = _fireMission select 1;
	//_lastWarheadType = _fireMission select 2;
	//_rounds = _fireMission select 3;
	//_lastAngle = _fireMission select 6;
	//_lastSheaf = _fireMission select 10;
	//_lastFuse = _fireMission select 11;
	//_sheafSize = _fireMission select 12;
	//_lastAirburstHeight = _fireMission select 14;
	
	//dtaLastAirburstHeight = _lastAirburstHeight;
	
	dtaLastPos = _lastPos;
	
	//diag_log format["CONTROL - CURRENT FIRE MISSION - dtaLastPos: %1", dtaLastPos];
};


// If GPS pos X and Y hasn't been set yet, give it a value of current display pos.
// Z value can stay on zero.
if (dtaLastGPSX == -999999) then {
	dtaLastGPSX = dtaXdisplay;
};
if (dtaLastGPSY == -999999) then {
	dtaLastGPSY = dtaYdisplay;
};


_lastMissionType = dtaLastMission;
_lastAngle = dtaLastAngle;
_rounds = dtaLastRounds;
_lastWarheadType = dtaLastWarhead;
_lastFuse = dtaLastFuse;
_lastAirburstHeight = dtaLastAirburstHeight;
_lastSheaf = dtaLastSheaf;
_lastSheafSizeX = dtaLastSheafX;
_lastSheafSizeY = dtaLastSheafY;
_lastGPSX = dtaLastGPSX;
_lastGPSY = dtaLastGPSY;
_lastGPSZ_AGL = dtaLastGPSZ_AGL;
_lastSheafLineDir = dtaLastSheafLineDir;
_lastSheafLineDist = dtaLastSheafLineDist;

//diag_log format["CONTROL GPSX 1: %1", _lastGPSX];

// Sheaf size X
if (_lastSheafSizeX != 0) then {
	((findDisplay _iccCode) displayCtrl (_iccCode + 13)) ctrlSetText format ["%1",_lastSheafSizeX];
};

// Sheaf size Y
if (_lastSheafSizeY != 0) then {
	((findDisplay _iccCode) displayCtrl (_iccCode + 14)) ctrlSetText format ["%1",_lastSheafSizeY];
};

// Sheaf line dir
if (_lastSheafLineDir != 0) then {
	((findDisplay _iccCode) displayCtrl (_iccCode + 24)) ctrlSetText format ["%1",_lastSheafLineDir];
};

// Sheaf line dist
if (_lastSheafLineDist != 0) then {
	((findDisplay _iccCode) displayCtrl (_iccCode + 25)) ctrlSetText format ["%1",_lastSheafLineDist];
};

_posMap = [[_lastGPSX, _lastGPSY]] call dta_fnc_PosToMapGrid;
_xMap = parseNumber (_posMap select 0);
_yMap = parseNumber (_posMap select 1);

//diag_log format["CONTROL GPSX 2: %1", _posMap select 0];
//diag_log format["CONTROL GPSX 3: %1", _xMap];

// GPS X
_posGPSX = [_xMap] call dta_fnc_FormatCoordinates;
((findDisplay _iccCode) displayCtrl (_iccCode + 22)) ctrlSetText format ["%1",_posGPSX];

//diag_log format["CONTROL GPSX 4: %1", _posGPSX];

// GPS Y
_posGPSY = [_yMap] call dta_fnc_FormatCoordinates;
((findDisplay _iccCode) displayCtrl (_iccCode + 23)) ctrlSetText format ["%1",_posGPSY];

// GPS Z
if (_lastGPSZ_AGL != 0) then {
	((findDisplay _iccCode) displayCtrl (_iccCode + 21)) ctrlSetText format ["%1",_lastGPSZ_AGL];
};


onMapSingleClick "";
_asset = dtaSelectedAsset;
_name = [(vehicle (leader _asset))] call dta_fnc_VehicleName;
_tubes = [_asset] call dta_fnc_GroupVehicles;
_assetName = [_asset] call dta_fnc_TrimGroupName;
_vehicle = vehicle (leader _asset);
_assetType = _vehicle call dta_fnc_AssetType;


// Gun-Target line
_elev = ((AGLtoASL [dtaXdisplay,dtaYdisplay,0]) select 2) max 0;
_pos = [dtaXdisplay, dtaYdisplay, _elev];
_posArty = getPosASL _vehicle;
_artyElev = round(_posArty select 2);
_gtl = 0;
_gtl = [_posArty,_pos] call BIS_fnc_dirTo;
_gtl = round _gtl;
((findDisplay _iccCode) displayCtrl (_iccCode + 17)) ctrlSetText format ["%1 deg",_gtl];


// Elevation
dtaElevation = round dtaElevation;
((findDisplay _iccCode) displayCtrl (_iccCode + 19)) ctrlSetText format ["%1 m",dtaElevation];

_posMap = [[_posArty select 0, _posArty select 1]] call dta_fnc_PosToMapGrid;
_xMap = parseNumber (_posMap select 0);
_yMap = parseNumber (_posMap select 1);

_xText = [_xMap] call dta_fnc_FormatCoordinates;
_yText = [_yMap] call dta_fnc_FormatCoordinates;

_posMap = [[dtaXdisplay, dtaYdisplay]] call dta_fnc_PosToMapGrid;
_xMap = parseNumber (_posMap select 0);
_yMap = parseNumber (_posMap select 1);

_dtaXtext = [_xMap] call dta_fnc_FormatCoordinates;
_dtaYtext = [_yMap] call dta_fnc_FormatCoordinates;


((findDisplay _iccCode) displayCtrl (_iccCode + 1)) ctrlSetText format ["%1: %2 x%3  [%4 %5 %6]",_assetName,_name,(count _tubes),_xText,_yText,_artyElev];
((findDisplay _iccCode) displayCtrl (_iccCode + 2)) ctrlSetText format ["%1", _dtaXtext];
((findDisplay _iccCode) displayCtrl (_iccCode + 3)) ctrlSetText format ["%1", _dtaYtext];
((findDisplay _iccCode) displayCtrl (_iccCode + 4)) ctrlSetText format ["%1", dtaLastAdjustX];
((findDisplay _iccCode) displayCtrl (_iccCode + 5)) ctrlSetText format ["%1", dtaLastAdjustY];
((findDisplay _iccCode) displayCtrl (_iccCode + 7)) ctrlSetText format ["%1", _rounds];


// Active tube
((findDisplay _iccCode) displayCtrl (_iccCode + 18)) ctrlSetText format ["Tube: %1/%2",(dtaSelectedTubeIndex + 1),(count _tubes)];

dtaSelectedTube = _tubes select dtaSelectedTubeIndex;


// Update list with available ammo.
call dta_fnc_DisplayWarheads;
_warheadType = lbData [(_iccCode + 6), (lbCurSel (_iccCode + 6))];

//diag_log format["CONTROL - _warheadType: %1", _warheadType];

// Distance
if ((_warheadType in dtaGPSGuidedTypes) or {_warheadType in dtaGPSLaserTypes} or {_warheadType in dtaGPSSeekerTypes}) then {
	private _posGPS = AGLtoASL [_lastGPSX, _lastGPSY, _lastGPSZ_AGL];
	_distance = round ((getPosASL (vehicle (leader _asset))) vectorDistance  _posGPS);
	((findDisplay _iccCode) displayCtrl (_iccCode + 16)) ctrlSetText format ["%1 m (GPS)", _distance];
} else {
	_distance = round (_posArty vectorDistance _pos);
	((findDisplay _iccCode) displayCtrl (_iccCode + 16)) ctrlSetText format ["%1 m", _distance];
};


// Fire mission type
_count = 0;
_dialog = findDisplay _iccCode;
_list = _dialog displayCtrl (_iccCode + 8);
lbClear _list;
_missionTypes = ["SPOT","FFE","PLOT"];
if (_prePlotted) then {_missionTypes = ["SPOT","FFE"]};
_count = 0;
_missionType = "";
while {((count _missionTypes) > 0)} do {
	_missionType = _missionTypes select 0;
	_missionTypes = _missionTypes - [_missionType];
	_list lbAdd format["%1",_missionType];
	_list lbSetData [(lbSize _list)-1,_missionType];
	if (_missionType == _lastMissionType) then {_lastMissionTypeIndex = _count};
	_count = _count + 1;
};
lbSetCurSel [(_iccCode + 8),_lastMissionTypeIndex];


// Angle
_dialog = findDisplay _iccCode;
_list = _dialog displayCtrl (_iccCode + 9);
lbClear _list;
_angleTypes = ["HIGH","LOW"];
//if (_prePlotted) then {_angleTypes = [_lastAngle]};

_vehicle = vehicle (leader _asset);
_cfgVehicles = (configFile >> "CfgVehicles");
_class = typeOf _vehicle;
//if ((getText(_cfgVehicles >> _class >> "displayName")) in _82mm) then {_angleTypes = ["High"]};
//if (_assetType == "BM21") then {_angleTypes = ["LOW"]};
//if (_assetType == "BM21") then {_angleTypes = ["HIGH"]};
if (_assetType == "Mortar") then {_angleTypes = ["HIGH"]};
if (_assetType == "MK41") then {_angleTypes = ["HIGH"]};
//if (_assetType == "Rocket") then {_angleTypes = ["HIGH"]};
_count = 0;
_angle = "";
while {((count _angleTypes) > 0)} do {
	_angle = _angleTypes select 0;
	_angleTypes = _angleTypes - [_angle];
	_list lbAdd format["%1",_angle];
	_list lbSetData [(lbSize _list)-1,_angle];
	if (_angle == _lastAngle) then {_lastAngleIndex = _count};
	_count = _count + 1;
};
lbSetCurSel [(_iccCode + 9),_lastAngleIndex];


// Get profile and max range.
_profile = [];
if (_assetType == "Mortar") then {_profile = [_warheadType, _distance] call dta_fnc_ProfileMortar};
if ((_assetType == "Cannon") and {_angle == "Low"}) then {_profile = [_warheadType, _distance] call dta_fnc_ProfileCannonLA};
if ((_assetType == "Cannon") and {_angle == "High"}) then {_profile = [_warheadType, _distance] call dta_fnc_ProfileCannonHA};
if ((_assetType == "Rocket") and {_angle == "Low"}) then {_profile = [_warheadType, _distance] call dta_fnc_ProfileRocketsLA};
if ((_assetType == "Rocket") and {_angle == "High"}) then {_profile = [_warheadType, _distance] call dta_fnc_ProfileRocketsHA};
if (_assetType == "MK41") then {_profile = [_warheadType, _distance] call dta_fnc_ProfileMK41};
if (_assetType == "BM21") then {_profile = [_warheadType, _distance] call dta_fnc_ProfileBM21};
_maximumRange = _profile select 2;


// CEP
_scatterSpread = (_distance / 200) + (exp((log _distance)*0.7));

switch true do {
	case (_distance <= 0.025 * _maximumRange) : {_scatterSpread = _scatterSpread * 0.25};
	case (_distance <= 0.05 * _maximumRange) : {_scatterSpread = _scatterSpread * 0.40};
	case (_distance <= 0.10 * _maximumRange) : {_scatterSpread = _scatterSpread * 0.50};
	case (_distance <= 0.15 * _maximumRange) : {_scatterSpread = _scatterSpread * 0.60};
	case (_distance <= 0.20 * _maximumRange) : {_scatterSpread = _scatterSpread * 0.65};
	case (_distance <= 0.25 * _maximumRange) : {_scatterSpread = _scatterSpread * 0.70};
	case (_distance <= 0.30 * _maximumRange) : {_scatterSpread = _scatterSpread * 0.75};
	case (_distance <= 0.35 * _maximumRange) : {_scatterSpread = _scatterSpread * 0.80};
	case (_distance <= 0.40 * _maximumRange) : {_scatterSpread = _scatterSpread * 0.85};
};

if (_distance > 0.50 * _maximumRange) then {_scatterSpread = _scatterSpread + (exp((log _distance)*0.4))};
if (_distance > 0.55 * _maximumRange) then {_scatterSpread = _scatterSpread + (exp((log _distance)*0.4))};
if (_distance > 0.60 * _maximumRange) then {_scatterSpread = _scatterSpread + (exp((log _distance)*0.4))};
if (_distance > 0.65 * _maximumRange) then {_scatterSpread = _scatterSpread + (exp((log _distance)*0.4))};
if (_distance > 0.70 * _maximumRange) then {_scatterSpread = _scatterSpread + (exp((log _distance)*0.4))};
if (_distance > 0.75 * _maximumRange) then {_scatterSpread = _scatterSpread + (exp((log _distance)*0.4))};
if (_distance > 0.80 * _maximumRange) then {_scatterSpread = _scatterSpread + (exp((log _distance)*0.6))};
if (_distance > 0.85 * _maximumRange) then {_scatterSpread = _scatterSpread + (exp((log _distance)*0.7))};
if (_distance > 0.90 * _maximumRange) then {_scatterSpread = _scatterSpread + (exp((log _distance)*0.7))};
if (_distance > 0.95 * _maximumRange) then {_scatterSpread = _scatterSpread + (exp((log _distance)*0.7))};
if (_distance > 1.00 * _maximumRange) then {_scatterSpread = _scatterSpread + (exp((log _distance)*0.7))};
if (_distance > 1.05 * _maximumRange) then {_scatterSpread = _scatterSpread + (exp((log _distance)*0.7))};
if (_distance > 1.10 * _maximumRange) then {_scatterSpread = _scatterSpread + (exp((log _distance)*0.7))};
if (_distance > 1.15 * _maximumRange) then {_scatterSpread = _scatterSpread + (exp((log _distance)*0.7))};
if (_distance > 1.20 * _maximumRange) then {_scatterSpread = _scatterSpread + (exp((log _distance)*0.7))};
if (_distance > 1.25 * _maximumRange) then {_scatterSpread = _scatterSpread + (exp((log _distance)*0.7))};

if (_assetType == "Mortar") then {_scatterSpread = _scatterSpread * 1.4};
if (_assetType == "Rocket" or {_assetType == "BM21"}) then {_scatterSpread = _scatterSpread * 1.6};

_scatterSpreadHigh = round(_scatterSpread max 1);
_scatterSpreadLow = round((_scatterSpread * 0.75) max 1);

switch true do {
	case (_warheadType in dtaGPSLaserTypes or {_warheadType in dtaGPSSeekerTypes}) : {
		_scatterSpread2 = format ["%1 m (GPS)", 3];
	};
	
	case (_warheadType in dtaGPSGuidedTypes) : {
		_scatterSpread2 = format ["%1 m (GPS)", 5];
	};
	
	default {
		if (_angle == "High") then {_scatterSpread2 = format ["%1 m", _scatterSpreadHigh]};
		if (_angle == "Low") then {_scatterSpread2 = format ["%1 m", _scatterSpreadLow]};
		if (_warheadType in dtaLaserTypes) then {
			_scatterSpread2 = _scatterSpread2 + format [" | %1 m (LASER)", 5];
		};
	};
};

((findDisplay _iccCode) displayCtrl (_iccCode + 20)) ctrlSetText _scatterSpread2;


// Sheaf type
_count = 0;
_dialog = findDisplay _iccCode;
_list = _dialog displayCtrl (_iccCode + 11);
lbClear _list;
_sheafTypes = ["POINT","CIRCLE","BOX","LINE"];
//if (_prePlotted) then {_sheafTypes = [_lastSheaf]};
_sheafType = "";
while {((count _sheafTypes) > 0)} do {
	_sheafType = _sheafTypes select 0;
	_sheafTypes = _sheafTypes - [_sheafType];
	_list lbAdd format["%1",_sheafType];
	_list lbSetData [(lbSize _list)-1,_sheafType];
	if (_sheafType == _lastSheaf) then {_lastSheafIndex = _count};
	_count = _count + 1;
};
lbSetCurSel [(_iccCode + 11),_lastSheafIndex];


// Fuse
if (_warheadType in dtaAirburstRounds) then {
	_fuseTypes = ["IMPACT","AIRBURST","MIXED"];
} else {
	_fuseTypes = ["IMPACT"];
};

_count = 0;
_dialog = findDisplay _iccCode;
_list = _dialog displayCtrl (_iccCode + 12);
lbClear _list;

_fuseType = "";
while {((count _fuseTypes) > 0)} do {
	_fuseType = _fuseTypes select 0;
	_fuseTypes = _fuseTypes - [_fuseType];
	_list lbAdd format["%1",_fuseType];
	_list lbSetData [(lbSize _list)-1,_fuseType];
	if (_fuseType == _lastFuse) then {_lastFuseIndex = _count};
	_count = _count + 1;
};
lbSetCurSel [(_iccCode + 12),_lastFuseIndex];


// Save current settings so that the settings will automatically be filled in when the player opens the menu.
// Cancel loop when this interface display cannot be found.
while {!isNull (findDisplay _iccCode)} do {
	
	dtaLastMission = lbData [(_iccCode + 8), (lbCurSel (_iccCode + 8))];
	dtaLastAngle = lbData [(_iccCode + 9), (lbCurSel (_iccCode + 9))];
	dtaLastRounds = [ctrlText (_iccCode + 7)] call dta_fnc_ParseNumber;
	dtaLastWarhead = lbData [(_iccCode + 6), (lbCurSel (_iccCode + 6))];
	dtaLastFuse = lbData [(_iccCode + 12), (lbCurSel (_iccCode + 12))];
	dtaLastSheaf = lbData [(_iccCode + 11), (lbCurSel (_iccCode + 11))];
	dtaLastSheafX = [ctrlText (_iccCode + 13)] call dta_fnc_ParseNumber;
	dtaLastSheafY = [ctrlText (_iccCode + 14)] call dta_fnc_ParseNumber;
	dtaLastAdjustX = [ctrlText (_iccCode + 4)] call dta_fnc_ParseNumber;
	dtaLastAdjustY = [ctrlText (_iccCode + 5)] call dta_fnc_ParseNumber;
	dtaLastGPSZ_AGL = [ctrlText (_iccCode + 21)] call dta_fnc_ParseNumber;
	dtaLastGPSX = [ctrlText (_iccCode + 22)] call dta_fnc_ParseNumber;
	dtaLastGPSY = [ctrlText (_iccCode + 23)] call dta_fnc_ParseNumber;
	dtaLastSheafLineDir = [ctrlText (_iccCode + 24)] call dta_fnc_ParseNumber;
	dtaLastSheafLineDist = [ctrlText (_iccCode + 25)] call dta_fnc_ParseNumber;
	
	// The dtaLastAirburstHeight will be used by the displayWarheads script to show us the previously selected airburst height.
	_height = lbData [(_iccCode + 15), (lbCurSel (_iccCode + 15))];
	if (_height != "") then {
		dtaLastAirburstHeight = _height;
	};
	
	//diag_log format["CONTROL LOOP GPSX 1: %1", ctrlText (_iccCode + 22)];
	//diag_log format["CONTROL LOOP GPSX 2: %1", dtaLastGPSX];
	
	// If player has input a wrong value, then reset the value.
	if (dtaLastGPSX == -9999999) then {
		dtaLastGPSX = 0;
		if (!isNull (findDisplay _iccCode)) then {
			((findDisplay _iccCode) displayCtrl (_iccCode + 22)) ctrlSetText format ["%1",dtaLastGPSX];
		};
		hint "Invalid input:\nGPS X coordinate.\n\nUse numbers only.";
	};
	if (dtaLastGPSY == -9999999) then {
		dtaLastGPSY = 0;
		if (!isNull (findDisplay _iccCode)) then {
			((findDisplay _iccCode) displayCtrl (_iccCode + 23)) ctrlSetText format ["%1",dtaLastGPSY];
		};
		hint "Invalid input:\nGPS Y coordinate.\n\nUse numbers only.";
	};
	if (dtaLastGPSZ_AGL == -9999999) then {
		dtaLastGPSZ_AGL = 0;
		if (!isNull (findDisplay _iccCode)) then {
			((findDisplay _iccCode) displayCtrl (_iccCode + 21)) ctrlSetText format ["%1",dtaLastGPSZ_AGL];
		};
		hint "Invalid input:\nGPS Z coordinate.\n\nUse numbers only.";
	};
	if (dtaLastAdjustX == -9999999) then {
		dtaLastAdjustX = 0;
		if (!isNull (findDisplay _iccCode)) then {
			((findDisplay _iccCode) displayCtrl (_iccCode + 4)) ctrlSetText format ["%1",dtaLastAdjustX];
		};
		hint "Invalid input:\nAdjust X.\n\nUse numbers only.";
	};
	if (dtaLastAdjustY == -9999999) then {
		dtaLastAdjustY = 0;
		if (!isNull (findDisplay _iccCode)) then {
			((findDisplay _iccCode) displayCtrl (_iccCode + 5)) ctrlSetText format ["%1",dtaLastAdjustY];
		};
		hint "Invalid input:\nAdjust Y.\n\nUse numbers only.";
	};
	if (dtaLastSheafX < 0) then {
		dtaLastSheafX = 0;
		if (!isNull (findDisplay _iccCode)) then {
			((findDisplay _iccCode) displayCtrl (_iccCode + 13)) ctrlSetText format ["%1",dtaLastSheafX];
		};
		hint "Invalid input:\nSheaf size X.\n\nUse numbers only.\n\nMust be 0 or higher.";
	};
	if (dtaLastSheafY < 0) then {
		dtaLastSheafY = 0;
		if (!isNull (findDisplay _iccCode)) then {
			((findDisplay _iccCode) displayCtrl (_iccCode + 14)) ctrlSetText format ["%1",dtaLastSheafY];
		};
		hint "Invalid input:\nSheaf size Y.\n\nUse numbers only.\n\nMust be 0 or higher.";
	};
	if (dtaLastRounds < 1) then {
		dtaLastRounds = 1;
		if (!isNull (findDisplay _iccCode)) then {
			((findDisplay _iccCode) displayCtrl (_iccCode + 7)) ctrlSetText format ["%1",dtaLastRounds];
		};
		hint "Invalid input:\nNumber of rounds.\n\nUse numbers only.\n\nMust be at least 1 or higher.";
	};
	if (dtaLastSheafLineDir < 0 or dtaLastSheafLineDir > 360) then {
		dtaLastSheafLineDir = 0;
		if (!isNull (findDisplay _iccCode)) then {
			((findDisplay _iccCode) displayCtrl (_iccCode + 24)) ctrlSetText format ["%1",dtaLastSheafLineDir];
		};
		hint "Invalid input:\nSheaf line DIR.\n\nUse numbers only.\n\nMust be between 0 and 360.";
	};
	if (dtaLastSheafLineDist < 1 or dtaLastSheafLineDist > 1000) then {
		dtaLastSheafLineDist = 100;
		if (!isNull (findDisplay _iccCode)) then {
			((findDisplay _iccCode) displayCtrl (_iccCode + 25)) ctrlSetText format ["%1",dtaLastSheafLineDist];
		};
		hint "Invalid input:\nSheaf line DIST.\n\nUse numbers only.\n\nMust be between 1 and 1000.";
	};
	
	
	_xTemp = [dtaLastGPSX] call dta_fnc_FormatCoordinates;
	_yTemp = [dtaLastGPSY] call dta_fnc_FormatCoordinates;
	
	//diag_log format["CONTROL LOOP GPSX 3: %1", dtaLastGPSX];
	//diag_log format["CONTROL LOOP GPSX 4: %1", _xTemp];
	
	_posReal = [[_xTemp, _yTemp]] call dta_fnc_MapGridToPos;
	dtaLastGPSX = _posReal select 0;
	dtaLastGPSY = _posReal select 1;
	
	//diag_log format["CONTROL LOOP GPSX 5: %1", dtaLastGPSX];
	
	// Adjust certain vars to clean them up and make sure the numbers are not too small or too big.
	dtaLastSheafX = (round dtaLastSheafX) max 1;
	dtaLastSheafY = (round dtaLastSheafY) max 0;
	dtaLastGPSZ_AGL = round dtaLastGPSZ_AGL;
	dtaLastRounds = (round dtaLastRounds) max 1;
	dtaLastSheafLineDir = ((round dtaLastSheafLineDir) max 0) min 360;
	dtaLastSheafLineDist = ((round dtaLastSheafLineDist) max 1) min 1000;
	
	
	// When GPS pos changes, save the new settings and update the exactPos var.
	_newExactPos = false;
	if (_lastGPSX != dtaLastGPSX) then {
		_lastGPSX = dtaLastGPSX;
		_newExactPos = true;
	};
	if (_lastGPSY != dtaLastGPSY) then {
		_lastGPSY = dtaLastGPSY;
		_newExactPos = true;
	};
	if (_newExactPos) then {
		private _posGPS = AGLtoASL [dtaLastGPSX,dtaLastGPSY,dtaLastGPSZ_AGL];
		dtaSelectedAsset setVariable ["DTA_exactPos", _posGPS, true];
		
		// Update distance.
		if ((dtaLastWarhead in dtaGPSGuidedTypes) or {dtaLastWarhead in dtaGPSLaserTypes} or {dtaLastWarhead in dtaGPSSeekerTypes}) then {
			_distance = round ((getPosASL (vehicle (leader _asset))) vectorDistance _posGPS);
			if (!isNull (findDisplay _iccCode)) then {
				((findDisplay _iccCode) displayCtrl (_iccCode + 16)) ctrlSetText format ["%1 m (GPS)", _distance];
			};
		};
	};
	
	
	// If the selected angle has changed, then we want to update the CEP.
	if (_angle != dtaLastAngle) then {
		
		_angle = dtaLastAngle;
		
		// CEP
		switch true do {
			case (_warheadType in dtaGPSLaserTypes or {_warheadType in dtaGPSSeekerTypes}) : {
				_scatterSpread2 = format ["%1 m (GPS)", 3];
			};
			
			case (_warheadType in dtaGPSGuidedTypes) : {
				_scatterSpread2 = format ["%1 m (GPS)", 5];
			};
			
			default {
				if (_angle == "High") then {_scatterSpread2 = format ["%1 m", _scatterSpreadHigh]};
				if (_angle == "Low") then {_scatterSpread2 = format ["%1 m", _scatterSpreadLow]};
				if (_warheadType in dtaLaserTypes) then {
					_scatterSpread2 = _scatterSpread2 + format [" | %1 m (LASER)", 5];
				};
			};
		};
		
		if (!isNull (findDisplay _iccCode)) then {
			((findDisplay _iccCode) displayCtrl (_iccCode + 20)) ctrlSetText _scatterSpread2;
		};
	};
	
	
	// If the player selects a new magazine type, then we want to update the CEP and airburst settings.
	// We won't show the airburst settings if the magazine type doesn't support it.
	if (_warheadType != dtaLastWarhead) then {
	
		_warheadType = dtaLastWarhead;
		
		// CEP
		switch true do {
			case (_warheadType in dtaGPSLaserTypes or {_warheadType in dtaGPSSeekerTypes}) : {
				_scatterSpread2 = format ["%1 m (GPS)", 3];
			};
			
			case (_warheadType in dtaGPSGuidedTypes) : {
				_scatterSpread2 = format ["%1 m (GPS)", 5];
			};
			
			default {
				if (_angle == "High") then {_scatterSpread2 = format ["%1 m", _scatterSpreadHigh]};
				if (_angle == "Low") then {_scatterSpread2 = format ["%1 m", _scatterSpreadLow]};
				if (_warheadType in dtaLaserTypes) then {
					_scatterSpread2 = _scatterSpread2 + format [" | %1 m (LASER)", 5];
				};
			};
		};
		
		if (!isNull (findDisplay _iccCode)) then {
			((findDisplay _iccCode) displayCtrl (_iccCode + 20)) ctrlSetText _scatterSpread2;
		};
		
		
		// Fuse
		_lastFuse = lbData [(_iccCode + 12), (lbCurSel (_iccCode + 12))];
		
		if (_warheadType in dtaAirburstRounds) then {
			_fuseTypes = ["IMPACT","AIRBURST","MIXED"];
		} else {
			_fuseTypes = ["IMPACT"];
		};
		
		_count = 0;
		_dialog = findDisplay _iccCode;
		_list = _dialog displayCtrl (_iccCode + 12);
		lbClear _list;
		
		_fuseType = "";
		while {((count _fuseTypes) > 0)} do {
			_fuseType = _fuseTypes select 0;
			_fuseTypes = _fuseTypes - [_fuseType];
			_list lbAdd format["%1",_fuseType];
			_list lbSetData [(lbSize _list)-1,_fuseType];
			if (_fuseType == _lastFuse) then {_lastFuseIndex = _count};
			_count = _count + 1;
		};
		lbSetCurSel [(_iccCode + 12),_lastFuseIndex];
		
		
		// Update distance.
		if ((dtaLastWarhead in dtaGPSGuidedTypes) or {dtaLastWarhead in dtaGPSLaserTypes} or {dtaLastWarhead in dtaGPSSeekerTypes}) then {
			private _posGPS = dtaSelectedAsset getVariable ["DTA_exactPos", [0,0,0]];
			if (_posGPS isEqualTo [0,0,0]) then {_posGPS = [dtaXdisplay,dtaYdisplay,dtaElevation]};
			_distance = round ((getPosASL (vehicle (leader _asset))) vectorDistance _posGPS);
			if (!isNull (findDisplay _iccCode)) then {
				((findDisplay _iccCode) displayCtrl (_iccCode + 16)) ctrlSetText format ["%1 m (GPS)", _distance];
			};
		} else {
			_distance = round ((getPosASL (vehicle (leader _asset))) vectorDistance _pos);
			if (!isNull (findDisplay _iccCode)) then {
				((findDisplay _iccCode) displayCtrl (_iccCode + 16)) ctrlSetText format ["%1 m", _distance];
			};
		};
	};
	
	
	// Update display pos.
	_posMap = [[dtaXdisplay, dtaYdisplay]] call dta_fnc_PosToMapGrid;
	_xMap = parseNumber (_posMap select 0);
	_yMap = parseNumber (_posMap select 1);
	
	_dtaXtext = [_xMap] call dta_fnc_FormatCoordinates;
	_dtaYtext = [_yMap] call dta_fnc_FormatCoordinates;
	
	if (!isNull (findDisplay _iccCode)) then {
		((findDisplay _iccCode) displayCtrl (_iccCode + 2)) ctrlSetText format ["%1", _dtaXtext];
		((findDisplay _iccCode) displayCtrl (_iccCode + 3)) ctrlSetText format ["%1", _dtaYtext];
	};
	
	
	// Check what the currently selected settings are for certain things,
	// so we know if they have changed next time we run the loop. We then need to change some stuff for them.
	_angle = dtaLastAngle;
	_warheadType = dtaLastWarhead;
	_lastGPSX = dtaLastGPSX;
	_lastGPSX = dtaLastGPSY;
	
	
	// Update list with available ammo. Wait until that script has done its job (wait for the call), then move on.
	call dta_fnc_DisplayWarheads;
	
	sleep 0.3;
};

sleep 1;

dtaControlRunning = false;

//diag_log "CONTROL END";