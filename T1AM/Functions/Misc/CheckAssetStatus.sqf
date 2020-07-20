params ["_tube","_gunner"];

private _abort = false;

switch true do {
	case (isNull _gunner) : {_abort = true};
	case (isNull _tube) : {_abort = true};
	case (!(alive _gunner)) : {_abort = true};
	case (!(alive _tube)) : {_abort = true};
	case (_tube == _gunner) : {_abort = true};
	case (gunner _tube != _gunner) : {_abort = true};
	case (!(canFire _tube) and {count (magazines _tube) > 0}) : {_abort = true};
};

_abort