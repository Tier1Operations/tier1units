// This is the arty menu in which the player can select various options before transmitting the fire mission.

disableSerialization;

params [["_prePlotted", false, [true]]];

//DIAG_LOG "CONTROL START";


// Abort if there's something wrong with the leader's vehicle/gunner.
private _tube = (vehicle (leader T1AM_ControlledAssetLocal));
private _gunner = gunner _tube;
private _abort = [_tube, _gunner] call T1AM_Fnc_CheckAssetStatus;
if (_abort) exitWith {
	private _str = "ASSET NOT RESPONDING";
	[0, _str, 5] spawn T1AM_Fnc_ShowMessage;
	sleep 3;
	[false] call T1AM_Fnc_EndMission;
};

//DIAG_LOG format["CONTROL - _prePlotted: %1", _prePlotted];

if (_prePlotted and {count T1AM_SelectedPrePlotted < 1}) exitWith {
	private _str = "NO MISSION SELECTED";
	[0, _str, 5] spawn T1AM_Fnc_ShowMessage;
	sleep 3;
	[false] call T1AM_Fnc_EndMission;
};

if (_prePlotted) then {T1AM_HaveAimpoint = true};

if ((!T1AM_HaveAimpoint) and (!_prePlotted)) exitWith {
	T1AM_LastDialog = "Aimpoint";
	[0, [_prePlotted], 0] spawn T1AM_Fnc_LoadingScreen;
};


private _assetName = str T1AM_ControlledAssetLocal;
if (_assetName == "<NULL-group>") exitWith {
	private _str = "NO ASSET SELECTED";
	[0, _str, 5] spawn T1AM_Fnc_ShowMessage;
	sleep 3;
	[false] call T1AM_Fnc_EndMission;
};
if (_assetName == "any") exitWith {
	private _str = "NO ASSET SELECTED";
	[0, _str, 5] spawn T1AM_Fnc_ShowMessage;
	sleep 3;
	[false] call T1AM_Fnc_EndMission;
};


T1AM_LastDialog = "Control";
(findDisplay 47100) closeDisplay 0;
(findDisplay 47200) closeDisplay 0;
(findDisplay 47300) closeDisplay 0;
(findDisplay 47400) closeDisplay 0;
(findDisplay 47500) closeDisplay 0;
(findDisplay 47050) createDisplay "T1AM_DialogControl";

private _dialog = findDisplay 47200;

// Required for pre-plotted missions
private _fireMission = [];
private _rounds = 0;
private _sheafSize = [];
private _newMission = false;
private _lastPos = [];
private _lastAngle = "";
private _lastSheaf = "";
private _lastFuse = "";
private _lastAirburstHeight = "";
private _lastWarheadType = "";
private _lastMissionTypeIndex = 0;
private _lastAngleIndex = 0;
private _lastSheafIndex = 0;
private _lastFuseIndex = 0;
private _lastSheafDir = 0;
private _lastSheafDist = 0;

if (_prePlotted) then {
	_fireMission = T1AM_SelectedPrePlotted;
	_lastPos = _fireMission select 1;
	_lastWarheadType = _fireMission select 2;
	_rounds = _fireMission select 3;
	_lastAngle = _fireMission select 6;
	_lastSheaf = _fireMission select 10;
	_lastFuse = _fireMission select 11;
	_sheafSize = _fireMission select 12;
	private _lastPosDisplay = _fireMission select 13;
	_lastAirburstHeight = _fireMission select 14;
	_newMission = _fireMission select 16;
	_lastSheafDir = _fireMission select 18;
	_lastSheafDist = _fireMission select 19;
	
	T1AM_LastMission = _fireMission select 5;
	T1AM_LastAngle = _lastAngle;
	T1AM_LastRounds = _rounds;
	T1AM_LastWarhead = _lastWarheadType;
	T1AM_LastFuse = _lastFuse;
	T1AM_LastAirburstHeight = _lastAirburstHeight;
	T1AM_LastSheaf = _lastSheaf;
	T1AM_LastSheafX = _sheafSize select 0;
	T1AM_LastSheafY = _sheafSize select 1;
	T1AM_LastGPSZ_AGL = _fireMission select 16;
	T1AM_LastSheafDir = _lastSheafDir;
	T1AM_LastSheafDist = _lastSheafDist;
	
	// If it's a preplotted mission, put the adjust values to 0.
	T1AM_LastAdjustX = 0;
	T1AM_LastAdjustY = 0;
	
	T1AM_FireMissionCurrent = [];
	
	T1AM_ControlledAssetLocal setVariable ["T1AM_exactPos", _lastPosDisplay, true];
	T1AM_LastGPSX = _lastPosDisplay select 0;
	T1AM_LastGPSY = _lastPosDisplay select 1;
	
	T1AM_LastPos = _lastPos;
	
	//DIAG_LOG format["CONTROL - PREPLOTTED MISSION - T1AM_LastPos: %1", T1AM_LastPos];
};


