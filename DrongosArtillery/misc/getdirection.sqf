/*------------------------------------------------------------
DirToPos function -=- by snYpir
Returns the direction from one position to another.
Called with:
[<position 1>,<position 2>] call DirToPos
Returns the direction from <position 1> to <position 2>.
Requires:
DirToPos.sqf to be preprocessed and present in the mission dir.
--------------------------------------------------------------*/

// declare private variables
private ["_posA","_posB","_dir"];

// get the positions to find the direction between
_posA = [];
_posB = [];
_posA = _this select 0;
_posB = _this select 1;

// calculate direction from _posA to _posB
_dir = ((_posB select 0) - (_posA select 0)) atan2 ((_posB select 1) - (_posA select 1));

// show correct compass heading
if (_dir < 0) then {_dir = _dir + 360};

// return dir
_dir