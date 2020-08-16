// Shows the assets list.

disableSerialization;

if (!T1AM_ModEnabled) exitWith {};

T1AM_LastDialog = "ASSETS";
(findDisplay 47100) closeDisplay 0;
(findDisplay 47200) closeDisplay 0;
(findDisplay 47300) closeDisplay 0;
(findDisplay 47400) closeDisplay 0;
(findDisplay 47500) closeDisplay 0;
(findDisplay 47050) createDisplay "T1AM_DialogAssets";

[] spawn {
	sleep 0.5;
	T1AM_PlaySoundGUI = true;
};
playSound "T1AM_Sounds_Load2";

T1AM_SelectedPrePlotted = [];
onMapSingleClick "";
private _dialog = findDisplay 47100;
private _controlAssets = _dialog displayCtrl 47101;
private _controlMissions = _dialog displayCtrl 47102;
lbClear _controlAssets;
lbClear _controlMissions;
private _addedAssets = [];
private _addedMissions = [];


while {!isNull (findDisplay 47100)} do {
	
	// Assets
	private _assets = [side player] call T1AM_Fnc_ArtilleryGroupsBySide;
	
	// Check if one of the processed assets is not available anymore. If so, refresh the whole list.
	{
		if (!((_x select 0) in _assets)) exitWith {
			lbClear _controlAssets;
			lbClear _controlMissions;
			_addedAssets = [];
			_addedMissions = [];
		};
	} forEach _addedAssets;
	
	{
		// Do a bunch of stuff to create the string that should be shown in the entry.
		private _asset = _x;
		private _name = [(vehicle (leader _asset))] call T1AM_Fnc_VehicleName;
		private _status = "RDY";
		if (_asset in T1AM_ControlledAssets) then {
			private _spotter = _asset getVariable ["T1AM_controlledBy", nil];
			if (!isNil "_spotter" and {alive _spotter}) then {_status = format["BSY - %1", name _spotter]} else {_status = "BSY"};
		};
		if (_asset == T1AM_ControlledAssetLocal) then {
			private _spotter = _asset getVariable ["T1AM_controlledBy", nil];
			if (!isNil "_spotter" and {alive _spotter}) then {_status = format["CON - %1", name _spotter]} else {_status = "CON"};
		};
		if (_asset in T1AM_AssetsBusy) then {
			private _spotter = _asset getVariable ["T1AM_controlledBy", nil];
			if (!isNil "_spotter" and {alive _spotter}) then {_status = format["BSY - %1", name _spotter]} else {_status = "BSY"};
		};
		
		private _pos = getPosASL (vehicle (leader _asset));
		private _x = _pos select 0;
		private _y = _pos select 1;
		private _z = _pos select 2;
		
		private _posMap = [[_x, _y]] call T1AM_Fnc_PosToMapGrid;
		private _xMap = parseNumber (_posMap select 0);
		private _yMap = parseNumber (_posMap select 1);
		private _xText = [_xMap] call T1AM_Fnc_FormatCoordinates;
		private _yText = [_yMap] call T1AM_Fnc_FormatCoordinates;
		
		private _zText = round _z;
		private  _tubes = [_asset] call T1AM_Fnc_GroupVehicles;
		private _str = format["%1 | %2 x%3  [%4 %5 %6] (%7)",_asset,_name,(count _tubes),_xText,_yText,_zText,_status];
		
		// If asset hasn't been processed before, add a new entry. Otherwise, edit existing entry.
		private _add = true;
		{
			if (_asset == _x select 0) exitWith {
				_add = false;
				_controlAssets lbSetText [_x select 1, _str];
			};
		} forEach _addedAssets;
		private _lbSize = lbSize _controlAssets;
		if (_add) then {
			_addedAssets pushback [_asset, _lbSize];
			_controlAssets lbAdd _str;
		};
		// If this is the first added entry, then select this entry.
		if (_lbSize == 0) then {_controlAssets lbSetCurSel 0};
	} forEach _assets;
	
	
	
	// Missions
	if (count _addedMissions > 0 and {(_addedMissions select 0) select 0 != T1AM_SelectedAsset}) then {
		// If mission list contains entry of another asset, then clear the list.
		lbClear _controlMissions;
		_addedMissions = [];
	};
	
	{
		// Do a bunch of stuff to create the string that should be shown in the entry.
		private _mission = _x;
		if (_mission select 0 == T1AM_SelectedAsset) then {
			
			// We'll compare this mission to the old missions already added.
			// Don't add mission if it's already in the old missions list.
			private _add = true;
			if (count _addedMissions > 0) then {
				{
					private _oldMission = _x;
					for [{_i = 0}, {_i < count _oldMission}, {_i = _i + 1}] do {
						private _itemOld = _oldMission select _i;
						private _itemNew = _mission select _i;
						//DIAG_LOG format ["ASSETS | MISSION LIST | _itemOld: %1 | _itemNew: %2 | _itemOld isEqualTo _itemNew: %3 | _i: %4", _itemOld, _itemNew, _itemOld isEqualTo _itemNew, _i];
						
						// Check if this old mission has an item with different values. If so, stop checking this old mission and move on to the next old mission.
						// Ignore changes in values of: rounds, time, preplotted, airburst height, TRP X and TRP Y.
						if (!(_itemOld isEqualTo _itemNew) and _i != 4 and _i != 8 and _i != 9 and _i != 14 and _i != 20 and _i != 21) exitWith {};
						
						// If the loop reaches the end, then it means there's at least 1 mission that is the same.
						// So, don't add the new mission or we'll get a duplicate entry. Exit out of all the loops.
						if (_i == count _oldMission - 1) exitWith {_add = false};
					};
					if (!_add) exitWith {};
				} forEach _addedMissions;
			};
			if (!_add) exitWith {};
			
			private _timeStamp = _mission select 8;
			private _hour = str (_timeStamp select 0);
			private _min = str (_timeStamp select 1);
			if ((_timeStamp select 0) < 10) then {_hour = format ["0%1",_timeStamp select 0]};
			if ((_timeStamp select 1) < 10) then {_min = format ["0%1",_timeStamp select 1]};
			private _timeText = format ["%1%2",_hour,_min];
			
			
			private _missionType = _mission select 5;
			private _mType = "";
			switch (_missionType) do {
				case ("PLOT") : {_mType = format["TRP-%1", _mission select 15]};
				default {_mType = format["FFE-%1", _mission select 23]};
			};
			
			
			private _magType = _mission select 2;
			private _ammoType = [_magType] call T1AM_Fnc_AmmoType;
			private _isGPS = false;
			if (_magType in T1AM_GPSLaserTypes or {_magType in T1AM_GPSSeekerTypes} or {_magType in T1AM_GPSGuidedTypes}) then {
				_isGPS = true;
				_mType = format ["%1 (GPS)",_mType];
			};
			
			
			private _pos = [];
			if (_isGPS) then {
				_pos = _mission select 17; // GPS pos
			} else {
				_pos = _mission select 13; // Display pos
			};
			private _posMap = [[_pos select 0, _pos select 1]] call T1AM_Fnc_PosToMapGrid;
			private _xMap = parseNumber (_posMap select 0);
			private _yMap = parseNumber (_posMap select 1);
			_xMap = [_xMap] call T1AM_Fnc_FormatCoordinates;
			_yMap = [_yMap] call T1AM_Fnc_FormatCoordinates;
			private _zMap = round (_pos select 2);
			
			
			private _sheaf = _mission select 10;
			private _sheafText = "";
			switch (_sheaf) do {
				case ("POINT") : {
					_sheafText = "POINT";
				};
				case ("CIRCLE") : {
					_sheafText = format["CIRCLE (X:%1)", (_mission select 12) select 0];
				};
				case ("BOX") : {
					_sheafText = format["BOX (DEG:%1 X:%2 Y:%3m)", _mission select 18, (_mission select 12) select 0, (_mission select 12) select 1];
				};
				case ("LINE") : {
					_sheafText = format["LINE (DEG:%1 DIST:%2)", _mission select 18, _mission select 19];
				};
			};
			
			private _remarks = _mission select 22;
			if (_remarks != "") then {
				_remarks = format ["| %1", _remarks];
			};
			
			
			private _sender = _mission select 7;
			private _nameSpotter = "";
			if (!isNull _sender) then {
				_nameSpotter = name _sender;
				if (count _nameSpotter > 10) then {
					_nameSpotter = (_nameSpotter select [0, 10]) + ".";
				};
			};
			
			
			private _str = format["%1: %2 | %3 [%4 %5 %6] %7 x%8 | %9 | %10 | %11 %12",
				_timeText,
				_nameSpotter,
				_mType,
				_xMap,
				_yMap,
				_zMap,
				_ammoType,
				_mission select 3,	//Rounds
				_mission select 11,	// Fuze
				_mission select 6,	// Angle
				_sheafText,			// Sheaf + size
				_remarks
			];
			
			
			private _lbSize = lbSize _controlMissions;
			_controlMissions lbAdd _str;
			_addedMissions pushback _mission;
			// If this is the first added entry, then select this entry.
			if (_lbSize == 0) then {_controlMissions lbSetCurSel 0};
		};
	} forEach T1AM_AllMissions;
	
	// If there's an entry selected, set T1AM_SelectedPrePlotted.
	if (lbSize _controlMissions > 0) then {
		T1AM_SelectedPrePlotted = _addedMissions select (lbCurSel _controlMissions);
	};
	
	
	sleep 0.5;
};