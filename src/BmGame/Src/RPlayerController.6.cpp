// RPlayerController.cpp (part 6 of 6): 83 functions
// Placed here by: class 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x016fa140
void ARPlayerController::execLive_SetActiveSave(FFrame& Stack, RESULT_DECL)
{
    P_GET_INT(Id);
    P_FINISH;
    vf_5b8(Id);
}

// @baa 0x016fa710
void ARPlayerController::execFE_UnblockInitialNotifies(FFrame& Stack, RESULT_DECL)
{
    P_FINISH;
    vf_61c();
}

// @baa 0x016f7fd0
void ARPlayerController::execDebugUpdateAmbientTree( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_488();
}

// @baa 0x016f8050
void ARPlayerController::execToggleMovieRecord( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_490();
}

// @baa 0x016f80d0
void ARPlayerController::execPlayRiddlerCaptureMovie( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_498();
}

// @baa 0x016f8110
void ARPlayerController::execUpdateDownloadableContent( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_49c();
}

// @baa 0x016f8150
void ARPlayerController::execUpdateDownloadableCharacters( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_4a0();
}

struct ARPlayerController_ : public ARPlayerController
{
	void NativeBreakPoint();
	void execNativeBreakPoint(FFrame& Stack, RESULT_DECL);
};

// @baa 0x016f8210
void ARPlayerController_::execNativeBreakPoint( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	NativeBreakPoint();
}

// @baa 0x016f8300
void ARPlayerController::execAmbientSoundControl( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_4b4();
}

// @baa 0x016f8340
void ARPlayerController::execStartSavedAmbientSound( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_4b8();
}

// @baa 0x016f8380
void ARPlayerController::execStartSavedMixBin( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_4bc();
}

// @baa 0x016f8440
void ARPlayerController::execReloadGame( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_4d0();
}

struct ARPlayerController__016f8e40 : public ARPlayerController
{
	UBOOL IsInExternalCamera();
	void execIsInExternalCamera(FFrame& Stack, RESULT_DECL);
};

// @baa 0x016f8e40
void ARPlayerController__016f8e40::execIsInExternalCamera( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(UBOOL*)Result = IsInExternalCamera();
}

struct ARPlayerController__016f8ff0 : public ARPlayerController
{
	void TurnOnObstructionDebugging();
	void execTurnOnObstructionDebugging(FFrame& Stack, RESULT_DECL);
};

// @baa 0x016f8ff0
void ARPlayerController__016f8ff0::execTurnOnObstructionDebugging( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	TurnOnObstructionDebugging();
}

struct ARPlayerController__016f9020 : public ARPlayerController
{
	void TurnOnInteractDebugging();
	void execTurnOnInteractDebugging(FFrame& Stack, RESULT_DECL);
};

// @baa 0x016f9020
void ARPlayerController__016f9020::execTurnOnInteractDebugging( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	TurnOnInteractDebugging();
}

struct ARPlayerController__016f9110 : public ARPlayerController
{
	void PlayerWtfNative();
	void execPlayerWtfNative(FFrame& Stack, RESULT_DECL);
};

// @baa 0x016f9110
void ARPlayerController__016f9110::execPlayerWtfNative( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	PlayerWtfNative();
}

struct ARPlayerController__016f9290 : public ARPlayerController
{
	void CheckForGlassAttackTarget();
	void execCheckForGlassAttackTarget(FFrame& Stack, RESULT_DECL);
};

// @baa 0x016f9290
void ARPlayerController__016f9290::execCheckForGlassAttackTarget( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	CheckForGlassAttackTarget();
}

struct ARPlayerController__016f94f0 : public ARPlayerController
{
	UBOOL WillIHitCapeGlideTarget();
	void execWillIHitCapeGlideTarget(FFrame& Stack, RESULT_DECL);
};

// @baa 0x016f94f0
void ARPlayerController__016f94f0::execWillIHitCapeGlideTarget( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(UBOOL*)Result = WillIHitCapeGlideTarget();
}

struct ARPlayerController__016f9530 : public ARPlayerController
{
	FLOAT CalculateCapeGlideAltitude();
	void execCalculateCapeGlideAltitude(FFrame& Stack, RESULT_DECL);
};

// @baa 0x016f9530
void ARPlayerController__016f9530::execCalculateCapeGlideAltitude( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(FLOAT*)Result = CalculateCapeGlideAltitude();
}

struct ARPlayerController__016f95b0 : public ARPlayerController
{
	UBOOL HaveRoomToCapeGlide();
	void execHaveRoomToCapeGlide(FFrame& Stack, RESULT_DECL);
};

