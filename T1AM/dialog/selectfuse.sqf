disableSerialization;

_iccCode = 200;
_fuse = "";
_lastAirburstHeightIndex = 1;
_index = lbCurSel (_iccCode + 12);
_fuse = lbData [(_iccCode + 12),_index];

if (_fuse == "IMPACT") exitWith {
	_dialog = findDisplay _iccCode;
	_list = _dialog displayCtrl (_iccCode + 15);
	lbClear _list;
};

// Change icc code for normal (200) vs pre-plotted (300) dialogs
//_iccCode = 200;
//_iccCode = 200;
//if (_prePlotted) then {_iccCode = 300};

// Airburst Height
_lastAirburstHeight = T1AM_LastAirburstHeight;
_count = 0;
_dialog = findDisplay _iccCode;
_list = _dialog displayCtrl (_iccCode + 15);
lbClear _list;
_airburstHeights = ["LOW","MED","HIGH"];
_airburstHeight = "";
while {((count _airburstHeights) > 0)} do {
	_airburstHeight = _airburstHeights select 0;
	_airburstHeights = _airburstHeights - [_airburstHeight];
	_list lbAdd format["%1",_airburstHeight];
	_list lbSetData [(lbSize _list)-1,_airburstHeight];
	if (_airburstHeight == _lastAirburstHeight) then {_lastAirburstHeightIndex = _count};
	_count = _count + 1;
};
lbSetCurSel [(_iccCode + 15),_lastAirburstHeightIndex];