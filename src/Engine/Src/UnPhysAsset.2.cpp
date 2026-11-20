// UnPhysAsset.cpp: 38 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x00c94e90
void URB_BodyInstance::execIsFixed( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(UBOOL*)Result = IsFixed();
}

// @baa 0x00c94ed0
void URB_BodyInstance::execIsValidBodyInstance( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(UBOOL*)Result = IsValidBodyInstance();
}

// @baa 0x00c95440
void URB_BodyInstance::execSetPhysMaterialOverride(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UPhysicalMaterial, NewPhysMaterial);
	P_FINISH;
	SetPhysMaterialOverride(NewPhysMaterial);
}

// @baa 0x00c955e0
void URB_BodyInstance::execUpdateDampingProperties( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	UpdateDampingProperties();
}

// @baa 0x00c94f10
void URB_BodyInstance::execGetPhysicsAssetInstance(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UPhysicsAssetInstance**)Result = ((URB_BodyInstance*)this)->GetPhysicsAssetInstance();
}

// @baa 0x00c95580
void URB_BodyInstance::execUpdateMassProperties(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(URB_BodySetup, Setup);
	P_FINISH;
	this->UpdateMassProperties(Setup);
}

// @baa 0x00c94d80
void UPhysicsAssetInstance::execSetDampingRampupProportion(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(NewDampingRampupProportion);
	P_FINISH;
	SetDampingRampupProportion(NewDampingRampupProportion);
}

// @baa 0x00c95510
void URB_BodyInstance::execSetContactReportForceThreshold(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(Threshold);
	P_FINISH;
	this->SetContactReportForceThreshold(Threshold);
}

// @baa 0x00c95610
void URB_BodyInstance::execSetDampingRampupProportion(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(NewDampingRampupProportion);
	P_FINISH;
	this->SetDampingRampupProportion(NewDampingRampupProportion);
}

// @baa 0x00c94600
void UPhysicsAssetInstance::execSetAllBodiesFixed(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bNewFixed);
	P_FINISH;
	this->SetAllBodiesFixed(bNewFixed);
}

// @baa 0x00c94e20
void URB_BodyInstance::execSetFixed(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bNewFixed);
	P_FINISH;
	this->SetFixed(bNewFixed);
}

// @baa 0x00c953d0
void URB_BodyInstance::execSetBlockRigidBody(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bNewBlockRigidBody);
	P_FINISH;
	this->SetBlockRigidBody(bNewBlockRigidBody);
}

// @baa 0x00c954a0
void URB_BodyInstance::execEnableCollisionResponse(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bEnableResponse);
	P_FINISH;
	this->EnableCollisionResponse(bEnableResponse);
}

// @baa 0x00c94ae0
void UPhysicsAssetInstance::execSetFullAnimWeightBlockRigidBody(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bNewBlockRigidBody);
	P_GET_OBJECT(USkeletalMeshComponent, SkelMesh);
	P_FINISH;
	SetFullAnimWeightBlockRigidBody(bNewBlockRigidBody, SkelMesh);
}

// @baa 0x00c94b80
void UPhysicsAssetInstance::execSetFullAnimWeightBonesFixed(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bNewFixed);
	P_GET_OBJECT(USkeletalMeshComponent, SkelMesh);
	P_FINISH;
	SetFullAnimWeightBonesFixed(bNewFixed, SkelMesh);
}

// @baa 0x00c94c20
void UPhysicsAssetInstance::execFindBodyInstance(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(BodyName);
	P_GET_OBJECT(UPhysicsAsset, InAsset);
	P_FINISH;
	*(URB_BodyInstance**)Result = FindBodyInstance(BodyName, InAsset);
}

// @baa 0x00c94cd0
void UPhysicsAssetInstance::execFindConstraintInstance(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(ConName);
	P_GET_OBJECT(UPhysicsAsset, InAsset);
	P_FINISH;
	*(URB_ConstraintInstance**)Result = FindConstraintInstance(ConName, InAsset);
}

// @baa 0x00c95310
void URB_BodyInstance::execSetBoneSpringTarget(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT_REF(FMatrix, InBoneTarget);
	P_GET_UBOOL(bTeleport);
	P_FINISH;
	SetBoneSpringTarget(InBoneTarget, bTeleport);
}

