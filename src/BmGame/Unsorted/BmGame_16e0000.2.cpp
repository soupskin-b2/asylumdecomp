// BmGame_16e0000.cpp: 63 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x016e8750
void ARGameInfo::execUpdateMusic( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_3c4();
}

// @baa 0x016e89c0
void ARGameRI::execUnloadAllLevels( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_35c();
}

// @baa 0x016e8a00
void ARGameRI::execUnloadNextLevel( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_360();
}

// @baa 0x016e91e0
void ARGameRI::execDumpFpsChart( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_3b0();
}

// @baa 0x016e9a60
void ARJokerTannoy::execCancelBarkSetLoading( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_35c();
}

// @baa 0x016e9ad0
void ARPawnSpawnObject::execSpawnPawn( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_354();
}

// @baa 0x016e9cf0
void ARPontoonBase::execEditorInitPontoonMeshes( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_35c();
}

// @baa 0x016e9e60
void ARPontoonBase::execUpdatePontoonForces( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_36c();
}

// @baa 0x016e9f00
void ARChatterBoxBase::execSetBoxCollision( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_354();
}

// @baa 0x016e9f70
void ARCinematicActor::execTeleport( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_354();
}

// @baa 0x016ea110
void ARCinematicActor::execInternalFinishAnimControl( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_360();
}

// @baa 0x016ea200
void ARCinematicBatmanBase::execDamageLevelUpdated( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	DamageLevelUpdated();
}

// @baa 0x016ea230
void ARCinematicBatmanBase::execLoadDamageMeshes(FFrame& Stack, RESULT_DECL)
{
    P_FINISH;
    sub_0156bbd0();
}

// @baa 0x016ea300
void ARElectrifiedFloorPanel::execIntialise( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_358();
}

// @baa 0x016ea340
void ARElectrifiedFloorPanel::execUpdateShockedCharactersEffect( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_35c();
}

// @baa 0x016ea380
void ARElectrifiedFloorPanel::execCheckForPawnsOnTile( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_360();
}

// @baa 0x016ea3c0
void ARElectrifiedFloorPanel::execUpdatePawnsOnTile( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_364();
}

// @baa 0x016eadb0
void URHUDPrompt::execResetLines( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_114();
}

// @baa 0x016eadf0
void URHUDPrompt::execDrawHUD( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_118();
}

// @baa 0x016eb280
void URSeqAct_ActivateElectrifiedFloorPanels::execGetPlateDistances( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_1a0();
}

// @baa 0x016eb2c0
void URSeqAct_ActivateElectrifiedFloorPanels::execGetClosestCurrent( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_1a4();
}

// @baa 0x016eb460
void URSeqAct_FullScreenPlayer::execPlayMovie( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_1a0();
}

// @baa 0x016eb4a0
void URSeqAct_FullScreenPlayer::execStopMovie( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_1a4();
}

// @baa 0x016ebc40
void URWeaponConfig::execShrink( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_10c();
}

// @baa 0x016e85b0
void ARGameInfo::execGetPC(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(ARPlayerController**)Result = (ARPlayerController*)vf_3b0();
}

// @baa 0x016e85f0
void ARGameInfo::execSecuROMProtectionCheck1(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_3b4();
}

// @baa 0x016e8630
void ARGameInfo::execSecuROMProtectionCheck2(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_3b8();
}

// @baa 0x016e8670
void ARGameInfo::execSecuROMProtectionCheck3(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(INT*)Result = vf_3bc();
}

// @baa 0x016e90e0
void ARGameRI::execIsGlobalLockActive(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_3a4();
}

// @baa 0x016e9120
void ARGameRI::execIsBatmanInCombat(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_3a8();
}

// @baa 0x016e9220
void ARGameRI::execGetSkeletalMeshLODScale(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(FLOAT*)Result = vf_3b4();
}

// @baa 0x016e93a0
void ARBMWeapon::execCanBeSeenByBatsForXray(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_358();
}

// @baa 0x016e9970
void ARFadeManager::execGetVolume(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(FLOAT*)Result = vf_358();
}

typedef UBOOL (__thiscall* FSlot)(void*);

// @baa 0x016e99b0
void ARFadeManager::execIsCapturingMovie(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = ((FSlot)(*(void***)this)[0x35c / 4])(this);
}

// @baa 0x016e9a20
void ARJokerTannoy::execInitBarkSet(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = ((FSlot)(*(void***)this)[0x358 / 4])(this);
}

// @baa 0x016e9db0
void ARPontoonBase::execAnimationPlaying(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_364();
}

// @baa 0x016eb4e0
void URSeqAct_FullScreenPlayer::execWasSkipped(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_1a8();
}

// @baa 0x016eb520
void URSeqAct_FullScreenPlayer::execIsPaused(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_1ac();
}

