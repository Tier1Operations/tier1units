// Called from Transmit.

private _dialog = findDisplay 47200;

// X adjustment (left/right)
private _x = [ctrlText (_dialog displayCtrl 47204), 0] call T1AM_Fnc_ParseNumber;

// Y adjustment (up/down)
private _y = [ctrlText (_dialog displayCtrl 47205), 0] call T1AM_Fnc_ParseNumber;

//DIAG_LOG "ADJUST START";
//DIAG_LOG format["ADJUST - _x: %1 - _y: %2", _x, _y];

// Make sure the input is good.
if (_x != -9999999 and {_y != -9999999}) then {
	
	// Only run the below code if the player has requested for the X or Y to change.
	if (_x != 0 or _y != 0) then {
		
		// Actual impact location.
		private _targetPos2D_1 = [T1AM_X,T1AM_Y,0];
		if (T1AM_Debug_Mode) then {[_targetPos2D_1, 120, "ColorPink"] spawn T1AM_Fnc_PlaceMarker};
		
		// Position shown in menu, which could be inaccurate (on purpose).
		private _targetPos2D_2 = [T1AM_Xdisplay,T1AM_Ydisplay,0];
		if (T1AM_Debug_Mode) then {[_targetPos2D_2, 120, "ColorBrown"] spawn T1AM_Fnc_PlaceMarker};
		
		private _dir = player getDir _targetPos2D_1;
		private _distance2D = player distance2D _targetPos2D_1;
		
		//DIAG_LOG format ["ADJUST - _x: %1", _x];
		//DIAG_LOG format ["ADJUST - _y: %1", _y];
		//DIAG_LOG format ["ADJUST - _targetPos2D_1: %1", _targetPos2D_1];
		//DIAG_LOG format ["ADJUST - _targetPos2D_2: %1", _targetPos2D_2];
		//DIAG_LOG format ["ADJUST - _dir: %1", _dir];
		//DIAG_LOG format ["ADJUST - _distance2D: %1", _distance2D];
		
		// Adjust _y.
		if (_y != 0) then {
			//DIAG_LOG "ADJUST Y";
			private _targetPos2D_1_y = player getPos [_distance2D + _y, _dir];
			//DIAG_LOG format ["ADJUST - _targetPos2D_1_y: %1", _targetPos2D_1_y];
			_targetPos2D_1_y = [_targetPos2D_1_y select 0,_targetPos2D_1_y select 1,0];
			//DIAG_LOG format ["ADJUST - _targetPos2D_1_y: %1", _targetPos2D_1_y];
			_targetPos2D_2 = _targetPos2D_2 vectorAdd (_targetPos2D_1_y vectorDiff _targetPos2D_1);
			//DIAG_LOG format ["ADJUST - (_targetPos2D_1_y vectorDiff _targetPos2D_1): %1", (_targetPos2D_1_y vectorDiff _targetPos2D_1)];
			//DIAG_LOG format ["ADJUST - _targetPos2D_2: %1", _targetPos2D_2];
			_targetPos2D_1 = _targetPos2D_1_y;
			//DIAG_LOG format ["ADJUST - _targetPos2D_1: %1", _targetPos2D_1];
		};
		
		// Adjust _x.
		if (_x != 0) then {
			//DIAG_LOG "ADJUST X";
			switch (true) do {
				case (_dir > 270 and _x > 0) : {
					_dir = _dir - 270;
					//DIAG_LOG format ["ADJUST - _dir - 270: %1", _dir];
				};
				case (_dir < 90 and _x < 0) : {
					_dir = _dir + 270;
					//DIAG_LOG format ["ADJUST - _dir + 270: %1", _dir];
				};
				case (_x > 0) : {
					_dir = _dir + 90;
					//DIAG_LOG format ["ADJUST - _dir + 90: %1", _dir];
				};
				case (_x < 0) : {
					_dir = _dir - 90;
					//DIAG_LOG format ["ADJUST - _dir - 90: %1", _dir];
				};
			};
			
			private _targetPos2D_1_x = _targetPos2D_1 getPos [abs _x, _dir];
			//DIAG_LOG format ["ADJUST - _targetPos2D_1_x: %1", _targetPos2D_1_x];
			_targetPos2D_1_x = [_targetPos2D_1_x select 0,_targetPos2D_1_x select 1,0];
			//DIAG_LOG format ["ADJUST - _targetPos2D_1_x: %1", _targetPos2D_1_x];
			_targetPos2D_2 = _targetPos2D_2 vectorAdd (_targetPos2D_1_x vectorDiff _targetPos2D_1);
			//DIAG_LOG format ["ADJUST - (_targetPos2D_1_x vectorDiff _targetPos2D_1): %1", (_targetPos2D_1_x vectorDiff _targetPos2D_1)];
			//DIAG_LOG format ["ADJUST - _targetPos2D_2: %1", _targetPos2D_2];
			_targetPos2D_1 = _targetPos2D_1_x;
			//DIAG_LOG format ["ADJUST - _targetPos2D_1: %1", _targetPos2D_1];
		};
		
		T1AM_X = _targetPos2D_1 select 0;
		T1AM_Y = _targetPos2D_1 select 1;
		
		T1AM_Xdisplay = _targetPos2D_2 select 0;
		T1AM_Ydisplay = _targetPos2D_2 select 1;
		
		//DIAG_LOG format["ADJUST - _targetPos2D_1: %1", _targetPos2D_1];
		//DIAG_LOG format["ADJUST - _targetPos2D_2: %1", _targetPos2D_2];
		
		if (T1AM_Debug_Mode) then {[_targetPos2D_1, 120, "ColorRed"] spawn T1AM_Fnc_PlaceMarker};
		if (T1AM_Debug_Mode) then {[_targetPos2D_2, 120, "ColorYellow"] spawn T1AM_Fnc_PlaceMarker};		
		
		//DIAG_LOG "ADJUST END";
	};
	
} else {
	
	// Something went wrong.
	/*
	switch true do {
		case (_x == -9999999 and {_y == -9999999}) : {
			//hint "Error - Invalid input:\nAdjust X and Y.";
		};
		case (_x == -9999999) : {
			//hint "Error - Invalid input:\nAdjust X.";
		};
		case (_y == -9999999) : {
			//hint "Error - Invalid input:\nAdjust Y.";
		};
	};
	*/
};

(_dialog displayCtrl 47204) ctrlSetText format ["%1",0];
(_dialog displayCtrl 47205) ctrlSetText format ["%1",0];
T1AM_LastAdjustX = 0;
T1AM_LastAdjustY = 0;
[] spawn {
	sleep 1;
	private _dialog = findDisplay 47200;
	(_dialog displayCtrl 47204) ctrlSetText format ["%1",0];
	(_dialog displayCtrl 47205) ctrlSetText format ["%1",0];
	T1AM_LastAdjustX = 0;
	T1AM_LastAdjustY = 0;
};