// @baa 0x016f95b0
void ARPlayerController__016f95b0::execHaveRoomToCapeGlide( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(UBOOL*)Result = HaveRoomToCapeGlide();
}

struct ARPlayerController__016f9700 : public ARPlayerController
{
	void NativeStartGrappleMovement();
	void execNativeStartGrappleMovement(FFrame& Stack, RESULT_DECL);
};

// @baa 0x016f9700
void ARPlayerController__016f9700::execNativeStartGrappleMovement( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	NativeStartGrappleMovement();
}

struct ARPlayerController__016f9730 : public ARPlayerController
{
	UBOOL CheckSpaceToJump();
	void execCheckSpaceToJump(FFrame& Stack, RESULT_DECL);
};

// @baa 0x016f9730
void ARPlayerController__016f9730::execCheckSpaceToJump( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(UBOOL*)Result = CheckSpaceToJump();
}

// @baa 0x016f8480
void ARPlayerController::execInitGamePadSettings(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;

	vf_4d4();
}

// @baa 0x016f8830
void ARPlayerController::execResetAmbientSound(FFrame& Stack, RESULT_DECL)
{
    P_GET_OBJECT(USoundCue, Cue);
    P_FINISH;
    vf_514(Cue);
}

// @baa 0x016f9e40
void ARPlayerController::execLive_IsNewGame(FFrame& Stack, RESULT_DECL)
{
    P_GET_INT_REF(Difficulty);
    P_FINISH;
    *(UBOOL*)Result = vf_588(Difficulty);
}

// @baa 0x0171d050
void ARPlayerController::execSetInfocastMsg(FFrame& Stack, RESULT_DECL)
{
    P_GET_STR(msg);
    P_FINISH;
    vf_57c(msg);
}

// @baa 0x0171cea0
void ARPlayerController::execAutoJezLevelShouldBeLoaded(FFrame& Stack, RESULT_DECL)
{
    P_GET_STR(LevelName);
    P_FINISH;
    *(UBOOL*)Result = vf_550(LevelName);
}

// @baa 0x016f8ec0
void ARPlayerController::execPreProcessInput(FFrame& Stack, RESULT_DECL)
{
    P_GET_FLOAT(DeltaTime);
    P_FINISH;
    vf_530(DeltaTime);
}

// @baa 0x016f9bf0
void ARPlayerController::execLive_SetLoginStatusError(FFrame& Stack, RESULT_DECL)
{
    P_GET_BYTE(State);
    P_FINISH;
    vf_568(State);
}

struct ARPlayerController__016f9330 : public ARPlayerController
{
	AActor* sub_016175a0();
};

// @baa 0x016f9330
void ARPlayerController::execGetAerialKickTarget(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(AActor**)Result = ((ARPlayerController__016f9330*)this)->sub_016175a0();
}

struct ARPlayerController__016f9570 : public ARPlayerController
{
	ARPawnVillain* sub_01623fd0();
};

// @baa 0x016f9570
void ARPlayerController::execGetFallingAttackTarget(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(ARPawnVillain**)Result = ((ARPlayerController__016f9570*)this)->sub_01623fd0();
}

// @baa 0x00c86e40
void ARPlayerController::execIsControllerTiltActive(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_41c();
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
    GRuntimeUCFlags &= ~RUC_SkippedOptionalParm;
    FVector FeatureNormalT;
    GPropAddr = 0;
    Stack.Step(Stack.Object, &FeatureNormalT);
    BYTE* FeatureNormalAddr = GPropAddr;
    FVector& FeatureNormal = GPropAddr ? *(FVector*)GPropAddr : FeatureNormalT;
    if (GRuntimeUCFlags & RUC_SkippedOptionalParm)
    {
        FVector Zero = {0.0f, 0.0f, 0.0f};
        FeatureNormal = Zero;
    }
    P_FINISH;
    *(UBOOL*)Result = static_cast<RPlayerControllerNative*>(this)->sub_01618460(FeatureType, Distance, FeatureNormalAddr ? &FeatureNormal : NULL);
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
	*(UBOOL*)Result = vf_480();
}

// @baa 0x016f7f90
void ARPlayerController::execIsAutoJezActive(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_484();
}

// @baa 0x016f8010
void ARPlayerController::execLoadDebugSphere(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UStaticMesh**)Result = (UStaticMesh*)vf_48c();
}

// @baa 0x016f8090
void ARPlayerController::execIsMovieCapturingInput(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_494();
}

// @baa 0x016f8190
void ARPlayerController::execIsJokerDLCPresent(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_4a4();
}

// @baa 0x016f81d0
void ARPlayerController::execIsArmouredBatmanDLCPresent(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_4a8();
}

