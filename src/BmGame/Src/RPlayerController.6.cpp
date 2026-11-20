// RPlayerController.cpp (part 6 of 6): 182 functions
// Placed here by: class 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x016fa140
void ARPlayerController::execLive_SetActiveSave(FFrame& Stack, RESULT_DECL)
{
    P_GET_INT(SaveId);
    P_FINISH;
    Live_SetActiveSave(SaveId);
}

// @baa 0x016fa710
void ARPlayerController::execFE_UnblockInitialNotifies(FFrame& Stack, RESULT_DECL)
{
    P_FINISH;
    FE_UnblockInitialNotifies();
}

// @baa 0x016f7fd0
void ARPlayerController::execDebugUpdateAmbientTree( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	DebugUpdateAmbientTree();
}

// @baa 0x016f8050
void ARPlayerController::execToggleMovieRecord( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	ToggleMovieRecord();
}

// @baa 0x016f80d0
void ARPlayerController::execPlayRiddlerCaptureMovie( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	PlayRiddlerCaptureMovie();
}

// @baa 0x016f8110
void ARPlayerController::execUpdateDownloadableContent( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	UpdateDownloadableContent();
}

// @baa 0x016f8150
void ARPlayerController::execUpdateDownloadableCharacters( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	UpdateDownloadableCharacters();
}

// @baa 0x016f8210
void ARPlayerController::execNativeBreakPoint( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	NativeBreakPoint();
}

// @baa 0x016f8300
void ARPlayerController::execAmbientSoundControl( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	AmbientSoundControl();
}

// @baa 0x016f8340
void ARPlayerController::execStartSavedAmbientSound( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	StartSavedAmbientSound();
}

// @baa 0x016f8380
void ARPlayerController::execStartSavedMixBin( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	StartSavedMixBin();
}

// @baa 0x016f8440
void ARPlayerController::execReloadGame( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	ReloadGame();
}

// @baa 0x016f8e40
void ARPlayerController::execIsInExternalCamera( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(UBOOL*)Result = IsInExternalCamera();
}

// @baa 0x016f8ff0
void ARPlayerController::execTurnOnObstructionDebugging( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	TurnOnObstructionDebugging();
}

// @baa 0x016f9020
void ARPlayerController::execTurnOnInteractDebugging( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	TurnOnInteractDebugging();
}

// @baa 0x016f9110
void ARPlayerController::execPlayerWtfNative( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	PlayerWtfNative();
}

// @baa 0x016f9290
void ARPlayerController::execCheckForGlassAttackTarget( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	CheckForGlassAttackTarget();
}

// @baa 0x016f94f0
void ARPlayerController::execWillIHitCapeGlideTarget( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(UBOOL*)Result = WillIHitCapeGlideTarget();
}

// @baa 0x016f9530
void ARPlayerController::execCalculateCapeGlideAltitude( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(FLOAT*)Result = CalculateCapeGlideAltitude();
}

// @baa 0x016f95b0
void ARPlayerController::execHaveRoomToCapeGlide( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(UBOOL*)Result = HaveRoomToCapeGlide();
}

// @baa 0x016f9700
void ARPlayerController::execNativeStartGrappleMovement( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	NativeStartGrappleMovement();
}

// @baa 0x016f9730
void ARPlayerController::execCheckSpaceToJump( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(UBOOL*)Result = CheckSpaceToJump();
}

// @baa 0x016f8480
void ARPlayerController::execInitGamePadSettings(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;

	InitGamePadSettings();
}

// @baa 0x016f8830
void ARPlayerController::execResetAmbientSound(FFrame& Stack, RESULT_DECL)
{
    P_GET_OBJECT(USoundCue, Cue);
    P_FINISH;
    ResetAmbientSound(Cue);
}

// @baa 0x016f9e40
void ARPlayerController::execLive_IsNewGame(FFrame& Stack, RESULT_DECL)
{
    P_GET_INT_REF(Difficulty);
    P_FINISH;
    *(UBOOL*)Result = Live_IsNewGame(Difficulty);
}

// @baa 0x0171d050
void ARPlayerController::execSetInfocastMsg(FFrame& Stack, RESULT_DECL)
{
    P_GET_STR(msg);
    P_FINISH;
    SetInfocastMsg(msg);
}

// @baa 0x0171cea0
void ARPlayerController::execAutoJezLevelShouldBeLoaded(FFrame& Stack, RESULT_DECL)
{
    P_GET_STR(LevelName);
    P_FINISH;
    *(UBOOL*)Result = AutoJezLevelShouldBeLoaded(LevelName);
}

// @baa 0x016f8ec0
void ARPlayerController::execPreProcessInput(FFrame& Stack, RESULT_DECL)
{
    P_GET_FLOAT(DeltaTime);
    P_FINISH;
    PreProcessInput(DeltaTime);
}

// @baa 0x016f9bf0
void ARPlayerController::execLive_SetLoginStatusError(FFrame& Stack, RESULT_DECL)
{
    P_GET_BYTE(State);
    P_FINISH;
    Live_SetLoginStatusError(State);
}

// @baa 0x016f9330
void ARPlayerController::execGetAerialKickTarget(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(AActor**)Result = this->GetAerialKickTarget();
}

// @baa 0x016f9570
void ARPlayerController::execGetFallingAttackTarget(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(ARPawnVillain**)Result = this->GetFallingAttackTarget();
}

// @baa 0x00c86e40
void ARPlayerController::execIsControllerTiltActive(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = IsControllerTiltActive();
}

struct RPlayerControllerNative : ARPlayerController
{
    UBOOL sub_01618460(FEnvironmentSpecialMoveTypesContainer FeatureType, FLOAT Distance, FVector* FeatureNormal);
};

