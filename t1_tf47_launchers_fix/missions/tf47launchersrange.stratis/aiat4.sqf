_targets=[T1,T2,T3,T4,T5,T6,T7,T8,T9,T10];
unit3 selectweapon "tf47_AT4_HEAT";
unit3 doTarget T6;
sleep 5;
sleep random (10);
while {true} do
{
	unit3 enableAI "TARGET";
	_target=round (random 9);
	unit3 doTarget (_targets select _target); 
	if (1==1) then
	{
		unit3 doFire (_targets select _target);
		unit3 addmagazine "tf47_AT4_m_HEAT";
	};
	sleep 7;
//	removeallweapons unit3;
//	unit3 doTarget Box;
//	group unit3 setBehaviour "CARELESS";
//	unit3 setUnitPos "UP";
//	unit3 domove (getMarkerPos "pos2");
//	unit3 disableAI "ANIM";
//	removeallweapons unit3;
	sleep 10;
	sleep random 20;
//	unit3 doTarget (_targets select _target); 
//	unit3 enableAI "ANIM";
//	unit3 addweapon "tf47_at4_HEAT";
//	unit3 domove (getMarkerPos "pos1");

	if(random 1>0.5) then
	{
		unit3 setUnitPos "UP";
	}
	else
	{
		unit3 setUnitPos "MIDDLE";
	};
};