// Debug mode is enabled. Mark all artillery units.

waitUntil {sleep 1; T1AM_Ready};
sleep 1;

while {true} do {
	private _assets = [west] call T1AM_Fnc_ArtilleryGroupsBySide;
	_assets = _assets + ([east] call T1AM_Fnc_ArtilleryGroupsBySide);
	_assets = _assets + ([resistance] call T1AM_Fnc_ArtilleryGroupsBySide);
	_assets = _assets + ([civilian] call T1AM_Fnc_ArtilleryGroupsBySide);
	private _vehicles = [];
	private _markers = [];
	
	{
		_vehicles = _vehicles + ([_x] call T1AM_Fnc_GroupVehicles);
	} forEach _assets;
	
	{
		private _marker = createMarkerLocal [str(time + random 99999), getPos _x];
		_marker setMarkerTypeLocal "n_mortar";
		_marker setMarkerColorLocal "ColorGreen";
		_marker setMarkerTextLocal (str _x);
		_markers pushback _marker;
	} forEach _vehicles;
	
	private _abort = false;
	for [{_i = 0}, {_i < 167}, {_i = _i+1}] do {
		sleep 0.03; //sleep 5
		if (!T1AM_Debug_Mode) exitWith {_abort = true};
	};
	
	{
		deleteMarkerLocal _x;
	} forEach _markers;
	
	if (_abort) exitWith {};
};