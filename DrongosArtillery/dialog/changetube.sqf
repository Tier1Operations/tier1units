_action = _this select 0;
_asset = dtaSelectedAsset;
_tubes = [_asset] call dta_fnc_GroupVehicles;
_max = count _tubes;
_iccCode = 200;
_lastWarheadType = "";
if (_action == "Previous") exitWith {
	if (dtaSelectedTubeIndex == 0) exitWith {};
	dtaSelectedTubeIndex = dtaSelectedTubeIndex - 1;
	dtaSelectedTube = _tubes select dtaSelectedTubeIndex;
	if (dtaDebug) then {systemChat format ["A: %1",(currentMagazine dtaSelectedTube)]};
	((findDisplay _iccCode) displayCtrl (_iccCode + 18)) ctrlSetText format ["Tube: %1/%2",(dtaSelectedTubeIndex + 1),(count _tubes)];
	//execVM "DrongosArtillery\Dialog\DisplayWarheads.sqf";
	call dta_fnc_DisplayWarheads;
};

if (_action == "Next") exitWith {
	if (dtaSelectedTubeIndex == (_max - 1)) exitWith {};
	dtaSelectedTubeIndex = dtaSelectedTubeIndex + 1;
	dtaSelectedTube = _tubes select dtaSelectedTubeIndex;
	if (dtaDebug) then {systemChat format ["A: %1",(currentMagazine dtaSelectedTube)]};
	((findDisplay _iccCode) displayCtrl (_iccCode + 18)) ctrlSetText format ["Tube: %1/%2",(dtaSelectedTubeIndex + 1),(count _tubes)];
	//execVM "DrongosArtillery\Dialog\DisplayWarheads.sqf";
	call dta_fnc_DisplayWarheads;
};