// Let the server monitor if the controlling player is still connected.
// If the player dies or disconnects, reset the arty asset.

if (!isServer) exitWith {};

params ["_group"];
sleep 5;

private _spotterCheck = nil;
private _spotter = _group getVariable ["T1AM_controlledBy", nil];
if (isNil "_spotter") exitWith {};
private _end = false;

// Abort (end) if the player stops controlling the asset or if another player took control.
while {alive _spotter} do {
	
	if (_group getVariable ["T1AM_endMission", false]) exitWith {_end = true};
	_spotterCheck = _group getVariable ["T1AM_controlledBy", nil];
	if (!isNil "_spotterCheck" and {_spotterCheck != _spotter} and {!isPlayer _spotterCheck}) exitWith {_end = true};
	sleep 15;
};


if (_group getVariable ["T1AM_endMission", false]) exitWith {};
_spotterCheck = _group getVariable ["T1AM_controlledBy", nil];
if (!isNil "_spotterCheck" and {_spotterCheck != _spotter}) exitWith {};


if (!_end) then {
	_group setVariable ["T1AM_endMission", true, true];
	_group setVariable ["T1AM_exactPos", nil, true];
	_group setVariable ["T1AM_controlledBy", nil, true];
	T1AM_ControlledAssets = T1AM_ControlledAssets - [_group];
	publicVariable "T1AM_ControlledAssets";
};