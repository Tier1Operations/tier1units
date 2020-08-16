if (!hasInterface) exitWith {};

params ["_asset","_spotter","_message","_audio"];

//DIAG_LOG format["COMMSPLAY - _asset: %1", _asset];
//DIAG_LOG format["COMMSPLAY - _spotter: %1", _spotter];
//DIAG_LOG format["COMMSPLAY - _message: %1", _message];
//DIAG_LOG format["COMMSPLAY - _audio: %1", _audio];

// Check if the player has a radio
if (!(call T1AM_Fnc_HasRadio)) exitWith {
	//DIAG_LOG format["COMMSPLAY - EXITING BECAUSE RADIO - hasRadio: %1", call T1AM_Fnc_HasRadio];
};

// Which set of audio files should be used?
private _soundFile = "";
switch (_audio) do {
	case (0) : {_soundFile = "T1AM_Sounds_CheckingFire"};
	case (1) : {_soundFile = "T1AM_Sounds_EndOfMission"};
	case (2) : {_soundFile = "T1AM_Sounds_FireMissionRegistered"};
	case (3) : {_soundFile = "T1AM_Sounds_HoldingFireImpossibleFiringSolution"};
	case (4) : {_soundFile = "T1AM_Sounds_ObserverNotResponding"};
	case (5) : {_soundFile = "T1AM_Sounds_OutOfAmmoRoundsComplete"};
	case (6) : {_soundFile = "T1AM_Sounds_OutOfRange"};
	case (7) : {_soundFile = "T1AM_Sounds_PreparingTakeAWhile"};
	case (8) : {_soundFile = "T1AM_Sounds_RequestedAmmoNotAvailable"};
	case (9) : {_soundFile = "T1AM_Sounds_RoundsComplete"};
	case (10) : {_soundFile = "T1AM_Sounds_Shot"};
	case (11) : {_soundFile = "T1AM_Sounds_Splash"};
	case (12) : {_soundFile = "T1AM_Sounds_UnderMinimumRange"};
	case (13) : {_soundFile = "T1AM_Sounds_RequestedAmmoNotAvailable2"};
	case (14) : {_soundFile = "T1AM_Sounds_Designate"};
	case (15) : {_soundFile = "T1AM_Sounds_Mto10dGPSAdjustFire"};
	case (16) : {_soundFile = "T1AM_Sounds_Mto10dGPSFFE"};
	case (17) : {_soundFile = "T1AM_Sounds_Mto10dImpactAdjustFire"};
	case (18) : {_soundFile = "T1AM_Sounds_Mto10dImpactCorrectFFE"};
	case (19) : {_soundFile = "T1AM_Sounds_MtoAdjustFire"};
	case (20) : {_soundFile = "T1AM_Sounds_MtoFFE"};
	case (21) : {_soundFile = "T1AM_Sounds_MtoPolarAdjustFire"};
	case (22) : {_soundFile = "T1AM_Sounds_MtoPolarCorrectFFE"};
	case (23) : {_soundFile = "T1AM_Sounds_ShotDesignate"};
	default {_soundFile = "T1AM_Sounds_Beep"};
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
		
		//DIAG_LOG format["COMMSPLAY - ASSET IS AI - ORIG MESSAGE: %1", _message];
		_message = format["UNIT %1: ", _nr] + _message;
		//DIAG_LOG format["COMMSPLAY - ASSET IS AI - NEW MESSAGE: %1", _message];
	};
	_asset sideChat _message;
	
} else {
	//DIAG_LOG format["COMMSPLAY - ASSET IS GROUP - _asset: %1", _asset];
	(leader _asset) sideChat _message;
};

// Only play radio for the spotter.
if (!isNull _spotter and {alive _spotter and _spotter == player}) then {
	playSound _soundFile;
};

//DIAG_LOG format["COMMSPLAY | isNil ""_spotter"": %1", isNil "_spotter"];
//DIAG_LOG format["COMMSPLAY | isNull _spotter: %1", isNull _spotter];
//DIAG_LOG format["COMMSPLAY | player: %1",  player];
if (!isNil "_spotter" and {!isNull _spotter}) then {
	//DIAG_LOG format["COMMSPLAY | _spotter: %1",  _spotter];
};

//DIAG_LOG "COMMSPLAY END";