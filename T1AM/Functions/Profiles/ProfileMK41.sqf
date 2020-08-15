// MK41 Cruise Missile

#include "\T1AM\Defines.hpp"

params ["_warheadType","_distance"];

// Minumum delay before firing a shot
private _timeBetweenRounds = 3;
private _minimumRange = 200;
private _maximumRange = 32000;
private _regularMaxRange = _maximumRange;

// If it can be guided by the guide script and it fires past its max distance,
// we will give it more max range and mark it to be handled a bit differently.
private _longRangeGuided = false;

[_timeBetweenRounds,_minimumRange,_maximumRange,_longRangeGuided,_regularMaxRange]