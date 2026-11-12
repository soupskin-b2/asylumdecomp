// BmGame_16f0000.cpp: 227 functions
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
	ClearPath();
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
	BuildNodes(AC);
}

// @baa 0x016fcb80
void URSeqAct_PlayTVSequenceSingleLine::execStopMovieTexture(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UTextureMovie, NewTexture);
	P_FINISH;
	StopMovieTexture(NewTexture);
}

// @baa 0x016fce90
void URSeqAct_PlayTVSequenceBase::execStopMovieTexture(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UTextureMovie, NewTexture);
	P_FINISH;
	StopMovieTexture(NewTexture);
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
	AddNode_Actor(NewPathNode);
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
	UpdateBatmansCapeInternal(CapeComponent);
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
    *(ARPontoonBase**)Result = FindClosestPontoon(pos);
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

// @baa 0x016f6c40
void ARPawnPlayerCombat::execGetStrikeContactTime(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UAnimSequence, StrikeAnimSequence);
	P_FINISH;
	*(FLOAT*)Result = GetStrikeContactTime(StrikeAnimSequence);
}

// @baa 0x016f7c50
void ARCombatMove_BatmanStrike::execCanHitPawn(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(ARPawnCombat, TargetPawn);
	P_FINISH;
	*(UBOOL*)Result = CanHitPawn(TargetPawn);
}

// @baa 0x016f01f0
void ARPawn::execGetSniperPoint(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(MaxJumps);
	P_FINISH;
	*(AActor**)Result = (AActor*)vf_484(MaxJumps);
}

// @baa 0x016feb10
void URBMRouterPath::execIsRPathNode(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(Index);
	P_FINISH;
	*(UBOOL*)Result = vf_11c(Index);
}

// @baa 0x016feb80
void URBMRouterPath::execMustGoToNode(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(Index);
	P_FINISH;
	*(UBOOL*)Result = vf_120(Index);
}

// @baa 0x016fea20
void URBMRouterPath::execGetNodeOwner(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(Index);
	P_FINISH;
	*(AActor**)Result = (AActor*)vf_110(Index);
}

// @baa 0x016f03c0
// @baa 0x016f03c0
void ARPawnCharacter::execOverlayExists(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(OverlayName);
    P_FINISH;
    *(INT*)Result = OverlayExists(OverlayName);
}

// @baa 0x016ffad0
// @baa 0x016ffad0
void ARHidePoint::execGetFragmentSaveName(FFrame& Stack, RESULT_DECL)
{
    P_GET_INT(FragmentIndex);
    P_FINISH;
    *(FName*)Result = GetFragmentSaveName(FragmentIndex);
}

// @baa 0x016f7750
// @baa 0x016f7750
void ARCombatArea::execIsLocationInArea(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FVector, TestLocation);
    P_FINISH;
    *(UBOOL*)Result = IsLocationInArea(TestLocation);
}

// @baa 0x016f79b0
// @baa 0x016f79b0
void ARCombatMove_BatmanStrike::execGetScoreForHandedness(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FStrikeInfo, TestStrike);
    P_FINISH;
    *(INT*)Result = GetScoreForHandedness(TestStrike);
}

// @baa 0x016f7b50
// @baa 0x016f7b50
void ARCombatMove_BatmanStrike::execGetScoreForTimeSinceUse(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FStrikeInfo, TestStrike);
    P_FINISH;
    *(INT*)Result = GetScoreForTimeSinceUse(TestStrike);
}

// @baa 0x016f7bd0
// @baa 0x016f7bd0
void ARCombatMove_BatmanStrike::execGetScoreForStrikeSpeed(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FStrikeInfo, TestStrike);
    P_FINISH;
    *(INT*)Result = GetScoreForStrikeSpeed(TestStrike);
}

// @baa 0x016fd6c0
// @baa 0x016fd6c0
void ARBMRouter::execFindEndAnchor(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FVector, DestPos);
    P_FINISH;
    *(INT*)Result = FindEndAnchor(DestPos);
}

// @baa 0x016fd8a0
// @baa 0x016fd8a0
void ARBMRouter::execCanMovePartwayToPos(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FVector, TestPos);
    P_FINISH;
    *(UBOOL*)Result = CanMovePartwayToPos(TestPos);
}

// @baa 0x016f4910
void ARPawnCharacter::execGetMoveToDirection(FFrame& Stack, RESULT_DECL)
{
    P_FINISH;
    *(FVector*)Result = vf_588();
}

// @baa 0x016f5280
void ARPawnCharacter::execGetFaceAtDirection(FFrame& Stack, RESULT_DECL)
{
    P_FINISH;
    *(FVector*)Result = vf_5d4();
}

// @baa 0x016fd320
void ARBMRouter_NoPawn::execGetPos(FFrame& Stack, RESULT_DECL)
{
    P_FINISH;

    *(FVector*)Result = vf_354();
}

// @baa 0x016f6060
void ARPawnPlayerCombat::execGetHeading(FFrame& Stack, RESULT_DECL)
{
    P_FINISH;
    *(FVector*)Result = GetHeading();
}

void g_caller()
{
    ARPawnPlayerCombat Pawn;
    Pawn.execGetHeading(*(FFrame*)0, 0);
}

// @baa 0x016f52e0
void ARPawnCharacter::execGetLegDirection(FFrame& Stack, RESULT_DECL) {
    P_FINISH;
    *(FVector*)Result = GetLegDirection();
}

// @baa 0x016f4d80
void ARPawnCharacter::execGetActualAimAtDirection(FFrame& Stack, RESULT_DECL)
{
    P_FINISH;
    *(FVector*)Result = GetActualAimAtDirection();
}

// @baa 0x016f4de0
void ARPawnCharacter::execGetHeadPosition(FFrame& Stack, RESULT_DECL)
{
    P_FINISH;
    *(FVector*)Result = GetHeadPosition();
}

// @baa 0x016f4d20
void ARPawnCharacter::execGetTargetAimAtDirection(FFrame& Stack, RESULT_DECL)
{
    P_FINISH;

    *(FVector*)Result = vf_5a4();
}

extern FName g_026e2e18;
	/* DoWallExplodeAlert */