// Get current settings
if ((count T1AM_FireMissionCurrent) > 0) then {
	_fireMission = T1AM_FireMissionCurrent;
	_lastPos = _fireMission select 1;
	T1AM_LastPos = _lastPos;
	//DIAG_LOG format["CONTROL - CURRENT FIRE MISSION - T1AM_LastPos: %1", T1AM_LastPos];
};


// If GPS pos X and Y hasn't been set yet, give it a value of current display pos.
// Z value can stay on zero.
if (T1AM_LastGPSX == -999999) then {
	T1AM_LastGPSX = T1AM_Xdisplay;
};
if (T1AM_LastGPSY == -999999) then {
	T1AM_LastGPSY = T1AM_Ydisplay;
};


private _lastMissionType = T1AM_LastMission;
private _lastSheafSizeX = T1AM_LastSheafX;
private _lastSheafSizeY = T1AM_LastSheafY;
private _lastGPSX = T1AM_LastGPSX;
private _lastGPSY = T1AM_LastGPSY;
private _lastGPSZ_AGL = T1AM_LastGPSZ_AGL;
_lastAngle = T1AM_LastAngle;
_rounds = T1AM_LastRounds;
_lastWarheadType = T1AM_LastWarhead;
_lastFuse = T1AM_LastFuse;
_lastAirburstHeight = T1AM_LastAirburstHeight;
_lastSheaf = T1AM_LastSheaf;
_lastSheafDir = T1AM_LastSheafDir;
_lastSheafDist = T1AM_LastSheafDist;

//DIAG_LOG format["CONTROL GPSX 1: %1", _lastGPSX];
//DIAG_LOG format["CONTROL GPSY 1: %1", _lastGPSY];

// Sheaf size X
if (_lastSheafSizeX != 0) then {
	(_dialog displayCtrl 47213) ctrlSetText format ["%1",_lastSheafSizeX];
};

// Sheaf size Y
if (_lastSheafSizeY != 0) then {
	(_dialog displayCtrl 47214) ctrlSetText format ["%1",_lastSheafSizeY];
};

// Sheaf dir
if (_lastSheafDir != 0) then {
	(_dialog displayCtrl 47224) ctrlSetText format ["%1",_lastSheafDir];
};

// Sheaf dist
if (_lastSheafDist != 0) then {
	(_dialog displayCtrl 47225) ctrlSetText format ["%1",_lastSheafDist];
};

private _posMap = [[_lastGPSX, _lastGPSY]] call T1AM_Fnc_PosToMapGrid;
private _xMap = parseNumber (_posMap select 0);
private _yMap = parseNumber (_posMap select 1);

//DIAG_LOG format["CONTROL GPSX 2: %1", _posMap select 0];
//DIAG_LOG format["CONTROL GPSX 3: %1", _xMap];
//DIAG_LOG format["CONTROL GPSY 2: %1", _posMap select 1];
//DIAG_LOG format["CONTROL GPSY 3: %1", _yMap];

// GPS X
private _posGPSX = [_xMap] call T1AM_Fnc_FormatCoordinates;
(_dialog displayCtrl 47222) ctrlSetText format ["%1",_posGPSX];

// GPS Y
private _posGPSY = [_yMap] call T1AM_Fnc_FormatCoordinates;
(_dialog displayCtrl 47223) ctrlSetText format ["%1",_posGPSY];

//DIAG_LOG format["CONTROL GPSX 4: %1", _posGPSX];
//DIAG_LOG format["CONTROL GPSY 4: %1", _posGPSY];

// GPS Z
if (_lastGPSZ_AGL != 0) then {
	(_dialog displayCtrl 47221) ctrlSetText format ["%1",_lastGPSZ_AGL];
};


