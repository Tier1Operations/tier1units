#include "\T1AM\Defines.hpp"

params ["_action"];

private _tubes = [T1AM_ControlledAssetLocal] call T1AM_Fnc_GroupVehicles;

private _abort = false;
switch (_action) do {
	case ("PREVIOUS") : {
		if (T1AM_SelectedTubeIndex == 0) exitWith {_abort = true};
		T1AM_SelectedTubeIndex = T1AM_SelectedTubeIndex - 1;
	};
	case ("NEXT") : {
		if (T1AM_SelectedTubeIndex == ((count _tubes) - 1)) exitWith {_abort = true};
		T1AM_SelectedTubeIndex = T1AM_SelectedTubeIndex + 1;
	};
};

if (_abort) exitWith {};

private _dialog = findDisplay 47200;
(_dialog displayCtrl 47218) ctrlSetText format ["Unit: %1/%2",(T1AM_SelectedTubeIndex + 1),(count _tubes)];
lbClear (_dialog displayCtrl 47206);

T1AM_SelectedTube = _tubes select T1AM_SelectedTubeIndex;
if (T1AM_Debug_Mode) then {systemChat format ["TUBE: %1", T1AM_SelectedTube]};