struct ARExplodableWallBase_ : public ARExplodableWallBase
{
	void eventDoWallExplodeAlert(FVector ExplosionCentre, FVector WallNormal);
};

// @baa 0x016ffc20
/* RExplodableWallBase.DoWallExplodeAlert script event: the generated glue, out of line here. */
void ARExplodableWallBase_::eventDoWallExplodeAlert(FVector ExplosionCentre, FVector WallNormal)
{
	struct RExplodableWallBase_eventDoWallExplodeAlert_Parms
	{
		FVector ExplosionCentre;
		FVector WallNormal;
	} Parms;
	Parms.ExplosionCentre = ExplosionCentre;
	Parms.WallNormal = WallNormal;
	ProcessEvent(FindFunctionChecked(g_026e2e18), &Parms);
}

extern FName g_026e35d4;
	/* GetBrickSaveRemovedState */
struct ARExplodableWallBase__016ffcc0 : public ARExplodableWallBase
{
	UBOOL eventGetBrickSaveRemovedState(class UStaticMeshComponent* brickComponent);
};

// @baa 0x016ffcc0
/* RExplodableWallBase.GetBrickSaveRemovedState script event: the generated glue, out of line here. */
UBOOL ARExplodableWallBase__016ffcc0::eventGetBrickSaveRemovedState(class UStaticMeshComponent* brickComponent)
{
	struct RExplodableWallBase_eventGetBrickSaveRemovedState_Parms
	{
		class UStaticMeshComponent* brickComponent;
		UBOOL ReturnValue;
	} Parms;
	Parms.ReturnValue = FALSE;
	Parms.brickComponent = brickComponent;
	ProcessEvent(FindFunctionChecked(g_026e35d4), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026e3638;
	/* SetBrickSaveRemovedState */
struct ARExplodableWallBase__016ffd10 : public ARExplodableWallBase
{
	void eventSetBrickSaveRemovedState(class UStaticMeshComponent* brickComponent, UBOOL Removed);
};

// @baa 0x016ffd10
/* RExplodableWallBase.SetBrickSaveRemovedState script event: the generated glue, out of line here. */
void ARExplodableWallBase__016ffd10::eventSetBrickSaveRemovedState(class UStaticMeshComponent* brickComponent, UBOOL Removed)
{
	struct RExplodableWallBase_eventSetBrickSaveRemovedState_Parms
	{
		class UStaticMeshComponent* brickComponent;
		UBOOL Removed;
	} Parms;
	Parms.brickComponent = brickComponent;
	Parms.Removed = Removed ? TRUE : FALSE;
	ProcessEvent(FindFunctionChecked(g_026e3638), &Parms);
}

// @baa 0x016f4e40
void ARPawnCharacter::execGetHeadPositionBeforeAdditive(FFrame& Stack, RESULT_DECL)
{
    P_FINISH;
    *(FVector*)Result = GetHeadPositionBeforeAdditive();
}

// @baa 0x016fd4a0
void ARBMRouter::execGetMovementDir(FFrame& Stack, RESULT_DECL)
{
    P_FINISH;
    *(FVector*)Result = GetMovementDir();
}

extern FName g_026e3ac0;
	/* ClearAmbientSoundStack */
struct ARPlayerController_ : public ARPlayerController
{
	void eventClearAmbientSoundStack();
};

// @baa 0x016fb510
/* RPlayerController.ClearAmbientSoundStack script event: the generated glue, out of line here. */
void ARPlayerController_::eventClearAmbientSoundStack()
{
	ProcessEvent(FindFunctionChecked(g_026e3ac0), NULL);
}

extern FName g_026e367c;
	/* TriggerSaveIcon */
struct ARPlayerController__016fb540 : public ARPlayerController
{
	void eventTriggerSaveIcon();
};

// @baa 0x016fb540
/* RPlayerController.TriggerSaveIcon script event: the generated glue, out of line here. */
void ARPlayerController__016fb540::eventTriggerSaveIcon()
{
	ProcessEvent(FindFunctionChecked(g_026e367c), NULL);
}

extern FName g_026e2eec;
	/* OnLoadedSaveGame */
struct ARPlayerController__016fb570 : public ARPlayerController
{
	void eventOnLoadedSaveGame();
};

// @baa 0x016fb570
/* RPlayerController.OnLoadedSaveGame script event: the generated glue, out of line here. */
void ARPlayerController__016fb570::eventOnLoadedSaveGame()
{
	ProcessEvent(FindFunctionChecked(g_026e2eec), NULL);
}

/* ARSpecialMoveInstance_LineLauncher::LineLauncherMovement (0x1642870) isn't declared in the kit. */
struct ARSpecialMoveInstance_LineLauncher__016fb780 : public ARSpecialMoveInstance_LineLauncher
{
    BYTE LineLauncherMovement(FLOAT DeltaTime, FLOAT HorizontalSpeed, FLOAT VerticalAccel, FLOAT MaxVerticalSpeed);
};

// @baa 0x016fb780
void ARSpecialMoveInstance_LineLauncher::execLineLauncherMovement(FFrame& Stack, RESULT_DECL)
{
    P_GET_FLOAT(DeltaTime);
    P_GET_FLOAT(HorizontalSpeed);
    P_GET_FLOAT(VerticalAccel);
    P_GET_FLOAT(MaxVerticalSpeed);
    P_FINISH;
    *(BYTE*)Result = ((ARSpecialMoveInstance_LineLauncher__016fb780*)this)->LineLauncherMovement(DeltaTime, HorizontalSpeed, VerticalAccel, MaxVerticalSpeed);
}

/* ARSpecialMoveInstance_LineLauncher::GetKickTarget (0x1642cd0) isn't declared in the kit. */
struct ARSpecialMoveInstance_LineLauncher__016fb970 : public ARSpecialMoveInstance_LineLauncher
{
    ARPawnVillain* GetKickTarget(FLOAT KickTime, FLOAT LeftKickTime, FLOAT RightKickTime, FLOAT MinOffsetForFwdKick, FLOAT MaxSpeed, FLOAT LineLauncherAccel, BYTE& KickDir);
};

// @baa 0x016fb970
void ARSpecialMoveInstance_LineLauncher::execGetKickTarget(FFrame& Stack, RESULT_DECL)
{
    P_GET_FLOAT(KickTime);
    P_GET_FLOAT(LeftKickTime);
    P_GET_FLOAT(RightKickTime);
    P_GET_FLOAT(MinOffsetForFwdKick);
    P_GET_FLOAT(MaxSpeed);
    P_GET_FLOAT(LineLauncherAccel);
    P_GET_BYTE_REF(KickDir);
    P_FINISH;
    *(ARPawnVillain**)Result = ((ARSpecialMoveInstance_LineLauncher__016fb970*)this)->GetKickTarget(KickTime, LeftKickTime, RightKickTime, MinOffsetForFwdKick, MaxSpeed, LineLauncherAccel, KickDir);
}

/* ARSpecialMoveInstance_CatchLedge::CorrectLedgeCatchVelocity (0x1616e90) isn't declared in the kit. */
struct ARSpecialMoveInstance_CatchLedge_ : public ARSpecialMoveInstance_CatchLedge
{
    void CorrectLedgeCatchVelocity(class APawn* Player, FVector& DesiredPosition, FLOAT Max2DAccel, FLOAT DeltaTime);
};

// @baa 0x016fbdb0
void ARSpecialMoveInstance_CatchLedge::execCorrectLedgeCatchVelocity(FFrame& Stack, RESULT_DECL)
{
    P_GET_OBJECT(APawn, Player);
    P_GET_STRUCT_REF(FVector, DesiredPosition);
    P_GET_FLOAT(Max2DAccel);
    P_GET_FLOAT(DeltaTime);
    P_FINISH;
    ((ARSpecialMoveInstance_CatchLedge_*)this)->CorrectLedgeCatchVelocity(Player, DesiredPosition, Max2DAccel, DeltaTime);
}

/* ARSpecialMoveInstance_ResonateObject::InterpThumb (0x1613630) isn't declared in the kit. */
struct ARSpecialMoveInstance_ResonateObject__016fbee0 : public ARSpecialMoveInstance_ResonateObject
{
    FLOAT InterpThumb(FLOAT DesiredPos, FLOAT CurrentPos, FLOAT DeltaTime);
};

// @baa 0x016fbee0
void ARSpecialMoveInstance_ResonateObject::execInterpThumb(FFrame& Stack, RESULT_DECL)
{
    P_GET_FLOAT(DesiredPos);
    P_GET_FLOAT(CurrentPos);
    P_GET_FLOAT(DeltaTime);
    P_FINISH;
    *(FLOAT*)Result = ((ARSpecialMoveInstance_ResonateObject__016fbee0*)this)->InterpThumb(DesiredPos, CurrentPos, DeltaTime);
}

/* ARSpecialMoveInstance_ResonateObject::GetLeftAndRightAngles (0x1613590) isn't declared in the kit. */
struct ARSpecialMoveInstance_ResonateObject__016fbfe0 : public ARSpecialMoveInstance_ResonateObject
{
    void GetLeftAndRightAngles(FLOAT& LeftAngle, FLOAT& RightAngle, FLOAT RawLeftX, FLOAT RawLeftY, FLOAT RawRightX, FLOAT RawRightY);
};

// @baa 0x016fbfe0
void ARSpecialMoveInstance_ResonateObject::execGetLeftAndRightAngles(FFrame& Stack, RESULT_DECL)
{
    P_GET_FLOAT_REF(LeftAngle);
    P_GET_FLOAT_REF(RightAngle);
    P_GET_FLOAT(RawLeftX);
    P_GET_FLOAT(RawLeftY);
    P_GET_FLOAT(RawRightX);
    P_GET_FLOAT(RawRightY);
    P_FINISH;
    ((ARSpecialMoveInstance_ResonateObject__016fbfe0*)this)->GetLeftAndRightAngles(LeftAngle, RightAngle, RawLeftX, RawLeftY, RawRightX, RawRightY);
}

/* ARSpecialMoveInstance_ResonateObject::UpdatePCResonatorPos (0x1613720) isn't declared in the kit. */
struct ARSpecialMoveInstance_ResonateObject__016fc160 : public ARSpecialMoveInstance_ResonateObject
{
    void UpdatePCResonatorPos(class URPlayerInput* Input, FLOAT DeltaTime, FLOAT TurnSpeed, FLOAT Accel, FLOAT Decel);
};

// @baa 0x016fc160
void ARSpecialMoveInstance_ResonateObject::execUpdatePCResonatorPos(FFrame& Stack, RESULT_DECL)
{
    P_GET_OBJECT(URPlayerInput, Input);
    P_GET_FLOAT(DeltaTime);
    P_GET_FLOAT(TurnSpeed);
    P_GET_FLOAT(Accel);
    P_GET_FLOAT(Decel);
    P_FINISH;
    ((ARSpecialMoveInstance_ResonateObject__016fc160*)this)->UpdatePCResonatorPos(Input, DeltaTime, TurnSpeed, Accel, Decel);
}

/* ARSpecialMoveInstance_SwingToVantagePoint::SetupTrajectory (0x1616a70) isn't declared in the kit. */
struct ARSpecialMoveInstance_SwingToVantagePoint_ : public ARSpecialMoveInstance_SwingToVantagePoint
{
    void SetupTrajectory(FVector StartLocation, FVector EndLocation, FLOAT DefaultDistance, FLOAT DefaultRadius, FLOAT AnimationDuration);
};

// @baa 0x016fc2c0
void ARSpecialMoveInstance_SwingToVantagePoint::execSetupTrajectory(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FVector, StartLocation);
    P_GET_STRUCT(FVector, EndLocation);
    P_GET_FLOAT(DefaultDistance);
    P_GET_FLOAT(DefaultRadius);
    P_GET_FLOAT(AnimationDuration);
    P_FINISH;
    ((ARSpecialMoveInstance_SwingToVantagePoint_*)this)->SetupTrajectory(StartLocation, EndLocation, DefaultDistance, DefaultRadius, AnimationDuration);
}

/* ARSpecialMoveInstance_SwingToVantagePoint::UpdateTrajectory (0x1616d50) isn't declared in the kit. */
struct ARSpecialMoveInstance_SwingToVantagePoint__016fc400 : public ARSpecialMoveInstance_SwingToVantagePoint
{
    FLOAT UpdateTrajectory(FLOAT DeltaTime, FVector& Position);
};

// @baa 0x016fc400
void ARSpecialMoveInstance_SwingToVantagePoint::execUpdateTrajectory(FFrame& Stack, RESULT_DECL)
{
    P_GET_FLOAT(DeltaTime);
    P_GET_STRUCT_REF(FVector, Position);
    P_FINISH;
    *(FLOAT*)Result = ((ARSpecialMoveInstance_SwingToVantagePoint__016fc400*)this)->UpdateTrajectory(DeltaTime, Position);
}

/* URPlayerInput::FastPlayerInput (0x1635210) isn't declared in the kit. */
struct URPlayerInput_ : public URPlayerInput
{
    void FastPlayerInput(FLOAT DeltaTime, UBOOL bMoveInputIgnored, UBOOL bLookInputIgnored);
};

// @baa 0x016fc620
void URPlayerInput::execFastPlayerInput(FFrame& Stack, RESULT_DECL)
{
    P_GET_FLOAT(DeltaTime);
    P_GET_UBOOL(bMoveInputIgnored);
    P_GET_UBOOL(bLookInputIgnored);
    P_FINISH;
    ((URPlayerInput_*)this)->FastPlayerInput(DeltaTime, bMoveInputIgnored, bLookInputIgnored);
}

extern FName g_026e25bc;
	/* PlayExplosionSound */
struct ARExplodableWallBase__016ffc90 : public ARExplodableWallBase
{
	void eventPlayExplosionSound();
};

// @baa 0x016ffc90
/* RExplodableWallBase.PlayExplosionSound script event: the generated glue, out of line here. */
void ARExplodableWallBase__016ffc90::eventPlayExplosionSound()
{
	ProcessEvent(FindFunctionChecked(g_026e25bc), NULL);
}

/* ARPawnCharacter::CombineWeaponConfigs (0x167bbf0) isn't declared in the kit. */
struct ARPawnCharacter_ : public ARPawnCharacter
{
    URWeaponConfig* CombineWeaponConfigs(class URWeaponConfig* Config1, class URWeaponConfig* Config2, class URWeaponConfig* Config3, class URWeaponConfig* Config4, class URWeaponConfig* Config5, class URWeaponConfig* Config6, class URWeaponConfig* Config7, class URWeaponConfig* Config8, class URWeaponConfig* Config9, class URWeaponConfig* Config10, class URWeaponConfig* Config11, class URWeaponConfig* Config12);
};

// @baa 0x016f57c0
void ARPawnCharacter::execCombineWeaponConfigs(FFrame& Stack, RESULT_DECL)
{
    P_GET_OBJECT(URWeaponConfig, Config1);
    P_GET_OBJECT(URWeaponConfig, Config2);
    P_GET_OBJECT_OPTX(URWeaponConfig, Config3, NULL);
    P_GET_OBJECT_OPTX(URWeaponConfig, Config4, NULL);
    P_GET_OBJECT_OPTX(URWeaponConfig, Config5, NULL);
    P_GET_OBJECT_OPTX(URWeaponConfig, Config6, NULL);
    P_GET_OBJECT_OPTX(URWeaponConfig, Config7, NULL);
    P_GET_OBJECT_OPTX(URWeaponConfig, Config8, NULL);
    P_GET_OBJECT_OPTX(URWeaponConfig, Config9, NULL);
    P_GET_OBJECT_OPTX(URWeaponConfig, Config10, NULL);
    P_GET_OBJECT_OPTX(URWeaponConfig, Config11, NULL);
    P_GET_OBJECT_OPTX(URWeaponConfig, Config12, NULL);
    P_FINISH;
    *(URWeaponConfig**)Result = ((ARPawnCharacter_*)this)->CombineWeaponConfigs(Config1, Config2, Config3, Config4, Config5, Config6, Config7, Config8, Config9, Config10, Config11, Config12);
}

// @baa 0x016f4190
void ARPawnCharacter::execPlayCustomWeaponOverlay(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FCustomAnimConfig, OverrideAnim);
    P_GET_FLOAT_OPTX(StartTime, 0.0f);
    P_FINISH;
    *(FOverlayId*)Result = PlayCustomWeaponOverlay(OverrideAnim, StartTime);
}

