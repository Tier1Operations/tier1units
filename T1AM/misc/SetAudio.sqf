// Sets the audio for a side

_playerSide = _this select 0;
_audioSide = _this select 1;

if (_playerSide == "BLUFOR") then {T1AM_AudioBLUFOR = _audioSide};
if (_playerSide == "REDFOR") then {T1AM_AudioREDFOR = _audioSide};
if (_playerSide == "INDEP") then {T1AM_AudioINDEP = _audioSide};