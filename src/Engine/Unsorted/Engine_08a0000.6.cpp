// Engine_08a0000.cpp: 26 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x008a94b0
void AVolume::execEncompassesPoint(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT(FVector, Point);
	P_FINISH;
	*(UBOOL*)Result = sub_00877b70(Point);
}

// @baa 0x008a90f0
void AActor::execIsOverlapping(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(AActor, A);
	P_FINISH;
	*(UBOOL*)Result = sub_00763730(A, 0, 0, 0);
}

// @baa 0x008a9430
void AVolume::execEncompasses(FFrame& Stack, RESULT_DECL)
{
    P_GET_OBJECT(AActor, Other);
    P_FINISH;
    /* sub_00877b70 is AVolume::Encompasses(FVector point) */
    *(UBOOL*)Result = sub_00877b70(Other->Location);
}

// @baa 0x008a8270
void AActor::execSetZone(FFrame& Stack, RESULT_DECL)
{
    P_GET_UBOOL(bForceRefresh);
    P_FINISH;
    SetZone(FALSE, bForceRefresh);
}

extern FName g_026c5560;
	/* ModifyHearSoundComponent */
struct AActor_ : public AActor
{
	void eventModifyHearSoundComponent(class UAudioComponent* AC);
};

// @baa 0x008a4c60
/* Actor.ModifyHearSoundComponent script event: the generated glue, out of line here. */
void AActor_::eventModifyHearSoundComponent(class UAudioComponent* AC)
{
	struct Actor_eventModifyHearSoundComponent_Parms
	{
		class UAudioComponent* AC;
	} Parms;
	Parms.AC = AC;
	ProcessEvent(FindFunctionChecked(g_026c5560), &Parms);
}

extern FName g_026c4b04;
	/* OverRotated */
struct AActor__008a4ca0 : public AActor
{
	UBOOL eventOverRotated(FRotator& out_Desired, FRotator& out_Actual);
};

// @baa 0x008a4ca0
/* Actor.OverRotated script event: the generated glue, out of line here. */
UBOOL AActor__008a4ca0::eventOverRotated(FRotator& out_Desired, FRotator& out_Actual)
{
	struct Actor_eventOverRotated_Parms
	{
		FRotator out_Desired;
		FRotator out_Actual;
		UBOOL ReturnValue;
	} Parms;
	Parms.ReturnValue = FALSE;
	Parms.out_Desired = out_Desired;
	Parms.out_Actual = out_Actual;
	ProcessEvent(FindFunctionChecked(g_026c4b04), &Parms);
	out_Desired = Parms.out_Desired;
	out_Actual = Parms.out_Actual;
	return Parms.ReturnValue;
}

extern FName g_026c40a8;
	/* AllowDetourTo */
struct AController_ : public AController
{
	UBOOL eventAllowDetourTo(class ANavigationPoint* N);
};

