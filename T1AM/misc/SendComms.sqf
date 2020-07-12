// Transmits comms to all clients.

params ["_asset","_messageCode","_audio"];

[_asset,_messageCode,_audio] remoteExec ["T1AM_Fnc_PlayComms", 0];