// @baa 0x016f8240
void ARPlayerController::execGetSelectedMovementState(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(BYTE*)Result = vf_4b0();
}

// @baa 0x016f83c0
void ARPlayerController::execGetSaveGameManager(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(URSaveGameManager**)Result = (URSaveGameManager*)vf_4c0();
}

// @baa 0x016f8400
void ARPlayerController::execSaveGameOptionsToMemory(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_4cc();
}

// @baa 0x016f85b0
void ARPlayerController::execIsMetricsEnabled(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_4dc();
}

// @baa 0x016f8670
void ARPlayerController::execIsMetricsPopupEnabled(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_4e4();
}

// @baa 0x016f8730
void ARPlayerController::execIsEidosMetricsEnabled(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_4f4();
}

// @baa 0x016f87b0
void ARPlayerController::execAmbientGetStartTime(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(FLOAT*)Result = vf_50c();
}

// @baa 0x016f87f0
void ARPlayerController::execAmbientGetEndTime(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(FLOAT*)Result = vf_510();
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
	*(UBOOL*)Result = vf_558();
}

// @baa 0x016f9b30
void ARPlayerController::execLive_IsRequestOnline(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_560();
}

// @baa 0x016f9c60
void ARPlayerController::execLive_IsLoginStatusError(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(BYTE*)Result = vf_56c();
}

// @baa 0x016f9d20
void ARPlayerController::execLive_IsStorageSelectPending(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_574();
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
	*(UBOOL*)Result = vf_59c();
}

// @baa 0x016fa090
void ARPlayerController::execGetActiveSaveDevice(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(INT*)Result = vf_5ac();
}

// @baa 0x016fa1b0
void ARPlayerController::execLive_GetActiveSaveID(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(INT*)Result = vf_5bc();
}

// @baa 0x016fa460
void ARPlayerController::execLive_IsPS3AndUsingFastLoad(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_5dc();
}

// @baa 0x016fa610
void ARPlayerController::execFE_GetActiveDLCPack(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(INT*)Result = vf_610();
}

// @baa 0x016fa6d0
void ARPlayerController::execFE_IsBufferDLCRemovalSet(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_618();
}

// @baa 0x016fa750
void ARPlayerController::execFE_AreNotifiesBlocked(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_620();
}

// @baa 0x016fa810
void ARPlayerController::execFE_IsDLCScanningActive(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_628();
}

// @baa 0x016fa8d0
void ARPlayerController::execFE_IsDLCScanning(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_630();
}

// @baa 0x016fa990
void ARPlayerController::execFE_IsDLCRescanPending(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_638();
}

// @baa 0x016faa50
void ARPlayerController::execFE_IsFrontendSaveSet(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_640();
}

// @baa 0x016faa90
void ARPlayerController::execIsXbox(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_644();
}

// @baa 0x016faad0
void ARPlayerController::execIsDebugFrontendAvailable(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_648();
}

// @baa 0x016fab10
void ARPlayerController::execIsPlayingFullScreenMovie(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_64c();
}

// @baa 0x016fab50
void ARPlayerController::execIsLevelLoadSpecified(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_650();
}

// @baa 0x016fabd0
void ARPlayerController::execIsGamepadConnected(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_670();
}

// @baa 0x016facd0
void ARPlayerController::execIsCurrentlyLoadingLevels(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_67c();
}

// @baa 0x016fad10
void ARPlayerController::execIsAmerican(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_680();
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
	*(UBOOL*)Result = vf_68c();
}

// @baa 0x016fae10
void ARPlayerController::execIsPS3_4x3(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_690();
}

// @baa 0x016fae50
void ARPlayerController::execIsPS3_480i(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_694();
}

// @baa 0x016fae90
void ARPlayerController::execGetSaveGameState(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(INT*)Result = vf_698();
}

// @baa 0x016faed0
void ARPlayerController::execFE_GetGamma(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(FLOAT*)Result = vf_6a8();
}

// @baa 0x016faf80
void ARPlayerController::execFE_GetRender3D(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(FLOAT*)Result = vf_6b0();
}

// @baa 0x016fafc0
void ARPlayerController::execFE_GetRender3DFromEngine(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_6b4();
}

// @baa 0x016fb070
void ARPlayerController::execFE_GetEngineGamma(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(FLOAT*)Result = vf_6bc();
}

// @baa 0x016fb0b0
void ARPlayerController::execFE_GetVolumeSFX(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(FLOAT*)Result = vf_6c0();
}

// @baa 0x016fb160
void ARPlayerController::execFE_GetVolumeDialogue(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(FLOAT*)Result = vf_6c8();
}
