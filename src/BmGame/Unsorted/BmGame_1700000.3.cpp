// BmGame_1700000.cpp: 77 functions
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

// @baa 0x01704430
void ARBMCombatManager::execGetBatmanRotation(FFrame& Stack, RESULT_DECL)
{
    P_FINISH;

    FRotator BatmanRotation;
    *(FRotator*)Result = *(FRotator*)vf_360((INT)&BatmanRotation);
}

// @baa 0x01705280
void URBMBehaviour_CombatHeavyObject::execGetMovementForce(FFrame& Stack, RESULT_DECL)
{
    P_FINISH;

    FVector MovementForce;
    *(FVector*)Result = *(FVector*)vf_1d8((INT)&MovementForce);
}

struct ARBatarangProjectile_ : ARBatarangProjectile
{
    FVector GetFlightPathPosition(FLOAT Proportion);
};

// @baa 0x01707fe0
void ARBatarangProjectile::execGetFlightPathPosition(FFrame& Stack, RESULT_DECL)
{
    P_GET_FLOAT(Proportion);
    P_FINISH;
    *(FVector*)Result = ((ARBatarangProjectile_*)this)->GetFlightPathPosition(Proportion);
}

struct ARBatarangProjectile__01708060 : ARBatarangProjectile
{
    FVector GetFlightPathTangent(FLOAT Proportion);
};

// @baa 0x01708060
void ARBatarangProjectile::execGetFlightPathTangent(FFrame& Stack, RESULT_DECL)
{
    P_GET_FLOAT(Proportion);
    P_FINISH;
    *(FVector*)Result = ((ARBatarangProjectile__01708060*)this)->GetFlightPathTangent(Proportion);
}

struct ARBatarangProjectile__017080e0 : ARBatarangProjectile
{
    FVector GetFlightPathDeltaTangent(FLOAT Proportion);
};

// @baa 0x017080e0
void ARBatarangProjectile::execGetFlightPathDeltaTangent(FFrame& Stack, RESULT_DECL)
{
    P_GET_FLOAT(Proportion);
    P_FINISH;
    *(FVector*)Result = ((ARBatarangProjectile__017080e0*)this)->GetFlightPathDeltaTangent(Proportion);
}

extern FName g_026e3124;
	/* DestroyTeethCamera */
struct ARControllableChatteringTeethBase_ : public ARControllableChatteringTeethBase
{
	void eventDestroyTeethCamera();
};

// @baa 0x01707dc0
/* RControllableChatteringTeethBase.DestroyTeethCamera script event: the generated glue, out of line here. */
void ARControllableChatteringTeethBase_::eventDestroyTeethCamera()
{
	ProcessEvent(FindFunctionChecked(g_026e3124), NULL);
}

extern FName g_026e2de8;
	/* RemoveTeethPhysics */
struct ARControllableChatteringTeethBase__01707e20 : public ARControllableChatteringTeethBase
{
	void eventRemoveTeethPhysics();
};

// @baa 0x01707e20
/* RControllableChatteringTeethBase.RemoveTeethPhysics script event: the generated glue, out of line here. */
void ARControllableChatteringTeethBase__01707e20::eventRemoveTeethPhysics()
{
	ProcessEvent(FindFunctionChecked(g_026e2de8), NULL);
}

extern FName g_026e2a34;
	/* PlayPreExplodeAnim */
struct ARControllableChatteringTeethBase__01707e50 : public ARControllableChatteringTeethBase
{
	void eventPlayPreExplodeAnim();
};

// @baa 0x01707e50
/* RControllableChatteringTeethBase.PlayPreExplodeAnim script event: the generated glue, out of line here. */
void ARControllableChatteringTeethBase__01707e50::eventPlayPreExplodeAnim()
{
	ProcessEvent(FindFunctionChecked(g_026e2a34), NULL);
}

extern FName g_026e3068;
	/* GetJumpBlenderAnimNode */
struct ARControllableChatteringTeethBase__01707e80 : public ARControllableChatteringTeethBase
{
	class UAnimNodeCrossfader* eventGetJumpBlenderAnimNode();
};

