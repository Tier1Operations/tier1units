// Transmits comms to all clients.

if (!T1AM_ModEnabled) exitWith {};

params ["_asset","_spotter","_message","_audio"];

[_asset,_spotter,_message,_audio] remoteExec ["T1AM_Fnc_PlayComms", 0];