params ["_control", "_selectedIndex"];

private _dialog = findDisplay 47200;

T1AM_LastAdjustCheckbox = _selectedIndex;

switch (_selectedIndex) do {
	case (0) : {
		(_dialog displayCtrl 47238) ctrlShow false;
		(_dialog displayCtrl 47238) ctrlEnable false;
		(_dialog displayCtrl 47230) ctrlShow false;
		(_dialog displayCtrl 47230) ctrlEnable false;
		(_dialog displayCtrl 47231) ctrlShow false;
		(_dialog displayCtrl 47231) ctrlEnable false;
		(_dialog displayCtrl 47241) ctrlShow false;
		(_dialog displayCtrl 47241) ctrlEnable false;
		(_dialog displayCtrl 47242) ctrlShow false;
		(_dialog displayCtrl 47242) ctrlEnable false;
		(_dialog displayCtrl 47243) ctrlShow false;
		(_dialog displayCtrl 47243) ctrlEnable false;
		(_dialog displayCtrl 47247) ctrlShow false;
		(_dialog displayCtrl 47247) ctrlEnable false;
		(_dialog displayCtrl 47248) ctrlShow false;
		(_dialog displayCtrl 47248) ctrlEnable false;
		(_dialog displayCtrl 47249) ctrlShow false;
		(_dialog displayCtrl 47249) ctrlEnable false;
		(_dialog displayCtrl 47257) ctrlShow false;
		(_dialog displayCtrl 47257) ctrlEnable false;
		(_dialog displayCtrl 47258) ctrlShow false;
		(_dialog displayCtrl 47258) ctrlEnable false;
		(_dialog displayCtrl 47259) ctrlShow false;
		(_dialog displayCtrl 47259) ctrlEnable false;
		
		(_dialog displayCtrl 47204) ctrlShow false;
		(_dialog displayCtrl 47204) ctrlEnable false;
		(_dialog displayCtrl 47205) ctrlShow false;
		(_dialog displayCtrl 47205) ctrlEnable false;
		(_dialog displayCtrl 47239) ctrlShow false;
		(_dialog displayCtrl 47239) ctrlEnable false;
		(_dialog displayCtrl 47240) ctrlShow false;
		(_dialog displayCtrl 47240) ctrlEnable false;
		(_dialog displayCtrl 47244) ctrlShow false;
		(_dialog displayCtrl 47244) ctrlEnable false;
		(_dialog displayCtrl 47245) ctrlShow false;
		(_dialog displayCtrl 47245) ctrlEnable false;
		(_dialog displayCtrl 47246) ctrlShow false;
		(_dialog displayCtrl 47246) ctrlEnable false;
		(_dialog displayCtrl 47250) ctrlShow false;
		(_dialog displayCtrl 47250) ctrlEnable false;
		(_dialog displayCtrl 47254) ctrlShow false;
		(_dialog displayCtrl 47254) ctrlEnable false;
		(_dialog displayCtrl 47255) ctrlShow false;
		(_dialog displayCtrl 47255) ctrlEnable false;
		(_dialog displayCtrl 47256) ctrlShow false;
		(_dialog displayCtrl 47256) ctrlEnable false;
	};
	case (1) : {
		(_dialog displayCtrl 47247) ctrlShow false;
		(_dialog displayCtrl 47247) ctrlEnable false;
		(_dialog displayCtrl 47248) ctrlShow false;
		(_dialog displayCtrl 47248) ctrlEnable false;
		(_dialog displayCtrl 47249) ctrlShow false;
		(_dialog displayCtrl 47249) ctrlEnable false;
		(_dialog displayCtrl 47257) ctrlShow false;
		(_dialog displayCtrl 47257) ctrlEnable false;
		(_dialog displayCtrl 47258) ctrlShow false;
		(_dialog displayCtrl 47258) ctrlEnable false;
		(_dialog displayCtrl 47259) ctrlShow false;
		(_dialog displayCtrl 47259) ctrlEnable false;
		
		(_dialog displayCtrl 47245) ctrlShow false;
		(_dialog displayCtrl 47245) ctrlEnable false;
		(_dialog displayCtrl 47246) ctrlShow false;
		(_dialog displayCtrl 47246) ctrlEnable false;
		(_dialog displayCtrl 47250) ctrlShow false;
		(_dialog displayCtrl 47250) ctrlEnable false;
		(_dialog displayCtrl 47254) ctrlShow false;
		(_dialog displayCtrl 47254) ctrlEnable false;
		(_dialog displayCtrl 47255) ctrlShow false;
		(_dialog displayCtrl 47255) ctrlEnable false;
		(_dialog displayCtrl 47256) ctrlShow false;
		(_dialog displayCtrl 47256) ctrlEnable false;
		
		
		
		(_dialog displayCtrl 47238) ctrlShow true;
		(_dialog displayCtrl 47238) ctrlEnable true;
		(_dialog displayCtrl 47230) ctrlShow true;
		(_dialog displayCtrl 47230) ctrlEnable true;
		(_dialog displayCtrl 47231) ctrlShow true;
		(_dialog displayCtrl 47231) ctrlEnable true;
		(_dialog displayCtrl 47241) ctrlShow true;
		(_dialog displayCtrl 47241) ctrlEnable true;
		(_dialog displayCtrl 47242) ctrlShow true;
		(_dialog displayCtrl 47242) ctrlEnable true;
		(_dialog displayCtrl 47243) ctrlShow true;
		(_dialog displayCtrl 47243) ctrlEnable true;
		
		(_dialog displayCtrl 47204) ctrlShow true;
		(_dialog displayCtrl 47204) ctrlEnable true;
		(_dialog displayCtrl 47205) ctrlShow true;
		(_dialog displayCtrl 47205) ctrlEnable true;
		(_dialog displayCtrl 47239) ctrlShow true;
		(_dialog displayCtrl 47239) ctrlEnable true;
		(_dialog displayCtrl 47240) ctrlShow true;
		(_dialog displayCtrl 47240) ctrlEnable true;
		if (T1AM_AllowMapClick) then {
			(_dialog displayCtrl 47244) ctrlShow true;
			(_dialog displayCtrl 47244) ctrlEnable true;
		};
	};
	
	case (2) : {
		(_dialog displayCtrl 47238) ctrlShow false;
		(_dialog displayCtrl 47238) ctrlEnable false;
		(_dialog displayCtrl 47230) ctrlShow false;
		(_dialog displayCtrl 47230) ctrlEnable false;
		(_dialog displayCtrl 47231) ctrlShow false;
		(_dialog displayCtrl 47231) ctrlEnable false;
		(_dialog displayCtrl 47241) ctrlShow false;
		(_dialog displayCtrl 47241) ctrlEnable false;
		(_dialog displayCtrl 47242) ctrlShow false;
		(_dialog displayCtrl 47242) ctrlEnable false;
		(_dialog displayCtrl 47243) ctrlShow false;
		(_dialog displayCtrl 47243) ctrlEnable false;
		
		(_dialog displayCtrl 47204) ctrlShow false;
		(_dialog displayCtrl 47204) ctrlEnable false;
		(_dialog displayCtrl 47205) ctrlShow false;
		(_dialog displayCtrl 47205) ctrlEnable false;
		(_dialog displayCtrl 47239) ctrlShow false;
		(_dialog displayCtrl 47239) ctrlEnable false;
		(_dialog displayCtrl 47240) ctrlShow false;
		(_dialog displayCtrl 47240) ctrlEnable false;
		(_dialog displayCtrl 47244) ctrlShow false;
		(_dialog displayCtrl 47244) ctrlEnable false;
		
		
		
		(_dialog displayCtrl 47247) ctrlShow true;
		(_dialog displayCtrl 47247) ctrlEnable true;
		(_dialog displayCtrl 47248) ctrlShow true;
		(_dialog displayCtrl 47248) ctrlEnable true;
		(_dialog displayCtrl 47249) ctrlShow true;
		(_dialog displayCtrl 47249) ctrlEnable true;
		(_dialog displayCtrl 47257) ctrlShow true;
		(_dialog displayCtrl 47257) ctrlEnable true;
		(_dialog displayCtrl 47258) ctrlShow true;
		(_dialog displayCtrl 47258) ctrlEnable true;
		(_dialog displayCtrl 47259) ctrlShow true;
		(_dialog displayCtrl 47259) ctrlEnable true;
		
		(_dialog displayCtrl 47245) ctrlShow true;
		(_dialog displayCtrl 47245) ctrlEnable true;
		(_dialog displayCtrl 47246) ctrlShow true;
		(_dialog displayCtrl 47246) ctrlEnable true;
		if (T1AM_AllowMapClick) then {
			(_dialog displayCtrl 47250) ctrlShow true;
			(_dialog displayCtrl 47250) ctrlEnable true;
		};
		(_dialog displayCtrl 47254) ctrlShow true;
		(_dialog displayCtrl 47254) ctrlEnable true;
		(_dialog displayCtrl 47255) ctrlShow true;
		(_dialog displayCtrl 47255) ctrlEnable true;
		if (T1AM_AllowMapClick) then {
			(_dialog displayCtrl 47256) ctrlShow true;
			(_dialog displayCtrl 47256) ctrlEnable true;
		};
	};
};