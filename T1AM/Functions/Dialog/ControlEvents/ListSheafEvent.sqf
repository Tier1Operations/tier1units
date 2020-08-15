#include "\T1AM\Defines.hpp"

params ["_control", "_selectedIndex"];

private _dialog = findDisplay 47200;
private _sheaf = _control lbData _selectedIndex;

T1AM_LastSheaf = _sheaf;

switch (_sheaf) do {
	case ("CIRCLE") : {
		(_dialog displayCtrl 47233) ctrlShow true;
		(_dialog displayCtrl 47233) ctrlEnable true;
		(_dialog displayCtrl 47234) ctrlShow false;
		(_dialog displayCtrl 47234) ctrlEnable false;
		(_dialog displayCtrl 47235) ctrlShow false;
		(_dialog displayCtrl 47235) ctrlEnable false;
		(_dialog displayCtrl 47236) ctrlShow false;
		(_dialog displayCtrl 47236) ctrlEnable false;

		(_dialog displayCtrl 47213) ctrlShow true;
		(_dialog displayCtrl 47213) ctrlEnable true;
		(_dialog displayCtrl 47214) ctrlShow false;
		(_dialog displayCtrl 47214) ctrlEnable false;
		(_dialog displayCtrl 47224) ctrlShow false;
		(_dialog displayCtrl 47224) ctrlEnable false;
		(_dialog displayCtrl 47225) ctrlShow false;
		(_dialog displayCtrl 47225) ctrlEnable false;
	};
	
	case ("BOX") : {
		(_dialog displayCtrl 47233) ctrlShow true;
		(_dialog displayCtrl 47233) ctrlEnable true;
		(_dialog displayCtrl 47234) ctrlShow true;
		(_dialog displayCtrl 47234) ctrlEnable true;
		(_dialog displayCtrl 47235) ctrlShow true;
		(_dialog displayCtrl 47235) ctrlEnable true;
		(_dialog displayCtrl 47236) ctrlShow false;
		(_dialog displayCtrl 47236) ctrlEnable false;

		(_dialog displayCtrl 47213) ctrlShow true;
		(_dialog displayCtrl 47213) ctrlEnable true;
		(_dialog displayCtrl 47214) ctrlShow true;
		(_dialog displayCtrl 47214) ctrlEnable true;
		(_dialog displayCtrl 47224) ctrlShow true;
		(_dialog displayCtrl 47224) ctrlEnable true;
		(_dialog displayCtrl 47225) ctrlShow false;
		(_dialog displayCtrl 47225) ctrlEnable false;
	};
	
	case ("LINE") : {
		(_dialog displayCtrl 47233) ctrlShow false;
		(_dialog displayCtrl 47233) ctrlEnable false;
		(_dialog displayCtrl 47234) ctrlShow false;
		(_dialog displayCtrl 47234) ctrlEnable false;
		(_dialog displayCtrl 47235) ctrlShow true;
		(_dialog displayCtrl 47235) ctrlEnable true;
		(_dialog displayCtrl 47236) ctrlShow true;
		(_dialog displayCtrl 47236) ctrlEnable true;

		(_dialog displayCtrl 47213) ctrlShow false;
		(_dialog displayCtrl 47213) ctrlEnable false;
		(_dialog displayCtrl 47214) ctrlShow false;
		(_dialog displayCtrl 47214) ctrlEnable false;
		(_dialog displayCtrl 47224) ctrlShow true;
		(_dialog displayCtrl 47224) ctrlEnable true;
		(_dialog displayCtrl 47225) ctrlShow true;
		(_dialog displayCtrl 47225) ctrlEnable true;
	};
	
	default {
		(_dialog displayCtrl 47233) ctrlShow false;
		(_dialog displayCtrl 47233) ctrlEnable false;
		(_dialog displayCtrl 47234) ctrlShow false;
		(_dialog displayCtrl 47234) ctrlEnable false;
		(_dialog displayCtrl 47235) ctrlShow false;
		(_dialog displayCtrl 47235) ctrlEnable false;
		(_dialog displayCtrl 47236) ctrlShow false;
		(_dialog displayCtrl 47236) ctrlEnable false;

		(_dialog displayCtrl 47213) ctrlShow false;
		(_dialog displayCtrl 47213) ctrlEnable false;
		(_dialog displayCtrl 47214) ctrlShow false;
		(_dialog displayCtrl 47214) ctrlEnable false;
		(_dialog displayCtrl 47224) ctrlShow false;
		(_dialog displayCtrl 47224) ctrlEnable false;
		(_dialog displayCtrl 47225) ctrlShow false;
		(_dialog displayCtrl 47225) ctrlEnable false;
	};
};
