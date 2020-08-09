// RHS BM21 Rockets
// Low angle

params ["_warheadType","_distance"];

// Minumum delay before firing a shot
private _timeBetweenRounds = 0.5;
private _minimumRange = 100;
private _maximumRange = 30000;
private _regularMaxRange = _maximumRange;

// Special long range guiding not allowed.
private _longRangeGuided = false;

[_timeBetweenRounds,_minimumRange,_maximumRange,_longRangeGuided,_regularMaxRange]