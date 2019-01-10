private _ETA = _this select 0;
private _asset = _this select 1;

_ETA = (_ETA - 5) max 1;
sleep _ETA;
[_asset,"Splash, out.","Splash"] call dta_fnc_SendComms;
