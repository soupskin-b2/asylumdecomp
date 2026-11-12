// Core_1e10000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// URAnimNode_Pose's script natives that the kit's class does not declare.
struct URAnimNode_Pose_ : public URAnimNode_Pose
{
	void execSnapFloorCorrection(FFrame& Stack, RESULT_DECL);
	void execGetFloorNormalInfo(FFrame& Stack, RESULT_DECL);
	void execGetFloorCorrectionInfo(FFrame& Stack, RESULT_DECL);
	void execProcessStepUp(FFrame& Stack, RESULT_DECL);
	void execGetPelvisPhysicsBody(FFrame& Stack, RESULT_DECL);
	void execDisableTick(FFrame& Stack, RESULT_DECL);
	void execGetAdditiveAnim(FFrame& Stack, RESULT_DECL);
	void execGetEmptyAnim(FFrame& Stack, RESULT_DECL);
	void execGetFullBodyAnim(FFrame& Stack, RESULT_DECL);
	void execIsAimAtOnTarget(FFrame& Stack, RESULT_DECL);
	void execSetIdleTimeScale(FFrame& Stack, RESULT_DECL);
	void execGetRagdollFacing(FFrame& Stack, RESULT_DECL);
	void execAddRagdollForce(FFrame& Stack, RESULT_DECL);
	void execBreakRagdollConstraint(FFrame& Stack, RESULT_DECL);
	void execSetRagdollConstraintLimit(FFrame& Stack, RESULT_DECL);
	void execDeactivateMotors(FFrame& Stack, RESULT_DECL);
	void execActivateAllMotors(FFrame& Stack, RESULT_DECL);
	void execActivateMotors(FFrame& Stack, RESULT_DECL);
	void execIsConsideringStuckAsARagdoll(FFrame& Stack, RESULT_DECL);
	void execIsStuckAsARagdoll(FFrame& Stack, RESULT_DECL);
	void execIsRagdoll(FFrame& Stack, RESULT_DECL);
	void execPopRagdoll(FFrame& Stack, RESULT_DECL);
	void execPushRagdollOff(FFrame& Stack, RESULT_DECL);
	void execPushRagdollOnMostlyFixed(FFrame& Stack, RESULT_DECL);
	void execPushRagdollOn(FFrame& Stack, RESULT_DECL);
	void execGetThoughts(FFrame& Stack, RESULT_DECL);
	void execIsFallingOrLanding(FFrame& Stack, RESULT_DECL);
	void execIsFalling(FFrame& Stack, RESULT_DECL);
	void execSetAdditiveAnimStateOnAll(FFrame& Stack, RESULT_DECL);
	void execSetAdditiveAnimState(FFrame& Stack, RESULT_DECL);
	void execGetTransitionAnimFromCurrent(FFrame& Stack, RESULT_DECL);
	void execGetTransitionAnim(FFrame& Stack, RESULT_DECL);
	void execGetTransitionActorPosition(FFrame& Stack, RESULT_DECL);
	void execIsPastTransitionMeetingPointEnd(FFrame& Stack, RESULT_DECL);
	void execIsPastTransitionMeetingPointBegin(FFrame& Stack, RESULT_DECL);
	void execWillBeInTransition(FFrame& Stack, RESULT_DECL);
	void execGetTimeThroughTransition(FFrame& Stack, RESULT_DECL);
	void execIsInTransition(FFrame& Stack, RESULT_DECL);
	void execIsInAnyNonAutomaticTransition(FFrame& Stack, RESULT_DECL);
	void execIsInAnyAutomaticTransition(FFrame& Stack, RESULT_DECL);
	void execIsInAnyTransition(FFrame& Stack, RESULT_DECL);
	void execIsPlayingAnyOverlay(FFrame& Stack, RESULT_DECL);
	void execIsPlayingOverlay(FFrame& Stack, RESULT_DECL);
	void execStopAdditiveOverlay(FFrame& Stack, RESULT_DECL);
	void execPlayAdditiveOverlay(FFrame& Stack, RESULT_DECL);
	void execStopIdleOverlay(FFrame& Stack, RESULT_DECL);
	void execPlayIdleOverlay(FFrame& Stack, RESULT_DECL);
	void execStopMovementOverlay(FFrame& Stack, RESULT_DECL);
	void execPlayMovementOverlay(FFrame& Stack, RESULT_DECL);
	void execStopWeaponOverlay(FFrame& Stack, RESULT_DECL);
	void execPlayWeaponOverlay(FFrame& Stack, RESULT_DECL);
	void execOverrideYawVelocity(FFrame& Stack, RESULT_DECL);
	void execOverrideTranslationVelocity(FFrame& Stack, RESULT_DECL);
	void execAddYaw(FFrame& Stack, RESULT_DECL);
	void execAddYawVelocity(FFrame& Stack, RESULT_DECL);
	void execAddTranslation(FFrame& Stack, RESULT_DECL);
	void execAddTranslationVelocity(FFrame& Stack, RESULT_DECL);
	void execGetLegDirection(FFrame& Stack, RESULT_DECL);
	void execGetFaceAtDirection(FFrame& Stack, RESULT_DECL);
	void execStopFaceAt(FFrame& Stack, RESULT_DECL);
	void execFaceAtActor(FFrame& Stack, RESULT_DECL);
	void execFaceAt(FFrame& Stack, RESULT_DECL);
	void execStopLookAt(FFrame& Stack, RESULT_DECL);
	void execLookAtActor(FFrame& Stack, RESULT_DECL);
	void execLookAt(FFrame& Stack, RESULT_DECL);
	void execGetActualAimAtDirection(FFrame& Stack, RESULT_DECL);
	void execGetTargetAimAtDirection(FFrame& Stack, RESULT_DECL);
	void execSnapAimAt(FFrame& Stack, RESULT_DECL);
	void execStopAimAt(FFrame& Stack, RESULT_DECL);
	void execAimAtActor(FFrame& Stack, RESULT_DECL);
	void execAimAt(FFrame& Stack, RESULT_DECL);
	void execIsMoveToFinished(FFrame& Stack, RESULT_DECL);
	void execIsMoveToActive(FFrame& Stack, RESULT_DECL);
	void execGetMoveToDirection(FFrame& Stack, RESULT_DECL);
	void execInstantStopMoveTo(FFrame& Stack, RESULT_DECL);
	void execStopMoveTo(FFrame& Stack, RESULT_DECL);
	void execMoveTo(FFrame& Stack, RESULT_DECL);
	void execGetMovementSpeedScale(FFrame& Stack, RESULT_DECL);
	void execGetMovementSpeed(FFrame& Stack, RESULT_DECL);
	void execSetMovementSpeed(FFrame& Stack, RESULT_DECL);
	void execIsInWeaponTransition(FFrame& Stack, RESULT_DECL);
	void execIsPoseMirrored(FFrame& Stack, RESULT_DECL);
	void execHasPose(FFrame& Stack, RESULT_DECL);
	void execIsInWeaponStance(FFrame& Stack, RESULT_DECL);
	void execIsInMovementStance(FFrame& Stack, RESULT_DECL);
	void execGetIdleStance(FFrame& Stack, RESULT_DECL);
	void execGetWeaponStance(FFrame& Stack, RESULT_DECL);
	void execGetMovementStance(FFrame& Stack, RESULT_DECL);
	void execEndSetDirectionalWeights(FFrame& Stack, RESULT_DECL);
	void execSetDirectionalWeight(FFrame& Stack, RESULT_DECL);
	void execBeginSetDirectionalWeights(FFrame& Stack, RESULT_DECL);
	void execGetTransitionTargetRotation(FFrame& Stack, RESULT_DECL);
	void execGetTransitionTargetYaw(FFrame& Stack, RESULT_DECL);
	void execGetTransitionTargetPosition(FFrame& Stack, RESULT_DECL);
	void execSetTransitionTargetRotation(FFrame& Stack, RESULT_DECL);
	void execSetTransitionTargetYaw(FFrame& Stack, RESULT_DECL);
	void execSetTransitionTargetPosition(FFrame& Stack, RESULT_DECL);
	void execOverrideTransitionTime(FFrame& Stack, RESULT_DECL);
	void execChangePose(FFrame& Stack, RESULT_DECL);
};

