// BmGame_16f0000.cpp: 120 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x016f0370
void ARPawn::execTeleportPhysics( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_490();
}

// @baa 0x016f0440
void ARPawnCharacter::execModifyPoseNode( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_4ac();
}

// @baa 0x016f0480
void ARPawnCharacter::execBeginChangePose( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_4b0();
}

// @baa 0x016f09a0
void ARPawnCharacter::execInstantChangePose( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_4d8();
}

// @baa 0x016f4890
void ARPawnCharacter::execStopMoveTo( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_580();
}

// @baa 0x016f48d0
void ARPawnCharacter::execInstantStopMoveTo( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_584();
}

// @baa 0x016f4c60
void ARPawnCharacter::execStopAimAt( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_598();
}

// @baa 0x016f4ca0
void ARPawnCharacter::execStopAllOverlays( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_59c();
}

// @baa 0x016f4ce0
void ARPawnCharacter::execSnapAimAt( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_5a0();
}

// @baa 0x016f5050
void ARPawnCharacter::execStopLookAt( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_5c0();
}

// @baa 0x016f5240
void ARPawnCharacter::execStopFaceAt( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_5d0();
}

// @baa 0x016f5780
void ARPawnCharacter::execSnapFloorCorrection( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_60c();
}

struct ARPawnCombat_ : public ARPawnCombat
{
	UBOOL IsTargetted();
	void execIsTargetted(FFrame& Stack, RESULT_DECL);
};

// @baa 0x016f60c0
void ARPawnCombat_::execIsTargetted( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(UBOOL*)Result = IsTargetted();
}

// @baa 0x016f6100
void ARBMPawnAIAnim::execResetXrayEnvironments( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_640();
}

// @baa 0x016f6930
void ARPawnPlayerCombat::execDetectStrikes( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_640();
}

// @baa 0x016f7800
void ARCombatMove::execClearAllTimers( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_354();
}

struct ARSpecialMoveInstance_LineLauncher_ : public ARSpecialMoveInstance_LineLauncher
{
	void CheckForRailingComingUp();
	void execCheckForRailingComingUp(FFrame& Stack, RESULT_DECL);
};

// @baa 0x016fbb10
void ARSpecialMoveInstance_LineLauncher_::execCheckForRailingComingUp( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	CheckForRailingComingUp();
}

struct ARSpecialMoveInstance_ResonateObject_ : public ARSpecialMoveInstance_ResonateObject
{
	void AlignCamera();
	void execAlignCamera(FFrame& Stack, RESULT_DECL);
};

// @baa 0x016fbfb0
void ARSpecialMoveInstance_ResonateObject_::execAlignCamera( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	AlignCamera();
}

struct ARCornerPoint_ : public ARCornerPoint
{
	void UpdateDisplayLines();
	void execUpdateDisplayLines(FFrame& Stack, RESULT_DECL);
};

// @baa 0x016fe4a0
void ARCornerPoint_::execUpdateDisplayLines( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	UpdateDisplayLines();
}

struct ARHidePoint_ : public ARHidePoint
{
	void ActivateForGrapple();
	void execActivateForGrapple(FFrame& Stack, RESULT_DECL);
};

// @baa 0x016ffa10
void ARHidePoint_::execActivateForGrapple( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	ActivateForGrapple();
}

struct ARHidePoint__016ffa40 : public ARHidePoint
{
	void DeactivateForGrapple();
	void execDeactivateForGrapple(FFrame& Stack, RESULT_DECL);
};

// @baa 0x016ffa40
void ARHidePoint__016ffa40::execDeactivateForGrapple( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	DeactivateForGrapple();
}

struct ARHidePoint__016ffa70 : public ARHidePoint
{
	void SaveDestroyedState();
	void execSaveDestroyedState(FFrame& Stack, RESULT_DECL);
};

// @baa 0x016ffa70
void ARHidePoint__016ffa70::execSaveDestroyedState( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	SaveDestroyedState();
}

struct ARHidePoint__016ffaa0 : public ARHidePoint
{
	void LoadDestroyedState();
	void execLoadDestroyedState(FFrame& Stack, RESULT_DECL);
};

// @baa 0x016ffaa0
void ARHidePoint__016ffaa0::execLoadDestroyedState( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	LoadDestroyedState();
}

