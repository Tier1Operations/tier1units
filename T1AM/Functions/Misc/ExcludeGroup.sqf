// Excludes a group from the artillery system.

params ["_group"];

while {(time < 4)} do {
	sleep 0.5;
};

T1AM_Exclude = T1AM_Exclude + [_group];
publicVariable "T1AM_Exclude";