// @baa 0x016f9180
void ARPlayerController::execAmIStandingNextToFeature(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FEnvironmentSpecialMoveTypesContainer, FeatureType);
    P_GET_FLOAT(Distance);
    P_GET_STRUCT_OPTX_REF_DEF(FVector, FeatureNormal, FVector(0.0f, 0.0f, 0.0f));
    P_FINISH;
    *(UBOOL*)Result = static_cast<RPlayerControllerNative*>(this)->sub_01618460(FeatureType, Distance, pFeatureNormal ? &FeatureNormal : NULL);
}

struct RPlayerControllerNative_016f8c60 : ARPlayerController
{
    ARPawnVillain* sub_0161ecb0(FVector& AttackSearchPos, FLOAT AttackSearchRadius, FVector& AttackCheckPos, UBOOL NeedsReachCheck, UBOOL bAllowedToAttackFlooredEnemies);
};

// @baa 0x016f8c60
void ARPlayerController::execFindStealthAttackTargetNative(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT_REF(FVector, AttackSearchPos);
    P_GET_FLOAT(AttackSearchRadius);
    P_GET_STRUCT_REF(FVector, AttackCheckPos);
    P_GET_UBOOL(NeedsReachCheck);
    P_GET_UBOOL(bAllowedToAttackFlooredEnemies);
    P_FINISH;
    *(ARPawnVillain**)Result = static_cast<RPlayerControllerNative_016f8c60*>(this)->sub_0161ecb0(AttackSearchPos, AttackSearchRadius, AttackCheckPos, NeedsReachCheck, bAllowedToAttackFlooredEnemies);
}

// @baa 0x016f7f50
void ARPlayerController::execOwnerIsInEndStateCall(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = OwnerIsInEndStateCall();
}

// @baa 0x016f7f90
void ARPlayerController::execIsAutoJezActive(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = IsAutoJezActive();
}

// @baa 0x016f8010
void ARPlayerController::execLoadDebugSphere(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UStaticMesh**)Result = (UStaticMesh*)LoadDebugSphere();
}

// @baa 0x016f8090
void ARPlayerController::execIsMovieCapturingInput(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = IsMovieCapturingInput();
}

// @baa 0x016f8190
void ARPlayerController::execIsJokerDLCPresent(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = IsJokerDLCPresent();
}

// @baa 0x016f81d0
void ARPlayerController::execIsArmouredBatmanDLCPresent(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = IsArmouredBatmanDLCPresent();
}

// @baa 0x016f8240
void ARPlayerController::execGetSelectedMovementState(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(BYTE*)Result = GetSelectedMovementState();
}

// @baa 0x016f83c0
void ARPlayerController::execGetSaveGameManager(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(URSaveGameManager**)Result = (URSaveGameManager*)GetSaveGameManager();
}

// @baa 0x016f8400
void ARPlayerController::execSaveGameOptionsToMemory(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = SaveGameOptionsToMemory();
}

// @baa 0x016f85b0
void ARPlayerController::execIsMetricsEnabled(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = IsMetricsEnabled();
}

// @baa 0x016f8670
void ARPlayerController::execIsMetricsPopupEnabled(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = IsMetricsPopupEnabled();
}

// @baa 0x016f8730
void ARPlayerController::execIsEidosMetricsEnabled(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = IsEidosMetricsEnabled();
}

// @baa 0x016f87b0
void ARPlayerController::execAmbientGetStartTime(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(FLOAT*)Result = AmbientGetStartTime();
}

// @baa 0x016f87f0
void ARPlayerController::execAmbientGetEndTime(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(FLOAT*)Result = AmbientGetEndTime();
}

typedef UBOOL (__thiscall* FSlot)(void*);

// @baa 0x016f99f0
void ARPlayerController::execAutoJezStartupCheck(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = ((FSlot)(*(void***)this)[0x544 / 4])(this);
}

// @baa 0x016f9ab0
void ARPlayerController::execAutoJezIsRoomLoaded(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = AutoJezIsRoomLoaded();
}

// @baa 0x016f9b30
void ARPlayerController::execLive_IsRequestOnline(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = Live_IsRequestOnline();
}

// @baa 0x016f9c60
void ARPlayerController::execLive_IsLoginStatusError(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(BYTE*)Result = Live_IsLoginStatusError();
}

// @baa 0x016f9d20
void ARPlayerController::execLive_IsStorageSelectPending(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = Live_IsStorageSelectPending();
}

// @baa 0x016f9fd0
void ARPlayerController::execLive_SlotWasSelected(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = ((FSlot)(*(void***)this)[0x598 / 4])(this);
}

// @baa 0x016fa010
void ARPlayerController::execLive_IsSavingEnabled(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = Live_IsSavingEnabled();
}

// @baa 0x016fa090
void ARPlayerController::execGetActiveSaveDevice(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(INT*)Result = GetActiveSaveDevice();
}

// @baa 0x016fa1b0
void ARPlayerController::execLive_GetActiveSaveID(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(INT*)Result = Live_GetActiveSaveID();
}

// @baa 0x016fa460
void ARPlayerController::execLive_IsPS3AndUsingFastLoad(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = Live_IsPS3AndUsingFastLoad();
}

// @baa 0x016fa610
void ARPlayerController::execFE_GetActiveDLCPack(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(INT*)Result = FE_GetActiveDLCPack();
}

// @baa 0x016fa6d0
void ARPlayerController::execFE_IsBufferDLCRemovalSet(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = FE_IsBufferDLCRemovalSet();
}

// @baa 0x016fa750
void ARPlayerController::execFE_AreNotifiesBlocked(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = FE_AreNotifiesBlocked();
}

// @baa 0x016fa810
void ARPlayerController::execFE_IsDLCScanningActive(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = FE_IsDLCScanningActive();
}

