// BmGame_1700000.cpp: 76 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

struct ARGrapplePoint_ : public ARGrapplePoint
{
	void RegisterGrapplePoint();
	void execRegisterGrapplePoint(FFrame& Stack, RESULT_DECL);
};

// @baa 0x017011c0
void ARGrapplePoint_::execRegisterGrapplePoint( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	RegisterGrapplePoint();
}

struct ARShimmyEdgeMarker_ : public ARShimmyEdgeMarker
{
	void SetupEndPoints();
	void execSetupEndPoints(FFrame& Stack, RESULT_DECL);
};

// @baa 0x01701220
void ARShimmyEdgeMarker_::execSetupEndPoints( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	SetupEndPoints();
}

struct ARShimmyEdgeMarker__01701250 : public ARShimmyEdgeMarker
{
	void RegisterShimmyEdgeMarker();
	void execRegisterShimmyEdgeMarker(FFrame& Stack, RESULT_DECL);
};

// @baa 0x01701250
void ARShimmyEdgeMarker__01701250::execRegisterShimmyEdgeMarker( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	RegisterShimmyEdgeMarker();
}

struct URCapeRenderingComponent_ : public URCapeRenderingComponent
{
	void HandleDebugLineDrawing();
	void execHandleDebugLineDrawing(FFrame& Stack, RESULT_DECL);
};

// @baa 0x01702eb0
void URCapeRenderingComponent_::execHandleDebugLineDrawing( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	HandleDebugLineDrawing();
}

struct ARBMWeaponStunStickBase_ : public ARBMWeaponStunStickBase
{
	UBOOL IsOn();
	void execIsOn(FFrame& Stack, RESULT_DECL);
};

// @baa 0x01703d10
void ARBMWeaponStunStickBase_::execIsOn( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(UBOOL*)Result = IsOn();
}

struct ARGrappleGun_ : public ARGrappleGun
{
	void DrawGrapplePointDebug();
	void execDrawGrapplePointDebug(FFrame& Stack, RESULT_DECL);
};

// @baa 0x01707740
void ARGrappleGun_::execDrawGrapplePointDebug( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	DrawGrapplePointDebug();
}

struct ARGrappleGun__01707770 : public ARGrappleGun
{
	void FindEscapeVantagePoint();
	void execFindEscapeVantagePoint(FFrame& Stack, RESULT_DECL);
};

// @baa 0x01707770
void ARGrappleGun__01707770::execFindEscapeVantagePoint( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	FindEscapeVantagePoint();
}

struct ARGrappleGun__017077a0 : public ARGrappleGun
{
	INT GetNumAvailableGrapplePoints();
	void execGetNumAvailableGrapplePoints(FFrame& Stack, RESULT_DECL);
};

// @baa 0x017077a0
void ARGrappleGun__017077a0::execGetNumAvailableGrapplePoints( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(INT*)Result = GetNumAvailableGrapplePoints();
}

struct ARHarpoonGun_ : public ARHarpoonGun
{
	void HarpoonFired();
	void execHarpoonFired(FFrame& Stack, RESULT_DECL);
};

// @baa 0x017077e0
void ARHarpoonGun_::execHarpoonFired( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	HarpoonFired();
}

struct ARBatarangProjectile_ : public ARBatarangProjectile
{
	void StartedFlightPath();
	void execStartedFlightPath(FFrame& Stack, RESULT_DECL);
};

// @baa 0x01708160
void ARBatarangProjectile_::execStartedFlightPath( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	StartedFlightPath();
}

struct ARBatarangProjectile_Controllable_ : public ARBatarangProjectile_Controllable
{
	void ExtraHitCheck();
	void execExtraHitCheck(FFrame& Stack, RESULT_DECL);
};

// @baa 0x01708200
void ARBatarangProjectile_Controllable_::execExtraHitCheck( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	ExtraHitCheck();
}

struct ARSilentPredatorCamera_ : public ARSilentPredatorCamera
{
	UBOOL OutOfPredatorView();
	void execOutOfPredatorView(FFrame& Stack, RESULT_DECL);
};

