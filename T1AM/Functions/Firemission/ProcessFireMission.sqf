// Process more stuff before sending it to the server.

if (T1AM_Debug_Mode) then {systemChat "Process Fire Mission"};

params["_asset","_pos","_warheadType","_rounds","_distance","_missionType","_angle","_sender","_timeStamp","_prePlotted","_sheaf","_fuse","_sheafSize","_posDisplay","_airburstHeight","_plotNr","_GPSZAdjust","_posGPS","_sheafDir","_sheafDist","_TRPX","_TRPY","_remarks"];

private _fireMission = _this;
private _spotter = _sender;

T1AM_AssetsBusy = T1AM_AssetsBusy + [_asset];
publicVariable "T1AM_AssetsBusy";
private _tubes = [_asset] call T1AM_Fnc_GroupVehicles;

private _vehicle = T1AM_SelectedTube;
private _assetType = [_vehicle] call T1AM_Fnc_AssetType;
if (_assetType == "") exitWith {
	T1AM_AssetsBusy = T1AM_AssetsBusy - [_asset];
	publicVariable "T1AM_AssetsBusy";
	private _str = "ERROR:\nINVALID ASSET TYPE";
	[0, _str, 5] spawn T1AM_Fnc_ShowMessage;
};

private _profile = [];
switch (_assetType) do {
	
	case ("MORTAR") : {_profile = [_warheadType, _distance] call T1AM_Fnc_ProfileMortar};
	
	case ("CANNON") : {
		if (_angle == "LOW") then {
			_profile = [_warheadType, _distance] call T1AM_Fnc_ProfileCannonLA;
		} else {
			_profile = [_warheadType, _distance] call T1AM_Fnc_ProfileCannonHA;
		};
	};
	
	case ("ROCKET") : {
		if (_angle == "LOW") then {
			_profile = [_warheadType, _distance] call T1AM_Fnc_ProfileRocketsLA;
		} else {
			_profile = [_warheadType, _distance] call T1AM_Fnc_ProfileRocketsHA;
		};
	};
	
	case ("MRLTRUCK") : {
		if (_angle == "LOW") then {
			_profile = [_warheadType, _distance] call T1AM_Fnc_ProfileRocketsLA;
		} else {
			_profile = [_warheadType, _distance] call T1AM_Fnc_ProfileRocketsHA;
		};
	};
	
	case ("MK41") : {_profile = [_warheadType, _distance] call T1AM_Fnc_ProfileMK41};
	
	case ("RHS_BM21") : {_profile = [_warheadType, _distance] call T1AM_Fnc_ProfileRHSBM21};
	
	case ("2035RAF_BM21") : {
		if (_angle == "LOW") then {
			_profile = [_warheadType, _distance] call T1AM_Fnc_Profile2035RAFBM21LA;
		} else {
			_profile = [_warheadType, _distance] call T1AM_Fnc_Profile2035RAFBM21HA;
		};
	};
};

private _tubeType = weapons _vehicle select 0;
private _ammoType = getText (configFile >> "CfgMagazines" >> _warHeadType >> "displayName");
private _playerCallsign = [group _sender] call T1AM_Fnc_TrimGroupName;
private _assetCallsign = [_asset] call T1AM_Fnc_TrimGroupName;
private _displayName = getText (configFile >> "CfgVehicles" >> (typeOf _vehicle) >> "displayName");

private _timeBetweenRounds = _profile select 0;
private _minimumRange = _profile select 1;
private _maximumRange = _profile select 2;

private _sleepTime = 6 + (random 5);
if (T1AM_Debug_Mode) then {_sleepTime = 0};

if (_distance < _minimumRange) exitWith {
	[_asset,_sleepTime,_spotter] spawn {
		params ["_asset","_sleepTime","_spotter"];
		sleep _sleepTime;
		[_asset,_spotter,"Negative, under minimum range, out.",12] call T1AM_Fnc_SendComms;
		T1AM_AssetsBusy = T1AM_AssetsBusy - [_asset];
		publicVariable "T1AM_AssetsBusy";
	};
};
if (_distance > _maximumRange) exitWith {
	[_asset,_sleepTime,_spotter] spawn {
		params ["_asset","_sleepTime","_spotter"];
		sleep _sleepTime;
		[_asset,_spotter,"Negative, out of range, out.",6] call T1AM_Fnc_SendComms;
		T1AM_AssetsBusy = T1AM_AssetsBusy - [_asset];
		publicVariable "T1AM_AssetsBusy";
	};
};


