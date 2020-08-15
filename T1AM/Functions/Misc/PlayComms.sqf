#include "\T1AM\Defines.hpp"

if (!hasInterface) exitWith {};

params ["_asset","_messageCode","_audio"];

DEBUGLOG format["COMMSPLAY - _asset: %1", _asset];
DEBUGLOG format["COMMSPLAY - _messageCode: %1", _messageCode];
DEBUGLOG format["COMMSPLAY - _audio: %1", _audio];

private _side = (side (leader _asset));
if (_side != (side player)) exitWith {
	DEBUGLOG format["COMMSPLAY - EXITING BECAUSE SIDE - _side: %1 - side player: %2", _side, side player];
};

// Check if the player has a radio
if (!(call T1AM_Fnc_HasRadio)) exitWith {
	DEBUGLOG format["COMMSPLAY - EXITING BECAUSE RADIO - hasRadio: %1", call T1AM_Fnc_HasRadio];
};

// Which set of audio files should be used?
private _soundFile = "";

if (_audio == "BEEP") then {
	_soundFile = "T1AM_Beep";
} else {
	
	private _audioSet = "";
	switch (_side) do {
		case (West) : {_audioSet = T1AM_AudioBLUFOR};
		case (East) : {_audioSet = T1AM_AudioREDFOR};
		case (Resistance) : {_audioSet = T1AM_AudioINDEP};
	};
	
	switch (_audioSet) do {
		case ("US") : {
			switch (_audio) do {
				case ("ADJUSTFIRE") : {_soundFile = "T1AM_AdjustFireUS"};
				case ("MTO") : {_soundFile = "T1AM_MTOUS"};
				case ("SHOT") : {_soundFile = "T1AM_ShotUS"};
				case ("SPLASH") : {_soundFile = "T1AM_SplashUS"};
				case ("ENDOFMISSION") : {_soundFile = "T1AM_EndOfMissionUS"};
				default {_soundFile = "T1AM_Beep"};
			};
		};

		case ("PER") : {
			switch (_audio) do {
				case ("NEGATIVE") : {_soundFile = "T1AM_NegativePER"};
				case ("FIREMISSIONREADY") : {_soundFile = "T1AM_FireMissionReadyPER"};
				case ("ADJUSTFIRE") : {_soundFile = "T1AM_AdjustFirePER"};
				case ("MTO") : {_soundFile = "T1AM_MTOPER"};
				case ("SHOT") : {_soundFile = "T1AM_ShotPER"};
				case ("SPLASH") : {_soundFile = "T1AM_SplashPER"};
				case ("ENDOFMISSION") : {_soundFile = "T1AM_EndOfMissionPER"};
				default {_soundFile = "T1AM_Beep"};
			};
		};

		case ("GRE") : {
			switch (_audio) do {
				case ("NEGATIVE") : {_soundFile = "T1AM_NegativeGRE"};
				case ("FIREMISSIONREADY") : {_soundFile = "T1AM_FireMissionReadyGRE"};
				case ("ADJUSTFIRE") : {_soundFile = "T1AM_AdjustFireGRE"};
				case ("MTO") : {_soundFile = "T1AM_MTOGRE"};
				case ("SHOT") : {_soundFile = "T1AM_ShotGRE"};
				case ("SPLASH") : {_soundFile = "T1AM_SplashGRE"};
				case ("ROUNDSCOMPLETE") : {_soundFile = "T1AM_RoundsCompleteGRE"};
				default {_soundFile = "T1AM_Beep"};
			};
		};
	};
};

DEBUGLOG format["COMMSPLAY - _soundFile: %1", _soundFile];

if (_asset isEqualType objNull) then {
	DEBUGLOG format["COMMSPLAY - ASSET IS OBJECT - _asset: %1", _asset];
	
	if (!isPlayer (effectiveCommander _asset)) then {
		private _nr = 1;
		
		{
			if (_asset == _x) exitWith {};
			_nr = _nr + 1;
		} forEach ([group _asset] call T1AM_Fnc_GroupVehicles);
		
		DEBUGLOG format["COMMSPLAY - ASSET IS AI - ORIG MESSAGE: %1", _messageCode];
		_messageCode = format["UNIT %1: ", _nr] + _messageCode;
		DEBUGLOG format["COMMSPLAY - ASSET IS AI - NEW MESSAGE: %1", _messageCode];
	};
	_asset sideChat _messageCode;
	
} else {
	DEBUGLOG format["COMMSPLAY - ASSET IS GROUP - _asset: %1", _asset];
	(leader _asset) sideChat _messageCode;
};

playSound _soundFile;

DEBUGLOG "COMMSPLAY END";