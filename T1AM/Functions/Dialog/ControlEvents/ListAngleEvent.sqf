params ["_control", "_selectedIndex"];

private _angle = _control lbData _selectedIndex;

T1AM_LastAngle = _angle;

// CEP
private _cep = "";
switch true do {
	case (T1AM_LastWarhead in T1AM_GPSLaserTypes or {T1AM_LastWarhead in T1AM_GPSSeekerTypes}) : {
		_cep = "3 m (GPS)";
	};
	
	case (T1AM_LastWarhead in T1AM_GPSGuidedTypes) : {
		_cep = "5 m (GPS)";
	};
	
	default {
		switch (_angle) do {
			case ("HIGH") : {
				_cep = format ["%1 m", T1AM_scatterSpreadHigh];
			};
			case ("LOW") : {
				_cep = format ["%1 m", T1AM_scatterSpreadLow];
			};
		};
		if (T1AM_LastWarhead in T1AM_LaserTypes) then {
			_cep = _cep + " | 5 m (LASER)";
		};
	};
};

((findDisplay 47200) displayCtrl 47220) ctrlSetText _cep;