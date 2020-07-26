// Start processing the fire mission.

disableSerialization;

if (T1AM_ControlledAssetLocal in T1AM_AssetsBusy) exitWith {
	private _str = "ASSET IS PROCESSING OTHER ORDERS";
	[0, _str, 5] spawn T1AM_Fnc_ShowMessage;
};

private _prePlotted = T1AM_PrePlotted;

//DIAG_LOG format["TRANSMIT - _prePlotted: %1", _prePlotted];

private _dialog = findDisplay 47200;


private _airburstHeight = (_dialog displayCtrl 47215) lbData (lbCurSel (_dialog displayCtrl 47215));
private _angle = (_dialog displayCtrl 47209) lbData (lbCurSel (_dialog displayCtrl 47209));
private _rounds = [ctrlText (_dialog displayCtrl 47207), 0, true] call T1AM_Fnc_ParseNumber;
private _warheadType = (_dialog displayCtrl 47206) lbData (lbCurSel (_dialog displayCtrl 47206));
private _fuse = (_dialog displayCtrl 47212) lbData (lbCurSel (_dialog displayCtrl 47212));
private _sheaf = (_dialog displayCtrl 47211) lbData (lbCurSel (_dialog displayCtrl 47211));
private _sizeX = [ctrlText (_dialog displayCtrl 47213), 0, true] call T1AM_Fnc_ParseNumber;
private _sizeY = [ctrlText (_dialog displayCtrl 47214), 0, true] call T1AM_Fnc_ParseNumber;
private _sheafDir = [ctrlText (_dialog displayCtrl 47224), 0, true] call T1AM_Fnc_ParseNumber;
private _sheafDist = [ctrlText (_dialog displayCtrl 47225), 0, true] call T1AM_Fnc_ParseNumber;
private _missionType = (_dialog displayCtrl 47208) lbData (lbCurSel (_dialog displayCtrl 47208));
private _adjustX = [ctrlText (_dialog displayCtrl 47204), 0, true] call T1AM_Fnc_ParseNumber;
private _adjustY = [ctrlText (_dialog displayCtrl 47205), 0, true] call T1AM_Fnc_ParseNumber;

private _GPSZ = [ctrlText (_dialog displayCtrl 47221), 0, false] call T1AM_Fnc_ParseNumber;

private _str = ctrlText (_dialog displayCtrl 47222);
_str = [_str] call T1AM_Fnc_GridToPos;
private _GPSX = [_str, 5, true] call T1AM_Fnc_ParseNumber;

_str = ctrlText (_dialog displayCtrl 47223);
_str = [_str] call T1AM_Fnc_GridToPos;
private _GPSY = [_str, 5, true] call T1AM_Fnc_ParseNumber;

_str = ctrlText (_dialog displayCtrl 47239);
_str = [_str] call T1AM_Fnc_GridToPos;
private _adjustSpotterX = [_str, 5, true] call T1AM_Fnc_ParseNumber;

_str = ctrlText (_dialog displayCtrl 47240);
_str = [_str] call T1AM_Fnc_GridToPos;
private _adjustSpotterY = [_str, 5, true] call T1AM_Fnc_ParseNumber;

_str = ctrlText (_dialog displayCtrl 47245);
_str = [_str] call T1AM_Fnc_GridToPos;
private _adjustImpactX = [_str, 5, true] call T1AM_Fnc_ParseNumber;

_str = ctrlText (_dialog displayCtrl 47246);
_str = [_str] call T1AM_Fnc_GridToPos;
private _adjustImpactY = [_str, 5, true] call T1AM_Fnc_ParseNumber;

_str = ctrlText (_dialog displayCtrl 47254);
_str = [_str] call T1AM_Fnc_GridToPos;
private _adjustImpactRefX = [_str, 5, true] call T1AM_Fnc_ParseNumber;

_str = ctrlText (_dialog displayCtrl 47255);
_str = [_str] call T1AM_Fnc_GridToPos;
private _adjustImpactRefY = [_str, 5, true] call T1AM_Fnc_ParseNumber;

private _adjustMode = lbCurSel (_dialog displayCtrl 47237);