// @baa 0x016f4310
void ARPawnCharacter::execPlayCustomMovementOverlay(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FCustomAnimConfig, OverrideAnim);
    P_GET_FLOAT_OPTX(StartTime, 0.0f);
    P_FINISH;
    *(FOverlayId*)Result = PlayCustomMovementOverlay(OverrideAnim, StartTime);
}

// @baa 0x016f4490
void ARPawnCharacter::execPlayCustomIdleOverlay(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FCustomAnimConfig, OverrideAnim);
    P_GET_FLOAT_OPTX(StartTime, 0.0f);
    P_FINISH;
    *(FOverlayId*)Result = PlayCustomIdleOverlay(OverrideAnim, StartTime);
}

// @baa 0x016fe990
void URBMRouterPath::execGetNodePos(FFrame& Stack, RESULT_DECL)
{
    P_GET_INT(Index);
    P_FINISH;
    *(FVector*)Result = GetNodePos(Index);
}

// @baa 0x016f0560
void ARPawnCharacter::execChangeMovementStance(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(Stance);
    P_FINISH;
    *(FTransitionId*)Result = ChangeMovementStance(Stance);
}

// @baa 0x016f06a0
void ARPawnCharacter::execChangeWeaponStance(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(Stance);
    P_FINISH;
    *(FTransitionId*)Result = ChangeWeaponStance(Stance);
}

