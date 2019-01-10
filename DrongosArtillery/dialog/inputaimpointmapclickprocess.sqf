// Called from DCE\Scripts\Command\.sqf
// Processes a map click for selecting units, issuing move orders or showing the dialog

_pos = _this select 0;

nul = [_pos] execVM "DrongosArtillery\Dialog\InputAimpointMapclickEffect.sqf";

_x = 0;
_y = 0;

_x = _pos select 0;
_y = _pos select 1;

dtaElevation = ((AGLtoASL [_x,_y,0]) select 2) max 0;

//diag_log format["AIMPOINT MAPCLICK -- _x: %1", _x];
//diag_log format["AIMPOINT MAPCLICK -- _y: %1", _y];
//diag_log format["AIMPOINT MAPCLICK -- dtaElevation: %1", dtaElevation];

dtaX = _x;
dtaY = _y;

dtaControlledAssetLocal setVariable ["DTA_exactPos", [dtaX, dtaY, dtaElevation], true];

//if (dtaX > 99999 or {dtaX < -99999}) exitWith {hint "ERROR: X must be between 0 and 99999"};
//if (dtaY > 99999 or {dtaY < -99999}) exitWith {hint "ERROR: Y must be between 0 and 99999"};


dtaXdisplay = dtaX;
dtaYdisplay = dtaY;

// Add some initial error to the target pos to simulate natural errors
_distance = 0;
_vx = 0;
_vy = 0;
_dx = 0;
_dy = 0;
_vx = getPosASL (vehicle leader dtaSelectedAsset) select 0;
_vy = getPosASL (vehicle leader dtaSelectedAsset) select 1;
_dx = dtaX - _vx;
_dy = dtaY - _vy;
_distance = sqrt((_dx*_dx)+(_dy*_dy));

_errorSize = 25;
_pos = [dtaX,dtaY,dtaElevation];
_errorPos = [];

//diag_log format["AIMPOINT MAPCLICK -- POS BEFORE RANDOM: %1", [dtaX,dtaY,dtaElevation]];

_initialError = true;
if (_distance <= 750) then {_initialError = false};
if (dtaNoInitialInaccuracy) then {_initialError = false};
if (_initialError) then {
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
	
	_errorPos = [objNull,objNull,_pos,_errorSize] call dta_fnc_CircularSheaf;
	sleep 0.1;
	dtaX = _errorPos select 0;
	dtaY = _errorPos select 1;
	dtaX = dtaX;
	dtaY = dtaY;
	
	//diag_log format["AIMPOINT MAPCLICK -- POS AFTER RANDOM: %1", [dtaX,dtaY,dtaElevation]];
	
	// For debug purposes. If enabled, turn off random misses.
	if (DTA_turnOffMiss) then {
		dtaX = _pos select 0;
		dtaY = _pos select 1;
		//diag_log format["AIMPOINT MAPCLICK -- TURN OFF MISS POS: %1", [dtaX,dtaY,dtaElevation]];
	};
};

dtaHaveAimpoint = true;
_prePlotted = false;
nul = [_prePlotted] execVM "DrongosArtillery\Dialog\ControlAsset.sqf";