if (isServer) then {
_rnd1 = floor random 6;

	_this setObjectTextureGlobal [0, ["\T1_Units_Faction1_Drones\desert\normal_ugv_01_ext_co.paa",
	"\T1_Units_Faction1_Drones\desert\normal_ugv_01_ext_co.paa",
	"\T1_Units_Faction1_Drones\desert\iraq_ugv_01_ext_co.paa",
	"\T1_Units_Faction1_Drones\desert\waldo_ugv_01_ext_co.paa",
	"\T1_Units_Faction1_Drones\desert\pinup_ugv_01_ext_co.paa",
	"\T1_Units_Faction1_Drones\desert\tier1_ugv_01_ext_co.paa"] select _rnd1];
};