struct ARGargoyleBombBase_ : public ARGargoyleBombBase
{
	void ActivateBomb();
	void execActivateBomb(FFrame& Stack, RESULT_DECL);
};

// @baa 0x016ffd70
void ARGargoyleBombBase_::execActivateBomb( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	ActivateBomb();
}

// @baa 0x016fee30
void URBMRouterPath::execClearPath(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	vf_130();
}

typedef UBOOL (__thiscall* FSlot)(void*);

// @baa 0x016f00c0
void ARPawn::execIsSafe(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = ((FSlot)(*(void***)this)[0x478 / 4])(this);
}

// @baa 0x016f0100
void ARPawn::execGetSafePoint(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(AActor**)Result = (AActor*)vf_47c();
}

// @baa 0x016f0330
void ARPawn::execIsIncapacitated(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_48c();
}

// @baa 0x016f3b30
void ARPawnCharacter::execIsPoseMirrored(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_52c();
}

// @baa 0x016f3b70
void ARPawnCharacter::execIsInWeaponTransition(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_530();
}

// @baa 0x016f46b0
void ARPawnCharacter::execIsPlayingAnyOverlay(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_570();
}

// @baa 0x016f5610
void ARPawnCharacter::execIsFalling(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_5f4();
}

// @baa 0x016f5650
void ARPawnCharacter::execIsFallingOrLanding(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_5f8();
}

// @baa 0x016f5700
void ARPawnCharacter::execGetMoveToPhase(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(BYTE*)Result = vf_604();
}

// @baa 0x016f5740
void ARPawnCharacter::execGetMoveToPhaseTime(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(FLOAT*)Result = vf_608();
}

// @baa 0x016f5af0
void ARPawnCombat::execGetNormalisedTimeThroughCurrentTransition(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(FLOAT*)Result = vf_618();
}

// @baa 0x016f5d90
void ARPawnCombat::execIsUsingCombatPoint(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_624();
}

// @baa 0x016f5dd0
void ARPawnCombat::execIsLunatic(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_628();
}

// @baa 0x016f61b0
void ARBMPawnAIAnim::execCanBeSeenByBatsForXray(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_648();
}

// @baa 0x016f7840
void ARCombatMove_BatmanStrike::execSetStrikeInfo(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = ((FSlot)(*(void***)this)[0x358 / 4])(this);
}

// @baa 0x016fb5a0
void ARPlayerControllerCombat::execGetLookAtEnemy(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(ARPawnCombat**)Result = (ARPawnCombat*)vf_6f4();
}

// @baa 0x016fc7f0
void ARAudioPointController::execLoadChapter7Package(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = ((FSlot)(*(void***)this)[0x614 / 4])(this);
}

// @baa 0x016fc830
void ARAudioPointController::execInitLoadedPackage(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = ((FSlot)(*(void***)this)[0x618 / 4])(this);
}

// @baa 0x016fd680
void ARBMRouter::execFindStartAnchor(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = ((FSlot)(*(void***)this)[0x36c / 4])(this);
}

// @baa 0x016fdab0
void ARBMRouter::execAtGoal(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_388();
}

// @baa 0x016fdaf0
void ARBMRouter::execPathNotFound(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_38c();
}

// @baa 0x016fdb30
void ARBMRouter::execSearching(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_390();
}

// @baa 0x016fdb70
void ARBMRouter::execRouting(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_394();
}

// @baa 0x016fdbb0
void ARBMRouter::execHasPath(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_398();
}

// @baa 0x016fdbf0
void ARBMRouter::execIsInSpecialMove(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = ((FSlot)(*(void***)this)[0x39c / 4])(this);
}

// @baa 0x016fdc30
void ARBMRouter::execIsAvoiding(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_3a0();
}

// @baa 0x016fdd70
void ARBMRouter::execFindFirstActorOnPath(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(AActor**)Result = (AActor*)vf_3ac();
}

// @baa 0x016fddb0
void ARBMRouteRequest::execAtGoal(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = ((FSlot)(*(void***)this)[0x354 / 4])(this);
}

// @baa 0x016fddf0
void ARBMRouteRequest::execNearGoal(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_358();
}

// @baa 0x016fde30
void ARBMRouteRequest::execPathNotFound(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = ((FSlot)(*(void***)this)[0x35c / 4])(this);
}

// @baa 0x016fde70
void ARBMRouteRequest::execSearching(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_360();
}

