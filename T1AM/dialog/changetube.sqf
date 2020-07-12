params ["_action"];

private _tubes = [T1AM_ControlledAssetLocal] call T1AM_Fnc_GroupVehicles;

if (_action == "Previous") exitWith {
	if (T1AM_SelectedTubeIndex == 0) exitWith {};
	T1AM_SelectedTubeIndex = T1AM_SelectedTubeIndex - 1;
	T1AM_SelectedTube = _tubes select T1AM_SelectedTubeIndex;
	if (T1AM_Debug_Mode) then {systemChat format ["A: %1",(currentMagazine T1AM_SelectedTube)]};
	((findDisplay 200) displayCtrl 218) ctrlSetText format ["Tube: %1/%2",(T1AM_SelectedTubeIndex + 1),(count _tubes)];
	lbClear ((findDisplay 200) displayCtrl 206);
};

if (_action == "Next") exitWith {
	if (T1AM_SelectedTubeIndex == ((count _tubes) - 1)) exitWith {};
	T1AM_SelectedTubeIndex = T1AM_SelectedTubeIndex + 1;
	T1AM_SelectedTube = _tubes select T1AM_SelectedTubeIndex;
	if (T1AM_Debug_Mode) then {systemChat format ["A: %1",(currentMagazine T1AM_SelectedTube)]};
	((findDisplay 200) displayCtrl 218) ctrlSetText format ["Tube: %1/%2",(T1AM_SelectedTubeIndex + 1),(count _tubes)];
	lbClear ((findDisplay 200) displayCtrl 206);
};