onMapSingleClick "";
private _asset = T1AM_ControlledAssetLocal;
private _name = [(vehicle (leader _asset))] call T1AM_Fnc_VehicleName;
private _tubes = [_asset] call T1AM_Fnc_GroupVehicles;
private _vehicle = vehicle (leader _asset);
private _assetType = [_vehicle] call T1AM_Fnc_AssetType;
_assetName = [_asset] call T1AM_Fnc_TrimGroupName;

// Gun-Target line
private _elev = ((AGLtoASL [T1AM_Xdisplay,T1AM_Ydisplay,0]) select 2) max 0;
private _pos = [T1AM_Xdisplay, T1AM_Ydisplay, _elev];
private _posArty = getPosASL _vehicle;
private _artyElev = round(_posArty select 2);
private _gtl = _posArty getDir _pos;
_gtl = round _gtl;
(_dialog displayCtrl 47217) ctrlSetText format ["%1 deg",_gtl];


// Elevation
T1AM_Elevation = round T1AM_Elevation;
(_dialog displayCtrl 47219) ctrlSetText format ["%1 m",T1AM_Elevation];

_posMap = [[_posArty select 0, _posArty select 1]] call T1AM_Fnc_PosToMapGrid;
_xMap = parseNumber (_posMap select 0);
_yMap = parseNumber (_posMap select 1);

private _xText = [_xMap] call T1AM_Fnc_FormatCoordinates;
private _yText = [_yMap] call T1AM_Fnc_FormatCoordinates;

_posMap = [[T1AM_Xdisplay, T1AM_Ydisplay]] call T1AM_Fnc_PosToMapGrid;
_xMap = parseNumber (_posMap select 0);
_yMap = parseNumber (_posMap select 1);

private _Xtext2 = [_xMap] call T1AM_Fnc_FormatCoordinates;
private _Ytext2 = [_yMap] call T1AM_Fnc_FormatCoordinates;


(_dialog displayCtrl 47201) ctrlSetText format ["%1: %2 x%3  [%4 %5 %6]",_assetName,_name,(count _tubes),_xText,_yText,_artyElev];
(_dialog displayCtrl 47202) ctrlSetText format ["%1", _Xtext2];
(_dialog displayCtrl 47203) ctrlSetText format ["%1", _Ytext2];
(_dialog displayCtrl 47204) ctrlSetText format ["%1", T1AM_LastAdjustX];
(_dialog displayCtrl 47205) ctrlSetText format ["%1", T1AM_LastAdjustY];
(_dialog displayCtrl 47207) ctrlSetText format ["%1", _rounds];


// Active tube
(_dialog displayCtrl 47218) ctrlSetText format ["Unit: %1/%2",(T1AM_SelectedTubeIndex + 1),(count _tubes)];

T1AM_SelectedTube = _tubes select T1AM_SelectedTubeIndex;


// Update list with available ammo.
private _controlWarheads = _dialog displayCtrl 47206;
lbClear _controlWarheads;
private _addedWarheads = [];
private _addedWarheadsTimeout = 25;
private _array = [_addedWarheads, _addedWarheadsTimeout, _controlWarheads] call T1AM_Fnc_DisplayWarheads;
_addedWarheads = _array select 0;
_addedWarheadsTimeout = _array select 1;
private _warheadType = _controlWarheads lbData (lbCurSel _controlWarheads);

//DIAG_LOG format["CONTROL - _warheadType: %1", _warheadType];

// Distance
private _distance = 0;
private _posGPS = [];
if ((_warheadType in T1AM_GPSGuidedTypes) or {_warheadType in T1AM_GPSLaserTypes} or {_warheadType in T1AM_GPSSeekerTypes}) then {
	_posGPS = AGLtoASL [_lastGPSX, _lastGPSY, _lastGPSZ_AGL];
	_distance = round ((getPosASL (vehicle (leader _asset))) vectorDistance  _posGPS);
	(_dialog displayCtrl 47216) ctrlSetText format ["%1 m (GPS)", _distance];
} else {
	_distance = round (_posArty vectorDistance _pos);
	(_dialog displayCtrl 47216) ctrlSetText format ["%1 m", _distance];
};


// Fire mission type
private _control = _dialog displayCtrl 47208;
lbClear _control;
private _missionTypes = ["SPOT","FFE","PLOT"];
if (_prePlotted) then {_missionTypes = ["SPOT","FFE"]};