private _isGPS = false;
if (_warheadType in T1AM_GPSGuidedTypes or {_warheadType in T1AM_GPSLaserTypes} or {_warheadType in T1AM_GPSSeekerTypes}) then {
	_isGPS = true;
	_adjustMode = 0;
};

if (_GPSX == -9999999) exitWith {
	T1AM_LastGPSX = 0;
	if (!isNull _dialog) then {
		(_dialog displayCtrl 47222) ctrlSetText (str T1AM_LastGPSX);
	};
	private _str = "INVALID INPUT:\nGPS X COORDINATE\n\nUSE NUMBERS ONLY. MAX 5 NUMBERS ALLOWED";
	[0, _str, 5] spawn T1AM_Fnc_ShowMessage;
};

if (_GPSY == -9999999) exitWith {
	T1AM_LastGPSY = 0;
	if (!isNull _dialog) then {
		(_dialog displayCtrl 47223) ctrlSetText (str T1AM_LastGPSY);
	};
	private _str = "INVALID INPUT:\nGPS Y COORDINATE\n\nUSE NUMBERS ONLY. MAX 5 NUMBERS ALLOWED";
	[0, _str, 5] spawn T1AM_Fnc_ShowMessage;
};

if (_GPSZ == -9999999) exitWith {
	T1AM_LastGPSZ_AGL = 0;
	if (!isNull _dialog) then {
		(_dialog displayCtrl 47221) ctrlSetText (str T1AM_LastGPSZ_AGL);
	};
	private _str = "INVALID INPUT:\nGPS Z COORDINATE\n\nUSE NUMBERS ONLY";
	[0, _str, 5] spawn T1AM_Fnc_ShowMessage;
};

if (_adjustMode == 1 and _adjustX == -9999999) exitWith {
	T1AM_LastAdjustX = 0;
	if (!isNull _dialog) then {
		(_dialog displayCtrl 47204) ctrlSetText (str T1AM_LastAdjustX);
	};
	private _str = "INVALID INPUT:\nADJUST LEFT/RIGHT\n\nUSE NUMBERS ONLY";
	[0, _str, 5] spawn T1AM_Fnc_ShowMessage;
};

if (_adjustMode == 1 and _adjustY == -9999999) exitWith {
	T1AM_LastAdjustY = 0;
	if (!isNull _dialog) then {
		(_dialog displayCtrl 47205) ctrlSetText (str T1AM_LastAdjustY);
	};
	private _str = "INVALID INPUT:\nADJUST UP/DOWN\n\nUSE NUMBERS ONLY";
	[0, _str, 5] spawn T1AM_Fnc_ShowMessage;
};

if (_adjustMode == 1 and _adjustX == 0 and _adjustY == 0) exitWith {
	private _str = "INVALID INPUT:\nADJUST UP/DOWN AND LEFT/RIGHT\n\nCANNOT BOTH BE ZERO";
	[0, _str, 5] spawn T1AM_Fnc_ShowMessage;
};

if (_adjustMode == 1 and _adjustSpotterX == -9999999) exitWith {
	T1AM_LastAdjustSpotterX = 0;
	if (!isNull _dialog) then {
		(_dialog displayCtrl 47222) ctrlSetText (str T1AM_LastAdjustSpotterX);
	};
	private _str = "INVALID INPUT:\nSPOTTER X COORDINATE\n\nUSE NUMBERS ONLY. MAX 5 NUMBERS ALLOWED";
	[0, _str, 5] spawn T1AM_Fnc_ShowMessage;
};

if (_adjustMode == 1 and _adjustSpotterY == -9999999) exitWith {
	T1AM_LastAdjustSpotterY = 0;
	if (!isNull _dialog) then {
		(_dialog displayCtrl 47223) ctrlSetText (str T1AM_LastAdjustSpotterY);
	};
	private _str = "INVALID INPUT:\nSPOTTER Y COORDINATE\n\nUSE NUMBERS ONLY. MAX 5 NUMBERS ALLOWED";
	[0, _str, 5] spawn T1AM_Fnc_ShowMessage;
};

