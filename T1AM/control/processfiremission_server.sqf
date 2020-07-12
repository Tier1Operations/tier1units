// Process some stuff on the server before deciding if the fire mission should continue.
// If not local to server, change locality to server.
// Then tell each tube to start the fire mission.

params["_tubes","_rounds","_profile","_pos","_warheadType","_missionType","_sheafSize","_fuse","_assetType","_sheaf","_airburstHeight","_asset","_tubeType","_angle","_prePlotted","_sender","_posDisplay","_GPSZAdjust","_posGPS","_sheafLineDir","_sheafLineDist"];


// Check locality and change it to the server.
private _badTubes = [];
{
	private _tube = _x;
	private _timesWaited = 0;
	_tube setVariable ["T1AM_waitingTime", 0];
	
	if (alive _tube) then {
		if (!local _tube) then {
			//DIAG_LOG format["PFM SERVER -- WRONG LOCALITY OF TUBE: %1", _tube];
			private _group = group _tube;
			if (!isNull _group) then {
				//DIAG_LOG format["PFM SERVER -- WRONG LOCALITY OF TUBE | !isNull _group: %1", !isNull _group];
				private _locked = locked _tube;
				_tube lock 2;
				_group setGroupOwner 2;
				sleep 10;
				_timesWaited = _timesWaited + 1;
				_tube lock _locked;
			};
		};
	};
	
	{
		if (alive _x) then {
			if (!local _x) then {
				//DIAG_LOG format["PFM SERVER -- WRONG LOCALITY OF MEMBER: %1 in %2", _x, _tube];
				private _locked = locked _tube;
				_tube lock 2;
				(group _x) setGroupOwner 2;
				sleep 10;
				_timesWaited = _timesWaited + 1;
				_tube lock _locked;
			};
		};
	} forEach crew _tube;
	
	// Remember the waiting time.
	_tube setVariable ["T1AM_waitingTime", _timesWaited * 10];
} forEach _tubes;

// Check locality again and mark the tube as bad if it couldn't change locality.
{
	
	private _tube = _x;
	if (alive _tube) then {
		if (!local _tube) exitWith {
			//DIAG_LOG format["PFM SERVER -- BAD TUBE: %1", _tube];
			_badTubes pushback _tube;
		};
		
		private _gunner = gunner _tube;
		if (!isNull _gunner and {isPlayer _gunner}) exitWith {
			//DIAG_LOG format["PFM SERVER -- BAD GUNNER: %1", _tube];
			_badTubes pushback _tube;
		};
		
		private _abort = false;
		{
			if (alive _x and !local _x) then {
				//DIAG_LOG format["PFM SERVER -- BAD CREW: %1 in %2", _x, _tube];
				_badTubes pushback _tube;
				_abort = true;
			};
			if (_abort) exitWith {};
		} forEach crew _tube;
	};
} forEach _tubes;
//DIAG_LOG format["PFM SERVER -- BAD TUBES: %1", _badTubes];


// Load magazine.
if ((_missionType == "SPOT") or (_missionType == "FFE")) then {
	{
		if (!(_x in _badTubes)) then {
			_x setVariable ["T1AM_outOfAmmo", false];
			[_x, _warheadType, _assetType] call T1AM_Fnc_LoadMagazine;
		};
	} forEach _tubes;
};


private _announcementUnit = objNull;
private _emptyTubes = [];
private _highestAmount = -999;
private _tubesTemp = _tubes;

//DIAG_LOG format["PFM SERVER -- TUBES BEFORE LOOP: %1", _tubes];