// @baa 0x016fa8d0
void ARPlayerController::execFE_IsDLCScanning(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = FE_IsDLCScanning();
}

// @baa 0x016fa990
void ARPlayerController::execFE_IsDLCRescanPending(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = FE_IsDLCRescanPending();
}

// @baa 0x016faa50
void ARPlayerController::execFE_IsFrontendSaveSet(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = FE_IsFrontendSaveSet();
}

// @baa 0x016faa90
void ARPlayerController::execIsXbox(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = IsXbox();
}

// @baa 0x016faad0
void ARPlayerController::execIsDebugFrontendAvailable(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = IsDebugFrontendAvailable();
}

// @baa 0x016fab10
void ARPlayerController::execIsPlayingFullScreenMovie(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = IsPlayingFullScreenMovie();
}

// @baa 0x016fab50
void ARPlayerController::execIsLevelLoadSpecified(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = IsLevelLoadSpecified();
}

// @baa 0x016fabd0
void ARPlayerController::execIsGamepadConnected(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = IsGamepadConnected();
}

// @baa 0x016facd0
void ARPlayerController::execIsCurrentlyLoadingLevels(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = IsCurrentlyLoadingLevels();
}

// @baa 0x016fad10
void ARPlayerController::execIsAmerican(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = IsAmerican();
}

// @baa 0x016fad90
void ARPlayerController::execIsWritingStats(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = ((FSlot)(*(void***)this)[0x688 / 4])(this);
}

// @baa 0x016fadd0
void ARPlayerController::execIsCircleToAccept(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = IsCircleToAccept();
}

// @baa 0x016fae10
void ARPlayerController::execIsPS3_4x3(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = IsPS3_4x3();
}

// @baa 0x016fae50
void ARPlayerController::execIsPS3_480i(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = IsPS3_480i();
}

// @baa 0x016fae90
void ARPlayerController::execGetSaveGameState(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(INT*)Result = GetSaveGameState();
}

// @baa 0x016faed0
void ARPlayerController::execFE_GetGamma(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(FLOAT*)Result = FE_GetGamma();
}

// @baa 0x016faf80
void ARPlayerController::execFE_GetRender3D(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(FLOAT*)Result = FE_GetRender3D();
}

// @baa 0x016fafc0
void ARPlayerController::execFE_GetRender3DFromEngine(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = FE_GetRender3DFromEngine();
}

// @baa 0x016fb070
void ARPlayerController::execFE_GetEngineGamma(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(FLOAT*)Result = FE_GetEngineGamma();
}

// @baa 0x016fb0b0
void ARPlayerController::execFE_GetVolumeSFX(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(FLOAT*)Result = FE_GetVolumeSFX();
}

// @baa 0x016fb160
void ARPlayerController::execFE_GetVolumeDialogue(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(FLOAT*)Result = FE_GetVolumeDialogue();
}

// @baa 0x016fb210
void ARPlayerController::execFE_GetVolumeMusic(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(FLOAT*)Result = FE_GetVolumeMusic();
}

// @baa 0x016fb380
void ARPlayerController::execFE_IsBenchmarking(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = FE_IsBenchmarking();
}

// @baa 0x016fb3c0
void ARPlayerController::execFE_GetBenchmarkMin(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(INT*)Result = FE_GetBenchmarkMin();
}

// @baa 0x016fb400
void ARPlayerController::execFE_GetBenchmarkMax(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(INT*)Result = FE_GetBenchmarkMax();
}

// @baa 0x016fb440
void ARPlayerController::execFE_GetBenchmarkAverage(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(INT*)Result = FE_GetBenchmarkAverage();
}

// @baa 0x016f8770
void ARPlayerController::execResetEidosMetricsAchievements(FFrame& Stack, RESULT_DECL)
{
    P_FINISH;
    ResetEidosMetricsAchievements();
}

// @baa 0x016f8e80
void ARPlayerController::execResetCapeGlideWeights(FFrame& Stack, RESULT_DECL)
{
    P_FINISH;
    ResetCapeGlideWeights();
}

// @baa 0x016f9140
void ARPlayerController::execUpdateGrateCollision(FFrame& Stack, RESULT_DECL)
{
    P_FINISH;
    UpdateGrateCollision();
}

struct RPlayerControllerNative_016f9370 : ARPlayerController
{
    FRotator sub_01614610();
};

// @baa 0x016f9370
void ARPlayerController::execFindCapeKickCameraRotation(FFrame& Stack, RESULT_DECL)
{
    P_FINISH;
    *(FRotator*)Result = static_cast<RPlayerControllerNative_016f9370*>(this)->sub_01614610();
}

// @baa 0x016f9970
void ARPlayerController::execAutoJezStop(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	AutoJezStop();
}

// @baa 0x016f99b0
void ARPlayerController::execAutoJezNextRoom(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	AutoJezNextRoom();
}

struct RPlayerControllerNative_016f9050 : ARPlayerController
{
    void sub_016153e0(ARSpecialMoveInstance* NewMove);
};

// @baa 0x016f9050
void ARPlayerController::execSetCurrentSpecialMove(FFrame& Stack, RESULT_DECL)
{
    P_GET_OBJECT(ARSpecialMoveInstance, NewMove);
    P_FINISH;
    static_cast<RPlayerControllerNative_016f9050*>(this)->sub_016153e0(NewMove);
}

struct RPlayerControllerNative_016f92c0 : ARPlayerController
{
    void sub_0161ef90(FLOAT DeltaTime);
};

// @baa 0x016f92c0
void ARPlayerController::execWalkingPlayerMovement(FFrame& Stack, RESULT_DECL)
{
    P_GET_FLOAT(DeltaTime);
    P_FINISH;
    static_cast<RPlayerControllerNative_016f92c0*>(this)->sub_0161ef90(DeltaTime);
}

