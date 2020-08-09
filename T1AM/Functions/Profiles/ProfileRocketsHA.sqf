// 230mm Rockets
// High Angle

params ["_warheadType","_distance"];

// Minumum delay before firing a shot
private _timeBetweenRounds = 0.5;
private _minimumRange = 50;
private _maximumRange = 40000;
private _regularMaxRange = _maximumRange;

// If it can be guided by the guide script and it fires past its max distance,
// we will give it more max range and mark it to be handled a bit differently.
private _longRangeGuided = false;
if (((_warheadType in T1AM_GPSGuidedTypes) or {_warheadType in T1AM_GPSLaserTypes} or {_warheadType in T1AM_GPSSeekerTypes}) and {_distance > _maximumRange}) then {
	_maximumRange = 60000;
	_longRangeGuided = true;
};

if (_warheadType in T1AM_LaserTypes and {_distance > _maximumRange}) then {
	_maximumRange = 55000;
	_longRangeGuided = true;
};

[_timeBetweenRounds,_minimumRange,_maximumRange,_longRangeGuided,_regularMaxRange]