// Perform plotting.
if (_missionType == "PLOT") exitWith {
	[_asset,_fireMission,_plotNr,_TRPX,_TRPY,_spotter] spawn {
		params ["_asset","_fireMission","_plotNr","_TRPX","_TRPY","_spotter"];
		
		private _pos = [_TRPX,_TRPY,0];
		
		// Check if the target pos is nearby one of the TRPs that belong to this group.
		private _closeToTRP = false;
		private _arrayTRP = _asset getVariable ["T1AM_arrayTRP", nil];
		if (!isNil "_arrayTRP") then {
			{
				if (_pos distance2D _x < 500) exitWith {_closeToTRP = true};
			} forEach _arrayTRP;
		};
		
		// Check if unit has previously fired on a pos nearby.
		private _lastFiringPos = _asset getVariable ["T1AM_lastFiringPos", [-30000,-30000,0]];
		
		private _waitTime = 20 + (random 5);
		if (_closeToTRP or _lastFiringPos distance _pos < 300) then {
			_waitTime = 10 + (random 5);
		};
		
		sleep _waitTime;
		[_asset, _spotter, format["Fire mission registered: TRP-%1. Out.", _plotNr], 2] call T1AM_Fnc_SendComms;
		T1AM_AllMissions = T1AM_AllMissions + [_fireMission];
		publicVariable "T1AM_AllMissions";
		T1AM_AssetsBusy = T1AM_AssetsBusy - [_asset];
		publicVariable "T1AM_AssetsBusy";
		
		private _marker = createMarker [format ["T1AM_MARKER_TRP_%1_%2_%3", _asset, _plotNr, time], _pos];
		_marker setMarkerShape "ICON";
		_marker setMarkerType "mil_destroy";
		_marker setMarkerColor "ColorBlack";
		_marker setMarkerAlpha 0.4;
		_marker setMarkerText ((format["%1", _asset]) + (format["|TRP-%1", _plotNr]));
		
		// If player requested the TRP marker to be further than 650 meters from the aimpoint,
		// then put the actual TRP location on the aimpoint. It's mostly to combat cheating.
		private _displayPos = [T1AM_Xdisplay,T1AM_Ydisplay,0];
		if (_pos distance _displayPos > 650) then {
			_pos = _displayPos;
		};
		
		_arrayTRP = _asset getVariable ["T1AM_arrayTRP", nil];
		if (isNil "_arrayTRP") then {
			_asset setVariable ["T1AM_arrayTRP", [_pos], true];
		} else {
			_arrayTRP pushback _pos;
			_asset setVariable ["T1AM_arrayTRP", _arrayTRP, true];
		};
	};
};


private _audio = -1;
private _message = "";
private _isGPS = _warheadType in T1AM_GPSGuidedTypes or {_warheadType in T1AM_GPSLaserTypes} or {_warheadType in T1AM_GPSSeekerTypes};

