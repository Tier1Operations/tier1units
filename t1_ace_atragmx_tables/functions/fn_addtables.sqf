_gunList = profileNamespace getVariable ["ACE_ATragMX_gunList", nil];

if (isNil "_gunList") exitWith {};


// The names must be unique.
_newTables = [
	["T1 M14 MK316 MOD 0",783,100,0.0710319,-0.000818,3.81,0,2,10,120,0,0,11.34,7.82,25.4,0.243,7,"ICAO"],
	["T1 M14 SD",322,100,0.305968,-0.000799,3.81,0,2,10,120,0,0,12.96,7.82,25.4,0.235,7,"ICAO"],
	["T1 M14 MK319 MOD 0",892,100,0.0710319,-0.001023,3.81,0,2,10,120,0,0,11.34,7.82,25.4,0.243,7,"ICAO"],
	["T1 EBR MK316 MOD 0",768,100,0.0710319,-0.000818,3.81,0,2,10,120,0,0,11.34,7.82,25.4,0.243,7,"ICAO"],
	["T1 EBR SD",316,100,0.305968,-0.000796,3.81,0,2,10,120,0,0,12.96,7.82,25.4,0.235,7,"ICAO"],
	["T1 EBR MK319 MOD 0",875,100,0.0710319,-0.001024,3.81,0,2,10,120,0,0,11.34,7.82,25.4,0.243,7,"ICAO"],
	["T1 M2010 .300WM",880,100,0.0610738,-0.000612,3.81,0,2,10,120,0,0,14.26,7.8,25.4,0.31,7,"ICAO"],
	["T1 M2010 SD",325,100,0.0610738,-0.000899,3.81,0,2,10,120,0,0,14.26,7.8,25.4,0.31,7,"ICAO"],
	["T1 M200 .408",910,100,0.05694,-0.00038944,3.81,0,2,10,120,0,0,27.15,10.4,33.02,0.97,1,"ASM"]
];



_hasAdded = false;

for [{_y = 0}, {_y <= (count _newTables) - 1}, {_y = _y + 1}] do {
	
	_newTable = _newTables select _y;
	_newName = _newTable select 0;
	_alreadyExists = false;
	
	for [{_i = 0}, {_i <= (count _gunList) - 1}, {_i = _i + 1}] do {
		_oldTable = _gunList select _i;
		_oldName = _oldTable select 0;
		
		// Check if there already is a table with the same name.
		if (((toLower _oldName) find (toLower _newName)) != -1) exitWith {
			
			// Name already  exists, so check if the old table is different. If so, overwrite it with the new table.
			_alreadyExists = true;
			
			for [{_z = 0}, {_z <= (count _oldTable) - 1}, {_z = _z + 1}] do {
				_oldElement = _oldTable select _z;
				_newElement = _newTable select _z;
				
				if (_oldElement isEqualType "string") then {
					_oldElement = toLower _oldElement
				};
				
				if (_newElement isEqualType "string") then {
					_newElement = toLower _newElement
				};
				
				if (!(_oldElement isEqualTo _newElement)) exitWith {
					
					// The old table is different from the new one,
					// so we assume the old one is out of date or was accidentally changed and needs overwriting.
					
					_newList = [];
					
					for [{_k = 0}, {_k <= (count _gunList) - 1}, {_k = _k + 1}] do {
						if (_k != _i) then {
							_oldTable2 = _gunList select _k;
							_newList pushBack _oldTable2;
						} else {
							if (_k == _i) then {
								_newList pushBack _newTable;
							};
						};
					};
					
					_gunList = +_newList;
					_hasAdded = true;
				};
			};
		} ;
	};
	
	// Add new table to the list if it doesn't already exist.
	if (!_alreadyExists) then {
		_gunList pushBack _newTable;
		_hasAdded = true;
	};
};

// If the list has been updated, then save it to profile.
if (_hasAdded) then {
	profileNamespace setVariable ["ACE_ATragMX_gunList", _gunList];
};