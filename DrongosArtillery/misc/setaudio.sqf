// Sets the audio for a side

_playerSide = _this select 0;
_audioSide = _this select 1;

if (_playerSide == "BLUFOR") then {dtaAudioBLUFOR = _audioSide};
if (_playerSide == "REDFOR") then {dtaAudioREDFOR = _audioSide};
if (_playerSide == "INDEP") then {dtaAudioINDEP = _audioSide};