// @baa 0x0170a3a0
void ARSilentPredatorCamera_::execOutOfPredatorView( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(UBOOL*)Result = OutOfPredatorView();
}

// @baa 0x017014f0
void ARWindVolume::execUpdateEditorComponents(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	vf_364();
}

// @baa 0x017037c0
void ARBMAIController::execStanceStackUpdated(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	vf_430();
}

// @baa 0x017039c0
void ARBMAIController::execDoFaceFXForFear(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	vf_444();
}

// @baa 0x01703b20
void ARBMAIController::execUpdatePathNodeSeenTimes(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	vf_454();
}

// @baa 0x01703cd0
void ARBMAIController::execCheckForNeedToMonitorPawnVelocity(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	vf_468();
}

// @baa 0x01703d80
void ARChatteringTeeth::execSetNewDir(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	vf_46c();
}

// @baa 0x01703dc0
void ARChatteringTeeth::execSetNewRot(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	vf_470();
}

// @baa 0x017040b0
void ARBMAIManager::execClearNoneControllers(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	vf_358();
}

// @baa 0x01704160
void ARBMAIManager::execUpdateForcedBehaviours(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	vf_360();
}

// @baa 0x017041a0
void ARBMAIManager::execUpdateBehaviours(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	vf_364();
}

// @baa 0x017041e0
void ARBMAIManager::execUpdateAIState(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	vf_368();
}

// @baa 0x01704220
void ARBMAIManager::execUpdateTimeSlicers(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	vf_36c();
}

// @baa 0x01704260
void ARBMAIManager::execUpdatePathNodeLooker(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	vf_370();
}

// @baa 0x01704640
void ARBMCombatManager::execCacheNumCombatants(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	vf_374();
}

// @baa 0x01704d90
void URBMBehaviour::execSpawnedByController(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	vf_1b0();
}

// @baa 0x01704e40
void URBMBehaviour::execDeactivatedByController(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	vf_1b4();
}

// @baa 0x01704e80
void URBMBehaviour::execRemove(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	vf_1b8();
}

// @baa 0x01704ec0
void URBMBehaviour_AttachToEvents::execAttachToEvents(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	vf_1bc();
}

// @baa 0x01705be0
void URBMBehaviour_Sniper::execBuildSniperPointArray(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	vf_1bc();
}

// @baa 0x01708660
void ARTapePlayer::execCancelCurrentLoad(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	vf_35c();
}

// @baa 0x01708a10
void ARLevelTransitionP::execActivateStreaming(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	vf_360();
}

// @baa 0x01708a50
void ARLevelTransition::execDeactivateStreaming(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	vf_364();
}

// @baa 0x01708ce0
void ARLevelTransitionP::execSwitchPersistentLevels(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	vf_388();
}

// @baa 0x0170a770
void ARLevelSelectMenu::execDoMoviesMenu(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	vf_354();
}

// @baa 0x0170a7d0
void URPersistentOptions::execClearPS3LeaderboardCache(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	vf_10c();
}

// @baa 0x0170a810
void URPersistentOptions::execSavePS3LeaderboardCache(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	vf_110();
}

// @baa 0x0170a850
void URPersistentOptions::execRestorePS3LeaderboardCache(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	vf_114();
}

// @baa 0x0170a8f0
void ARFracturablePontoonPropBase::execEditorInitPontoonPropMeshes(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	vf_394();
}

// @baa 0x0170a930
void ARFracturablePontoonPropBase::execDoUpdateCollision(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	vf_398();
}

// @baa 0x0170a9a0
void ARPawnBossCrocBase::execUpdateDistanceToNearestRoot(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	vf_654();
}

// @baa 0x0170ab10
void ARPawnBossCrocBase::execUpdateParticleSystems(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	vf_65c();
}

// @baa 0x0170ab50
void ARPawnBossCrocBase::execUpdateLineLaunchVolume(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	vf_660();
}

// @baa 0x01703e70
void ARChatteringTeeth::execCheckTeethSound(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	vf_478();
}

