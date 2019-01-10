sleep 3;
if (!(isServer)) exitWith {};
//dtaMarkTubes = true;
_assets = [];
_asset = grpNull;

_assets = [(side player)] call dta_fnc_ArtilleryGroupsBySide;
while {((count _assets) > 0)} do {
	_asset = _assets select 0;
	_assets = _assets - [_asset];
	nul = [_asset] execVM "DrongosArtillery\Test\MarkGroup.sqf";
	sleep 0.1;
};