// called by nul = [TARGET(OBJECT), Origin of shrapnelXCOORD(INT), Origin of shrapnelYCOORD (INT), Origin of shrapnelZCOORD AGL (INT), 
// Origin of shrapnelZCOORD ASL (INT), LUCK (INT - deviation from target in m)] execVM "fireshrap.sqf"; 

_target = _this select 0;
//_originObj = _this select 1;
_originLoc = _this select 1;

_effectiveRange = _this select 2;
_falloffValue = _this select 3;

_ox = _originLoc select 0; //(getPos _originObj) select 0;
_oy = _originLoc select 1;//(getPos _originObj) select 1;
_oz = _originLoc select 2;//(getPos _originObj) select 2;
_ozasl = _originLoc select 2;//(getPosASL _originObj) select 2;


nul = [_target, _ox, _oy, _oz, _ozasl, _effectiveRange, _falloffValue] execVM "DrongosArtillery\Airburst\FireShrapnel.sqf"; 