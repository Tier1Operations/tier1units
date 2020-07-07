// Takes an object name and gives it a natural text name (eg. B_AH9_F becomes "AH-9")

_object = _this select 0;
_class = typeOf _object;
_name = "Unknown";
_name = getText (configFile >> "CfgVehicles" >> _class >> "displayName");
_name