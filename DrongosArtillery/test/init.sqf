// Arty testing

hint "TEST INIT START";

_assets = [];
_asset = grpNull;
_tubes = [];
_tube = objNull;
_markerName = "";
_marker = "";

_assets = [(side player)] call dta_fnc_ArtilleryGroupsBySide;
while {((count _assets) > 0)} do {
	_asset = _assets select 0;
	_assets = _assets - [_asset];
	nul = [_asset] execVM "DrongosArtillery\Test\MarkGroup.sqf";
	/*
	_markerName = format ["%1",_asset];
	_marker = createMarkerLocal [_markerName,(getPosASL (vehicle leader _asset))];
	_marker setMarkerSizeLocal [1,1];
	_marker setMarkerTypeLocal "b_art";
	_marker setMarkerColorLocal "ColorBlue";
	*/
	sleep 0.1;
};

player allowDammage false;
hint "TEST INIT READY";