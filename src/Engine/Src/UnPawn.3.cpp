// UnPawn.cpp: 17 functions
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

	vf_3a4((INT)Constraint);
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
