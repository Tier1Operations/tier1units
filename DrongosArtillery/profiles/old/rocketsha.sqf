/* 
230mm Rockets
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
//_timeBetweenRounds = 0.75;
_timeBetweenRounds = 0.1;
_minimumRange = 500;
_maximumRange = 18000;


if ((_distance >= 500) AND (_distance < 4500)) then {
	_charge = "Close";
	_times = [500,40,1000,40,2000,39,3000,38,4000,35,4200,33,4500,31,4610,29];
	_a = 110715.421;
	_b = -0.422588478;
	_c = -26.0186735;
	_d = -0.177677591;
	_e = 0.999114589;
};

if ((_distance >= 4500) AND (_distance < 18000)) then {
	_charge = "Medium";
	_times = [4500,84,5000,84,6000,84,7000,84,8000,84,9000,82,10000,81,11000,80,12000,80,13000,79,14000,77,15000,76,16000,73,17000,70,18000,66];
	_a = 19392602.4;
	_b = -0.794314569;
	_c = -609.159211;
	_d = -0.829995843;
	_e = 0.999815048;
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