// @baa 0x016fdeb0
void ARBMRouteRequest::execRouting(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_364();
}

// @baa 0x016fdef0
void ARBMRouteRequest::execHasPath(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_368();
}

// @baa 0x016fea90
void URBMRouterPath::execGetNodeNum(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(INT*)Result = vf_114();
}

// @baa 0x016fead0
void URBMRouterPath::execGetSpecialMoveNode(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(ARBMPathNode_SpecialMove**)Result = (ARBMPathNode_SpecialMove*)vf_118();
}

// @baa 0x016ff240
void URBMRouterPath::execFindFirstActorOnPath(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(AActor**)Result = (AActor*)vf_150();
}

// @baa 0x016f04c0
void ARPawnCharacter::execEndChangePose(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	FTransitionId Transition;
	*(FTransitionId*)Result = *(FTransitionId*)(INT)vf_4b4((INT)&Transition);
}

// @baa 0x016f0510
void ARPawnCharacter::execIssueChangePose(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	FTransitionId Transition;
	*(FTransitionId*)Result = *(FTransitionId*)(INT)vf_4b8((INT)&Transition);
}

// @baa 0x016f2a80
void ARPawnCharacter::execCancelSlave(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	FTransitionId Transition;
	*(FTransitionId*)Result = *(FTransitionId*)(INT)vf_504((INT)&Transition);
}

// @baa 0x016fc870
void ARAudioPointController::execCancelPackageLoading(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	vf_61c();
}

// @baa 0x016fcc20
void URSeqAct_ConversationDialogue::execActivateNextDialogueEarly(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	vf_1a0();
}

// @baa 0x016fcde0
void URSeqAct_ConversationDialogue::execReBuildScriptNames(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	vf_1b4();
}

// @baa 0x016fce50
void URSeqAct_PlaySpeechConversation::execReBuildScriptNames(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	vf_1a0();
}

// @baa 0x016fcf30
void URSeqAct_SpeechEventManagerBase::execCueFinished(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	vf_1a0();
}

// @baa 0x016fcf70
void URSeqAct_SpeechEventManagerBase::execCueAborted(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	vf_1a4();
}

// @baa 0x016fdf30
void ARBMRouteRequest::execReRoute(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	vf_36c();
}

// @baa 0x016fdf70
void ARBMRouteRequest::execFlush(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	vf_370();
}

// @baa 0x016fe910
void URPathGateComponent::execCloseGate(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	vf_14c();
}

// @baa 0x016fe950
void URPathGateComponent::execOpenGate(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	vf_150();
}

struct ARPawnCombat__016f6000 : public ARPawnCombat
{
	void sub_0167bba0(ARPawnCombat*);
};

// @baa 0x016f6000
void ARPawnCombat::execFacePawn(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(ARPawnCombat, FaceTarget);
	P_FINISH;
	((ARPawnCombat__016f6000*)this)->sub_0167bba0(FaceTarget);
}

struct ARPawnCombat__016f5eb0 : public ARPawnCombat
{
	void sub_0166d720(FLOAT);
};

// @baa 0x016f5eb0
void ARPawnCombat::execSetDestRot(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(NewRot);
	P_FINISH;
	((ARPawnCombat__016f5eb0*)this)->sub_0166d720(NewRot);
}

// @baa 0x016f5a90
void ARPawnCombat::execGetAnimLength(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT(FFatAnim, AnimToTest);
	P_FINISH;
	*(FLOAT*)Result = vf_614(*(INT*)&AnimToTest);
}

// @baa 0x016fc9e0
void ARAudioPoint::execBuildNodes(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UAudioComponent, AC);
	P_FINISH;
	vf_354((INT)AC);
}

// @baa 0x016fcb80
void URSeqAct_PlayTVSequenceSingleLine::execStopMovieTexture(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UTextureMovie, NewTexture);
	P_FINISH;
	vf_1a0((INT)NewTexture);
}

// @baa 0x016fce90
void URSeqAct_PlayTVSequenceBase::execStopMovieTexture(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UTextureMovie, NewTexture);
	P_FINISH;
	vf_1a8((INT)NewTexture);
}

// @baa 0x016fe2d0
void ARBMRouteRequest_NervousSearch::execCreateSearchCandidates(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(TargetIndex);
	P_FINISH;
	vf_37c(TargetIndex);
}

