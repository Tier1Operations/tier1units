disableSerialization;

private _fuse = lbData [212, lbCurSel 212];

private _dialog = findDisplay 200;
private _control = _dialog displayCtrl 215;
lbClear _control;

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
lbSetCurSel [215,_lastAirburstHeightIndex];