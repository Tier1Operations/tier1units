#include "\T1AM\Defines.hpp"

disableSerialization;

params ["_addedWarheads","_addedWarheadsTimeout","_controlWarheads"];

DEBUGLOG format["DISPLAY WARHEADS | START | _addedWarheads: %1 | _addedWarheadsTimeout:%2 | _controlWarheads: %3", _addedWarheads, _addedWarheadsTimeout, _controlWarheads];

private _magazines = magazinesAmmo T1AM_SelectedTube;

// Create a list of all magazine types. Also create a list of numbers with same index.
private _magazineTypes = [];
private _magazineTypesAmmo = [];
{
	private _magazine = _x select 0;
	if (!(_magazine in _magazineTypes)) then {
		_magazineTypes pushback _magazine;
		_magazineTypesAmmo pushback 0;
	};
} forEach _magazines;

DEBUGLOG format["DISPLAY WARHEADS | ARRAYS CREATED | _magazines: %1", _magazines];
DEBUGLOG format["DISPLAY WARHEADS | ARRAYS CREATED | _magazineTypes: %1", _magazineTypes];
DEBUGLOG format["DISPLAY WARHEADS | ARRAYS CREATED | _magazineTypesAmmo: %1", _magazineTypesAmmo];

// Check if one of the processed magazines is not available anymore.
// If so, refresh the whole list. Also refresh if nothing is selected (safety check).
if (count _magazineTypes > 0 and _addedWarheadsTimeout < 0) then {
	_addedWarheadsTimeout = 9;
	DEBUGLOG format["DISPLAY WARHEADS | RESET TIMEOUT | count _magazineTypes: %1 | _addedWarheadsTimeout: %2", count _magazineTypes, _addedWarheadsTimeout];
};
if (lbCurSel _controlWarheads == -1) then {
	lbClear _controlWarheads;
	_addedWarheads = [];
	DEBUGLOG format["DISPLAY WARHEADS | RESET BY SELECTION"];
} else {
	private _found = true;
	{
		if (!(_x in _magazineTypes)) then {
			_found = false;
			_addedWarheadsTimeout = _addedWarheadsTimeout - 1;
			[_controlWarheads, lbCurSel _controlWarheads] spawn T1AM_Fnc_ListWarheadTypeEvent; // Refresh GUI.
			DEBUGLOG format["DISPLAY WARHEADS | DECREMENT _addedWarheadsTimeout: %1", _addedWarheadsTimeout];
			
			if (_addedWarheadsTimeout < 0) then {
				lbClear _controlWarheads;
				_addedWarheads = [];
				_addedWarheadsTimeout = 9;
				DEBUGLOG format["DISPLAY WARHEADS | RESET BY ARRAY"];
			};
		};
		if (!_found) exitWith {};
	} forEach _addedWarheads;
	if (_found) then {_addedWarheadsTimeout = 9};
};

DEBUGLOG format["DISPLAY WARHEADS | AFTER RESET CHECK | _addedWarheadsTimeout: %1", _addedWarheadsTimeout];

// Store ammo amounts in array.
private _count = 0;
{
	private _magazine = _x;
	{
		if (_magazine == (_x select 0)) then {
			_magazineTypesAmmo set [_count, (_magazineTypesAmmo select _count) + (_x select 1)];
		};
	} forEach _magazines;
	_count = _count + 1;
} forEach _magazineTypes;

DEBUGLOG format["DISPLAY WARHEADS | AMMO CHECKED | _magazineTypesAmmo: %1", _magazineTypesAmmo];
DEBUGLOG format["DISPLAY WARHEADS | LOOP START | count _magazineTypes: %1", count _magazineTypes];


for [{_i = 0}, {_i < count _magazineTypes}, {_i = _i + 1}] do {
	// Figure out what text to show.
	private _magazine = _magazineTypes select _i;
	private _ammo = _magazineTypesAmmo select _i;
	private _magazineName = getText (configFile >> "CfgMagazines" >> _magazine >> "displayName");
	
	DEBUGLOG format["DISPLAY WARHEADS | MAG VARS | _magazine: %1 | _ammo: %2 | _magazineName: %3", _magazine, _ammo, _magazineName];
	
	switch true do {
		case (_magazine in T1AM_GPSGuidedTypes) : {
			_magazineName = _magazineName + " (GPS)";
		};
		case (_magazine in T1AM_GPSLaserTypes) : {
			_magazineName = _magazineName + " (GPS/LASER)";
		};
		case (_magazine in T1AM_GPSSeekerTypes) : {
			_magazineName = _magazineName + " (GPS/DISCRIMINATING)";
		};
		case (_magazine in T1AM_LaserTypes) : {
			_magazineName = _magazineName + " (LASER)";
		};
	};
	_magazineName = format["%1: %2", _magazineName, _ammo];
	
	// Start adding or editing the entries.
	private _alreadyAdded = false;
	private _lbSize = lbSize _controlWarheads;
	for [{_j = 0}, {_j < _lbSize}, {_j = _j + 1}] do {
		private _data = _controlWarheads lbData _j;
		
		// Already exists. So, edit.
		if (_data == _magazine) exitWith {
			DEBUGLOG format["DISPLAY WARHEADS | MODIFY ENTRY | _data: %1 | _magazineName: %2 | _j: %3", _data, _magazineName, _j];
			_alreadyAdded = true;
			_controlWarheads lbSetText [_j, _magazineName];
		};
	};
	
	// Doesn't exist yet. So, add.
	if (!_alreadyAdded) then {
		_controlWarheads lbAdd _magazineName;
		_controlWarheads lbSetData [(lbSize _controlWarheads)-1, _magazine];
		if (_magazine == T1AM_LastWarhead) then {
			((findDisplay 47200) displayCtrl 47206) lbSetCurSel _lbSize;
			DEBUGLOG format["DISPLAY WARHEADS | SELECT PREVIOUS | T1AM_LastWarhead: %1", T1AM_LastWarhead];
		};
		_addedWarheads pushback _magazine;
		DEBUGLOG format["DISPLAY WARHEADS | ADD ENTRY | _magazine: %1 | _magazineName: %2", _magazine, _magazineName];
	};
};

// If nothing selected, select the first entry.
if (lbSize _controlWarheads > 0 and lbCurSel _controlWarheads == -1) then {
	((findDisplay 47200) displayCtrl 47206) lbSetCurSel 0;
	DEBUGLOG format["DISPLAY WARHEADS | SELECT FIRST | T1AM_LastWarhead: %1", T1AM_LastWarhead];
};

DEBUGLOG format["DISPLAY WARHEADS | END | _addedWarheads: %1 | _addedWarheadsTimeout: %2", _addedWarheads, _addedWarheadsTimeout];

// Safe these arrays. We use them to check if something in the list has been removed.
[_addedWarheads, _addedWarheadsTimeout]