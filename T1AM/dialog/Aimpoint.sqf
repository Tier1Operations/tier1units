// Open aimpoint menu where the player can choose the target pos.

T1AM_LastDialog = "Aimpoint";
createDialog "T1AM_DialogAimpoint";
sleep 0.1;

private _dialog = findDisplay 400;
private _controlX = _dialog displayCtrl 402;
private _controlY = _dialog displayCtrl 403;
_controlX ctrlSetText T1AM_LastAimpointX;
_controlY ctrlSetText T1AM_LastAimpointY;

while {!isNull _dialog} do {
	
	T1AM_LastAimpointX = ctrlText _controlX;
	T1AM_LastAimpointY = ctrlText _controlY;
	
	sleep 0.15;
};