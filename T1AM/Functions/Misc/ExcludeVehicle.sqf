// Excludes a vehicle from the artillery system.

params ["_vehicle"];

while {(time < 4)} do {
	sleep 0.5;
};

T1AM_Exclude = T1AM_Exclude + [_vehicle];
publicVariable "T1AM_Exclude";