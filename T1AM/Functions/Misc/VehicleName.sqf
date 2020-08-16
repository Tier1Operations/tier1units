// Takes an object name and gives it a natural text name (eg. B_AH9_F becomes "AH-9")

params ["_object"];
private _class = typeOf _object;
private _name = getText (configFile >> "CfgVehicles" >> _class >> "displayName");
_name