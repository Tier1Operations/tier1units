if (isServer) then {
_rnd1 = floor random 6;

	_this setObjectTextureGlobal [0, ["\t1_drones\desert\normal_ugv_01_ext_co.paa",
	"\t1_drones\desert\normal_ugv_01_ext_co.paa",
	"\t1_drones\desert\iraq_ugv_01_ext_co.paa",
	"\t1_drones\desert\waldo_ugv_01_ext_co.paa",
	"\t1_drones\desert\pinup_ugv_01_ext_co.paa",
	"\t1_drones\desert\tier1_ugv_01_ext_co.paa"] select _rnd1];
};
