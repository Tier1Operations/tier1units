// Checks if the asset can be taken control of (ie. not busy/not controlled by another player).
// Then open menu where the player can choose the aimpoint (target pos).
// If pre-plotted, skip ahead to the next part (control menu).

disableSerialization;

params ["_prePlotted"];

//DIAG_LOG format["CONTROLASSET - _prePlotted: %1", _prePlotted];
//DIAG_LOG format["CONTROLASSET - ABORTING: %1", ((_prePlotted) and ((count T1AM_SelectedPrePlotted) == 0))];

if ((_prePlotted) and ((count T1AM_SelectedPrePlotted) == 0)) exitWith {
	private _str = "NO MISSION SELECTED";
	[0, _str, 5] spawn T1AM_Fnc_ShowMessage;
};

private _asset = T1AM_SelectedAsset;

// Abort if there's something wrong with the leader's vehicle/gunner.
private _tube = (vehicle (leader T1AM_SelectedAsset));
private _gunner = gunner _tube;
private _abort = [_tube, _gunner] call T1AM_Fnc_CheckAssetStatus;
if (_abort) exitWith {
	[false] call T1AM_Fnc_EndMission;
	private _str = "ASSET NOT RESPONDING";
	[0, _str, 5] spawn T1AM_Fnc_ShowMessage;
};

if (_prePlotted) then {T1AM_PrePlotted = true};

//DIAG_LOG format["CONTROLASSET - (_asset == T1AM_ControlledAssetLocal): %1", (_asset == T1AM_ControlledAssetLocal)];

// If asset is already being controlled by player, close interface and then open control menu.
if (_asset == T1AM_ControlledAssetLocal) exitWith {
	[_prePlotted] spawn {
		params ["_prePlotted"];
		T1AM_LastDialog = "Control";
		[0, [_prePlotted], 0] spawn T1AM_Fnc_LoadingScreen;
	};
};


if (_asset in T1AM_AssetsBusy) exitWith {
	private _str = "ASSET IS BUSY";
	[0, _str, 5] spawn T1AM_Fnc_ShowMessage;
};
if (_asset in T1AM_ControlledAssets) exitWith {
	private _str = "ASSET IS PROCESSING OTHER ORDERS";
	[0, _str, 5] spawn T1AM_Fnc_ShowMessage;
};

// If the local controlled asset exists, it means the player is already controlling another asset. So, abort.
if (!isNull (leader T1AM_ControlledAssetLocal)) exitWith {
	private _str = "YOU ARE ALREADY CONTROLLING ANOTHER ASSET";
	[0, _str, 5] spawn T1AM_Fnc_ShowMessage;
};


// Start configuring stuff to allow the player to take control of the asset.
T1AM_ControlledAssetLocal = _asset;
T1AM_ControlledAssets = T1AM_ControlledAssets + [_asset];
publicVariable "T1AM_ControlledAssets";

_asset setVariable ["T1AM_controlledBy", player, true];
// Monitor when controlling player has disconnected. Release arty when player disconnects.
[_asset] remoteExec ["T1AM_Fnc_CheckForDC", 2];


// Start loop (if not already running) that checks if the player is ACE unconscious.
// If player is unconscious for a certain amount of time, then relinquish control of the asset.
if (configNull != (configFile >> "CfgPatches" >> "ace_medical")) then {
	if (isNil "T1AM_UnconsciousCheck_Loop") then {
		T1AM_UnconsciousCheck_Loop = true;
		
		[] spawn {
			private _timeOut = 0;
			private _abort = false;
			
			while {!isNull T1AM_ControlledAssetLocal} do {
				if (player getVariable ["ACE_isUnconscious", false]) then {
					if (_timeOut > 60) then {
						hint format["Observer not respnding.\n\nEnding mission."];
						[true] call T1AM_Fnc_EndMission;
						_abort = true;
					};
					_timeOut = _timeout + 15;
				} else {
					_timeOut = 0;
				};
				
				if (_abort) exitWith {};
				
				sleep 15;
			};
			
			T1AM_UnconsciousCheck_Loop = nil;
		};
	};
};


//DIAG_LOG format["CONTROLASSET - IF _prePlotted: %1 - T1AM_PrePlotted: %2", _prePlotted, T1AM_PrePlotted];

private _assetCallsign = [T1AM_SelectedAsset] call T1AM_Fnc_TrimGroupName;
private _playerCallsign = [(group player)] call T1AM_Fnc_TrimGroupName;

// If aimpoint already chosen or preplotted, then open control menu.
if ((T1AM_HaveAimpoint) or (T1AM_PrePlotted)) then {
	[_assetCallsign, _playerCallsign, _prePlotted, _asset] spawn {
		params ["_assetCallsign", "_playerCallsign", "_prePlotted", "_asset"];
		T1AM_LastDialog = "Control";
		[0, [_prePlotted], 0] spawn T1AM_Fnc_LoadingScreen;
		sleep (1 + random 2);
		private _message = format ["%1 this is %2, adjust fire, out", _playerCallsign, _assetCallsign];
		[_asset, _message, "AdjustFire"] call T1AM_Fnc_SendComms;
	};
} else {
	// Open aimpoint menu.
	T1AM_LastDialog = "Aimpoint";
	[0, [_prePlotted], 0] spawn T1AM_Fnc_LoadingScreen;
};