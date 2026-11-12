// BmGame_1700000.cpp: 48 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

typedef AActor* (__thiscall* FSlot)(void*);

// @baa 0x017083b0
void ARExplosiveGooMine::execConditionalSetupPosition(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(AActor**)Result = ((FSlot)(*(void***)this)[0x354 / 4])(this);
}

// @baa 0x01709b40
void ARBatarangCamera::execUpdateTrackingPosition(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(DeltaTime);
	P_FINISH;
	sub_016a9f20(DeltaTime);
}

// @baa 0x0170a180
void ARLineLauncherDirectorCamera::execSetupPosition(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(DeltaTime);
	P_FINISH;
	sub_016b0e10(DeltaTime);
}

// @baa 0x0170a2d0
void ARMultiTargetCamera::execUpdatePosition(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(DeltaTime);
	P_FINISH;
	sub_016b70c0(DeltaTime);
}

// @baa 0x01703ab0
void ARBMAIController::execShutDownBehaviour(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(URBMBehaviour, BehaviourToExit);
	P_FINISH;
	ShutDownBehaviour(BehaviourToExit);
}

// @baa 0x01704b50
void URSimpleIdleConfig::execFireOutputLink(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(URBMBehaviour_IdleWithPlannarProp, Owner);
	P_FINISH;
	FireOutputLink(Owner);
}

// @baa 0x01704bc0
void URIdleWithDeathConfig::execFireDeathLink(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(URBMBehaviour_IdleWithPlannarProp, Owner);
	P_FINISH;
	FireDeathLink(Owner);
}

// @baa 0x01706b60
void ARForensicsDevice::execEvidenceRegisterDnaSNS(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(ARForensicDnaSplatStaticNonScan, Splat);
	P_FINISH;
	EvidenceRegisterDnaSNS(Splat);
}

// @baa 0x01706bd0
void ARForensicsDevice::execEvidenceRegisterDnaS(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(ARForensicDnaSplatStatic, Splat);
	P_FINISH;
	EvidenceRegisterDnaS(Splat);
}

// @baa 0x01706ce0
void ARForensicsDevice::execEvidenceRegisterDNA(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(ARForensicDnaSplat, Splat);
	P_FINISH;
	EvidenceRegisterDNA(Splat);
}

// @baa 0x01708ff0
void ARDisruptableObjectDoor::execUpdateSound(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(ARPawnPlayer, Batman);
	P_FINISH;
	UpdateSound(Batman);
}

// @baa 0x01709ad0
void ARCameraActor::execCorrectedAspectRatioFOV(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(AR3rdPersonCamera, OwnerCam);
	P_FINISH;
	*(FLOAT*)Result = sub_01690910(OwnerCam);
}

// @baa 0x01701480
void ARWindVolume::execTick(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(DeltaTime);
	P_FINISH;
	vf_360(DeltaTime);
}

// @baa 0x01704d20
void URBMBehaviour::execSleepFrame(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT_OPTX(Frames, 1);
	P_FINISH;
	vf_1ac(Frames);
}

// @baa 0x01706ff0
void ARBatarang::execUpdateAliveProjectiles(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(ARBatarangProjectile, NewProjectile);
	P_FINISH;
	sub_01640960(NewProjectile);
}

// @baa 0x01708ba0
void ARLevelTransition::execPlayerUpdateTransform(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(ARPawnCharacter, Mesh);
	P_FINISH;
	sub_0155a090(Mesh);
}

// @baa 0x017086a0
void ARTapePlayer::execSetPause(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bPause);
	P_FINISH;
	vf_364(bPause);
}

// @baa 0x017031a0
void ARBMAIController::execGetBehaviour(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT_OPTX(Index, 0);
	P_FINISH;
	*(URBMBehaviour**)Result = (URBMBehaviour*)vf_408(Index);
}

// @baa 0x01703be0
void ARBMAIController::execFindAlertForPlayer(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT_OPTX(AActor, Player, NULL);
	P_FINISH;
	*(UAlertInstance**)Result = (UAlertInstance*)vf_460((INT)Player);
}

// @baa 0x017013e0
void ARRagdollWakeupVolume::execTick(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(DeltaTime);
	P_FINISH;
	vf_360(DeltaTime);
}

// @baa 0x01701570
void ARMedicalPlasticFlapsBase::execUpdateFlapMovementSpeed(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(DeltaTime);
	P_FINISH;
	vf_354(DeltaTime);
}

// @baa 0x01703a40
void ARBMAIController::execTickBehaviourState(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(DeltaTime);
	P_FINISH;
	vf_44c(DeltaTime);
}

// @baa 0x01703e00
void ARChatteringTeeth::execRandomMoveTick(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(DeltaTime);
	P_FINISH;
	vf_474(DeltaTime);
}

// @baa 0x01703ef0
void ARChatteringTeeth::execRouterMoveRouterMove(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(DeltaTime);
	P_FINISH;
	*(UBOOL*)Result = vf_480(DeltaTime);
}

// @baa 0x017040f0
void ARBMAIManager::execUpdateBehaviourDeltas(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(DeltaTime);
	P_FINISH;
	vf_35c(DeltaTime);
}

// @baa 0x01704cb0
void URBMBehaviour::execSleep(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(SleepTime);
	P_FINISH;
	vf_1a8(SleepTime);
}

