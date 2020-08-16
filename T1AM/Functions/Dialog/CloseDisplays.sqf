params ["_exitCode"];

if (_exitCode == 0 or _exitCode == 2) then {
	(findDisplay 47100) closeDisplay 0;
	(findDisplay 47200) closeDisplay 0;
	(findDisplay 47300) closeDisplay 0;
	(findDisplay 47400) closeDisplay 0;
	(findDisplay 47500) closeDisplay 0;
	(findDisplay 47050) closeDisplay 0;
};