// @baa 0x01707e80
/* RControllableChatteringTeethBase.GetJumpBlenderAnimNode script event: the generated glue, out of line here. */
class UAnimNodeCrossfader* ARControllableChatteringTeethBase__01707e80::eventGetJumpBlenderAnimNode()
{
	struct RControllableChatteringTeethBase_eventGetJumpBlenderAnimNode_Parms
	{
		class UAnimNodeCrossfader* ReturnValue;
	} Parms;
	Parms.ReturnValue = NULL;
	ProcessEvent(FindFunctionChecked(g_026e3068), &Parms);
	return Parms.ReturnValue;
}

/* ARControllableChatteringTeethCamera::CalculateCurrentDragPos (016aa6b0) isn't declared in the kit. */
struct ARControllableChatteringTeethCamera_ : public ARControllableChatteringTeethCamera
{
    FVector CalculateCurrentDragPos();
};

// @baa 0x01709d60
void ARControllableChatteringTeethCamera::execCalculateCurrentDragPos(FFrame& Stack, RESULT_DECL)
{
    P_FINISH;
    *(FVector*)Result = ((ARControllableChatteringTeethCamera_*)this)->CalculateCurrentDragPos();
}

/* ARControllableChatteringTeethCamera::CalculateCurrentTargetPos (016aa760) isn't declared in the kit. */
struct ARControllableChatteringTeethCamera__01709db0 : public ARControllableChatteringTeethCamera
{
    FVector CalculateCurrentTargetPos();
};

// @baa 0x01709db0
void ARControllableChatteringTeethCamera::execCalculateCurrentTargetPos(FFrame& Stack, RESULT_DECL)
{
    P_FINISH;
    *(FVector*)Result = ((ARControllableChatteringTeethCamera__01709db0*)this)->CalculateCurrentTargetPos();
}

/* ARControllableChatteringTeethCamera::CalculateCurrentFallbackPos (016aa810) isn't declared in the kit. */
struct ARControllableChatteringTeethCamera__01709e00 : public ARControllableChatteringTeethCamera
{
    FVector CalculateCurrentFallbackPos();
};

// @baa 0x01709e00
void ARControllableChatteringTeethCamera::execCalculateCurrentFallbackPos(FFrame& Stack, RESULT_DECL)
{
    P_FINISH;
    *(FVector*)Result = ((ARControllableChatteringTeethCamera__01709e00*)this)->CalculateCurrentFallbackPos();
}

extern FName g_026e38b0;
	/* DestroyImpactEffects */
struct ARRemoveableGrate_ : public ARRemoveableGrate
{
	void eventDestroyImpactEffects();
};

// @baa 0x01701350
/* RRemoveableGrate.DestroyImpactEffects script event: the generated glue, out of line here. */
void ARRemoveableGrate_::eventDestroyImpactEffects()
{
	ProcessEvent(FindFunctionChecked(g_026e38b0), NULL);
}

extern FName g_026e3974;
	/* UpdateImpactEffects */
struct ARRemoveableGrate__01701380 : public ARRemoveableGrate
{
	void eventUpdateImpactEffects();
};

// @baa 0x01701380
/* RRemoveableGrate.UpdateImpactEffects script event: the generated glue, out of line here. */
void ARRemoveableGrate__01701380::eventUpdateImpactEffects()
{
	ProcessEvent(FindFunctionChecked(g_026e3974), NULL);
}

/* ARBatarang::FindInterceptDirection (0x16390a0) isn't declared in the kit. */
struct ARBatarang_ : public ARBatarang
{
    FVector FindInterceptDirection(FVector BatarangStartPos, FLOAT BatarangSpeed, FVector BatarangTargetPosition, FVector BatarangTargetVelocity);
};

// @baa 0x01707050
void ARBatarang::execFindInterceptDirection(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FVector, BatarangStartPos);
    P_GET_FLOAT(BatarangSpeed);
    P_GET_STRUCT(FVector, BatarangTargetPosition);
    P_GET_STRUCT(FVector, BatarangTargetVelocity);
    P_FINISH;
    *(FVector*)Result = ((ARBatarang_*)this)->FindInterceptDirection(BatarangStartPos, BatarangSpeed, BatarangTargetPosition, BatarangTargetVelocity);
}

