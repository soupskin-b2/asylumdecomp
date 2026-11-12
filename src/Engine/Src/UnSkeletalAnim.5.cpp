// UnSkeletalAnim.cpp: 8 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x00940310
void USkeletalMeshComponent::execUpdatePermanentFixing( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	UpdatePermanentFixing();
}

// @baa 0x00937ec0
void USkeletalMeshComponent::execSetAnimTreeTemplate(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UAnimTree, NewTemplate);
	P_FINISH;
	sub_00937e40(NewTemplate);
}

// @baa 0x00940090
void USkeletalMeshComponent::execDetachComponent(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UActorComponent, Component);
	P_FINISH;
	if (Component)
		sub_0093fde0(Component);
}

// @baa 0x00940100
void USkeletalMeshComponent::execAttachComponentToSocket(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UActorComponent, Component);
	P_GET_NAME(SocketName);
	P_FINISH;
	if ( Component != NULL )
	{
		AttachComponentToSocket(Component, SocketName);
	}
}

extern FName g_026c430c;
	/* ENGINE_PlayRumble */
struct APlayerController_ : public APlayerController
{
	void eventPlayRumble(class UAnimNotify_Rumble* TheAnimNotify);
};

// @baa 0x0090afa0
/* The script event's generated glue (EngineClasses.h), out of line here. */
void APlayerController_::eventPlayRumble(class UAnimNotify_Rumble* TheAnimNotify)
{
	struct PlayerController_eventPlayRumble_Parms
	{
		class UAnimNotify_Rumble* TheAnimNotify;
	} Parms;
	Parms.TheAnimNotify = TheAnimNotify;
	ProcessEvent(FindFunctionChecked(g_026c430c), &Parms);
}

extern FName g_026c4260;
	/* ENGINE_PlayFootStepSound */
struct APawn_ : public APawn
{
	void eventPlayFootStepSound(INT FootDown);
};

// @baa 0x0090b0a0
/* The script event's generated glue (EngineClasses.h), out of line here. */
void APawn_::eventPlayFootStepSound(INT FootDown)
{
	struct Pawn_eventPlayFootStepSound_Parms
	{
		INT FootDown;
	} Parms;
	Parms.FootDown = FootDown;
	ProcessEvent(FindFunctionChecked(g_026c4260), &Parms);
}

extern FName g_026c53a8;
	/* ENGINE_Notify */
struct UAnimNotify_Scripted_ : public UAnimNotify_Scripted
{
	void eventNotify(class AActor* Owner, class USkeletalMeshComponent* AnimSeqInstigator);
};

// @baa 0x0090c1c0
/* The script event's generated glue (EngineClasses.h), out of line here. */
void UAnimNotify_Scripted_::eventNotify(class AActor* Owner, class USkeletalMeshComponent* AnimSeqInstigator)
{
	struct AnimNotify_Scripted_eventNotify_Parms
	{
		class AActor* Owner;
		class USkeletalMeshComponent* AnimSeqInstigator;
	} Parms;
	Parms.Owner = Owner;
	Parms.AnimSeqInstigator = AnimSeqInstigator;
	ProcessEvent(FindFunctionChecked(g_026c53a8), &Parms);
}

/* Kit gap: Script.h lacks UE3's P_GET_STRUCT_OPTX (UnScript.h); the struct constructors (UnMath.h) build the defaults. */
#define P_GET_STRUCT_OPTX(t, v, d) t v; GRuntimeUCFlags &= ~RUC_SkippedOptionalParm; Stack.Step(Stack.Object, &v); if (GRuntimeUCFlags & RUC_SkippedOptionalParm) v = d;
struct FRotator_ : public FRotator
{
	FRotator_(INT InPitch, INT InYaw, INT InRoll) { Pitch = InPitch; Yaw = InYaw; Roll = InRoll; }
};

struct FVector_ : public FVector
{
	FVector_(FLOAT InX, FLOAT InY, FLOAT InZ) { X = InX; Y = InY; Z = InZ; }
};

/* Kit gaps: AttachComponent (0093fba0) isn't declared (names from the exe's native table). */
struct USkeletalMeshComponent_ : public USkeletalMeshComponent
{
	void AttachComponent(class UActorComponent* Component, FName BoneName, FVector RelativeLocation, FRotator RelativeRotation, FVector RelativeScale);	/* 0x0093fba0 */
};

// @baa 0x0093fea0
void USkeletalMeshComponent::execAttachComponent(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UActorComponent, Component);
	P_GET_NAME(BoneName);
	P_GET_STRUCT_OPTX(FVector, RelativeLocation, FVector_(0.f, 0.f, 0.f));
	P_GET_STRUCT_OPTX(FRotator, RelativeRotation, FRotator_(0, 0, 0));
	P_GET_STRUCT_OPTX(FVector, RelativeScale, FVector_(1.f, 1.f, 1.f));
	P_FINISH;
	if (Component)
	{
		((USkeletalMeshComponent_*)this)->AttachComponent(Component, BoneName, RelativeLocation, RelativeRotation, RelativeScale);
	}
}
