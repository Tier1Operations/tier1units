/* 
RHS BM21 Rockets
Low angle
*/

private ["_regularMaxRange","_distance","_longRangeGuided","_warheadType","_timeBetweenRounds","_minimumRange","_maximumRange"];

_warheadType = _this select 0;
_distance = _this select 1;

// Minumum delay before firing a shot
_timeBetweenRounds = 0.3;
_minimumRange = 100;
_maximumRange = 30000;
_regularMaxRange = _maximumRange;

// Special long range guiding not allowed.
_longRangeGuided = false;

[_timeBetweenRounds,_minimumRange,_maximumRange,_longRangeGuided,_regularMaxRange]