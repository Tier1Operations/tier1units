if (!T1AM_AllowMapClick) exitWith {
	private _str = "MAP CLICK OPTION IS DISABLED";
	[0, _str, 5] spawn T1AM_Fnc_ShowMessage;
};

openMap true;
onMapSingleClick "";
onMapSingleClick "
	
	onMapSingleClick '';
	
	[_pos] spawn T1AM_Fnc_InputAimpointMapclickEffect;
	
	T1AM_LastGPSX = _pos select 0;
	T1AM_LastGPSY = _pos select 1;
	
	private _posGPS = AGLtoASL [T1AM_LastGPSX,T1AM_LastGPSY,T1AM_LastGPSZ_AGL];
	T1AM_ControlledAssetLocal setVariable [""T1AM_exactPos"", _posGPS];
	
	[] spawn {
		sleep 0.3;
		T1AM_LastDialog = 'CONTROL';
		[0, [false], 0] spawn T1AM_Fnc_LoadingScreen;
	};
	
	true
";