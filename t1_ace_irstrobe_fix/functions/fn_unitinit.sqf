params ["_unit"];

_unit setVariable ["T1_ACE_Attach_StrobeMode", -1];

_unit addEventHandler ["respawn", {
	(_this select 0) setVariable ["T1_ACE_Attach_StrobeMode", -1];
	
	// Workaround for an ACE bug. When a player respawns, the _attached list on the player's client is sometimes not reset properly.
	[_this select 0] spawn {
		private _unit = _this select 0;
		
		sleep 5;
		
		private _attachedList = _unit getVariable ["ace_attach_attached", []];
		
		if (_attachedList isEqualTo []) exitWith {};
		
		{
			_x params ["_xObject"];
			
			detach _xObject;
			
			if (!(_unit isKindOf "CAManBase")) then {
				_xObject setPos ((getPos _unit) vectorAdd [0, 0, -1000]);
				[{deleteVehicle (_this select 0)}, [_xObject], 2] call CBA_fnc_waitAndExecute;
			};
		} forEach _attachedList;
		
		_unit setVariable ["ace_attach_attached", nil, true];
	};
}];

// If killed, try to fix the attached item so that it doesn't float in mid air. Make the server do it, to sync it better in MP.
if (isServer) then {
	_unit addMPEventHandler ["MPKilled", {
		private _deadUnit = _this select 0;
		if (isServer) then {
			[_deadUnit] spawn ace_attach_fnc_handleItemKilled;
		};
	}];
};