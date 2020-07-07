// Excludes a vehicle from the artillery system
_vehicle = _this;
while {(time < 4)} do {
	sleep 0.5;
};

T1AM_Exclude = T1AM_Exclude + [_vehicle];
publicVariable "T1AM_Exclude";