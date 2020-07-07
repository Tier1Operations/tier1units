/* 
155mm Howitzer
High Angle
*/

private ["_regularMaxRange","_distance","_longRangeGuided","_warheadType","_timeBetweenRounds","_minimumRange","_maximumRange"];

_warheadType = _this select 0;
_distance = _this select 1;

// Minumum delay before firing a shot
_timeBetweenRounds = 15;
_minimumRange = 50;
_maximumRange = 25000;
_regularMaxRange = _maximumRange;

// If it can be guided by the guide script and it fires past its max distance,
// we will give it more max range and mark it to be handled a bit differently.
_longRangeGuided = false;
if (((_warheadType in T1AM_GPSGuidedTypes) or {_warheadType in T1AM_GPSLaserTypes} or {_warheadType in T1AM_GPSSeekerTypes}) and {_distance > _maximumRange}) then {
	_maximumRange = 40000;
	_longRangeGuided = true;
};

if (_warheadType in T1AM_LaserTypes and {_distance > _maximumRange}) then {
	_maximumRange = 35000;
	_longRangeGuided = true;
};

[_timeBetweenRounds,_minimumRange,_maximumRange,_longRangeGuided,_regularMaxRange]