params ["_control", "_selectedIndex"];

private _dialog = findDisplay 47200;
private _mission = _control lbData _selectedIndex;

T1AM_LastMission = _mission;

switch (_mission) do {
	case ("SPOT") : {
		
		// Rounds
		(_dialog displayCtrl 47207) ctrlShow false;
		(_dialog displayCtrl 47207) ctrlEnable false;
		(_dialog displayCtrl 47252) ctrlShow false;
		(_dialog displayCtrl 47252) ctrlEnable false;
		
		
		
		// Sheaf
		(_dialog displayCtrl 47253) ctrlShow false;
		(_dialog displayCtrl 47253) ctrlEnable false;
		(_dialog displayCtrl 47233) ctrlShow false;
		(_dialog displayCtrl 47233) ctrlEnable false;
		(_dialog displayCtrl 47234) ctrlShow false;
		(_dialog displayCtrl 47234) ctrlEnable false;
		(_dialog displayCtrl 47235) ctrlShow false;
		(_dialog displayCtrl 47235) ctrlEnable false;
		(_dialog displayCtrl 47236) ctrlShow false;
		(_dialog displayCtrl 47236) ctrlEnable false;
		(_dialog displayCtrl 47211) ctrlShow false;
		(_dialog displayCtrl 47211) ctrlEnable false;
		(_dialog displayCtrl 47213) ctrlShow false;
		(_dialog displayCtrl 47213) ctrlEnable false;
		(_dialog displayCtrl 47214) ctrlShow false;
		(_dialog displayCtrl 47214) ctrlEnable false;
		(_dialog displayCtrl 47224) ctrlShow false;
		(_dialog displayCtrl 47224) ctrlEnable false;
		(_dialog displayCtrl 47225) ctrlShow false;
		(_dialog displayCtrl 47225) ctrlEnable false;
	};
	
	default {
		
		// Rounds
		(_dialog displayCtrl 47207) ctrlShow true;
		(_dialog displayCtrl 47207) ctrlEnable true;
		(_dialog displayCtrl 47252) ctrlShow true;
		(_dialog displayCtrl 47252) ctrlEnable true;
		
		
		
		// Sheaf
		if (T1AM_LastWarhead in T1AM_GPSGuidedTypes or {T1AM_LastWarhead in T1AM_GPSLaserTypes} or {T1AM_LastWarhead in T1AM_GPSSeekerTypes}) exitWith {};
		(_dialog displayCtrl 47253) ctrlShow true;
		(_dialog displayCtrl 47253) ctrlEnable true;
		(_dialog displayCtrl 47211) ctrlShow true;
		(_dialog displayCtrl 47211) ctrlEnable true;
		
		[_dialog displayCtrl 47211, lbCurSel (_dialog displayCtrl 47211)] spawn T1AM_Fnc_ListSheafEvent;
	};
};