// @baa 0x016f9a30
void ARPlayerController::execAutoJezBuildRoomList(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	AutoJezBuildRoomList();
}

// @baa 0x016f9a70
void ARPlayerController::execAutoJezBeginRoomLoad(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	AutoJezBeginRoomLoad();
}

// @baa 0x016f9af0
void ARPlayerController::execAutoJezLogic(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	AutoJezLogic();
}

// @baa 0x016f9ed0
void ARPlayerController::execLive_DisableSaving(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	Live_DisableSaving();
}

// @baa 0x016f9f10
void ARPlayerController::execLive_EnableSaving(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	Live_EnableSaving();
}

// @baa 0x016fa050
void ARPlayerController::execLive_InvalidateMemorySave(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	Live_InvalidateMemorySave();
}

struct RPlayerControllerNative_016f9770 : ARPlayerController
{
    void sub_01623570(AActor* MyTarget);
};

// @baa 0x016f9770
void ARPlayerController::execCheckForGlideAttackTarget(FFrame& Stack, RESULT_DECL)
{
    P_GET_OBJECT_OPTX(AActor, MyTarget, NULL);
    P_FINISH;
    static_cast<RPlayerControllerNative_016f9770*>(this)->sub_01623570(MyTarget);
}

struct RPlayerControllerNative_016f8280 : ARPlayerController
{
    AActor* sub_016201b0(FVector& IILocation);
};

// @baa 0x016f8280
void ARPlayerController::execFindInteractableItem(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT_REF(FVector, IILocation);
    P_FINISH;
    *(AActor**)Result = static_cast<RPlayerControllerNative_016f8280*>(this)->sub_016201b0(IILocation);
}

struct RPlayerControllerNative_016fb480 : ARPlayerController
{
    FVector sub_01614e10(FVector DesiredLocation);
};

// @baa 0x016fb480
void ARPlayerController::execGetDeathCameraLocation(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FVector, DesiredLocation);
    P_FINISH;
    *(FVector*)Result = static_cast<RPlayerControllerNative_016fb480*>(this)->sub_01614e10(DesiredLocation);
}

// @baa 0x016fa3b0
void ARPlayerController::execLive_DecompressToPersistentData(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	Live_DecompressToPersistentData();
}

// @baa 0x016fa4a0
void ARPlayerController::execLive_SetInitialAchievementsDisabled(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	Live_SetInitialAchievementsDisabled();
}

// @baa 0x016fa4e0
void ARPlayerController::execTestQueryAll(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	TestQueryAll();
}

// @baa 0x016fa520
void ARPlayerController::execPauseAllGameMovieTextures(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	PauseAllGameMovieTextures();
}

// @baa 0x016fa560
void ARPlayerController::execRestartAllGameMovieTextures(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	RestartAllGameMovieTextures();
}

// @baa 0x016fab90
void ARPlayerController::execGarbageCollect(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	GarbageCollect();
}

struct RPlayerControllerNative_016f8db0 : ARPlayerController
{
    void sub_016356a0(AActor* AttackTarget, FLOAT DeltaTime);
};

// @baa 0x016f8db0
void ARPlayerController::execCapeGlideMovement(FFrame& Stack, RESULT_DECL)
{
    P_GET_OBJECT(AActor, AttackTarget);
    P_GET_FLOAT(DeltaTime);
    P_FINISH;
    static_cast<RPlayerControllerNative_016f8db0*>(this)->sub_016356a0(AttackTarget, DeltaTime);
}

// @baa 0x016fac90
void ARPlayerController::execFE_ShowDLCError(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	FE_ShowDLCError();
}

// @baa 0x016fad50
void ARPlayerController::execResetWritingStatsCount(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	ResetWritingStatsCount();
}

// @baa 0x016fb2c0
void ARPlayerController::execFE_UpdateMouseLock(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	FE_UpdateMouseLock();
}

struct RPlayerControllerNative_016f95f0 : ARPlayerController
{
    void sub_01619120(FLOAT DeltaTime, FLOAT FallScale);
};

// @baa 0x016f95f0
void ARPlayerController::execUpdateFallAnim(FFrame& Stack, RESULT_DECL)
{
    P_GET_FLOAT(DeltaTime);
    P_GET_FLOAT_OPTX(FallScale, 1.0f);
    P_FINISH;
    static_cast<RPlayerControllerNative_016f95f0*>(this)->sub_01619120(DeltaTime, FallScale);
}

struct RPlayerControllerNative_016f8ad0 : ARPlayerController
{
    void sub_01619830(FLOAT DeltaTime, FVector& MoveDirection);
};

// @baa 0x016f8ad0
void ARPlayerController::execUpdateControllerRotationFast(FFrame& Stack, RESULT_DECL)
{
    P_GET_FLOAT(DeltaTime);
    P_GET_STRUCT_REF(FVector, MoveDirection);
    P_FINISH;
    static_cast<RPlayerControllerNative_016f8ad0*>(this)->sub_01619830(DeltaTime, MoveDirection);
}

struct RPlayerControllerNative_016f98c0 : ARPlayerController
{
    FLOAT sub_01618660(FVector& MoveDirection, FLOAT DeltaTime);
};

// @baa 0x016f98c0
void ARPlayerController::execStealthModeModifyPlayerMovement(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT_REF(FVector, MoveDirection);
    P_GET_FLOAT(DeltaTime);
    P_FINISH;
    *(FLOAT*)Result = static_cast<RPlayerControllerNative_016f98c0*>(this)->sub_01618660(MoveDirection, DeltaTime);
}

