// Mode 0 = X
// Mode 1 = Y
// Mode 2 = Z

params ["_displayorcontrol", "_key", "_shift", "_ctrl", "_alt", "_mode"];

//DIAG_LOG format ["EDIT ADJUST GPS EVENT START | _this: %1", _this];

private _nr = ctrlText _displayorcontrol;
if (_nr == "") exitWith {};

//DIAG_LOG format ["EDIT ADJUST GPS EVENT 1 | _nr: %1", _nr];

if (_mode == 0 or _mode == 1) then {
	_nr = [_nr] call T1AM_Fnc_GridToPos;
	_nr = [_nr, 5, true] call T1AM_Fnc_ParseNumber;
} else {
	_nr = [_nr, 0, false] call T1AM_Fnc_ParseNumber;
};

//DIAG_LOG "EDIT ADJUST GPS EVENT 2";

if (_nr == -9999999) exitWith {
	private _str = "";
	switch (_mode) do {
		case (0) : {
			_displayorcontrol ctrlSetText (str T1AM_LastGPSX);
			_str = "INVALID INPUT:\nGPS X COORDINATE\n\nUSE NUMBERS ONLY. MAX 5 NUMBERS ALLOWED";
		};
		case (1) : {
			_displayorcontrol ctrlSetText (str T1AM_LastGPSY);
			_str = "INVALID INPUT:\nGPS Y COORDINATE\n\nUSE NUMBERS ONLY. MAX 5 NUMBERS ALLOWED";
		};
		case (2) : {
			_displayorcontrol ctrlSetText (str T1AM_LastGPSZ_AGL);
			_str = "INVALID INPUT:\nGPS Z COORDINATE\n\nUSE NUMBERS ONLY";
		};
	};
	[0, _str, 5] spawn T1AM_Fnc_ShowMessage;
};

//DIAG_LOG format ["EDIT ADJUST GPS EVENT 3 | _nr: %1", _nr];


switch (_mode) do {
	case (0) : {
		_nr = [_nr] call T1AM_Fnc_FormatCoordinates;
		private _pos = [[_nr, str T1AM_LastGPSY]] call T1AM_Fnc_MapGridToPos;
		T1AM_LastGPSX = _pos select 0;
	};
	case (1) : {
		_nr = [_nr] call T1AM_Fnc_FormatCoordinates;
		private _pos = [[str T1AM_LastGPSX, _nr]] call T1AM_Fnc_MapGridToPos;
		T1AM_LastGPSY = _pos select 1;
	};
	case (2) : {
		T1AM_LastGPSZ_AGL = _nr;
	};
};

//DIAG_LOG format ["EDIT ADJUST GPS EVENT 4 | T1AM_LastGPSX: %1 | T1AM_LastGPSY: %2 | T1AM_LastGPSZ_AGL: %3", T1AM_LastGPSX, T1AM_LastGPSY, T1AM_LastGPSZ_AGL];

private _posGPS = AGLtoASL [T1AM_LastGPSX,T1AM_LastGPSY,T1AM_LastGPSZ_AGL];
T1AM_ControlledAssetLocal setVariable ["T1AM_exactPos", _posGPS];



private _GPSGuidedTypes = T1AM_LastWarhead in T1AM_GPSGuidedTypes;
private _GPSLaserTypes = T1AM_LastWarhead in T1AM_GPSLaserTypes;
private _GPSSeekerTypes = T1AM_LastWarhead in T1AM_GPSSeekerTypes;
private _LaserTypes = T1AM_LastWarhead in T1AM_LaserTypes;

// Update distance.
if (_GPSGuidedTypes or _GPSLaserTypes or _GPSSeekerTypes) then {
	private _distance = round ((getPosASL (vehicle (leader T1AM_ControlledAssetLocal))) vectorDistance _posGPS);
	((findDisplay 47200) displayCtrl 47216) ctrlSetText format ["%1 m (GPS)", _distance];
};

//DIAG_LOG "EDIT ADJUST GPS EVENT 5";

// Update CEP
private _cep = "";
switch true do {
	case (_GPSLaserTypes or _GPSSeekerTypes) : {
		_cep = "3 m (GPS)";
	};
	
	case (_GPSGuidedTypes) : {
		_cep = "5 m (GPS)";
	};
};

((findDisplay 47200) displayCtrl 47220) ctrlSetText _cep;

//DIAG_LOG "EDIT ADJUST GPS EVENT END";