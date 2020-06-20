class CfgPatches
{
	class t1_suppression
	{
		requiredaddons[] = {"A3_Functions_F"};
		weapons[] = {};
		magazines[] = {};
		units[] = {};
	};
};



class CfgBrains
{
	class DefaultSoldierBrain
	{
		class Components
		{
			class AIBrainCountermeasuresComponent
			{
				useSmokeGrenadeDelay = 10; // Modified
				CMCheckDelay = 0.8;
				suppressionThreshold = 0.5; // Modified
				nonLeaderSmokeProbability = 0.5; // Modified
				CMOnTargettedProbability = 0.5; // Modified
				suppressionTimerMax = 2;
				minimalThrowDistance = 900;
				minReactionTime = 0.25; // Modified
				maxReactionTime = 3;
				randomReactionTimePercent = 0.2;
			};
			class AIBrainSuppressionComponent
			{
				maxSuppression = 1;
				worstDecreaseTime = 90; // Modified
				bestDecreaseTime = 65; // Modified
				SuppressionRange = 20;
				CauseFireWeight = 0.025; // Modified
				CauseHitWeight = 0.3; // Modified
				CauseExplosionWeight = 0.025; // Modified
				CauseBulletCloseWeight = 0.025; // Modified
				SuppressionThreshold = 0.5; // Modified
			};
			class AIBrainAimingErrorComponent
			{
				maxAngularError = 0.05; // Modified
				maxAngularErrorTurrets = 0.045; // Modified
				worstDecreaseTime = 1.1; // Modified
				bestDecreaseTime = 1; // Modified
				lostTargetTimeMin = 0.5;
				lostTargetTimeMax = 3;
				shootingInfluence = 0.4; // Modified
				movingInfluence = 1;
				turningInfluence = 1;
				damageCoef = 10;
				fatigueCoef = 10;
				suppressionCoef = 0.25;
				lostTargetCoef = 3;
			};
		};
	};
};



// AmmoCfg
// suppressionRadiusBulletClose	- Defines the max distance in meters at which the suppression value can go up by the bullet's pass. Value -1 disables the suppressive effect (works only for bullets, no other projectiles). No idea what affects the actual distance.
// suppressionRadiusHit			- Defines the max distance in meters at which the suppression value can go up by the projectile's impact or explosion. Value -1 disables the suppressive effect. The actual distance is affected by the projectile's hit value and the projectile's velocity.
// shootDistraction				- Below 0 means it decreases dynamic error (DCE) which each shot, above 0 increases DCE which each shot, if the parameter is -1, the value will be calculated as 0.01 * (audibleFire^2 + visibleFire^2)
// dangerRadiusBulletClose		- Probably does something with AI behavior. Defines the max distance in meters at which the suppression value can go up by the bullet's pass. Yes, that means there are two variables that set the max suppression range for flying projectiles.
// dangerRadiusHit				- Probably does something with AI behavior. It doesn't appear to change the max suppression range for projectile impacts.


// CfgBrains > DefaultSoldierBrain > Components > AIBrainCountermeasuresComponent

// Values set by modset:
// CMOnTargettedProbability = 0.5;
// maxReactionTime = 3;
// minReactionTime = 0.1;
// randomReactionTimePercent = 0.3;

// Default values:
// useSmokeGrenadeDelay = 20;			??
// CMCheckDelay = 0.8;					??
// suppressionThreshold = 0.8;			??
// nonLeaderSmokeProbability = 0.1;		??
// CMOnTargettedProbability = 0.1;		??
// suppressionTimerMax = 2;				??
// minimalThrowDistance = 900;			??
// minReactionTime = 0.1;				??
// maxReactionTime = 3;					??
// randomReactionTimePercent = 0.2;		??



// CfgBrains > DefaultSoldierBrain > Components > AIBrainSuppressionComponent

// Values set by modset:
// Empty

// Default values:
// maxSuppression = 1;				Max suppression value.
// worstDecreaseTime = 10; 			Dictates how quickly the suppression value lowers from max suppression value in seconds for 0.0 skilled soldier (skill is decided by the courage skill). 
// bestDecreaseTime = 1;			Dictates how quickly the suppression value lowers from max suppression value in seconds for 1.0 skilled soldier (skill is decided by the courage skill). 
// SuppressionRange = 20;			??
// CauseFireWeight = 0.5;			??
// CauseHitWeight = 0.5;			Direct hits increase suppression value (not entirely sure). This one doesn't register most of the time (maybe because of ACE medical?).
// CauseExplosionWeight = 0.5;		Nearby Hits increase suppression value (multiplier). This is affected by the projectile's hit value and velocity.
// CauseBulletCloseWeight = 0.5;	Passing bullets increase suppression value (multiplier). No idea what this is affected by.
// SuppressionThreshold = 0.7;	 	?? Maybe this dictates when the suppressed AI behavior kicks in?



// CfgBrains > DefaultSoldierBrain > Components > AIBrainAimingErrorComponent

// Values set by modset:
// Empty

// Default values:
// maxAngularError = 0.1309;		Half of the error cone in radians. This dictates the max aiming shake when suppressed.
// maxAngularErrorTurrets = 0.0872;	Half of the error cone in radians, used for turrets. I assume this is the same as above but for turrets.
// worstDecreaseTime = 2;			This dictates how fast the aiming shake gets reduced. How long (in seconds) it should take 0.0 skilled soldier to stabilize the aim completely (skill is decided by the courage skill).
// bestDecreaseTime = 0.2;			This dictates how fast the aiming shake gets reduced. How long (in seconds) it should take 1.0 skilled soldier to stabilize the aim completely (skill is decided by the courage skill).
// lostTargetTimeMin = 0.5;			How soon after loosing sight of target, error starts to raise. ??
// lostTargetTimeMax = 3;			How long error is raising after loosing sight of target. ??
// shootingInfluence = 0.4;			Importance of shooting in algorithm, multiplier. Adds permanent aiming shake.
// movingInfluence = 1;				Importance of moving in algorithm, multiplier. ??
// turningInfluence = 1;			Importance of turning in algorithm, multiplier. ??
// damageCoef = 10;					Importance of damage of entity, multiplier. ??
// fatigueCoef = 10;				Importance of fatigue of entity, multiplier. ??
// suppressionCoef = 0.5;			Importance of suppression value, multiplier. The higher the suppression value, the more aiming shake is added.
// lostTargetCoef = 3;				Importance of loosing target event, multiplier. ??