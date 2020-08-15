// This allows the player to click on the map to choose the coordinates.

#include "\T1AM\Defines.hpp"

if (!T1AM_AllowMapClick) exitWith {
	private _str = "MAP CLICK OPTION IS DISABLED";
	[0, _str, 5] spawn T1AM_Fnc_ShowMessage;
};

openMap true;
onMapSingleClick "";
onMapSingleClick "
	
	onMapSingleClick '';
	
	[_pos] spawn T1AM_Fnc_InputAimpointMapclickEffect;
	
	T1AM_LastAimpointX = _pos select 0;
	T1AM_LastAimpointY = _pos select 1;
	
	[] spawn {
		sleep 0.3;
		T1AM_LastDialog = 'AIMPOINT';
		[0, [false], 0] spawn T1AM_Fnc_LoadingScreen;
	};
	
	true
";