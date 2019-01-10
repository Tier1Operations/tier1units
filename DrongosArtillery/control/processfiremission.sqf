// Process more stuff before sending it to the server.

private["_fireMission","_asset","_plotNr","_GPSZAdjust","_pos","_arrayTRP","_pos2",
"_warheadType","_rounds","_distance","_missionType","_angle","_sender","_timeStamp",
"_prePlotted","_sheaf","_fuse","_sheafSize","_posDisplay","_airburstHeight","_firstRound",
"_tubes","_tubes","_vehicle","_assetType","_tubeType","_ammoType","_assetCallsign",
"_displayName","_message","_timeBetweenRounds","_minimumRange","_maximumRange",
"_flightTime","_sleepTime","_tubeArray","_posGPS","_sheafLineDir","_sheafLineDist"];

if (dtaDebug) then {systemChat "Process Fire Mission"};

_fireMission = _this;

_asset = _fireMission select 0;
_pos = _fireMission select 1;
_warheadType = _fireMission select 2;
_rounds = _fireMission select 3;
_distance = _fireMission select 4;
_missionType = _fireMission select 5;
_angle = _fireMission select 6;
_sender = _fireMission select 7;
//_timeStamp = _fireMission select 8;
_prePlotted = _fireMission select 9;
_sheaf = _fireMission select 10;
_fuse = _fireMission select 11;
_sheafSize = _fireMission select 12;
_posDisplay = _fireMission select 13;
_airburstHeight = _fireMission select 14;
_plotNr = _fireMission select 15;
_GPSZAdjust = _fireMission select 16;
_posGPS = _fireMission select 17;
_sheafLineDir = _fireMission select 18;
_sheafLineDist = _fireMission select 19;


dtaAssetsBusy = dtaAssetsBusy + [_asset];
publicVariable "dtaAssetsBusy";

_firstRound = true;

_tubes = [];
_tubes = [_asset] call dta_fnc_GroupVehicles;
_type = "";
_tube = objNull;

_vehicle = dtaSelectedTube;
_selectedTube = dtaSelectedTube;
_assetType = _vehicle call dta_fnc_AssetType;
if (_assetType == "INVALID") exitWith {
	[_asset,"Invalid asset type.","Negative"] call dta_fnc_SendComms;
	dtaAssetsBusy = dtaAssetsBusy - [_asset];
	publicVariable "dtaAssetsBusy";
};

_profile = [];
if (_assetType == "Mortar") then {_profile = [_warheadType, _distance] call dta_fnc_ProfileMortar};
if ((_assetType == "Cannon") and {_angle == "Low"}) then {_profile = [_warheadType, _distance] call dta_fnc_ProfileCannonLA};
if ((_assetType == "Cannon") and {_angle == "High"}) then {_profile = [_warheadType, _distance] call dta_fnc_ProfileCannonHA};
if ((_assetType == "Rocket") and {_angle == "Low"}) then {_profile = [_warheadType, _distance] call dta_fnc_ProfileRocketsLA};
if ((_assetType == "Rocket") and {_angle == "High"}) then {_profile = [_warheadType, _distance] call dta_fnc_ProfileRocketsHA};
if (_assetType == "BM21") then {_profile = [_warheadType, _distance] call dta_fnc_ProfileBM21};

_tubeType = weapons _vehicle select 0;
_ammoType = getText (configFile >> "CfgMagazines" >> _warHeadType >> "displayName");
_assetCallsign = [_asset] call dta_fnc_TrimGroupName;
_displayName = getText (configFile >> "CfgVehicles" >> (typeOf _vehicle) >> "displayName");

_message = format ["%1 this is %2. %3 x %4 firing %5, %6 rounds, %7 sheaf, %8 %9 fuse, over.",_sender,_assetCallsign,(count _tubes),_displayName,_ammoType,_rounds,_sheaf,_fuse];
if (_missionType == "SPOT") then {_message = format ["%1 this is %2. %3 x %4 firing %5, %6 round, %7 %8 fuse, over.",_sender,_assetCallsign,(count _tubes),_displayName,_ammoType,_rounds,_fuse]};

if (_firstRound) then {
	[_asset,_message,"MTO"] call dta_fnc_SendComms;
} else {
	if (_missionType == "FFE") then {[_asset,_message,"beep"] call dta_fnc_SendComms};
};

_timeBetweenRounds = _profile select 0;
_minimumRange = _profile select 1;
_maximumRange = _profile select 2;

// Obsolete
_flightTime = 0;

_sleepTime = 6 + (random 5);
if (dtaDebug) then {_sleepTime = 0};

if (_distance < _minimumRange) exitWith {
	sleep _sleepTime;
	[_asset,"Negative, under minimum range.","Negative"] call dta_fnc_SendComms;
	dtaAssetsBusy = dtaAssetsBusy - [_asset];
	publicVariable "dtaAssetsBusy";
};
if (_distance > _maximumRange) exitWith {
	sleep _sleepTime;
	[_asset,"Negative, out of range.","Negative"] call dta_fnc_SendComms;
	dtaAssetsBusy = dtaAssetsBusy - [_asset];
	publicVariable "dtaAssetsBusy";
};

sleep 1;

// PERFORM MISSIONS //

if (_missionType == "PLOT") exitWith {
	sleep 20 + (random 5);
	[_asset, format["Fire mission registered: TRP-%1", _plotNr], "FireMissionReady"] call dta_fnc_SendComms;
	dtaAllMissions = dtaAllMissions + [_fireMission];
	publicVariable "dtaAllMissions";
	dtaAssetsBusy = dtaAssetsBusy - [_asset];
	publicVariable "dtaAssetsBusy";
	
	_pos2 = _posDisplay;
	
	_marker = createMarker [format ["DTA_MARKER_TRP_%1_%2_%3", _asset, _plotNr, time], _pos2];
	_marker setMarkerShape "ICON";
	_marker setMarkerType "mil_destroy";
	_marker setMarkerColor "ColorBlack";
	_marker setMarkerAlpha 0.4;
	_marker setMarkerText ((format["%1", _asset]) + (format["|TRP-%1", _plotNr]));
	
	_arrayTRP = _asset getVariable ["DTA_arrayTRP", nil];
	if (isNil "_arrayTRP") then {
		_asset setVariable ["DTA_arrayTRP", [_pos2], true];
	} else {
		_arrayTRP pushback _pos2;
		_asset setVariable ["DTA_arrayTRP", _arrayTRP, true];
	};
};

// All tubes for FFE missions
_tubes = [_asset] call dta_fnc_GroupVehicles;

// Only select one tube for SPOT missions
if (_missionType == "SPOT") then {_tubes = [dtaSelectedTube]};


// Send fire mission to the server.
_tubeArray = [_tubes,_rounds,_profile,_pos,_warheadType,_missionType,_sheafSize,_fuse,_assetType,_sheaf,_airburstHeight,_flightTime,_asset,_tubeType,_angle,_selectedTube,_prePlotted,_sender,_posDisplay,_GPSZAdjust,_posGPS,_sheafLineDir,_sheafLineDist];
[[_tubeArray,"DrongosArtillery\Control\ProcessFireMission_server.sqf"],"BIS_fnc_execVM",true,false] spawn BIS_fnc_MP;


// This sleep is for the initial processing for the fire mission at the tube level and waiting for the first shot to be fired
if (_missionType == "FFE") then {
	dtaAllMissions = dtaAllMissions + [_fireMission];
	publicVariable "dtaAllMissions";
};