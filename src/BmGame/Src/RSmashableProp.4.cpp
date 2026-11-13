// RSmashableProp.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct ARSmashableProp_ : public ARSmashableProp
{
	INT sub_01675050(FName DecalName); /* 0x01675050: the index of the named decal in PropData's decal list, or INDEX_NONE */
};

// @baa 0x016751c0
/* The decal material instance for the named decal (NULL without prop data or when the name isn't found). */
void* ARSmashableProp::sub_016751c0(FName DecalName)
{
	UMaterialInstance* DecalMaterial = NULL;
	if (PropData)
	{
		INT DecalIndex = ((ARSmashableProp_*)this)->sub_01675050(DecalName);
		if (DecalIndex != INDEX_NONE)
		{
			DecalMaterial = DecalMaterialInstances(DecalIndex);
		}
	}
	return DecalMaterial;
}

// @baa 0x0166b820
/* Breaks the prop on its own timer (no impact force or colliders), unless the timer is unset (-1). */
void ARSmashableProp::sub_0166b820()
{
	if (PropBreakTimer != -1.f)
	{
#line 545 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RSmashableProp.cpp"
		check(PropBreakTimer >= 0.0f);
		TriggerBreakProp(FVector(0.f, 0.f, 0.f), PropBreakTimer, NULL, NULL);
	}
}

#line 40 "candidate.cpp"

// @baa 0x0166b4d0
/* Arms the prop's break timer, recording the impulse to apply (scaled by the prop config) and the actor that hit it. */
void ARSmashableProp::TriggerBreakProp(FVector BreakNormalForce, FLOAT breakTimerVal, AActor* CollideActor0, AActor* CollideActor1)
{
#line 94 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RSmashableProp.cpp"
	check(breakTimerVal >= 0.0f);
	if (!PropIsBroken)
	{
		if (breakTimerVal == 0.f)
		{
			breakTimerVal = 1.e-8f;
		}
		FLOAT ImpulseScale = 0.f;
		if (PropData != NULL)
		{
			ImpulseScale = PropData->PropSmashNormalForceImpulseMultiplier;
		}
		PropBreakingImpulse = BreakNormalForce * ImpulseScale;
		if (CollideActor0 == this)
		{
			BreakCollideActor = CollideActor1;
		}
		else
		{
			BreakCollideActor = (CollideActor1 == this) ? CollideActor0 : NULL;
		}
		SetTimer(breakTimerVal, FALSE, BreakTimerName, NULL);
	}
}

#line 72 "candidate.cpp"
