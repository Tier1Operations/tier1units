if (isServer) then {
_rnd1 = floor random 6;

	_this setObjectTextureGlobal [0, ["\t1_drones\wood\normal_ugv_01_ext_co.paa",
	"\t1_drones\wood\normal_ugv_01_ext_co.paa",
	"\t1_drones\wood\iraq_ugv_01_ext_co.paa",
	"\t1_drones\wood\waldo_ugv_01_ext_co.paa",
	"\t1_drones\wood\pinup_ugv_01_ext_co.paa",
	"\t1_drones\wood\tier1_ugv_01_ext_co.paa"] select _rnd1];
}; /* "if (isServer)" END - DO NOT DELETE
