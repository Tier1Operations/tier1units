/*
 * Author: eRazeri, esteldunedain, PabstMirror
 * Attach an item to the unit
 *
 * Arguments:
 * 0: vehicle that it will be attached to (player or vehicle) <OBJECT>
 * 1: unit doing the attach (player) <OBJECT>
 * 2: Array containing a string of the attachable item <ARRAY>
 *
 * Return Value:
 * None
 *
 * Example:
 * [bob, bob, ["light"]] call ace_attach_fnc_attach;
 *
 * Public: No
 */
//#include "script_component.hpp"

params ["_attachToVehicle","_unit","_args", ["_silentScripted", false]];
_args params [["_itemClassname","", [""]]];
//TRACE_4("params",_attachToVehicle,_unit,_itemClassname,_silentScripted);

//Sanity Check (_unit has item in inventory, not over attach limit)
if ((_itemClassname == "") || {(!_silentScripted) && {!(_this call ace_attach_fnc_canAttach)}}) exitWith {
	//ERROR("Tried to attach, but check failed");
};

private _itemVehClass = getText (configFile >> "CfgWeapons" >> _itemClassname >> "ACE_Attachable");
private _onAttachText = getText (configFile >> "CfgWeapons" >> _itemClassname >> "displayName");

if (_itemVehClass == "") then {
    _itemVehClass = getText (configFile >> "CfgMagazines" >> _itemClassname >> "ACE_Attachable");
    _onAttachText = getText (configFile >> "CfgMagazines" >> _itemClassname >> "displayName");
};

if (_itemVehClass == "") exitWith {
	//ERROR("no ACE_Attachable for Item");
};

private _onAttachText = format [localize "STR_ACE_Attach_Item_Attached", _onAttachText];

