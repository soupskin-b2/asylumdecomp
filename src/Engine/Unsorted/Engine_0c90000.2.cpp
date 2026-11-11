// Engine_0c90000.cpp: 37 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x00c93760
void AKActorSpawnable::execResetComponents( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_354();
}

// @baa 0x00c93c80
void URB_Handle::execReleaseComponent( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_150();
}

// @baa 0x00c940e0
void URB_Spring::execClear( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_150();
}

// @baa 0x00c98850
void USeqAct_CrowdSpawner::execCacheSpawnerVars( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_1a0();
}

// @baa 0x00c98890
void USeqAct_CrowdSpawner::execKillAgents( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_1a4();
}

// @baa 0x00c9b750
void UMaterialInstanceTimeVarying::execClearParameterValues( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_178();
}

// @baa 0x00c9cb40
void APhysXEmitterSpawnable::execTerm( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_354();
}

// @baa 0x00c9f450
void AApexDestructibleActor::execCacheFractureEffects( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_354();
}

// @baa 0x00c9f970
void AFracturedStaticMeshActor::execRecreatePhysState( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_35c();
}

// @baa 0x00c9faf0
void AFracturedStaticMeshActor::execResetHealth( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_36c();
}

struct UAnimNodeCrossfader_ : public UAnimNodeCrossfader
{
	UAnimNodeSequence* sub_00c7a590();
};

// @baa 0x00c906d0
void UAnimNodeCrossfader::execGetActiveChild(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UAnimNodeSequence**)Result = ((UAnimNodeCrossfader_*)this)->sub_00c7a590();
}

// @baa 0x00c9b9a0
void UMaterialInstanceTimeVarying::execGetMaxDurationFromAllParameters(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(FLOAT*)Result = vf_198();
}

// @baa 0x00c9f410
void UFracturedStaticMeshComponent::execGetCoreFragmentIndex(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(INT*)Result = vf_2b0();
}

// @baa 0x00c9f9b0
void AFracturedStaticMeshActor::execGetFracturedMeshPhysMaterial(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UPhysicalMaterial**)Result = (UPhysicalMaterial*)vf_360();
}

typedef UBOOL (__thiscall* FSlot)(void*);

// @baa 0x00c9fb30
void AFracturedStaticMeshActor::execSpawnDeferredParts(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = ((FSlot)(*(void***)this)[0x378 / 4])(this);
}

struct UAnimNodePlayCustomAnim_ : public UAnimNodePlayCustomAnim
{
	void sub_00c4bba0(FLOAT);
};

// @baa 0x00c90d60
void UAnimNodePlayCustomAnim::execStopCustomAnim(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(BlendOutTime);
	P_FINISH;
	((UAnimNodePlayCustomAnim_*)this)->sub_00c4bba0(BlendOutTime);
}

struct USkelControlLookAt_ : public USkelControlLookAt
{
	void sub_0090d0a0(FLOAT);
};

// @baa 0x00c92340
void USkelControlLookAt::execInterpolateTargetLocation(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(DeltaTime);
	P_FINISH;
	((USkelControlLookAt_*)this)->sub_0090d0a0(DeltaTime);
}

// @baa 0x00c9bb90
void UPath_AvoidInEscapableNodes::execCachePawnReacFlags(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(APawn, P);
	P_FINISH;
	vf_110((INT)P);
}

struct AFracturedStaticMeshActor_ : public AFracturedStaticMeshActor
{
	void vf_37c(INT);
};

// @baa 0x00c9fb70
void AFracturedStaticMeshActor::execRemoveDecals(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(IndexToRemoveDecalsFrom);
	P_FINISH;
	((AFracturedStaticMeshActor_*)this)->vf_37c(IndexToRemoveDecalsFrom);
}

// @baa 0x00c93ef0
void URB_Handle::execGetOrientation(FFrame& Stack, RESULT_DECL)
{
    P_FINISH;
    *(FQuat*)Result = vf_164();
}

struct UAnimTree_ : public UAnimTree
{
	void sub_00c7b660(UBOOL);
};

// @baa 0x00c91b10
void UAnimTree::execSetUseSavedPose(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bUseSaved);
	P_FINISH;
	((UAnimTree_*)this)->sub_00c7b660(bUseSaved);
}

struct USkelControlLookAt__00c922d0 : public USkelControlLookAt
{
	void sub_0090d0f0(FVector);
};

// @baa 0x00c922d0
void USkelControlLookAt::execSetTargetLocation(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT(FVector, NewTargetLocation);
	P_FINISH;
	((USkelControlLookAt__00c922d0*)this)->sub_0090d0f0(NewTargetLocation);
}

