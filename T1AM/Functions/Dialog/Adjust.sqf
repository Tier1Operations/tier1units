params ["_x","_y","_adjustMode","_adjustSpotterX","_adjustSpotterY","_adjustImpactX","_adjustImpactY","_adjustSpotterRefX","_adjustSpotterRefY"];

// Safety check. Will make sure no errors popup when the //DIAG_LOG runs.
if (_adjustMode != 1) then {
	_x = -1;
	_y = -1;
	_adjustSpotterX = -1;
	_adjustSpotterY = -1;
};
if (_adjustMode != 2) then {
	_adjustImpactX = -1;
	_adjustImpactY = -1;
	_adjustImpactRefX = -1;
	_adjustImpactRefY = -1;
};

//DIAG_LOG format["ADJUST START | _x: %1 | _y: %2 | _adjustMode: %3 | _adjustSpotterX: %4 | _adjustSpotterY: %5 | _adjustSpotterRefX: %6 | _adjustSpotterRefY: %7", _x, _y, _adjustMode, _adjustSpotterX, _adjustSpotterY, _adjustSpotterRefX, _adjustSpotterRefY];


switch (_adjustMode) do {
	case (1) : {
		
		private _spotterPos2D = [_adjustSpotterX, _adjustSpotterY, 0];
		
		// Actual impact location.
		private _targetPos2D_1 = [T1AM_X,T1AM_Y,0];
		if (T1AM_Debug_Mode) then {[_targetPos2D_1, 120, "ColorPink"] spawn T1AM_Fnc_PlaceMarker};
		
		// Position shown in menu, which could be inaccurate (on purpose).
		private _targetPos2D_2 = [T1AM_Xdisplay,T1AM_Ydisplay,0];
		if (T1AM_Debug_Mode) then {[_targetPos2D_2, 120, "ColorOrange"] spawn T1AM_Fnc_PlaceMarker};
		
		private _dir = _spotterPos2D getDir _targetPos2D_1;
		private _distance2D = _spotterPos2D distance2D _targetPos2D_1;
		
		//DIAG_LOG format ["ADJUST | _x: %1", _x];
		//DIAG_LOG format ["ADJUST | _y: %1", _y];
		//DIAG_LOG format ["ADJUST | _targetPos2D_1: %1", _targetPos2D_1];
		//DIAG_LOG format ["ADJUST | _targetPos2D_2: %1", _targetPos2D_2];
		//DIAG_LOG format ["ADJUST | _dir: %1", _dir];
		//DIAG_LOG format ["ADJUST | _distance2D: %1", _distance2D];
		
		// Adjust _y.
		if (_y != 0) then {
			//DIAG_LOG "ADJUST Y";
			private _targetPos2D_1_y = _spotterPos2D getPos [_distance2D + _y, _dir];
			//DIAG_LOG format ["ADJUST | _targetPos2D_1_y: %1", _targetPos2D_1_y];
			_targetPos2D_1_y = [_targetPos2D_1_y select 0,_targetPos2D_1_y select 1,0];
			//DIAG_LOG format ["ADJUST | _targetPos2D_1_y: %1", _targetPos2D_1_y];
			_targetPos2D_2 = _targetPos2D_2 vectorAdd (_targetPos2D_1_y vectorDiff _targetPos2D_1);
			//DIAG_LOG format ["ADJUST | (_targetPos2D_1_y vectorDiff _targetPos2D_1): %1", (_targetPos2D_1_y vectorDiff _targetPos2D_1)];
			//DIAG_LOG format ["ADJUST | _targetPos2D_2: %1", _targetPos2D_2];
			_targetPos2D_1 = _targetPos2D_1_y;
			//DIAG_LOG format ["ADJUST | _targetPos2D_1: %1", _targetPos2D_1];
		};
		
		// Adjust _x.
		if (_x != 0) then {
			//DIAG_LOG "ADJUST X";
			switch (true) do {
				case (_dir > 270 and _x > 0) : {
					_dir = _dir - 270;
					//DIAG_LOG format ["ADJUST | _dir - 270: %1", _dir];
				};
				case (_dir < 90 and _x < 0) : {
					_dir = _dir + 270;
					//DIAG_LOG format ["ADJUST | _dir + 270: %1", _dir];
				};
				case (_x > 0) : {
					_dir = _dir + 90;
					//DIAG_LOG format ["ADJUST | _dir + 90: %1", _dir];
				};
				case (_x < 0) : {
					_dir = _dir - 90;
					//DIAG_LOG format ["ADJUST | _dir - 90: %1", _dir];
				};
			};
			
			private _targetPos2D_1_x = _targetPos2D_1 getPos [abs _x, _dir];
			//DIAG_LOG format ["ADJUST | _targetPos2D_1_x: %1", _targetPos2D_1_x];
			_targetPos2D_1_x = [_targetPos2D_1_x select 0,_targetPos2D_1_x select 1,0];
			//DIAG_LOG format ["ADJUST | _targetPos2D_1_x: %1", _targetPos2D_1_x];
			_targetPos2D_2 = _targetPos2D_2 vectorAdd (_targetPos2D_1_x vectorDiff _targetPos2D_1);
			//DIAG_LOG format ["ADJUST | (_targetPos2D_1_x vectorDiff _targetPos2D_1): %1", (_targetPos2D_1_x vectorDiff _targetPos2D_1)];
			//DIAG_LOG format ["ADJUST | _targetPos2D_2: %1", _targetPos2D_2];
			_targetPos2D_1 = _targetPos2D_1_x;
			//DIAG_LOG format ["ADJUST | _targetPos2D_1: %1", _targetPos2D_1];
		};
		
		T1AM_X = _targetPos2D_1 select 0;
		T1AM_Y = _targetPos2D_1 select 1;
		
		T1AM_Xdisplay = _targetPos2D_2 select 0;
		T1AM_Ydisplay = _targetPos2D_2 select 1;
		
		//DIAG_LOG format["ADJUST | _targetPos2D_1: %1", _targetPos2D_1];
		//DIAG_LOG format["ADJUST | _targetPos2D_2: %1", _targetPos2D_2];
		
		if (T1AM_Debug_Mode) then {[_targetPos2D_1, 120, "ColorRed"] spawn T1AM_Fnc_PlaceMarker};
		if (T1AM_Debug_Mode) then {[_targetPos2D_2, 120, "ColorBrown"] spawn T1AM_Fnc_PlaceMarker};		
		
		//DIAG_LOG "ADJUST END";
	};
	
	case (2) : {
		
		private _DifX = _adjustImpactRefX - _adjustImpactX;
		private _DifY = _adjustImpactRefY - _adjustImpactY;
		
		
		// Actual impact location.
		private _targetPos2D_1 = [T1AM_X,T1AM_Y,0];
		if (T1AM_Debug_Mode) then {[_targetPos2D_1, 120, "ColorPink"] spawn T1AM_Fnc_PlaceMarker};
		
		T1AM_X = T1AM_X + _DifX;
		T1AM_Y = T1AM_Y + _DifY;
		
		_targetPos2D_1 = [T1AM_X,T1AM_Y,0];
		if (T1AM_Debug_Mode) then {[_targetPos2D_1, 120, "ColorRed"] spawn T1AM_Fnc_PlaceMarker};
		
		
		// Position shown in menu, which could be inaccurate (on purpose).
		private _targetPos2D_2 = [T1AM_Xdisplay,T1AM_Ydisplay,0];
		if (T1AM_Debug_Mode) then {[_targetPos2D_2, 120, "ColorOrange"] spawn T1AM_Fnc_PlaceMarker};
		
		T1AM_Xdisplay = T1AM_Xdisplay + _DifX;
		T1AM_Ydisplay = T1AM_Ydisplay + _DifY;
		
		_targetPos2D_2 = [T1AM_Xdisplay,T1AM_Ydisplay,0];
		if (T1AM_Debug_Mode) then {[_targetPos2D_2, 120, "ColorBrown"] spawn T1AM_Fnc_PlaceMarker};
	};
};