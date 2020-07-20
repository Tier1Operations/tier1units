/* 
MK41 Cruise Missile
*/

private ["_regularMaxRange","_distance","_longRangeGuided","_warheadType","_timeBetweenRounds","_minimumRange","_maximumRange"];

_warheadType = _this select 0;
_distance = _this select 1;

// Minumum delay before firing a shot
_timeBetweenRounds = 1;
_minimumRange = 200;
_maximumRange = 32000;
_regularMaxRange = _maximumRange;

// If it can be guided by the guide script and it fires past its max distance,
// we will give it more max range and mark it to be handled a bit differently.
_longRangeGuided = false;

[_timeBetweenRounds,_minimumRange,_maximumRange,_longRangeGuided,_regularMaxRange]