// Checks if the artillery dialog can be shown

if NOT(dtaReady) exitWith {hint "DTA starting, please wait..."};
if (time < 4) exitWith {};


if NOT(alive player) exitWith {};
_haveRadio = false;
_haveRadio = [] call dta_fnc_HasRadio;

_authorized = false;
if (dtaRestrictUsers) then {
	if ((typeOf (vehicle player)) in dtaAuthorizedClasses) then {_authorized = true};
	if ((typeOf player) in dtaAuthorizedClasses) then {_authorized = true};
	if (player in dtaAuthorizedUnits) then {_authorized = true};
};

if ((dtaRestrictUsers) AND (NOT _authorized)) exitWith {hint "You are not an authorized artillery user."};

// Use vehicle radio
if (NOT ((vehicle player) == player)) then {_haveRadio = true};

//_haveRadio = [] call dta_fnc_HasRadio;
if (_haveRadio) exitWith {
	closeDialog 0;
	if (dtaLastDialog == "Assets") then {nul = [] execVM "DrongosArtillery\Dialog\Assets.sqf"};
	if (dtaLastDialog == "Aimpoint") then {nul = [] execVM "DrongosArtillery\Dialog\Aimpoint.sqf"};
	if (dtaLastDialog == "Control") then {nul = [false] execVM "DrongosArtillery\Dialog\Control.sqf"};
};

hint "No suitable radio.";