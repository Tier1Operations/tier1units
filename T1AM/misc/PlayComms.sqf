if (!hasInterface) exitWith {};

params ["_asset","_messageCode","_audio"];

//DIAG_LOG format["COMMSPLAY - _asset: %1", _asset];
//DIAG_LOG format["COMMSPLAY - _messageCode: %1", _messageCode];
//DIAG_LOG format["COMMSPLAY - _audio: %1", _audio];

private _side = (side (leader _asset));
if (_side != (side player)) exitWith {
	//DIAG_LOG format["COMMSPLAY - EXITING BECAUSE SIDE - _side: %1 - side player: %2", _side, side player];
};

// Check if the player has a radio
if (!(call T1AM_Fnc_HasRadio)) exitWith {
	//DIAG_LOG format["COMMSPLAY - EXITING BECAUSE RADIO - hasRadio: %1", call T1AM_Fnc_HasRadio];
};

// Which set of audio files should be used?
private _soundFile = "";

if (_audio == "beep") then {
	_soundFile = "T1AM_Beep";
} else {
	
	private _audioSet = "";
	switch true do {
		case (_side == West) : {_audioSet = T1AM_AudioBLUFOR};
		case (_side == East) : {_audioSet = T1AM_AudioREDFOR};
		case (_side == Resistance) : {_audioSet = T1AM_AudioINDEP};
	};
	
	switch true do {
		case (_audioSet == "US") : {
			switch true do {
				case (_audio == "AdjustFire") : {_soundFile = "T1AM_AdjustFireUS"};
				case (_audio == "MTO") : {_soundFile = "T1AM_MTOUS"};
				case (_audio == "Shot") : {_soundFile = "T1AM_ShotUS"};
				case (_audio == "Splash") : {_soundFile = "T1AM_SplashUS"};
				//case (_audio == "RoundsComplete") : {_soundFile = "T1AM_RoundsCompleteUS"};
				case (_audio == "EndOfMission") : {_soundFile = "T1AM_EndOfMissionUS"};
				default {_soundFile = "T1AM_Beep"};
			};
		};

		case (_audioSet == "PER") : {
			switch true do {
				case (_audio == "Affirmative") : {_soundFile = "T1AM_AffirmativePER"};
				case (_audio == "Negative") : {_soundFile = "T1AM_NegativePER"};
				case (_audio == "FireMissionReady") : {_soundFile = "T1AM_FireMissionReadyPER"};
				case (_audio == "AdjustFire") : {_soundFile = "T1AM_AdjustFirePER"};
				case (_audio == "MTO") : {_soundFile = "T1AM_MTOPER"};
				case (_audio == "Shot") : {_soundFile = "T1AM_ShotPER"};
				case (_audio == "Splash") : {_soundFile = "T1AM_SplashPER"};
				//case (_audio == "RoundsComplete") : {_soundFile = "T1AM_RoundsCompletePER"};
				case (_audio == "EndOfMission") : {_soundFile = "T1AM_EndOfMissionPER"};
				default {_soundFile = "T1AM_Beep"};
			};
		};

		case (_audioSet == "GRE") : {
			switch true do {
				case (_audio == "Affirmative") : {_soundFile = "T1AM_AffirmativeGRE"};
				case (_audio == "Negative") : {_soundFile = "T1AM_NegativeGRE"};
				case (_audio == "FireMissionReady") : {_soundFile = "T1AM_FireMissionReadyGRE"};
				case (_audio == "AdjustFire") : {_soundFile = "T1AM_AdjustFireGRE"};
				case (_audio == "MTO") : {_soundFile = "T1AM_MTOGRE"};
				case (_audio == "Shot") : {_soundFile = "T1AM_ShotGRE"};
				case (_audio == "Splash") : {_soundFile = "T1AM_SplashGRE"};
				//case (_audio == "RoundsComplete") : {_soundFile = "T1AM_RoundsCompleteGRE"};	
				//case (_audio == "EndOfMission") : {_soundFile = "T1AM_EndOfMissionGRE"};
				case (_audio == "RoundsComplete") : {_soundFile = "T1AM_EndOfMissionGRE"};
				default {_soundFile = "T1AM_Beep"};
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
		} forEach ([group _asset] call T1AM_Fnc_GroupVehicles);
		
		//DIAG_LOG format["COMMSPLAY - ASSET IS AI - ORIG MESSAGE: %1", _messageCode];
		_messageCode = format["UNIT %1: ", _nr] + _messageCode;
		//DIAG_LOG format["COMMSPLAY - ASSET IS AI - NEW MESSAGE: %1", _messageCode];
	};
	_asset sideChat _messageCode;
	
} else {
	//DIAG_LOG format["COMMSPLAY - ASSET IS GROUP - _asset: %1", _asset];
	(leader _asset) sideChat _messageCode;
};

playSound _soundFile;

//DIAG_LOG "COMMSPLAY END";