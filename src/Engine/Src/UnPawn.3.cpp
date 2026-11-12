// UnPawn.cpp: 41 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// Script event thunk for PhysicsVolume.PhysicsChangedFor (probe event: NAME_PROBEMIN + 59).
extern FName ENGINE_PhysicsChangedFor;
 // 026c5190
struct APhysicsVolume_ : public APhysicsVolume {
    void eventPhysicsChangedFor(class AActor* ChangedActor);
};

struct PhysicsVolume_eventPhysicsChangedFor_Parms
{
    class AActor* ChangedActor;
};

// @baa 0x008643c0
void APhysicsVolume_::eventPhysicsChangedFor(class AActor* ChangedActor)
{
    if (!StateFrame || (StateFrame->ProbeMask & ((QWORD)1 << 59)))
    {
        PhysicsVolume_eventPhysicsChangedFor_Parms Parms;
        Parms.ChangedActor = ChangedActor;
        ProcessEvent(FindFunctionChecked(ENGINE_PhysicsChangedFor), &Parms);
    }
}

struct APawn_ : public APawn
{
	UBOOL ValidAnchor();
	void execValidAnchor(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c8a950
void APawn_::execValidAnchor( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(UBOOL*)Result = ValidAnchor();
}

// @baa 0x00c8ac40
void APawn::execSetAnchor(FFrame& Stack, RESULT_DECL)
{
    P_GET_OBJECT(ANavigationPoint, NewAnchor);
    P_FINISH;
    vf_36c((INT)NewAnchor);   // SetAnchor(NewAnchor)
}

// @baa 0x00c8af20
void APawn::execForceCrouch( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_380();
}

struct APawn__00c8b0a0 : public APawn
{
	UBOOL IsHumanControlled();
	void execIsHumanControlled(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c8b0a0
void APawn__00c8b0a0::execIsHumanControlled( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(UBOOL*)Result = IsHumanControlled();
}

struct APawn__00c8b0e0 : public APawn
{
	UBOOL IsLocallyControlled();
	void execIsLocallyControlled(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c8b0e0
void APawn__00c8b0e0::execIsLocallyControlled( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(UBOOL*)Result = IsLocallyControlled();
}

// @baa 0x00c8b260
void APawn::execClearConstraints( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_3a0();
}

// @baa 0x00c8b510
void APawn::execClearPathStep( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_3b8();
}

// @baa 0x00c8a810
void APawn::execIsAliveAndWell(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;

	*(UBOOL*)Result = vf_354();
}

// @baa 0x00c8b2a0
void APawn::execAddPathConstraint(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UPathConstraint, Constraint);
	P_FINISH;

	vf_3a4(Constraint);
}

// @baa 0x00c8aba0
void APawn::execIsInvisible(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_368();
}

// @baa 0x00c8afe0
void APawn::execReachedDesiredRotation(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_388();
}

// @baa 0x00c8b020
void APawn::execInitRagdoll(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_38c();
}

// @baa 0x00c8b060
void APawn::execTermRagdoll(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_390();
}

// @baa 0x00c8b120
void APawn::execIsPlayerPawn(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_160();
}

// @baa 0x00c8b220
void APawn::execGetVehicleBase(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(AVehicle**)Result = (AVehicle*)vf_39c();
}

struct APawn__00c8abe0 : public APawn
{
	void sub_00865220(INT);
};

// @baa 0x00c8abe0
void APawn::execSetRemoteViewPitch(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(NewRemoteViewPitch);
	P_FINISH;
	((APawn__00c8abe0*)this)->sub_00865220(NewRemoteViewPitch);
}

// @baa 0x00c8b4a0
void APawn::execDrawPathStep(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UCanvas, C);
	P_FINISH;

	DrawPathStep(C);
}

// @baa 0x00c8b310
void APawn::execAddGoalEvaluator(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UPathGoalEvaluator, Evaluator);
	P_FINISH;
	AddGoalEvaluator(Evaluator);
}

// @baa 0x00c8aa80
void APawn::execIsValidTargetFor(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(AController, C);
	P_FINISH;
	*(UBOOL*)Result = IsValidTargetFor(C);
}

// @baa 0x00c8ae00
void APawn::execReachedDestination(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(AActor, Goal);
	P_FINISH;
	*(UBOOL*)Result = ReachedDestination(Goal);
}

// @baa 0x00c8af60
void APawn::execSetPushesRigidBodies(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(NewPush);
	P_FINISH;
	SetPushesRigidBodies(NewPush);
}

// @baa 0x00c8b160
void APawn::execGetViewRotation(FFrame& Stack, RESULT_DECL)
{
    P_FINISH;

    *reinterpret_cast<FRotator*>(Result) = GetViewRotation();
}

// @baa 0x00c8a750
void APawn::execGetBasedPosition(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FBasedPosition, BP);
    P_FINISH;
    *(FVector*)Result = GetBasedPosition(BP);
}

// @baa 0x00873b30
void AActor::execMoveSmooth(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT(FVector, Delta);
	P_FINISH;
	bJustTeleported = 0;
	*(UBOOL*)Result = sub_00868010(Delta);
}

// @baa 0x00c8b1c0
void APawn::execGetPawnViewLocation(FFrame& Stack, RESULT_DECL)
{
    P_FINISH;
    *(FVector*)Result = vf_398();
}

extern FName g_026c51e8;
	/* ENGINE_Landed */
/* EName entries Core.h doesn't list yet (UnNames.h) */
#define NAME_PROBEMIN 0x12c
#define NAME_Landed 0x137
struct AActor_ : public AActor
{
	void eventLanded(FVector HitNormal, AActor* FloorActor);
};

// @baa 0x00863f00
/* The script event's generated glue (EngineClasses.h), out of line here. Landed is a probe
 * function: the glue only calls into script when the current state probes for it. */
void AActor_::eventLanded(FVector HitNormal, AActor* FloorActor)
{
	if (!StateFrame || (StateFrame->ProbeMask & ((QWORD)1 << (NAME_Landed - NAME_PROBEMIN))))
	{
		struct Actor_eventLanded_Parms
		{
			FVector HitNormal;
			class AActor* FloorActor;
		} Parms;
		Parms.HitNormal = HitNormal;
		Parms.FloorActor = FloorActor;
		ProcessEvent(FindFunctionChecked(g_026c51e8), &Parms);
	}
}

extern FName g_026c4e70;
#define NAME_HitWall 0x135
struct AActor__00863fc0 : public AActor
{
	void eventHitWall(FVector HitNormal, AActor* Wall, UPrimitiveComponent* WallComp);
};

// @baa 0x00863fc0
/* The script event's generated glue (EngineClasses.h), out of line here. HitWall is a probe
 * function: the glue only calls into script when the current state probes for it. */
void AActor__00863fc0::eventHitWall(FVector HitNormal, AActor* Wall, UPrimitiveComponent* WallComp)
{
	if (!StateFrame || (StateFrame->ProbeMask & ((QWORD)1 << (NAME_HitWall - NAME_PROBEMIN))))
	{
		struct Actor_eventHitWall_Parms
		{
			FVector HitNormal;
			class AActor* Wall;
			class UPrimitiveComponent* WallComp;
		} Parms;
		Parms.HitNormal = HitNormal;
		Parms.Wall = Wall;
		Parms.WallComp = WallComp;
		ProcessEvent(FindFunctionChecked(g_026c4e70), &Parms);
	}
}

extern FName g_026c4278;
#define NAME_NotifyHitWall 0x161
struct AController_ : public AController
{
	UBOOL eventNotifyHitWall(FVector HitNormal, AActor* Wall);
};

// @baa 0x008644f0
/* The script event's generated glue (EngineClasses.h), out of line here. NotifyHitWall is a probe
 * function: the glue only calls into script when the current state probes for it. */
UBOOL AController_::eventNotifyHitWall(FVector HitNormal, AActor* Wall)
{
	struct Controller_eventNotifyHitWall_Parms
	{
		FVector HitNormal;
		class AActor* Wall;
		UBOOL ReturnValue;
	} Parms;
	Parms.ReturnValue = FALSE;
	if (!StateFrame || (StateFrame->ProbeMask & ((QWORD)1 << (NAME_NotifyHitWall - NAME_PROBEMIN))))
	{
		Parms.HitNormal = HitNormal;
		Parms.Wall = Wall;
		ProcessEvent(FindFunctionChecked(g_026c4278), &Parms);
	}
	return Parms.ReturnValue;
}

extern FName g_026c4150;
#define NAME_NotifyLanded 0x160
struct AController__00864570 : public AController
{
	UBOOL eventNotifyLanded(FVector HitNormal, AActor* FloorActor);
};

// @baa 0x00864570
/* The script event's generated glue (EngineClasses.h), out of line here. NotifyLanded is a probe
 * function: the glue only calls into script when the current state probes for it. */
UBOOL AController__00864570::eventNotifyLanded(FVector HitNormal, AActor* FloorActor)
{
	struct Controller_eventNotifyLanded_Parms
	{
		FVector HitNormal;
		class AActor* FloorActor;
		UBOOL ReturnValue;
	} Parms;
	Parms.ReturnValue = FALSE;
	if (!StateFrame || (StateFrame->ProbeMask & ((QWORD)1 << (NAME_NotifyLanded - NAME_PROBEMIN))))
	{
		Parms.HitNormal = HitNormal;
		Parms.FloorActor = FloorActor;
		ProcessEvent(FindFunctionChecked(g_026c4150), &Parms);
	}
	return Parms.ReturnValue;
}

extern FName g_026c502c;
	/* ENGINE_StuckOnPawn */
struct APawn__00864830 : public APawn
{
	void eventStuckOnPawn(APawn* OtherPawn);
};

// @baa 0x00864830
/* The script event's generated glue (EngineClasses.h), out of line here. */
void APawn__00864830::eventStuckOnPawn(APawn* OtherPawn)
{
	struct Pawn_eventStuckOnPawn_Parms
	{
		class APawn* OtherPawn;
	} Parms;
	Parms.OtherPawn = OtherPawn;
	ProcessEvent(FindFunctionChecked(g_026c502c), &Parms);
}

extern FName g_026c3e3c;
	/* ENGINE_SetWalking */
struct APawn__0079f760 : public APawn
{
	void eventSetWalking(UBOOL bNewIsWalking);
};

// @baa 0x0079f760
/* The script event's generated glue (EngineClasses.h), out of line here. */
void APawn__0079f760::eventSetWalking(UBOOL bNewIsWalking)
{
	struct Pawn_eventSetWalking_Parms
	{
		UBOOL bNewIsWalking;
	} Parms;
	Parms.bNewIsWalking = bNewIsWalking ? TRUE : FALSE;
	ProcessEvent(FindFunctionChecked(g_026c3e3c), &Parms);
}

extern FName g_026c47f4;
	/* ENGINE_StartCrouch */
struct APawn__00864870 : public APawn
{
	void eventStartCrouch(FLOAT HeightAdjust);
};

// @baa 0x00864870
/* The script event's generated glue (EngineClasses.h), out of line here. */
void APawn__00864870::eventStartCrouch(FLOAT HeightAdjust)
{
	struct Pawn_eventStartCrouch_Parms
	{
		FLOAT HeightAdjust;
	} Parms;
	Parms.HeightAdjust = HeightAdjust;
	ProcessEvent(FindFunctionChecked(g_026c47f4), &Parms);
}

extern FName g_026c4ed8;
	/* ENGINE_EndCrouch */
struct APawn__008648b0 : public APawn
{
	void eventEndCrouch(FLOAT HeightAdjust);
};

// @baa 0x008648b0
/* The script event's generated glue (EngineClasses.h), out of line here. */
void APawn__008648b0::eventEndCrouch(FLOAT HeightAdjust)
{
	struct Pawn_eventEndCrouch_Parms
	{
		FLOAT HeightAdjust;
	} Parms;
	Parms.HeightAdjust = HeightAdjust;
	ProcessEvent(FindFunctionChecked(g_026c4ed8), &Parms);
}

extern FName g_026c3fac;
#define NAME_Falling 0x136
struct AActor__00863f70 : public AActor
{
	void eventFalling();
};

// @baa 0x00863f70
/* The script event's generated glue (EngineClasses.h), out of line here. Falling is a probe
 * function: the glue only calls into script when the current state probes for it. */
void AActor__00863f70::eventFalling()
{
	if (!StateFrame || (StateFrame->ProbeMask & ((QWORD)1 << (NAME_Falling - NAME_PROBEMIN))))
	{
		ProcessEvent(FindFunctionChecked(g_026c3fac), NULL);
	}
}

extern FName g_026c4be0;
#define NAME_HeadVolumeChange 0x14a
struct APawn__007d6550 : public APawn
{
	void eventHeadVolumeChange(APhysicsVolume* newHeadVolume);
};

// @baa 0x007d6550
/* The script event's generated glue (EngineClasses.h), out of line here. HeadVolumeChange is a probe
 * function: the glue only calls into script when the current state probes for it. */
void APawn__007d6550::eventHeadVolumeChange(APhysicsVolume* newHeadVolume)
{
	struct Pawn_eventHeadVolumeChange_Parms
	{
		class APhysicsVolume* newHeadVolume;
	} Parms;
	if (!StateFrame || (StateFrame->ProbeMask & ((QWORD)1 << (NAME_HeadVolumeChange - NAME_PROBEMIN))))
	{
		Parms.newHeadVolume = newHeadVolume;
		ProcessEvent(FindFunctionChecked(g_026c4be0), &Parms);
	}
}

extern FName g_026c4e34;
	/* ENGINE_NotifyFallingHitWall */
struct AController__00864490 : public AController
{
	void eventNotifyFallingHitWall(FVector HitNormal, AActor* Wall);
};

// @baa 0x00864490
/* The script event's generated glue (EngineClasses.h), out of line here. */
void AController__00864490::eventNotifyFallingHitWall(FVector HitNormal, AActor* Wall)
{
	struct Controller_eventNotifyFallingHitWall_Parms
	{
		FVector HitNormal;
		class AActor* Wall;
	} Parms;
	Parms.HitNormal = HitNormal;
	Parms.Wall = Wall;
	ProcessEvent(FindFunctionChecked(g_026c4e34), &Parms);
}

extern FName g_026c46dc;
	/* ENGINE_MoveUnreachable */
struct AController__00864640 : public AController
{
	void eventMoveUnreachable(FVector AttemptedDest, AActor* AttemptedTarget);
};

// @baa 0x00864640
/* The script event's generated glue (EngineClasses.h), out of line here. */
void AController__00864640::eventMoveUnreachable(FVector AttemptedDest, AActor* AttemptedTarget)
{
	struct Controller_eventMoveUnreachable_Parms
	{
		FVector AttemptedDest;
		class AActor* AttemptedTarget;
	} Parms;
	Parms.AttemptedDest = AttemptedDest;
	Parms.AttemptedTarget = AttemptedTarget;
	ProcessEvent(FindFunctionChecked(g_026c46dc), &Parms);
}

extern FName g_026c4108;
	/* ENGINE_GetPawnViewLocation */
struct APawn__015d81c0 : public APawn
{
	FVector eventGetPawnViewLocation();
};

// @baa 0x015d81c0
/* The script event's generated glue (EngineClasses.h), out of line here. */
FVector APawn__015d81c0::eventGetPawnViewLocation()
{
	struct Pawn_eventGetPawnViewLocation_Parms
	{
		FVector ReturnValue;
	} Parms;
	appMemzero(&Parms, sizeof(Parms));
	ProcessEvent(FindFunctionChecked(g_026c4108), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026c4b68;
#define NAME_MayFall 0x14d
struct AController__008645f0 : public AController
{
	void eventMayFall();
};

// @baa 0x008645f0
/* The script event's generated glue (EngineClasses.h), out of line here. MayFall is a probe
 * function: the glue only calls into script when the current state probes for it. */
void AController__008645f0::eventMayFall()
{
	if (!StateFrame || (StateFrame->ProbeMask & ((QWORD)1 << (NAME_MayFall - NAME_PROBEMIN))))
	{
		ProcessEvent(FindFunctionChecked(g_026c4b68), NULL);
	}
}

/* APawn::SetBasedPosition (0x7ad430) isn't declared in the kit. */
struct APawn__00c8a640 : public APawn
{
    void SetBasedPosition(FBasedPosition& BP, FVector pos, class AActor* ForcedBase);
};

// @baa 0x00c8a640
void APawn::execSetBasedPosition(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT_REF(FBasedPosition, BP);
    P_GET_STRUCT(FVector, pos);
    P_GET_OBJECT_OPTX(AActor, ForcedBase, NULL);
    P_FINISH;
    ((APawn__00c8a640*)this)->SetBasedPosition(BP, pos, ForcedBase);
}