// @baa 0x016fe3d0
void ARBMRouteRequest_TerrifiedSearch::execCreateSearchCandidates(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(TargetIndex);
	P_FINISH;
	vf_378(TargetIndex);
}

// @baa 0x016fec60
void URBMRouterPath::execClearNodesFromIndex(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(StartIndex);
	P_FINISH;
	vf_128(StartIndex);
}

// @baa 0x016feef0
void URBMRouterPath::execAddNode_Actor(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(AActor, NewPathNode);
	P_FINISH;
	vf_138((INT)NewPathNode);
}

// @baa 0x016febf0
void URBMRouterPath::execAdvanceNodes(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT_OPTX(AdvanceAmount, 1);
	P_FINISH;
	vf_124(AdvanceAmount);
}

// @baa 0x016f4640
void ARPawnCharacter::execIsPlayingOverlay(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT(FOverlayId, Id);
	P_FINISH;
	*(UBOOL*)Result = vf_56c(Id.PlayerID, Id.AnimId);
}

// @baa 0x016f3bb0
void ARPawnCharacter::execIsInAnyTransition(FFrame& Stack, RESULT_DECL)
{
	P_GET_BYTE_OPTX(TestForTransitions, 0);
	P_FINISH;
	*(UBOOL*)Result = vf_534(*(INT*)&TestForTransitions);
}

// @baa 0x016f3d00
void ARPawnCharacter::execIsInAnyNonAutomaticTransition(FFrame& Stack, RESULT_DECL)
{
	P_GET_BYTE_OPTX(TestForTransitions, 0);
	P_FINISH;
	*(UBOOL*)Result = vf_53c(*(INT*)&TestForTransitions);
}

// @baa 0x016f7eb0
void ARBMDebugCameraController::execUpdateBatmansCapeInternal(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(URCapeComponent, CapeComponent);
	P_FINISH;
	vf_46c((INT)CapeComponent);
}

struct ARPawnCombat__016f5f20 : public ARPawnCombat
{
	void sub_01673b20(FVector);
};

// @baa 0x016f5f20
void ARPawnCombat::execSetDestHeading(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT(FVector, NewHeading);
	P_FINISH;
	((ARPawnCombat__016f5f20*)this)->sub_01673b20(NewHeading);
}

struct ARPawnCombat__016f5f90 : public ARPawnCombat
{
	void sub_01676b70(FVector);
};

// @baa 0x016f5f90
void ARPawnCombat::execFacePos(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT(FVector, NewFacePos);
	P_FINISH;
	((ARPawnCombat__016f5f90*)this)->sub_01676b70(NewFacePos);
}

// @baa 0x016f5440
void ARPawnCharacter::execAddYawVelocity(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(YawVelocity);
	P_FINISH;
	vf_5e4(YawVelocity);
}

// @baa 0x016f54b0
void ARPawnCharacter::execAddYaw(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(Yaw);
	P_FINISH;
	vf_5e8(Yaw);
}

// @baa 0x016f55a0
void ARPawnCharacter::execOverrideYawVelocity(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(YawVelocity);
	P_FINISH;
	vf_5f0(YawVelocity);
}

// @baa 0x016f5690
void ARPawnCharacter::execSetIdleTimeScale(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(NewValue);
	P_FINISH;
	vf_5fc(NewValue);
}

// @baa 0x016f5a20
void ARPawnCharacter::execSetYawRadians(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(R);
	P_FINISH;
	vf_610(R);
}

// @baa 0x016f6140
void ARBMPawnAIAnim::execUpdateXrayVisibility(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(DeltaTime);
	P_FINISH;
	vf_644(DeltaTime);
}

// @baa 0x016fc930
void ARAudioPointController::execSortDistances(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bForceUpdate);
	P_FINISH;
	vf_624(bForceUpdate);
}

// @baa 0x016fd430
void ARBMRouter_DynamicObject::execUpdateRouterObject_Routing(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(DeltaTime);
	P_FINISH;
	*(UBOOL*)Result = vf_35c(DeltaTime);
}

// @baa 0x016f0870
// @baa 0x016f0870
void ARPawnCharacter::execChangeIdleStanceWithoutTransition(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(Stance);
    P_FINISH;
    ChangeIdleStanceWithoutTransition(Stance);
}

// @baa 0x016f4790
// @baa 0x016f4790
void ARPawnCharacter::execMoveTo(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FVector, Position);
    P_FINISH;
    MoveTo(Position);
}

