// Checks if the artillery dialog can be shown

disableSerialization;

params ["_params"];

if (!alive player or (player getVariable ["ACE_isUnconscious", false])) exitWith {};


// Check value and remove invalid entries.
private _authorizedClasses = T1AM_AuthorizedClasses;
if (_authorizedClasses == "") then {
	_authorizedClasses = [];
} else {
	_authorizedClasses = call compile _authorizedClasses;
	if (!(_authorizedClasses isEqualType [])) then {
		_authorizedClasses = [];
	} else {
		private _tempArray = [];
		{
			if (typeName _x == "STRING" and {configNull != (configFile >> "CfgVehicles" >> _x)}) then {_tempArray pushback _x};
		} forEach _authorizedClasses;
		_authorizedClasses = + _tempArray;
	};
};

// Check value and remove invalid entries.
private _authorizedVariables = T1AM_AuthorizedVariables;
if (_authorizedVariables == "") then {
	_authorizedVariables = [];
} else {
	_authorizedVariables = call compile _authorizedVariables;
	if (!(_authorizedVariables isEqualType [])) then {
		_authorizedVariables = [];
	} else {
		private _tempArray = [];
		{
			if (typeName _x == "OBJECT" and {!isNull _x}) then {_tempArray pushback _x};
		} forEach _authorizedVariables;
		_authorizedVariables = + _tempArray;
	};
};

private _authorized = false;
if (!T1AM_AuthorizeEveryone) then {
	if ((typeOf (vehicle player)) in _authorizedClasses) then {_authorized = true};
	if ((typeOf player) in _authorizedClasses) then {_authorized = true};
	if (player in _authorizedVariables) then {_authorized = true};
};

if (!T1AM_AuthorizeEveryone and !_authorized) exitWith {
	private _str = "YOU ARE NOT AN AUTHORIZED ARTILLERY USER";
	[0, _str, 5] spawn T1AM_Fnc_ShowMessage;
	sleep 4;
	[0] call T1AM_Fnc_CloseDisplays;
};

private _haveRadio = call T1AM_Fnc_HasRadio;
if (_haveRadio) then {
	switch true do {
		case (T1AM_LastDialog == "Assets") : {_params spawn T1AM_Fnc_Assets};
		case (T1AM_LastDialog == "Aimpoint") : {_params spawn T1AM_Fnc_Aimpoint};
		case (T1AM_LastDialog == "Control") : {_params spawn T1AM_Fnc_Control};
	};
	
} else {
	
	private _str = "YOU HAVE NO SUITABLE RADIO TO CALL IN ARTILLERY";
	[0, _str, 5] spawn T1AM_Fnc_ShowMessage;
	sleep 4;
	[0] call T1AM_Fnc_CloseDisplays;
};