// @baa 0x00c94540
void UPhysicsAssetInstance::execGetTotalMassBelowBone(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(InBoneName);
	P_GET_OBJECT(UPhysicsAsset, InAsset);
	P_GET_OBJECT(USkeletalMesh, InSkelMesh);
	P_FINISH;
	*(FLOAT*)Result = GetTotalMassBelowBone(InBoneName, InAsset, InSkelMesh);
}

// @baa 0x00c943a0
void UPhysicsAssetInstance::execSetLinearDriveScale(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(InLinearSpringScale);
	P_GET_FLOAT(InLinearDampingScale);
	P_GET_FLOAT(InLinearForceLimitScale);
	P_FINISH;
	SetLinearDriveScale(InLinearSpringScale, InLinearDampingScale, InLinearForceLimitScale);
}

// @baa 0x00c94470
void UPhysicsAssetInstance::execSetAngularDriveScale(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(InAngularSpringScale);
	P_GET_FLOAT(InAngularDampingScale);
	P_GET_FLOAT(InAngularForceLimitScale);
	P_FINISH;
	SetAngularDriveScale(InAngularSpringScale, InAngularDampingScale, InAngularForceLimitScale);
}

// @baa 0x00c95120
void URB_BodyInstance::execEnableBoneSpring(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bInEnableLinear);
	P_GET_UBOOL(bInEnableAngular);
	P_GET_STRUCT_REF(FMatrix, InBoneTarget);
	P_FINISH;
	EnableBoneSpring(bInEnableLinear, bInEnableAngular, InBoneTarget);
}

// @baa 0x00c95210
void URB_BodyInstance::execSetBoneSpringParams(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(InLinearSpring);
	P_GET_FLOAT(InLinearDamping);
	P_GET_FLOAT(InAngularSpring);
	P_GET_FLOAT(InAngularDamping);
	P_FINISH;
	SetBoneSpringParams(InLinearSpring, InLinearDamping, InAngularSpring, InAngularDamping);
}

// @baa 0x00c94670
void UPhysicsAssetInstance::execSetGroupBodiesFixed(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bNewFixed);
	P_GET_NAME(GroupName);
	P_GET_OBJECT(USkeletalMeshComponent, SkelMesh);
	P_GET_UBOOL_OPTX(bSetOtherBodiesToComplement, FALSE);
	P_FINISH;
	SetGroupBodiesFixed(bNewFixed, GroupName, SkelMesh, bSetOtherBodiesToComplement);
}

// @baa 0x00c94890
void UPhysicsAssetInstance::execSetAllMotorsAngularVelocityDrive(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bEnableSwingDrive);
	P_GET_UBOOL(bEnableTwistDrive);
	P_GET_OBJECT(USkeletalMeshComponent, SkelMeshComp);
	P_GET_UBOOL_OPTX(bSkipFullAnimWeightBodies, FALSE);
	P_FINISH;
	SetAllMotorsAngularVelocityDrive(bEnableSwingDrive, bEnableTwistDrive, SkelMeshComp, bSkipFullAnimWeightBodies);
}

// @baa 0x00c94780
void UPhysicsAssetInstance::execSetAllMotorsAngularPositionDrive(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bEnableSwingDrive);
	P_GET_UBOOL(bEnableTwistDrive);
	P_GET_OBJECT_OPTX(USkeletalMeshComponent, SkelMesh, NULL);
	P_GET_UBOOL_OPTX(bSkipFullAnimWeightBodies, FALSE);
	P_FINISH;
	SetAllMotorsAngularPositionDrive(bEnableSwingDrive, bEnableTwistDrive, SkelMesh, bSkipFullAnimWeightBodies);
}

// @baa 0x00c949a0
void UPhysicsAssetInstance::execSetAllMotorsAngularDriveParams(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(InSpring);
	P_GET_FLOAT(InDamping);
	P_GET_FLOAT(InForceLimit);
	P_GET_OBJECT_OPTX(USkeletalMeshComponent, SkelMesh, NULL);
	P_GET_UBOOL_OPTX(bSkipFullAnimWeightBodies, FALSE);
	P_FINISH;
	SetAllMotorsAngularDriveParams(InSpring, InDamping, InForceLimit, SkelMesh, bSkipFullAnimWeightBodies);
}