struct UMorphNodePose_ : public UMorphNodePose
{
	void sub_00834900(FName);
};

// @baa 0x00c92020
void UMorphNodePose::execSetMorphTarget(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(MorphTargetName);
	P_FINISH;
	((UMorphNodePose_*)this)->sub_00834900(MorphTargetName);
}

// @baa 0x00c988d0
void USeqAct_CrowdSpawner::execUpdateSpawning(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(DeltaSeconds);
	P_FINISH;
	vf_1a8(DeltaSeconds);
}

struct UAnimNodeSynch_ : public UAnimNodeSynch
{
	void* sub_00c56530(FName);
};

// @baa 0x00c917d0
void UAnimNodeSynch::execGetMasterNodeOfGroup(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(GroupName);
	P_FINISH;
	*(void**)Result = ((UAnimNodeSynch_*)this)->sub_00c56530(GroupName);
}

struct UAnimNodeSynch__00c918f0 : public UAnimNodeSynch
{
	FLOAT sub_00c56440(FName);
};

// @baa 0x00c918f0
void UAnimNodeSynch::execGetRelativePosition(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(GroupName);
	P_FINISH;
	*(FLOAT*)Result = ((UAnimNodeSynch__00c918f0*)this)->sub_00c56440(GroupName);
}

struct UAnimTree__00c91a10 : public UAnimTree
{
	void* sub_00c55810(FName);
};

// @baa 0x00c91a10
void UAnimTree::execFindSkelControl(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(InControlName);
	P_FINISH;
	*(void**)Result = ((UAnimTree__00c91a10*)this)->sub_00c55810(InControlName);
}

struct UAnimTree__00c91a90 : public UAnimTree
{
	void* sub_00c61880(FName);
};

// @baa 0x00c91a90
void UAnimTree::execFindMorphNode(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(InNodeName);
	P_FINISH;
	*(void**)Result = ((UAnimTree__00c91a90*)this)->sub_00c61880(InNodeName);
}

struct UAnimTree__00c91c60 : public UAnimTree
{
	void* sub_00c61420(FName);
};

// @baa 0x00c91c60
void UAnimTree::execGetGroupSynchMaster(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(GroupName);
	P_FINISH;
	*(void**)Result = ((UAnimTree__00c91c60*)this)->sub_00c61420(GroupName);
}

struct UAnimTree__00c91ce0 : public UAnimTree
{
	void* sub_00c61490(FName);
};

// @baa 0x00c91ce0
void UAnimTree::execGetGroupNotifyMaster(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(GroupName);
	P_FINISH;
	*(void**)Result = ((UAnimTree__00c91ce0*)this)->sub_00c61490(GroupName);
}

struct UAnimTree__00c91e00 : public UAnimTree
{
	FLOAT sub_00c613b0(FName);
};

// @baa 0x00c91e00
void UAnimTree::execGetGroupRelativePosition(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(GroupName);
	P_FINISH;
	*(FLOAT*)Result = ((UAnimTree__00c91e00*)this)->sub_00c613b0(GroupName);
}

struct UAnimTree__00c91f20 : public UAnimTree
{
	FLOAT sub_00c61570(FName);
};

// @baa 0x00c91f20
void UAnimTree::execGetGroupRateScale(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(GroupName);
	P_FINISH;
	*(FLOAT*)Result = ((UAnimTree__00c91f20*)this)->sub_00c61570(GroupName);
}

struct UAnimTree__00c91fa0 : public UAnimTree
{
	INT sub_00c556d0(FName);
};

// @baa 0x00c91fa0
void UAnimTree::execGetGroupIndex(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(GroupName);
	P_FINISH;
	*(INT*)Result = ((UAnimTree__00c91fa0*)this)->sub_00c556d0(GroupName);
}

struct UPhysicsAsset_ : public UPhysicsAsset
{
	INT sub_00a231b0(FName);
};

// @baa 0x00c94320
void UPhysicsAsset::execFindBodyIndex(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(BodyName);
	P_FINISH;
	*(INT*)Result = ((UPhysicsAsset_*)this)->sub_00a231b0(BodyName);
}

// @baa 0x00c93ac0
// @baa 0x00c93ac0
void URB_RadialImpulseComponent::execFireImpulse(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FVector, Origin);
    P_FINISH;
    FireImpulse(Origin);
}

// @baa 0x00c93cc0
// @baa 0x00c93cc0
void URB_Handle::execSetLocation(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FVector, NewLocation);
    P_FINISH;
    SetLocation(NewLocation);
}

// @baa 0x00c93e70
// @baa 0x00c93e70
void URB_Handle::execSetOrientation(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FQuat, NewOrientation);
    P_FINISH;
    SetOrientation(NewOrientation);
}