// @baa 0x017056f0
void URBMBehaviour_CombatAI::execSetRotationAndVelocity(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(DeltaTime);
	P_FINISH;
	vf_1ec(DeltaTime);
}

// @baa 0x01705a10
void URBMBehaviour_MoveToJokerInChair::execUpdateJokerStruggling(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(DeltaTime);
	P_FINISH;
	vf_1bc(DeltaTime);
}

// @baa 0x01708190
void ARBatarangProjectile_Controllable::execUpdateFlightPath(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(DeltaTime);
	P_FINISH;
	vf_354(DeltaTime);
}

// @baa 0x01709c80
void ARControllableChatteringTeethCamera::execUpdateCurrentFollowPose(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(DeltaTime);
	P_FINISH;
	vf_354(DeltaTime);
}

// @baa 0x01709cf0
void ARControllableChatteringTeethCamera::execUpdateCurrentExplodePose(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(DeltaTime);
	P_FINISH;
	vf_358(DeltaTime);
}

// @baa 0x0170af90
void ARBatarangTarget::execTick(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(TickTime);
	P_FINISH;
	vf_354(TickTime);
}

// @baa 0x01708ad0
void ARLevelTransition::execGetLevelVolumeInFront(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(InFront);
	P_FINISH;
	*(void**)Result = (void*)vf_36c(InFront);
}

// @baa 0x01703f90
// @baa 0x01703f90
void ARAlertEventCoordinator_Batman::execGetAttackPoints(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FVector, AttackCentre);
    P_FINISH;
    GetAttackPoints(AttackCentre);
}

// @baa 0x0170b0f0
// @baa 0x0170b0f0
void ARSoftBodyProjectile::execApplySoftBodyExternalAcceleration(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FVector, Force);
    P_FINISH;
    ApplySoftBodyExternalAcceleration(Force);
}

// @baa 0x017034c0
// @baa 0x017034c0
void ARBMAIController::execCanSeePos(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FVector, TestPos);
    P_FINISH;
    *(UBOOL*)Result = CanSeePos(TestPos);
}

// @baa 0x01704490
// @baa 0x01704490
void ARBMCombatManager::execIsLocationInCombatArea(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FVector, TestLocation);
    P_FINISH;
    *(UBOOL*)Result = IsLocationInCombatArea(TestLocation);
}

// @baa 0x017051c0
// @baa 0x017051c0
void URBMBehaviour_Combat::execIsLocationInCombatArea(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FVector, TestLocation);
    P_FINISH;
    *(UBOOL*)Result = IsLocationInCombatArea(TestLocation);
}

// @baa 0x01703220
void ARBMAIController::execIsRunningBehaviour(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(URBMBehaviour, TestBehaviour);
	P_FINISH;
	*(UBOOL*)Result = IsRunningBehaviour(TestBehaviour);
}

// @baa 0x01704040
void ARBMAIManager::execCanUpdateCombatCollision(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(ARPawn, TestPawn);
	P_FINISH;
	*(UBOOL*)Result = CanUpdateCombatCollision(TestPawn);
}

// @baa 0x01705f50
void URBMPawnSpawnerController::execGetNumberActive(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(Index);
	P_FINISH;
	*(INT*)Result = vf_1a4(Index);
}

// @baa 0x01703c60
void ARBMAIController::execFindAlertFor(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(AActor, A);
	P_FINISH;
	*(UAlertInstance**)Result = (UAlertInstance*)vf_464((INT)A);
}

// @baa 0x01705fc0
void URBMPawnSpawnerController::execGetPawnSpawner(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(Index);
	P_FINISH;
	*(URBmPawnSpawner**)Result = (URBmPawnSpawner*)vf_1a8(Index);
}

// @baa 0x01708c40
void ARLevelTransitionDoorBunkerNativeBase::execIsInActivationRange(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(ARPlayerController, PC);
	P_FINISH;
	*(UBOOL*)Result = IsInActivationRange(PC);
}

// @baa 0x017078b0
// @baa 0x017078b0
void ARJokerGunGadgetBase::execGetShouldKnockHelmetOff(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(BoneName);
    P_FINISH;
    *(INT*)Result = GetShouldKnockHelmetOff(BoneName);
}

// @baa 0x01708950
// @baa 0x01708950
void ARLevelTransition::execIsConnectedToLevel(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(Level);
    P_FINISH;
    *(UBOOL*)Result = IsConnectedToLevel(Level);
}

// @baa 0x01704dd0
// @baa 0x01704dd0
void URBMBehaviour::execUpdateOp(FFrame& Stack, RESULT_DECL)
{
    P_GET_FLOAT(DeltaTime);
    P_FINISH;
    *(UBOOL*)Result = UpdateOp(DeltaTime);
}

// @baa 0x017043d0
// The base declares vf_35c as "virtual INT vf_35c(INT)". The code shows it is a
// virtual that fills a caller-supplied FVector (its INT parameter is the buffer
// address, thiscall's first stack argument) and returns that buffer's pointer.
void ARBMCombatManager::execGetBatmanLocation(FFrame& Stack, RESULT_DECL)
{
    P_FINISH;
    FVector Location;
    *(FVector*)Result = *(FVector*)vf_35c((INT)&Location);
}

void g_caller()
{
    ARBMCombatManager Manager;
    Manager.execGetBatmanLocation(*(FFrame*)0, 0);
}