if (_adjustMode == 1 and _adjustSpotterX == 0 and _adjustSpotterY == 0) exitWith {
	private _str = "INVALID INPUT:\nSPOTTER COORDINATES\n\nCANNOT BOTH BE ZERO";
	[0, _str, 5] spawn T1AM_Fnc_ShowMessage;
};

if (_adjustMode == 2 and _adjustImpactX == -9999999) exitWith {
	T1AM_LastAdjustImpactX = 0;
	if (!isNull _dialog) then {
		(_dialog displayCtrl 47223) ctrlSetText (str T1AM_LastAdjustImpactX);
	};
	private _str = "INVALID INPUT:\nIMPACT X COORDINATE\n\nUSE NUMBERS ONLY. MAX 5 NUMBERS ALLOWED";
	[0, _str, 5] spawn T1AM_Fnc_ShowMessage;
};

if (_adjustMode == 2 and _adjustImpactY == -9999999) exitWith {
	T1AM_LastAdjustImpactY = 0;
	if (!isNull _dialog) then {
		(_dialog displayCtrl 47223) ctrlSetText (str T1AM_LastAdjustImpactY);
	};
	private _str = "INVALID INPUT:\nIMPACT Y COORDINATE\n\nUSE NUMBERS ONLY. MAX 5 NUMBERS ALLOWED";
	[0, _str, 5] spawn T1AM_Fnc_ShowMessage;
};

if (_adjustMode == 2 and _adjustImpactX == 0 and _adjustImpactY == 0) exitWith {
	private _str = "INVALID INPUT:\nIMPACT COORDINATES\n\nCANNOT BOTH BE ZERO";
	[0, _str, 5] spawn T1AM_Fnc_ShowMessage;
};

if (_adjustMode == 2 and _adjustImpactRefX == -9999999) exitWith {
	T1AM_LastAdjustImpactRefX = 0;
	if (!isNull _dialog) then {
		(_dialog displayCtrl 47223) ctrlSetText (str T1AM_LastAdjustImpactRefX);
	};
	private _str = "INVALID INPUT:\nTARGET X COORDINATE\n\nUSE NUMBERS ONLY. MAX 5 NUMBERS ALLOWED";
	[0, _str, 5] spawn T1AM_Fnc_ShowMessage;
};

if (_adjustMode == 2 and _adjustImpactRefY == -9999999) exitWith {
	T1AM_LastAdjustImpactRefY = 0;
	if (!isNull _dialog) then {
		(_dialog displayCtrl 47223) ctrlSetText (str T1AM_LastAdjustImpactRefY);
	};
	private _str = "INVALID INPUT:\nTARGET Y COORDINATE\n\nUSE NUMBERS ONLY. MAX 5 NUMBERS ALLOWED";
	[0, _str, 5] spawn T1AM_Fnc_ShowMessage;
};

if (_adjustMode == 2 and _adjustImpactRefX == 0 and _adjustImpactRefY == 0) exitWith {
	private _str = "INVALID INPUT:\nTARGET COORDINATES\n\nCANNOT BOTH BE ZERO";
	[0, _str, 5] spawn T1AM_Fnc_ShowMessage;
};

if (_sizeX < 1) exitWith {
	T1AM_LastSheafX = 100;
	if (!isNull _dialog) then {
		(_dialog displayCtrl 47213) ctrlSetText (str T1AM_LastSheafX);
	};
	private _str = "INVALID INPUT:\nSHEAF SIZE X\n\nUSE NUMBERS ONLY. MUST BE 1 OR HIGHER";
	[0, _str, 5] spawn T1AM_Fnc_ShowMessage;
};

if (_sizeY < 1) exitWith {
	T1AM_LastSheafY = 100;
	if (!isNull _dialog) then {
		(_dialog displayCtrl 47214) ctrlSetText (str T1AM_LastSheafY);
	};
	private _str = "INVALID INPUT:\nSHEAF SIZE Y\n\nUSE NUMBERS ONLY. MUST BE 1 OR HIGHER";
	[0, _str, 5] spawn T1AM_Fnc_ShowMessage;
};

