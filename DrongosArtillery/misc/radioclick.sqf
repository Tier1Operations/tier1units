// Enables interaction with the default Arma 3 inventory by left clicking.
// Big thank you to Larrow who wrote the original scripts these are based upon.
sleep 1;
handle = [] spawn {
    while {true} do {
		waituntil {!(isnull (finddisplay 602))};
		((findDisplay 602) displayCtrl 6214) ctrlSetEventHandler ["MouseButtonDblClick", """"" execVM ""DrongosArtillery\Dialog\Check.sqf"""];
        waituntil {isnull (finddisplay 602)};
		sleep 0.1;
    };
};