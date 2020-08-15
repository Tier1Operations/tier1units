// Process more stuff before sending it to the server.

#include "\T1AM\Defines.hpp"

if (T1AM_Debug_Mode) then {systemChat "Process Fire Mission"};

params["_asset","_pos","_warheadType","_rounds","_distance","_missionType","_angle","_sender","_timeStamp","_prePlotted","_sheaf","_fuse","_sheafSize","_posDisplay","_airburstHeight","_plotNr","_GPSZAdjust","_posGPS","_sheafDir","_sheafDist","_TRPX","_TRPY","_remarks"];

private _fireMission = _this;

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


private _message = format ["%1 this is %2. %3 x %4 firing %5, %6 rounds, %7 sheaf, %8 %9 fuze, over.",_playerCallsign,_assetCallsign,(count _tubes),_displayName,_ammoType,_rounds,_sheaf,_fuse];
if (_missionType == "SPOT") then {_message = format ["%1 this is %2. Plot, %3 x %4 firing %5, %6 round, %7 %8 fuze, over.",_playerCallsign,_assetCallsign,(count _tubes),_displayName,_ammoType,_rounds,_fuse]};

private _timeBetweenRounds = _profile select 0;
private _minimumRange = _profile select 1;
private _maximumRange = _profile select 2;

private _sleepTime = 6 + (random 5);
if (T1AM_Debug_Mode) then {_sleepTime = 0};

if (_distance < _minimumRange) exitWith {
	[_asset,_sleepTime] spawn {
		params ["_asset","_sleepTime"];
		sleep _sleepTime;
		[_asset,"Negative, under minimum range.","NEGATIVE"] call T1AM_Fnc_SendComms;
		T1AM_AssetsBusy = T1AM_AssetsBusy - [_asset];
		publicVariable "T1AM_AssetsBusy";
	};
};
if (_distance > _maximumRange) exitWith {
	[_asset,_sleepTime] spawn {
		params ["_asset","_sleepTime"];
		sleep _sleepTime;
		[_asset,"Negative, out of range.","NEGATIVE"] call T1AM_Fnc_SendComms;
		T1AM_AssetsBusy = T1AM_AssetsBusy - [_asset];
		publicVariable "T1AM_AssetsBusy";
	};
};

if (_missionType != "PLOT") then {
	[_asset, _message] spawn {
		params ["_asset","_message"];
		sleep (3 + random 3);
		[_asset,_message,"MTO"] call T1AM_Fnc_SendComms;
	};
};

// Perform plotting.
if (_missionType == "PLOT") exitWith {
	[_asset,_fireMission,_plotNr,_TRPX,_TRPY] spawn {
		params ["_asset","_fireMission","_plotNr","_TRPX","_TRPY"];
		
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
		[_asset, format["Fire mission registered: TRP-%1", _plotNr], "FIREMISSIONREADY"] call T1AM_Fnc_SendComms;
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