// @baa 0x016f4810
// @baa 0x016f4810
void ARPawnCharacter::execMoveInDirection(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FVector, Direction);
    P_FINISH;
    MoveInDirection(Direction);
}

// @baa 0x016f4ea0
// @baa 0x016f4ea0
void ARPawnCharacter::execLookAt(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FVector, Position);
    P_FINISH;
    LookAt(Position);
}

// @baa 0x016f4f20
// @baa 0x016f4f20
void ARPawnCharacter::execLookInDirection(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FVector, Direction);
    P_FINISH;
    LookInDirection(Direction);
}

// @baa 0x016f5090
// @baa 0x016f5090
void ARPawnCharacter::execFaceAt(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FVector, Position);
    P_FINISH;
    FaceAt(Position);
}

// @baa 0x016f5110
// @baa 0x016f5110
void ARPawnCharacter::execFaceInDirection(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FVector, Direction);
    P_FINISH;
    FaceInDirection(Direction);
}

// @baa 0x016f5340
// @baa 0x016f5340
void ARPawnCharacter::execAddTranslationVelocity(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FVector, TranslationVelocity);
    P_FINISH;
    AddTranslationVelocity(TranslationVelocity);
}

// @baa 0x016f53c0
// @baa 0x016f53c0
void ARPawnCharacter::execAddTranslation(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FVector, Translation);
    P_FINISH;
    AddTranslation(Translation);
}

// @baa 0x016f5520
// @baa 0x016f5520
void ARPawnCharacter::execOverrideTranslationVelocity(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FVector, TranslationVelocity);
    P_FINISH;
    OverrideTranslationVelocity(TranslationVelocity);
}

// @baa 0x016f76d0
// @baa 0x016f76d0
void ARBMCombatCollisionProxy::execUpdateLocation(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FVector, NewLocation);
    P_FINISH;
    UpdateLocation(NewLocation);
}

// @baa 0x016fc8b0
// @baa 0x016fc8b0
void ARAudioPointController::execGetLocation(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FVector, Loc);
    P_FINISH;
    GetLocation(Loc);
}

// @baa 0x016fe170
// @baa 0x016fe170
void ARBMRouteRequest_FindSinglePath::execSetGoalForStaticAvoidance(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FVector, TargetPos);
    P_FINISH;
    SetGoalForStaticAvoidance(TargetPos);
}

// @baa 0x016fe250
// @baa 0x016fe250
void ARBMRouteRequest_NervousSearch::execDoPathBlocking(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FVector, CentrePoint);
    P_FINISH;
    DoPathBlocking(CentrePoint);
}

// @baa 0x016fee70
// @baa 0x016fee70
void URBMRouterPath::execAddNode_Pos(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FVector, NewPathNode);
    P_FINISH;
    AddNode_Pos(NewPathNode);
}

// @baa 0x016fe780
// @baa 0x016fe780
void ARPontoonBridgeManager::execFindClosestPontoon(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FVector, pos);
    P_FINISH;
    *(INT*)Result = FindClosestPontoon(pos);
}

// @baa 0x016fe800
// @baa 0x016fe800
void ARPontoonBridgeManager::execFindPontoonByPosition(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FVector, pos);
    P_FINISH;
    *(INT*)Result = FindPontoonByPosition(pos);
}

// @baa 0x016ff090
// @baa 0x016ff090
void URBMRouterPath::execGetPathLength(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FVector, CurrentPos);
    P_FINISH;
    *(FLOAT*)Result = GetPathLength(CurrentPos);
}

// @baa 0x016ff110
// @baa 0x016ff110
void URBMRouterPath::execGetEstimatePostSmoothPathLength(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FVector, CurrentPos);
    P_FINISH;
    *(FLOAT*)Result = GetEstimatePostSmoothPathLength(CurrentPos);
}

// @baa 0x016fdc70
// @baa 0x016fdc70
void ARBMRouter::execPointDistSqFromGoal(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FVector, TestPoint);
    P_FINISH;
    *(FLOAT*)Result = PointDistSqFromGoal(TestPoint);
}

// @baa 0x016fdcf0
// @baa 0x016fdcf0
void ARBMRouter::execGetDistanceSquaredFromPath(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FVector, TestLocation);
    P_FINISH;
    *(FLOAT*)Result = GetDistanceSquaredFromPath(TestLocation);
}
