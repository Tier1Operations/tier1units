if (!hasInterface) exitWith {};

// Wait until ACE has added their event handler.
waitUntil{!isNull player};
sleep 5;

if ((_this select 0) != player) exitWith {};

// Remove ACE Goggles EH.
player removeEventHandler ["explosion", 0];
player removeEventHandler ["explosion", 1];

sleep 2;

// Add a modified version of ACE's event handler.
player addEventHandler ["Explosion", {
	
	if (alive ace_player) then {
		private "_effects";
		
		if (((_this select 1) > 0.16) and {(random 100) < 50}) then {call ace_goggles_fnc_ApplyDirtEffect;};
		
		_effects = (ace_player getVariable["ace_goggles_condition", [false,[false,0,0,0],false]]);
		if (_effects select 2) exitWith {};
		if (((_this select 1) call ace_goggles_fnc_GetExplosionIndex) < getNumber(ConfigFile >> "CfgGlasses" >> ace_goggles_Current >> "ACE_Resistance")) exitWith {};
		if !([ace_player] call ace_goggles_fnc_isGogglesVisible) exitWith {};
		_effects = (ace_player getVariable["ace_goggles_condition", [false,[false,0,0,0],false]]);
		_effects set [2, true];
		ace_player setVariable["ace_goggles_condition",_effects];
		
		if (getText(ConfigFile >> "CfgGlasses" >> ace_goggles_Current >> "ACE_OverlayCracked") != "" && {cameraOn == ace_player}) then {
			if (call ace_goggles_fnc_ExternalCamera) exitWith {};
			private "_display";
			_display = uiNamespace getVariable ["ace_goggles_display", displayNull];
			if (isNull(_display)) then {
				150 cutRsc["RscACE_Goggles", "PLAIN",1, false];
			};
			(_display displayCtrl 10650) ctrlSetText getText(ConfigFile >> "CfgGlasses" >> ace_goggles_Current >> "ACE_OverlayCracked");
		};
	};
}];