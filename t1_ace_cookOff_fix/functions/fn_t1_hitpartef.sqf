params ["_unit"];

_unit addEventHandler ["HitPart", {
	
	//diag_log "TEST123 HITPART EF START";
	//diag_log str _this;
	//diag_log "TEST123 HITPART EF END";
	
	if ((_this select 0) select 10) then {
		((_this select 0) select 0) setVariable ["t1_ace_cookOff_fix_var", (_this select 0) select 3, true];
	};
}];