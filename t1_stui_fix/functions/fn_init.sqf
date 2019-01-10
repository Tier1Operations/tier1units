private _timeout = time + 60;
waitUntil {sleep 1; !isNil "STHud_IsAttendant" or time > _timeout};

STHud_IsAttendant =
{
	params ["_type"];
	(getNumber(configFile >> "CfgVehicles" >> _type >> "attendant") == 1) and (getNumber(configFile >> "CfgVehicles" >> _type >> "T1_NoMedicIcon") != 1);
};

{
	if ((toLower _x) find "isatd_" != -1) then {
		player setVariable [_x, nil];
	};
} forEach (allVariables player);

/*
player setVariable ["isatd_T1_SF_Marksman_SOS_Standard_F", nil];
player setVariable ["isatd_T1_SF_Explosive_Standard_F", nil];
player setVariable ["isatd_T1_SF_Medic_Standard_F", nil];
player setVariable ["isatd_T1_SF_FTL_Standard_F", nil];
player setVariable ["isatd_T1_SF_AT_Standard_F", nil];
player setVariable ["isatd_T1_SF_AR_Standard_F", nil];

player setVariable ["isatd_T1_Spotter_Standard_F", nil];
player setVariable ["isatd_T1_Sniper_Standard_F", nil];

player setVariable ["isatd_T1_Spotter_Light_F", nil];
player setVariable ["isatd_T1_Sniper_Light_F", nil];

player setVariable ["isatd_T1_Scout_TL_Standard_F", nil];
player setVariable ["isatd_T1_Scout_Standard_F", nil];

player setVariable ["isatd_T1_SF_Marksman_SOS_Standard_F_D", nil];
player setVariable ["isatd_T1_SF_Explosive_Standard_F_D", nil];
player setVariable ["isatd_T1_SF_Medic_Standard_F_D", nil];
player setVariable ["isatd_T1_SF_FTL_Standard_F_D", nil];
player setVariable ["isatd_T1_SF_AT_Standard_F_D", nil];
player setVariable ["isatd_T1_SF_AR_Standard_F_D", nil];

player setVariable ["isatd_T1_Spotter_Standard_F_D", nil];
player setVariable ["isatd_T1_Sniper_Standard_F_D", nil];

player setVariable ["isatd_T1_Spotter_Light_F_D", nil];
player setVariable ["isatd_T1_Sniper_Light_F_D", nil];

player setVariable ["isatd_T1_Scout_TL_Standard_F_D", nil];
player setVariable ["isatd_T1_Scout_Standard_F_D", nil];
*/