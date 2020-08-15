params ["_mode"];

if (!T1AM_PlaySoundGUI) exitWith {};

switch (_mode) do {
	case (0) : {
		switch (floor random 2) do {
			case (0) : {PlaySound "T1AM_Sounds_Click1"};
			case (1) : {PlaySound "T1AM_Sounds_Click2"};
		};
	};
	
	case (1) : {
		switch (floor random 3) do {
			case (0) : {PlaySound "T1AM_Sounds_Button1"};
			case (1) : {PlaySound "T1AM_Sounds_Button2"};
			case (2) : {PlaySound "T1AM_Sounds_Button3"};
		};
	};
	
	case (2) : {
		switch (floor random 2) do {
			case (0) : {PlaySound "T1AM_Sounds_Type1"};
			case (1) : {PlaySound "T1AM_Sounds_Type2"};
		};
	};
};