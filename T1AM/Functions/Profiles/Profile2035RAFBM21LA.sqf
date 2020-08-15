// 2035 RAF BM21 Rockets
// Low angle

#include "\T1AM\Defines.hpp"

params ["_warheadType","_distance"];

// Minumum delay before firing a shot
private _timeBetweenRounds = 0.25;
private _minimumRange = 100;
private _maximumRange = 19000;
private _regularMaxRange = _maximumRange;

// Special long range guiding not allowed.
private _longRangeGuided = false;

[_timeBetweenRounds,_minimumRange,_maximumRange,_longRangeGuided,_regularMaxRange]