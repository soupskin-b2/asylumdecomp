// UnLevAct.cpp: 11 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026c49e8;
	/* ENGINE_Bump */
/* EName entries Core.h doesn't list yet (UnNames.h) */

// @baa 0x007d5d50
/* The script event's generated glue (EngineClasses.h), out of line here. Bump is a probe
 * function: the glue only calls into script when the current state probes for it. */
void AActor::eventBump(AActor* Other, UPrimitiveComponent* OtherComp, FVector HitNormal)
{
	if (!StateFrame || (StateFrame->ProbeMask & ((QWORD)1 << (NAME_Bump - NAME_PROBEMIN))))
	{
		struct Actor_eventBump_Parms
		{
			class AActor* Other;
			class UPrimitiveComponent* OtherComp;
			FVector HitNormal;
		} Parms;
		Parms.Other = Other;
		Parms.OtherComp = OtherComp;
		Parms.HitNormal = HitNormal;
		ProcessEvent(FindFunctionChecked(g_026c49e8), &Parms);
	}
}

extern FName g_026c4fb4;
	/* ENGINE_RanInto */

// @baa 0x007d5c50
/* The script event's generated glue (EngineClasses.h), out of line here. */
void AActor::eventRanInto(AActor* Other)
{
	struct Actor_eventRanInto_Parms
	{
		class AActor* Other;
	} Parms;
	Parms.Other = Other;
	ProcessEvent(FindFunctionChecked(g_026c4fb4), &Parms);
}

extern FName g_026c462c;
	/* ENGINE_ProcessActorSetVolume */

// @baa 0x007d5e80
/* The script event's generated glue (EngineClasses.h), out of line here. */
void AActor::eventProcessActorSetVolume(AVolume* V)
{
	struct Actor_eventProcessActorSetVolume_Parms
	{
		class AVolume* V;
	} Parms;
	Parms.V = V;
	ProcessEvent(FindFunctionChecked(g_026c462c), &Parms);
}

extern FName g_026c4fac;

// @baa 0x007d5c90
/* The script event's generated glue (EngineClasses.h), out of line here. EncroachedBy is a probe
 * function: the glue only calls into script when the current state probes for it. */
void AActor::eventEncroachedBy(AActor* Other)
{
	struct Actor_eventEncroachedBy_Parms
	{
		class AActor* Other;
	} Parms;
	if (!StateFrame || (StateFrame->ProbeMask & ((QWORD)1 << (NAME_EncroachedBy - NAME_PROBEMIN))))
	{
		Parms.Other = Other;
		ProcessEvent(FindFunctionChecked(g_026c4fac), &Parms);
	}
}

extern FName g_026c4a74;

// @baa 0x007d5dd0
/* The script event's generated glue (EngineClasses.h), out of line here. PhysicsVolumeChange is a probe
 * function: the glue only calls into script when the current state probes for it. */
void AActor::eventPhysicsVolumeChange(APhysicsVolume* NewVolume)
{
	struct Actor_eventPhysicsVolumeChange_Parms
	{
		class APhysicsVolume* NewVolume;
	} Parms;
	if (!StateFrame || (StateFrame->ProbeMask & ((QWORD)1 << (NAME_PhysicsVolumeChange - NAME_PROBEMIN))))
	{
		Parms.NewVolume = NewVolume;
		ProcessEvent(FindFunctionChecked(g_026c4a74), &Parms);
	}
}

extern FName g_026c43cc;

// @baa 0x007d5ce0
/* The script event's generated glue (EngineClasses.h), out of line here. EncroachingOn is a probe
 * function: the glue only calls into script when the current state probes for it. */
UBOOL AActor::eventEncroachingOn(AActor* Other)
{
	struct Actor_eventEncroachingOn_Parms
	{
		class AActor* Other;
		UBOOL ReturnValue;
	} Parms;
	Parms.ReturnValue = FALSE;
	if (!StateFrame || (StateFrame->ProbeMask & ((QWORD)1 << (NAME_EncroachingOn - NAME_PROBEMIN))))
	{
		Parms.Other = Other;
		ProcessEvent(FindFunctionChecked(g_026c43cc), &Parms);
	}
	return Parms.ReturnValue;
}

