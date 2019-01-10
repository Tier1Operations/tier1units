// Called from DrongosArtillery\Misc\Check.sqs
// Shows the artillery dialog

dtaLastDialog = "Assets";
dtaSelectedPrePlotted = [];
if NOT(dialog) then {createDialog "dtaDialogAssets"};
disableSerialization;
onMapSingleClick "";
_dialog = findDisplay 100;
_list = _dialog displayCtrl 101;
lbClear _list;
_assets = [];
_assets = [(side player)] call dta_fnc_ArtilleryGroupsBySide;

// Easy way to disable the entire arty system.
if (DTA_turnOff) then {_assets = []};

dtaAssets = _assets;

_asset = "";
_name = "";
_count = 0;
_tubes = [];
_status = "";
_select = false;
_pos = [];
_x = 0;
_y = 0;
_xText = "";
_yText = "";

// Abort if taking too long (asset dead or deleted).
_waitTime = time + 30;
while {((count _assets) > 0) and (_waitTime > time)} do {
	_select = true;
	_asset = _assets select 0;
	_assets = _assets - [_asset];
	_name = [(vehicle (leader _asset))] call dta_fnc_VehicleName;
	_status = "RDY";
	if (_asset in dtaControlledAssets) then {
		private "_spotter";
		_spotter = _asset getVariable ["DTA_controlledBy", nil];
		if (!isNil "_spotter" and {alive _spotter}) then {_status = format["BSY - %1", name _spotter]} else {_status = "BSY"};
	};
	
	if (_asset == dtaControlledAssetLocal) then {
		private "_spotter";
		_spotter = _asset getVariable ["DTA_controlledBy", nil];
		if (!isNil "_spotter" and {alive _spotter}) then {_status = format["CON - %1", name _spotter]} else {_status = "CON"};
	};
	
	if (_asset in dtaAssetsBusy) then {
		private "_spotter";
		_spotter = _asset getVariable ["DTA_controlledBy", nil];
		if (!isNil "_spotter" and {alive _spotter}) then {_status = format["BSY - %1", name _spotter]} else {_status = "BSY"};
	};
	
	_pos = getPosASL (vehicle (leader _asset));
	_x = _pos select 0;
	_y = _pos select 1;
	_z = _pos select 2;
	
	_posMap = [[_x, _y]] call dta_fnc_PosToMapGrid;
	_xMap = parseNumber (_posMap select 0);
	_yMap = parseNumber (_posMap select 1);
	_xText = [_xMap] call dta_fnc_FormatCoordinates;
	_yText = [_yMap] call dta_fnc_FormatCoordinates;
	
	_zText = round _z;
	_tubes = [_asset] call dta_fnc_GroupVehicles;
	_asset = [_asset] call dta_fnc_TrimGroupName;
	_list lbAdd format["%1: %2 x %3  [%4 %5 %6] (%7)",_asset,_name,(count _tubes),_xText,_yText,_zText,_status];
	_list lbSetValue [(lbSize _list)-1,_count];
	_count = _count + 1;
};
if (_select) then {lbSetCurSel [101,0]};

nul = [] execVM "DrongosArtillery\Dialog\RefreshMissions.sqf";