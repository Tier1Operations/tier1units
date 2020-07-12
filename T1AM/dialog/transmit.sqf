// Called from the Transmit button

if (T1AM_ControlledAssetLocal in T1AM_AssetsBusy) exitWith {(leader T1AM_ControlledAssetLocal) sideChat "Negative, processing other orders."};

private _prePlotted = T1AM_PrePlotted;

//DIAG_LOG format["TRANSMIT - _prePlotted: %1", _prePlotted];


// Rounds to fire
private _rounds = [ctrlText 207, 0] call T1AM_Fnc_ParseNumber;
if (_rounds == -9999999) exitWith {hint "Error - Invalid input:\nNumber of rounds."};
_rounds = (round _rounds) max 1;


// GPS elevation
private _GPSZAdjust = [ctrlText 221, 0] call T1AM_Fnc_ParseNumber;
if (_GPSZAdjust == -9999999) exitWith {hint "Error - Invalid input:\nGPS Z coordinate."};
_GPSZAdjust = round _GPSZAdjust;


// Sheaf size X
private _sizeX = [ctrlText 213, 0] call T1AM_Fnc_ParseNumber;
if (_sizeX == -9999999) exitWith {hint "Error - Invalid input:\nSheaf size X."};
_sizeX = (round _sizeX) max 1;


// Sheaf size Y
private _sizeY = [ctrlText 214, 0] call T1AM_Fnc_ParseNumber;
if (_sizeY == -9999999) exitWith {hint "Error - Invalid input:\nSheaf size Y."};
_sizeY = (round _sizeY) max 0;


// Adjust X
private _nr = [ctrlText 204, 0] call T1AM_Fnc_ParseNumber;
if (_nr == -9999999) exitWith {hint "Error - Invalid input:\nAdjust X."};


// Adjust Y
_nr = [ctrlText 205, 0] call T1AM_Fnc_ParseNumber;
if (_nr == -9999999) exitWith {hint "Error - Invalid input:\nAdjust Y."};


// Warhead type
private _warheadType = lbData [206, lbCurSel 206];
T1AM_LastWarhead = _warheadType;


// getGPS pos.
private _posGPS = [];
if ((_warheadType in T1AM_GPSGuidedTypes) or {_warheadType in T1AM_GPSLaserTypes} or {_warheadType in T1AM_GPSSeekerTypes}) then {
	_posGPS = T1AM_ControlledAssetLocal getVariable ["T1AM_exactPos", [0,0,0]];
};
if (_posGPS isEqualTo [0,0,0]) exitWith {hint "Error - Invalid input:\nGPS coordinates."};


// End of exitWiths.


private _sheafSize = [_sizeX,_sizeY];

T1AM_ControlledAssetLocal setVariable ["T1AM_endMission", false, true];


// If the player has requested an adjust, change the pos vars.
call T1AM_Fnc_Adjust;


// Sheaf
private _sheaf = lbData [211, lbCurSel 211];


// Sheaf Line Dir
private _sheafLineDir = [ctrlText 224, 0] call T1AM_Fnc_ParseNumber;
if (_sheafLineDir == -9999999) exitWith {hint "Error - Invalid input:\nSheaf line DIR."};
_sheafLineDir = ((round _sheafLineDir) max 0) min 360;


// Sheaf Line Dist
private _sheafLineDist = [ctrlText 225, 0] call T1AM_Fnc_ParseNumber;
if (_sheafLineDist == -9999999) exitWith {hint "Error - Invalid input:\nSheaf line DIST."};
_sheafLineDist = ((round _sheafLineDist) max 1) min 1000;


// Mission type
private _missionType = lbData [208, lbCurSel 208];
if (_missionType == "Spot") then {_rounds = 1};
T1AM_MissionType = lbData [208, lbCurSel 208];


// Low/high angle
T1AM_Angle = lbData [209, lbCurSel 209];
private _angle = T1AM_Angle;


// Fuse
private _fuse = lbData [212, lbCurSel 212];


// Airburst height
private _airburstHeight = lbData [215, lbCurSel 215];


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


T1AM_NewFireMission = [T1AM_ControlledAssetLocal,_pos,_warheadType,_rounds,_distance,_missionType,_angle,_sender,_timeStamp,_prePlotted,_sheaf,_fuse,_sheafSize,_posDisplay,_airburstHeight,_plotNr,_GPSZAdjust,_posGPS,_sheafLineDir,_sheafLineDist];

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

player sideChat format ["Requesting %1 at grid %2,%3",_missionType,_xText,_yText];


T1AM_PrePlotted = false;
T1AM_LastAdjustX = 0;
T1AM_LastAdjustY = 0;
[] spawn {
	sleep 0.1;
	closeDialog 0;
	hint "";
};