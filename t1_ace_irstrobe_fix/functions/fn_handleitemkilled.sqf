params ["_body"];

sleep 0.3;

private _attachedItem = _body getVariable ["T1_ACE_Attach_Item", nil];

// If body had an item assigned to it, detach the item from mid-air and attach the item to the body.
if (isNil "_attachedItem" or {!alive _attachedItem}) exitWith {};

private _typeOf = typeOf _attachedItem;
detach _attachedItem;

if (
	(_typeOf == "ACE_IR_Strobe_Effect" or {_typeOf == "ACE_IR_Strobe_Effect_High" or {_typeOf == "ACE_IR_Strobe_Effect_Low"}})
	and headgear _body != ""
) then {
	_attachedItem attachTo [_body, [0, -0.05, 0.27], "head"];
} else {
	_attachedItem attachTo [_body, [0.05, -0.09, 0.1], "leftshoulder"];
};

// Delete item after body has disappeared.
while {!isNull _body} do {
	sleep 15;
};

// IR Grenades leave behind a separate effect. So, remove it.
{
	deleteVehicle _x;
} forEach ((getPos _attachedItem) nearObjects ["NVG_TargetC", 0.3]);

detach _attachedItem;
_attachedItem setPosASL [-5000,-5000,-5000];	// Move it first, in case the item's effect doesn't disappear.
{deleteVehicle _x} forEach (attachedObjects _attachedItem);
sleep 1;
deleteVehicle _attachedItem;

{
	deleteVehicle _x;
} forEach ((ASLtoAGL[-5000,-5000,-5000]) nearObjects ["NVG_TargetC", 100]);