{
	private _tube = _x;
	private _noGunner = false;
	
	// Check if it has a gunner.
	if (isNull (gunner _tube)) then {
		_noGunner = true;
		//DIAG_LOG format["PFM SERVER LOOP -- NO GUNNER - CHECK1: %1 - CHECK2: %2", gunner _tube, isNull (gunner _tube)];
	};
	
	// If tube doesn't have the requested ammo or has no gunner or is a bad tube, then we won't fire it.
	if (_tube getVariable ["T1AM_outOfAmmo", false] or _noGunner or _tube in _badTubes) then {
		
		// Remove it from the list of tubes that will participate in this mission. Add it to the inoperable (empty) list.
		_tubes = _tubes - [_tube];
		_emptyTubes = _emptyTubes + [_tube];
		//DIAG_LOG format["PFM SERVER LOOP -- NO AMMO OR NO GUNNER - CHECK1: %1 - CHECK2: %2", _tube getVariable ["T1AM_outOfAmmo", false], _noGunner];
		
	} else {
		
		// Has ammo.
		// Mark tube as not ready to fire, so that other tubes will wait until it is ready.
		_tube setVariable ["T1AM_readyToFire", false];
		_tube setVariable ["T1AM_outOfAmmo", false];
		_tube setVariable ["T1AM_impossibleShot", false];
		
		// Find out if this unit has the most ammo of the requested type.
		// If so, make this unit do all the annoucements, ie. "shot", "rounds complete", etc.
		// This unit will also be in charge of monitoring and ending the fire mission properly.
		private _tempAmount = 0;
		
		{
			if (_x select 0 == _warheadType) then {_tempAmount = _tempAmount + (_x select 1)};
		} forEach (magazinesAmmo _x);
		
		if (_tempAmount > _highestAmount) then {
			_highestAmount = _tempAmount;
			_announcementUnit = _tube;
		};
	};
	
} forEach _tubesTemp;

//DIAG_LOG format["PFM SERVER -- TUBES AFTER LOOP: %1", _tubes];

private _countLoaded = count _tubes;


// If the tubes list is empty at this point, it means no unit has the requested ammmo, so abort.
if (_countLoaded == 0) exitWith {
	sleep 2;
	T1AM_AssetsBusy = T1AM_AssetsBusy - [_asset];
	publicVariable "T1AM_AssetsBusy";
	[_asset,"Unable to comply - requested ammo not available or units are inoperable.","beep"] call T1AM_Fnc_SendComms;
	
	//DIAG_LOG format["PFM SERVER ABORT - NO VIABLE TUBES FOUND -- _countLoaded: %1", _countLoaded];
};


// Reset vars.
_asset setVariable ["T1AM_CheckFire", false];
private _nr = _asset getVariable ["T1AM_missionNr", 0];
_asset setVariable ["T1AM_missionNr", _nr + 1];
_asset setVariable ["T1AM_amountAborted", 0];
// Mark first sector as already fired at because the announcement unit will fire at it.
_asset setVariable ["T1AM_sheafSectorsLine", [true,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false]];



// If there's at least 1 tube that is empty, show the players a message to indicate that.
private _countEmpty = count _emptyTubes;
if (_countEmpty > 0) then {
	private _text1 = "";
	private _text2 = "";
	
	switch true do {
		case (_countLoaded == 1) : {_text1 = format["%1 unit will fire - ", _countLoaded]};
		case (_countLoaded > 1) : {_text1 = format["%1 units will fire - ", _countLoaded]};
	};
	
	switch true do {
		case (_countEmpty == 1) : {_text2 = format["%1 unit is empty or inoperable.", _countEmpty]};
		case (_countEmpty > 1) : {_text2 = format["%1 units are empty or inoperable.", _countEmpty]};
	};
	
	[_asset, (_text1 + _text2), "beep"] call T1AM_Fnc_SendComms;
	sleep 4;
};

//DIAG_LOG format["PFM SERVER -- _countLoaded: %1", _countLoaded];
//DIAG_LOG format["PFM SERVER -- _countEmpty: %1", _countEmpty];
//DIAG_LOG format["PFM SERVER -- _announcementUnit: %1", _announcementUnit];

// Give orders to tubes that will participate in this mission.
{
	private _tube = _x;
	
	// Reset var.
	_tube setVariable ["T1AM_ETA", 9999];
	_tube setVariable ["T1AM_concludingMission", false];
	_tube setVariable ["T1AM_hasFired", false];
	
	private _isAnnouncementUnit = false;
	if (_tube == _announcementUnit) then {
		_isAnnouncementUnit = true;
	} else {
		_isAnnouncementUnit = false;
	};
	
	//DIAG_LOG format["PFM SERVER -- UNIT: %1 - _isAnnouncementUnit: %2", _tube, _isAnnouncementUnit];
	
	[_tubes,_rounds,_profile,_pos,_warheadType,_missionType,_sheafSize,_fuse,_assetType,_sheaf,_airburstHeight,_asset,_tubeType,_angle,_prePlotted,_sender,_posDisplay,_tube,_isAnnouncementUnit,_GPSZAdjust,_posGPS,_sheafLineDir,_sheafLineDist] spawn T1AM_Fnc_Tube;
	
} forEach _tubes;