// @baa 0x01703780
void ARBMAIController::execGetMaxSightRange(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(FLOAT*)Result = vf_42c();
}

// @baa 0x01703a00
void ARBMAIController::execGetAIManager(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(ARBMAIManager**)Result = (ARBMAIManager*)vf_448();
}

// @baa 0x01703b60
void ARBMAIController::execShouldUpdatePathNodeSeenTimes(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_458();
}

// @baa 0x01703ba0
void ARBMAIController::execPawnInStasis(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_45c();
}

// @baa 0x01703eb0
void ARChatteringTeeth::execMakeRoute(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_47c();
}

// @baa 0x017042a0
void ARBMAIManager::execShouldLockDoors(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(BYTE*)Result = vf_374();
}

// @baa 0x017042e0
void ARBMAIManager::execGetFiringCount(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(INT*)Result = vf_378();
}

// @baa 0x01704350
void ARBMCombatManager::execGetPlayerController(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(ARPlayerControllerCombat**)Result = (ARPlayerControllerCombat*)vf_354();
}

// @baa 0x01704390
void ARBMCombatManager::execGetBatmanPawn(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(ARPawnPlayerCombat**)Result = (ARPawnPlayerCombat*)vf_358();
}

// @baa 0x017045c0
void ARBMCombatManager::execShouldLockDoors(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(BYTE*)Result = vf_36c();
}

// @baa 0x01704600
void ARBMCombatManager::execShouldForceCombatCamera(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_370();
}

// @baa 0x01704680
void ARBMCombatManager::execGetNumCombatants(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(INT*)Result = vf_378();
}

// @baa 0x017046c0
void ARBMCombatManager::execCanUseCombatPoint(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_37c();
}

typedef UBOOL (__thiscall* FSlot)(void*);

// @baa 0x01704700
void ARBMCombatManager::execUpdateAttackers(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = ((FSlot)(*(void***)this)[0x380 / 4])(this);
}

// @baa 0x01704740
void ARBMCombatManager::execIsDeepInCombat(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_384();
}

// @baa 0x01704c30
void URBMBehaviour::execShouldShowBehaviourDebug(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_1a0();
}

// @baa 0x01704c70
void URBMBehaviour::execHasState(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_1a4();
}

// @baa 0x01704fc0
void URBMBehaviour_Combat::execIsInDanger(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_1c0();
}

// @baa 0x01705000
void URBMBehaviour_Combat::execBatmanIsInDanger(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_1c4();
}

// @baa 0x01705240
void URBMBehaviour_Combat::execIsBatmanInCombatArea(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_1d4();
}

// @baa 0x01705c80
void URBMExitCondition::execShouldShowExitConditionDebug(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_1a0();
}

// @baa 0x01706b20
void ARForensicsDevice::execIsUsingFilterView(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_354();
}

// @baa 0x017075e0
void ARGrappleGun::execFindGrapplePointNoAim(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(ARGrapplePoint**)Result = (ARGrapplePoint*)vf_358();
}

// @baa 0x01708620
void ARTapePlayer::execInitConversation(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = ((FSlot)(*(void***)this)[0x354 / 4])(this);
}

// @baa 0x01708820
void ARLevelVolume::execIsOnPersistentMap(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_360();
}

// @baa 0x01708860
void ARPlayerStartInLevel::execGetGRI(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(ARGameRI**)Result = (ARGameRI*)vf_3b0();
}

// @baa 0x017088a0
void ARPlayerStartInLevel::execGetMyLevelVolume(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(ARLevelVolume**)Result = (ARLevelVolume*)vf_3b4();
}

// @baa 0x01708910
void ARLevelTransition::execGetGRI(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(ARGameRI**)Result = GetGameRI();
}

// @baa 0x017089d0
void ARLevelTransition::execIsConnectedToCurrentLevels(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_35c();
}

// @baa 0x01708a90
void ARLevelTransitionP::execDoesLevelStreaming(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_368();
}

// @baa 0x01708c00
void ARLevelTransitionDoorBunkerNativeBase::execDoorIsAnimating(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_388();
}
