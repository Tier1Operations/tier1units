params ["_control", "_selectedIndex"];

private _dialog = findDisplay 47200;
private _mag = _control lbData _selectedIndex;

DIAG_LOG format ["LIST WARHEAD TYPE EVENT START | _selectedIndex: %1 | _mag: %2", _selectedIndex, _mag];

T1AM_LastWarhead = _mag;

private _GPSLaserTypes = _mag in T1AM_GPSLaserTypes;
private _GPSSeekerTypes = _mag in T1AM_GPSSeekerTypes;
private _GPSGuidedTypes = _mag in T1AM_GPSGuidedTypes;
private _LaserTypes = _mag in T1AM_LaserTypes;

switch true do {
	case (_GPSLaserTypes or _GPSSeekerTypes or _GPSGuidedTypes) : {
		
		// GPS pos
		(_dialog displayCtrl 47226) ctrlShow true;
		(_dialog displayCtrl 47226) ctrlEnable true;
		(_dialog displayCtrl 47227) ctrlShow true;
		(_dialog displayCtrl 47227) ctrlEnable true;
		(_dialog displayCtrl 47228) ctrlShow true;
		(_dialog displayCtrl 47228) ctrlEnable true;
		(_dialog displayCtrl 47232) ctrlShow true;
		(_dialog displayCtrl 47232) ctrlEnable true;
		
		(_dialog displayCtrl 47222) ctrlShow true;
		(_dialog displayCtrl 47222) ctrlEnable true;
		(_dialog displayCtrl 47223) ctrlShow true;
		(_dialog displayCtrl 47223) ctrlEnable true;
		(_dialog displayCtrl 47221) ctrlShow true;
		(_dialog displayCtrl 47221) ctrlEnable true;
		
		
		
		// Adjust
		(_dialog displayCtrl 47229) ctrlShow false;
		(_dialog displayCtrl 47229) ctrlEnable false;
		(_dialog displayCtrl 47230) ctrlShow false;
		(_dialog displayCtrl 47230) ctrlEnable false;
		(_dialog displayCtrl 47231) ctrlShow false;
		(_dialog displayCtrl 47231) ctrlEnable false;
		(_dialog displayCtrl 47238) ctrlShow false;
		(_dialog displayCtrl 47238) ctrlEnable false;
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
		(_dialog displayCtrl 47237) ctrlShow false;
		(_dialog displayCtrl 47237) ctrlEnable false;
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
		
		// GPS pos
		(_dialog displayCtrl 47226) ctrlShow false;
		(_dialog displayCtrl 47226) ctrlEnable false;
		(_dialog displayCtrl 47227) ctrlShow false;
		(_dialog displayCtrl 47227) ctrlEnable false;
		(_dialog displayCtrl 47228) ctrlShow false;
		(_dialog displayCtrl 47228) ctrlEnable false;
		(_dialog displayCtrl 47232) ctrlShow false;
		(_dialog displayCtrl 47232) ctrlEnable false;
		
		(_dialog displayCtrl 47222) ctrlShow false;
		(_dialog displayCtrl 47222) ctrlEnable false;
		(_dialog displayCtrl 47223) ctrlShow false;
		(_dialog displayCtrl 47223) ctrlEnable false;
		(_dialog displayCtrl 47221) ctrlShow false;
		(_dialog displayCtrl 47221) ctrlEnable false;
		
		
		
		// Adjust
		(_dialog displayCtrl 47229) ctrlShow true;
		(_dialog displayCtrl 47229) ctrlEnable true;
		
		(_dialog displayCtrl 47237) ctrlShow true;
		(_dialog displayCtrl 47237) ctrlEnable true;
		
		[_dialog displayCtrl 47237, T1AM_LastAdjustCheckbox] spawn T1AM_Fnc_EditAdjustCheckboxEvent;
		
		
		
		// Sheaf
		[(_dialog displayCtrl 47208), lbCurSel (_dialog displayCtrl 47208)] spawn T1AM_Fnc_ListMissionTypeEvent;
	};
};



// Update CEP
private _cep = "";
switch true do {
	case (_GPSLaserTypes or _GPSSeekerTypes) : {
		_cep = "3 m (GPS)";
	};
	
	case (_GPSGuidedTypes) : {
		_cep = "5 m (GPS)";
	};
	
	default {
		switch (T1AM_LastAngle) do {
			case ("HIGH") : {
				_cep = format ["%1 m", T1AM_scatterSpreadHigh];
			};
			case ("LOW") : {
				_cep = format ["%1 m", T1AM_scatterSpreadLow];
			};
		};
		if (_LaserTypes) then {
			_cep = _cep + " | 5 m (LASER)";
		};
	};
};

(_dialog displayCtrl 47220) ctrlSetText _cep;


// Update fuse / airburst height.
private _fuseTypes = ["IMPACT"];
if (_mag in T1AM_AirburstRounds) then {
	_fuseTypes = ["IMPACT","AIRBURST","MIXED"];
};
private _curFuse = T1AM_LastFuse;
private _curAirburstHeight = T1AM_LastAirburstHeight;

_control = _dialog displayCtrl 47212;
lbClear _control;

private _lastFuseIndex = 0;
private _count = 0;
{
	private _fuseType = _x;
	_control lbAdd format["%1",_fuseType];
	_control lbSetData [(lbSize _control)-1,_fuseType];
	if (_fuseType == _curFuse) then {_lastFuseIndex = _count};
	_count = _count + 1;
} forEach _fuseTypes;
_control lbSetCurSel _lastFuseIndex;

_control = _dialog displayCtrl 47215;
for [{_i = 0}, {_i < (lbSize _control)-1}, {_i = _i + 1}] do {
	if (_control lbData _i == _curAirburstHeight) exitWith {
		_control lbSetCurSel _i;
	};
};



// Update distance.
if (_GPSGuidedTypes or _GPSLaserTypes or _GPSSeekerTypes) then {
	// GPS.
	private _posGPS = T1AM_ControlledAssetLocal getVariable ["T1AM_exactPos", [0,0,0]];
	if (_posGPS isEqualTo [0,0,0]) then {_posGPS = [T1AM_Xdisplay,T1AM_Ydisplay,T1AM_Elevation]};
	private _distance = round ((getPosASL (vehicle (leader T1AM_ControlledAssetLocal))) vectorDistance _posGPS);
	(_dialog displayCtrl 47216) ctrlSetText format ["%1 m (GPS)", _distance];
	
} else {
	
	// Non-GPS.
	private _elev = ((AGLtoASL [T1AM_Xdisplay,T1AM_Ydisplay,0]) select 2) max 0;
	private _pos = [T1AM_Xdisplay, T1AM_Ydisplay, _elev];
	private _distance = round ((getPosASL (vehicle (leader T1AM_ControlledAssetLocal))) vectorDistance _pos);
	(_dialog displayCtrl 47216) ctrlSetText format ["%1 m", _distance];
};

DIAG_LOG format ["LIST WARHEAD TYPE EVENT END | _selectedIndex: %1 | _mag: %2", _selectedIndex, _mag];