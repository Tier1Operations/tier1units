[player,"Check fire.","Beep"] call T1AM_Fnc_SendComms;
[T1AM_ControlledAssetLocal] remoteExec ["T1AM_Fnc_CheckFire_Server", 2, false];
//DIAG_LOG format["CHECK FIRE - player: %1 - T1AM_ControlledAssetLocal: %2", player, T1AM_ControlledAssetLocal];