// @baa 0x016f07e0
void ARPawnCharacter::execChangeIdleStance(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(Stance);
    P_FINISH;
    *(FTransitionId*)Result = ChangeIdleStance(Stance);
}

// @baa 0x016fc700
void ARAmbientSoundTrackingVolume::execGetClosestPosition(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FVector, V);
    P_FINISH;
    *(FVector*)Result = GetClosestPosition(V);
}

// @baa 0x016f7a30
void ARCombatMove_BatmanStrike::execGetScoreForStrikeRange(FFrame& Stack, RESULT_DECL)
{
    P_GET_BYTE(TestRange);
    P_GET_BYTE(DesRange);
    P_FINISH;
    *(INT*)Result = GetScoreForStrikeRange(TestRange, DesRange);
}

// @baa 0x016f7ac0
void ARCombatMove_BatmanStrike::execGetScoreForStrikeDir(FFrame& Stack, RESULT_DECL)
{
    P_GET_BYTE(TestDir);
    P_GET_BYTE(DesDir);
    P_FINISH;
    *(INT*)Result = GetScoreForStrikeDir(TestDir, DesDir);
}

// @baa 0x016ff000
void URBMRouterPath::execInsertNode_Actor(FFrame& Stack, RESULT_DECL)
{
    P_GET_OBJECT(AActor, NewPathNode);
    P_GET_INT(Index);
    P_FINISH;
    InsertNode_Actor(NewPathNode, Index);
}

