params ["_tubes","_returnBadTubes"];

// Check locality and change it to the server.
{
	private _tube = _x;
	private _timeWaited = 0;
	
	if (alive _tube) then {
		if (!local _tube) then {
			//DIAG_LOG format["PFM SERVER -- WRONG LOCALITY OF TUBE: %1", _tube];
			private _group = group _tube;
			if (!isNull _group) then {
				//DIAG_LOG format["PFM SERVER -- WRONG LOCALITY OF TUBE | !isNull _group: %1", !isNull _group];
				private _locked = locked _tube;
				_tube lock 2;
				sleep 0.1;
				if (!_returnBadTubes) then {_tube setVariable ["T1AM_localityTimer", time + 10]};
				_group setGroupOwner 2;
				sleep 15;
				_tube lock _locked;
				_timeWaited = _timeWaited + 15;
			};
		};
	};
	
	{
		if (alive _x) then {
			if (!local _x) then {
				//DIAG_LOG format["PFM SERVER -- WRONG LOCALITY OF MEMBER: %1 in %2", _x, _tube];
				private _locked = locked _tube;
				_tube lock 2;
				sleep 0.1;
				if (!_returnBadTubes) then {_tube setVariable ["T1AM_localityTimer", time + 10]};
				(group _x) setGroupOwner 2;
				sleep 15;
				_tube lock _locked;
				_timeWaited = _timeWaited + 15;
			};
		};
	} forEach crew _tube;
	
	// For vehicles that only have a gunner.
	if (alive _tube and !local _tube) then {
		private _locked = locked _tube;
		_tube lock 2;
		sleep 0.1;
		if (!_returnBadTubes) then {_tube setVariable ["T1AM_localityTimer", time + 5]};
		private _driver = driver _tube;
		if (isNull _driver or {!alive _driver}) then {
			_tube setOwner 2;
		} else {
			(group _driver) setGroupOwner 2;
		};
		sleep 5;
		_tube lock _locked;
		_timeWaited = _timeWaited + 5;
	};
	
	// Remember the waiting time.
	if (_returnBadTubes) then {
		_tube setVariable ["T1AM_waitingTime", _timeWaited];
	};
} forEach _tubes;


// Check locality again and mark the tube as bad if the locality still hasn't changed to the server.
private _badTubes = [];
if (_returnBadTubes) then {
	{
		private _tube = _x;
		if (alive _tube) then {
			if (!local _tube) exitWith {
				//DIAG_LOG format["PFM SERVER -- BAD TUBE: %1", _tube];
				_badTubes pushback _tube;
			};
			
			private _gunner = gunner _tube;
			if (!isNull _gunner and {isPlayer _gunner}) exitWith {
				//DIAG_LOG format["PFM SERVER -- BAD GUNNER: %1", _tube];
				_badTubes pushback _tube;
			};
			
			{
				if (alive _x and !local _x) exitWith {
					//DIAG_LOG format["PFM SERVER -- BAD CREW: %1 in %2", _x, _tube];
					_badTubes pushback _tube;
				};
			} forEach crew _tube;
		};
	} forEach _tubes;
	//DIAG_LOG format["PFM SERVER -- BAD TUBES: %1", _badTubes];
};


_badTubes