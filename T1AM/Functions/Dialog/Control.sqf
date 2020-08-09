// This is the arty menu in which the player can select various options before transmitting the fire mission.

disableSerialization;

params [["_prePlotted", false, [true]]];

DIAG_LOG "CONTROL START";


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

DIAG_LOG format["CONTROL - _prePlotted: %1", _prePlotted];

if (_prePlotted and {count T1AM_SelectedPrePlotted < 1}) exitWith {
	private _str = "NO MISSION SELECTED";
	[0, _str, 5] spawn T1AM_Fnc_ShowMessage;
	sleep 3;
	[false] call T1AM_Fnc_EndMission;
};

if (_prePlotted) then {T1AM_HaveAimpoint = true};

if ((!T1AM_HaveAimpoint) and (!_prePlotted)) exitWith {
	T1AM_LastDialog = "AIMPOINT";
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


T1AM_LastDialog = "CONTROL";
(findDisplay 47100) closeDisplay 0;
(findDisplay 47200) closeDisplay 0;
(findDisplay 47300) closeDisplay 0;
(findDisplay 47400) closeDisplay 0;
(findDisplay 47500) closeDisplay 0;
(findDisplay 47050) createDisplay "T1AM_DialogControl";

private _dialog = findDisplay 47200;


// Hide stuff to make the screen look less buggy when it's starting up.
(_dialog displayCtrl 47226) ctrlShow false;
(_dialog displayCtrl 47226) ctrlEnable false;
(_dialog displayCtrl 47227) ctrlShow false;
(_dialog displayCtrl 47227) ctrlEnable false;
(_dialog displayCtrl 47228) ctrlShow false;
(_dialog displayCtrl 47228) ctrlEnable false;
(_dialog displayCtrl 47232) ctrlShow false;
(_dialog displayCtrl 47232) ctrlEnable false;

(_dialog displayCtrl 47222) ctrlShow false;
(_dialog displayCtrl 47222) ctrlEnable false;
(_dialog displayCtrl 47223) ctrlShow false;
(_dialog displayCtrl 47223) ctrlEnable false;
(_dialog displayCtrl 47221) ctrlShow false;
(_dialog displayCtrl 47221) ctrlEnable false;



(_dialog displayCtrl 47229) ctrlShow false;
(_dialog displayCtrl 47229) ctrlEnable false;
(_dialog displayCtrl 47230) ctrlShow false;
(_dialog displayCtrl 47230) ctrlEnable false;
(_dialog displayCtrl 47231) ctrlShow false;
(_dialog displayCtrl 47231) ctrlEnable false;
(_dialog displayCtrl 47238) ctrlShow false;
(_dialog displayCtrl 47238) ctrlEnable false;
(_dialog displayCtrl 47241) ctrlShow false;
(_dialog displayCtrl 47241) ctrlEnable false;
(_dialog displayCtrl 47242) ctrlShow false;
(_dialog displayCtrl 47242) ctrlEnable false;
(_dialog displayCtrl 47243) ctrlShow false;
(_dialog displayCtrl 47243) ctrlEnable false;
(_dialog displayCtrl 47247) ctrlShow false;
(_dialog displayCtrl 47247) ctrlEnable false;
(_dialog displayCtrl 47248) ctrlShow false;
(_dialog displayCtrl 47248) ctrlEnable false;
(_dialog displayCtrl 47249) ctrlShow false;
(_dialog displayCtrl 47249) ctrlEnable false;
(_dialog displayCtrl 47257) ctrlShow false;
(_dialog displayCtrl 47257) ctrlEnable false;
(_dialog displayCtrl 47258) ctrlShow false;
(_dialog displayCtrl 47258) ctrlEnable false;
(_dialog displayCtrl 47259) ctrlShow false;
(_dialog displayCtrl 47259) ctrlEnable false;

(_dialog displayCtrl 47204) ctrlShow false;
(_dialog displayCtrl 47204) ctrlEnable false;
(_dialog displayCtrl 47205) ctrlShow false;
(_dialog displayCtrl 47205) ctrlEnable false;
(_dialog displayCtrl 47237) ctrlShow false;
(_dialog displayCtrl 47237) ctrlEnable false;
(_dialog displayCtrl 47239) ctrlShow false;
(_dialog displayCtrl 47239) ctrlEnable false;
(_dialog displayCtrl 47240) ctrlShow false;
(_dialog displayCtrl 47240) ctrlEnable false;
(_dialog displayCtrl 47244) ctrlShow false;
(_dialog displayCtrl 47244) ctrlEnable false;
(_dialog displayCtrl 47245) ctrlShow false;
(_dialog displayCtrl 47245) ctrlEnable false;
(_dialog displayCtrl 47246) ctrlShow false;
(_dialog displayCtrl 47246) ctrlEnable false;
(_dialog displayCtrl 47250) ctrlShow false;
(_dialog displayCtrl 47250) ctrlEnable false;
(_dialog displayCtrl 47254) ctrlShow false;
(_dialog displayCtrl 47254) ctrlEnable false;
(_dialog displayCtrl 47255) ctrlShow false;
(_dialog displayCtrl 47255) ctrlEnable false;
(_dialog displayCtrl 47256) ctrlShow false;
(_dialog displayCtrl 47256) ctrlEnable false;

(_dialog displayCtrl 47260) ctrlShow false;
(_dialog displayCtrl 47260) ctrlEnable false;
(_dialog displayCtrl 47261) ctrlShow false;
(_dialog displayCtrl 47261) ctrlEnable false;
(_dialog displayCtrl 47262) ctrlShow false;
(_dialog displayCtrl 47262) ctrlEnable false;
(_dialog displayCtrl 47263) ctrlShow false;
(_dialog displayCtrl 47263) ctrlEnable false;
(_dialog displayCtrl 47264) ctrlShow false;
(_dialog displayCtrl 47264) ctrlEnable false;
(_dialog displayCtrl 47265) ctrlShow false;
(_dialog displayCtrl 47265) ctrlEnable false;
(_dialog displayCtrl 47266) ctrlShow false;
(_dialog displayCtrl 47266) ctrlEnable false;
(_dialog displayCtrl 47267) ctrlShow false;
(_dialog displayCtrl 47267) ctrlEnable false;


// Required for pre-plotted missions
private _fireMission = [];
private _rounds = 0;
private _lastPos = [];
private _lastAngle = "";
private _lastSheaf = "";
private _lastFuse = "";
private _lastAirburstHeight = "";
private _lastWarheadType = "";
private _lastSheafDir = 0;
private _lastSheafDist = 0;
private _lastTRPX = 0;
private _lastTRPY = 0;
private _lastRemarks = "";

if (_prePlotted) then {
	_fireMission = T1AM_SelectedPrePlotted;
	_lastPos = _fireMission select 1;
	_lastWarheadType = _fireMission select 2;
	_rounds = _fireMission select 3;
	_lastAngle = _fireMission select 6;
	_lastSheaf = _fireMission select 10;
	_lastFuse = _fireMission select 11;
	private _sheafSize = _fireMission select 12;
	private _lastPosDisplay = _fireMission select 13;
	_lastAirburstHeight = _fireMission select 14;
	_lastSheafDir = _fireMission select 18;
	_lastSheafDist = _fireMission select 19;
	_lastTRPX = _fireMission select 20;
	_lastTRPY = _fireMission select 21;
	_lastRemarks = _fireMission select 22;
	
	T1AM_LastMission = "FFE";
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
	T1AM_LastTRPX = _lastTRPX;
	T1AM_LastTRPY = _lastTRPY;
	T1AM_LastRemarks = _lastRemarks;
	
	// If it's a preplotted mission, put the adjust values to 0.
	T1AM_LastAdjustCheckbox = 0;
	T1AM_LastAdjustX = 0;
	T1AM_LastAdjustY = 0;
	T1AM_LastAdjustSpotterX = 0;
	T1AM_LastAdjustSpotterY = 0;
	T1AM_LastAdjustImpactX = 0;
	T1AM_LastAdjustImpactY = 0;
	T1AM_LastAdjustImpactRefX = _lastPosDisplay select 0;
	T1AM_LastAdjustImpactRefY = _lastPosDisplay select 1;
	
	T1AM_FireMissionCurrent = [];
	
	T1AM_X = _lastPos select 0;
	T1AM_Y = _lastPos select 1;
	T1AM_Elevation = _lastPos select 2;
	T1AM_Xdisplay = _lastPosDisplay select 0;
	T1AM_Ydisplay = _lastPosDisplay select 1;
	
	private _gpsPos = _fireMission select 17;
	T1AM_LastGPSX = _gpsPos select 0;
	T1AM_LastGPSY = _gpsPos select 1;
	T1AM_ControlledAssetLocal setVariable ["T1AM_exactPos", _gpsPos];
	
	T1AM_LastPos = _lastPos;
	
	DIAG_LOG format["CONTROL - PREPLOTTED MISSION - T1AM_LastPos: %1", T1AM_LastPos];
};


// Get current settings
if ((count T1AM_FireMissionCurrent) > 0) then {
	_fireMission = T1AM_FireMissionCurrent;
	_lastPos = _fireMission select 1;
	T1AM_LastPos = _lastPos;
	DIAG_LOG format["CONTROL - CURRENT FIRE MISSION - T1AM_LastPos: %1", T1AM_LastPos];
};


// If GPS pos X and Y hasn't been set yet, give it a value of current display pos.
// Z value can stay on zero.
if (T1AM_LastGPSX == -999999 or T1AM_LastGPSY == -999999) then {
	T1AM_LastGPSX = T1AM_Xdisplay;
	T1AM_LastGPSY = T1AM_Ydisplay;
	T1AM_ControlledAssetLocal setVariable ["T1AM_exactPos", [T1AM_Xdisplay,T1AM_Ydisplay,T1AM_Elevation]];
};


// If impact target pos not set, then set it on the target pos.
if (T1AM_LastAdjustImpactRefX == 0 and T1AM_LastAdjustImpactRefY == 0) then {
	T1AM_LastAdjustImpactRefX = T1AM_Xdisplay;
	T1AM_LastAdjustImpactRefY = T1AM_Ydisplay;
};


private _lastMissionType = T1AM_LastMission;
private _lastSheafSizeX = T1AM_LastSheafX;
private _lastSheafSizeY = T1AM_LastSheafY;
private _lastGPSX = T1AM_LastGPSX;
private _lastGPSY = T1AM_LastGPSY;
private _lastAdjustSpotterX = T1AM_LastAdjustSpotterX;
private _lastAdjustSpotterY = T1AM_LastAdjustSpotterY;
private _lastAdjustImpactX = T1AM_LastAdjustImpactX;
private _lastAdjustImpactY = T1AM_LastAdjustImpactY;
private _lastAdjustImpactRefX = T1AM_LastAdjustImpactRefX;
private _lastAdjustImpactRefY = T1AM_LastAdjustImpactRefY;
private _lastGPSZ_AGL = T1AM_LastGPSZ_AGL;
_lastTRPX = T1AM_LastTRPX;
_lastTRPY = T1AM_LastTRPY;
_lastAngle = T1AM_LastAngle;
_rounds = T1AM_LastRounds;
_lastFuse = T1AM_LastFuse;
_lastAirburstHeight = T1AM_LastAirburstHeight;
_lastSheaf = T1AM_LastSheaf;
_lastSheafDir = T1AM_LastSheafDir;
_lastSheafDist = T1AM_LastSheafDist;
_lastRemarks = T1AM_LastRemarks;

DIAG_LOG format["CONTROL GPSX 1: %1", _lastGPSX];
DIAG_LOG format["CONTROL GPSY 1: %1", _lastGPSY];

// Sheaf size X
if (_lastSheafSizeX != 0) then {
	(_dialog displayCtrl 47213) ctrlSetText (str _lastSheafSizeX);
};

// Sheaf size Y
if (_lastSheafSizeY != 0) then {
	(_dialog displayCtrl 47214) ctrlSetText (str _lastSheafSizeY);
};

// Sheaf dir
if (_lastSheafDir != 0) then {
	(_dialog displayCtrl 47224) ctrlSetText (str _lastSheafDir);
};

// Sheaf dist
if (_lastSheafDist != 0) then {
	(_dialog displayCtrl 47225) ctrlSetText (str _lastSheafDist);
};

// Remarks
if (_lastRemarks != "") then {
	(_dialog displayCtrl 47267) ctrlSetText _lastRemarks;
};


// GPS pos
private _posMap = [[_lastGPSX, _lastGPSY]] call T1AM_Fnc_PosToMapGrid;
private _xMap = parseNumber (_posMap select 0);
private _yMap = parseNumber (_posMap select 1);

DIAG_LOG format["CONTROL GPSX 2: %1", _posMap select 0];
DIAG_LOG format["CONTROL GPSX 3: %1", _xMap];
DIAG_LOG format["CONTROL GPSY 2: %1", _posMap select 1];
DIAG_LOG format["CONTROL GPSY 3: %1", _yMap];

_xMap = [_xMap] call T1AM_Fnc_FormatCoordinates;
(_dialog displayCtrl 47222) ctrlSetText _xMap;
_yMap = [_yMap] call T1AM_Fnc_FormatCoordinates;
(_dialog displayCtrl 47223) ctrlSetText _yMap;

DIAG_LOG format["CONTROL GPSX 4: %1", _xMap];
DIAG_LOG format["CONTROL GPSY 4: %1", _yMap];

// GPS Z
if (_lastGPSZ_AGL != 0) then {
	(_dialog displayCtrl 47221) ctrlSetText (str _lastGPSZ_AGL);
};


// Adjust spotter pos
_posMap = [[_lastAdjustSpotterX, _lastAdjustSpotterY]] call T1AM_Fnc_PosToMapGrid;
_xMap = parseNumber (_posMap select 0);
_yMap = parseNumber (_posMap select 1);

_xMap = [_xMap] call T1AM_Fnc_FormatCoordinates;
(_dialog displayCtrl 47239) ctrlSetText _xMap;
_yMap = [_yMap] call T1AM_Fnc_FormatCoordinates;
(_dialog displayCtrl 47240) ctrlSetText _yMap;


// Adjust impact pos
_posMap = [[_lastAdjustImpactX, _lastAdjustImpactY]] call T1AM_Fnc_PosToMapGrid;
_xMap = parseNumber (_posMap select 0);
_yMap = parseNumber (_posMap select 1);

_xMap = [_xMap] call T1AM_Fnc_FormatCoordinates;
(_dialog displayCtrl 47245) ctrlSetText _xMap;
_yMap = [_yMap] call T1AM_Fnc_FormatCoordinates;
(_dialog displayCtrl 47246) ctrlSetText _yMap;


// Adjust impact target pos
_posMap = [[_lastAdjustImpactRefX, _lastAdjustImpactRefY]] call T1AM_Fnc_PosToMapGrid;
_xMap = parseNumber (_posMap select 0);
_yMap = parseNumber (_posMap select 1);

_xMap = [_xMap] call T1AM_Fnc_FormatCoordinates;
(_dialog displayCtrl 47254) ctrlSetText _xMap;
_yMap = [_yMap] call T1AM_Fnc_FormatCoordinates;
(_dialog displayCtrl 47255) ctrlSetText _yMap;


// Adjust impact target pos
_posMap = [[_lastTRPX, _lastTRPY]] call T1AM_Fnc_PosToMapGrid;
_xMap = parseNumber (_posMap select 0);
_yMap = parseNumber (_posMap select 1);

_xMap = [_xMap] call T1AM_Fnc_FormatCoordinates;
(_dialog displayCtrl 47263) ctrlSetText _xMap;
_yMap = [_yMap] call T1AM_Fnc_FormatCoordinates;
(_dialog displayCtrl 47264) ctrlSetText _yMap;


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


private _status = "RDY";
if (_asset in T1AM_AssetsBusy) then {_status = "BSY"};
(_dialog displayCtrl 47201) ctrlSetText format ["%1: %2 x%3  [%4 %5 %6]",_assetName,_name,(count _tubes),_xText,_yText,_artyElev,_status];


(_dialog displayCtrl 47202) ctrlSetText _Xtext2;
(_dialog displayCtrl 47203) ctrlSetText _Ytext2;
(_dialog displayCtrl 47204) ctrlSetText (str T1AM_LastAdjustX);
(_dialog displayCtrl 47205) ctrlSetText (str T1AM_LastAdjustY);
(_dialog displayCtrl 47207) ctrlSetText (str _rounds);


// Show amount of units.
(_dialog displayCtrl 47218) ctrlSetText format ["Unit: %1/%2",(T1AM_SelectedTubeIndex + 1),(count _tubes)];

T1AM_SelectedTube = _tubes select T1AM_SelectedTubeIndex;


// Adjust stuff.
(_dialog displayCtrl 47237) lbSetCurSel T1AM_LastAdjustCheckbox;


// Update list with available ammo.
private _controlWarheads = _dialog displayCtrl 47206;
lbClear _controlWarheads;
private _addedWarheads = [];
private _addedWarheadsTimeout = 9;
private _array = [_addedWarheads, _addedWarheadsTimeout, _controlWarheads] call T1AM_Fnc_DisplayWarheads;
_addedWarheads = _array select 0;
_addedWarheadsTimeout = _array select 1;
private _warheadType = _controlWarheads lbData (lbCurSel _controlWarheads);


// This will update the GUI and show/hide things depending on what ammo is selected.
[_controlWarheads, lbCurSel _controlWarheads] spawn T1AM_Fnc_ListWarheadTypeEvent;


_GPSGuidedTypes = _warheadType in T1AM_GPSGuidedTypes;
_GPSLaserTypes = _warheadType in T1AM_GPSLaserTypes;
_GPSSeekerTypes = _warheadType in T1AM_GPSSeekerTypes;

DIAG_LOG format["CONTROL - _warheadType: %1", _warheadType];

// Distance
private _distance = 0;
private _posGPS = [];
if (_GPSGuidedTypes or _GPSLaserTypes or _GPSSeekerTypes) then {
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

private _lastMissionTypeIndex = 0;
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
if (_assetType == "MORTAR" or _assetType == "MK41") then {_angleTypes = ["HIGH"]};

private _angle = "";
private _lastAngleIndex = 0;
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
switch true do {
	case (_assetType == "MORTAR") : {_profile = [_warheadType, _distance] call T1AM_Fnc_ProfileMortar};
	case ((_assetType == "CANNON") and {_angle == "LOW"}) : {_profile = [_warheadType, _distance] call T1AM_Fnc_ProfileCannonLA};
	case ((_assetType == "CANNON") and {_angle == "HIGH"}) : {_profile = [_warheadType, _distance] call T1AM_Fnc_ProfileCannonHA};
	case ((_assetType == "ROCKET") and {_angle == "LOW"}) : {_profile = [_warheadType, _distance] call T1AM_Fnc_ProfileRocketsLA};
	case ((_assetType == "ROCKET") and {_angle == "HIGH"}) : {_profile = [_warheadType, _distance] call T1AM_Fnc_ProfileRocketsHA};
	case (_assetType == "MK41") : {_profile = [_warheadType, _distance] call T1AM_Fnc_ProfileMK41};
	case (_assetType == "RHS_BM21") : {_profile = [_warheadType, _distance] call T1AM_Fnc_ProfileBM21};
};
private _maximumRange = _profile select 2;


// CEP
private _scatterSpread = [_distance, _maximumRange] call T1AM_Fnc_GetRandomSpread;
switch (_assetType) do {
	case ("MORTAR") : {_scatterSpread = _scatterSpread * 1.4};
	case ("ROCKET") : {_scatterSpread = _scatterSpread * 1.8};
	case ("RHS_BM21") : {_scatterSpread = _distance / 20}; //RHS BM21 has its own spread.
};

T1AM_scatterSpreadHigh = round(_scatterSpread max 1);
T1AM_scatterSpreadLow = round((_scatterSpread * 0.75) max 1);
private _cep = "";

switch true do {
	case (_GPSLaserTypes or _GPSSeekerTypes) : {
		_cep = "3 m (GPS)";
	};
	
	case (_GPSGuidedTypes) : {
		_cep = "5 m (GPS)";
	};
	
	default {
		switch (_lastAngle) do {
			case ("HIGH") : {
				_cep = format ["%1 m", T1AM_scatterSpreadHigh];
			};
			case ("LOW") : {
				_cep = format ["%1 m", T1AM_scatterSpreadLow];
			};
		};
		if (T1AM_LastWarhead in T1AM_LaserTypes) then {
			_cep = _cep + " | 5 m (LASER)";
		};
	};
};

(_dialog displayCtrl 47220) ctrlSetText _cep;


// Sheaf type
_control = _dialog displayCtrl 47211;
lbClear _control;
private _sheafTypes = [];
switch (_assetType) do {
	case ("RHS_BM21") : {_sheafTypes = ["POINT"]};
	case ("MK41") : {_sheafTypes = ["POINT"]};
	default {_sheafTypes = ["POINT","CIRCLE","BOX","LINE"]};
};

private _lastSheafIndex = 0;
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
private _fuseTypes = ["IMPACT"];
if (_warheadType in T1AM_AirburstRounds) then {_fuseTypes = ["IMPACT","AIRBURST","MIXED"]};

_control = _dialog displayCtrl 47212;
lbClear _control;

private _lastFuseIndex = 0;
_count = 0;
{
	private _fuseType = _x;
	_control lbAdd format["%1",_fuseType];
	_control lbSetData [(lbSize _control)-1,_fuseType];
	if (_fuseType == _lastFuse) then {_lastFuseIndex = _count};
	_count = _count + 1;
} forEach _fuseTypes;
_control lbSetCurSel _lastFuseIndex;

_control = _dialog displayCtrl 47215;
lbClear _control;

private _lastAirburstIndex = 1;
_count = 0;
private _airburstHeights = ["LOW","MED","HIGH"];
{
	private _airburstHeight = _x;
	_control lbAdd format["%1",_airburstHeight];
	_control lbSetData [(lbSize _control)-1,_airburstHeight];
	if (_airburstHeight == _lastAirburstHeight) then {_lastAirburstIndex = _count};
	_count = _count + 1;
} forEach _airburstHeights;
_control lbSetCurSel _lastAirburstIndex;



while {!isNull (findDisplay 47200)} do {
	
	_dialog = findDisplay 47200;
	
	// Update general info/status.
	_status = "RDY";
	if (_asset in T1AM_AssetsBusy) then {_status = "BSY"};
	_name = [(vehicle (leader _asset))] call T1AM_Fnc_VehicleName;
	_assetName = [_asset] call T1AM_Fnc_TrimGroupName;
	_tubes = [_asset] call T1AM_Fnc_GroupVehicles;
	_posArty = getPosASL (vehicle (leader _asset));
	_posMap = [[_posArty select 0, _posArty select 1]] call T1AM_Fnc_PosToMapGrid;
	_xMap = parseNumber (_posMap select 0);
	_yMap = parseNumber (_posMap select 1);
	_artyElev = round(_posArty select 2);
	_xMap = [_xMap] call T1AM_Fnc_FormatCoordinates;
	_yMap = [_yMap] call T1AM_Fnc_FormatCoordinates;
	(_dialog displayCtrl 47201) ctrlSetText format ["%1: %2 x%3  [%4 %5 %6] (%7)",_assetName,_name,(count _tubes),_xMap,_yMap,_artyElev,_status];
	
	
	// Update display pos.
	_posMap = [[T1AM_Xdisplay, T1AM_Ydisplay]] call T1AM_Fnc_PosToMapGrid;
	_xMap = parseNumber (_posMap select 0);
	_yMap = parseNumber (_posMap select 1);
	_xMap = [_xMap] call T1AM_Fnc_FormatCoordinates;
	_yMap = [_yMap] call T1AM_Fnc_FormatCoordinates;
	(_dialog displayCtrl 47202) ctrlSetText _xMap;
	(_dialog displayCtrl 47203) ctrlSetText _yMap;
	
	
	// Update list with available ammo.
	_array = [_addedWarheads, _addedWarheadsTimeout, _controlWarheads] call T1AM_Fnc_DisplayWarheads;
	_addedWarheads = _array select 0;
	_addedWarheadsTimeout = _array select 1;
	
	
	sleep 0.5;
};

DIAG_LOG "CONTROL END";