// @baa 0x016f3d70
void ARPawnCharacter::execIsInTransition(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FTransitionId, Id);
    P_GET_BYTE_OPTX(Fuzziness, FUZZ_Exact);
    P_FINISH;
    *(UBOOL*)Result = IsInTransition(Id, Fuzziness);
}

// @baa 0x016f3ee0
void ARPawnCharacter::execGetTimeThroughTransition(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FTransitionId, Id);
    P_GET_BYTE_OPTX(Fuzziness, FUZZ_Exact);
    P_FINISH;
    *(FLOAT*)Result = GetTimeThroughTransition(Id, Fuzziness);
}

// @baa 0x016f6420
void ARBMPawnAI::execConstructFootstepSFX(FFrame& Stack, RESULT_DECL)
{
    P_GET_OBJECT(URFMODSound, bank);
    P_GET_OBJECT(USoundCue, InSoundCue);
    P_FINISH;
    *(USoundCue**)Result = ConstructFootstepSFX(bank, InSoundCue);
}

// @baa 0x016f6970
void ARPawnPlayerCombat::execIsValidTargetForStrike_Cheap(FFrame& Stack, RESULT_DECL)
{
    P_GET_OBJECT(ARPawnCombat, TestPawn);
    P_GET_OBJECT(UClass, DamageType);
    P_FINISH;
    *(UBOOL*)Result = IsValidTargetForStrike_Cheap(TestPawn, DamageType);
}

// @baa 0x016f6a10
void ARPawnPlayerCombat::execIsValidTargetForStrike_Expensive(FFrame& Stack, RESULT_DECL)
{
    P_GET_OBJECT(ARPawnCombat, TestPawn);
    P_GET_OBJECT(UClass, DamageType);
    P_FINISH;
    *(UBOOL*)Result = IsValidTargetForStrike_Expensive(TestPawn, DamageType);
}

// @baa 0x016fd740
void ARBMRouter::execCanMoveBetweenAnchors(FFrame& Stack, RESULT_DECL)
{
    P_GET_OBJECT(ANavigationPoint, StartPoint);
    P_GET_OBJECT(ANavigationPoint, EndPoint);
    P_FINISH;
    *(UBOOL*)Result = CanMoveBetweenAnchors(StartPoint, EndPoint);
}

// @baa 0x016fb5e0
void ARPlayerControllerCombat::execFindStrikeTarget(FFrame& Stack, RESULT_DECL)
{
    P_GET_OBJECT_OPTX(UClass, dmgType, URDamageType::StaticClass());
    P_FINISH;
    *(ARPawnCombat**)Result = FindStrikeTarget(dmgType);
}

// @baa 0x016fca50
void ARAudioPoint::execResyncChapter7(FFrame& Stack, RESULT_DECL)
{
    P_GET_OBJECT(ARGameInfo, RGI);
    P_GET_UBOOL(bSet);
    P_FINISH;
    ResyncChapter7(RGI, bSet);
}

// @baa 0x016f5e10
void ARPawnCombat::execAngleDiff(FFrame& Stack, RESULT_DECL)
{
    P_GET_FLOAT(Angle1);
    P_GET_FLOAT(Angle2);
    P_FINISH;
    *(FLOAT*)Result = AngleDiff(Angle1, Angle2);
}

// @baa 0x016fdfb0
void ARBMRouteRequest_BuildComparisonList::execSetIndexedGoalList(FFrame& Stack, RESULT_DECL)
{
    P_GET_OBJECT(UComparisonListSharedDataCache, NewSharedData);
    P_GET_STRUCT(FVector, StartLoc);
    P_FINISH;
    SetIndexedGoalList(NewSharedData, StartLoc);
}

// @baa 0x016fef60
void URBMRouterPath::execInsertNode_Pos(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FVector, NewPathNode);
    P_GET_INT(Index);
    P_FINISH;
    InsertNode_Pos(NewPathNode, Index);
}

// @baa 0x016ff190
void URBMRouterPath::execGetDistanceSquaredFromPath(FFrame& Stack, RESULT_DECL)
{
    P_GET_OBJECT(ARPawn, User);
    P_GET_STRUCT(FVector, TestLocation);
    P_FINISH;
    *(FLOAT*)Result = GetDistanceSquaredFromPath(User, TestLocation);
}

// @baa 0x016f08f0
void ARPawnCharacter::execIsInPose(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(MovementStance);
    P_GET_NAME(WeaponStance);
    P_FINISH;
    *(UBOOL*)Result = IsInPose(MovementStance, WeaponStance);
}

// @baa 0x016f39b0
void ARPawnCharacter::execOverrideTransitionTime(FFrame& Stack, RESULT_DECL)
{
    P_GET_FLOAT(Time);
    P_GET_INT_OPTX(DisableTimeAdvanceForNumFrames, 1);
    P_FINISH;
    OverrideTransitionTime(Time, DisableTimeAdvanceForNumFrames);
}

