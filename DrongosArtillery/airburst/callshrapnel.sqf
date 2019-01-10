/*
//Called by DrongosArtillery\Airburst\AirburstHit.sqf
// nul = [Shrapnel start point (Array or (getPosASL OBJECT) ), Concentration (bits per person), 99.9% Lethal range (prior to large dispersion), Maximum range (targets outside this range will never get shrapnel fired at them), Rate of falloff after lethal range (1 is linear, 3 is normal - drops off rapidly after that range, 5 is extreme - drops off very rapidly after that range)] execVM "ZSU_A3Shrapnel\callshrap.sqf"
//
//
*/

_destroyPos = _this select 0; //Position for shrapnel to originate from
_conc = _this select 1; //Concentration of shrapnel
_effRange = _this select 2; //Effective range of the shrapnel
_maxRange = _this select 3; //Max range of shrapnel
_falloff = _this select 4; //Rate shrapnel falls off 1 - linear, 3 standard, 5 - big drop

if (_falloff < 1) then {_falloff = 1;};
if (_falloff > 5) then {_falloff = 5;};

_listNear = _destroyPos nearEntities _maxRange; 

{
for [{_i = 0}, {_i < (_conc)}, {_i = _i + 1}] do{
	nul = [_x, _destroyPos, _effRange, _falloff] execVM "DrongosArtillery\Airburst\OriginToTarget.sqf";
	}
}foreach _listNear;