// @baa 0x016f90b0
void ARPlayerController::execSpecialMoveFinished(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(ARSpecialMoveInstance, FinishedMove);
	P_FINISH;
	((ARPlayerController*)this)->SpecialMoveFinished(FinishedMove);
}

// @baa 0x016f9690
void ARPlayerController::execDoGrappleMovement(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(DeltaTime);
	P_FINISH;
	this->DoGrappleMovement(DeltaTime);
}

// @baa 0x016f97e0
void ARPlayerController::execUpdateSilentPredLookAt(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(DeltaTime);
	P_FINISH;
	this->UpdateSilentPredLookAt(DeltaTime);
}

// @baa 0x016fa5a0
void ARPlayerController::execFE_SetActiveDLCPack(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(Id);
	P_FINISH;
	FE_SetActiveDLCPack(Id);
}

// @baa 0x0171d250
void ARPlayerController::execSetActiveSaveDevice(FFrame& Stack, RESULT_DECL)
{
    P_GET_INT(InDeviceID);
    P_GET_STR(InDeviceName);
    P_FINISH;
    SetActiveSaveDevice(InDeviceID, InDeviceName);
}

// @baa 0x0171d800
void ARPlayerController::execLive_SetSaveSlotDate(FFrame& Stack, RESULT_DECL)
{
    P_GET_INT(Id);
    P_GET_STR(Date);
    P_FINISH;
    Live_SetSaveSlotDate(Id, Date);
}

// @baa 0x0171cf60
void ARPlayerController::execAutoJezSetFlagsForPMap(FFrame& Stack, RESULT_DECL)
{
    P_GET_STR(MapName);
    P_GET_UBOOL(bSet);
    P_FINISH;
    AutoJezSetFlagsForPMap(MapName, bSet);
}

// @baa 0x0171e760
void URGFxMovieInvestigate::execGetNPCCountString(FFrame& Stack, RESULT_DECL)
{
    P_GET_INT(Armed);
    P_GET_INT(UnArmed);
    P_FINISH;
    *(FString*)Result = GetNPCCountString(Armed, UnArmed);
}

// @baa 0x0171e660
void URGFxMovie::execSetPicture(FFrame& Stack, RESULT_DECL)
{
    P_GET_STR(BaseName);
    P_GET_STR(StreamedName);
    P_FINISH;
    SetPicture(BaseName, StreamedName);
}

// @baa 0x0171c4d0
void ARPlayerController::execChopOffFront(FFrame& Stack, RESULT_DECL)
{
    P_GET_STR(Data);
    P_GET_STR(ChopOff);
    P_GET_UBOOL_OPTX(QuoteIt, FALSE);
    P_FINISH;
    *(FString*)Result = ChopOffFront(Data, ChopOff, QuoteIt);
}

// @baa 0x016f8b80
void ARPlayerController::execProcessViewRotation(FFrame& Stack, RESULT_DECL)
{
    P_GET_FLOAT(DeltaTime);
    P_GET_STRUCT_REF(FRotator, out_ViewRotation);
    P_GET_STRUCT(FRotator, DeltaRot);
    P_FINISH;
    ProcessViewRotation(DeltaTime, out_ViewRotation, DeltaRot);
}

// @baa 0x016f9850
void ARPlayerController::execAmIInSoftCover(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(DeltaTime);
	P_FINISH;
	*(UBOOL*)Result = this->AmIInSoftCover(DeltaTime);
}

// @baa 0x016f8540
void ARPlayerController::execSetUsingGamepad(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(UsingGamepad);
	P_FINISH;
	this->SetUsingGamepad(UsingGamepad);
}

// @baa 0x016f8a60
void ARPlayerController::execSetOcclusion(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bOcclusionOn);
	P_FINISH;
	this->SetOcclusion(bOcclusionOn);
}

// @baa 0x0171e1a0
void ARTunnelGrateBase::execSetDisableCapeCollision(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bDisabled);
	P_FINISH;
	((ARTunnelGrateBase*)this)->SetDisableCapeCollision(bDisabled);
}

// @baa 0x016f88a0
void ARPlayerController::execStartNewAmbientSound(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(USoundCue, Cue);
	P_FINISH;
	StartNewAmbientSound(Cue);
}

// @baa 0x016f8910
void ARPlayerController::execAmbientSaveToPersistent(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(USoundCue, Cue);
	P_FINISH;
	AmbientSaveToPersistent(Cue);
}

// @baa 0x016f8980
void ARPlayerController::execMixbinSaveToPersistent(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UMixBin, Mix);
	P_FINISH;
	MixbinSaveToPersistent(Mix);
}

// @baa 0x016f89f0
void ARPlayerController::execLevelSetRoomMixBin(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UMixBin, Mix);
	P_FINISH;
	LevelSetRoomMixBin(Mix);
}

// @baa 0x016f9dd0
void ARPlayerController::execLive_SetDifficulty(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(Difficulty);
	P_FINISH;
	Live_SetDifficulty(Difficulty);
}

// @baa 0x016faf10
void ARPlayerController::execFE_SetGamma(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(Value);
	P_FINISH;
	FE_SetGamma(Value);
}

// @baa 0x016fb000
void ARPlayerController::execFE_SetRender3D(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(Value);
	P_FINISH;
	FE_SetRender3D(Value);
}

// @baa 0x016fb0f0
void ARPlayerController::execFE_SetVolumeSFX(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(Value);
	P_FINISH;
	FE_SetVolumeSFX(Value);
}

// @baa 0x016fb300
void ARPlayerController::execFE_SetBenchmarkingActive(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(is_active);
	P_FINISH;
	FE_SetBenchmarkingActive(is_active);
}

// @baa 0x016fb1a0
void ARPlayerController::execFE_SetVolumeDialogue(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(Value);
	P_FINISH;
	FE_SetVolumeDialogue(Value);
}

