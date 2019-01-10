_unit = _this select 0;
_ammo = _this select 4;
_round = nearestobject [_unit,_ammo];
systemChat "TRACKING ROUND";
nul = [_unit,_round] execVM "DrongosArtillery\Test\Track.sqf";
systemChat format ["Round velocity:  %1",((velocity _round) select 2)];