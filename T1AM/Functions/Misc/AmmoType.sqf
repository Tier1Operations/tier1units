// Returns the type of ammo in a short text-friendly form

disableSerialization;

params ["_ammo"];

private _out = "";

switch (_ammo) do {
	// Mk6
	case ("8Rnd_82mm_Mo_shells") : {_out = "HE"};
	case ("8Rnd_82mm_Mo_Flare_white") : {_out = "FLARE"};
	case ("8Rnd_82mm_Mo_Smoke_white") : {_out = "SMOKE"};
	case ("8Rnd_82mm_Mo_LG") : {_out = "LASER DP"};
	case ("8Rnd_82mm_Mo_guided") : {_out = "GPS HE"};
	
	// Sholef
	case ("32Rnd_155mm_Mo_shells") : {_out = "HE"};
	case ("6Rnd_155mm_Mo_smoke") : {_out = "SMOKE"};
	case ("2Rnd_155mm_Mo_guided") : {_out = "DISCR DP"};
	case ("2Rnd_155mm_Mo_cluster") : {_out = "CLUST. HE"};
	case ("2Rnd_155mm_Mo_lg") : {_out = "LASER DP"};
	case ("6Rnd_155mm_Mo_mine") : {_out = "MINE AP"};
	case ("6Rnd_155mm_Mo_AT_mine") : {_out = "MINE AT"};
	
	// Sochor
	case ("32Rnd_155mm_Mo_shells_O") : {_out = "HE"};
	case ("6Rnd_155mm_Mo_smoke_O") : {_out = "SMOKE"};
	case ("2Rnd_155mm_Mo_guided_O") : {_out = "DISCR DP"};
	case ("2Rnd_155mm_Mo_Cluster_O") : {_out = "CLUST. HE"};
	case ("4Rnd_155mm_Mo_LG_O") : {_out = "LASER DP"};
	case ("6Rnd_155mm_Mo_mine_O") : {_out = "MINE AP"};
	case ("6Rnd_155mm_Mo_AT_mine_O") : {_out = "MINE AT"};
	
	// Seara / Kamaz MRL
	case ("12Rnd_230mm_rockets") : {_out = "ROCKET HE"};
	
	// M109
	case ("rhs_mag_155mm_m795_28") : {_out = "HE"};
	case ("rhs_mag_155mm_m825a1_2") : {_out = "WP"};
	case ("rhs_mag_155mm_485_2") : {_out = "FLARE"};
	case ("rhs_mag_155mm_m712_2") : {_out = "LASER AT"};
	case ("rhs_mag_155mm_m731_1") : {_out = "MINE AP"};
	case ("rhs_mag_155mm_raams_1") : {_out = "MINE AT"};
	case ("rhs_mag_155mm_m864_3") : {_out = "CLUST. HE"};
	
	// M119
	case ("RHS_mag_m1_he_12") : {_out = "HE"};
	case ("rhs_mag_m314_ilum_4") : {_out = "FLARE"};
	case ("rhs_mag_m60a2_smoke_4") : {_out = "SMOKE"};
	
	// HIMAS
	case ("rhs_mag_m26a1_6") : {_out = "CLUST. HE"};
	
	// BM21
	case ("rhs_mag_m21of_1") : {_out = "ROCKET HE"};
	case ("rhs_mag_9m28f_1") : {_out = "ROCKET HE"};
	case ("rhs_mag_9m521_1") : {_out = "ROCKET HE"};
	case ("rhs_mag_9m522_1") : {_out = "ROCKET HE"};
	case ("rhs_mag_9m28k_1") : {_out = "MINES AT"};
	case ("rhs_mag_9m218_1") : {_out = "ROCKET AT"};
	
	// Podnos
	case ("rhs_mag_3vo18_10") : {_out = "HE"};
	case ("rhs_mag_3vs25m_10") : {_out = "FLARE"};
	case ("rhs_mag_d832du_10") : {_out = "SMOKE"};
	
	// D30 AT
	case ("rhs_mag_of462") : {_out = "HE"};
	case ("rhs_mag_bk13") : {_out = "AT"};
	
	// D30 Arty
	case ("rhs_mag_d462_2") : {_out = "SMOKE"};
	case ("rhs_mag_s463_2") : {_out = "FLARE"};
	case ("rhs_mag_3of56_10") : {_out = "HE"};
	case ("rhs_mag_3of69m_2") : {_out = "AT"};
	
	// 2S1
	case ("rhs_mag_3of56_10") : {_out = "HE"};
	case ("rhs_mag_3of56_5") : {_out = "HE"};
	case ("rhs_mag_bk13_5") : {_out = "AT"};
	
	// 2S3
	case ("rhs_mag_HE_2a33") : {_out = "HE"};
	case ("rhs_mag_WP_2a33") : {_out = "WP"};
	case ("rhs_mag_SMOKE_2a33") : {_out = "SMOKE"};
	case ("rhs_mag_ILLUM_2a33") : {_out = "FLARE"};
	case ("rhs_mag_LASER_2a33") : {_out = "LASER AT"};
	
	default {_out = getText(configFile >> "CfgMagazines" >> _ammo >> "displaynameshort")};
};

_out