// @baa 0x016f46f0
void ARPawnCharacter::execSetMovementSpeed(FFrame& Stack, RESULT_DECL)
{
    P_GET_BYTE(NewSpeed);
    P_GET_FLOAT_OPTX(NewSpeedScale, 1.0f);
    P_FINISH;
    SetMovementSpeed(NewSpeed, NewSpeedScale);
}

// @baa 0x016f4fa0
void ARPawnCharacter::execLookAtActor(FFrame& Stack, RESULT_DECL)
{
    P_GET_OBJECT(AActor, Actor);
    P_GET_NAME_OPTX(ActorBoneName, NAME_None);
    P_FINISH;
    LookAtActor(Actor, ActorBoneName);
}

// @baa 0x016f5190
void ARPawnCharacter::execFaceAtActor(FFrame& Stack, RESULT_DECL)
{
    P_GET_OBJECT(AActor, Actor);
    P_GET_NAME_OPTX(ActorBoneName, NAME_None);
    P_FINISH;
    FaceAtActor(Actor, ActorBoneName);
}

// @baa 0x016ff2c0
void ARHarpoonDragFloatingPlatformBase::execMoveObject(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FVector, Direction);
    P_GET_FLOAT(DeltaTime);
    P_FINISH;
    *(BYTE*)Result = MoveObject(Direction, DeltaTime);
}

// @baa 0x016ff380
void ARHarpoonDragTrack::execMoveObject(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FVector, Direction);
    P_GET_FLOAT(DeltaTime);
    P_FINISH;
    *(UBOOL*)Result = MoveObject(Direction, DeltaTime);
}

// @baa 0x016f05f0
void ARPawnCharacter::execIsInMovementStance(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(Stance);
    P_GET_BYTE_OPTX(Fuzziness, FUZZ_Exact);
    P_FINISH;
    *(UBOOL*)Result = IsInMovementStance(Stance, Fuzziness);
}

// @baa 0x016f0730
void ARPawnCharacter::execIsInWeaponStance(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(Stance);
    P_GET_BYTE_OPTX(Fuzziness, FUZZ_Exact);
    P_FINISH;
    *(UBOOL*)Result = IsInWeaponStance(Stance, Fuzziness);
}

// @baa 0x016f0140
void ARPawn::execGetRoamPoint(FFrame& Stack, RESULT_DECL)
{
    P_GET_INT(ApproxRoamJumps);
    P_GET_OBJECT_REF(ANavigationPoint, StartAnchor);
    P_FINISH;
    *(AActor**)Result = GetRoamPoint(ApproxRoamJumps, StartAnchor);
}

// @baa 0x016fda00
void ARBMRouter::execSmoothPathBothEnds(FFrame& Stack, RESULT_DECL)
{
    P_GET_OBJECT(ARPawn, User);
    P_GET_OBJECT_REF(URBMRouterPath, aPath);
    P_FINISH;
    *(INT*)Result = SmoothPathBothEnds(User, aPath);
}

// @baa 0x016fe4d0
void ARCornerPoint::execGetCornerFor(FFrame& Stack, RESULT_DECL)
{
    P_GET_OBJECT(ARCornerWallMarker, StartWall);
    P_GET_OBJECT(ARCornerWallMarker, DestWall);
    P_FINISH;
    *(FVector*)Result = GetCornerFor(StartWall, DestWall);
}

// @baa 0x016fd380
void ARBMRouter_DynamicObject::execUpdateRouterObject_Searching(FFrame& Stack, RESULT_DECL)
{
    P_GET_FLOAT(DeltaTime);
    P_GET_INT_REF(UpdatesLeft);
    P_FINISH;
    *(UBOOL*)Result = UpdateRouterObject_Searching(DeltaTime, UpdatesLeft);
}

// @baa 0x016fd7e0
void ARBMRouter::execCanMoveDirectlyToPos(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FVector, TestPos);
    P_GET_UBOOL(bKnowVisible);
    P_FINISH;
    *(UBOOL*)Result = CanMoveDirectlyToPos(TestPos, bKnowVisible);
}

// @baa 0x016fe0b0
void ARBMRouteRequest_FindSinglePath::execSetGoal(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FVector, TargetPos);
    P_GET_UBOOL_OPTX(bAutoFixPos, FALSE);
    P_FINISH;
    SetGoal(TargetPos, bAutoFixPos);
}

// @baa 0x016fcc60
void URSeqAct_ConversationDialogue::execLookAtTagOnLine(FFrame& Stack, RESULT_DECL)
{
    P_GET_OBJECT(ARPawnCharacter, Looker);
    P_GET_NAME(CharName);
    P_GET_OBJECT(USoundCue, SpeechToPlay);
    P_FINISH;
    *(UBOOL*)Result = LookAtTagOnLine(Looker, CharName, SpeechToPlay);
}

// @baa 0x016fd500
void ARBMRouter::execGetDivergeVector(FFrame& Stack, RESULT_DECL)
{
    P_GET_FLOAT_REF(DivergeWeight);
    P_GET_UBOOL(bIgnoreCasualties);
    P_FINISH;
    *(FVector*)Result = GetDivergeVector(DivergeWeight, bIgnoreCasualties);
}

// @baa 0x016f3a50
void ARPawnCharacter::execHasPose(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(MovementStance);
    P_GET_NAME(WeaponStance);
    P_GET_NAME(IdleStance);
    P_FINISH;
    *(UBOOL*)Result = HasPose(MovementStance, WeaponStance, IdleStance);
}

// @baa 0x016fd920
void ARBMRouter::execBuildPathTo(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FVector, Dest);
    P_GET_OBJECT_OPTX(ANavigationPoint, StartAnchor, NULL);
    P_GET_OBJECT_OPTX(ANavigationPoint, EndAnchor, NULL);
    P_FINISH;
    *(URBMRouterPath**)Result = BuildPathTo(Dest, StartAnchor, EndAnchor);
}

// @baa 0x016f40d0
void ARPawnCharacter::execPlayWeaponOverlay(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(OverlayName);
    P_GET_FLOAT_OPTX(StartTime, 0.0f);
    P_FINISH;
    *(FOverlayId*)Result = PlayWeaponOverlay(OverlayName, StartTime);
}

