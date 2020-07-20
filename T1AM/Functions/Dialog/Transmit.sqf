// Called from the Transmit button

disableSerialization;

if (T1AM_ControlledAssetLocal in T1AM_AssetsBusy) exitWith {
	private _str = "ASSET IS PROCESSING OTHER ORDERS";
	[0, _str, 5] spawn T1AM_Fnc_ShowMessage;
};

private _prePlotted = T1AM_PrePlotted;

//DIAG_LOG format["TRANSMIT - _prePlotted: %1", _prePlotted];

private _dialog = findDisplay 47200;

// Rounds to fire
private _rounds = [ctrlText (_dialog displayCtrl 47207), 0] call T1AM_Fnc_ParseNumber;
if (_rounds == -9999999) exitWith {
	private _str = "INVALID INPUT:\nNUMBER OF ROUNDS";
	[0, _str, 5] spawn T1AM_Fnc_ShowMessage;
};
_rounds = (round _rounds) max 1;


// GPS elevation
private _GPSZAdjust = [ctrlText (_dialog displayCtrl 47221), 0] call T1AM_Fnc_ParseNumber;
if (_GPSZAdjust == -9999999) exitWith {
	private _str = "INVALID INPUT:\nGPS Z COORDINATE";
	[0, _str, 5] spawn T1AM_Fnc_ShowMessage;
};
_GPSZAdjust = round _GPSZAdjust;


// Sheaf size X
private _sizeX = [ctrlText (_dialog displayCtrl 47213), 0] call T1AM_Fnc_ParseNumber;
if (_sizeX == -9999999) exitWith {
	private _str = "INVALID INPUT:\nSHEAF SIZE X";
	[0, _str, 5] spawn T1AM_Fnc_ShowMessage;
};
_sizeX = (round _sizeX) max 1;


// Sheaf size Y
private _sizeY = [ctrlText (_dialog displayCtrl 47214), 0] call T1AM_Fnc_ParseNumber;
if (_sizeY == -9999999) exitWith {
	private _str = "INVALID INPUT:\nSHEAF SIZE Y";
	[0, _str, 5] spawn T1AM_Fnc_ShowMessage;
};
_sizeY = (round _sizeY) max 0;


// Adjust X
private _nr = [ctrlText (_dialog displayCtrl 47204), 0] call T1AM_Fnc_ParseNumber;
if (_nr == -9999999) exitWith {
	private _str = "INVALID INPUT:\nADJUST X";
	[0, _str, 5] spawn T1AM_Fnc_ShowMessage;
};


// Adjust Y
_nr = [ctrlText (_dialog displayCtrl 47205), 0] call T1AM_Fnc_ParseNumber;
if (_nr == -9999999) exitWith {
	private _str = "INVALID INPUT:\nADJUST Y";
	[0, _str, 5] spawn T1AM_Fnc_ShowMessage;
};


// Warhead type
private _warheadType = (_dialog displayCtrl 47206) lbData (lbCurSel (_dialog displayCtrl 47206));
T1AM_LastWarhead = _warheadType;


// getGPS pos.
private _posGPS = [];
if ((_warheadType in T1AM_GPSGuidedTypes) or {_warheadType in T1AM_GPSLaserTypes} or {_warheadType in T1AM_GPSSeekerTypes}) then {
	_posGPS = T1AM_ControlledAssetLocal getVariable ["T1AM_exactPos", [0,0,0]];
};
if (_posGPS isEqualTo [0,0,0]) exitWith {
	private _str = "INVALID INPUT:\nGPS COORDINATES";
	[0, _str, 5] spawn T1AM_Fnc_ShowMessage;
};


// End of exitWiths.


private _sheafSize = [_sizeX,_sizeY];

T1AM_ControlledAssetLocal setVariable ["T1AM_endMission", false, true];


// If the player has requested an adjust, change the pos vars.
call T1AM_Fnc_Adjust;

// Sheaf
private _sheaf = (_dialog displayCtrl 47211) lbData (lbCurSel (_dialog displayCtrl 47211));


// Sheaf Dir
private _sheafDir = [ctrlText (_dialog displayCtrl 47224), 0] call T1AM_Fnc_ParseNumber;
if (_sheafDir == -9999999) exitWith {
	private _str = "INVALID INPUT:\nSHEAF DIR.";
	[0, _str, 5] spawn T1AM_Fnc_ShowMessage;
};
_sheafDir = ((round _sheafDir) max 0) min 360;


