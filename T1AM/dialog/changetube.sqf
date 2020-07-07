_action = _this select 0;
_asset = T1AM_ControlledAssetLocal;
_tubes = [_asset] call T1AM_Fnc_GroupVehicles;
_max = count _tubes;
_iccCode = 200;
_lastWarheadType = "";
if (_action == "Previous") exitWith {
	if (T1AM_SelectedTubeIndex == 0) exitWith {};
	T1AM_SelectedTubeIndex = T1AM_SelectedTubeIndex - 1;
	T1AM_SelectedTube = _tubes select T1AM_SelectedTubeIndex;
	if (T1AM_Debug_Mode) then {systemChat format ["A: %1",(currentMagazine T1AM_SelectedTube)]};
	((findDisplay _iccCode) displayCtrl (_iccCode + 18)) ctrlSetText format ["Tube: %1/%2",(T1AM_SelectedTubeIndex + 1),(count _tubes)];
	//execVM "T1AM\Dialog\DisplayWarheads.sqf";
	call T1AM_Fnc_DisplayWarheads;
};

if (_action == "Next") exitWith {
	if (T1AM_SelectedTubeIndex == (_max - 1)) exitWith {};
	T1AM_SelectedTubeIndex = T1AM_SelectedTubeIndex + 1;
	T1AM_SelectedTube = _tubes select T1AM_SelectedTubeIndex;
	if (T1AM_Debug_Mode) then {systemChat format ["A: %1",(currentMagazine T1AM_SelectedTube)]};
	((findDisplay _iccCode) displayCtrl (_iccCode + 18)) ctrlSetText format ["Tube: %1/%2",(T1AM_SelectedTubeIndex + 1),(count _tubes)];
	//execVM "T1AM\Dialog\DisplayWarheads.sqf";
	call T1AM_Fnc_DisplayWarheads;
};