// @baa 0x016fb250
void ARPlayerController::execFE_SetVolumeMusic(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(Value);
	P_FINISH;
	FE_SetVolumeMusic(Value);
}

// @baa 0x016f9470
void ARPlayerController::execShouldIKickOffWall(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT(FVector, HitNormal);
	P_FINISH;
	*(UBOOL*)Result = this->ShouldIKickOffWall(HitNormal);
}

// @baa 0x016f9d60
void ARPlayerController::execLive_IsMemoryCard(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(DeviceID);
	P_FINISH;
	*(UBOOL*)Result = Live_IsMemoryCard(DeviceID);
}

// @baa 0x016fa0d0
void ARPlayerController::execCheckActiveSaveDeviceFreeSpace(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(SizeNeeded);
	P_FINISH;
	*(UBOOL*)Result = CheckActiveSaveDeviceFreeSpace(SizeNeeded);
}

// @baa 0x016fa2d0
void ARPlayerController::execLive_SaveSavedGame(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(Id);
	P_FINISH;
	*(UBOOL*)Result = Live_SaveSavedGame(Id);
}

// @baa 0x016fa3f0
void ARPlayerController::execLive_DoesSaveExist(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(Id);
	P_FINISH;
	*(UBOOL*)Result = Live_DoesSaveExist(Id);
}

// @baa 0x00c86e80
void ARPlayerController::execSetControllerTiltDesiredIfAvailable(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bActive);
	P_FINISH;
	SetControllerTiltDesiredIfAvailable(bActive);
}

// @baa 0x00c86f00
void ARPlayerController::execSetControllerTiltActive(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bActive);
	P_FINISH;
	SetControllerTiltActive(bActive);
}

// @baa 0x016f84c0
void ARPlayerController::execSaveUsingGamePad(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(SavedUsingGamePad);
	P_FINISH;
	SaveUsingGamePad(SavedUsingGamePad);
}

// @baa 0x016f85f0
void ARPlayerController::execSetMetricsEnabled(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(Enabled);
	P_FINISH;
	SetMetricsEnabled(Enabled);
}

// @baa 0x016f86b0
void ARPlayerController::execSetMetricsPopupEnabled(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(Enabled);
	P_FINISH;
	SetMetricsPopupEnabled(Enabled);
}

// @baa 0x016f9b70
void ARPlayerController::execLive_SetRequestOnline(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(State);
	P_FINISH;
	Live_SetRequestOnline(State);
}

// @baa 0x016f9ca0
void ARPlayerController::execLive_SetStorageSelectPending(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bState);
	P_FINISH;
	Live_SetStorageSelectPending(bState);
}

// @baa 0x016f9f50
void ARPlayerController::execLive_SetSavingEnabledState(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bState);
	P_FINISH;
	Live_SetSavingEnabledState(bState);
}

// @baa 0x016fa650
void ARPlayerController::execFE_BufferDLCRemoval(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bState);
	P_FINISH;
	FE_BufferDLCRemoval(bState);
}

// @baa 0x016fa790
void ARPlayerController::execFE_DLCScanningActive(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bState);
	P_FINISH;
	FE_DLCScanningActive(bState);
}

// @baa 0x016fa850
void ARPlayerController::execFE_DLCScanning(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bState);
	P_FINISH;
	FE_DLCScanning(bState);
}

// @baa 0x016fa910
void ARPlayerController::execFE_DLCRescanPending(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bState);
	P_FINISH;
	FE_DLCRescanPending(bState);
}

// @baa 0x016fa9d0
void ARPlayerController::execFE_SetNeedsFrontendSave(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bState);
	P_FINISH;
	FE_SetNeedsFrontendSave(bState);
}

// @baa 0x016fac10
void ARPlayerController::execSetDLCLoadingFlag(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bDLC);
	P_FINISH;
	SetDLCLoadingFlag(bDLC);
}

extern FName g_026e2c4c;
	/* UpdateWorldAvoidWeight */

// @baa 0x0160dc50
/* RBMRouter.UpdateWorldAvoidWeight script event: the generated glue, out of line here. */
void ARBMRouter::eventUpdateWorldAvoidWeight(FLOAT DeltaTime)
{
	struct RBMRouter_eventUpdateWorldAvoidWeight_Parms
	{
		FLOAT DeltaTime;
	} Parms;
	Parms.DeltaTime = DeltaTime;
	ProcessEvent(FindFunctionChecked(g_026e2c4c), &Parms);
}

extern FName g_026e2ea8;
	/* GetWorldAvoidVector */

// @baa 0x0160dc90
/* RBMRouter.GetWorldAvoidVector script event: the generated glue, out of line here. */
FVector ARBMRouter::eventGetWorldAvoidVector(FLOAT& AvoidWeight)
{
	struct RBMRouter_eventGetWorldAvoidVector_Parms
	{
		FLOAT AvoidWeight;
		FVector ReturnValue;
	} Parms;
	appMemzero(&Parms.ReturnValue, sizeof(Parms.ReturnValue));
	Parms.AvoidWeight = AvoidWeight;
	ProcessEvent(FindFunctionChecked(g_026e2ea8), &Parms);
	AvoidWeight = Parms.AvoidWeight;
	return Parms.ReturnValue;
}

extern FName g_026e26fc;
	/* NewPathSet */

// @baa 0x0160dd10
/* RBMRouter.NewPathSet script event: the generated glue, out of line here. */
void ARBMRouter::eventNewPathSet(class ARBMRouteRequest* UpdatedRequest)
{
	struct RBMRouter_eventNewPathSet_Parms
	{
		class ARBMRouteRequest* UpdatedRequest;
	} Parms;
	Parms.UpdatedRequest = UpdatedRequest;
	ProcessEvent(FindFunctionChecked(g_026e26fc), &Parms);
}

