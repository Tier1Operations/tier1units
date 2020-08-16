// 82mm mortar
// High Angle (Low angle not possible)

params ["_warheadType","_distance"];

// Minumum delay before firing a shot
private _timeBetweenRounds = 2;
private _minimumRange = 100;
private _maximumRange = 6000;
private _regularMaxRange = _maximumRange;

if (_warheadType in T1AM_LaserTypes) then {
	_maximumRange = 7000;
};

// If it can be guided by the guide script and it fires past its max distance,
// we will give it more max range and mark it to be handled a bit differently.
private _longRangeGuided = false;
if (((_warheadType in T1AM_GPSGuidedTypes) or {_warheadType in T1AM_GPSLaserTypes} or {_warheadType in T1AM_GPSSeekerTypes}) and {_distance > _maximumRange}) then {
	_maximumRange = 8000;
	_longRangeGuided = true;
};

[_timeBetweenRounds,_minimumRange,_maximumRange,_longRangeGuided,_regularMaxRange]