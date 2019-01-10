[player,"Check fire.","Beep"] call dta_fnc_SendComms;
[dtaSelectedAsset] remoteExec ["dta_fnc_CheckFire_Server", 2, false];
//diag_log format["CHECK FIRE - player: %1 - dtaSelectedAsset: %2", player, dtaSelectedAsset];