private _count = 0;
{
	private _missionType = _x;
	_control lbAdd format["%1",_missionType];
	_control lbSetData [(lbSize _control)-1,_missionType];
	if (_missionType == _lastMissionType) then {_lastMissionTypeIndex = _count};
	_count = _count + 1;
} forEach _missionTypes;
_control lbSetCurSel _lastMissionTypeIndex;


// Angle
_control = _dialog displayCtrl 47209;
lbClear _control;
private _angleTypes = ["HIGH","LOW"];
//if (_prePlotted) then {_angleTypes = [_lastAngle]};
if (_assetType == "Mortar") then {_angleTypes = ["HIGH"]};
if (_assetType == "MK41") then {_angleTypes = ["HIGH"]};

private _angle = "";
_count = 0;
{
	_angle = _x;
	_control lbAdd format["%1",_angle];
	_control lbSetData [(lbSize _control)-1,_angle];
	if (_angle == _lastAngle) then {_lastAngleIndex = _count};
	_count = _count + 1;
} forEach _angleTypes;
_control lbSetCurSel _lastAngleIndex;


// Get profile and max range.
private _profile = [];
if (_assetType == "Mortar") then {_profile = [_warheadType, _distance] call T1AM_Fnc_ProfileMortar};
if ((_assetType == "Cannon") and {_angle == "Low"}) then {_profile = [_warheadType, _distance] call T1AM_Fnc_ProfileCannonLA};
if ((_assetType == "Cannon") and {_angle == "High"}) then {_profile = [_warheadType, _distance] call T1AM_Fnc_ProfileCannonHA};
if ((_assetType == "Rocket") and {_angle == "Low"}) then {_profile = [_warheadType, _distance] call T1AM_Fnc_ProfileRocketsLA};
if ((_assetType == "Rocket") and {_angle == "High"}) then {_profile = [_warheadType, _distance] call T1AM_Fnc_ProfileRocketsHA};
if (_assetType == "MK41") then {_profile = [_warheadType, _distance] call T1AM_Fnc_ProfileMK41};
if (_assetType == "BM21") then {_profile = [_warheadType, _distance] call T1AM_Fnc_ProfileBM21};
private _maximumRange = _profile select 2;


// CEP
private _scatterSpread = [_distance, _maximumRange] call T1AM_Fnc_GetRandomSpread;

if (_assetType == "Mortar") then {_scatterSpread = _scatterSpread * 1.4};
if (_assetType == "Rocket") then {_scatterSpread = _scatterSpread * 1.6};
if (_assetType == "BM21") then {_scatterSpread = _distance / 20}; //BM21 has its own spread.


private _scatterSpreadHigh = round(_scatterSpread max 1);
private _scatterSpreadLow = round((_scatterSpread * 0.75) max 1);
private _scatterSpread2 = "";

switch true do {
	case (_warheadType in T1AM_GPSLaserTypes or {_warheadType in T1AM_GPSSeekerTypes}) : {
		_scatterSpread2 = format ["%1 m (GPS)", 3];
	};
	
	case (_warheadType in T1AM_GPSGuidedTypes) : {
		_scatterSpread2 = format ["%1 m (GPS)", 5];
	};
	
	default {
		if (_angle == "High") then {_scatterSpread2 = format ["%1 m", _scatterSpreadHigh]};
		if (_angle == "Low") then {_scatterSpread2 = format ["%1 m", _scatterSpreadLow]};
		if (_warheadType in T1AM_LaserTypes) then {
			_scatterSpread2 = _scatterSpread2 + format [" | %1 m (LASER)", 5];
		};
	};
};

(_dialog displayCtrl 47220) ctrlSetText _scatterSpread2;


// Sheaf type
_control = _dialog displayCtrl 47211;
lbClear _control;
private _sheafTypes = [];
switch (_assetType) do {
	case ("BM21") : {_sheafTypes = ["POINT"]};
	case ("MK41") : {_sheafTypes = ["POINT"]};
	default {_sheafTypes = ["POINT","CIRCLE","BOX","LINE"]};
};

_count = 0;
{
	private _sheafType = _x;
	_control lbAdd format["%1",_sheafType];
	_control lbSetData [(lbSize _control)-1,_sheafType];
	if (_sheafType == _lastSheaf) then {_lastSheafIndex = _count};
	_count = _count + 1;
} forEach _sheafTypes;
_control lbSetCurSel _lastSheafIndex;