// @baa 0x008a4e20
/* Controller.AllowDetourTo script event: the generated glue, out of line here. */
UBOOL AController_::eventAllowDetourTo(class ANavigationPoint* N)
{
	struct Controller_eventAllowDetourTo_Parms
	{
		class ANavigationPoint* N;
		UBOOL ReturnValue;
	} Parms;
	Parms.ReturnValue = FALSE;
	Parms.N = N;
	ProcessEvent(FindFunctionChecked(g_026c40a8), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026c5518;
	/* ClientPrestreamTextures */
struct APlayerController_ : public APlayerController
{
	void eventClientPrestreamTextures(class AActor* ForcedActor, FLOAT ForceDuration, UBOOL bEnableStreaming);
};

// @baa 0x008a4f40
/* PlayerController.ClientPrestreamTextures script event: the generated glue, out of line here. */
void APlayerController_::eventClientPrestreamTextures(class AActor* ForcedActor, FLOAT ForceDuration, UBOOL bEnableStreaming)
{
	struct PlayerController_eventClientPrestreamTextures_Parms
	{
		class AActor* ForcedActor;
		FLOAT ForceDuration;
		UBOOL bEnableStreaming;
	} Parms;
	Parms.ForcedActor = ForcedActor;
	Parms.ForceDuration = ForceDuration;
	Parms.bEnableStreaming = bEnableStreaming ? TRUE : FALSE;
	ProcessEvent(FindFunctionChecked(g_026c5518), &Parms);
}

extern FName g_026c4580;
	/* ClientSetForceMipLevelsToBeResident */
struct APlayerController__008a4fa0 : public APlayerController
{
	void eventClientSetForceMipLevelsToBeResident(class UMaterialInterface* Material, FLOAT ForceDuration);
};

// @baa 0x008a4fa0
/* PlayerController.ClientSetForceMipLevelsToBeResident script event: the generated glue, out of line here. */
void APlayerController__008a4fa0::eventClientSetForceMipLevelsToBeResident(class UMaterialInterface* Material, FLOAT ForceDuration)
{
	struct PlayerController_eventClientSetForceMipLevelsToBeResident_Parms
	{
		class UMaterialInterface* Material;
		FLOAT ForceDuration;
	} Parms;
	Parms.Material = Material;
	Parms.ForceDuration = ForceDuration;
	ProcessEvent(FindFunctionChecked(g_026c4580), &Parms);
}

extern FName g_026c5454;
	/* ClientPrepareMapChange */
struct APlayerController__008a5020 : public APlayerController
{
	void eventClientPrepareMapChange(FName LevelName, UBOOL bFirst, UBOOL bLast);
};

// @baa 0x008a5020
/* PlayerController.ClientPrepareMapChange script event: the generated glue, out of line here. */
void APlayerController__008a5020::eventClientPrepareMapChange(FName LevelName, UBOOL bFirst, UBOOL bLast)
{
	struct PlayerController_eventClientPrepareMapChange_Parms
	{
		FName LevelName;
		UBOOL bFirst;
		UBOOL bLast;
	} Parms;
	Parms.LevelName = LevelName;
	Parms.bFirst = bFirst ? TRUE : FALSE;
	Parms.bLast = bLast ? TRUE : FALSE;
	ProcessEvent(FindFunctionChecked(g_026c5454), &Parms);
}

extern FName g_026c52f0;
	/* CameraLookAtFinished */
struct APlayerController__008a50c0 : public APlayerController
{
	void eventCameraLookAtFinished(class USeqAct_CameraLookAt* Action);
};

// @baa 0x008a50c0
/* PlayerController.CameraLookAtFinished script event: the generated glue, out of line here. */
void APlayerController__008a50c0::eventCameraLookAtFinished(class USeqAct_CameraLookAt* Action)
{
	struct PlayerController_eventCameraLookAtFinished_Parms
	{
		class USeqAct_CameraLookAt* Action;
	} Parms;
	Parms.Action = Action;
	ProcessEvent(FindFunctionChecked(g_026c52f0), &Parms);
}

extern FName g_026c4cb0;
	/* ClientSetCameraFade */
struct APlayerController__008a5100 : public APlayerController
{
	void eventClientSetCameraFade(UBOOL bEnableFading, FColor FadeColor, FVector2D FadeAlpha, FLOAT FadeTime);
};

// @baa 0x008a5100
/* PlayerController.ClientSetCameraFade script event: the generated glue, out of line here. */
void APlayerController__008a5100::eventClientSetCameraFade(UBOOL bEnableFading, FColor FadeColor, FVector2D FadeAlpha, FLOAT FadeTime)
{
	struct PlayerController_eventClientSetCameraFade_Parms
	{
		UBOOL bEnableFading;
		FColor FadeColor;
		FVector2D FadeAlpha;
		FLOAT FadeTime;
	} Parms;
	Parms.bEnableFading = bEnableFading ? TRUE : FALSE;
	Parms.FadeColor = FadeColor;
	Parms.FadeAlpha = FadeAlpha;
	Parms.FadeTime = FadeTime;
	ProcessEvent(FindFunctionChecked(g_026c4cb0), &Parms);
}

extern FName g_026c5170;
	/* Kismet_ClientStopSound */
struct APlayerController__008a5170 : public APlayerController
{
	void eventKismet_ClientStopSound(class USoundCue* ASound, class AActor* SourceActor, FLOAT FadeOutTime);
};

// @baa 0x008a5170
/* PlayerController.Kismet_ClientStopSound script event: the generated glue, out of line here. */
void APlayerController__008a5170::eventKismet_ClientStopSound(class USoundCue* ASound, class AActor* SourceActor, FLOAT FadeOutTime)
{
	struct PlayerController_eventKismet_ClientStopSound_Parms
	{
		class USoundCue* ASound;
		class AActor* SourceActor;
		FLOAT FadeOutTime;
	} Parms;
	Parms.ASound = ASound;
	Parms.SourceActor = SourceActor;
	Parms.FadeOutTime = FadeOutTime;
	ProcessEvent(FindFunctionChecked(g_026c5170), &Parms);
}

extern FName g_026c5278;
	/* Kismet_ClientSetParameterSound */
struct APlayerController__008a51d0 : public APlayerController
{
	void eventKismet_ClientSetParameterSound(class USoundCue* ASound, class AActor* SourceActor, FName nameToSet, FLOAT valueToSet);
};

// @baa 0x008a51d0
/* PlayerController.Kismet_ClientSetParameterSound script event: the generated glue, out of line here. */
void APlayerController__008a51d0::eventKismet_ClientSetParameterSound(class USoundCue* ASound, class AActor* SourceActor, FName nameToSet, FLOAT valueToSet)
{
	struct PlayerController_eventKismet_ClientSetParameterSound_Parms
	{
		class USoundCue* ASound;
		class AActor* SourceActor;
		FName nameToSet;
		FLOAT valueToSet;
	} Parms;
	Parms.ASound = ASound;
	Parms.SourceActor = SourceActor;
	Parms.nameToSet = nameToSet;
	Parms.valueToSet = valueToSet;
	ProcessEvent(FindFunctionChecked(g_026c5278), &Parms);
}

extern FName g_026c5070;
	/* Kismet_ClientKeyOffSound */
struct APlayerController__008a5240 : public APlayerController
{
	void eventKismet_ClientKeyOffSound(class USoundCue* ASound, class AActor* SourceActor);
};

// @baa 0x008a5240
/* PlayerController.Kismet_ClientKeyOffSound script event: the generated glue, out of line here. */
void APlayerController__008a5240::eventKismet_ClientKeyOffSound(class USoundCue* ASound, class AActor* SourceActor)
{
	struct PlayerController_eventKismet_ClientKeyOffSound_Parms
	{
		class USoundCue* ASound;
		class AActor* SourceActor;
	} Parms;
	Parms.ASound = ASound;
	Parms.SourceActor = SourceActor;
	ProcessEvent(FindFunctionChecked(g_026c5070), &Parms);
}

extern FName g_026c4c50;
	/* Kismet_ClientPlaySound */
struct APlayerController__008a5290 : public APlayerController
{
	void eventKismet_ClientPlaySound(class USoundCue* ASound, class AActor* SourceActor, FLOAT VolumeMultiplier, FLOAT PitchMultiplier, FLOAT FadeInTime, UBOOL bSuppressSubtitles, UBOOL bSuppressSpatialization);
};

// @baa 0x008a5290
/* PlayerController.Kismet_ClientPlaySound script event: the generated glue, out of line here. */
void APlayerController__008a5290::eventKismet_ClientPlaySound(class USoundCue* ASound, class AActor* SourceActor, FLOAT VolumeMultiplier, FLOAT PitchMultiplier, FLOAT FadeInTime, UBOOL bSuppressSubtitles, UBOOL bSuppressSpatialization)
{
	struct PlayerController_eventKismet_ClientPlaySound_Parms
	{
		class USoundCue* ASound;
		class AActor* SourceActor;
		FLOAT VolumeMultiplier;
		FLOAT PitchMultiplier;
		FLOAT FadeInTime;
		UBOOL bSuppressSubtitles;
		UBOOL bSuppressSpatialization;
	} Parms;
	Parms.ASound = ASound;
	Parms.SourceActor = SourceActor;
	Parms.VolumeMultiplier = VolumeMultiplier;
	Parms.PitchMultiplier = PitchMultiplier;
	Parms.FadeInTime = FadeInTime;
	Parms.bSuppressSubtitles = bSuppressSubtitles ? TRUE : FALSE;
	Parms.bSuppressSpatialization = bSuppressSpatialization ? TRUE : FALSE;
	ProcessEvent(FindFunctionChecked(g_026c4c50), &Parms);
}

extern FName g_026c4b30;
	/* ClientHearSound */
struct APlayerController__008a5320 : public APlayerController
{
	void eventClientHearSound(class USoundCue* ASound, class AActor* SourceActor, FVector SourceLocation, UBOOL bStopWhenOwnerDestroyed, UBOOL bIsOccluded);
};

// @baa 0x008a5320
/* PlayerController.ClientHearSound script event: the generated glue, out of line here. */
void APlayerController__008a5320::eventClientHearSound(class USoundCue* ASound, class AActor* SourceActor, FVector SourceLocation, UBOOL bStopWhenOwnerDestroyed, UBOOL bIsOccluded)
{
	struct PlayerController_eventClientHearSound_Parms
	{
		class USoundCue* ASound;
		class AActor* SourceActor;
		FVector SourceLocation;
		UBOOL bStopWhenOwnerDestroyed;
		UBOOL bIsOccluded;
	} Parms;
	Parms.ASound = ASound;
	Parms.SourceActor = SourceActor;
	Parms.SourceLocation = SourceLocation;
	Parms.bStopWhenOwnerDestroyed = bStopWhenOwnerDestroyed ? TRUE : FALSE;
	Parms.bIsOccluded = bIsOccluded ? TRUE : FALSE;
	ProcessEvent(FindFunctionChecked(g_026c4b30), &Parms);
}

// @baa 0x008aa180
void AActor::execSetHardAttach(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL_OPTX(bNewHardAttach, bHardAttach);
	P_FINISH;
	vf_19c(bNewHardAttach);
}

/* Kit gap: FStateFrame stops at ProbeMask; UE3's next member is the latent action (WORD LatentAction at 0x34). */
#pragma pack(push, 4)
#pragma pack(pop)
enum { EPOLL_Sleep = 384 };
// @baa 0x008a7810
/* The native half of latent Sleep(Seconds): poll EPOLL_Sleep until LatentFloat runs out. */
void AActor::sub_008a7810(FLOAT Seconds)
{
    StateFrame->LatentAction = EPOLL_Sleep;
    LatentFloat = Seconds;
}

extern FName g_026c490c;
	/* ENGINE_IsInCombat */
struct AController__008a4de0 : public AController
{
	UBOOL eventIsInCombat();
};

// @baa 0x008a4de0
/* The script event's generated glue (EngineClasses.h), out of line here. */
UBOOL AController__008a4de0::eventIsInCombat()
{
	struct Controller_eventIsInCombat_Parms
	{
		UBOOL ReturnValue;
	} Parms;
	Parms.ReturnValue = FALSE;
	ProcessEvent(FindFunctionChecked(g_026c490c), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026c406c;
	/* ENGINE_DetourWeight */
struct ANavigationPoint_ : public ANavigationPoint
{
	FLOAT eventDetourWeight(class APawn* Other, FLOAT PathWeight);
};

// @baa 0x008a53e0
/* The script event's generated glue (EngineClasses.h), out of line here. */
FLOAT ANavigationPoint_::eventDetourWeight(class APawn* Other, FLOAT PathWeight)
{
	struct NavigationPoint_eventDetourWeight_Parms
	{
		class APawn* Other;
		FLOAT PathWeight;
		FLOAT ReturnValue;
	} Parms;
	Parms.Other = Other;
	Parms.PathWeight = PathWeight;
	Parms.ReturnValue = 0;
	ProcessEvent(FindFunctionChecked(g_026c406c), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026c4fcc;
	/* ENGINE_GetObjClassVersion */
struct USequenceObject_ : public USequenceObject
{
	INT eventGetObjClassVersion();
};

// @baa 0x008aa210
/* The script event's generated glue (EngineClasses.h), out of line here. */
INT USequenceObject_::eventGetObjClassVersion()
{
	struct SequenceObject_eventGetObjClassVersion_Parms
	{
		INT ReturnValue;
	} Parms;
	Parms.ReturnValue = 0;
	ProcessEvent(FindFunctionChecked(g_026c4fcc), &Parms);
	return Parms.ReturnValue;
}

/* Kit gap: AActor::IsBasedOn (UnActor.h, inline) isn't declared. */
struct AActor__008aa060 : public AActor
{
    FORCEINLINE UBOOL IsBasedOn(const AActor* Other) const
    {
        for (const AActor* Test = this; Test != NULL; Test = Test->Base)
        {
            if (Test == Other)
            {
                return TRUE;
            }
        }
        return FALSE;
    }
};

// @baa 0x008aa060
void AActor::execIsBasedOn(FFrame& Stack, RESULT_DECL)
{
    P_GET_OBJECT(AActor, Other);
    P_FINISH;
    *(UBOOL*)Result = ((AActor__008aa060*)this)->IsBasedOn(Other);
}

/* Kit gap: AActor::IsOwnedBy (UnActor.h, inline) isn't declared. */
struct AActor__008aa0f0 : public AActor
{
    FORCEINLINE UBOOL IsOwnedBy(const AActor* Other) const
    {
        for (const AActor* Test = this; Test != NULL; Test = Test->Owner)
        {
            if (Test == Other)
            {
                return TRUE;
            }
        }
        return FALSE;
    }
};

// @baa 0x008aa0f0
void AActor::execIsOwnedBy(FFrame& Stack, RESULT_DECL)
{
    P_GET_OBJECT(AActor, Other);
    P_FINISH;
    *(UBOOL*)Result = ((AActor__008aa0f0*)this)->IsOwnedBy(Other);
}

/* Kit gap: Script.h lacks UE3's P_GET_STRUCT_OPTX (UnScript.h); the struct constructors (UnMath.h) build the defaults. */
#define P_GET_STRUCT_OPTX(t, v, d) t v; GRuntimeUCFlags &= ~RUC_SkippedOptionalParm; Stack.Step(Stack.Object, &v); if (GRuntimeUCFlags & RUC_SkippedOptionalParm) v = d;
struct FVector_ : public FVector
{
	FVector_(FLOAT InX, FLOAT InY, FLOAT InZ) { X = InX; Y = InY; Z = InZ; }
};

// @baa 0x008a7980
void AActor::execSetBase(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(AActor, NewBase);
	P_GET_STRUCT_OPTX(FVector, NewFloor, FVector_(0.f, 0.f, 1.f));
	P_GET_OBJECT_OPTX(USkeletalMeshComponent, SkelComp, NULL);
	P_GET_NAME_OPTX(AttachName, NAME_None);
	P_FINISH;
	SetBase(NewBase, NewFloor, 1, SkelComp, AttachName);
}

// @baa 0x008a7870
void AActor::execSetCollision(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL_OPTX(bNewCollideActors, bCollideActors);
	P_GET_UBOOL_OPTX(bNewBlockActors, bBlockActors);
	P_GET_UBOOL_OPTX(bNewIgnoreEncroachers, bIgnoreEncroachers);
	P_FINISH;

	SetCollision(bNewCollideActors, bNewBlockActors, bNewIgnoreEncroachers);
}
