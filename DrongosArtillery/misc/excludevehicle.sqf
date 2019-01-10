// Excludes a vehicle from the artillery system
_vehicle = _this;
while {(time < 4)} do {
	sleep 0.5;
};

dtaExclude = dtaExclude + [_vehicle];
publicVariable "dtaExclude";