// Called from Asset Dialog
// Checks if the asset can be taken control of (ie. not busy/not controlled by another player)

_prePlotted = _this select 0;

//DIAG_LOG format["CONTROLASSET - _prePlotted: %1", _prePlotted];
//DIAG_LOG format["CONTROLASSET - ABORTING: %1", ((_prePlotted) AND ((count dtaSelectedPrePlotted) == 0))];

if ((_prePlotted) AND ((count dtaSelectedPrePlotted) == 0)) exitWith {hint "No mission selected"};

_asset = grpNull;
_asset = dtaSelectedAsset;

// Abort if there's something wrong with the leader's vehicle/gunner.
_veh = (vehicle (leader dtaSelectedAsset));
_gunner = gunner _veh;
_abort = false;

switch true do {
	case (isNull _gunner):{_abort = true};
	case (isNull _veh):{_abort = true};
	case (!(alive _gunner)):{_abort = true};
	case (!(alive _veh)):{_abort = true};
	case (vehicle _gunner == _gunner):{_abort = true};
	case (!(canFire _veh)):{_abort = true};
};
if (_abort) exitWith {hint "Asset is not responding."; [false] execVM "DrongosArtillery\Dialog\EndMission.sqf"};


//DIAG_LOG format["CONTROLASSET - (_asset == dtaControlledAssetLocal): %1", (_asset == dtaControlledAssetLocal)];

if (_asset == dtaControlledAssetLocal) then {closeDialog 0;sleep 0.3};
if (_prePlotted) then {dtaPrePlotted = true};
if (_asset == dtaControlledAssetLocal) exitWith {nul = [_prePlotted] execVM "DrongosArtillery\Dialog\Control.sqf"};
if (_asset in dtaAssetsBusy) exitWith {
	(leader _asset) sideChat "Negative, asset is busy.";
	if NOT(dtaScriptMode) then {playSound "dtaBeep"}
};
if (_asset in dtaControlledAssets) exitWith {
	(leader _asset) sideChat "Negative, processing other orders.";
	if NOT(dtaScriptMode) then {playSound "dtaBeep"};
};

// If the local controlled asset is NOT the same as the selected asset (and both are groups), exit
if NOT(isNull (leader dtaControlledAssetLocal)) exitWith {
	(leader _asset) sideChat "Negative. You are already controlling another asset.";
	if NOT(dtaScriptMode) then {playSound "dtaBeep"};
};


dtaControlledAssetLocal = _asset;
//if NOT(_asset in dtaControlledAssets) then {dtaControlledAssets = dtaControlledAssets + [_asset]; publicVariable "dtaControlledAssets"};
dtaControlledAssets = dtaControlledAssets + [_asset];
publicVariable "dtaControlledAssets";
closeDialog 0;



_asset setVariable ["DTA_controlledBy", player, true];
[[_asset],"DrongosArtillery_fnc_checkForDC", false] call BIS_fnc_MP;



// If player is unconscious with the ACE mod for a certain amount of time, then relinquish control of the asset.
if (isNil "DTA_UnconsciousCheck_Loop") then {
	DTA_UnconsciousCheck_Loop = true;
	
	[] spawn {
		_timeOut = 0;
		_abort = false;
		
		while {!isNull dtaControlledAssetLocal} do {
			if (player getVariable ["ACE_isUnconscious", false]) then {
				if (_timeOut > 60) then {
					hint format["Observer not respnding.\n\nEnding mission."];
					[true] execVM "DrongosArtillery\Dialog\EndMission.sqf";
					_abort = true;
				};
				_timeOut = _timeout + 15;
			} else {
				_timeOut = 0;
			};
			
			if (_abort) exitWith {};
			
			sleep 15;
		};
		
		DTA_UnconsciousCheck_Loop = nil;
	};
};



if (_prePlotted) then {dtaPrePlotted = true};

//DIAG_LOG format["CONTROLASSET - IF _prePlotted: %1 - dtaPrePlotted: %2", _prePlotted, dtaPrePlotted];

_assetCallsign = "";
_playerCallsign = "";
_assetCallsign = [dtaSelectedAsset] call dta_fnc_TrimGroupName;
_playerCallsign = [(group player)] call dta_fnc_TrimGroupName;

if ((dtaHaveAimpoint) OR (dtaPrePlotted)) then {
	player sideChat format ["%1 this is %2, adjust fire, over",_assetCallsign,_playerCallsign];
	sleep 1;
	nul = [_prePlotted] execVM "DrongosArtillery\Dialog\Control.sqf";
	sleep 1;
	//(leader _asset) sideChat format ["%2 this is %1, adjust fire, out",_assetCallsign,_playerCallsign];
	_message = format ["%2 this is %1, adjust fire, out",_assetCallsign,_playerCallsign];
	[_asset,_message,"AdjustFire"] call dta_fnc_SendComms;

} else {
	nul = [_prePlotted] execVM "DrongosArtillery\Dialog\Aimpoint.sqf"
};