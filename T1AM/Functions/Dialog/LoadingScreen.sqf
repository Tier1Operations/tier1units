#include "\T1AM\Defines.hpp"

disableSerialization;

if (!T1AM_ModEnabled) exitWith {};
if (!T1AM_Ready) exitWith {hint "Artillery Mod still loading, try again in a moment..."};
if (time < 4) exitWith {};
if (!alive player or player getVariable ["ACE_isUnconscious", false]) exitWith {};

params ["_minWaitTime", "_params", "_mode"];

onMapSingleClick "";

// Minimum time is required to allow all scripts to exit and reset properly.
if (_minWaitTime < 0.5) then {_minWaitTime = 0.5};

(findDisplay 47100) closeDisplay 0;
(findDisplay 47200) closeDisplay 0;
(findDisplay 47300) closeDisplay 0;
(findDisplay 47400) closeDisplay 0;
(findDisplay 47500) closeDisplay 0;
if (isNull (findDisplay 47050)) then {
	private _timeout = time + 3;
	while {dialog and time < _timeout} do {closeDialog 0};
	createDialog "T1AM_DialogMain";
};
(findDisplay 47050) createDisplay "T1AM_DialogLoading";

hint "";
private _dialog = findDisplay 47300;
private _control = _dialog displayCtrl 47301;

if (_mode == 0) then {
	playSound "T1AM_Sounds_Load1";
} else {
	playSound "T1AM_Sounds_Load3";
};


private _waitTime = time + ((random[0.5,1,5]) max _minWaitTime);
private _i = 0;
private _str = "";
private _runFunc = true;

while {!isNull (findDisplay 47300)} do {
	switch (_mode) do {
		case (0) : {
			switch (_i) do {
				case (1) : {_str = "LOADING."};
				case (2) : {_str = "LOADING.."};
				case (3) : {_str = "LOADING..."};
				default {_str = "LOADING"};
			};
		};
		case (1) : {
			switch (_i) do {
				case (1) : {_str = "TRANSMITTING."};
				case (2) : {_str = "TRANSMITTING.."};
				case (3) : {_str = "TRANSMITTING..."};
				default {_str = "TRANSMITTING"};
			};
		};
		case (2) : {
			switch (_i) do {
				case (1) : {_str = "ENDING MISSION."};
				case (2) : {_str = "ENDING MISSION.."};
				case (3) : {_str = "ENDING MISSION..."};
				default {_str = "ENDING MISSION"};
			};
		};
		case (3) : {
			switch (_i) do {
				case (1) : {_str = "RELEASING ASSET."};
				case (2) : {_str = "RELEASING ASSET.."};
				case (3) : {_str = "RELEASING ASSET..."};
				default {_str = "RELEASING ASSET"};
			};
		};
		case (4) : {
			switch (_i) do {
				case (1) : {_str = "CHECKING FIRE."};
				case (2) : {_str = "CHECKING FIRE.."};
				case (3) : {_str = "CHECKING FIRE..."};
				default {_str = "CHECKING FIRE"};
			};
		};
	};
	
	_control ctrlSetText _str;
	_i = _i + 1;
	if (_i > 3) then {_i = 0};
	if (_runFunc and {time > _waitTime}) then {
		[_params] spawn T1AM_Fnc_OpenDisplay;
		_runFunc = false;
	};
	sleep 0.3;
};