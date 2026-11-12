// UnPhysAsset.cpp: 38 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

struct URB_BodyInstance_ : public URB_BodyInstance
{
	UBOOL IsFixed();
	void execIsFixed(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c94e90
void URB_BodyInstance_::execIsFixed( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(UBOOL*)Result = IsFixed();
}

struct URB_BodyInstance__00c94ed0 : public URB_BodyInstance
{
	UBOOL IsValidBodyInstance();
	void execIsValidBodyInstance(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c94ed0
void URB_BodyInstance__00c94ed0::execIsValidBodyInstance( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(UBOOL*)Result = IsValidBodyInstance();
}

struct URB_BodyInstance__00c95440 : public URB_BodyInstance
{
	void SetPhysMaterialOverride(UPhysicalMaterial* NewPhysMaterial); /* 00a207c0 */
	void execSetPhysMaterialOverride(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c95440
void URB_BodyInstance__00c95440::execSetPhysMaterialOverride(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UPhysicalMaterial, NewPhysMaterial);
	P_FINISH;
	SetPhysMaterialOverride(NewPhysMaterial);
}

struct URB_BodyInstance__00c955e0 : public URB_BodyInstance
{
	void UpdateDampingProperties();
	void execUpdateDampingProperties(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c955e0
void URB_BodyInstance__00c955e0::execUpdateDampingProperties( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	UpdateDampingProperties();
}

struct URB_BodyInstance__00c94f10 : public URB_BodyInstance
{
	UPhysicsAssetInstance* sub_00a051a0();
};

// @baa 0x00c94f10
void URB_BodyInstance::execGetPhysicsAssetInstance(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UPhysicsAssetInstance**)Result = ((URB_BodyInstance__00c94f10*)this)->sub_00a051a0();
}

struct URB_BodyInstance__00c95580 : public URB_BodyInstance
{
	void sub_00a0a9c0(URB_BodySetup*);
};

// @baa 0x00c95580
void URB_BodyInstance::execUpdateMassProperties(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(URB_BodySetup, Setup);
	P_FINISH;
	((URB_BodyInstance__00c95580*)this)->sub_00a0a9c0(Setup);
}

struct UPhysicsAssetInstance_ : public UPhysicsAssetInstance
{
	void sub_00a0bc60(FLOAT);
};

// @baa 0x00c94d80
void UPhysicsAssetInstance::execSetDampingRampupProportion(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(NewDampingRampupProportion);
	P_FINISH;
	((UPhysicsAssetInstance_*)this)->sub_00a0bc60(NewDampingRampupProportion);
}

struct URB_BodyInstance__00c95510 : public URB_BodyInstance
{
	void sub_009f9ba0(FLOAT);
};

// @baa 0x00c95510
void URB_BodyInstance::execSetContactReportForceThreshold(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(Threshold);
	P_FINISH;
	((URB_BodyInstance__00c95510*)this)->sub_009f9ba0(Threshold);
}

struct URB_BodyInstance__00c95610 : public URB_BodyInstance
{
	void sub_00a0acb0(FLOAT);
};

// @baa 0x00c95610
void URB_BodyInstance::execSetDampingRampupProportion(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(NewDampingRampupProportion);
	P_FINISH;
	((URB_BodyInstance__00c95610*)this)->sub_00a0acb0(NewDampingRampupProportion);
}

struct UPhysicsAssetInstance__00c94600 : public UPhysicsAssetInstance
{
	void sub_00a0b380(UBOOL);
};

// @baa 0x00c94600
void UPhysicsAssetInstance::execSetAllBodiesFixed(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bNewFixed);
	P_FINISH;
	((UPhysicsAssetInstance__00c94600*)this)->sub_00a0b380(bNewFixed);
}

struct URB_BodyInstance__00c94e20 : public URB_BodyInstance
{
	void sub_00a09ca0(UBOOL);
};

// @baa 0x00c94e20
void URB_BodyInstance::execSetFixed(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bNewFixed);
	P_FINISH;
	((URB_BodyInstance__00c94e20*)this)->sub_00a09ca0(bNewFixed);
}

struct URB_BodyInstance__00c953d0 : public URB_BodyInstance
{
	void sub_009f9a10(UBOOL);
};

// @baa 0x00c953d0
void URB_BodyInstance::execSetBlockRigidBody(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bNewBlockRigidBody);
	P_FINISH;
	((URB_BodyInstance__00c953d0*)this)->sub_009f9a10(bNewBlockRigidBody);
}

struct URB_BodyInstance__00c954a0 : public URB_BodyInstance
{
	void sub_009f9b50(UBOOL);
};

// @baa 0x00c954a0
void URB_BodyInstance::execEnableCollisionResponse(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bEnableResponse);
	P_FINISH;
	((URB_BodyInstance__00c954a0*)this)->sub_009f9b50(bEnableResponse);
}

struct UPhysicsAssetInstance__00c94ae0 : public UPhysicsAssetInstance
{
	void SetFullAnimWeightBlockRigidBody(UBOOL bNewBlockRigidBody, USkeletalMeshComponent* SkelMesh);
	void execSetFullAnimWeightBlockRigidBody(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c94ae0
void UPhysicsAssetInstance__00c94ae0::execSetFullAnimWeightBlockRigidBody(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bNewBlockRigidBody);
	P_GET_OBJECT(USkeletalMeshComponent, SkelMesh);
	P_FINISH;
	SetFullAnimWeightBlockRigidBody(bNewBlockRigidBody, SkelMesh);
}

struct UPhysicsAssetInstance__00c94b80 : public UPhysicsAssetInstance
{
	void SetFullAnimWeightBonesFixed(UBOOL bNewFixed, USkeletalMeshComponent* SkelMesh);
	void execSetFullAnimWeightBonesFixed(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c94b80
void UPhysicsAssetInstance__00c94b80::execSetFullAnimWeightBonesFixed(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bNewFixed);
	P_GET_OBJECT(USkeletalMeshComponent, SkelMesh);
	P_FINISH;
	SetFullAnimWeightBonesFixed(bNewFixed, SkelMesh);
}

struct UPhysicsAssetInstance__00c94c20 : public UPhysicsAssetInstance
{
	URB_BodyInstance* FindBodyInstance(FName BodyName, UPhysicsAsset* InAsset);
	void execFindBodyInstance(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c94c20
void UPhysicsAssetInstance__00c94c20::execFindBodyInstance(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(BodyName);
	P_GET_OBJECT(UPhysicsAsset, InAsset);
	P_FINISH;
	*(URB_BodyInstance**)Result = FindBodyInstance(BodyName, InAsset);
}

struct UPhysicsAssetInstance__00c94cd0 : public UPhysicsAssetInstance
{
	URB_ConstraintInstance* FindConstraintInstance(FName ConName, UPhysicsAsset* InAsset);
	void execFindConstraintInstance(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c94cd0
void UPhysicsAssetInstance__00c94cd0::execFindConstraintInstance(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(ConName);
	P_GET_OBJECT(UPhysicsAsset, InAsset);
	P_FINISH;
	*(URB_ConstraintInstance**)Result = FindConstraintInstance(ConName, InAsset);
}

struct URB_BodyInstance__00c95310 : public URB_BodyInstance
{
	void SetBoneSpringTarget(const FMatrix& InBoneTarget, UBOOL bTeleport);
	void execSetBoneSpringTarget(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c95310
void URB_BodyInstance__00c95310::execSetBoneSpringTarget(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT_REF(FMatrix, InBoneTarget);
	P_GET_UBOOL(bTeleport);
	P_FINISH;
	SetBoneSpringTarget(InBoneTarget, bTeleport);
}

struct UPhysicsAssetInstance__00c94540 : public UPhysicsAssetInstance
{
	FLOAT GetTotalMassBelowBone(FName InBoneName, UPhysicsAsset* InAsset, USkeletalMesh* InSkelMesh);
	void execGetTotalMassBelowBone(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c94540
void UPhysicsAssetInstance__00c94540::execGetTotalMassBelowBone(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(InBoneName);
	P_GET_OBJECT(UPhysicsAsset, InAsset);
	P_GET_OBJECT(USkeletalMesh, InSkelMesh);
	P_FINISH;
	*(FLOAT*)Result = GetTotalMassBelowBone(InBoneName, InAsset, InSkelMesh);
}

struct UPhysicsAssetInstance__00c943a0 : public UPhysicsAssetInstance
{
	void SetLinearDriveScale(FLOAT InLinearSpringScale, FLOAT InLinearDampingScale, FLOAT InLinearForceLimitScale);
	void execSetLinearDriveScale(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c943a0
void UPhysicsAssetInstance__00c943a0::execSetLinearDriveScale(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(InLinearSpringScale);
	P_GET_FLOAT(InLinearDampingScale);
	P_GET_FLOAT(InLinearForceLimitScale);
	P_FINISH;
	SetLinearDriveScale(InLinearSpringScale, InLinearDampingScale, InLinearForceLimitScale);
}

struct UPhysicsAssetInstance__00c94470 : public UPhysicsAssetInstance
{
	void SetAngularDriveScale(FLOAT InAngularSpringScale, FLOAT InAngularDampingScale, FLOAT InAngularForceLimitScale);
	void execSetAngularDriveScale(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c94470
void UPhysicsAssetInstance__00c94470::execSetAngularDriveScale(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(InAngularSpringScale);
	P_GET_FLOAT(InAngularDampingScale);
	P_GET_FLOAT(InAngularForceLimitScale);
	P_FINISH;
	SetAngularDriveScale(InAngularSpringScale, InAngularDampingScale, InAngularForceLimitScale);
}

struct URB_BodyInstance__00c95120 : public URB_BodyInstance
{
	void EnableBoneSpring(UBOOL bInEnableLinear, UBOOL bInEnableAngular, const FMatrix& InBoneTarget);
	void execEnableBoneSpring(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c95120
void URB_BodyInstance__00c95120::execEnableBoneSpring(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bInEnableLinear);
	P_GET_UBOOL(bInEnableAngular);
	P_GET_STRUCT_REF(FMatrix, InBoneTarget);
	P_FINISH;
	EnableBoneSpring(bInEnableLinear, bInEnableAngular, InBoneTarget);
}

struct URB_BodyInstance__00c95210 : public URB_BodyInstance
{
	void SetBoneSpringParams(FLOAT InLinearSpring, FLOAT InLinearDamping, FLOAT InAngularSpring, FLOAT InAngularDamping);
	void execSetBoneSpringParams(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c95210
void URB_BodyInstance__00c95210::execSetBoneSpringParams(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(InLinearSpring);
	P_GET_FLOAT(InLinearDamping);
	P_GET_FLOAT(InAngularSpring);
	P_GET_FLOAT(InAngularDamping);
	P_FINISH;
	SetBoneSpringParams(InLinearSpring, InLinearDamping, InAngularSpring, InAngularDamping);
}

struct UPhysicsAssetInstance__00c94670 : public UPhysicsAssetInstance
{
	void SetGroupBodiesFixed(UBOOL bNewFixed, FName GroupName, USkeletalMeshComponent* SkelMesh, UBOOL bSetOtherBodiesToComplement);
	void execSetGroupBodiesFixed(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c94670
void UPhysicsAssetInstance__00c94670::execSetGroupBodiesFixed(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bNewFixed);
	P_GET_NAME(GroupName);
	P_GET_OBJECT(USkeletalMeshComponent, SkelMesh);
	P_GET_UBOOL_OPTX(bSetOtherBodiesToComplement, FALSE);
	P_FINISH;
	SetGroupBodiesFixed(bNewFixed, GroupName, SkelMesh, bSetOtherBodiesToComplement);
}

struct UPhysicsAssetInstance__00c94890 : public UPhysicsAssetInstance
{
	void SetAllMotorsAngularVelocityDrive(UBOOL bEnableSwingDrive, UBOOL bEnableTwistDrive, USkeletalMeshComponent* SkelMeshComp, UBOOL bSkipFullAnimWeightBodies);
	void execSetAllMotorsAngularVelocityDrive(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c94890
void UPhysicsAssetInstance__00c94890::execSetAllMotorsAngularVelocityDrive(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bEnableSwingDrive);
	P_GET_UBOOL(bEnableTwistDrive);
	P_GET_OBJECT(USkeletalMeshComponent, SkelMeshComp);
	P_GET_UBOOL_OPTX(bSkipFullAnimWeightBodies, FALSE);
	P_FINISH;
	SetAllMotorsAngularVelocityDrive(bEnableSwingDrive, bEnableTwistDrive, SkelMeshComp, bSkipFullAnimWeightBodies);
}

struct UPhysicsAssetInstance__00c94780 : public UPhysicsAssetInstance
{
	void SetAllMotorsAngularPositionDrive(UBOOL bEnableSwingDrive, UBOOL bEnableTwistDrive, USkeletalMeshComponent* SkelMesh, UBOOL bSkipFullAnimWeightBodies);
	void execSetAllMotorsAngularPositionDrive(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c94780
void UPhysicsAssetInstance__00c94780::execSetAllMotorsAngularPositionDrive(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bEnableSwingDrive);
	P_GET_UBOOL(bEnableTwistDrive);
	P_GET_OBJECT_OPTX(USkeletalMeshComponent, SkelMesh, NULL);
	P_GET_UBOOL_OPTX(bSkipFullAnimWeightBodies, FALSE);
	P_FINISH;
	SetAllMotorsAngularPositionDrive(bEnableSwingDrive, bEnableTwistDrive, SkelMesh, bSkipFullAnimWeightBodies);
}

struct UPhysicsAssetInstance__00c949a0 : public UPhysicsAssetInstance
{
	void SetAllMotorsAngularDriveParams(FLOAT InSpring, FLOAT InDamping, FLOAT InForceLimit, USkeletalMeshComponent* SkelMesh, UBOOL bSkipFullAnimWeightBodies);
	void execSetAllMotorsAngularDriveParams(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c949a0
void UPhysicsAssetInstance__00c949a0::execSetAllMotorsAngularDriveParams(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(InSpring);
	P_GET_FLOAT(InDamping);
	P_GET_FLOAT(InForceLimit);
	P_GET_OBJECT_OPTX(USkeletalMeshComponent, SkelMesh, NULL);
	P_GET_UBOOL_OPTX(bSkipFullAnimWeightBodies, FALSE);
	P_FINISH;
	SetAllMotorsAngularDriveParams(InSpring, InDamping, InForceLimit, SkelMesh, bSkipFullAnimWeightBodies);
}

struct UPhysicsAssetInstance__00cc1b50 : public UPhysicsAssetInstance
{
	void SetNamedBodiesBlockRigidBody(UBOOL bNewBlockRigidBody, const TArray<FName>& BoneNames, USkeletalMeshComponent* SkelMesh);
	void execSetNamedBodiesBlockRigidBody(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00cc1b50
void UPhysicsAssetInstance__00cc1b50::execSetNamedBodiesBlockRigidBody(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bNewBlockRigidBody);
	P_GET_TARRAY(FName, BoneNames);
	P_GET_OBJECT(USkeletalMeshComponent, SkelMesh);
	P_FINISH;
	SetNamedBodiesBlockRigidBody(bNewBlockRigidBody, BoneNames, SkelMesh);
}

struct UPhysicsAssetInstance__00cc19e0 : public UPhysicsAssetInstance
{
	void SetNamedRBBoneSprings(UBOOL bEnable, const TArray<FName>& BoneNames, FLOAT InBoneLinearSpring, FLOAT InBoneAngularSpring, USkeletalMeshComponent* SkelMeshComp);
	void execSetNamedRBBoneSprings(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00cc19e0
void UPhysicsAssetInstance__00cc19e0::execSetNamedRBBoneSprings(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bEnable);
	P_GET_TARRAY(FName, BoneNames);
	P_GET_FLOAT(InBoneLinearSpring);
	P_GET_FLOAT(InBoneAngularSpring);
	P_GET_OBJECT(USkeletalMeshComponent, SkelMeshComp);
	P_FINISH;
	SetNamedRBBoneSprings(bEnable, BoneNames, InBoneLinearSpring, InBoneAngularSpring, SkelMeshComp);
}

struct UPhysicsAssetInstance__00cc16e0 : public UPhysicsAssetInstance
{
	void SetNamedMotorsAngularPositionDrive(UBOOL bEnableSwingDrive, UBOOL bEnableTwistDrive, const TArray<FName>& BoneNames, USkeletalMeshComponent* SkelMeshComp, UBOOL bSetOtherBodiesToComplement);
	void execSetNamedMotorsAngularPositionDrive(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00cc16e0
void UPhysicsAssetInstance__00cc16e0::execSetNamedMotorsAngularPositionDrive(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bEnableSwingDrive);
	P_GET_UBOOL(bEnableTwistDrive);
	P_GET_TARRAY(FName, BoneNames);
	P_GET_OBJECT(USkeletalMeshComponent, SkelMeshComp);
	P_GET_UBOOL_OPTX(bSetOtherBodiesToComplement, FALSE);
	P_FINISH;
	SetNamedMotorsAngularPositionDrive(bEnableSwingDrive, bEnableTwistDrive, BoneNames, SkelMeshComp, bSetOtherBodiesToComplement);
}

struct UPhysicsAssetInstance__00cc1860 : public UPhysicsAssetInstance
{
	void SetNamedMotorsAngularVelocityDrive(UBOOL bEnableSwingDrive, UBOOL bEnableTwistDrive, const TArray<FName>& BoneNames, USkeletalMeshComponent* SkelMeshComp, UBOOL bSetOtherBodiesToComplement);
	void execSetNamedMotorsAngularVelocityDrive(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00cc1860
void UPhysicsAssetInstance__00cc1860::execSetNamedMotorsAngularVelocityDrive(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bEnableSwingDrive);
	P_GET_UBOOL(bEnableTwistDrive);
	P_GET_TARRAY(FName, BoneNames);
	P_GET_OBJECT(USkeletalMeshComponent, SkelMeshComp);
	P_GET_UBOOL_OPTX(bSetOtherBodiesToComplement, FALSE);
	P_FINISH;
	SetNamedMotorsAngularVelocityDrive(bEnableSwingDrive, bEnableTwistDrive, BoneNames, SkelMeshComp, bSetOtherBodiesToComplement);
}

struct UPhysicsAssetInstance__00cc1560 : public UPhysicsAssetInstance
{
	void SetNamedBodiesFixed(UBOOL bNewFixed, const TArray<FName>& BoneNames, USkeletalMeshComponent* SkelMesh, UBOOL bSetOtherBodiesToComplement, UBOOL bSkipFullAnimWeightBodies);
	void execSetNamedBodiesFixed(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00cc1560
void UPhysicsAssetInstance__00cc1560::execSetNamedBodiesFixed(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bNewFixed);
	P_GET_TARRAY(FName, BoneNames);
	P_GET_OBJECT(USkeletalMeshComponent, SkelMesh);
	P_GET_UBOOL_OPTX(bSetOtherBodiesToComplement, FALSE);
	P_GET_UBOOL_OPTX(bSkipFullAnimWeightBodies, FALSE);
	P_FINISH;
	SetNamedBodiesFixed(bNewFixed, BoneNames, SkelMesh, bSetOtherBodiesToComplement, bSkipFullAnimWeightBodies);
}

struct URB_BodyInstance__00c94f50 : public URB_BodyInstance
{
	FMatrix GetUnrealWorldTM();
	void execGetUnrealWorldTM(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c94f50
void URB_BodyInstance__00c94f50::execGetUnrealWorldTM(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(FMatrix*)Result = GetUnrealWorldTM();
}

struct URB_BodyInstance__00c94fa0 : public URB_BodyInstance
{
	FVector GetUnrealWorldVelocity();
	void execGetUnrealWorldVelocity(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c94fa0
void URB_BodyInstance__00c94fa0::execGetUnrealWorldVelocity(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(FVector*)Result = GetUnrealWorldVelocity();
}

struct URB_BodyInstance__00c94ff0 : public URB_BodyInstance
{
	FVector GetUnrealWorldAngularVelocity();
	void execGetUnrealWorldAngularVelocity(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c94ff0
void URB_BodyInstance__00c94ff0::execGetUnrealWorldAngularVelocity(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(FVector*)Result = GetUnrealWorldAngularVelocity();
}

struct URB_BodyInstance__00c95040 : public URB_BodyInstance
{
	FVector GetUnrealWorldPosition();
	void execGetUnrealWorldPosition(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c95040
void URB_BodyInstance__00c95040::execGetUnrealWorldPosition(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(FVector*)Result = GetUnrealWorldPosition();
}

struct URB_BodyInstance__00c95090 : public URB_BodyInstance
{
	FVector GetUnrealWorldVelocityAtPoint(FVector Point);
	void execGetUnrealWorldVelocityAtPoint(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c95090
void URB_BodyInstance__00c95090::execGetUnrealWorldVelocityAtPoint(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT(FVector, Point);
	P_FINISH;
	*(FVector*)Result = GetUnrealWorldVelocityAtPoint(Point);
}

extern FName g_026c4f70;
	/* ENGINE_OnRigidBodySpringOverextension */
struct AActor_ : public AActor
{
	void eventOnRigidBodySpringOverextension(URB_BodyInstance* BodyInstance);
};

// @baa 0x009f7230
/* The script event's generated glue (EngineClasses.h), out of line here. */
void AActor_::eventOnRigidBodySpringOverextension(URB_BodyInstance* BodyInstance)
{
	struct Actor_eventOnRigidBodySpringOverextension_Parms
	{
		class URB_BodyInstance* BodyInstance;
	} Parms;
	Parms.BodyInstance = BodyInstance;
	ProcessEvent(FindFunctionChecked(g_026c4f70), &Parms);
}