/* ARGrappleGun::CheckGrapplePoint (0x1641970) isn't declared in the kit. */
struct ARGrappleGun_ : public ARGrappleGun
{
    UBOOL CheckGrapplePoint(class ARGrapplePoint* PointToCheck, FVector& GrapplePos, INT CheckIndex);
};

// @baa 0x01707510
void ARGrappleGun::execCheckGrapplePoint(FFrame& Stack, RESULT_DECL)
{
    P_GET_OBJECT(ARGrapplePoint, PointToCheck);
    P_GET_STRUCT_REF(FVector, GrapplePos);
    P_GET_INT(CheckIndex);
    P_FINISH;
    *(UBOOL*)Result = ((ARGrappleGun_*)this)->CheckGrapplePoint(PointToCheck, GrapplePos, CheckIndex);
}

/* ARLineLauncher::GetLineLaucherTetherPoints (0x1663980) isn't declared in the kit. */
struct ARLineLauncher_ : public ARLineLauncher
{
    UBOOL GetLineLaucherTetherPoints(FVector& RearPoint, FVector& FrontPoint, FVector& ActorStartPoint, FVector& ActorEndPoint);
};

// @baa 0x01707940
void ARLineLauncher::execGetLineLaucherTetherPoints(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT_REF(FVector, RearPoint);
    P_GET_STRUCT_REF(FVector, FrontPoint);
    P_GET_STRUCT_REF(FVector, ActorStartPoint);
    P_GET_STRUCT_REF(FVector, ActorEndPoint);
    P_FINISH;
    *(UBOOL*)Result = ((ARLineLauncher_*)this)->GetLineLaucherTetherPoints(RearPoint, FrontPoint, ActorStartPoint, ActorEndPoint);
}

extern FName g_026e3954;
	/* FinishStandSpecialMove */
struct ARControllableChatteringTeethBase__01707c40 : public ARControllableChatteringTeethBase
{
	void eventFinishStandSpecialMove();
};

// @baa 0x01707c40
/* RControllableChatteringTeethBase.FinishStandSpecialMove script event: the generated glue, out of line here. */
void ARControllableChatteringTeethBase__01707c40::eventFinishStandSpecialMove()
{
	ProcessEvent(FindFunctionChecked(g_026e3954), NULL);
}

extern FName g_026e2a40;
	/* TriggerDropSound */
struct ARControllableChatteringTeethBase__01707c70 : public ARControllableChatteringTeethBase
{
	void eventTriggerDropSound();
};

// @baa 0x01707c70
/* RControllableChatteringTeethBase.TriggerDropSound script event: the generated glue, out of line here. */
void ARControllableChatteringTeethBase__01707c70::eventTriggerDropSound()
{
	ProcessEvent(FindFunctionChecked(g_026e2a40), NULL);
}

extern FName g_026e2a98;
	/* AlertPeopleToExplosion */
struct ARControllableChatteringTeethBase__01707ca0 : public ARControllableChatteringTeethBase
{
	void eventAlertPeopleToExplosion();
};

// @baa 0x01707ca0
/* RControllableChatteringTeethBase.AlertPeopleToExplosion script event: the generated glue, out of line here. */
void ARControllableChatteringTeethBase__01707ca0::eventAlertPeopleToExplosion()
{
	ProcessEvent(FindFunctionChecked(g_026e2a98), NULL);
}

extern FName g_026e37b4;
	/* DamageNearbyFractureWalls */
struct ARControllableChatteringTeethBase__01707cd0 : public ARControllableChatteringTeethBase
{
	void eventDamageNearbyFractureWalls();
};

// @baa 0x01707cd0
/* RControllableChatteringTeethBase.DamageNearbyFractureWalls script event: the generated glue, out of line here. */
void ARControllableChatteringTeethBase__01707cd0::eventDamageNearbyFractureWalls()
{
	ProcessEvent(FindFunctionChecked(g_026e37b4), NULL);
}

extern FName g_026e2ef4;
	/* TriggerExplodeEffects */
struct ARControllableChatteringTeethBase__01707d30 : public ARControllableChatteringTeethBase
{
	void eventTriggerExplodeEffects();
};

// @baa 0x01707d30
/* RControllableChatteringTeethBase.TriggerExplodeEffects script event: the generated glue, out of line here. */
void ARControllableChatteringTeethBase__01707d30::eventTriggerExplodeEffects()
{
	ProcessEvent(FindFunctionChecked(g_026e2ef4), NULL);
}

