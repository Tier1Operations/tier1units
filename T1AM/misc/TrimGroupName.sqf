// Takes a group name and returns the group code and colour without the side in front

private["_group","_groupName","_1","_2","_3","_out","_array1","_array2","_numArray","_count","_x","_tempName","_text"];
disableSerialization;
_group = _this select 0;
_groupName = format ["%1",_group];
_1 = "";
_2 = "";
_3 = "";
_out = "";
_out = _groupName;
_array1 = ["Alpha","Bravo","Charlie","Delta","Echo","Foxtrot","Golf","Hotel","India","Juliet","Kilo","Yankee","Zulu","Buffalo","Convoy","Guardian","November","Two","Three","Fox"];
_array2 = [];
_tempName = "";
_numArray = [""];
_count = 0;
_x = 0;
_text = "";
_tempName = "";
while {_count < 5} do
{
	_x = _x + 1;
	_text = format ["%1-1",_x];
	_numArray = _numArray + [_text];
	_text = format ["%1-2",_x];
	_numArray = _numArray + [_text];
	_text = format ["%1-3",_x];
	_numArray = _numArray + [_text];
	_count = _count + 1;
};
if (side leader _group == WEST) then {_1 = "B"};
if (side leader _group == EAST) then {_1 = "O"};
if (side leader _group == RESISTANCE) then {_1 = "R"};
if (side leader _group == CIVILIAN) then {_1 = "C"};
while {((count _array1) > 0)} do 
{
	_2 = _array1 select 0;
	_array1 = _array1 - [_2];
	_array2 = _numArray;
	while {((count _array2) > 0)} do
	{
		_3 = _array2 select 0;
		_array2 = _array2 - [_3];
		_tempName = format ["%1 %2 %3",_1,_2,_3];
		if (_groupName == _tempName) then {_out = format ["%1 %2",_2,_3]};
		if (_groupName == _tempName) then {_array1 = []};
		if (_groupName == _tempName) then {_array2 = []};
	};
};
_out