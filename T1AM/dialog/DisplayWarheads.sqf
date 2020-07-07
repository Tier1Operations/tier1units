private["_iccCode","_list","_lastWarheadType","_lastWarheadTypeIndex","_warheadText","_warheadType",
"_roundsAvailable","_vehicle","_magazines","_magazine","_count","_index"];

disableSerialization;

_iccCode = 200;
_list = (findDisplay _iccCode) displayCtrl (_iccCode + 6);
lbClear _list;
_lastWarheadType = T1AM_LastWarhead;
_lastWarheadTypeIndex = 0;
_warheadText = "";
_warheadType = "";
_roundsAvailable = 0;

_vehicle = T1AM_SelectedTube;
_magazines = magazinesAmmo _vehicle;
_count = 0;
_index = 0;

if (!isNil "_magazines") then {
	while {_index < (count _magazines)} do {
		_magazine = _magazines select _index;
		_warheadType = _magazine select 0;
		_warheadText = getText (configFile >> "CfgMagazines" >> _warheadType >> "displayName");
		_roundsAvailable = _magazine select 1;
		
		switch true do {
			case (_warheadType in T1AM_GPSGuidedTypes) : {
				_warheadText = _warheadText + " (GPS)";
			};
			case (_warheadType in T1AM_GPSLaserTypes) : {
				_warheadText = _warheadText + " (GPS/LASER)";
			};
			case (_warheadType in T1AM_GPSSeekerTypes) : {
				_warheadText = _warheadText + " (GPS/DISCRIMINATING)";
			};
			case (_warheadType in T1AM_LaserTypes) : {
				_warheadText = _warheadText + " (LASER)";
			};
		};
		
		if (_warheadType == _lastWarheadType) then {_lastWarheadTypeIndex = _count};
		if (_roundsAvailable > 0) then {
			_list lbAdd format["%1: %2",_warheadText,_roundsAvailable];
			_list lbSetData [(lbSize _list)-1,_warheadType];
			_count = _count + 1;
		};
		_index = _index + 1;
	};
	lbSetCurSel [(_iccCode + 6),_lastWarheadTypeIndex];
};