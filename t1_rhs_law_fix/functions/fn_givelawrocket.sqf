_unit = _this select 0;

if (!local _unit) exitWith {};

if (!isPlayer _unit) exitWith {
	_unit addSecondaryWeaponItem "rhs_m72a7_mag";
};

while {true} do {
	
	waituntil {sleep 2; (currentWeapon player) == "rhs_weap_m72a7"};
	
	if (count (secondaryWeaponMagazine player) == 1) then {
		
		player removeMagazines "rhs_m72a7_mag";
		
	} else {
		
		if (!("rhs_m72a7_mag" in (magazines player)) and {secondaryWeapon player == "rhs_weap_m72a7"}) then {
			if (player canAdd "rhs_m72a7_mag") then {
				player addMagazine "rhs_m72a7_mag";
			} else {
				player addSecondaryWeaponItem "rhs_m72a7_mag";
			};
		};
	};
	
	while {{_x == "rhs_m72a7_mag"} count (magazines player) > 1} do {
		player removeMagazineGlobal "rhs_m72a7_mag";
		sleep 0.1;
	};
	
	sleep 2;
};