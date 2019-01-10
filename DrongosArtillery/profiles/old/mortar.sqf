/*
82mm mortar
High Angle (Low angle not possible)
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
_minimumRange = 100;
_maximumRange = 4000;

if ((_distance >= 100) AND (_distance < 500)) then {
	_charge = "Single1";
	_a = 197283.295;
	_b = -1.24432009;
	_c = -13.0392691;
	_d = -0.990978672;
	_e = 0.992761881;
	_times = [100,15,150,14,200,14,250,13,300,13,350,13,400,13,450,12,500,10];
};

if ((_distance >= 500) AND (_distance < 2000)) then {
	_charge = "Single2";
	_a = 3242226.26;
	_b = -1.17495783;
	_c = -2.41658342;
	_d = -0.0405617222;
	_e = 0.998226351;
	_times = [500,28,650,28,800,28,950,27,1100,27,1250,27,1400,26,1550,25,1700,25,1850,23,2000,20];
};

if ((_distance >= 2000) AND (_distance < 4001)) then {
	_charge = "Single3";
	_a = 66.8130162;
	_b = -0.188844565;
	_c = 1.48387424;
	_d = 0.0160112088;
	_e = 0.999118069;

	_times = [2000,39,2300,38,2600,38,2900,37,3200,36,3500,36,3800,34,4000,31];
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