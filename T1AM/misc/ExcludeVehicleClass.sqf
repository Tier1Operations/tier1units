// Excludes a vehicle classname from the artillery system
_vehicleClass = _this;
while {(time < 4)} do {
	sleep 0.5;
};

T1AM_Exclude = T1AM_Exclude + [_vehicleClass];
publicVariable "T1AM_Exclude";