if (_missionType == "SPOT") then {
	if (_isGPS) exitWith {
		private _pos2 = [[_posGPS select 0, _posGPS select 1]] call T1AM_Fnc_PosToMapGrid;
		private _xMap = parseNumber (_pos2 select 0);
		private _yMap = parseNumber (_pos2 select 1);
		_xMap = [_xMap] call T1AM_Fnc_FormatCoordinates;
		_yMap = [_yMap] call T1AM_Fnc_FormatCoordinates;
		
		_message = format ["%1 this is %2. GPS grid: [%3-%4-%5]. Adjust fire. %6. %7. %8 fuze, out.",_playerCallsign,_assetCallsign,_xMap,_yMap,_GPSZAdjust,_displayName,_ammoType,_fuse];
		_audio = 15;
	};
	
	switch (T1AM_LastAdjustCheckbox) do {
		case (0) : {
			private _pos2 = [[_pos select 0, _pos select 1]] call T1AM_Fnc_PosToMapGrid;
			private _xMap = parseNumber (_pos2 select 0);
			private _yMap = parseNumber (_pos2 select 1);
			_xMap = [_xMap] call T1AM_Fnc_FormatCoordinates;
			_yMap = [_yMap] call T1AM_Fnc_FormatCoordinates;
			
			_message = format ["%1 this is %2. Adjust fire. %3. %4. %5 fuze. Aimpoint [%6-%7], out.",_playerCallsign,_assetCallsign,_displayName,_ammoType,_fuse,_xMap,_yMap];
			_audio = 19;
		};
		case (1) : {
			private _pos2 = [[T1AM_LastAdjustSpotterX, T1AM_LastAdjustSpotterY]] call T1AM_Fnc_PosToMapGrid;
			private _xMap = parseNumber (_pos2 select 0);
			private _yMap = parseNumber (_pos2 select 1);
			_xMap = [_xMap] call T1AM_Fnc_FormatCoordinates;
			_yMap = [_yMap] call T1AM_Fnc_FormatCoordinates;
			
			private _adjustText = format ["Polar [%1-%2]", _xMap, _yMap];
			if (T1AM_LastAdjustX > 0) then {_adjustText = _adjustText + ", right " + str abs T1AM_LastAdjustX};
			if (T1AM_LastAdjustX < 0) then {_adjustText = _adjustText + ", left " + str abs T1AM_LastAdjustX};
			if (T1AM_LastAdjustY > 0) then {_adjustText = _adjustText + ", add " + str abs T1AM_LastAdjustY};
			if (T1AM_LastAdjustY < 0) then {_adjustText = _adjustText + ", drop " + str abs T1AM_LastAdjustY};
			
			private _pos2 = [[_pos select 0, _pos select 1]] call T1AM_Fnc_PosToMapGrid;
			private _xMap = parseNumber (_pos2 select 0);
			private _yMap = parseNumber (_pos2 select 1);
			_xMap = [_xMap] call T1AM_Fnc_FormatCoordinates;
			_yMap = [_yMap] call T1AM_Fnc_FormatCoordinates;
			
			_message = format ["%1 this is %2. %3. Adjust fire. %4. %5. %6 fuze. Aimpoint [%7-%8], out.",_playerCallsign,_assetCallsign,_adjustText,_displayName,_ammoType,_fuse,_xMap,_yMap];
			_audio = 21;
		};
		case (2) : {
			private _pos2 = [[T1AM_LastAdjustImpactX, T1AM_LastAdjustImpactY]] call T1AM_Fnc_PosToMapGrid;
			private _xMap = parseNumber (_pos2 select 0);
			private _yMap = parseNumber (_pos2 select 1);
			_xMap = [_xMap] call T1AM_Fnc_FormatCoordinates;
			_yMap = [_yMap] call T1AM_Fnc_FormatCoordinates;
			
			private _pos2 = [[T1AM_LastAdjustImpactRefX, T1AM_LastAdjustImpactRefY]] call T1AM_Fnc_PosToMapGrid;
			private _xMap2 = parseNumber (_pos2 select 0);
			private _yMap2 = parseNumber (_pos2 select 1);
			_xMap2 = [_xMap2] call T1AM_Fnc_FormatCoordinates;
			_yMap2 = [_yMap2] call T1AM_Fnc_FormatCoordinates;
			
			_message = format ["%1 this is %2. Impact grid [%3-%4], target [%5-%6]. Adjust fire. %7. %8. %9 fuze, out.",_playerCallsign,_assetCallsign,_xMap,_yMap,_xMap2,_yMap2,_displayName,_ammoType,_fuse];
			_audio = 17;
		};
	};
	
} else {
	
	if (_isGPS) exitWith {
		private _pos2 = [[_posGPS select 0, _posGPS select 1]] call T1AM_Fnc_PosToMapGrid;
		private _xMap = parseNumber (_pos2 select 0);
		private _yMap = parseNumber (_pos2 select 1);
		_xMap = [_xMap] call T1AM_Fnc_FormatCoordinates;
		_yMap = [_yMap] call T1AM_Fnc_FormatCoordinates;
		
		_message = format ["%1 this is %2. GPS grid: [%3-%4-%5]. Fire for effect. %6x %7. %8, %9 rounds. %10 fuze, out.",_playerCallsign,_assetCallsign,_xMap,_yMap,_GPSZAdjust,(count _tubes),_displayName,_ammoType,_rounds,_fuse];
		_audio = 16;
	};
	
	private _sheafText = "";
	switch (_sheaf) do {
		case ("POINT") : {
			_sheafText = "POINT";
		};
		case ("CIRCLE") : {
			_sheafText = format ["CIRCLE: %1", _sheafSize select 0];
		};
		case ("BOX") : {
			_sheafText = format ["BOX: %1-%2-%3", _sheafSize select 0, _sheafSize select 1, _sheafDir];
		};
		case ("LINE") : {
			_sheafText = format ["LINE: %1-%2", _sheafDist, _sheafDir];
		};
	};
	switch (T1AM_LastAdjustCheckbox) do {
		case (0) : {
			private _pos2 = [[_pos select 0, _pos select 1]] call T1AM_Fnc_PosToMapGrid;
			private _xMap = parseNumber (_pos2 select 0);
			private _yMap = parseNumber (_pos2 select 1);
			_xMap = [_xMap] call T1AM_Fnc_FormatCoordinates;
			_yMap = [_yMap] call T1AM_Fnc_FormatCoordinates;
			
			_message = format ["%1 this is %2. Fire for effect. %3x %4. %5, %6 rounds. %7 fuze. %8. Aimpoint [%9-%10], out.",_playerCallsign,_assetCallsign,(count _tubes),_displayName,_ammoType,_rounds,_fuse,_sheafText,_xMap,_yMap];
			_audio = 20;
		};
		case (1) : {
			private _pos2 = [[T1AM_LastAdjustSpotterX, T1AM_LastAdjustSpotterY]] call T1AM_Fnc_PosToMapGrid;
			private _xMap = parseNumber (_pos2 select 0);
			private _yMap = parseNumber (_pos2 select 1);
			_xMap = [_xMap] call T1AM_Fnc_FormatCoordinates;
			_yMap = [_yMap] call T1AM_Fnc_FormatCoordinates;
			
			private _adjustText = format ["Polar [%1-%2]", _xMap, _yMap];
			if (T1AM_LastAdjustX > 0) then {_adjustText = _adjustText + ", right " + str abs T1AM_LastAdjustX};
			if (T1AM_LastAdjustX < 0) then {_adjustText = _adjustText + ", left " + str abs T1AM_LastAdjustX};
			if (T1AM_LastAdjustY > 0) then {_adjustText = _adjustText + ", add " + str abs T1AM_LastAdjustY};
			if (T1AM_LastAdjustY < 0) then {_adjustText = _adjustText + ", drop " + str abs T1AM_LastAdjustY};
			
			private _pos2 = [[_pos select 0, _pos select 1]] call T1AM_Fnc_PosToMapGrid;
			private _xMap = parseNumber (_pos2 select 0);
			private _yMap = parseNumber (_pos2 select 1);
			_xMap = [_xMap] call T1AM_Fnc_FormatCoordinates;
			_yMap = [_yMap] call T1AM_Fnc_FormatCoordinates;
			
			_message = format ["%1 this is %2. %3. Correct Fire For Effect. %4x %5. %6, %7 rounds. %8 fuze. %9. Aimpoint [%10-%11], out.",_playerCallsign,_assetCallsign,_adjustText,(count _tubes),_displayName,_ammoType,_rounds,_fuse,_sheafText,_xMap,_yMap];
			_audio = 22;
		};
		case (2) : {
			private _pos2 = [[T1AM_LastAdjustImpactX, T1AM_LastAdjustImpactY]] call T1AM_Fnc_PosToMapGrid;
			private _xMap = parseNumber (_pos2 select 0);
			private _yMap = parseNumber (_pos2 select 1);
			_xMap = [_xMap] call T1AM_Fnc_FormatCoordinates;
			_yMap = [_yMap] call T1AM_Fnc_FormatCoordinates;
			
			private _pos2 = [[T1AM_LastAdjustImpactRefX, T1AM_LastAdjustImpactRefY]] call T1AM_Fnc_PosToMapGrid;
			private _xMap2 = parseNumber (_pos2 select 0);
			private _yMap2 = parseNumber (_pos2 select 1);
			_xMap2 = [_xMap2] call T1AM_Fnc_FormatCoordinates;
			_yMap2 = [_yMap2] call T1AM_Fnc_FormatCoordinates;
			
			_message = format ["%1 this is %2. Impact grid [%3-%4], target [%5-%6]. Correct fire for effect. %7x %8. %9, %10 rounds. %11 fuze. %12, out.",_playerCallsign,_assetCallsign,_xMap,_yMap,_xMap2,_yMap2,(count _tubes),_displayName,_ammoType,_rounds,_fuse,_sheafText];
			_audio = 18;
		};
	};
};

[_asset, _spotter,_message,_audio] spawn {
	params ["_asset","_spotter","_message","_audio"];
	sleep (3 + random 3);
	[_asset,_spotter,_message,_audio] call T1AM_Fnc_SendComms;
};


// All tubes for FFE missions
_tubes = [_asset] call T1AM_Fnc_GroupVehicles;

// Only select one tube for SPOT missions
if (_missionType == "SPOT") then {_tubes = [T1AM_SelectedTube]};


// Send fire mission to the server.
private _tubeArray = [_tubes,_rounds,_profile,_pos,_warheadType,_missionType,_sheafSize,_fuse,_assetType,_sheaf,_airburstHeight,_asset,_tubeType,_angle,_prePlotted,_sender,_posDisplay,_GPSZAdjust,_posGPS,_sheafDir,_sheafDist];
_tubeArray remoteExec ["T1AM_Fnc_ProcessFireMission_Server", 2]; 

if (_missionType == "FFE") then {
	T1AM_AllMissions = T1AM_AllMissions + [_fireMission];
	publicVariable "T1AM_AllMissions";
};