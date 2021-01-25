class CfgPatches
{
	class t1_sway_fix
	{
		requiredaddons[] = {"A3_Data_F"};
		units[] = {};
		weapons[] = {};
		magazines[] = {};
	};
};



class CfgImprecision
{
	class Primary
	{
		breathing = 0.1;
		damage = 5;
		fatigue = 1;
		horizontalRadius = 0.1;
		inertia = 0;
		maxSize = 1.5;
		maxSpeed = 1.35;
		size = 1;
		speed = 0.2;
		verticalRadius = 0.5;
	};
	class Secondary
	{
		breathing = 1;
		damage = 10;
		fatigue = 1;
		horizontalRadius = 0.5;
		inertia = 1;
		maxSize = 2.4;
		maxSpeed = 0.3;
		size = 1;
		speed = 0.4;
		verticalRadius = 0.1;
	};
};