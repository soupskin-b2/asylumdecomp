// BmGame_1700000.cpp: 38 functions
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

struct ARBatarangCamera_ : public ARBatarangCamera
{
	void sub_016a9f20(FLOAT);
};

// @baa 0x01709b40
void ARBatarangCamera::execUpdateTrackingPosition(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(DeltaTime);
	P_FINISH;
	((ARBatarangCamera_*)this)->sub_016a9f20(DeltaTime);
}

struct ARLineLauncherDirectorCamera_ : public ARLineLauncherDirectorCamera
{
	void sub_016b0e10(FLOAT);
};

// @baa 0x0170a180
void ARLineLauncherDirectorCamera::execSetupPosition(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(DeltaTime);
	P_FINISH;
	((ARLineLauncherDirectorCamera_*)this)->sub_016b0e10(DeltaTime);
}

struct ARMultiTargetCamera_ : public ARMultiTargetCamera
{
	void sub_016b70c0(FLOAT);
};

// @baa 0x0170a2d0
void ARMultiTargetCamera::execUpdatePosition(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(DeltaTime);
	P_FINISH;
	((ARMultiTargetCamera_*)this)->sub_016b70c0(DeltaTime);
}

// @baa 0x01703ab0
void ARBMAIController::execShutDownBehaviour(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(URBMBehaviour, BehaviourToExit);
	P_FINISH;
	vf_450((INT)BehaviourToExit);
}

// @baa 0x01704b50
void URSimpleIdleConfig::execFireOutputLink(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(URBMBehaviour_IdleWithPlannarProp, Owner);
	P_FINISH;
	vf_10c((INT)Owner);
}

// @baa 0x01704bc0
void URIdleWithDeathConfig::execFireDeathLink(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(URBMBehaviour_IdleWithPlannarProp, Owner);
	P_FINISH;
	vf_120((INT)Owner);
}

// @baa 0x01706b60
void ARForensicsDevice::execEvidenceRegisterDnaSNS(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(ARForensicDnaSplatStaticNonScan, Splat);
	P_FINISH;
	vf_358((INT)Splat);
}

// @baa 0x01706bd0
void ARForensicsDevice::execEvidenceRegisterDnaS(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(ARForensicDnaSplatStatic, Splat);
	P_FINISH;
	vf_35c((INT)Splat);
}

// @baa 0x01706ce0
void ARForensicsDevice::execEvidenceRegisterDNA(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(ARForensicDnaSplat, Splat);
	P_FINISH;
	vf_364((INT)Splat);
}

// @baa 0x01708ff0
void ARDisruptableObjectDoor::execUpdateSound(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(ARPawnPlayer, Batman);
	P_FINISH;
	vf_358((INT)Batman);
}

struct ARCameraActor_ : public ARCameraActor
{
	FLOAT sub_01690910(AR3rdPersonCamera*);
};

// @baa 0x01709ad0
void ARCameraActor::execCorrectedAspectRatioFOV(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(AR3rdPersonCamera, OwnerCam);
	P_FINISH;
	*(FLOAT*)Result = ((ARCameraActor_*)this)->sub_01690910(OwnerCam);
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

struct ARBatarang_ : public ARBatarang
{
	void sub_01640960(ARBatarangProjectile*);
};

// @baa 0x01706ff0
void ARBatarang::execUpdateAliveProjectiles(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(ARBatarangProjectile, NewProjectile);
	P_FINISH;
	((ARBatarang_*)this)->sub_01640960(NewProjectile);
}

struct ARLevelTransition_ : public ARLevelTransition
{
	void sub_0155a090(ARPawnCharacter*);
};

// @baa 0x01708ba0
void ARLevelTransition::execPlayerUpdateTransform(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(ARPawnCharacter, Mesh);
	P_FINISH;
	((ARLevelTransition_*)this)->sub_0155a090(Mesh);
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
