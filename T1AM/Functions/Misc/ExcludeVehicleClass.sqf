// Excludes a vehicle classname from the artillery system.

#include "\T1AM\Defines.hpp"

params ["_vehicleClass"];

while {(time < 4)} do {
	sleep 0.5;
};

T1AM_Exclude = T1AM_Exclude + [_vehicleClass];
publicVariable "T1AM_Exclude";