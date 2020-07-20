disableSerialization;

private _dialog = findDisplay 47200;
private _control = _dialog displayCtrl 47215;
lbClear _control;

private _fuse = (_dialog displayCtrl 47212) lbData (lbCurSel (_dialog displayCtrl 47212));
if (_fuse == "IMPACT") exitWith {};

// Airburst Height
_lastAirburstHeight = T1AM_LastAirburstHeight;
private _airburstHeights = ["LOW","MED","HIGH"];
private _airburstHeight = "";
private _lastAirburstHeightIndex = 1;

private _count = 0;
{
	private _airburstHeight = _x;
	_control lbAdd format["%1",_airburstHeight];
	_control lbSetData [(lbSize _control)-1,_airburstHeight];
	if (_airburstHeight == _lastAirburstHeight) then {_lastAirburstHeightIndex = _count};
	_count = _count + 1;
} forEach _airburstHeights;
_control lbSetCurSel _lastAirburstHeightIndex;