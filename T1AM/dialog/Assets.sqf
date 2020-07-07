// Shows the assets list.

if (!T1AM_ModEnabled) exitWith {};

T1AM_LastDialog = "Assets";
T1AM_SelectedPrePlotted = [];
if (!dialog) then {createDialog "T1AM_DialogAssets"};
disableSerialization;
onMapSingleClick "";
private _dialog = findDisplay 100;
private _controlAssets = _dialog displayCtrl 101;
private _controlMissions = _dialog displayCtrl 102;
lbClear 101;
lbClear 102;
private _addedAssets = [];
private _addedMissions = [];

while {!isNull _dialog} do {
	
	// Assets
	private _assets = [(side player)] call T1AM_Fnc_ArtilleryGroupsBySide;
	
	// Check if one of the processed assets is not available anymore, if so. Refresh the whole list.
	{
		if (!((_x select 0) in _assets)) exitWith {
			lbClear 101;
			lbClear 102;
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
			private  _spotter = _asset getVariable ["T1AM_controlledBy", nil];
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
		private _str = format["%1 | %2 x %3  [%4 %5 %6] (%7)",_asset,_name,(count _tubes),_xText,_yText,_zText,_status];
		
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
		if (_lbSize == 0) then {lbSetCurSel [101, 0]};
	} forEach _assets;
	
	// Check text of selected entry. Grab group name. Compare to processed group names. Then set T1AM_SelectedAsset.
	if (lbSize _controlAssets > 0) then {
		private _str = lbText [101, (lbCurSel 101)];
		private _index = _str find " |";
		if (_index != -1) then {
			_str = _str select [0, _index];
			{
				if (str(_x select 0) == _str) then {T1AM_SelectedAsset = _x select 0};
			} forEach _addedAssets;
		};
	};	
	
	
	
	// Missions
	{
		// Do a bunch of stuff to create the string that should be shown in the entry.
		private _mission = _x;
		if ((_mission select 0) == T1AM_SelectedAsset) then {
			private _timeStamp = _mission select 8;
			private _hour = format ["%1",(_timeStamp select 0)];
			private _min = format ["%1",(_timeStamp select 1)];
			if ((_timeStamp select 0) < 10) then {_hour = format ["0%1",(_timeStamp select 0)]};
			if ((_timeStamp select 1) < 10) then {_min = format ["0%1",(_timeStamp select 1)]};
			private _timeText = format ["%1%2",_hour,_min];
			private _missionType = _mission select 5;
			private _mType = "";
			_plotNr = _mission select 15;
			if (_missionType == "PLOT") then {_mType = format[" TRP-%1", _plotNr]};
			private _ammoType = [(_mission select 2)] call T1AM_Fnc_AmmoType;
			_pos = (_mission select 13);
			
			_posMap = [[_pos select 0, _pos select 1]] call T1AM_Fnc_PosToMapGrid;
			_xMap = parseNumber (_posMap select 0);
			_yMap = parseNumber (_posMap select 1);
			private _xText = [_xMap] call T1AM_Fnc_FormatCoordinates;
			private _yText = [_yMap] call T1AM_Fnc_FormatCoordinates;
			
			_zText = round (_pos select 2);
			private _str = format["%1: [%2 %3 %4] %5 x %6 %7, %8 angle, %9 sheaf %10 %11",_timeText,_xText,_yText,_zText,_ammoType,(_mission select 3),(_mission select 11),(_mission select 6),(_mission select 10),(_mission select 12),_mType];
			
			// Check if the entry has been added before. If so, don't add it.
			private _lbSize = lbSize _controlMissions;
			private _add = true;
			for [{_i = 0}, {_i < _lbSize}, {_i = _i + 1}] do {
				if (_str == lbText [102, _i]) exitWith {_add = false};
			};
			
			if (_add) then {
				_controlMissions lbAdd _str;
				_addedMissions pushback _mission;
				// If this is the first added entry, then select this entry.
				if (_lbSize == 0) then {lbSetCurSel [102, 0]};
			};
		} else {
			// If no asset selected, then clear the missions list.
			lbClear _controlMissions;
			_addedMissions = [];
		};
	} forEach T1AM_AllMissions;
	
	// If there's an entry selected, set T1AM_SelectedPrePlotted.
	if (lbSize _controlMissions > 0) then {
		T1AM_SelectedPrePlotted = _addedMissions select (lbCurSel _controlMissions);
	};
	
	
	sleep 0.15;
};