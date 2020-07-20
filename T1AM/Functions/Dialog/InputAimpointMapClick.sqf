// This allows the player to click on the map to choose the coordinates.
// After the player clicks, it will run the next part of the script (InputAimpoint).

if (!T1AM_AllowMapClick) exitWith {
	private _str = "MAPCLICK OPTION IS DISABLED";
	[0, _str, 5] spawn T1AM_Fnc_ShowMessage;
};

openMap true;
onMapSingleClick "";
onMapSingleClick "
	[false, _pos] call T1AM_Fnc_InputAimpoint;
	onMapSingleClick '';
	true
";