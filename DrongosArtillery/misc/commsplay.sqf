if (!hasInterface) exitWith {};

private ["_asset","_messageCode","_audio","_side","_audioSet","_soundFile"];

// Arty comms
_asset = _this select 0;
_messageCode = _this select 1;
_audio = _this select 2;

//DIAG_LOG format["COMMSPLAY - _asset: %1", _asset];
//DIAG_LOG format["COMMSPLAY - _messageCode: %1", _messageCode];
//DIAG_LOG format["COMMSPLAY - _audio: %1", _audio];

_side = (side (leader _asset));
if (_side != (side player)) exitWith {
	//DIAG_LOG format["COMMSPLAY - EXITING BECAUSE SIDE - _side: %1 - side player: %2", _side, side player];
};

// Check if the player has a radio
if (!(call dta_fnc_HasRadio)) exitWith {
	//DIAG_LOG format["COMMSPLAY - EXITING BECAUSE RADIO - hasRadio: %1", call dta_fnc_HasRadio];
};

// Which set of audio files should be used?
_audioSet = "";


if (_audio == "beep") then {
	_soundFile = "dtaBeep";
} else {
	
	switch true do {
		case (_side == West) : {_audioSet = dtaAudioBLUFOR};
		case (_side == East) : {_audioSet = dtaAudioREDFOR};
		case (_side == Resistance) : {_audioSet = dtaAudioINDEP};
	};
	
	switch true do {
		case (_audioSet == "US") : {
			switch true do {
				case (_audio == "AdjustFire") : {_soundFile = "dtaAdjustFireUS"};
				case (_audio == "MTO") : {_soundFile = "dtaMTOUS"};
				case (_audio == "Shot") : {_soundFile = "dtaShotUS"};
				case (_audio == "Splash") : {_soundFile = "dtaSplashUS"};
				//case (_audio == "RoundsComplete") : {_soundFile = "dtaRoundsCompleteUS"};
				case (_audio == "EndOfMission") : {_soundFile = "dtaEndOfMissionUS"};
				default {_soundFile = "dtaBeep"};
			};
		};

		case (_audioSet == "PER") : {
			switch true do {
				case (_audio == "Affirmative") : {_soundFile = "dtaAffirmativePER"};
				case (_audio == "Negative") : {_soundFile = "dtaNegativePER"};
				case (_audio == "FireMissionReady") : {_soundFile = "dtaFireMissionReadyPER"};
				case (_audio == "AdjustFire") : {_soundFile = "dtaAdjustFirePER"};
				case (_audio == "MTO") : {_soundFile = "dtaMTOPER"};
				case (_audio == "Shot") : {_soundFile = "dtaShotPER"};
				case (_audio == "Splash") : {_soundFile = "dtaSplashPER"};
				//case (_audio == "RoundsComplete") : {_soundFile = "dtaRoundsCompletePER"};
				case (_audio == "EndOfMission") : {_soundFile = "dtaEndOfMissionPER"};
				default {_soundFile = "dtaBeep"};
			};
		};

		case (_audioSet == "GRE") : {
			switch true do {
				case (_audio == "Affirmative") : {_soundFile = "dtaAffirmativeGRE"};
				case (_audio == "Negative") : {_soundFile = "dtaNegativeGRE"};
				case (_audio == "FireMissionReady") : {_soundFile = "dtaFireMissionReadyGRE"};
				case (_audio == "AdjustFire") : {_soundFile = "dtaAdjustFireGRE"};
				case (_audio == "MTO") : {_soundFile = "dtaMTOGRE"};
				case (_audio == "Shot") : {_soundFile = "dtaShotGRE"};
				case (_audio == "Splash") : {_soundFile = "dtaSplashGRE"};
				//case (_audio == "RoundsComplete") : {_soundFile = "dtaRoundsCompleteGRE"};	
				//case (_audio == "EndOfMission") : {_soundFile = "dtaEndOfMissionGRE"};
				case (_audio == "RoundsComplete") : {_soundFile = "dtaEndOfMissionGRE"};
				default {_soundFile = "dtaBeep"};
			};
		};
	};
};

//DIAG_LOG format["COMMSPLAY - _soundFile: %1", _soundFile];

if (_asset isEqualType objNull) then {
	//DIAG_LOG format["COMMSPLAY - ASSET IS OBJECT - _asset: %1", _asset];
	
	if (!isPlayer (effectiveCommander _asset)) then {
		private _nr = 1;
		
		{
			if (_asset == _x) exitWith {};
			_nr = _nr + 1;
		} forEach ([group _asset] call dta_fnc_GroupVehicles);
		
		//DIAG_LOG format["COMMSPLAY - ASSET IS AI - ORIG MESSAGE: %1", _messageCode];
		_messageCode = format["UNIT %1: ", _nr] + _messageCode;
		//DIAG_LOG format["COMMSPLAY - ASSET IS AI - NEW MESSAGE: %1", _messageCode];
	};
	_asset sideChat _messageCode;
	
} else {
	//DIAG_LOG format["COMMSPLAY - ASSET IS GROUP - _asset: %1", _asset];
	(leader _asset) sideChat _messageCode;
};


if (dtaScriptMode) exitWith {};
playSound _soundFile;

//DIAG_LOG "COMMSPLAY END";