extern FName g_026c4c88;

// @baa 0x007d6170
/* The script event's generated glue (EngineClasses.h), out of line here. NotifyHeadVolumeChange is a probe
 * function: the glue only calls into script when the current state probes for it. */
UBOOL AController::eventNotifyHeadVolumeChange(APhysicsVolume* NewVolume)
{
	struct Controller_eventNotifyHeadVolumeChange_Parms
	{
		class APhysicsVolume* NewVolume;
		UBOOL ReturnValue;
	} Parms;
	Parms.ReturnValue = FALSE;
	if (!StateFrame || (StateFrame->ProbeMask & ((QWORD)1 << (NAME_NotifyHeadVolumeChange - NAME_PROBEMIN))))
	{
		Parms.NewVolume = NewVolume;
		ProcessEvent(FindFunctionChecked(g_026c4c88), &Parms);
	}
	return Parms.ReturnValue;
}

extern FName g_026c5284;

// @baa 0x007d61e0
/* The script event's generated glue (EngineClasses.h), out of line here. NotifyPhysicsVolumeChange is a probe
 * function: the glue only calls into script when the current state probes for it. */
void AController::eventNotifyPhysicsVolumeChange(APhysicsVolume* NewVolume)
{
	struct Controller_eventNotifyPhysicsVolumeChange_Parms
	{
		class APhysicsVolume* NewVolume;
	} Parms;
	if (!StateFrame || (StateFrame->ProbeMask & ((QWORD)1 << (NAME_NotifyPhysicsVolumeChange - NAME_PROBEMIN))))
	{
		Parms.NewVolume = NewVolume;
		ProcessEvent(FindFunctionChecked(g_026c5284), &Parms);
	}
}

extern FName g_026c3f3c;

// @baa 0x007d5e20
/* The script event's generated glue (EngineClasses.h), out of line here. Destroyed is a probe
 * function: the glue only calls into script when the current state probes for it. */
void AActor::eventDestroyed()
{
	if (!StateFrame || (StateFrame->ProbeMask & ((QWORD)1 << (NAME_Destroyed - NAME_PROBEMIN))))
	{
		ProcessEvent(FindFunctionChecked(g_026c3f3c), NULL);
	}
}

extern FName g_026c4c9c;

// @baa 0x007d5f30
/* The script event's generated glue (EngineClasses.h), out of line here. PawnLeavingVolume is a probe
 * function: the glue only calls into script when the current state probes for it. */
void APhysicsVolume::eventPawnLeavingVolume(APawn* Other)
{
	struct PhysicsVolume_eventPawnLeavingVolume_Parms
	{
		class APawn* Other;
	} Parms;
	if (!StateFrame || (StateFrame->ProbeMask & ((QWORD)1 << (NAME_PawnLeavingVolume - NAME_PROBEMIN))))
	{
		Parms.Other = Other;
		ProcessEvent(FindFunctionChecked(g_026c4c9c), &Parms);
	}
}

extern FName g_026c4554;

// @baa 0x007d5f80
/* The script event's generated glue (EngineClasses.h), out of line here. PawnEnteredVolume is a probe
 * function: the glue only calls into script when the current state probes for it. */
void APhysicsVolume::eventPawnEnteredVolume(APawn* Other)
{
	struct PhysicsVolume_eventPawnEnteredVolume_Parms
	{
		class APawn* Other;
	} Parms;
	if (!StateFrame || (StateFrame->ProbeMask & ((QWORD)1 << (NAME_PawnEnteredVolume - NAME_PROBEMIN))))
	{
		Parms.Other = Other;
		ProcessEvent(FindFunctionChecked(g_026c4554), &Parms);
	}
}
