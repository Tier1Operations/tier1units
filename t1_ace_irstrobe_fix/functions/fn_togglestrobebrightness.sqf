params ["_unit"];

// Memorize the old strobe. We'll delete it at the end.
private _strobe = _unit getVariable ["T1_ACE_Attach_Strobe", nil];

private _curMode = _unit getVariable ["T1_ACE_Attach_StrobeMode", -1];
if (_curMode == -1) then {_curMode = 1};

private ["_itemVehClass","_text", "_itemName"];

switch (_curMode) do {
	case 2 : {
		_unit setVariable ["T1_ACE_Attach_StrobeMode", 0];
		_itemVehClass = "ACE_IR_Strobe_Effect_Low";
		_text = "Brightness Low";
		_itemName = "ACE_IR_Strobe_Item_Low";
	};
	case 1 : {
		_unit setVariable ["T1_ACE_Attach_StrobeMode", 2];
		_itemVehClass = "ACE_IR_Strobe_Effect_High";
		_text = "Brightness High";
		_itemName = "ACE_IR_Strobe_Item_High";
	};
	// 0
	default {
		_unit setVariable ["T1_ACE_Attach_StrobeMode", 1];
		_itemVehClass = "ACE_IR_Strobe_Effect";
		_text = "Brightness Medium";
		_itemName = "ACE_IR_Strobe_Item";
	};
};

private _attachedItem = _itemVehClass createVehicle [0,0,0];

// If unit has headgear, put strobe on head. Otherwise, put the strobe on shoulder.
if (headgear _unit != "") then {
	_attachedItem attachTo [_unit, [0, -0.05, 0.27], "head"];
} else {
	// Unit has no headgear.
	_attachedItem attachTo [_unit, [0.05, -0.09, 0.1], "leftshoulder"];
};

_unit setVariable ["T1_ACE_Attach_Strobe", _attachedItem];
_unit setVariable ["T1_ACE_Attach_Item", _attachedItem, true];
_unit setVariable ["ace_attach_attached", [[_attachedItem, _itemName]], true];

if (_unit == player) then {
	[_text] call ace_common_fnc_displayTextStructured;
};

// Delete the old strobe.
if (!isNil "_strobe" and {!isNull _strobe}) then {
	detach _strobe;
	_strobe setPosASL [-5000,-5000,-5000];	// Move it first, in case the item's effect doesn't disappear.
	sleep 1;
	deleteVehicle _strobe;
};