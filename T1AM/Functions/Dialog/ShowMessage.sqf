disableSerialization;

params ["_mode", "_message", "_waitTime"];

// Mode 0 = Use message from parameter. Show as error message.
// Mode 1 = Use message from parameter. Show as text message.
// Other modes = Use message from this file.

(findDisplay 47500) closeDisplay 0;
createDialog "T1AM_DialogMessage";
private _dialog = findDisplay 47500;
private _controlError = _dialog displayCtrl 47501;
private _controlText = _dialog displayCtrl 47502;
private _control = _controlError;

switch (_mode) do {
	case (1) : {
		_control = _controlText;
	};
	case (2) : {
		_control = _controlText;
		_message = "\n\n\n\n\n\nEnter 10 digit grid coordinates.\nExample:\nX: 02360\nY: 13095\n\nEnter at least 1 digit. Zeroes will automatically be added at the end to turn it into 5 digits. For instance, if the map coordinate is 017, you can type that in and it will automatically be turned into 01700.\n\nThe more digits you add, the more precise the coordinate will be. For example, if the target is between 017 and 018, you can enter 0175.\n\nUse 5 digits if you require precision up to a meter, eg. 01758.";
	};
};

_control ctrlSetText _message;

private _waitTime = time + _waitTime;
while {!isNull (findDisplay 47500) and time < _waitTime} do {
	sleep 0.3;
};

private _dialog = findDisplay 47500;

if (!isNull _dialog) then {
	_dialog closeDisplay 0;
};