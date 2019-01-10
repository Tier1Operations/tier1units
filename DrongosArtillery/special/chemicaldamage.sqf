private["_unit","_time"];
disableSerialization;

_unit = _this select 0;

_time = 10;
while {(_time > 0)} do {
	_unit setFatigue 1;
	_unit setDamage ((getDammage _unit) + 0.1);
	_time = _time - 1;
	if NOT(alive _unit) then {_time = 0};
	sleep 5;
};