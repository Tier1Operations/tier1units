if (!hasInterface) exitWith {};

private _ppEffectHandle = ppEffectCreate ["colorCorrections", 1501];
_ppEffectHandle ppEffectAdjust [1, 0.95, -0.05, [0, 0, 0, 0], [0.25, 0.6, 0.95, 0], [1, 1, 1, 0]];
_ppEffectHandle ppEffectForceInNVG true;
_ppEffectHandle ppEffectCommit 0;

while {true} do {
	if ((currentVisionMode player) == 1 and {alive player and hmd player == "ACE_NVG_Gen4" and isNull curatorCamera}) then {
		_ppEffectHandle ppEffectEnable true;
	} else {
		_ppEffectHandle ppEffectEnable false;
	};
	sleep 0.15;
};