params ["_sh"];

private _p = getpos _sh;
private _col = [[0.7,0.7,0.7,0],[0.7,0.7,0.7,0.5],[0.7,0.7,0.7,0.4],[0.8,0.8,0.8,0.3],[0.9,0.9,0.9,0.15], [1,1,1,0]];
private _i = 1;
private _no = 9;
private _vec = 0;

while {_i < _no} do {
	drop [["\A3\data_f\ParticleEffects\Universal\Universal", 16, 7, 48], "", "Billboard", 1, 5, [0, - 1.3, 0],
	[-0.2+random 0.2,-0.6*_i + random 0.5,-0.2+random 0.2], 1, 1, 0.80, 0.4, [0.4,(0.8*_i)+random 0.2],_col,[2,0.7,0.5],0.1,0.1,"","",_sh];
	_i=_i+1;
};

if ((abs(_p select 2) < 2) and !(surfaceiswater _p)) then {
	_vec = vectordir _sh;
	_no = 20 + random 7;
	_i = 0;
	while {_i < _no} do 
	{
		drop [["\A3\data_f\ParticleEffects\Universal\Universal.p3d", 16, 12, 13, 0], "", "Billboard", 1, 7, 
		[_p select 0, _p select 1, 0], [-((_vec select 0) -0.5 +(random 1))*4, 
		-((_vec select 1) -0.5 +(random 1))*4, 0.3 + random 0.3], 
		0, 0.104, 0.08, 0.04, [2,4], [[0.6, 0.5, 0.4, 0],[0.6, 0.5, 0.4, 0.4], [0.6, 0.5, 0.4, 0.2], 
		[0.6, 0.5, 0.4, 0]], [1000], 1, 0, "", "", ""];
		_i=_i + 1;
	};
};