// Called from DrongosArtillery\Airburst\AirburstFire2.sqf

_airburstLocation = _this select 0;
_explosionSize = _this select 1; //1 for small, 2 for large
//_shrapnelInfo = _this select 2;
_concentration = _this select 2;
_effectiveRange = _this select 3;
_maxRange = _this select 4;
_fallOff = _this select 5;

_airburstLocationASL = _this select 0;

// 1 is default - no if statement required.
_airburstMunition = "HelicopterExploSmall";
if (_explosionSize == 2) then {_airburstMunition = "HelicopterExploBig"};
_obj= _airburstMunition createVehicle _airburstLocation;

nul = [_airburstLocationASL,_concentration,_effectiveRange,_maxRange,_falloff] execVM "DrongosArtillery\Airburst\CallShrapnel.sqf";