// @baa 0x00cc1b50
void UPhysicsAssetInstance::execSetNamedBodiesBlockRigidBody(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bNewBlockRigidBody);
	P_GET_TARRAY(FName, BoneNames);
	P_GET_OBJECT(USkeletalMeshComponent, SkelMesh);
	P_FINISH;
	SetNamedBodiesBlockRigidBody(bNewBlockRigidBody, BoneNames, SkelMesh);
}

// @baa 0x00cc19e0
void UPhysicsAssetInstance::execSetNamedRBBoneSprings(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bEnable);
	P_GET_TARRAY(FName, BoneNames);
	P_GET_FLOAT(InBoneLinearSpring);
	P_GET_FLOAT(InBoneAngularSpring);
	P_GET_OBJECT(USkeletalMeshComponent, SkelMeshComp);
	P_FINISH;
	SetNamedRBBoneSprings(bEnable, BoneNames, InBoneLinearSpring, InBoneAngularSpring, SkelMeshComp);
}

// @baa 0x00cc16e0
void UPhysicsAssetInstance::execSetNamedMotorsAngularPositionDrive(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bEnableSwingDrive);
	P_GET_UBOOL(bEnableTwistDrive);
	P_GET_TARRAY(FName, BoneNames);
	P_GET_OBJECT(USkeletalMeshComponent, SkelMeshComp);
	P_GET_UBOOL_OPTX(bSetOtherBodiesToComplement, FALSE);
	P_FINISH;
	SetNamedMotorsAngularPositionDrive(bEnableSwingDrive, bEnableTwistDrive, BoneNames, SkelMeshComp, bSetOtherBodiesToComplement);
}

// @baa 0x00cc1860
void UPhysicsAssetInstance::execSetNamedMotorsAngularVelocityDrive(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bEnableSwingDrive);
	P_GET_UBOOL(bEnableTwistDrive);
	P_GET_TARRAY(FName, BoneNames);
	P_GET_OBJECT(USkeletalMeshComponent, SkelMeshComp);
	P_GET_UBOOL_OPTX(bSetOtherBodiesToComplement, FALSE);
	P_FINISH;
	SetNamedMotorsAngularVelocityDrive(bEnableSwingDrive, bEnableTwistDrive, BoneNames, SkelMeshComp, bSetOtherBodiesToComplement);
}

// @baa 0x00cc1560
void UPhysicsAssetInstance::execSetNamedBodiesFixed(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bNewFixed);
	P_GET_TARRAY(FName, BoneNames);
	P_GET_OBJECT(USkeletalMeshComponent, SkelMesh);
	P_GET_UBOOL_OPTX(bSetOtherBodiesToComplement, FALSE);
	P_GET_UBOOL_OPTX(bSkipFullAnimWeightBodies, FALSE);
	P_FINISH;
	SetNamedBodiesFixed(bNewFixed, BoneNames, SkelMesh, bSetOtherBodiesToComplement, bSkipFullAnimWeightBodies);
}

// @baa 0x00c94f50
void URB_BodyInstance::execGetUnrealWorldTM(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(FMatrix*)Result = GetUnrealWorldTM();
}

// @baa 0x00c94fa0
void URB_BodyInstance::execGetUnrealWorldVelocity(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(FVector*)Result = GetUnrealWorldVelocity();
}

// @baa 0x00c94ff0
void URB_BodyInstance::execGetUnrealWorldAngularVelocity(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(FVector*)Result = GetUnrealWorldAngularVelocity();
}

// @baa 0x00c95040
void URB_BodyInstance::execGetUnrealWorldPosition(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(FVector*)Result = GetUnrealWorldPosition();
}

// @baa 0x00c95090
void URB_BodyInstance::execGetUnrealWorldVelocityAtPoint(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT(FVector, Point);
	P_FINISH;
	*(FVector*)Result = GetUnrealWorldVelocityAtPoint(Point);
}

extern FName g_026c4f70;
	/* ENGINE_OnRigidBodySpringOverextension */

// @baa 0x009f7230
/* The script event's generated glue (EngineClasses.h), out of line here. */
void AActor::eventOnRigidBodySpringOverextension(URB_BodyInstance* BodyInstance)
{
	struct Actor_eventOnRigidBodySpringOverextension_Parms
	{
		class URB_BodyInstance* BodyInstance;
	} Parms;
	Parms.BodyInstance = BodyInstance;
	ProcessEvent(FindFunctionChecked(g_026c4f70), &Parms);
}