// @baa 0x016eb560
void URSeqAct_FullScreenPlayer::execCheckForFinish(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_1b0();
}

// @baa 0x016ea290
void ARElectrifiedFloorPanel::execSetState(FFrame& Stack, RESULT_DECL)
{
	P_GET_BYTE(NewState);
	P_FINISH;
	vf_354(*(INT*)&NewState);
}

// @baa 0x016ebd70
void URAnimNode_AnimCapture::execCapture(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(USkeletalMeshComponent, Mesh);
	P_FINISH;
	vf_19c(Mesh);
}

// @baa 0x016efd20
void ARPawn::execSetLocationIgnoringCollision(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT(FVector, NewLocation);
	P_FINISH;
	sub_0166d490(NewLocation);
}

// @baa 0x016e8790
void ARGameInfo::execUpdateGlobalWind(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(DeltaTime);
	P_FINISH;
	vf_3cc(DeltaTime);
}

// @baa 0x016e9260
void ARGameRI::execSetSkeletalMeshLODScale(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(Value);
	P_FINISH;
	vf_3b8(Value);
}

// @baa 0x016e9330
void ARBMWeapon::execUpdateXrayVisibility(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(DeltaTime);
	P_FINISH;
	vf_354(DeltaTime);
}

// @baa 0x016e95a0
void ARCreeperVineBase::execStartAttack(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(DelayDuration);
	P_FINISH;
	vf_354(DelayDuration);
}

// @baa 0x016e9610
void ARCreeperVineBase::execTick(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(DeltaSeconds);
	P_FINISH;
	vf_358(DeltaSeconds);
}

// @baa 0x016e9900
void ARFadeManager::execSetVolume(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(Vol);
	P_FINISH;
	vf_354(Vol);
}

// @baa 0x016e9df0
void ARPontoonBase::execTick(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(DeltaTime);
	P_FINISH;
	vf_368(DeltaTime);
}

// @baa 0x016eb300
void URSeqAct_ActivateElectrifiedFloorPanels::execNativeUpdate(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(DeltaTime);
	P_FINISH;
	*(UBOOL*)Result = vf_1a8(DeltaTime);
}

// @baa 0x016e8f00
// @baa 0x016e8f00
void ARGameRI::execShowLoadingIcon(FFrame& Stack, RESULT_DECL)
{
    P_GET_UBOOL(bShow);
    P_FINISH;
    ShowLoadingIcon(bShow);
}

// @baa 0x016e8d80
// @baa 0x016e8d80
void ARGameRI::execHideLevel(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(Level);
    P_FINISH;
    HideLevel(Level);
}

// @baa 0x016e8e00
// @baa 0x016e8e00
void ARGameRI::execStartLevel(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(Level);
    P_FINISH;
    StartLevel(Level);
}

// @baa 0x016e8e80
// @baa 0x016e8e80
void ARGameRI::execStartChapterSpecificLevels(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(Level);
    P_FINISH;
    StartChapterSpecificLevels(Level);
}

// @baa 0x016e9000
void ARGameRI::execIsInCurrentLevel(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UObject, Obj);
	P_FINISH;
	*(UBOOL*)Result = vf_39c((INT)Obj);
}

// @baa 0x016e96b0
void ARCrowdAgent::execCanRespondToAttractor(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(ARCrowdAttractor, Attractor);
	P_FINISH;
	*(UBOOL*)Result = vf_354((INT)Attractor);
}

// @baa 0x016e9830
void ARCrowdManager::execGetNumAgentsInFlock(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(FlockID);
	P_FINISH;
	*(INT*)Result = vf_354(FlockID);
}

// @baa 0x016e9070
void ARGameRI::execGetLevelForObject(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UObject, Obj);
	P_FINISH;
	*(ULevelStreaming**)Result = (ULevelStreaming*)vf_3a0((INT)Obj);
}

// @baa 0x016e9160
void ARGameRI::execSetCombatFlag(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bNewValue);
	P_FINISH;
	vf_3ac(bNewValue);
}

// @baa 0x016e8c00
// @baa 0x016e8c00
void ARGameRI::execIsLevelLoaded(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(Level);
    P_FINISH;
    *(UBOOL*)Result = IsLevelLoaded(Level);
}

// @baa 0x016e8c80
// @baa 0x016e8c80
void ARGameRI::execIsLevelLoading(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(Level);
    P_FINISH;
    *(UBOOL*)Result = IsLevelLoading(Level);
}

// @baa 0x016e8d00
// @baa 0x016e8d00
void ARGameRI::execIsLevelVisible(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(Level);
    P_FINISH;
    *(UBOOL*)Result = IsLevelVisible(Level);
}

// @baa 0x016e8f80
// @baa 0x016e8f80
void ARGameRI::execIsCurrentLevel(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(Level);
    P_FINISH;
    *(UBOOL*)Result = IsCurrentLevel(Level);
}