// @baa 0x016f4250
void ARPawnCharacter::execPlayMovementOverlay(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(OverlayName);
    P_GET_FLOAT_OPTX(StartTime, 0.0f);
    P_FINISH;
    *(FOverlayId*)Result = PlayMovementOverlay(OverlayName, StartTime);
}

// @baa 0x016f43d0
void ARPawnCharacter::execPlayIdleOverlay(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(OverlayName);
    P_GET_FLOAT_OPTX(StartTime, 0.0f);
    P_FINISH;
    *(FOverlayId*)Result = PlayIdleOverlay(OverlayName, StartTime);
}

// @baa 0x016f3e10
void ARPawnCharacter::execWillBeInTransition(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FTransitionId, Id);
    P_GET_FLOAT(DeltaSeconds);
    P_GET_BYTE_OPTX(Fuzziness, FUZZ_Exact);
    P_FINISH;
    *(UBOOL*)Result = WillBeInTransition(Id, DeltaSeconds, Fuzziness);
}

// @baa 0x016f37b0
void ARPawnCharacter::execChangeWeapon(FFrame& Stack, RESULT_DECL)
{
    P_GET_OBJECT(AInventory, NewWeapon);
    P_GET_OBJECT(AInventory, NewTransitionWeapon);
    P_GET_UBOOL_OPTX(bForce, FALSE);
    P_FINISH;
    *(FTransitionId*)Result = ChangeWeapon(NewWeapon, NewTransitionWeapon, bForce);
}

// @baa 0x016fe690
void ARCornerWallMarkerBase::execGetBatmanCornerPositionAndRotation(FFrame& Stack, RESULT_DECL)
{
    P_GET_FLOAT(CollisionRadius);
    P_GET_STRUCT_REF(FVector, BatmanPosition);
    P_GET_STRUCT_REF(FRotator, BatmanCoverRotation);
    P_FINISH;
    GetBatmanCornerPositionAndRotation(CollisionRadius, BatmanPosition, BatmanCoverRotation);
}

// @baa 0x016f7d60
void ARCombatMove_BatmanCounter::execGetCounterInfoScore(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FCounterInfo, TestCounter);
    P_GET_BYTE(MoveDir);
    P_GET_BYTE(Limb);
    P_GET_BYTE(TestStrength);
    P_FINISH;
    *(FLOAT*)Result = GetCounterInfoScore(TestCounter, MoveDir, Limb, TestStrength);
}

// @baa 0x016f4970
void ARPawnCharacter::execAimAt(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FVector, Position);
    P_GET_NAME_OPTX(Description, NAME_None);
    P_GET_BYTE_OPTX(AllowTurningToAim, 0);
    P_FINISH;
    AimAt(Position, Description, AllowTurningToAim);
}

// @baa 0x016f4a60
void ARPawnCharacter::execAimInDirection(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FVector, Direction);
    P_GET_NAME_OPTX(Description, NAME_None);
    P_GET_BYTE_OPTX(AllowTurningToAim, 0);
    P_FINISH;
    AimInDirection(Direction, Description, AllowTurningToAim);
}

// @baa 0x016f4b50
void ARPawnCharacter::execAimAtActor(FFrame& Stack, RESULT_DECL)
{
    P_GET_OBJECT(AActor, Actor);
    P_GET_NAME_OPTX(Description, NAME_None);
    P_GET_NAME_OPTX(ActorBoneName, NAME_None);
    P_GET_BYTE_OPTX(AllowTurningToAim, 0);
    P_FINISH;
    AimAtActor(Actor, Description, ActorBoneName, AllowTurningToAim);
}

// @baa 0x016f7880
void ARCombatMove_BatmanStrike::execGetStrikeInfoScore(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FStrikeInfo, TestStrike);
    P_GET_BYTE(StrikeDir);
    P_GET_BYTE(StrikeStrength);
    P_GET_BYTE(StrikeRange);
    P_GET_UBOOL(bCanTravelBeyondTarget);
    P_FINISH;
    *(INT*)Result = GetStrikeInfoScore(TestStrike, StrikeDir, StrikeStrength, StrikeRange, bCanTravelBeyondTarget);
}

// @baa 0x016f7cf0
void ARCombatMove_BatmanCounter::execSetCounterInfo(FFrame& Stack, RESULT_DECL)
{
    P_GET_BYTE(CStrength);
    P_FINISH;
    *(UBOOL*)Result = SetCounterInfo(CStrength);
}

// @baa 0x016fd5e0
void ARBMRouter::execGetPawnAvoidVector(FFrame& Stack, RESULT_DECL)
{
    P_GET_FLOAT_REF(AvoidWeight);
    P_FINISH;
    *(FVector*)Result = GetPawnAvoidVector(AvoidWeight);
}

// @baa 0x016f3890
void ARPawnCharacter::execChangePoseOverTime(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(MovementStance);
    P_GET_NAME(WeaponStance);
    P_GET_FLOAT(Time);
    P_GET_UBOOL_OPTX(bMirrored, FALSE);
    P_FINISH;
    *(FTransitionId*)Result = ChangePoseOverTime(MovementStance, WeaponStance, Time, bMirrored);
}

// @baa 0x016f5b30
void ARPawnCombat::execGetForceToGiveToPawn(FFrame& Stack, RESULT_DECL)
{
    P_GET_OBJECT(ARPawnCombat, Receiver);
    P_GET_FLOAT(MaxForce);
    P_GET_FLOAT_OPTX(MinRange, -1.0f);
    P_GET_FLOAT_OPTX(MaxRange, -1.0f);
    P_FINISH;
    *(FVector*)Result = GetForceToGiveToPawn(Receiver, MaxForce, MinRange, MaxRange);
}

// @baa 0x016f5c60
void ARPawnCombat::execGetRadialForce(FFrame& Stack, RESULT_DECL)
{
    P_GET_OBJECT(ARPawnCombat, Receiver);
    P_GET_FLOAT(MaxForce);
    P_GET_FLOAT_OPTX(MinRange, -1.0f);
    P_GET_FLOAT_OPTX(MaxRange, -1.0f);
    P_FINISH;
    *(FVector*)Result = GetRadialForce(Receiver, MaxForce, MinRange, MaxRange);
}

