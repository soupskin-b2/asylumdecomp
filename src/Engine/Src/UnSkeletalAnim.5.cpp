// UnSkeletalAnim.cpp: 9 functions
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
	SetAnimTreeTemplate(NewTemplate);
}

// @baa 0x00940090
void USkeletalMeshComponent::execDetachComponent(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UActorComponent, Component);
	P_FINISH;
	if (Component)
		DetachComponent(Component);
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

// @baa 0x0090afa0
/* The script event's generated glue (EngineClasses.h), out of line here. */
void APlayerController::eventPlayRumble(class UAnimNotify_Rumble* TheAnimNotify)
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

// @baa 0x0090b0a0
/* The script event's generated glue (EngineClasses.h), out of line here. */
void APawn::eventPlayFootStepSound(INT FootDown)
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

// @baa 0x0090c1c0
/* The script event's generated glue (EngineClasses.h), out of line here. */
void UAnimNotify_Scripted::eventNotify(class AActor* Owner, class USkeletalMeshComponent* AnimSeqInstigator)
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
// @baa 0x0093fea0
void USkeletalMeshComponent::execAttachComponent(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UActorComponent, Component);
	P_GET_NAME(BoneName);
	P_GET_STRUCT_OPTX(FVector, RelativeLocation, FVector(0.f, 0.f, 0.f));
	P_GET_STRUCT_OPTX(FRotator, RelativeRotation, FRotator(0, 0, 0));
	P_GET_STRUCT_OPTX(FVector, RelativeScale, FVector(1.f, 1.f, 1.f));
	P_FINISH;
	if (Component)
	{
		this->AttachComponent(Component, BoneName, RelativeLocation, RelativeRotation, RelativeScale);
	}
}

extern FName g_026c4164;
	/* ENGINE_ClientSpawnCameraLensEffect */
// @baa 0x0090af60
void APlayerController::eventClientSpawnCameraLensEffect(UClass* LensEffectEmitterClass)
{
	struct PlayerController_eventClientSpawnCameraLensEffect_Parms
	{
		UClass* LensEffectEmitterClass;
	} Parms;
	Parms.LensEffectEmitterClass = LensEffectEmitterClass;
	ProcessEvent(FindFunctionChecked(g_026c4164), &Parms);
}