if (_unit == _attachToVehicle) then {  //Self Attachment
	private _attachedItem = _itemVehClass createVehicle [0,0,0];
	
	// If unit has headgear AND a strobe, put strobe on head. Otherwise, put the item on shoulder.
	private _isStrobe = (_itemClassname == "ACE_IR_Strobe_Item" or _itemClassname == "ACE_IR_Strobe_Item_Low" or _itemClassname == "ACE_IR_Strobe_Item_High");
	if (_isStrobe and headgear _unit != "") then {
		_attachedItem attachTo [_unit, [0, -0.05, 0.27], "head"];
	} else {
		// Unit has no strobe, or unit has a strobe but no headgear.
		_attachedItem attachTo [_unit, [0.05, -0.09, 0.1], "leftshoulder"];
	};
	
	// Remember what strobe is attached to the unit.
	if (_isStrobe) then {
		_unit setVariable ["T1_ACE_Attach_Strobe", _attachedItem];
		
		private _strobeMode = _unit getVariable ["T1_ACE_Attach_StrobeMode", -1];
		if (_strobeMode == -1) then {
			_unit setVariable ["T1_ACE_Attach_StrobeMode", 1];
		} else {
			_unit setVariable ["T1_ACE_Attach_StrobeMode", _strobeMode];
		};
	};
	
	// Remember what item is attached to the unit. This needs to be done because the ACE variable gets reset when the unit dies (stupid!).
	_unit setVariable ["T1_ACE_Attach_Item", _attachedItem, true];
	
	// Add some event handlers to the unit. Only add the eventhandlers once per unit.
	if (_unit getVariable ["T1_ACE_Attach_EH", true]) then {
		_unit setVariable ["T1_ACE_Attach_EH", false];
		
		// Check if unit has headgear when it opened the inventory.
		_unit addEventHandler ["InventoryOpened", {
			T1_ACE_Attach_Headgear = headgear (_this select 0);
		}];
		
		// If unit closes inventory, check if it still has headgear afterwards. If not and it did before, then remove the strobe.
		_unit addEventHandler ["InventoryClosed", {
			private _unit = _this select 0;
			private _strobe = _unit getVariable ["T1_ACE_Attach_Strobe", nil];
			
			if (!isNil "_strobe" and {alive _strobe and {attachedTo _strobe == _unit}}) then {
				if (!isNil "T1_ACE_Attach_Headgear" and {T1_ACE_Attach_Headgear != "" and headgear _unit == ""}) then {
					[_unit, _unit] call ace_attach_fnc_detach;
				};
			};
		}];
	};
	
    if (!_silentScripted) then {
        _unit removeItem _itemClassname;  // Remove item
		if (_unit == player) then {
			[_onAttachText] call ace_common_fnc_displayTextStructured;
		};
    };
	
    _unit setVariable ["ace_attach_attached", [[_attachedItem, _itemClassname]], true];
	
} else {

    ace_attach_placeAction = PLACE_WAITING;

    [_unit, "forceWalk", "ACE_Attach", true] call ace_common_fnc_statusEffect_set;

    [{[localize "STR_ACE_Attach_PlaceAction", ""] call ace_interaction_fnc_showMouseHint}, []] call CBA_fnc_execNextFrame;
    _unit setVariable ["ace_attach_placeActionEH", [_unit, "DefaultAction", {true}, {ace_attach_placeAction = PLACE_APPROVE;}] call ace_common_fnc_AddActionEventHandler];

    private _actionID = _unit addAction [format ["<t color='#FF0000'>%1</t>", localize "STR_ACE_Attach_CancelAction"], {ace_attach_placeAction = PLACE_CANCEL}];

    //Display to show virtual object:
    private _model = getText (configFile >> "CfgAmmo" >> _itemVehClass >> "model");
    if (_model == "") then {
        _model = getText (configFile >> "CfgVehicles" >> _itemVehClass >> "model");
    };
    //"\A3\Weapons_F\empty.p3d" is fine, but ctrlSetModel ""; - will crash game!
    if (_model == "") exitWith {
		//ERROR("No Model");
	};
    ("ace_attach_virtualAmmo" call BIS_fnc_rscLayer) cutRsc ["ace_attach_virtualAmmo", "PLAIN", 0, false];
    ((uiNamespace getVariable ["ace_attach_virtualAmmoDisplay", displayNull]) displayCtrl 800851) ctrlSetModel _model;

    [{
        params ["_args","_idPFH"];
        _args params ["_unit","_attachToVehicle","_itemClassname","_itemVehClass","_onAttachText","_actionID"];

        private _virtualPosASL = (eyePos _unit) vectorAdd (positionCameraToWorld [0,0,0.6]) vectorDiff (positionCameraToWorld [0,0,0]);
        if (cameraView == "EXTERNAL") then {
            _virtualPosASL = _virtualPosASL vectorAdd ((positionCameraToWorld [0.3,0,0]) vectorDiff (positionCameraToWorld [0,0,0]));
        };
        private _virtualPos = _virtualPosASL call ace_common_fnc_ASLToPosition;
        private _lineInterection = lineIntersects [eyePos ACE_player, _virtualPosASL, ACE_player];

        //Don't allow placing in a bad position:
        if (_lineInterection && {ace_attach_placeAction == PLACE_APPROVE}) then {ace_attach_placeAction = PLACE_WAITING;};

        if ((ace_attach_placeAction != PLACE_WAITING) ||
                {_unit != ACE_player} ||
                {!([_unit, _attachToVehicle, ["isNotSwimming"]] call ace_common_fnc_canInteractWith)} ||
                {!([_attachToVehicle, _unit, _itemClassname] call ace_attach_fnc_canAttach)}) then {

            [_idPFH] call CBA_fnc_removePerFrameHandler;
            [_unit, "forceWalk", "ACE_Attach", false] call ace_common_fnc_statusEffect_set;
            [] call ace_interaction_fnc_hideMouseHint;
            [_unit, "DefaultAction", (_unit getVariable ["ace_attach_placeActionEH", -1])] call ace_common_fnc_removeActionEventHandler;
            _unit removeAction _actionID;

            ("ace_attach_virtualAmmo" call BIS_fnc_rscLayer) cutText ["", "PLAIN"];

            if (ace_attach_placeAction == PLACE_APPROVE) then {
                [_unit, _attachToVehicle, _itemClassname, _itemVehClass, _onAttachText, _virtualPos] call ace_attach_fnc_placeApprove;
            };
        } else {
            //Show the virtual object:
            if (_lineInterection) then {
                ((uiNamespace getVariable ["ace_attach_virtualAmmoDisplay", displayNull]) displayCtrl 800851) ctrlShow false;
            } else {
                ((uiNamespace getVariable ["ace_attach_virtualAmmoDisplay", displayNull]) displayCtrl 800851) ctrlShow true;
                private _screenPos = worldToScreen _virtualPos;
                if (_screenPos isEqualTo []) exitWith {
                    ((uiNamespace getVariable ["ace_attach_virtualAmmoDisplay", displayNull]) displayCtrl 800851) ctrlShow false;
                };
                private _realDistance = (_virtualPos distance (positionCameraToWorld [0,0,0])) / ((call CBA_fnc_getFov) select 1);
                _screenPos = [(_screenPos select 0), _realDistance, (_screenPos select 1)];
                ((uiNamespace getVariable ["ace_attach_virtualAmmoDisplay", displayNull]) displayCtrl 800851) ctrlSetPosition _screenPos;
                private _dir = (positionCameraToWorld [0,0,1]) vectorFromTo (positionCameraToWorld [0,0,0]);
                private _angle = asin (_dir select 2);
                private _up = [0, cos _angle, sin _angle];
                ((uiNamespace getVariable ["ace_attach_virtualAmmoDisplay", displayNull]) displayCtrl 800851) ctrlSetModelDirAndUp [[1,0,0], _up];
            };
        };
    }, 0, [_unit, _attachToVehicle, _itemClassname, _itemVehClass, _onAttachText, _actionID]] call CBA_fnc_addPerFrameHandler;
};