// Fuse
private _fuseTypes = [];
if (_warheadType in T1AM_AirburstRounds) then {
	_fuseTypes = ["IMPACT","AIRBURST","MIXED"];
} else {
	_fuseTypes = ["IMPACT"];
};

_control = _dialog displayCtrl 47212;
lbClear _control;

_count = 0;
{
	private _fuseType = _x;
	_control lbAdd format["%1",_fuseType];
	_control lbSetData [(lbSize _control)-1,_fuseType];
	if (_fuseType == _lastFuse) then {_lastFuseIndex = _count};
	_count = _count + 1;
} forEach _fuseTypes;
_control lbSetCurSel _lastFuseIndex;


// Save current settings so that the settings will automatically be filled in when the player opens the menu.
// Cancel loop when this interface display cannot be found.
while {!isNull (findDisplay 47200)} do {
	
	_dialog = findDisplay 47200;
	
	T1AM_LastMission = (_dialog displayCtrl 47208) lbData (lbCurSel (_dialog displayCtrl 47208));
	T1AM_LastAngle = (_dialog displayCtrl 47209) lbData (lbCurSel (_dialog displayCtrl 47209));
	T1AM_LastRounds = [ctrlText (_dialog displayCtrl 47207), 0] call T1AM_Fnc_ParseNumber;
	T1AM_LastWarhead = (_dialog displayCtrl 47206) lbData (lbCurSel (_dialog displayCtrl 47206));
	T1AM_LastFuse = (_dialog displayCtrl 47212) lbData (lbCurSel (_dialog displayCtrl 47212));
	T1AM_LastSheaf = (_dialog displayCtrl 47211) lbData (lbCurSel (_dialog displayCtrl 47211));
	T1AM_LastSheafX = [ctrlText (_dialog displayCtrl 47213), 0] call T1AM_Fnc_ParseNumber;
	T1AM_LastSheafY = [ctrlText (_dialog displayCtrl 47214), 0] call T1AM_Fnc_ParseNumber;
	T1AM_LastAdjustX = [ctrlText (_dialog displayCtrl 47204), 0] call T1AM_Fnc_ParseNumber;
	T1AM_LastAdjustY = [ctrlText (_dialog displayCtrl 47205), 0] call T1AM_Fnc_ParseNumber;
	T1AM_LastGPSZ_AGL = [ctrlText (_dialog displayCtrl 47221), 0] call T1AM_Fnc_ParseNumber;
	T1AM_LastSheafDir = [ctrlText (_dialog displayCtrl 47224), 0] call T1AM_Fnc_ParseNumber;
	T1AM_LastSheafDist = [ctrlText (_dialog displayCtrl 47225), 0] call T1AM_Fnc_ParseNumber;
	
	private _str = ctrlText (_dialog displayCtrl 47222);
	_str = [_str] call T1AM_Fnc_GridToPos;
	T1AM_LastGPSX = [_str, 5] call T1AM_Fnc_ParseNumber;
	private _str = ctrlText (_dialog displayCtrl 47223);
	_str = [_str] call T1AM_Fnc_GridToPos;
	T1AM_LastGPSY = [_str, 6] call T1AM_Fnc_ParseNumber;
	
	// The T1AM_LastAirburstHeight will be used by the displayWarheads script to show us the previously selected airburst height.
	private _height = (_dialog displayCtrl 47215) lbData (lbCurSel (_dialog displayCtrl 47215));
	if (_height != "") then {
		T1AM_LastAirburstHeight = _height;
	};
	
	//DIAG_LOG format["CONTROL LOOP GPSX 1: %1", ctrlText (_dialog displayCtrl 47222)];
	//DIAG_LOG format["CONTROL LOOP GPSX 2: %1", T1AM_LastGPSX];
	//DIAG_LOG format["CONTROL LOOP GPSY 1: %1", ctrlText (_dialog displayCtrl 47223)];
	//DIAG_LOG format["CONTROL LOOP GPSY 2: %1", T1AM_LastGPSY];
	
	// If player has input a wrong value, then reset the value.
	if (T1AM_LastGPSX == -9999999) then {
		T1AM_LastGPSX = 0;
		if (!isNull _dialog) then {
			(_dialog displayCtrl 47222) ctrlSetText format ["%1",T1AM_LastGPSX];
		};
		private _str = "INVALID INPUT:\nGPS X COORDINATE\n\nUSE NUMBERS ONLY. MAX 5 CHARACTERS ALLOWED";
		[0, _str, 5] spawn T1AM_Fnc_ShowMessage;
	};
	if (T1AM_LastGPSY == -9999999) then {
		T1AM_LastGPSY = 0;
		if (!isNull _dialog) then {
			(_dialog displayCtrl 47223) ctrlSetText format ["%1",T1AM_LastGPSY];
		};
		private _str = "INVALID INPUT:\nGPS Y COORDINATE\n\nUSE NUMBERS ONLY. MAX 5 CHARACTERS ALLOWED";
		[0, _str, 5] spawn T1AM_Fnc_ShowMessage;
	};
	if (T1AM_LastGPSZ_AGL == -9999999) then {
		T1AM_LastGPSZ_AGL = 0;
		if (!isNull _dialog) then {
			(_dialog displayCtrl 47221) ctrlSetText format ["%1",T1AM_LastGPSZ_AGL];
		};
		private _str = "INVALID INPUT:\nGPS Z COORDINATE\n\nUSE NUMBERS ONLY";
		[0, _str, 5] spawn T1AM_Fnc_ShowMessage;
	};
	if (T1AM_LastAdjustX == -9999999) then {
		T1AM_LastAdjustX = 0;
		if (!isNull _dialog) then {
			(_dialog displayCtrl 47204) ctrlSetText format ["%1",T1AM_LastAdjustX];
		};
		private _str = "INVALID INPUT:\nADJUST Z\n\nUSE NUMBERS ONLY";
		[0, _str, 5] spawn T1AM_Fnc_ShowMessage;
	};
	if (T1AM_LastAdjustY == -9999999) then {
		T1AM_LastAdjustY = 0;
		if (!isNull _dialog) then {
			(_dialog displayCtrl 47205) ctrlSetText format ["%1",T1AM_LastAdjustY];
		};
		private _str = "INVALID INPUT:\nADJUST Y\n\nUSE NUMBERS ONLY";
		[0, _str, 5] spawn T1AM_Fnc_ShowMessage;
	};
	if (T1AM_LastSheafX < 1) then {
		T1AM_LastSheafX = 100;
		if (!isNull _dialog) then {
			(_dialog displayCtrl 47213) ctrlSetText format ["%1",T1AM_LastSheafX];
		};
		private _str = "INVALID INPUT:\nSHEAF SIZE X\n\nUSE NUMBERS ONLY. MUST BE 1 OR HIGHER";
		[0, _str, 5] spawn T1AM_Fnc_ShowMessage;
	};
	if (T1AM_LastSheafY < 1) then {
		T1AM_LastSheafY = 100;
		if (!isNull _dialog) then {
			(_dialog displayCtrl 47214) ctrlSetText format ["%1",T1AM_LastSheafY];
		};
		private _str = "INVALID INPUT:\nSHEAF SIZE Y\n\nUSE NUMBERS ONLY. MUST BE 1 OR HIGHER";
		[0, _str, 5] spawn T1AM_Fnc_ShowMessage;
	};
	if (T1AM_LastRounds < 1) then {
		T1AM_LastRounds = 1;
		if (!isNull _dialog) then {
			(_dialog displayCtrl 47207) ctrlSetText format ["%1",T1AM_LastRounds];
		};
		private _str = "INVALID INPUT:\nNUMBER OF ROUNDS\n\nUSE NUMBERS ONLY. MUST BE 1 OR HIGHER";
		[0, _str, 5] spawn T1AM_Fnc_ShowMessage;
	};
	if (T1AM_LastSheafDir < 1 or T1AM_LastSheafDir > 360) then {
		T1AM_LastSheafDir = 360;
		if (!isNull _dialog) then {
			(_dialog displayCtrl 47224) ctrlSetText format ["%1",T1AM_LastSheafDir];
		};
		private _str = "INVALID INPUT:\nSHEAF DIR\n\nUSE NUMBERS ONLY. MUST BE BETWEEN 1 AND 360";
		[0, _str, 5] spawn T1AM_Fnc_ShowMessage;
	};
	if (T1AM_LastSheafDist < 1 or T1AM_LastSheafDist > 1000) then {
		T1AM_LastSheafDist = 100;
		if (!isNull _dialog) then {
			(_dialog displayCtrl 47225) ctrlSetText format ["%1",T1AM_LastSheafDist];
		};
		private _str = "INVALID INPUT:\nSHEAF DIST\n\nUSE NUMBERS ONLY. MUST BE BETWEEN 1 AND 1000";
		[0, _str, 5] spawn T1AM_Fnc_ShowMessage;
	};
	
	private _xTemp = [T1AM_LastGPSX] call T1AM_Fnc_FormatCoordinates;
	private _yTemp = [T1AM_LastGPSY] call T1AM_Fnc_FormatCoordinates;
	
	//DIAG_LOG format["CONTROL LOOP GPSX 3: %1", T1AM_LastGPSX];
	//DIAG_LOG format["CONTROL LOOP GPSX 4: %1", _xTemp];
	//DIAG_LOG format["CONTROL LOOP GPSY 3: %1", T1AM_LastGPSY];
	//DIAG_LOG format["CONTROL LOOP GPSY 4: %1", _yTemp];
	
	private _posReal = [[_xTemp, _yTemp]] call T1AM_Fnc_MapGridToPos;
	T1AM_LastGPSX = _posReal select 0;
	T1AM_LastGPSY = _posReal select 1;
	
	//DIAG_LOG format["CONTROL LOOP GPSX 5: %1", T1AM_LastGPSX];
	//DIAG_LOG format["CONTROL LOOP GPSY 5: %1", T1AM_LastGPSY];
	
	// Adjust certain vars to clean them up and make sure the numbers are not too small or too big.
	T1AM_LastSheafX = (round T1AM_LastSheafX) max 1;
	T1AM_LastSheafY = (round T1AM_LastSheafY) max 1;
	T1AM_LastGPSZ_AGL = round T1AM_LastGPSZ_AGL;
	T1AM_LastRounds = (round T1AM_LastRounds) max 1;
	T1AM_LastSheafDir = ((round T1AM_LastSheafDir) max 1) min 360;
	T1AM_LastSheafDist = ((round T1AM_LastSheafDist) max 1) min 1000;
	
	
	// When GPS pos changes, save the new settings and update the exactPos var.
	private _newExactPos = false;
	if (_lastGPSX != T1AM_LastGPSX) then {
		_lastGPSX = T1AM_LastGPSX;
		_newExactPos = true;
	};
	if (_lastGPSY != T1AM_LastGPSY) then {
		_lastGPSY = T1AM_LastGPSY;
		_newExactPos = true;
	};
	if (_newExactPos) then {
		private _posGPS = AGLtoASL [T1AM_LastGPSX,T1AM_LastGPSY,T1AM_LastGPSZ_AGL];
		T1AM_ControlledAssetLocal setVariable ["T1AM_exactPos", _posGPS, true];
		
		// Update distance.
		if ((T1AM_LastWarhead in T1AM_GPSGuidedTypes) or {T1AM_LastWarhead in T1AM_GPSLaserTypes} or {T1AM_LastWarhead in T1AM_GPSSeekerTypes}) then {
			_distance = round ((getPosASL (vehicle (leader _asset))) vectorDistance _posGPS);
			if (!isNull _dialog) then {
				(_dialog displayCtrl 47216) ctrlSetText format ["%1 m (GPS)", _distance];
			};
		};
	};
	
	
	// If the selected angle has changed, then we want to update the CEP.
	if (_angle != T1AM_LastAngle) then {
		
		_angle = T1AM_LastAngle;
		
		// CEP
		switch true do {
			case (_warheadType in T1AM_GPSLaserTypes or {_warheadType in T1AM_GPSSeekerTypes}) : {
				_scatterSpread2 = format ["%1 m (GPS)", 3];
			};
			
			case (_warheadType in T1AM_GPSGuidedTypes) : {
				_scatterSpread2 = format ["%1 m (GPS)", 5];
			};
			
			default {
				if (_angle == "High") then {_scatterSpread2 = format ["%1 m", _scatterSpreadHigh]};
				if (_angle == "Low") then {_scatterSpread2 = format ["%1 m", _scatterSpreadLow]};
				if (_warheadType in T1AM_LaserTypes) then {
					_scatterSpread2 = _scatterSpread2 + format [" | %1 m (LASER)", 5];
				};
			};
		};
		
		if (!isNull _dialog) then {
			(_dialog displayCtrl 47220) ctrlSetText _scatterSpread2;
		};
	};
	
	
	// If the player selects a new magazine type, then we want to update the CEP and airburst settings.
	// We won't show the airburst settings if the magazine type doesn't support it.
	if (_warheadType != T1AM_LastWarhead) then {
	
		_warheadType = T1AM_LastWarhead;
		
		// CEP
		switch true do {
			case (_warheadType in T1AM_GPSLaserTypes or {_warheadType in T1AM_GPSSeekerTypes}) : {
				_scatterSpread2 = format ["%1 m (GPS)", 3];
			};
			
			case (_warheadType in T1AM_GPSGuidedTypes) : {
				_scatterSpread2 = format ["%1 m (GPS)", 5];
			};
			
			default {
				if (_angle == "High") then {_scatterSpread2 = format ["%1 m", _scatterSpreadHigh]};
				if (_angle == "Low") then {_scatterSpread2 = format ["%1 m", _scatterSpreadLow]};
				if (_warheadType in T1AM_LaserTypes) then {
					_scatterSpread2 = _scatterSpread2 + format [" | %1 m (LASER)", 5];
				};
			};
		};
		
		if (!isNull _dialog) then {
			(_dialog displayCtrl 47220) ctrlSetText _scatterSpread2;
		};
		
		
		// Fuse
		_lastFuse = (_dialog displayCtrl 47212) lbData (lbCurSel (_dialog displayCtrl 47212));
		
		if (_warheadType in T1AM_AirburstRounds) then {
			_fuseTypes = ["IMPACT","AIRBURST","MIXED"];
		} else {
			_fuseTypes = ["IMPACT"];
		};
		
		_control = _dialog displayCtrl 47212;
		lbClear _control;
		
		_count = 0;
		{
			private _fuseType = _x;
			_control lbAdd format["%1",_fuseType];
			_control lbSetData [(lbSize _control)-1,_fuseType];
			if (_fuseType == _lastFuse) then {_lastFuseIndex = _count};
			_count = _count + 1;
		} forEach _fuseTypes;
		_control lbSetCurSel _lastFuseIndex;
		
		
		// Update distance.
		if ((T1AM_LastWarhead in T1AM_GPSGuidedTypes) or {T1AM_LastWarhead in T1AM_GPSLaserTypes} or {T1AM_LastWarhead in T1AM_GPSSeekerTypes}) then {
			private _posGPS = T1AM_ControlledAssetLocal getVariable ["T1AM_exactPos", [0,0,0]];
			if (_posGPS isEqualTo [0,0,0]) then {_posGPS = [T1AM_Xdisplay,T1AM_Ydisplay,T1AM_Elevation]};
			_distance = round ((getPosASL (vehicle (leader _asset))) vectorDistance _posGPS);
			if (!isNull _dialog) then {
				(_dialog displayCtrl 47216) ctrlSetText format ["%1 m (GPS)", _distance];
			};
		} else {
			_distance = round ((getPosASL (vehicle (leader _asset))) vectorDistance _pos);
			if (!isNull _dialog) then {
				(_dialog displayCtrl 47216) ctrlSetText format ["%1 m", _distance];
			};
		};
	};
	
	
	// Update display pos.
	_posMap = [[T1AM_Xdisplay, T1AM_Ydisplay]] call T1AM_Fnc_PosToMapGrid;
	_xMap = parseNumber (_posMap select 0);
	_yMap = parseNumber (_posMap select 1);
	
	_Xtext2 = [_xMap] call T1AM_Fnc_FormatCoordinates;
	_Ytext2 = [_yMap] call T1AM_Fnc_FormatCoordinates;
	
	if (!isNull _dialog) then {
		(_dialog displayCtrl 47202) ctrlSetText format ["%1", _Xtext2];
		(_dialog displayCtrl 47203) ctrlSetText format ["%1", _Ytext2];
	};
	
	
	// Check what the currently selected settings are for certain things,
	// so we know if they have changed next time we run the loop. We then need to change some stuff for them.
	_angle = T1AM_LastAngle;
	_warheadType = T1AM_LastWarhead;
	_lastGPSX = T1AM_LastGPSX;
	_lastGPSY = T1AM_LastGPSY;
	
	
	// Update list with available ammo. Wait until that script has done its job (wait for the call), then move on.
	_array = [_addedWarheads, _addedWarheadsTimeout, _controlWarheads] call T1AM_Fnc_DisplayWarheads;
	_addedWarheads = _array select 0;
	_addedWarheadsTimeout = _array select 1;
	
	
	sleep 0.2;
};

//DIAG_LOG "CONTROL END";