// UnSkeletalAnim.cpp: 7 functions
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
