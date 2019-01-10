_targets=[T1,T2,T3,T4,T5,T6,T7,T8,T9,T10];
unit1 selectweapon "tf47_smaw";
unit1 doTarget T1;
sleep random (5);
while {true} do
{
	_target=round (random 9);
	unit1 doTarget (_targets select _target); 
	if (1==1) then
	{
		unit1 doFire (_targets select _target);
	};
	sleep 7;
	unit1 disableAI "ANIM";
	unit1 addmagazine "tf47_smaw_HEAA";
	sleep random (20);
	unit1 enableAI "ANIM";


	if(random 1>0.5) then
	{
		unit1 setUnitPos "UP";
	}
	else
	{
		unit1 setUnitPos "MIDDLE";
	};
};