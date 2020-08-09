params ["_control", "_selectedIndex"];

private _dialog = findDisplay 47200;
private _mission = _control lbData _selectedIndex;

T1AM_LastMission = _mission;

switch (_mission) do {
	case ("SPOT") : {
		
		// TRP
		(_dialog displayCtrl 47260) ctrlShow false;
		(_dialog displayCtrl 47260) ctrlEnable false;
		(_dialog displayCtrl 47261) ctrlShow false;
		(_dialog displayCtrl 47261) ctrlEnable false;
		(_dialog displayCtrl 47262) ctrlShow false;
		(_dialog displayCtrl 47262) ctrlEnable false;
		(_dialog displayCtrl 47263) ctrlShow false;
		(_dialog displayCtrl 47263) ctrlEnable false;
		(_dialog displayCtrl 47264) ctrlShow false;
		(_dialog displayCtrl 47264) ctrlEnable false;
		(_dialog displayCtrl 47265) ctrlShow false;
		(_dialog displayCtrl 47265) ctrlEnable false;
		
		
		
		// Remarks
		(_dialog displayCtrl 47266) ctrlShow false;
		(_dialog displayCtrl 47266) ctrlEnable false;
		(_dialog displayCtrl 47267) ctrlShow false;
		(_dialog displayCtrl 47267) ctrlEnable false;
		
		
		
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
	
	case ("PLOT") : {
		
		// TRP
		(_dialog displayCtrl 47260) ctrlShow true;
		(_dialog displayCtrl 47260) ctrlEnable true;
		(_dialog displayCtrl 47261) ctrlShow true;
		(_dialog displayCtrl 47261) ctrlEnable true;
		(_dialog displayCtrl 47262) ctrlShow true;
		(_dialog displayCtrl 47262) ctrlEnable true;
		(_dialog displayCtrl 47263) ctrlShow true;
		(_dialog displayCtrl 47263) ctrlEnable true;
		(_dialog displayCtrl 47264) ctrlShow true;
		(_dialog displayCtrl 47264) ctrlEnable true;
		if (T1AM_AllowMapClick) then {
			(_dialog displayCtrl 47265) ctrlShow true;
			(_dialog displayCtrl 47265) ctrlEnable true;
		};
		
		
		
		// Remarks
		(_dialog displayCtrl 47266) ctrlShow true;
		(_dialog displayCtrl 47266) ctrlEnable true;
		(_dialog displayCtrl 47267) ctrlShow true;
		(_dialog displayCtrl 47267) ctrlEnable true;
		
		
		
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
	
	default {
		
		// TRP
		(_dialog displayCtrl 47260) ctrlShow false;
		(_dialog displayCtrl 47260) ctrlEnable false;
		(_dialog displayCtrl 47261) ctrlShow false;
		(_dialog displayCtrl 47261) ctrlEnable false;
		(_dialog displayCtrl 47262) ctrlShow false;
		(_dialog displayCtrl 47262) ctrlEnable false;
		(_dialog displayCtrl 47263) ctrlShow false;
		(_dialog displayCtrl 47263) ctrlEnable false;
		(_dialog displayCtrl 47264) ctrlShow false;
		(_dialog displayCtrl 47264) ctrlEnable false;
		(_dialog displayCtrl 47265) ctrlShow false;
		(_dialog displayCtrl 47265) ctrlEnable false;
		
		
		
		// Remarks
		(_dialog displayCtrl 47266) ctrlShow true;
		(_dialog displayCtrl 47266) ctrlEnable true;
		(_dialog displayCtrl 47267) ctrlShow true;
		(_dialog displayCtrl 47267) ctrlEnable true;
		
		
		
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