extern FName g_026e28a8;
	/* GetCurrentPath */

// @baa 0x0160dd90
/* RBMRouteRequest.GetCurrentPath script event: the generated glue, out of line here. */
class URBMRouterPath* ARBMRouteRequest::eventGetCurrentPath()
{
	struct RBMRouteRequest_eventGetCurrentPath_Parms
	{
		class URBMRouterPath* ReturnValue;
	} Parms;
	Parms.ReturnValue = NULL;
	ProcessEvent(FindFunctionChecked(g_026e28a8), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026e364c;
	/* AddTransientCosts */

// @baa 0x0160e030
/* RBMRouteRequest_NervousSearch.AddTransientCosts script event: the generated glue, out of line here. */
void ARBMRouteRequest_NervousSearch::eventAddTransientCosts(FVector CentrePoint)
{
	struct RBMRouteRequest_NervousSearch_eventAddTransientCosts_Parms
	{
		FVector CentrePoint;
	} Parms;
	Parms.CentrePoint = CentrePoint;
	ProcessEvent(FindFunctionChecked(g_026e364c), &Parms);
}

extern FName g_026e2e8c;
	/* ProcessBuilderStep */

// @baa 0x0160e0e0
/* RBMRouteRequest_PerimeterBuilderWrapper.ProcessBuilderStep script event: the generated glue, out of line here. */
UBOOL ARBMRouteRequest_PerimeterBuilderWrapper::eventProcessBuilderStep()
{
	struct RBMRouteRequest_PerimeterBuilderWrapper_eventProcessBuilderStep_Parms
	{
		UBOOL ReturnValue;
	} Parms;
	Parms.ReturnValue = FALSE;
	ProcessEvent(FindFunctionChecked(g_026e2e8c), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026e2788;
	/* SmoothEnd */

// @baa 0x0160e3f0
/* RBMRouterPath.SmoothEnd script event: the generated glue, out of line here. */
void URBMRouterPath::eventSmoothEnd(class ARPawn* User, INT& bPathShortened)
{
	struct RBMRouterPath_eventSmoothEnd_Parms
	{
		class ARPawn* User;
		INT bPathShortened;
	} Parms;
	Parms.User = User;
	Parms.bPathShortened = bPathShortened;
	ProcessEvent(FindFunctionChecked(g_026e2788), &Parms);
	bPathShortened = Parms.bPathShortened;
}

extern FName g_026e3354;
	/* GetApproximateMovementSpeed */

// @baa 0x0160e480
/* RBMPawnAIAnim.GetApproximateMovementSpeed script event: the generated glue, out of line here. */
FLOAT ARBMPawnAIAnim::eventGetApproximateMovementSpeed()
{
	struct RBMPawnAIAnim_eventGetApproximateMovementSpeed_Parms
	{
		FLOAT ReturnValue;
	} Parms;
	Parms.ReturnValue = 0;
	ProcessEvent(FindFunctionChecked(g_026e3354), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026e3090;
	/* IsAwareOfPlayer */

// @baa 0x0160e4d0
/* RBMPawnAI.IsAwareOfPlayer script event: the generated glue, out of line here. */
UBOOL ARBMPawnAI::eventIsAwareOfPlayer(class ARPawnPlayer* PlayerPawn, class UClass* dmgType)
{
	struct RBMPawnAI_eventIsAwareOfPlayer_Parms
	{
		class ARPawnPlayer* PlayerPawn;
		class UClass* dmgType;
		UBOOL ReturnValue;
	} Parms;
	Parms.ReturnValue = FALSE;
	Parms.PlayerPawn = PlayerPawn;
	Parms.dmgType = dmgType;
	ProcessEvent(FindFunctionChecked(g_026e3090), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026e3024;
	/* FindClosestPawnForStrike */

// @baa 0x0160e5e0
/* RPawnPlayerCombat.FindClosestPawnForStrike script event: the generated glue, out of line here. */
UBOOL ARPawnPlayerCombat::eventFindClosestPawnForStrike(class UClass* DamageType, FLOAT& ClosestDist, class ARPawnCombat*& ClosestPawn)
{
	struct RPawnPlayerCombat_eventFindClosestPawnForStrike_Parms
	{
		class UClass* DamageType;
		FLOAT ClosestDist;
		class ARPawnCombat* ClosestPawn;
		UBOOL ReturnValue;
	} Parms;
	Parms.ReturnValue = FALSE;
	Parms.DamageType = DamageType;
	Parms.ClosestDist = ClosestDist;
	Parms.ClosestPawn = ClosestPawn;
	ProcessEvent(FindFunctionChecked(g_026e3024), &Parms);
	ClosestDist = Parms.ClosestDist;
	ClosestPawn = Parms.ClosestPawn;
	return Parms.ReturnValue;
}

extern FName g_026e2ae8;
	/* GetGlideKickPosition */

// @baa 0x016122f0
/* RPlayerController.GetGlideKickPosition script event: the generated glue, out of line here. */
FVector ARPlayerController::eventGetGlideKickPosition(class ARPawnVillain* DesiredKickTarget)
{
	struct RPlayerController_eventGetGlideKickPosition_Parms
	{
		class ARPawnVillain* DesiredKickTarget;
		FVector ReturnValue;
	} Parms;
	appMemzero(&Parms.ReturnValue, sizeof(Parms.ReturnValue));
	Parms.DesiredKickTarget = DesiredKickTarget;
	ProcessEvent(FindFunctionChecked(g_026e2ae8), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026e26ec;
	/* InKickRange */

// @baa 0x01612360
/* RPlayerController.InKickRange script event: the generated glue, out of line here. */
void ARPlayerController::eventInKickRange(class AActor* DesiredKickTarget, UBOOL CanHitTarget)
{
	struct RPlayerController_eventInKickRange_Parms
	{
		class AActor* DesiredKickTarget;
		UBOOL CanHitTarget;
	} Parms;
	Parms.DesiredKickTarget = DesiredKickTarget;
	Parms.CanHitTarget = CanHitTarget ? TRUE : FALSE;
	ProcessEvent(FindFunctionChecked(g_026e26ec), &Parms);
}

extern FName g_026e36e8;
	/* ModifyPlayerMovement */

// @baa 0x016123b0
/* RPlayerController.ModifyPlayerMovement script event: the generated glue, out of line here. */
void ARPlayerController::eventModifyPlayerMovement(FVector& MoveDirection, FLOAT DeltaTime)
{
	struct RPlayerController_eventModifyPlayerMovement_Parms
	{
		FVector MoveDirection;
		FLOAT DeltaTime;
	} Parms;
	Parms.MoveDirection = MoveDirection;
	Parms.DeltaTime = DeltaTime;
	ProcessEvent(FindFunctionChecked(g_026e36e8), &Parms);
	MoveDirection = Parms.MoveDirection;
}

extern FName g_026e3214;
	/* ImAboutToFallOffAnEdge */

// @baa 0x01612430
/* RPlayerController.ImAboutToFallOffAnEdge script event: the generated glue, out of line here. */
UBOOL ARPlayerController::eventImAboutToFallOffAnEdge(FEnvironmentSpecialMoveLocator Loc)
{
	struct RPlayerController_eventImAboutToFallOffAnEdge_Parms
	{
		FEnvironmentSpecialMoveLocator Loc;
		UBOOL ReturnValue;
	} Parms;
	Parms.ReturnValue = FALSE;
	Parms.Loc = Loc;
	ProcessEvent(FindFunctionChecked(g_026e3214), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026e274c;
	/* UpdateControllerRotation */

// @baa 0x01612490
/* RPlayerController.UpdateControllerRotation script event: the generated glue, out of line here. */
void ARPlayerController::eventUpdateControllerRotation(FLOAT DeltaTime, FVector MoveDirection)
{
	struct RPlayerController_eventUpdateControllerRotation_Parms
	{
		FLOAT DeltaTime;
		FVector MoveDirection;
	} Parms;
	Parms.DeltaTime = DeltaTime;
	Parms.MoveDirection = MoveDirection;
	ProcessEvent(FindFunctionChecked(g_026e274c), &Parms);
}

extern FName g_026e28d0;
	/* GetMovementAxes */

// @baa 0x016124f0
/* RPlayerController.GetMovementAxes script event: the generated glue, out of line here. */
void ARPlayerController::eventGetMovementAxes(FVector& X, FVector& Y, FVector& Z)
{
	struct RPlayerController_eventGetMovementAxes_Parms
	{
		FVector X;
		FVector Y;
		FVector Z;
	} Parms;
	Parms.X = X;
	Parms.Y = Y;
	Parms.Z = Z;
	ProcessEvent(FindFunctionChecked(g_026e28d0), &Parms);
	X = Parms.X;
	Y = Parms.Y;
	Z = Parms.Z;
}

extern FName g_026e2fc4;
	/* LevelAmbientSound */

// @baa 0x016125f0
/* RPlayerController.LevelAmbientSound script event: the generated glue, out of line here. */
void ARPlayerController::eventLevelAmbientSound(class USoundCue* NewSound)
{
	struct RPlayerController_eventLevelAmbientSound_Parms
	{
		class USoundCue* NewSound;
	} Parms;
	Parms.NewSound = NewSound;
	ProcessEvent(FindFunctionChecked(g_026e2fc4), &Parms);
}

extern FName g_026e31d8;
	/* CheckInteractableItem */

// @baa 0x016126e0
/* RPlayerController.CheckInteractableItem script event: the generated glue, out of line here. */
UBOOL ARPlayerController::eventCheckInteractableItem(class AActor* CheckActor, FVector& LocationOffset, FLOAT& HeightRange, FLOAT& Range2D, FLOAT& FOVRange)
{
	struct RPlayerController_eventCheckInteractableItem_Parms
	{
		class AActor* CheckActor;
		FVector LocationOffset;
		FLOAT HeightRange;
		FLOAT Range2D;
		FLOAT FOVRange;
		UBOOL ReturnValue;
	} Parms;
	Parms.ReturnValue = FALSE;
	Parms.CheckActor = CheckActor;
	Parms.LocationOffset = LocationOffset;
	Parms.HeightRange = HeightRange;
	Parms.Range2D = Range2D;
	Parms.FOVRange = FOVRange;
	ProcessEvent(FindFunctionChecked(g_026e31d8), &Parms);
	LocationOffset = Parms.LocationOffset;
	HeightRange = Parms.HeightRange;
	Range2D = Parms.Range2D;
	FOVRange = Parms.FOVRange;
	return Parms.ReturnValue;
}

extern FName g_026e25c4;
	/* InputHeading */

// @baa 0x016127f0
/* RPlayerControllerCombat.InputHeading script event: the generated glue, out of line here. */
FVector ARPlayerControllerCombat::eventInputHeading(UBOOL bCanBeZero)
{
	struct RPlayerControllerCombat_eventInputHeading_Parms
	{
		UBOOL bCanBeZero;
		FVector ReturnValue;
	} Parms;
	appMemzero(&Parms.ReturnValue, sizeof(Parms.ReturnValue));
	Parms.bCanBeZero = bCanBeZero ? TRUE : FALSE;
	ProcessEvent(FindFunctionChecked(g_026e25c4), &Parms);
	return Parms.ReturnValue;
}