extern FName g_026e2e98;
	/* TriggerExplosionRumble */
struct ARControllableChatteringTeethBase__01707d60 : public ARControllableChatteringTeethBase
{
	void eventTriggerExplosionRumble();
};

// @baa 0x01707d60
/* RControllableChatteringTeethBase.TriggerExplosionRumble script event: the generated glue, out of line here. */
void ARControllableChatteringTeethBase__01707d60::eventTriggerExplosionRumble()
{
	ProcessEvent(FindFunctionChecked(g_026e2e98), NULL);
}

extern FName g_026e2f84;
	/* ApplyExplosionCameraShake */
struct ARControllableChatteringTeethBase__01707d90 : public ARControllableChatteringTeethBase
{
	void eventApplyExplosionCameraShake();
};

// @baa 0x01707d90
/* RControllableChatteringTeethBase.ApplyExplosionCameraShake script event: the generated glue, out of line here. */
void ARControllableChatteringTeethBase__01707d90::eventApplyExplosionCameraShake()
{
	ProcessEvent(FindFunctionChecked(g_026e2f84), NULL);
}

/* ARExplosiveGooMine::ComplexTrace (0x163b2d0) isn't declared in the kit. */
struct ARExplosiveGooMine_ : public ARExplosiveGooMine
{
    AActor* ComplexTrace(class AActor* MyOwner, FVector& HitLocation, FVector End, FVector Start);
};

// @baa 0x01708290
void ARExplosiveGooMine::execComplexTrace(FFrame& Stack, RESULT_DECL)
{
    P_GET_OBJECT(AActor, MyOwner);
    P_GET_STRUCT_REF(FVector, HitLocation);
    P_GET_STRUCT(FVector, End);
    P_GET_STRUCT(FVector, Start);
    P_FINISH;
    *(AActor**)Result = ((ARExplosiveGooMine_*)this)->ComplexTrace(MyOwner, HitLocation, End, Start);
}

/* ARBatarangCamera::TrackPostImpact (0x16aa290) isn't declared in the kit. */
struct ARBatarangCamera_ : public ARBatarangCamera
{
    void TrackPostImpact(FVector ActorLocation, FLOAT DeltaTime);
};

// @baa 0x01709bb0
void ARBatarangCamera::execTrackPostImpact(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FVector, ActorLocation);
    P_GET_FLOAT(DeltaTime);
    P_FINISH;
    ((ARBatarangCamera_*)this)->TrackPostImpact(ActorLocation, DeltaTime);
}

/* ARLineLauncherDirectorCamera::FindBestCentrePoint (0x16aad30) isn't declared in the kit. */
struct ARLineLauncherDirectorCamera_ : public ARLineLauncherDirectorCamera
{
    void FindBestCentrePoint(FVector& StartPoint, FVector& EndPoint);
};

// @baa 0x0170a1f0
void ARLineLauncherDirectorCamera::execFindBestCentrePoint(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT_REF(FVector, StartPoint);
    P_GET_STRUCT_REF(FVector, EndPoint);
    P_FINISH;
    ((ARLineLauncherDirectorCamera_*)this)->FindBestCentrePoint(StartPoint, EndPoint);
}

/* ARSilentPredatorCamera::LookAround (0x16ab590) isn't declared in the kit. */
struct ARSilentPredatorCamera_ : public ARSilentPredatorCamera
{
    void LookAround(FLOAT DeltaTime, FRotator LookInput);
};

// @baa 0x0170a3e0
void ARSilentPredatorCamera::execLookAround(FFrame& Stack, RESULT_DECL)
{
    P_GET_FLOAT(DeltaTime);
    P_GET_STRUCT(FRotator, LookInput);
    P_FINISH;
    ((ARSilentPredatorCamera_*)this)->LookAround(DeltaTime, LookInput);
}

extern FName g_026e2f18;
	/* Dump */
struct URPersistentOptions_ : public URPersistentOptions
{
	void eventDump();
};

// @baa 0x0170a890
/* RPersistentOptions.Dump script event: the generated glue, out of line here. */
void URPersistentOptions_::eventDump()
{
	ProcessEvent(FindFunctionChecked(g_026e2f18), NULL);
}
