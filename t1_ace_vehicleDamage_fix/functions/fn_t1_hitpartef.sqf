params ["_unit"];

_unit addEventHandler ["HitPart", {
	
	//diag_log "TEST123 HITPART EF START";
	//diag_log str _this;
	
	private _vehicle = (_this select 0) select 0;
	private _shooter = (_this select 0) select 1;
	private _hitPos = (_this select 0) select 3;
	private _directDamage = (_this select 0) select 10;
	
	//diag_log format ["TEST123 HITPART EF - LOCAL: %1 - DIRECT: %2", local _shooter, _directDamage];
	
	// If shooter is local and damage is direct damage (not splash).
	if (local _shooter and _directDamage) then {
		private _previousTime = _vehicle getVariable ["t1_ace_vehicle_damage_fix_impactPos_time", 0];
		//diag_log format ["TEST123 HITPART EF - _previousTime: %1", _previousTime];
		//diag_log format ["TEST123 HITPART EF - time > _previousTime: %1", time > _previousTime];
		
		// If this code ran previously sooner than 7 seconds ago, then skip.
		// This is to avoid sending too much public variables over the network.
		if (time > _previousTime) then {
			// On hit object, set variable with the impact position, set variable to public.
			_vehicle setVariable ["t1_ace_vehicle_damage_fix_impactPos_time", time + 7];
			_vehicle setVariable ["t1_ace_vehicle_damage_fix_impactPos", _hitPos, true];
			//diag_log "TEST123 HITPART EF - SAVING POS";
		};
	};
	
	//diag_log "TEST123 HITPART EF END";
}];