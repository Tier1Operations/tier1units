// Excludes a vehicle classname from the artillery system
_vehicleClass = _this;
while {(time < 4)} do {
	sleep 0.5;
};

dtaExclude = dtaExclude + [_vehicleClass];
publicVariable "dtaExclude";