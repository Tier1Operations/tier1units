#include "\T1AM\Defines.hpp"

params ["_distance", "_maximumRange"];

private _scatterSpread = (_distance / 200) + (exp((log _distance)*0.7));

switch true do {
	case (_distance <= 0.025 * _maximumRange) : {_scatterSpread = _scatterSpread * 0.25};
	case (_distance <= 0.05 * _maximumRange) : {_scatterSpread = _scatterSpread * 0.40};
	case (_distance <= 0.10 * _maximumRange) : {_scatterSpread = _scatterSpread * 0.50};
	case (_distance <= 0.15 * _maximumRange) : {_scatterSpread = _scatterSpread * 0.60};
	case (_distance <= 0.20 * _maximumRange) : {_scatterSpread = _scatterSpread * 0.65};
	case (_distance <= 0.25 * _maximumRange) : {_scatterSpread = _scatterSpread * 0.70};
	case (_distance <= 0.30 * _maximumRange) : {_scatterSpread = _scatterSpread * 0.75};
	case (_distance <= 0.35 * _maximumRange) : {_scatterSpread = _scatterSpread * 0.80};
	case (_distance <= 0.40 * _maximumRange) : {_scatterSpread = _scatterSpread * 0.85};
};

if (_distance > 0.50 * _maximumRange) then {_scatterSpread = _scatterSpread + (exp((log _distance)*0.4))};
if (_distance > 0.55 * _maximumRange) then {_scatterSpread = _scatterSpread + (exp((log _distance)*0.4))};
if (_distance > 0.60 * _maximumRange) then {_scatterSpread = _scatterSpread + (exp((log _distance)*0.4))};
if (_distance > 0.65 * _maximumRange) then {_scatterSpread = _scatterSpread + (exp((log _distance)*0.4))};
if (_distance > 0.70 * _maximumRange) then {_scatterSpread = _scatterSpread + (exp((log _distance)*0.4))};
if (_distance > 0.75 * _maximumRange) then {_scatterSpread = _scatterSpread + (exp((log _distance)*0.4))};
if (_distance > 0.80 * _maximumRange) then {_scatterSpread = _scatterSpread + (exp((log _distance)*0.6))};
if (_distance > 0.85 * _maximumRange) then {_scatterSpread = _scatterSpread + (exp((log _distance)*0.7))};
if (_distance > 0.90 * _maximumRange) then {_scatterSpread = _scatterSpread + (exp((log _distance)*0.7))};
if (_distance > 0.95 * _maximumRange) then {_scatterSpread = _scatterSpread + (exp((log _distance)*0.7))};
if (_distance > 1.00 * _maximumRange) then {_scatterSpread = _scatterSpread + (exp((log _distance)*0.7))};
if (_distance > 1.05 * _maximumRange) then {_scatterSpread = _scatterSpread + (exp((log _distance)*0.7))};
if (_distance > 1.10 * _maximumRange) then {_scatterSpread = _scatterSpread + (exp((log _distance)*0.7))};
if (_distance > 1.15 * _maximumRange) then {_scatterSpread = _scatterSpread + (exp((log _distance)*0.7))};
if (_distance > 1.20 * _maximumRange) then {_scatterSpread = _scatterSpread + (exp((log _distance)*0.7))};
if (_distance > 1.25 * _maximumRange) then {_scatterSpread = _scatterSpread + (exp((log _distance)*0.7))};

_scatterSpread