// Transmits comms to all clients.

private _asset = _this select 0;
private _messageCode = _this select 1;
private _audio = _this select 2;

[[[_asset,_messageCode,_audio],"DrongosArtillery\Misc\CommsPlay.sqf"],"BIS_fnc_execVM",true,false] spawn BIS_fnc_MP;