/* 
155mm Howitzer
High Angle
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
_timeBetweenRounds = 5;
_minimumRange = 750;
_maximumRange = 15000;

if ((_distance >= 750) AND (_distance < 2000)) then {
	_charge = "Single1";
	_times = [750,31,900,30,1000,30,1200,30,1350,30,1500,29,1700,29,1850,28,2000,27];
	_a = 31006.5053;
	_b = -0.333567557;
	_c = 15.2601309;
	_d = 0.10900548;
	_e = 0.998477439;	
};

if ((_distance >= 2000) AND (_distance < 6000)) then {
	_charge = "Single2";
	_times = [2000,48,2500,48,3000,47,3500,47,4000,46,4500,45,5000,43,5500,41,6000,37];
	_a = 7109544.04;
	_b = -0.949658431;
	_c = -1226.7541;
	_d = -6.15155077;
	_e = 0.999419678;
};

if ((_distance >= 6000) AND (_distance < 15001)) then {
	_charge = "Single3";
	_times = [6000,77,7000,77,8000,76,9000,75,10000,74,11000,73,12000,71,13000,69,14000,67,15000,62];
	_a = 472291.561;
	_b = -0.405631017;
	_c = 25.3601268;
	_d = 0.0472737689;
	_e = 0.999754799;
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