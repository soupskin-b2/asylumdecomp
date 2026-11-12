// RControllableChatteringTeethBase.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026e2e5c;
	/* HandleExplode */
struct ARControllableChatteringTeethCamera_ : public ARControllableChatteringTeethCamera
{
	void eventHandleExplode();
};

// @baa 0x01709e50
/* RControllableChatteringTeethCamera.HandleExplode script event: the generated glue, out of line here. */
void ARControllableChatteringTeethCamera_::eventHandleExplode()
{
	ProcessEvent(FindFunctionChecked(g_026e2e5c), NULL);
}

extern FName g_026e2ef4;
	/* TriggerExplodeEffects */
extern FName g_026e36f4;
	/* DamageNearbyPeople */
extern FName g_026e37b4;
	/* DamageNearbyFractureWalls */
extern FName g_026e2a98;
	/* AlertPeopleToExplosion */
extern FName g_026e2f84;
	/* ApplyExplosionCameraShake */
extern FName g_026e2e98;
	/* TriggerExplosionRumble */
extern FName g_026e2de8;
	/* RemoveTeethPhysics */
struct ARControllableChatteringTeethBase_ : public ARControllableChatteringTeethBase
{
	/* RControllableChatteringTeethBase script events: the generated glue, inlined here. */
	FORCEINLINE void eventTriggerExplodeEffects() { ProcessEvent(FindFunctionChecked(g_026e2ef4), NULL); }
	FORCEINLINE void eventDamageNearbyPeople() { ProcessEvent(FindFunctionChecked(g_026e36f4), NULL); }
	FORCEINLINE void eventDamageNearbyFractureWalls() { ProcessEvent(FindFunctionChecked(g_026e37b4), NULL); }
	FORCEINLINE void eventAlertPeopleToExplosion() { ProcessEvent(FindFunctionChecked(g_026e2a98), NULL); }
	FORCEINLINE void eventApplyExplosionCameraShake() { ProcessEvent(FindFunctionChecked(g_026e2f84), NULL); }
	FORCEINLINE void eventTriggerExplosionRumble() { ProcessEvent(FindFunctionChecked(g_026e2e98), NULL); }
	FORCEINLINE void eventRemoveTeethPhysics() { ProcessEvent(FindFunctionChecked(g_026e2de8), NULL); }

	void sub_01714fa0(FLOAT DeltaTime);
};

// @baa 0x01714fa0
/* The teeth explode: effects, damage, alerts, shake and rumble, then they hide, drop their physics and fall
 * silent, and wait out the post-explosion delay. */
void ARControllableChatteringTeethBase_::sub_01714fa0(FLOAT DeltaTime)
{
#line 157 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RControllableChatteringTeethBase.cpp"
	check(TeethState == CHATTERINGTEETHSTATE_Explode);
	eventTriggerExplodeEffects();
	eventDamageNearbyPeople();
	eventDamageNearbyFractureWalls();
	eventAlertPeopleToExplosion();
	eventApplyExplosionCameraShake();
	eventTriggerExplosionRumble();
	SetHidden(TRUE);
	eventRemoveTeethPhysics();
	if (WalkSoundComponent->sub_00786280())
	{
		WalkSoundComponent->Stop();
	}
	TeethState = CHATTERINGTEETHSTATE_PostExplodeDelay;
	if (ExplosionOutcome == EXPLOSIONOUTCOME_NotExploded)
	{
		ExplosionOutcome = EXPLOSIONOUTCOME_None;
	}
}

#line 76 "candidate.cpp"
