if (isServer) then {
_rnd1 = floor random 6;

	_this setObjectTextureGlobal [0, ["\T1_Units_Faction1_Drones\wood\normal_ugv_01_ext_co.paa",
	"\T1_Units_Faction1_Drones\wood\normal_ugv_01_ext_co.paa",
	"\T1_Units_Faction1_Drones\wood\iraq_ugv_01_ext_co.paa",
	"\T1_Units_Faction1_Drones\wood\waldo_ugv_01_ext_co.paa",
	"\T1_Units_Faction1_Drones\wood\pinup_ugv_01_ext_co.paa",
	"\T1_Units_Faction1_Drones\wood\tier1_ugv_01_ext_co.paa"] select _rnd1];
};
