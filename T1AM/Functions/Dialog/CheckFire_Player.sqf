#include "\T1AM\Defines.hpp"

[4, [], 4] spawn T1AM_Fnc_LoadingScreen;
[T1AM_ControlledAssetLocal] remoteExec ["T1AM_Fnc_CheckFire_Server", 2, false];

DEBUGLOG format["CHECK FIRE - player: %1 - T1AM_ControlledAssetLocal: %2", player, T1AM_ControlledAssetLocal];