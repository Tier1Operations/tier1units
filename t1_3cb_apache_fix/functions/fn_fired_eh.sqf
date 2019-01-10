/*
Author: www.3commandobrigade.com & Tim Beswick
Adds camera shake when a vehicle fires
Arguments:
0: unit
1: weapon
5: magname
Return Value:
none
*/
	
/////////////////////////////////////////////////////////////////////////////////////////////
// Main
//////////////////////////////////////////////////////////////////////////////////////////

//diag_log format["Fired EH: 1=%1, 2=%2, 3=%3, 4=%4, 5=%5, 6=%6, 7=%7", _this select 0, _this select 1, _this select 2, _this select 3, _this select 4, _this select 5, _this select 6];

private _veh = _this select 0;

// Crew only
if (player in (crew _veh)) then {

	private _weapon = _this select 1;

	// Audible beep when IRjammer is near end of its cycle
	//if (_weapon == "UK3CB_BAF_IRJammer") then {
	//	private _ammoCount = _veh magazineTurretAmmo ["UK3CB_BAF_IRJammer_Magazine", [-1]];
	//	if (((_ammoCount % 100) <= 10) && ((_ammoCount % 3) == 2)) then {
	//		playSound "UK3CB_IRJammer_cycle_end";
	//		//diag_log "****** IR jammer near end of cycle";
	//	}; 
	//} else {	
	
		// Camera shake for main weapons
		private _cannon = [
			"UK3CB_BAF_CannonM230"
		];
		private _missile = [
			"UK3CB_BAF_Missiles_CRV7_PG",
			"UK3CB_BAF_Missiles_CRV7",
			"UK3CB_BAF_HellfireLauncher_K",
			"UK3CB_BAF_HellfireLauncher_L",
			"UK3CB_BAF_HellfireLauncher_N"
		];
		if ((cameraView != "EXTERNAL") && (cameraView != "GUNNER"))  then {
			if (_weapon in _cannon) then {
				enableCamShake true;
				addCamShake [1, 0.5, 25];
			} else {
				if (_weapon in _missile) then {
					enableCamShake true;
					addCamShake [2, 1, 6];
				};
			};
		};

		//If weapon is M230 cannon call the jam routine
		if(_weapon == "UK3CB_BAF_CannonM230") then {
			[_veh] call UK3CB_BAF_Vehicles_Apache_fnc_gunjam;
		};
	//};
};