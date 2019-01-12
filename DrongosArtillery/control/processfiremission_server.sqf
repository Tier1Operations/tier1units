// Process some stuff on the server before deciding if the fire mission should continue.
// Then tell each tube to start the fire mission.

private ["_tubes","_rounds","_profile","_pos","_warheadType","_missionType","_sheafSize","_fuse","_assetType",
"_sheaf","_airburstHeight","_flightTime","_asset","_tubeType","_angle","_selectedTube","_prePlotted","_sender",
"_posDisplay","_emptyTubes","_highestAmount","_tube","_tempAmount","_announcementUnit","_countLoaded","_countEmpty",
"_text1","_text2","_GPSZAdjust","_tubesTemp","_isAnnouncementUnit","_nr","_posGPS","_sheafLineDir","_sheafLineDist"];


_tubes = _this select 0;
_rounds = _this select 1;
_profile = _this select 2;
_pos = _this select 3;
_warheadType = _this select 4;
_missionType = _this select 5;
_sheafSize = _this select 6;
_fuse = _this select 7;
_assetType = _this select 8;
_sheaf = _this select 9;
_airburstHeight = _this select 10;
_flightTime = _this select 11;
_asset = _this select 12;
_tubeType = _this select 13;
_angle = _this select 14;
_selectedTube = _this select 15;
_prePlotted = _this select 16;
_sender = _this select 17;
_posDisplay = _this select 18;
_GPSZAdjust = _this select 19;
_posGPS = _this select 20;
_sheafLineDir = _this select 21;
_sheafLineDist = _this select 22;


// Load magazine.
if ((_missionType == "SPOT") or (_missionType == "FFE")) then {
	{
		_x setVariable ["DTA_outOfAmmo", false];
		[_x,_warheadType] call dta_fnc_LoadMagazine;
	} forEach _tubes;
};


_announcementUnit = objNull;
_emptyTubes = [];
_highestAmount = -999;
_tubesTemp = _tubes;

//diag_log format["PFM SERVER -- TUBES BEFORE LOOP: %1", _tubes];

{
	_tube = _x;
	private _noGunner = false;
	
	// Check if it has a gunner.
	if (isNull (gunner _tube)) then {
		_noGunner = true;
		//diag_log format["PFM SERVER LOOP -- NO GUNNER - CHECK1: %1 - CHECK2: %2", gunner _tube, isNull (gunner _tube)];
	};
	
	// If tube doesn't have the requested ammo or has no gunner, then we won't fire it.
	if (_tube getVariable ["DTA_outOfAmmo", false] or _noGunner) then {
		
		// Does not have ammo or has no gunner.
		// Remove it from the list of tubes that will participate in this mission.
		_tubes = _tubes - [_tube];
		_emptyTubes = _emptyTubes + [_tube];
		//diag_log format["PFM SERVER LOOP -- NO AMMO OR NO GUNNER - CHECK1: %1 - CHECK2: %2", _tube getVariable ["DTA_outOfAmmo", false], _noGunner];
		
	} else {
		
		// Has ammo.
		// Mark tube as not ready to fire, so that other tubes will wait until it is ready.
		_tube setVariable ["DTA_readyToFire", false];
		_tube setVariable ["DTA_outOfAmmo", false];
		_tube setVariable ["DTA_impossibleShot", false];
		
		// Find out if this unit has the most ammo of the requested type.
		// If so, make this unit do all the annoucements, ie. "shot", "rounds complete", etc.
		// This unit will also be in charge of monitoring and ending the fire mission properly.
		_tempAmount = 0;
		
		{
			if (_x select 0 == _warheadType) then {_tempAmount = _tempAmount + (_x select 1)};
		} forEach (magazinesAmmo _x);
		
		if (_tempAmount > _highestAmount) then {
			_highestAmount = _tempAmount;
			_announcementUnit = _tube;
		};
	};
	
} forEach _tubesTemp;

//diag_log format["PFM SERVER -- TUBES AFTER LOOP: %1", _tubes];

_countLoaded = count _tubes;


// If the tubes list is empty at this point, it means no unit has the requested ammmo, so abort.
if (_countLoaded == 0) exitWith {
	sleep 2;
	dtaAssetsBusy = dtaAssetsBusy - [_asset];
	publicVariable "dtaAssetsBusy";
	[_asset,"Unable to comply - requested ammo not available.","beep"] call dta_fnc_SendComms;
	
	//diag_log format["PFM SERVER ABORT - NO VIABLE TUBES FOUND -- _countLoaded: %1", _countLoaded];
};


// Reset vars.
_asset setVariable ["DTA_CheckFire", false];
_nr = _asset getVariable ["DTA_missionNr", 0];
_asset setVariable ["DTA_missionNr", _nr + 1];
_asset setVariable ["DTA_amountAborted", 0];
// Mark first sector as already fired at because the announcement unit will fire at it.
_asset setVariable ["dta_sheafSectorsLine", [true,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false]];



// If there's at least 1 tube that is empty, show the players a message to indicate that.
_countEmpty = count _emptyTubes;
if (_countEmpty > 0) then {
	_text1 = "";
	_text2 = "";
	
	switch true do {
		case (_countLoaded == 1) : {_text1 = format["%1 unit will fire - ", _countLoaded]};
		case (_countLoaded > 1) : {_text1 = format["%1 units will fire - ", _countLoaded]};
	};
	
	switch true do {
		case (_countEmpty == 1) : {_text2 = format["%1 unit is empty or inoperable.", _countEmpty]};
		case (_countEmpty > 1) : {_text2 = format["%1 units are empty or inoperable.", _countEmpty]};
	};
	
	[_asset, (_text1 + _text2), "beep"] call dta_fnc_SendComms;
	sleep 4;
};

//diag_log format["PFM SERVER -- _countLoaded: %1", _countLoaded];
//diag_log format["PFM SERVER -- _countEmpty: %1", _countEmpty];
//diag_log format["PFM SERVER -- _announcementUnit: %1", _announcementUnit];

// Give orders to tubes that will participate in this mission.
{
	_tube = _x;
	
	// Reset var.
	_tube setVariable ["DTA_ETA", 9999];
	_tube setVariable ["DTA_concludingMission", false];
	
	if (_tube == _announcementUnit) then {
		_isAnnouncementUnit = true;
	} else {
		_isAnnouncementUnit = false;
	};
	
	//diag_log format["PFM SERVER -- UNIT: %1 - _isAnnouncementUnit: %2", _tube, _isAnnouncementUnit];
	
	[_tubes,_rounds,_profile,_pos,_warheadType,_missionType,_sheafSize,_fuse,_assetType,_sheaf,_airburstHeight,_flightTime,_asset,_tubeType,_angle,_selectedTube,_prePlotted,_sender,_posDisplay,_tube,_isAnnouncementUnit,_GPSZAdjust,_posGPS,_sheafLineDir,_sheafLineDist] execVM "DrongosArtillery\Control\Tube.sqf";
	
} forEach _tubes;