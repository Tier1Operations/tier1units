params ["_tube","_proj"];

private _group = group _tube;
private _timeout = time + 300;
private _abort = false;
private _chosenTargetPos = _tube getVariable ["T1AM_chosenTargetPos", [-99,-99,-99]];
private _pos = [-99,-99,-99];
private _nr = _group getVariable ["T1AM_missionNr", 0];
private _spotter = _group getVariable ["T1AM_controlledBy", nil];

if (isNil "_spotter") exitWith {
	//DIAG_LOG format["SFM: %1 - UPDATE TARGET POS - ABORT1 - CHECK1: %2", _tube, _spotter];
};

while {alive _proj} do {
	if (time > _timeout or (_group getVariable ["T1AM_endMission", true]) or (_group getVariable ["T1AM_CheckFire", false])) exitWith {_abort = true};
	_pos = getPosASL _proj;
	sleep 0.25;
};

private _spotter2 = _group getVariable ["T1AM_controlledBy", nil];
if (isNil "_spotter" or {isNil "_spotter2" or {_spotter != _spotter2}}) exitWith {
	//DIAG_LOG format["SFM: %1 - UPDATE TARGET POS - ABORT2 - CHECK1: %2 - CHECK2: %3", _tube, isNil "_spotter", isNil "_spotter2"];
};

if (!_abort and {_nr == (_group getVariable ["T1AM_missionNr", -1])} and {getPosASL _tube vectorDistance _chosenTargetPos < 1500}) then {
	T1AM_Xdisplay = _pos select 0;
	T1AM_Ydisplay = _pos select 1;
	private _owner = owner _spotter2;
	_owner publicVariableClient "T1AM_Xdisplay";
	_owner publicVariableClient "T1AM_Ydisplay";
};

//DIAG_LOG format["SFM: %1 - UPDATE TARGET POS - END - POS: %2 - SPOTTER: %3", _tube, _pos, _spotter2];
