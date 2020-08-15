// Open aimpoint menu where the player can choose the target pos.

#include "\T1AM\Defines.hpp"

disableSerialization;

T1AM_LastDialog = "AIMPOINT";
(findDisplay 47100) closeDisplay 0;
(findDisplay 47200) closeDisplay 0;
(findDisplay 47300) closeDisplay 0;
(findDisplay 47400) closeDisplay 0;
(findDisplay 47500) closeDisplay 0;
(findDisplay 47050) createDisplay "T1AM_DialogAimpoint";

[] spawn {
	sleep 0.5;
	T1AM_PlaySoundGUI = true;
};
playSound "T1AM_Sounds_Load2";

private _dialog = findDisplay 47400;

private _control = _dialog displayCtrl 47405;
_control lbSetCurSel T1AM_LastAimpointCheckbox;
[_control, T1AM_LastAimpointCheckbox] spawn T1AM_Fnc_EditAimpointCheckboxEvent;

private _posMap = [[T1AM_LastAimpointX, T1AM_LastAimpointY]] call T1AM_Fnc_PosToMapGrid;
private _xMap = parseNumber (_posMap select 0);
private _yMap = parseNumber (_posMap select 1);
_xMap = [_xMap] call T1AM_Fnc_FormatCoordinates;
(_dialog displayCtrl 47402) ctrlSetText _xMap;
_yMap = [_yMap] call T1AM_Fnc_FormatCoordinates;
(_dialog displayCtrl 47403) ctrlSetText _yMap;

private _posMap = [[T1AM_LastAimpointSpotterX, T1AM_LastAimpointSpotterY]] call T1AM_Fnc_PosToMapGrid;
private _xMap = parseNumber (_posMap select 0);
private _yMap = parseNumber (_posMap select 1);
_xMap = [_xMap] call T1AM_Fnc_FormatCoordinates;
(_dialog displayCtrl 47407) ctrlSetText _xMap;
_yMap = [_yMap] call T1AM_Fnc_FormatCoordinates;
(_dialog displayCtrl 47408) ctrlSetText _yMap;

if (T1AM_lastAimpointDir != 0) then {
	(_dialog displayCtrl 47409) ctrlSetText (str T1AM_lastAimpointDir);
};

if (T1AM_lastAimpointDist != 0) then {
	(_dialog displayCtrl 47418) ctrlSetText (str T1AM_lastAimpointDist);
};