// Exit if player not in vehicle
if (vehicle (missionNamespace getVariable ["bis_fnc_moduleRemoteControl_unit", player]) != (_this select 0)) exitWith {};

// Exit if 3rd person view
if (cameraView == "External") exitWith {};

// Shake camera on cannon fired
if ((_this select 1) == "UK3CB_BAF_CannonM230") then {
	enableCamShake true;
	addCamShake [0.07, 0.5, 10.42];
};