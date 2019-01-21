/*
 * Author: BaerMitUmlaut
 * Calculates the duty of the current animation.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Animation name <STRING>
 *
 * Return Value:
 * Duty <NUMBER>
 *
 * Example:
 * [player, "AidlPercMstpSlowWrflDnon_G05"] call ace_advanced_fatigue_fnc_getAnimDuty
 *
 * Public: No
 */
//#include "script_component.hpp"
params ["_unit", "_animName"];

private _duty = 1;
private _modLevel = 0;
private _animType = _animName select [1, 3];
private _dutyMod = getNumber(configFile >> "CfgVehicles" >> typeof _unit >> "t1_DutyMod");

ace_advanced_fatigue_isSwimming = false;

if (_animType in ["idl", "mov", "adj"]) then {
	
    switch (_animName select [5, 3]) do {
        
		case ("knl"): {
            _duty = 1.5;
        };
		
        case ("pne"): {
			_dir = _animName select [21, 1];
			if ((_dir == "u") or {_dir == "r"} or {_dir == "l"}) then {
				_duty = 10;
			} else {
				_duty = 6.75;
			};
			
			_modLevel = 2;
        };
		
        default {
            _duty = 1;
			_modLevel = 1;
        };
    };
	
	
	if (_animName select [13, 3] == "ras") then {
		
		private ["_weight","_duty2"];
		
		_weight = getNumber(configFile >> "CfgWeapons" >> currentWeapon _unit >> "WeaponSlotsInfo" >> "mass");
		
		_modLevel = 0;
		
		switch true do {
			case (currentWeapon _unit == primaryWeapon _unit) : {
				{
					if (_x != "") then {
						_weight = _weight + getNumber(configFile >> "CfgWeapons" >> _x >> "ItemInfo" >> "mass");
					};
				} forEach (primaryWeaponItems _unit);
				
				{
					_weight = _weight + getNumber(configFile >> "CfgMagazines" >> _x >> "mass");
				} forEach (primaryWeaponMagazine _unit);
			};
			
			case (currentWeapon _unit == secondaryWeapon _unit) : {
				{
					if (_x != "") then {
						_weight = _weight + getNumber(configFile >> "CfgWeapons" >> _x >> "ItemInfo" >> "mass");
					};
				} forEach (secondaryWeaponItems _unit);
				
				{
					_weight = _weight + getNumber(configFile >> "CfgMagazines" >> _x >> "mass");
				} forEach (secondaryWeaponMagazine _unit);
				
				_duty = _duty * 1.2;
			};
			
			case (currentWeapon _unit == handgunWeapon _unit) : {
				{
					if (_x != "") then {
						_weight = _weight + getNumber(configFile >> "CfgWeapons" >> _x >> "ItemInfo" >> "mass");
					};
				} forEach (handgunItems _unit);
				
				{
					_weight = _weight + getNumber(configFile >> "CfgMagazines" >> _x >> "mass");
				} forEach (handgunMagazine _unit);
				
				if (_animName select [9, 3] == "tac") then {
					_duty = _duty * 1.12;
				};
			};
		};
		
		
		switch true do {
			
			// < 1kg
			case (_weight < 22): {
				// low ready jog
				_duty2 = _duty * 0.8000;
				
				if (_animName select [9, 3] == "tac") then {
					// high ready jog/walk
					_duty = _duty * 1.1700;
				} else {
					_duty = _duty2;
				};
			};
			
			// < 2kg
			case (_weight < 44): {
				// low ready jog
				_duty2 = _duty * 0.8050;
				
				if (_animName select [9, 3] == "tac") then {
					// high ready jog/walk
					_duty = _duty * 1.1800;
				} else {
					_duty = _duty2;
				};
			};
			
			
			// < 3kg
			case (_weight < 66): {
				// low ready jog
				_duty2 = _duty * 0.8150;
				
				if (_animName select [9, 3] == "tac") then {
					// high ready jog/walk
					_duty = _duty * 1.2000;
				} else {
					_duty = _duty2;
				};
			};
			
			
			// < 4kg
			case (_weight < 88): {
				// low ready jog
				_duty2 = _duty * 0.8300;
				
				if (_animName select [9, 3] == "tac") then {
					// high ready jog/walk
					_duty = _duty * 1.2300;
				} else {
					_duty = _duty2;
				};
			};
			
			
			// < 4.5kg
			case (_weight < 99): {
				// low ready jog
				_duty2 = _duty * 0.8400;
				
				if (_animName select [9, 3] == "tac") then {
					// high ready jog/walk
					_duty = _duty * 1.2500;
				} else {
					_duty = _duty2;
				};
			};
			
			
			// < 5kg
			case (_weight < 110): {
				// low ready jog
				_duty2 = _duty * 0.8500;
				
				if (_animName select [9, 3] == "tac") then {
					// high ready jog/walk
					_duty = _duty * 1.2700;
				} else {
					_duty = _duty2;
				};
			};
			
			
			// < 5.5kg
			case (_weight < 121): {
				// low ready jog
				_duty2 = _duty * 0.8625;
				
				if (_animName select [9, 3] == "tac") then {
					// high ready jog/walk
					_duty = _duty * 1.2950;
				} else {
					_duty = _duty2;
				};
			};
			
			
			// < 6kg
			case (_weight < 132): {
				// low ready jog
				_duty2 = _duty * 0.8750;
				
				if (_animName select [9, 3] == "tac") then {
					// high ready jog/walk
					_duty = _duty * 1.3200;
				} else {
					_duty = _duty2;
				};
			};
			
			
			// < 6.5kg
			case (_weight < 143): {
				// low ready jog
				_duty2 = _duty * 0.8900;
				
				if (_animName select [9, 3] == "tac") then {
					// high ready jog/walk
					_duty = _duty * 1.3500;
				} else {
					_duty = _duty2;
				};
			};
			
			
			// < 7kg
			case (_weight < 154): {
				// low ready jog
				_duty2 = _duty * 0.9050;
				
				if (_animName select [9, 3] == "tac") then {
					// high ready jog/walk
					_duty = _duty * 1.3800;
				} else {
					_duty = _duty2;
				};
			};
			
			
			// < 7.5kg
			case (_weight < 165): {
				// low ready jog
				_duty2 = _duty * 0.9225;
				
				if (_animName select [9, 3] == "tac") then {
					// high ready jog/walk
					_duty = _duty * 1.4150;
				} else {
					_duty = _duty2;
				};
			};
			
			
			// < 8kg
			case (_weight < 176): {
				// low ready jog
				_duty2 = _duty * 0.9400;
				
				if (_animName select [9, 3] == "tac") then {
					// high ready jog/walk
					_duty = _duty * 1.4500;
				} else {
					_duty = _duty2;
				};
			};
			
			
			// < 8.5kg
			case (_weight < 187): {
				// low ready jog
				_duty2 = _duty * 0.9600;
				
				if (_animName select [9, 3] == "tac") then {
					// high ready jog/walk
					_duty = _duty * 1.4900;
				} else {
					_duty = _duty2;
				};
			};
			
			
			// < 9kg
			case (_weight < 198): {
				// low ready jog
				_duty2 = _duty * 0.9800;
				
				if (_animName select [9, 3] == "tac") then {
					// high ready jog/walk
					_duty = _duty * 1.5300;
				} else {
					_duty = _duty2;
				};
			};
			
			
			// < 9.5kg
			case (_weight < 209): {
				// low ready jog
				_duty2 = _duty * 1.0025;
				
				if (_animName select [9, 3] == "tac") then {
					// high ready jog/walk
					_duty = _duty * 1.5750;
				} else {
					_duty = _duty2;
				};
			};
			
			
			// < 10kg
			case (_weight < 220): {
				// low ready jog
				_duty2 = _duty * 1.0250;
				
				if (_animName select [9, 3] == "tac") then {
					// high ready jog/walk
					_duty = _duty * 1.6200;
				} else {
					_duty = _duty2;
				};
			};
			
			
			// < 10.5kg
			case (_weight < 231): {
				// low ready jog
				_duty2 = _duty * 1.0500;
				
				if (_animName select [9, 3] == "tac") then {
					// high ready jog/walk
					_duty = _duty * 1.6700;
				} else {
					_duty = _duty2;
				};
			};
			
			
			// < 11kg
			case (_weight < 243): {
				// low ready jog
				_duty2 = _duty * 1.0750;
				
				if (_animName select [9, 3] == "tac") then {
					// high ready jog/walk
					_duty = _duty * 1.7200;
				} else {
					_duty = _duty2;
				};
			};
			
			
			// >= 11kg
			default {
				// low ready jog
				_duty2 = _duty * 1.1300;
				
				if (_animName select [9, 3] == "tac") then {
					// high ready jog/walk
					_duty = _duty * 1.7500;
				} else {
					_duty = _duty2;
				};
			};
		};
		
		
		// Debug
		//showchat true; player globalchat format["Time: %1 - Duty: %2 - Mass: %3 - KG: %4", time, _duty, _weight, _weight * 0.04535211267605633802816901408451];
	};
	
} else {
    
	switch true do {
		
		// Swimming
		case (_animType in ["ssw", "swm", "bsw"]): {
			ace_advanced_fatigue_isSwimming = true;
			_duty = 7;
			_modLevel = 2;
		};
		
		// Wetsuit swimming
		case (_animType in ["sdv"]): {
			ace_advanced_fatigue_isSwimming = true;
			_duty = 0.6;
			_modLevel = 1;
		};
		
		// Wetsuit diving
		case (_animType in ["dve", "bdv"]): {
			ace_advanced_fatigue_isSwimming = true;
			_duty = 0.6;
			_modLevel = 1;
		};
	};
};


if (_dutyMod != 0) then {
	
	switch true do {
		// Jogging weapon lowered
		case (_modLevel == 1): {
			_dutyMod = 1 - ((1 - _dutyMod) / 2);
		};
		
		// Prone / swimming
		case (_modLevel == 2): {
			_dutyMod = 1 - ((1 - _dutyMod) * 2);
		};
	};
	
	_duty = _duty * _dutyMod;
};


// Debug
//hint format["Time: %1\n\nDuty: %2\nDutyMod: %3\n\nAnimName: %4\nAnimType: %5\n\nVelocity m/s: %6", time, _duty, _dutyMod, _animName, _animType, (vectorMagnitude (velocity ACE_player))];


_duty