/* 

*/

_distance = _this select 0;

_a = 0;
_b = 0;
_c = 0;
_d = 0;
_e = 0;
// Shell flight time
_flightTime = -1;
// Shell flight times by distance
_times = [];
// Output array
_out = [];
_charge = "";

if ((_distance >= 100) AND (_distance < 500)) then {
	_charge = "Single1";

	_times = [
	
	];
};

if ((_distance >= 500) AND (_distance < 2000)) then {
	_charge = "Single2";

	_times = [
	
	];
};

if ((_distance >= 2000) AND (_distance < 4001)) then {
	_charge = "Single3";

	_times = [
	
	];
};

_index = 0;
_checkingDistance = 0;
while {(_index < (count _times))} do {
	_checkingDistance = _times select _index;
	if (_checkingDistance >= _distance) then {_flightTime = _times select (_index + 1);_index = 99999};
	_index = _index + 2;
};

_out = [_charge,_a,_b,_c,_d,_e,_flightTime];
//player sideChat format ["out: %1",_out];
_out