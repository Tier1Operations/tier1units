/* 
155mm Howitzer
Low Angle
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
_minimumRange = 500;
_maximumRange = 20000;

if ((_distance >= 500) AND (_distance < 2000)) then {
	_charge = "Single1";
	_times = [500,3,700,4,1000,6,1200,8,1500,10,1600,11,1800,12,2000,14];
	_a = 0.000102188808;
	_b = 2.10571709;
	_c = 2.66890713;
	_d = 2.84739083E-007;
	_e = 1.00290775;
};

if ((_distance >= 2000) AND (_distance < 6000)) then {
//	hint "\Profiles\155mmHowitzerLA.sqf: low angle _d needs to be checked again, possible broken value";
	_charge = "Single2";
	_times = [2000,8,2500,10,3000,12,3500,15,4000,17,4500,20,5000,23,5500,27,6000,33];
	_a = 0.0566571757;
	_b = 1.99389952;
	_c = 1.4835779;
	_d = -0.0803556257;
	_e = 0.999998201;
};

if ((_distance >= 6000) AND (_distance < 15000)) then {
	_charge = "Single3";
	_times = [6000,15,7000,18,8000,21,9000,24,10000,27,11000,30,12000,34,13000,38,14000,42,15000,49];
	_a = 0.00792468753;
	_b = 1.98725492;
	_c = 1.40300561;
	_d = -0.00998647226;
	_e = 0.999998497;
};

if ((_distance >= 15000) AND (_distance < 20001)) then {
	_charge = "Single4";
	_times = [15000,23,15500,24,16000,25,16500,26,17000,26,17500,27,18000,28,18500,29,19000,30,19500,31,20000,32];
	_a = 7.55850679;
	_b = 1.9693998;
	_c = 2.72781198;
	_d = -0.000127918091;
	_e = 0.99999618;
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