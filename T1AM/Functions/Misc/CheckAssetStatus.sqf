#include "\T1AM\Defines.hpp"

params ["_tube","_gunner"];

private _abort = false;

switch true do {
	case (isNull _gunner) : {
		_abort = true;
		DEBUGLOG format ["CHECK ASSET STATUS ABORT | _tube: %1 | isNull _gunner: %2", _tube, isNull _gunner];
	};
	case (isNull _tube) : {
		_abort = true;
		DEBUGLOG format ["CHECK ASSET STATUS ABORT | _tube: %1 | isNull _tube: %2", _tube, isNull _tube];
	};
	case (!(alive _gunner)) : {
		_abort = true;
		DEBUGLOG format ["CHECK ASSET STATUS ABORT | _tube: %1 | !(alive _gunner): %2", _tube, !(alive _gunner)];
	};
	case (!(alive _tube)) : {
		_abort = true;
		DEBUGLOG format ["CHECK ASSET STATUS ABORT | _tube: %1 | !(alive _tube): %2", _tube, !(alive _tube)];
	};
	case (_tube == _gunner) : {
		_abort = true;
		DEBUGLOG format ["CHECK ASSET STATUS ABORT | _tube: %1 | _tube == _gunner: %2", _tube, _tube == _gunner];
	};
	case (gunner _tube != _gunner) : {
		_abort = true;
		DEBUGLOG format ["CHECK ASSET STATUS ABORT | _tube: %1 | gunner _tube != _gunner: %2", _tube, gunner _tube != _gunner];
	};
	case (!(canFire _tube) and {count (magazines _tube) > 0}) : {
		_abort = true;
		DEBUGLOG format ["CHECK ASSET STATUS ABORT | _tube: %1 | isNull _gunner: %2 | count (magazines _tube) > 0: %3", _tube, !(canFire _tube), count (magazines _tube) > 0];
	};
};

_abort