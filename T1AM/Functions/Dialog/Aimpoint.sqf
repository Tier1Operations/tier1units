// Open aimpoint menu where the player can choose the target pos.

disableSerialization;

T1AM_LastDialog = "AIMPOINT";
(findDisplay 47100) closeDisplay 0;
(findDisplay 47200) closeDisplay 0;
(findDisplay 47300) closeDisplay 0;
(findDisplay 47400) closeDisplay 0;
(findDisplay 47500) closeDisplay 0;
(findDisplay 47050) createDisplay "T1AM_DialogAimpoint";

private _dialog = findDisplay 47400;
private _controlX = _dialog displayCtrl 47402;
private _controlY = _dialog displayCtrl 47403;

private _posMap = [[T1AM_LastAimpointX, T1AM_LastAimpointY]] call T1AM_Fnc_PosToMapGrid;
private _xMap = parseNumber (_posMap select 0);
private _yMap = parseNumber (_posMap select 1);

_xMap = [_xMap] call T1AM_Fnc_FormatCoordinates;
_controlX ctrlSetText _xMap;
_yMap = [_yMap] call T1AM_Fnc_FormatCoordinates;
_controlY ctrlSetText _yMap;

if (!T1AM_AllowMapClick) then {
	(_dialog displayCtrl 47404) ctrlShow false;
	(_dialog displayCtrl 47404) ctrlEnable false;
};