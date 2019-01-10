_targets=[T1,T2,T3,T4,T5,T6,T7,T8,T9,T10];
unit2 selectweapon "tf47_m3maaws";
unit2 doTarget T4;
sleep 5;
sleep random (10);
while {true} do
{
	_target=round (random 9);
	unit2 doTarget (_targets select _target); 
	if (1==1) then
	{
		unit2 doFire (_targets select _target);
	};
	sleep 7;
	unit2 disableAI "ANIM";
	unit2 addmagazine "tf47_m3maaws_HEAT";
	sleep random (20);
	unit2 enableAI "ANIM";


	if(random 1>0.5) then
	{
		unit2 setUnitPos "UP";
	}
	else
	{
		unit2 setUnitPos "MIDDLE";
	};
};