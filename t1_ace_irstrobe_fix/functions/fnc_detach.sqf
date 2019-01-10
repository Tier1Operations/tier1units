/*
 * Author: eRazeri and esteldunedain
 * Detach an item from a unit
 *
 * Arguments:
 * 0: vehicle that it will be detached from (player or vehicle) <OBJECT>
 * 1: unit doing the detaching (player) <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [car, bob] call ace_attach_fnc_detach
 *
 * Public: No
 */
//#include "script_component.hpp"

params ["_attachToVehicle","_unit"],
//TRACE_2("params",_attachToVehicle,_unit);

private _attachedList = _attachToVehicle getVariable ["ace_attach_attached", []];

private _attachedObject = objNull;
private _attachedIndex = -1;
private _itemName = "";

//Find closest attached object
private _minDistance = 1000;

{
    _x params ["_xObject", "_xItemName"];

    if (((getPos _unit) distance2d (getPos _xObject)) < _minDistance) then {
        _minDistance = ((getPos _unit) distance2d (getPos _xObject));
        _attachedObject = _xObject;
        _itemName = _xItemName;
        _attachedIndex = _forEachIndex;
    };
} forEach _attachedList;

// Check if unit has an attached item
if (isNull _attachedObject || {_itemName == ""}) exitWith {
	//ERROR("Could not find attached object")
};

// Check if item is a chemlight
private _isChemlight = _attachedObject isKindOf "Chemlight_base";

// Exit if can't add the item
if (!(_unit canAdd _itemName) && {!_isChemlight}) exitWith {
    [localize "STR_ACE_Attach_Inventory_Full"] call ace_common_fnc_displayTextStructured;
};

// Reset item vars.
_unit setVariable ["T1_ACE_Attach_StrobeMode", -1];
_unit setVariable ["T1_ACE_Attach_Strobe", nil];
_unit setVariable ["T1_ACE_Attach_Item", nil, true];

// Add item to inventory (unless it's a chemlight)
if (!_isChemlight) then {
	// If IR Strobe, then make sure it gives a regular IR strobe back, not the low or high version.
	
	if (_itemName == "ACE_IR_Strobe_Item_Low" or _itemName == "ACE_IR_Strobe_Item_High") then {
		_itemName = "ACE_IR_Strobe_Item";
	};
    _unit addItem _itemName;
};

if (toLower _itemName in ["b_ir_grenade", "o_ir_grenade", "i_ir_grenade"]) then {
    // Hack for dealing with X_IR_Grenade effect not dissapearing on deleteVehicle
    detach _attachedObject;
	
	{
		deleteVehicle _x;
	} forEach ((getPos _attachedObject) nearObjects ["NVG_TargetC", 0.3]);
	
    _attachedObject setPos [-5000,-5000,-5000];
	{deleteVehicle _x} forEach (attachedObjects _attachedObject);
	
    // Delete attached item after 0.5 seconds
    [{deleteVehicle (_this select 0)}, [_attachedObject], 2] call CBA_fnc_waitAndExecute;
	
	{
		deleteVehicle _x;
	} forEach ((ASLtoAGL[-5000,-5000,-5000]) nearObjects ["NVG_TargetC", 100]);
	
} else {
    //handle any objects that may be attached to the object
    {
        detach _x;
        deleteVehicle _x;
    } forEach (attachedObjects _attachedObject);

    // Delete attached item
    detach _attachedObject;
    deleteVehicle _attachedObject;
};

// Reset unit variables
_attachedList deleteAt _attachedIndex;
_attachToVehicle setVariable ["ace_attach_attached", _attachedList, true];

// Display message
private _itemDisplayName = getText (configFile >> "CfgWeapons" >> _itemName >> "displayName");
if (_itemDisplayName == "") then {
    _itemDisplayName = getText (configFile >> "CfgMagazines" >> _itemName >> "displayName");
};

[format [localize "STR_ACE_Attach_Item_Detached", _itemDisplayName]] call ace_common_fnc_displayTextStructured;
