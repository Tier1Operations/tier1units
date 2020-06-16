// Called from the Transmit button

if (dtaSelectedAsset in dtaAssetsBusy) exitWith {(leader dtaSelectedAsset) sideChat "Negative, processing other orders."};


private _prePlotted = dtaPrePlotted;

//DIAG_LOG format["TRANSMIT - _prePlotted: %1", _prePlotted];

private _iccCode = 200;


// Rounds to fire
private _rounds = [ctrlText (_iccCode + 7)] call dta_fnc_ParseNumber;
if (_rounds == -9999999) exitWith {hint "Error - Invalid input:\nNumber of rounds."};
_rounds = (round _rounds) max 1;


// GPS elevation
private _GPSZAdjust = [ctrlText (_iccCode + 21)] call dta_fnc_ParseNumber;
if (_GPSZAdjust == -9999999) exitWith {hint "Error - Invalid input:\nGPS Z coordinate."};
_GPSZAdjust = round _GPSZAdjust;


// Sheaf size X
private _sizeX = [ctrlText (_iccCode + 13)] call dta_fnc_ParseNumber;
if (_sizeX == -9999999) exitWith {hint "Error - Invalid input:\nSheaf size X."};
_sizeX = (round _sizeX) max 1;


// Sheaf size Y
private _sizeY = [ctrlText (_iccCode + 14)] call dta_fnc_ParseNumber;
if (_sizeY == -9999999) exitWith {hint "Error - Invalid input:\nSheaf size Y."};
_sizeY = (round _sizeY) max 0;


// Adjust X
private _nr = [ctrlText (_iccCode + 4)] call dta_fnc_ParseNumber;
if (_nr == -9999999) exitWith {hint "Error - Invalid input:\nAdjust X."};


// Adjust Y
_nr = [ctrlText (_iccCode + 5)] call dta_fnc_ParseNumber;
if (_nr == -9999999) exitWith {hint "Error - Invalid input:\nAdjust Y."};


// Warhead type
private _warheadType = lbData [(_iccCode + 6), lbCurSel (_iccCode + 6)];
dtaLastWarhead = _warheadType;


// getGPS pos.
private _posGPS = [];
if ((_warheadType in dtaGPSGuidedTypes) or {_warheadType in dtaGPSLaserTypes} or {_warheadType in dtaGPSSeekerTypes}) then {
	_posGPS = dtaSelectedAsset getVariable ["DTA_exactPos", [0,0,0]];
};
if (_posGPS isEqualTo [0,0,0]) exitWith {hint "Error - Invalid input:\nGPS coordinates."};


// End of exitWiths.


private _sheafSize = [_sizeX,_sizeY];

dtaSelectedAsset setVariable ["DTA_endMission", false, true];


// If the player has requested an adjust, change the pos vars.
call dta_fnc_Adjust;


// Sheaf
private _sheaf = "";
_sheaf = lbData [(_iccCode + 11), lbCurSel (_iccCode + 11)];


// Sheaf Line Dir
private _sheafLineDir = [ctrlText (_iccCode + 24)] call dta_fnc_ParseNumber;
if (_sheafLineDir == -9999999) exitWith {hint "Error - Invalid input:\nSheaf line DIR."};
_sheafLineDir = ((round _sheafLineDir) max 0) min 360;


// Sheaf Line Dist
private _sheafLineDist = [ctrlText (_iccCode + 25)] call dta_fnc_ParseNumber;
if (_sheafLineDist == -9999999) exitWith {hint "Error - Invalid input:\nSheaf line DIST."};
_sheafLineDist = ((round _sheafLineDist) max 1) min 1000;


// Mission type
private _missionType = lbData [(_iccCode + 8), lbCurSel (_iccCode + 8)];
if (_missionType == "Spot") then {_rounds = 1};
dtaMissionType = lbData [(_iccCode + 8), lbCurSel (_iccCode + 8)];


// Low/high angle
private _angle = "";
dtaAngle = lbData [(_iccCode + 9), lbCurSel (_iccCode + 9)];
_angle = dtaAngle;


// Fuse
private _fuse = "";
_fuse = lbData [(_iccCode + 12), lbCurSel (_iccCode + 12)];


// Airburst height
private _airburstHeight = "";
_airburstHeight = lbData [(_iccCode + 15), lbCurSel (_iccCode + 15)];


private _pos = [];
if (_prePlotted) then {
	dtaX = dtaLastPos select 0;
	dtaY = dtaLastPos select 1;
	dtaElevation = dtaLastPos select 2;
	_pos = dtaLastPos;
	
	//DIAG_LOG format["TRANSMIT - PREPLOTTED - _pos: %1", _pos];
	
} else {
	
	_pos = [dtaX, dtaY, dtaElevation];
	
	//DIAG_LOG format["TRANSMIT - NOT PLOTTED - _pos: %1", _pos];
};


// Distance
private _pos2 = getPosASL (vehicle (leader dtaSelectedAsset));
private _distance = [];

if ((_warheadType in dtaGPSGuidedTypes) or {_warheadType in dtaGPSLaserTypes} or {_warheadType in dtaGPSSeekerTypes}) then {
	_distance = _pos2 vectorDistance _posGPS;
} else {
	_distance = _pos vectorDistance _pos2;
};

if (dtaMissionType == "SPOT") then {_rounds = 1};
private _sender = player;
private _missionTime = [];
private _timeStamp = [(date select 3),(date select 4)];

if (!(_warheadType in dtaAirburstRounds)) then {
	_fuse = "IMPACT";
	_airburstHeight = "";
};

private _posDisplay = [dtaXdisplay, dtaYdisplay, dtaElevation];


private _plotNr = 1;
if (dtaMissionType == "PLOT") then {
	{
		if ((_x select 0) == dtaSelectedAsset and {_x select 5 == "PLOT"}) then {
			_plotNr = _plotNr + 1;
		};
		
	} forEach dtaAllMissions;
};


dtaNewFireMission = [dtaSelectedAsset,_pos,_warheadType,_rounds,_distance,_missionType,_angle,_sender,_timeStamp,_prePlotted,_sheaf,_fuse,_sheafSize,_posDisplay,_airburstHeight,_plotNr,_GPSZAdjust,_posGPS,_sheafLineDir,_sheafLineDist];

dtaFireMissionCurrent = dtaNewFireMission;

dtaNewFireMission execVM "DrongosArtillery\Control\ProcessFireMission.sqf";

_missionType = "FIRE FOR EFFECT";
if (dtaMissionType == "SPOT") then {_missionType = "SPOTTING ROUND"; _rounds = 1};
if (dtaMissionType == "PLOT") then {_missionType = "FIRE MISSION PLOT"};

private _posMap = _posDisplay;
if ((_warheadType in dtaGPSGuidedTypes) or {_warheadType in dtaGPSLaserTypes} or {_warheadType in dtaGPSSeekerTypes}) then {
	_posMap = _posGPS;
};
_posMap = [[_posMap select 0, _posMap select 1]] call dta_fnc_PosToMapGrid;
private _xMap = parseNumber (_posMap select 0);
private _yMap = parseNumber (_posMap select 1);

private _xText = [_xMap] call dta_fnc_FormatCoordinates;
private _yText = [_yMap] call dta_fnc_FormatCoordinates;

player sideChat format ["Requesting %1 at grid %2,%3",_missionType,_xText,_yText];


dtaPrePlotted = false;
dtaLastAdjustX = 0;
dtaLastAdjustY = 0;
sleep 0.1;
closeDialog 0;
hint "";