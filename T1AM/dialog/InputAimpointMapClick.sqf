// This allows the player to click on the map to choose the coordinates.
// After the player clicks, it will run the next part of the script (MapClickProcess).

if (!T1AM_AllowMapClick) exitWith {hint "Mapclick option disabled"};

openMap true;
onMapSingleClick "";
onMapSingleClick "
	[_pos] call T1AM_Fnc_InputAimpointMapClickProcess;
	onMapSingleClick '';
	true
";