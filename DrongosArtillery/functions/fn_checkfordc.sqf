if (!isServer) exitWith {};

private ["_group","_spotter","_end","_spotterCheck"];

_group = _this select 0;

sleep 5;

_spotter = _group getVariable ["DTA_controlledBy", nil];
if (isNil "_spotter") exitWith {};
_end = false;

while {alive _spotter} do {
	
	if (_group getVariable ["DTA_endMission", false]) exitWith {_end = true};
	_spotterCheck = _group getVariable ["DTA_controlledBy", nil];
	if (!isNil "_spotterCheck" and {_spotterCheck != _spotter} and {!isPlayer _spotterCheck}) exitWith {_end = true};
	sleep 15;
};


if (_group getVariable ["DTA_endMission", false]) exitWith {};
_spotterCheck = _group getVariable ["DTA_controlledBy", nil];
if (!isNil "_spotterCheck" and {_spotterCheck != _spotter}) exitWith {};


if (!_end) then {
	_group setVariable ["DTA_endMission", true, true];
	_group setVariable ["DTA_exactPos", nil, true];
	_group setVariable ["DTA_controlledBy", nil, true];
	dtaControlledAssets = dtaControlledAssets - [_group];
	publicVariable "dtaControlledAssets";
};