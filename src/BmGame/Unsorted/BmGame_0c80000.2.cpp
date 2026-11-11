// BmGame_0c80000.cpp: 25 functions
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
	*(FLOAT*)Result = vf_138();
}

// @baa 0x00c83120
void ATeamInfo::execGetTeamNum(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(BYTE*)Result = vf_144();
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
	vf_364((INT)Nav);
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