// Sheaf Dist
private _sheafDist = [ctrlText (_dialog displayCtrl 47225), 0] call T1AM_Fnc_ParseNumber;
if (_sheafDist == -9999999) exitWith {
	private _str = "INVALID INPUT:\nSHEAF DIST.";
	[0, _str, 5] spawn T1AM_Fnc_ShowMessage;
};
_sheafDist = ((round _sheafDist) max 1) min 1000;

// Mission type
private _missionType = (_dialog displayCtrl 47208) lbData (lbCurSel (_dialog displayCtrl 47208));
if (_missionType == "Spot") then {_rounds = 1};
T1AM_MissionType = (_dialog displayCtrl 47208) lbData (lbCurSel (_dialog displayCtrl 47208));


// Low/high angle
T1AM_Angle = (_dialog displayCtrl 47209) lbData (lbCurSel (_dialog displayCtrl 47209));
private _angle = T1AM_Angle;


// Fuse
private _fuse = (_dialog displayCtrl 47212) lbData (lbCurSel (_dialog displayCtrl 47212));


// Airburst height
private _airburstHeight = (_dialog displayCtrl 47215) lbData (lbCurSel (_dialog displayCtrl 47215));


private _pos = [];
if (_prePlotted) then {
	T1AM_X = T1AM_LastPos select 0;
	T1AM_Y = T1AM_LastPos select 1;
	T1AM_Elevation = T1AM_LastPos select 2;
	_pos = T1AM_LastPos;
	//DIAG_LOG format["TRANSMIT - PREPLOTTED - _pos: %1", _pos];
	
} else {
	
	_pos = [T1AM_X, T1AM_Y, T1AM_Elevation];
	//DIAG_LOG format["TRANSMIT - NOT PLOTTED - _pos: %1", _pos];
};


// Distance
private _pos2 = getPosASL (vehicle (leader T1AM_SelectedAsset));
private _distance = [];

if ((_warheadType in T1AM_GPSGuidedTypes) or {_warheadType in T1AM_GPSLaserTypes} or {_warheadType in T1AM_GPSSeekerTypes}) then {
	_distance = _pos2 vectorDistance _posGPS;
} else {
	_distance = _pos vectorDistance _pos2;
};

if (T1AM_MissionType == "SPOT") then {_rounds = 1};
private _sender = player;
private _timeStamp = [(date select 3),(date select 4)];

if (!(_warheadType in T1AM_AirburstRounds)) then {
	_fuse = "IMPACT";
	_airburstHeight = "";
};

private _posDisplay = [T1AM_Xdisplay, T1AM_Ydisplay, T1AM_Elevation];


private _plotNr = 1;
if (T1AM_MissionType == "PLOT") then {
	{
		if ((_x select 0) == T1AM_ControlledAssetLocal and {_x select 5 == "PLOT"}) then {
			_plotNr = _plotNr + 1;
		};
		
	} forEach T1AM_AllMissions;
};


T1AM_NewFireMission = [T1AM_ControlledAssetLocal,_pos,_warheadType,_rounds,_distance,_missionType,_angle,_sender,_timeStamp,_prePlotted,_sheaf,_fuse,_sheafSize,_posDisplay,_airburstHeight,_plotNr,_GPSZAdjust,_posGPS,_sheafDir,_sheafDist];

T1AM_FireMissionCurrent = T1AM_NewFireMission;

T1AM_NewFireMission call T1AM_Fnc_ProcessFireMission;

_missionType = "FIRE FOR EFFECT";
if (T1AM_MissionType == "SPOT") then {_missionType = "SPOTTING ROUND"};
if (T1AM_MissionType == "PLOT") then {_missionType = "FIRE MISSION PLOT"};

private _posMap = _posDisplay;
if ((_warheadType in T1AM_GPSGuidedTypes) or {_warheadType in T1AM_GPSLaserTypes} or {_warheadType in T1AM_GPSSeekerTypes}) then {
	_posMap = _posGPS;
};
_posMap = [[_posMap select 0, _posMap select 1]] call T1AM_Fnc_PosToMapGrid;
private _xMap = parseNumber (_posMap select 0);
private _yMap = parseNumber (_posMap select 1);

private _xText = [_xMap] call T1AM_Fnc_FormatCoordinates;
private _yText = [_yMap] call T1AM_Fnc_FormatCoordinates;


T1AM_PrePlotted = false;
T1AM_LastAdjustX = 0;
T1AM_LastAdjustY = 0;
[] spawn {
	// Only allow the player to open the arty menu after a certain amount of time has expired.
	// It's a workaround for ammo selection resetting after transmitting, caused by the arty unit getting new mags.
	[5, [], 1] spawn T1AM_Fnc_LoadingScreen;
};