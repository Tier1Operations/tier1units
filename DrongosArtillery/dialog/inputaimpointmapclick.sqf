if (dtaDisallowMapclick) exitWith {hint "Mapclick option disabled"};

closeDialog 0;
sleep 0.3;
openMap true;
onMapSingleClick "";
onMapSingleClick "nul = [_pos,_shift,_alt] execVM 'DrongosArtillery\Dialog\InputAimpointMapclickProcess.sqf'; onMapSingleClick ''; true;";