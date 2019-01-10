params ["_veh","_ammoCount"];
sleep 600;
[_veh, _ammoCount] remoteExec ["uk3cb_baf_vehicles_apache_fnc_gunjam_unjam", 0, false];