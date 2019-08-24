private _veh = _this select 0;
sleep 1;
if (local _veh) then {
	[_veh] call ace_fastroping_fnc_equipFRIES;
};