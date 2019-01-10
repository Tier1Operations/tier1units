// Excludes a group from the artillery system
_group = _this;
while {(time < 4)} do {
	sleep 0.5;
};

dtaExclude = dtaExclude + [_group];
publicVariable "dtaExclude";