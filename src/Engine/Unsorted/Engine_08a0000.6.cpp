// Engine_08a0000.cpp: 17 functions
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