/* UnScript.h DECLARE_NATIVE_TYPE: the class's table of script natives (name, member pointer). */
typedef void (URAnimNode_Pose_::*URAnimNode_PoseNative)(FFrame& TheStack, RESULT_DECL);

#pragma pack(push, 4)
struct URAnimNode_PoseNativeInfo
{
	const TCHAR* Name;
	URAnimNode_PoseNative Pointer;
};

#pragma pack(pop)
#define MAP_NATIVE(cls, name) { TEXT("int") TEXT(#cls) TEXT(#name), &URAnimNode_Pose_::name },
// @baa 0x01e1e6c0
URAnimNode_PoseNativeInfo GBmGameURAnimNode_PoseNatives[] =
{
	MAP_NATIVE(URAnimNode_Pose, execSnapFloorCorrection)
	MAP_NATIVE(URAnimNode_Pose, execGetFloorNormalInfo)
	MAP_NATIVE(URAnimNode_Pose, execGetFloorCorrectionInfo)
	MAP_NATIVE(URAnimNode_Pose, execProcessStepUp)
	MAP_NATIVE(URAnimNode_Pose, execGetPelvisPhysicsBody)
	MAP_NATIVE(URAnimNode_Pose, execDisableTick)
	MAP_NATIVE(URAnimNode_Pose, execGetAdditiveAnim)
	MAP_NATIVE(URAnimNode_Pose, execGetEmptyAnim)
	MAP_NATIVE(URAnimNode_Pose, execGetFullBodyAnim)
	MAP_NATIVE(URAnimNode_Pose, execIsAimAtOnTarget)
	MAP_NATIVE(URAnimNode_Pose, execSetIdleTimeScale)
	MAP_NATIVE(URAnimNode_Pose, execGetRagdollFacing)
	MAP_NATIVE(URAnimNode_Pose, execAddRagdollForce)
	MAP_NATIVE(URAnimNode_Pose, execBreakRagdollConstraint)
	MAP_NATIVE(URAnimNode_Pose, execSetRagdollConstraintLimit)
	MAP_NATIVE(URAnimNode_Pose, execDeactivateMotors)
	MAP_NATIVE(URAnimNode_Pose, execActivateAllMotors)
	MAP_NATIVE(URAnimNode_Pose, execActivateMotors)
	MAP_NATIVE(URAnimNode_Pose, execIsConsideringStuckAsARagdoll)
	MAP_NATIVE(URAnimNode_Pose, execIsStuckAsARagdoll)
	MAP_NATIVE(URAnimNode_Pose, execIsRagdoll)
	MAP_NATIVE(URAnimNode_Pose, execPopRagdoll)
	MAP_NATIVE(URAnimNode_Pose, execPushRagdollOff)
	MAP_NATIVE(URAnimNode_Pose, execPushRagdollOnMostlyFixed)
	MAP_NATIVE(URAnimNode_Pose, execPushRagdollOn)
	MAP_NATIVE(URAnimNode_Pose, execGetThoughts)
	MAP_NATIVE(URAnimNode_Pose, execIsFallingOrLanding)
	MAP_NATIVE(URAnimNode_Pose, execIsFalling)
	MAP_NATIVE(URAnimNode_Pose, execSetAdditiveAnimStateOnAll)
	MAP_NATIVE(URAnimNode_Pose, execSetAdditiveAnimState)
	MAP_NATIVE(URAnimNode_Pose, execGetTransitionAnimFromCurrent)
	MAP_NATIVE(URAnimNode_Pose, execGetTransitionAnim)
	MAP_NATIVE(URAnimNode_Pose, execGetTransitionActorPosition)
	MAP_NATIVE(URAnimNode_Pose, execIsPastTransitionMeetingPointEnd)
	MAP_NATIVE(URAnimNode_Pose, execIsPastTransitionMeetingPointBegin)
	MAP_NATIVE(URAnimNode_Pose, execWillBeInTransition)
	MAP_NATIVE(URAnimNode_Pose, execGetTimeThroughTransition)
	MAP_NATIVE(URAnimNode_Pose, execIsInTransition)
	MAP_NATIVE(URAnimNode_Pose, execIsInAnyNonAutomaticTransition)
	MAP_NATIVE(URAnimNode_Pose, execIsInAnyAutomaticTransition)
	MAP_NATIVE(URAnimNode_Pose, execIsInAnyTransition)
	MAP_NATIVE(URAnimNode_Pose, execIsPlayingAnyOverlay)
	MAP_NATIVE(URAnimNode_Pose, execIsPlayingOverlay)
	MAP_NATIVE(URAnimNode_Pose, execStopAdditiveOverlay)
	MAP_NATIVE(URAnimNode_Pose, execPlayAdditiveOverlay)
	MAP_NATIVE(URAnimNode_Pose, execStopIdleOverlay)
	MAP_NATIVE(URAnimNode_Pose, execPlayIdleOverlay)
	MAP_NATIVE(URAnimNode_Pose, execStopMovementOverlay)
	MAP_NATIVE(URAnimNode_Pose, execPlayMovementOverlay)
	MAP_NATIVE(URAnimNode_Pose, execStopWeaponOverlay)
	MAP_NATIVE(URAnimNode_Pose, execPlayWeaponOverlay)
	MAP_NATIVE(URAnimNode_Pose, execOverrideYawVelocity)
	MAP_NATIVE(URAnimNode_Pose, execOverrideTranslationVelocity)
	MAP_NATIVE(URAnimNode_Pose, execAddYaw)
	MAP_NATIVE(URAnimNode_Pose, execAddYawVelocity)
	MAP_NATIVE(URAnimNode_Pose, execAddTranslation)
	MAP_NATIVE(URAnimNode_Pose, execAddTranslationVelocity)
	MAP_NATIVE(URAnimNode_Pose, execGetLegDirection)
	MAP_NATIVE(URAnimNode_Pose, execGetFaceAtDirection)
	MAP_NATIVE(URAnimNode_Pose, execStopFaceAt)
	MAP_NATIVE(URAnimNode_Pose, execFaceAtActor)
	MAP_NATIVE(URAnimNode_Pose, execFaceAt)
	MAP_NATIVE(URAnimNode_Pose, execStopLookAt)
	MAP_NATIVE(URAnimNode_Pose, execLookAtActor)
	MAP_NATIVE(URAnimNode_Pose, execLookAt)
	MAP_NATIVE(URAnimNode_Pose, execGetActualAimAtDirection)
	MAP_NATIVE(URAnimNode_Pose, execGetTargetAimAtDirection)
	MAP_NATIVE(URAnimNode_Pose, execSnapAimAt)
	MAP_NATIVE(URAnimNode_Pose, execStopAimAt)
	MAP_NATIVE(URAnimNode_Pose, execAimAtActor)
	MAP_NATIVE(URAnimNode_Pose, execAimAt)
	MAP_NATIVE(URAnimNode_Pose, execIsMoveToFinished)
	MAP_NATIVE(URAnimNode_Pose, execIsMoveToActive)
	MAP_NATIVE(URAnimNode_Pose, execGetMoveToDirection)
	MAP_NATIVE(URAnimNode_Pose, execInstantStopMoveTo)
	MAP_NATIVE(URAnimNode_Pose, execStopMoveTo)
	MAP_NATIVE(URAnimNode_Pose, execMoveTo)
	MAP_NATIVE(URAnimNode_Pose, execGetMovementSpeedScale)
	MAP_NATIVE(URAnimNode_Pose, execGetMovementSpeed)
	MAP_NATIVE(URAnimNode_Pose, execSetMovementSpeed)
	MAP_NATIVE(URAnimNode_Pose, execIsInWeaponTransition)
	MAP_NATIVE(URAnimNode_Pose, execIsPoseMirrored)
	MAP_NATIVE(URAnimNode_Pose, execHasPose)
	MAP_NATIVE(URAnimNode_Pose, execIsInWeaponStance)
	MAP_NATIVE(URAnimNode_Pose, execIsInMovementStance)
	MAP_NATIVE(URAnimNode_Pose, execGetIdleStance)
	MAP_NATIVE(URAnimNode_Pose, execGetWeaponStance)
	MAP_NATIVE(URAnimNode_Pose, execGetMovementStance)
	MAP_NATIVE(URAnimNode_Pose, execEndSetDirectionalWeights)
	MAP_NATIVE(URAnimNode_Pose, execSetDirectionalWeight)
	MAP_NATIVE(URAnimNode_Pose, execBeginSetDirectionalWeights)
	MAP_NATIVE(URAnimNode_Pose, execGetTransitionTargetRotation)
	MAP_NATIVE(URAnimNode_Pose, execGetTransitionTargetYaw)
	MAP_NATIVE(URAnimNode_Pose, execGetTransitionTargetPosition)
	MAP_NATIVE(URAnimNode_Pose, execSetTransitionTargetRotation)
	MAP_NATIVE(URAnimNode_Pose, execSetTransitionTargetYaw)
	MAP_NATIVE(URAnimNode_Pose, execSetTransitionTargetPosition)
	MAP_NATIVE(URAnimNode_Pose, execOverrideTransitionTime)
	MAP_NATIVE(URAnimNode_Pose, execChangePose)
	{ NULL, NULL }
};