if (_rounds < 1) exitWith {
	T1AM_LastRounds = 1;
	if (!isNull _dialog) then {
		(_dialog displayCtrl 47207) ctrlSetText (str T1AM_LastRounds);
	};
	private _str = "INVALID INPUT:\nNUMBER OF ROUNDS\n\nUSE NUMBERS ONLY. MUST BE 1 OR HIGHER";
	[0, _str, 5] spawn T1AM_Fnc_ShowMessage;
};

if (_sheafDir < 0 or _sheafDir > 360) exitWith {
	T1AM_LastSheafDir = 360;
	if (!isNull _dialog) then {
		(_dialog displayCtrl 47224) ctrlSetText (str T1AM_LastSheafDir);
	};
	private _str = "INVALID INPUT:\nSHEAF DIR\n\nUSE NUMBERS ONLY. MUST BE BETWEEN 1 AND 360";
	[0, _str, 5] spawn T1AM_Fnc_ShowMessage;
};

if (_sheafDist < 1 or _sheafDist > 1000) exitWith {
	T1AM_LastSheafDist = 100;
	if (!isNull _dialog) then {
		(_dialog displayCtrl 47225) ctrlSetText (str T1AM_LastSheafDist);
	};
	private _str = "INVALID INPUT:\nSHEAF DIST\n\nUSE NUMBERS ONLY. MUST BE BETWEEN 1 AND 1000";
	[0, _str, 5] spawn T1AM_Fnc_ShowMessage;
};

// getGPS pos.
private _posGPS = [];
if (_isGPS) then {
	_posGPS = T1AM_ControlledAssetLocal getVariable ["T1AM_exactPos", [0,0,0]];
};
if (_posGPS isEqualTo [0,0,0]) exitWith {
	private _str = "INVALID INPUT:\nGPS COORDINATES\n\nX AND Y CANNOT BOTH BE ZERO";
	[0, _str, 5] spawn T1AM_Fnc_ShowMessage;
};


// End of exitWiths.


// If the player has requested an adjust, change the pos vars.
if (_adjustMode == 1 or _adjustMode == 2) then {
	[_adjustX, _adjustY, _adjustMode, _adjustSpotterX, _adjustSpotterY, _adjustImpactX, _adjustImpactY, _adjustImpactRefX, _adjustImpactRefY] call T1AM_Fnc_Adjust;
};


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

if (_isGPS) then {
	_distance = _pos2 vectorDistance _posGPS;
} else {
	_distance = _pos vectorDistance _pos2;
};


if (!(_warheadType in T1AM_AirburstRounds)) then {
	_fuse = "IMPACT";
	_airburstHeight = "";
};


private _plotNr = 1;
if (_missionType == "PLOT") then {
	{
		if ((_x select 0) == T1AM_ControlledAssetLocal and {_x select 5 == "PLOT"}) then {
			_plotNr = _plotNr + 1;
		};
		
	} forEach T1AM_AllMissions;
};


if (_missionType == "SPOT") then {_rounds = 1};
private _sheafSize = [_sizeX,_sizeY];
T1AM_ControlledAssetLocal setVariable ["T1AM_endMission", false, true];
private _sender = player;
private _timeStamp = [(date select 3),(date select 4)];
private _posDisplay = [T1AM_Xdisplay, T1AM_Ydisplay, T1AM_Elevation];


T1AM_FireMissionCurrent = [T1AM_ControlledAssetLocal,_pos,_warheadType,_rounds,_distance,_missionType,_angle,_sender,_timeStamp,_prePlotted,_sheaf,_fuse,_sheafSize,_posDisplay,_airburstHeight,_plotNr,_GPSZ,_posGPS,_sheafDir,_sheafDist];

T1AM_FireMissionCurrent call T1AM_Fnc_ProcessFireMission;

T1AM_PrePlotted = false;


// Only allow the player to open the arty menu after at least 5 seconds have expired.
// It's a workaround for ammo selection resetting after transmitting, caused by the arty unit getting new mags.
// Letting the player see the arty menu before that might reset the ammo/airburst selection in the GUI.
[5, [], 1] spawn T1AM_Fnc_LoadingScreen;