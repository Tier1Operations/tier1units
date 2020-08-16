params ["_control", "_selectedIndex"];

private _dialog = findDisplay 47400;

T1AM_LastAimpointCheckbox = _selectedIndex;

switch (_selectedIndex) do {
	
	case (0) : {
		(_dialog displayCtrl 47401) ctrlShow false;
		(_dialog displayCtrl 47401) ctrlEnable false;
		(_dialog displayCtrl 47410) ctrlShow false;
		(_dialog displayCtrl 47410) ctrlEnable false;
		(_dialog displayCtrl 47411) ctrlShow false;
		(_dialog displayCtrl 47411) ctrlEnable false;
		
		(_dialog displayCtrl 47402) ctrlShow false;
		(_dialog displayCtrl 47402) ctrlEnable false;
		(_dialog displayCtrl 47403) ctrlShow false;
		(_dialog displayCtrl 47403) ctrlEnable false;
		(_dialog displayCtrl 47404) ctrlShow false;
		(_dialog displayCtrl 47404) ctrlEnable false;
		
		
		
		(_dialog displayCtrl 47406) ctrlShow true;
		(_dialog displayCtrl 47406) ctrlEnable true;
		(_dialog displayCtrl 47412) ctrlShow true;
		(_dialog displayCtrl 47412) ctrlEnable true;
		(_dialog displayCtrl 47413) ctrlShow true;
		(_dialog displayCtrl 47413) ctrlEnable true;
		(_dialog displayCtrl 47414) ctrlShow true;
		(_dialog displayCtrl 47414) ctrlEnable true;
		(_dialog displayCtrl 47415) ctrlShow true;
		(_dialog displayCtrl 47415) ctrlEnable true;
		(_dialog displayCtrl 47416) ctrlShow true;
		(_dialog displayCtrl 47416) ctrlEnable true;
		
		(_dialog displayCtrl 47407) ctrlShow true;
		(_dialog displayCtrl 47407) ctrlEnable true;
		(_dialog displayCtrl 47408) ctrlShow true;
		(_dialog displayCtrl 47408) ctrlEnable true;
		(_dialog displayCtrl 47409) ctrlShow true;
		(_dialog displayCtrl 47409) ctrlEnable true;
		(_dialog displayCtrl 47418) ctrlShow true;
		(_dialog displayCtrl 47418) ctrlEnable true;
		if (T1AM_AllowMapClick) then {
			(_dialog displayCtrl 47417) ctrlShow true;
			(_dialog displayCtrl 47417) ctrlEnable true;
		};
	};
	
	case (1) : {
		(_dialog displayCtrl 47401) ctrlShow true;
		(_dialog displayCtrl 47401) ctrlEnable true;
		(_dialog displayCtrl 47410) ctrlShow true;
		(_dialog displayCtrl 47410) ctrlEnable true;
		(_dialog displayCtrl 47411) ctrlShow true;
		(_dialog displayCtrl 47411) ctrlEnable true;
		
		(_dialog displayCtrl 47402) ctrlShow true;
		(_dialog displayCtrl 47402) ctrlEnable true;
		(_dialog displayCtrl 47403) ctrlShow true;
		(_dialog displayCtrl 47403) ctrlEnable true;
		if (T1AM_AllowMapClick) then {
			(_dialog displayCtrl 47404) ctrlShow true;
			(_dialog displayCtrl 47404) ctrlEnable true;
		};
		
		
		
		(_dialog displayCtrl 47406) ctrlShow false;
		(_dialog displayCtrl 47406) ctrlEnable false;
		(_dialog displayCtrl 47412) ctrlShow false;
		(_dialog displayCtrl 47412) ctrlEnable false;
		(_dialog displayCtrl 47413) ctrlShow false;
		(_dialog displayCtrl 47413) ctrlEnable false;
		(_dialog displayCtrl 47414) ctrlShow false;
		(_dialog displayCtrl 47414) ctrlEnable false;
		(_dialog displayCtrl 47415) ctrlShow false;
		(_dialog displayCtrl 47415) ctrlEnable false;
		(_dialog displayCtrl 47416) ctrlShow false;
		(_dialog displayCtrl 47416) ctrlEnable false;
		
		(_dialog displayCtrl 47407) ctrlShow false;
		(_dialog displayCtrl 47407) ctrlEnable false;
		(_dialog displayCtrl 47408) ctrlShow false;
		(_dialog displayCtrl 47408) ctrlEnable false;
		(_dialog displayCtrl 47409) ctrlShow false;
		(_dialog displayCtrl 47409) ctrlEnable false;
		(_dialog displayCtrl 47418) ctrlShow false;
		(_dialog displayCtrl 47418) ctrlEnable false;
		(_dialog displayCtrl 47417) ctrlShow false;
		(_dialog displayCtrl 47417) ctrlEnable false;
	};
};