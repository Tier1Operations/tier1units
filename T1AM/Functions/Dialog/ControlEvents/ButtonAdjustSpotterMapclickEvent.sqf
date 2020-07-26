if (!T1AM_AllowMapClick) exitWith {
	private _str = "MAP CLICK OPTION IS DISABLED";
	[0, _str, 5] spawn T1AM_Fnc_ShowMessage;
};

openMap true;
onMapSingleClick "";
onMapSingleClick "
	
	onMapSingleClick '';
	
	[_pos] spawn T1AM_Fnc_InputAimpointMapclickEffect;
	
	T1AM_LastAdjustSpotterX = _pos select 0;
	T1AM_LastAdjustSpotterY = _pos select 1;
	
	[] spawn {
		sleep 0.3;
		T1AM_LastDialog = 'Control';
		[0, [false], 0] spawn T1AM_Fnc_LoadingScreen;
	};
	
	true
";