// @baa 0x016fecd0
void URBMRouterPath::execUpdatePath(FFrame& Stack, RESULT_DECL)
{
    P_GET_OBJECT(ARPawn, User);
    P_GET_INT_REF(bPathShortened);
    P_GET_UBOOL_OPTX(bSkipAngleCheck, FALSE);
    P_GET_UBOOL_OPTX(bForceShorten, FALSE);
    P_GET_UBOOL_OPTX(bUpdateEstimateStartAnchor, FALSE);
    P_FINISH;
    UpdatePath(User, bPathShortened, bSkipAngleCheck, bForceShorten, bUpdateEstimateStartAnchor);
}

// @baa 0x016fcd30
void URSeqAct_ConversationDialogue::execGetSpeaker(FFrame& Stack, RESULT_DECL)
{
    P_GET_OBJECT(APlayerController, PC);
    P_GET_NAME(ScriptName);
    P_FINISH;
    *(ARPawnCharacter**)Result = GetSpeaker(PC, ScriptName);
}

/* Kit gap: ARPawnPlayer's native ForceUnCrouch and the unnamed sub_01688660 it wraps aren't declared (the name comes from the class's native table). */
struct ARPawnPlayer_ : public ARPawnPlayer
{
    void execForceUnCrouch(FFrame& Stack, RESULT_DECL);
    void sub_01688660(); /* 0x01688660 */
};

// @baa 0x016f6db0
void ARPawnPlayer_::execForceUnCrouch(FFrame& Stack, RESULT_DECL)
{
    P_FINISH;
    sub_01688660();
}

/* Kit gap: ARPawnPlayer's native UpdateGrateExcluder and the unnamed sub_0169bc40 it wraps aren't declared (the name comes from the class's native table). */
struct ARPawnPlayer__016f6de0 : public ARPawnPlayer
{
    void execUpdateGrateExcluder(FFrame& Stack, RESULT_DECL);
    void sub_0169bc40(); /* 0x0169bc40 */
};

// @baa 0x016f6de0
void ARPawnPlayer__016f6de0::execUpdateGrateExcluder(FFrame& Stack, RESULT_DECL)
{
    P_FINISH;
    sub_0169bc40();
}

/* Kit gap: ARPawnPlayer's native ClearOverridableTransition aren't declared (the name comes from the class's native table). */
struct ARPawnPlayer__016f6e10 : public ARPawnPlayer
{
    void execClearOverridableTransition(FFrame& Stack, RESULT_DECL);
};

// @baa 0x016f6e10
void ARPawnPlayer__016f6e10::execClearOverridableTransition(FFrame& Stack, RESULT_DECL)
{
    P_FINISH;
    sub_0168d8b0();
}

/* Kit gap: Script.h lacks UE3's P_GET_STRUCT_OPTX (UnScript.h); the struct constructors (UnMath.h) build the defaults. */
#define P_GET_STRUCT_OPTX(t, v, d) t v; GRuntimeUCFlags &= ~RUC_SkippedOptionalParm; Stack.Step(Stack.Object, &v); if (GRuntimeUCFlags & RUC_SkippedOptionalParm) v = d;
struct FVector_ : public FVector
{
	FVector_(FLOAT InX, FLOAT InY, FLOAT InZ) { X = InX; Y = InY; Z = InZ; }
};

// @baa 0x016f6ab0
void ARPawnPlayerCombat::execFindFacingActorForStrike(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT_OPTX(MaxDist, -1.f);
	P_GET_FLOAT_OPTX(MaxVenomDist, -1.f);
	P_GET_STRUCT_OPTX(FVector, FacingDir, FVector_(0.f, 0.f, 0.f));
	P_GET_OBJECT_OPTX(UClass, dmgType, URDamageType::StaticClass());
	P_FINISH;
	*(class AActor**)Result = FindFacingActorForStrike(MaxDist, MaxVenomDist, FacingDir, dmgType);
}

/* FEnvironmentSpecialMoveLocator's constructor (struct cpptext: it clears Type, AnimDir and ActorInstance); the kit's mirror has none. */
struct FEnvironmentSpecialMoveLocator_ : public FEnvironmentSpecialMoveLocator
{
	FEnvironmentSpecialMoveLocator_() { Type = 0; AnimDir = 0; ActorInstance = NULL; }
};

/* Kit gaps: ShouldIDoLandAnim (016422e0) isn't declared (names from the exe's native table). */
struct ARSpecialMoveInstance_LineLauncher__016fb880 : public ARSpecialMoveInstance_LineLauncher
{
	BYTE ShouldIDoLandAnim(FEnvironmentSpecialMoveLocator& Locator, FLOAT MinLandHeight, FLOAT MaxLandHeight);	/* 0x016422e0 */
};

// @baa 0x016fb880
void ARSpecialMoveInstance_LineLauncher::execShouldIDoLandAnim(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT_REF(FEnvironmentSpecialMoveLocator_, Locator);
	P_GET_FLOAT(MinLandHeight);
	P_GET_FLOAT(MaxLandHeight);
	P_FINISH;
	*(BYTE*)Result = ((ARSpecialMoveInstance_LineLauncher__016fb880*)this)->ShouldIDoLandAnim(Locator, MinLandHeight, MaxLandHeight);
}

// @baa 0x016f3c20
void ARPawnCharacter::execIsInAnyAutomaticTransition(FFrame& Stack, RESULT_DECL)
{
	P_GET_BYTE_OPTX(Fuzziness, FUZZ_Exact);
	/* Optional out struct: the kit's P_GET_STRUCT_OPTX_REF leaves out the skipped-parameter handling, written here. */
	GRuntimeUCFlags &= ~RUC_SkippedOptionalParm;
	P_GET_STRUCT_OPTX_REF(FTransitionId, Transition);
	if (GRuntimeUCFlags & RUC_SkippedOptionalParm)
	{
		Transition.Id = 0;
	}
	P_FINISH;
	*(UBOOL*)Result = IsInAnyAutomaticTransition(Fuzziness, pTransition ? &Transition : NULL);
}
