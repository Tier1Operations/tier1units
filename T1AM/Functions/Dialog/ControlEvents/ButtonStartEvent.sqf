switch true do {
	case (!isNull (findDisplay 47200)) : {T1AM_LastDialog = "ASSETS"};
	case (!isNull (findDisplay 47400)) : {T1AM_LastDialog = "ASSETS"};
	case (T1AM_HaveAimpoint) : {T1AM_LastDialog = "CONTROL"};
	case (!isNull T1AM_ControlledAssetLocal) : {T1AM_LastDialog = "AIMPOINT"};
	default {T1AM_LastDialog = "ASSETS"};
};

if (T1AM_LastDialog == "ASSETS" and !isNull (findDisplay 47100)) exitWith {};

[0, [], 0] spawn T1AM_Fnc_LoadingScreen;