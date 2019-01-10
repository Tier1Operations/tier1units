// Called from 

if NOT(dialog) then {createDialog "dtaDialogAssets"};
disableSerialization;
onMapSingleClick "";
_dialog = findDisplay 100;

_list = _dialog displayCtrl 102;
lbClear _list;
_timeStamp = [];
_mission = [];
_count = 0;
_missions = [];
_missions = dtaAllMissions;

// Easy way to disable the entire arty system.
if (DTA_turnOff) then {_missions = []};

_missionType = "";
_mType = "";
_hour = "";
_min = "";
_timeText = "";
_ammoType = "";
_x = 0;
_y = 0;

_xText = "";
_yText = "";

while {((count _missions) > 0)} do {
	_mission = _missions select 0;
	_missions = _missions - [_mission];
	if ((_mission select 0) == dtaSelectedAsset) then {
		_timeStamp = _mission select 8;
		_hour = format ["%1",(_timeStamp select 0)];
		_min = format ["%1",(_timeStamp select 1)];
		if ((_timeStamp select 0) < 10) then {_hour = format ["0%1",(_timeStamp select 0)]};
		if ((_timeStamp select 1) < 10) then {_min = format ["0%1",(_timeStamp select 1)]};
		_timeText = format ["%1%2",_hour,_min];
		_missionType = _mission select 5;
		_mType = "";
		_plotNr = _mission select 15;
		if (_missionType == "PLOT") then {_mType = format[" TRP-%1", _plotNr]};
		_ammoType = [(_mission select 2)] call dta_fnc_AmmoType;
		_pos = (_mission select 13);
		
		_posMap = [[_pos select 0, _pos select 1]] call dta_fnc_PosToMapGrid;
		_xMap = parseNumber (_posMap select 0);
		_yMap = parseNumber (_posMap select 1);
		_xText = [_xMap] call dta_fnc_FormatCoordinates;
		_yText = [_yMap] call dta_fnc_FormatCoordinates;
		
		_zText = round (_pos select 2);
		_list lbAdd format["%1: [%2 %3 %4] %5 x %6 %7, %8 angle, %9 sheaf %10 %11",_timeText,_xText,_yText,_zText,_ammoType,(_mission select 3),(_mission select 11),(_mission select 6),(_mission select 10),(_mission select 12),_mType];
		_list lbSetValue [(lbSize _list)-1,_count];
	};
	_count = _count + 1;
};