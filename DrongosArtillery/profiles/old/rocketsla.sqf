/* 
230mm Rockets
Low angle
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
// Minumum delay before firing a shot
//_timeBetweenRounds = 0.75;
_timeBetweenRounds = 0.1;
_minimumRange = 100;
_maximumRange = 20000;

if ((_distance >= 100) AND (_distance < 500)) then {
	_charge = "Close";
	_times = [850,2,1000,3,2000,7,3000,12,4000,19,4200,21,4500,25,4610,28];
/*	_a = 43.028057;
	_b = 1.96997923;
	_c = 0.157246373;
	_d = 1.86239925;
	_e = 1.00057304;*/
	_a = 0.105034154;
	_b = 1.99558311;
	_c = 2.02940183;
	_d = -0.206668478;
	_e = 0.999998195;
};

if ((_distance >= 500) AND (_distance < 20000)) then {
	_charge = "Medium";
	_times = [3200,6,4500,9,5000,10,6000,13,7000,15,8000,18,9000,20,10000,23,11000,26,12000,29,13000,32,14000,34,15000,38,16000,42,17000,46,18000,52];	
/*	_a = 16.3176519;
	_b = 2.10391805;
	_c = -0.241983812;
	_d = 3.42624466;
	_e = 0.99996144;*/
	_a = 0.01083418;
	_b = 1.99619564;
	_c = 1.54815796;
	_d = -0.0162256945;
	_e = 0.999999548;
};

_index = 0;
_checkingDistance = 0;
while {(_index < (count _times))} do {
	_checkingDistance = _times select _index;
	if (_checkingDistance >= _distance) then {_flightTime = _times select (_index + 1);_index = 99999};
	_index = _index + 2;
};

_out = [_charge,_a,_b,_c,_d,_e,_flightTime,_timeBetweenRounds,_minimumRange,_maximumRange];
_out