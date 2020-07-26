params ["_control", "_selectedIndex"];

private _dialog = findDisplay 47200;
private _fuse = _control lbData _selectedIndex;

T1AM_LastFuse = _fuse;

switch (_fuse) do {
	case ("AIRBURST") : {
		(_dialog displayCtrl 47215) ctrlShow true;
		(_dialog displayCtrl 47215) ctrlEnable true;
		(_dialog displayCtrl 47251) ctrlShow true;
		(_dialog displayCtrl 47251) ctrlEnable true;
	};
	
	case ("MIXED") : {
		(_dialog displayCtrl 47215) ctrlShow true;
		(_dialog displayCtrl 47215) ctrlEnable true;
		(_dialog displayCtrl 47251) ctrlShow true;
		(_dialog displayCtrl 47251) ctrlEnable true;
	};
	
	default {
		(_dialog displayCtrl 47215) ctrlShow false;
		(_dialog displayCtrl 47215) ctrlEnable false;
		(_dialog displayCtrl 47251) ctrlShow false;
		(_dialog displayCtrl 47251) ctrlEnable false;
	};
};