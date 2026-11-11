// UnPhysAsset.cpp: 17 functions
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
