// BmGame_0c80000.cpp: 48 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

struct AActor_ : public AActor
{
	UBOOL PlayerCanSeeMe();
	void execPlayerCanSeeMe(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c82ec0
void AActor_::execPlayerCanSeeMe( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(UBOOL*)Result = PlayerCanSeeMe();
}

struct AActor__00c834a0 : public AActor
{
	UBOOL IsInPersistentLevel();
	void execIsInPersistentLevel(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c834a0
void AActor__00c834a0::execIsInPersistentLevel( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(UBOOL*)Result = IsInPersistentLevel();
}

// @baa 0x00c83fe0
void AController::execRouteCache_Empty( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_358();
}

struct APlayerController_ : public APlayerController
{
	UBOOL AllowConsole();
	void execAllowConsole(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c86c00
void APlayerController_::execAllowConsole( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(UBOOL*)Result = AllowConsole();
}

// @baa 0x00c86e00
void APlayerController::execCleanUpAudioComponents( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_418();
}

struct APlayerController__00c872f0 : public APlayerController
{
	UBOOL HasClientLoadedCurrentWorld();
	void execHasClientLoadedCurrentWorld(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c872f0
void APlayerController__00c872f0::execHasClientLoadedCurrentWorld( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(UBOOL*)Result = HasClientLoadedCurrentWorld();
}

struct APlayerController__00c87630 : public APlayerController
{
	void ClientFlushLevelStreaming();
	void execClientFlushLevelStreaming(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c87630
void APlayerController__00c87630::execClientFlushLevelStreaming( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	ClientFlushLevelStreaming();
}

// @baa 0x00c830e0
void AActor::execIsPlayerOwned(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_140();
}

// @baa 0x00c83fa0
void APlayerController::execIsLocalPlayerController(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_354();
}

// @baa 0x00c87080
void APlayerController::execIsKeyboardAvailable(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_430();
}

// @baa 0x00c82f90
void AWorldInfo::execGetGravityZ(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(FLOAT*)Result = GetGravityZ();
}

// @baa 0x00c83120
void ATeamInfo::execGetTeamNum(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(BYTE*)Result = GetTeamNum();
}

// @baa 0x00c870c0
void APlayerController::execIsMouseAvailable(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_434();
}

// @baa 0x00c87430
void APlayerController::execGetViewTarget(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(AActor**)Result = (AActor*)vf_3b8();
}

// @baa 0x00c877d0
void APlayerController::execIsShowingSubtitles(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_448();
}

struct APlayerController__00c86c40 : public APlayerController
{
	void sub_007ac560(INT);
};

// @baa 0x00c86c40
void APlayerController::execSetNetSpeed(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(NewSpeed);
	P_FINISH;
	((APlayerController__00c86c40*)this)->sub_007ac560(NewSpeed);
}

struct AActor__00c82fd0 : public AActor
{
	void sub_00758b70(FLOAT);
};

// @baa 0x00c82fd0
void AActor::execSetNetUpdateTime(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(NewUpdateTime);
	P_FINISH;
	((AActor__00c82fd0*)this)->sub_00758b70(NewUpdateTime);
}

// @baa 0x00c84130
void AController::execRouteCache_RemoveItem(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(ANavigationPoint, Nav);
	P_FINISH;
	RouteCache_RemoveItem(Nav);
}

// @baa 0x00c84020
void AController::execRouteCache_AddItem(FFrame& Stack, RESULT_DECL)
{
    P_GET_OBJECT(ANavigationPoint, Nav);
    P_FINISH;
    vf_35c(Nav);
}

struct APlayerController__00c86d20 : public APlayerController
{
	UBOOL sub_007a0040(FLOAT);
};

// @baa 0x00c86d20
void APlayerController::execCheckSpeedHack(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(DeltaTime);
	P_FINISH;
	*(UBOOL*)Result = ((APlayerController__00c86d20*)this)->sub_007a0040(DeltaTime);
}

struct APlayerController__00c86d90 : public APlayerController
{
	INT sub_007acd30(FLOAT);
};

// @baa 0x00c86d90
void APlayerController::execFindStairRotation(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(DeltaTime);
	P_FINISH;
	*(INT*)Result = ((APlayerController__00c86d90*)this)->sub_007acd30(DeltaTime);
}

struct APlayerController__00c87280 : public APlayerController
{
	void sub_007afac0(FName);
};

// @baa 0x00c87280
void APlayerController::execServerNotifyLoadedWorld(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(WorldPackageName);
	P_FINISH;
	((APlayerController__00c87280*)this)->sub_007afac0(WorldPackageName);
}

// @baa 0x00c83d90
void AAnimatedCamera::execStopAllCameraAnims(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL_OPTX(bImmediate, 0);
	P_FINISH;
	vf_36c(bImmediate);
}

struct APlayerController__00c87660 : public APlayerController
{
	UBOOL sub_007b5600(FUniqueNetId&);
};

// @baa 0x00c87660
void APlayerController::execIsPlayerMuted(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT_REF(FUniqueNetId, Sender);
	P_FINISH;
	*(UBOOL*)Result = ((APlayerController__00c87660*)this)->sub_007b5600(Sender);
}

// @baa 0x00c83290
// @baa 0x00c83290
void AActor::execSetHUDLocation(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FVector, NewHUDLocation);
    P_FINISH;
    SetHUDLocation(NewHUDLocation);
}

// @baa 0x00c86ca0
void APlayerController::execSetAllowMatureLanguage(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bAllowMatureLanguge);
	P_FINISH;
	vf_414(bAllowMatureLanguge);
}

// @baa 0x00c86f80
void APlayerController::execSetOnlyUseControllerTiltInput(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bActive);
	P_FINISH;
	vf_428(bActive);
}

// @baa 0x00c87000
void APlayerController::execSetUseTiltForwardAndBack(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bActive);
	P_FINISH;
	vf_42c(bActive);
}

// @baa 0x00c87750
void APlayerController::execSetShowSubtitles(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bValue);
	P_FINISH;
	vf_444(bValue);
}

// vf_134 (vtable slot 0x134) is AActor::GetDestination. The header declares it
// "virtual INT GetDestination(INT, INT)"; the code shows the real shape: it fills a
// caller-supplied buffer with an FVector (the first argument is the buffer's
// address, the second the controller we are getting the destination of) and
// returns that buffer's pointer.
struct AActor__00c82f00 : public AActor {
    void execGetDestination(FFrame& Stack, RESULT_DECL)
    {
        P_GET_OBJECT(AController, C);
        P_FINISH;
        *(FVector*)Result = GetDestination(C);
    }
};

// @baa 0x00c82f00
void g_caller()
{
    AActor__00c82f00 Actor;
    Actor.execGetDestination(*(FFrame*)0, 0);
}

/* AController::GetFocalPoint (007ad7e0) isn't declared in the kit. */
struct AController_ : public AController
{
    FVector GetFocalPoint();
};

// @baa 0x00c844c0
void AController::execGetFocalPoint(FFrame& Stack, RESULT_DECL)
{
    P_FINISH;
    *(FVector*)Result = ((AController_*)this)->GetFocalPoint();
}

/* AController::GetDestinationPosition (007ada10) isn't declared in the kit. */
struct AController__00c845c0 : public AController
{
    FVector GetDestinationPosition();
};

// @baa 0x00c845c0
void AController::execGetDestinationPosition(FFrame& Stack, RESULT_DECL)
{
    P_FINISH;
    *(FVector*)Result = ((AController__00c845c0*)this)->GetDestinationPosition();
}

/* AActor::GetPackageGuid (0x8ef1d0) isn't declared in the kit. */
struct AActor__00c83420 : public AActor
{
    FGuid GetPackageGuid(FName PackageName);
};

// @baa 0x00c83420
void AActor::execGetPackageGuid(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(PackageName);
    P_FINISH;
    *(FGuid*)Result = ((AActor__00c83420*)this)->GetPackageGuid(PackageName);
}

/* AController::GetBasedPosition (0x7ad610) isn't declared in the kit. */
struct AController__00c84350 : public AController
{
    FVector GetBasedPosition(FBasedPosition BP);
};

// @baa 0x00c84350
void AController::execGetBasedPosition(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FBasedPosition, BP);
    P_FINISH;
    *(FVector*)Result = ((AController__00c84350*)this)->GetBasedPosition(BP);
}

/* APlayerController::ClientUpdateLevelStreamingStatus (0x7b4f70) isn't declared in the kit. */
struct APlayerController__00c87470 : public APlayerController
{
    void ClientUpdateLevelStreamingStatus(FName PackageName, UBOOL bNewShouldBeLoaded, UBOOL bNewShouldBeVisible, UBOOL bNewShouldBlockOnLoad);
};

// @baa 0x00c87470
void APlayerController::execClientUpdateLevelStreamingStatus(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(PackageName);
    P_GET_UBOOL(bNewShouldBeLoaded);
    P_GET_UBOOL(bNewShouldBeVisible);
    P_GET_UBOOL(bNewShouldBlockOnLoad);
    P_FINISH;
    ((APlayerController__00c87470*)this)->ClientUpdateLevelStreamingStatus(PackageName, bNewShouldBeLoaded, bNewShouldBeVisible, bNewShouldBlockOnLoad);
}

/* APlayerController::ServerUpdateLevelVisibility (0x7bf380) isn't declared in the kit. */
struct APlayerController__00c87580 : public APlayerController
{
    void ServerUpdateLevelVisibility(FName PackageName, UBOOL bIsVisible);
};

// @baa 0x00c87580
void APlayerController::execServerUpdateLevelVisibility(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(PackageName);
    P_GET_UBOOL(bIsVisible);
    P_FINISH;
    ((APlayerController__00c87580*)this)->ServerUpdateLevelVisibility(PackageName, bIsVisible);
}

/* AController::SetBasedPosition (0x7ad5d0) isn't declared in the kit. */
struct AController__00c84240 : public AController
{
    void SetBasedPosition(FBasedPosition& BP, FVector pos, class AActor* ForcedBase);
};

// @baa 0x00c84240
void AController::execSetBasedPosition(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT_REF(FBasedPosition, BP);
    P_GET_STRUCT(FVector, pos);
    P_GET_OBJECT_OPTX(AActor, ForcedBase, NULL);
    P_FINISH;
    ((AController__00c84240*)this)->SetBasedPosition(BP, pos, ForcedBase);
}

/* AController::SetFocalPoint (0x7ad790) isn't declared in the kit. */
struct AController__00c84410 : public AController
{
    void SetFocalPoint(FVector FP, UBOOL bOffsetFromBase);
};

// @baa 0x00c84410
void AController::execSetFocalPoint(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FVector, FP);
    P_GET_UBOOL_OPTX(bOffsetFromBase, FALSE);
    P_FINISH;
    ((AController__00c84410*)this)->SetFocalPoint(FP, bOffsetFromBase);
}

/* AController::SetDestinationPosition (0x7ad9c0) isn't declared in the kit. */
struct AController__00c84510 : public AController
{
    void SetDestinationPosition(FVector Dest, UBOOL bOffsetFromBase);
};

// @baa 0x00c84510
void AController::execSetDestinationPosition(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FVector, Dest);
    P_GET_UBOOL_OPTX(bOffsetFromBase, FALSE);
    P_FINISH;
    ((AController__00c84510*)this)->SetDestinationPosition(Dest, bOffsetFromBase);
}

/* AActor::MakeNoise (0x8652a0) isn't declared in the kit. */
struct AActor__00c82e10 : public AActor
{
    void MakeNoise(FLOAT Loudness, FName NoiseType);
};

// @baa 0x00c82e10
void AActor::execMakeNoise(FFrame& Stack, RESULT_DECL)
{
    P_GET_FLOAT(Loudness);
    P_GET_NAME_OPTX(NoiseType, NAME_None);
    P_FINISH;
    ((AActor__00c82e10*)this)->MakeNoise(Loudness, NoiseType);
}

// @baa 0x00c83040
void AActor::execPrestreamTextures(FFrame& Stack, RESULT_DECL)
{
    P_GET_FLOAT(Seconds);
    P_GET_UBOOL(bEnableStreaming);
    P_FINISH;
    PrestreamTextures(Seconds, bEnableStreaming);
}

// @baa 0x00c84090
void AController::execRouteCache_InsertItem(FFrame& Stack, RESULT_DECL)
{
    P_GET_OBJECT(ANavigationPoint, Nav);
    P_GET_INT_OPTX(Idx, 0);
    P_FINISH;
    RouteCache_InsertItem(Nav, Idx);
}

// @baa 0x00c83aa0
void AAnimatedCamera::execApplyCameraModifiersNative(FFrame& Stack, RESULT_DECL)
{
    P_GET_FLOAT(DeltaTime);
    P_GET_STRUCT_REF(FTPOV, OutPOV);
    P_FINISH;
    ApplyCameraModifiersNative(DeltaTime, OutPOV);
}

// @baa 0x00c83e10
void AAnimatedCamera::execStopAllCameraAnimsByType(FFrame& Stack, RESULT_DECL)
{
    P_GET_OBJECT(UCameraAnim, Anim);
    P_GET_UBOOL_OPTX(bImmediate, FALSE);
    P_FINISH;
    StopAllCameraAnimsByType(Anim, bImmediate);
}

// @baa 0x00c83ec0
void AAnimatedCamera::execStopCameraAnim(FFrame& Stack, RESULT_DECL)
{
    P_GET_OBJECT(UCameraAnimInst, AnimInst);
    P_GET_UBOOL_OPTX(bImmediate, FALSE);
    P_FINISH;
    StopCameraAnim(AnimInst, bImmediate);
}

// @baa 0x00c83600
void APhysicsVolume::execGetZoneVelocityForActor(FFrame& Stack, RESULT_DECL)
{
    P_GET_OBJECT(AActor, TheActor);
    P_FINISH;
    *(FVector*)Result = GetZoneVelocityForActor(TheActor);
}

// @baa 0x00c841a0
void AController::execRouteCache_RemoveIndex(FFrame& Stack, RESULT_DECL)
{
    P_GET_INT(InIndex);
    P_GET_INT_OPTX(Count, 1);
    P_FINISH;
    RouteCache_RemoveIndex(InIndex, Count);
}

/* Kit gaps: GetPlayerControllerFromNetId (007a1eb0) isn't declared (names from the exe's native table). */
/* FUniqueNetId's copy constructor (UnrealScript struct cpptext), which the kit's plain struct lacks. */
struct FUniqueNetId_ : public FUniqueNetId
{
	FORCEINLINE FUniqueNetId_(const FUniqueNetId& Other) { Uid = Other.Uid; }
};

struct APlayerController__00c876e0 : public APlayerController
{
	class APlayerController* GetPlayerControllerFromNetId(FUniqueNetId_ PlayerNetId);	/* 0x007a1eb0 */
};

// @baa 0x00c876e0
void APlayerController::execGetPlayerControllerFromNetId(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT(FUniqueNetId, PlayerNetId);
	P_FINISH;
	*(class APlayerController**)Result = ((APlayerController__00c876e0*)this)->GetPlayerControllerFromNetId(PlayerNetId);
}
