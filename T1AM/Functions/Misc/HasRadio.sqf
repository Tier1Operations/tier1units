// Checks if the artillery dialog can be shown

#include "\T1AM\Defines.hpp"

private _haveRadio = false;
private _items = assignedItems player;

{
	if (_x in _items) then {_haveRadio = true};
} forEach T1AM_RadioTypes;

// TFAR
if (isClass (configFile >> "CfgVehicles" >> "tf_rt1523g")) then {
	if (T1AM_Debug_Mode) then {player globalChat "Checking TFAR radios."};
	if (call TFAR_fnc_haveSWRadio or call TFAR_fnc_haveLRRadio) then {_haveRadio = true};
	if ((T1AM_Debug_Mode) and (_haveRadio)) then {player globalChat "TFAR radio used."};
};

// ACRE
if (isClass (configFile >> "CfgWeapons" >> "ACRE_BaseRadio")) then {
	if (T1AM_Debug_Mode) then {player globalChat "Checking ACRE radios"};
	// Check if player has a radio other than the short range 343.
	{
		if ((_x find "ACRE") != -1) then {
			if ((_x find "PRC343") == -1) then {
				_haveRadio = true;
			};
		};
	} forEach (items player);
	
	if (!_haveRadio and (vehicle player) != player) then {
		// Check if the vehicle has a mounted radio.
		private _racks = [vehicle player] call acre_api_fnc_getVehicleRacks;
		{
			private _radio = [_x] call acre_api_fnc_getMountedRackRadio;
			if (_radio != "") exitWith {_haveRadio = true};
		} forEach _racks;
		
	};
	
	if ((T1AM_Debug_Mode) and (_haveRadio)) then {player globalChat "ACRE radio used."};
};

_haveRadio