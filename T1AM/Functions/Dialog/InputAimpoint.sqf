disableSerialization;

params ["_manualInput","_pos"];

private _x = 0;
private _y = 0;
private _abort = false;

if (_manualInput) then {
	
	// Process coordinates received from the player.
	private _dialog = findDisplay 47400;
	
	// X coordinate
	private _str = ctrlText (_dialog displayCtrl 47402);
	_str = [_str] call T1AM_Fnc_GridToPos;
	_x = [_str, 5] call T1AM_Fnc_ParseNumber;
	if (_x == -9999999) exitWith {
		private _str = "Invalid X coordinate.\n\nUse numbers only. Max 5 numbers allowed.";
		[0, _str, 5] spawn T1AM_Fnc_ShowMessage;
		_abort = true;
	};
	
	if (_abort) exitWith {};
	
	// Y coordinate
	_str = ctrlText (_dialog displayCtrl 47403);
	_str = [_str] call T1AM_Fnc_GridToPos;
	_y = [_str, 5] call T1AM_Fnc_ParseNumber;
	if (_y == -9999999) exitWith {
		private _str = "Invalid Y coordinate.\n\nUse numbers only. Max 5 numbers allowed.";
		[0, _str, 5] spawn T1AM_Fnc_ShowMessage;
		_abort = true;
	};
	
	if (_abort) exitWith {};
	
	_x = [_x] call T1AM_Fnc_FormatCoordinates;
	_y = [_y] call T1AM_Fnc_FormatCoordinates;
	private _posReal = [[_x, _y]] call T1AM_Fnc_MapGridToPos;
	_x = _posReal select 0;
	_y = _posReal select 1;
	
	T1AM_Elevation = ((AGLtoASL [_x,_y,0]) select 2) max 0;
	
	//DIAG_LOG format["AIMPOINT MANUAL -- _x: %1", _x];
	//DIAG_LOG format["AIMPOINT MANUAL -- _y: %1", _y];
	//DIAG_LOG format["AIMPOINT MANUAL -- T1AM_Elevation: %1", T1AM_Elevation];
	
} else {
	
	// Processes the coordinates received from the mapclick.
	
	[_pos] spawn T1AM_Fnc_InputAimpointMapclickEffect;
	
	_x = _pos select 0;
	_y = _pos select 1;
	
	T1AM_Elevation = ((AGLtoASL [_x,_y,0]) select 2) max 0;
	
	//DIAG_LOG format["AIMPOINT MAPCLICK -- _x: %1", _x];
	//DIAG_LOG format["AIMPOINT MAPCLICK -- _y: %1", _y];
	//DIAG_LOG format["AIMPOINT MAPCLICK -- T1AM_Elevation: %1", T1AM_Elevation];
};

if (_abort) exitWith {};

T1AM_X = _x;
T1AM_Y = _y;

T1AM_Xdisplay = T1AM_X;
T1AM_Ydisplay = T1AM_Y;

T1AM_ControlledAssetLocal setVariable ["T1AM_exactPos", [T1AM_X, T1AM_Y, T1AM_Elevation], true];

// Add some initial error to the target pos to simulate natural errors
_pos = [T1AM_X,T1AM_Y,T1AM_Elevation];
private _vehicle = vehicle leader T1AM_SelectedAsset;
private _distance = (getPosASL _vehicle) vectorDistance _pos;

//DIAG_LOG format["AIMPOINT MANUAL -- POS BEFORE RANDOM: %1", [T1AM_X,T1AM_Y,T1AM_Elevation]];

private _initialMiss = true;
if (_distance <= 750) then {_initialMiss = false};
if (T1AM_DEBUG_DisableInitialMiss) then {_initialMiss = false};

if (_initialMiss) then {
	private _errorSize = 0;
	switch true do {
		case (_distance < 1000) : {_errorSize = 10 + (random 25)};
		case (_distance < 2000) : {_errorSize = 20 + (random 75)};
		case (_distance < 3000) : {_errorSize = 30 + (random 125)};
		case (_distance < 4000) : {_errorSize = 40 + (random 175)};
		case (_distance < 5000) : {_errorSize = 50 + (random 200)};
		case (_distance < 6000) : {_errorSize = 60 + (random 210)};
		case (_distance < 7000) : {_errorSize = 70 + (random 220)};
		case (_distance < 8000) : {_errorSize = 80 + (random 230)};
		case (_distance < 9000) : {_errorSize = 90 + (random 240)};
		case (_distance < 10000) : {_errorSize = 100 + (random 250)};
		case (_distance < 11000) : {_errorSize = 110 + (random 260)};
		case (_distance < 12000) : {_errorSize = 120 + (random 270)};
		case (_distance < 13000) : {_errorSize = 130 + (random 280)};
		case (_distance < 14000) : {_errorSize = 140 + (random 290)};
		case (_distance < 15000) : {_errorSize = 150 + (random 300)};
		case (_distance < 16000) : {_errorSize = 160 + (random 310)};
		case (_distance < 17000) : {_errorSize = 170 + (random 320)};
		case (_distance < 18000) : {_errorSize = 180 + (random 330)};
		case (_distance < 19000) : {_errorSize = 190 + (random 340)};
		case (_distance < 20000) : {_errorSize = 200 + (random 350)};
		default {_errorSize = 210 + (random 360)};
	};
	
	// Increase chance of miss along the gun target line. Small chance to be a completely random miss.
	_pos = [T1AM_X,T1AM_Y,0];
	private _errorPos = [];
	switch (random floor 7) do {
		case (0) : {
			private _dir = _pos getDir _vehicle;
			_pos = _pos getPos [_errorSize*0.33, _dir];
			_errorPos = _pos getPos [_errorSize*0.5, random 360];
		};
		case (1) : {
			private _dir = _pos getDir _vehicle;
			_pos = _pos getPos [_errorSize*0.66, _dir];
			_errorPos = _pos getPos [_errorSize*0.5, random 360];
		};
		case (2) : {
			private _dir = _pos getDir _vehicle;
			_pos = _pos getPos [_errorSize, _dir];
			_errorPos = _pos getPos [_errorSize*0.5, random 360];
		};
		
		case (3) : {
			private _dir = _vehicle getDir _pos;
			_pos = _pos getPos [_errorSize*0.33, _dir];
			_errorPos = _pos getPos [_errorSize*0.5, random 360];
		};
		case (4) : {
			private _dir = _vehicle getDir _pos;
			_pos = _pos getPos [_errorSize*0.66, _dir];
			_errorPos = _pos getPos [_errorSize*0.5, random 360];
		};
		case (5) : {
			private _dir = _vehicle getDir _pos;
			_pos = _pos getPos [_errorSize, _dir];
			_errorPos = _pos getPos [_errorSize*0.5, random 360];
		};
		
		default {
			// Choose a completely random location.
			_errorPos = [objNull, objNull, _pos, _errorSize] call T1AM_Fnc_CircularSheaf;
		};
	};
	
	T1AM_X = _errorPos select 0;
	T1AM_Y = _errorPos select 1;
	
	//DIAG_LOG format["AIMPOINT MANUAL -- POS AFTER RANDOM: %1", [T1AM_X,T1AM_Y,T1AM_Elevation]];
};

T1AM_HaveAimpoint = true;
[false] call T1AM_Fnc_ControlAsset;