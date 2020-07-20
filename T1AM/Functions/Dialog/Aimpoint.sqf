// Open aimpoint menu where the player can choose the target pos.

disableSerialization;

T1AM_LastDialog = "Aimpoint";
(findDisplay 47100) closeDisplay 0;
(findDisplay 47200) closeDisplay 0;
(findDisplay 47300) closeDisplay 0;
(findDisplay 47400) closeDisplay 0;
(findDisplay 47500) closeDisplay 0;
(findDisplay 47050) createDisplay "T1AM_DialogAimpoint";

private _dialog = findDisplay 47400;
private _controlX = _dialog displayCtrl 47402;
private _controlY = _dialog displayCtrl 47403;
_controlX ctrlSetText T1AM_LastAimpointX;
_controlY ctrlSetText T1AM_LastAimpointY;


while {!isNull (findDisplay 47400)} do {
	
	T1AM_LastAimpointX = ctrlText _controlX;
	T1AM_LastAimpointY = ctrlText _controlY;
	
	sleep 0.15;
};