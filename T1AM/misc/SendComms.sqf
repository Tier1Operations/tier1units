// Transmits comms to all clients.

private _asset = _this select 0;
private _messageCode = _this select 1;
private _audio = _this select 2;

[_asset,_messageCode,_audio] remoteExec ["T1AM_Fnc_PlayComms", 0];