// Engine_0c90000.cpp: 64 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x00c93760
void AKActorSpawnable::execResetComponents( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	ResetComponents();
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
	ClearParameterValues();
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

// @baa 0x00c906d0
void UAnimNodeCrossfader::execGetActiveChild(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UAnimNodeSequence**)Result = this->sub_00c7a590();
}

// @baa 0x00c9b9a0
void UMaterialInstanceTimeVarying::execGetMaxDurationFromAllParameters(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(FLOAT*)Result = GetMaxDurationFromAllCurves();
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

// @baa 0x00c90d60
void UAnimNodePlayCustomAnim::execStopCustomAnim(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(BlendOutTime);
	P_FINISH;
	this->sub_00c4bba0(BlendOutTime);
}

// @baa 0x00c92340
void USkelControlLookAt::execInterpolateTargetLocation(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(DeltaTime);
	P_FINISH;
	this->sub_0090d0a0(DeltaTime);
}

// @baa 0x00c9bb90
void UPath_AvoidInEscapableNodes::execCachePawnReacFlags(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(APawn, P);
	P_FINISH;
	CachePawnReacFlags(P);
}

// @baa 0x00c9fb70
void AFracturedStaticMeshActor::execRemoveDecals(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(IndexToRemoveDecalsFrom);
	P_FINISH;
	this->vf_37c(IndexToRemoveDecalsFrom);
}

// @baa 0x00c93ef0
void URB_Handle::execGetOrientation(FFrame& Stack, RESULT_DECL)
{
    P_FINISH;
    *(FQuat*)Result = vf_164();
}

// @baa 0x00c91b10
void UAnimTree::execSetUseSavedPose(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bUseSaved);
	P_FINISH;
	this->sub_00c7b660(bUseSaved);
}

// @baa 0x00c922d0
void USkelControlLookAt::execSetTargetLocation(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT(FVector, NewTargetLocation);
	P_FINISH;
	this->sub_0090d0f0(NewTargetLocation);
}

// @baa 0x00c92020
void UMorphNodePose::execSetMorphTarget(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(MorphTargetName);
	P_FINISH;
	this->sub_00834900(MorphTargetName);
}

// @baa 0x00c988d0
void USeqAct_CrowdSpawner::execUpdateSpawning(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(DeltaSeconds);
	P_FINISH;
	vf_1a8(DeltaSeconds);
}

// @baa 0x00c917d0
void UAnimNodeSynch::execGetMasterNodeOfGroup(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(GroupName);
	P_FINISH;
	*(void**)Result = this->sub_00c56530(GroupName);
}

// @baa 0x00c918f0
void UAnimNodeSynch::execGetRelativePosition(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(GroupName);
	P_FINISH;
	*(FLOAT*)Result = this->sub_00c56440(GroupName);
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

// @baa 0x00c91c60
void UAnimTree::execGetGroupSynchMaster(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(GroupName);
	P_FINISH;
	*(void**)Result = this->sub_00c61420(GroupName);
}

// @baa 0x00c91ce0
void UAnimTree::execGetGroupNotifyMaster(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(GroupName);
	P_FINISH;
	*(void**)Result = this->sub_00c61490(GroupName);
}

// @baa 0x00c91e00
void UAnimTree::execGetGroupRelativePosition(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(GroupName);
	P_FINISH;
	*(FLOAT*)Result = this->sub_00c613b0(GroupName);
}

// @baa 0x00c91f20
void UAnimTree::execGetGroupRateScale(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(GroupName);
	P_FINISH;
	*(FLOAT*)Result = this->sub_00c61570(GroupName);
}

// @baa 0x00c91fa0
void UAnimTree::execGetGroupIndex(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(GroupName);
	P_FINISH;
	*(INT*)Result = this->sub_00c556d0(GroupName);
}

// @baa 0x00c94320
void UPhysicsAsset::execFindBodyIndex(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(BodyName);
	P_FINISH;
	*(INT*)Result = this->sub_00a231b0(BodyName);
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

// @baa 0x00c9f1b0
void UFracturedStaticMeshComponent::execIsFragmentDestroyable(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(FragmentIndex);
	P_FINISH;
	*(UBOOL*)Result = vf_29c(FragmentIndex);
}

// @baa 0x00c9f220
void UFracturedStaticMeshComponent::execIsRootFragment(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(FragmentIndex);
	P_FINISH;
	*(UBOOL*)Result = vf_2a0(FragmentIndex);
}

// @baa 0x00c9f290
void UFracturedStaticMeshComponent::execIsNoPhysFragment(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(FragmentIndex);
	P_FINISH;
	*(UBOOL*)Result = vf_2a4(FragmentIndex);
}

// @baa 0x00c9f9f0
void AFracturedStaticMeshActor::execSetInXrayModeNative(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(On);
	P_FINISH;
	vf_364(On);
}

// @baa 0x00c9fa70
void AFracturedStaticMeshActor::execUpdateStasis(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(NewValue);
	P_FINISH;
	vf_368(NewValue);
}

// @baa 0x00c9b880
// @baa 0x00c9b880
void UMaterialInstanceTimeVarying::execSetDuration(FFrame& Stack, RESULT_DECL)
{
    P_GET_FLOAT(Value);
    P_FINISH;
    SetDuration(Value);
}

// @baa 0x00c93df0
// @baa 0x00c93df0
void URB_Handle::execUpdateSmoothLocation(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT_REF(FVector, NewLocation);
    P_FINISH;
    UpdateSmoothLocation(NewLocation);
}

// @baa 0x00c9f300
void UFracturedStaticMeshComponent::execGetFragmentBox(FFrame& Stack, RESULT_DECL)
{
    P_GET_INT(FragmentIndex);
    P_FINISH;
    *(FBox*)Result = GetFragmentBox(FragmentIndex);
}

// @baa 0x00c90e30
void UAnimNodeBlendList::execSetActiveChild(FFrame& Stack, RESULT_DECL)
{
    P_GET_INT(ChildIndex);
    P_GET_FLOAT(BlendTime);
    P_FINISH;
    SetActiveChild(ChildIndex, BlendTime);
}

/* UAnimNodeCrossfader::GetAnimName (0xc7e080) isn't declared in the kit. */

// @baa 0x00c90680
void UAnimNodeCrossfader::execGetAnimName(FFrame& Stack, RESULT_DECL)
{
    P_FINISH;
    *(FName*)Result = this->GetAnimName();
}

/* UAnimNodePlayCustomAnim::PlayCustomAnim (0xc7c940) isn't declared in the kit. */

// @baa 0x00c90a40
void UAnimNodePlayCustomAnim::execPlayCustomAnim(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(AnimName);
    P_GET_FLOAT(Rate);
    P_GET_FLOAT_OPTX(BlendInTime, 0.f);
    P_GET_FLOAT_OPTX(BlendOutTime, 0.f);
    P_GET_UBOOL_OPTX(bLooping, FALSE);
    P_GET_UBOOL_OPTX(bOverride, FALSE);
    P_FINISH;
    *(FLOAT*)Result = this->PlayCustomAnim(AnimName, Rate, BlendInTime, BlendOutTime, bLooping, bOverride);
}

/* UAnimNodePlayCustomAnim::PlayCustomAnimByDuration (0xc7ca70) isn't declared in the kit. */

// @baa 0x00c90bd0
void UAnimNodePlayCustomAnim::execPlayCustomAnimByDuration(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(AnimName);
    P_GET_FLOAT(Duration);
    P_GET_FLOAT_OPTX(BlendInTime, 0.f);
    P_GET_FLOAT_OPTX(BlendOutTime, 0.f);
    P_GET_UBOOL_OPTX(bLooping, FALSE);
    P_GET_UBOOL_OPTX(bOverride, FALSE);
    P_FINISH;
    this->PlayCustomAnimByDuration(AnimName, Duration, BlendInTime, BlendOutTime, bLooping, bOverride);
}

/* UAnimNodeSynch::AddNodeToGroup (0xc56250) isn't declared in the kit. */

// @baa 0x00c91690
void UAnimNodeSynch::execAddNodeToGroup(FFrame& Stack, RESULT_DECL)
{
    P_GET_OBJECT(UAnimNodeSequence, SeqNode);
    P_GET_NAME(GroupName);
    P_FINISH;
    this->AddNodeToGroup(SeqNode, GroupName);
}

/* UAnimNodeSynch::RemoveNodeFromGroup (0xc62830) isn't declared in the kit. */

// @baa 0x00c91730
void UAnimNodeSynch::execRemoveNodeFromGroup(FFrame& Stack, RESULT_DECL)
{
    P_GET_OBJECT(UAnimNodeSequence, SeqNode);
    P_GET_NAME(GroupName);
    P_FINISH;
    this->RemoveNodeFromGroup(SeqNode, GroupName);
}

/* UAnimNodeSynch::ForceRelativePosition (0xc56300) isn't declared in the kit. */

// @baa 0x00c91850
void UAnimNodeSynch::execForceRelativePosition(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(GroupName);
    P_GET_FLOAT(RelativePosition);
    P_FINISH;
    this->ForceRelativePosition(GroupName, RelativePosition);
}

/* UAnimNodeSynch::SetGroupRateScale (0xc565f0) isn't declared in the kit. */

// @baa 0x00c91970
void UAnimNodeSynch::execSetGroupRateScale(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(GroupName);
    P_GET_FLOAT(NewRateScale);
    P_FINISH;
    this->SetGroupRateScale(GroupName, NewRateScale);
}

/* UAnimTree::SetAnimGroupForNode (0xc61170) isn't declared in the kit. */

// @baa 0x00c91b80
void UAnimTree::execSetAnimGroupForNode(FFrame& Stack, RESULT_DECL)
{
    P_GET_OBJECT(UAnimNodeSequence, SeqNode);
    P_GET_NAME(GroupName);
    P_GET_UBOOL_OPTX(bCreateIfNotFound, FALSE);
    P_FINISH;
    *(UBOOL*)Result = this->SetAnimGroupForNode(SeqNode, GroupName, bCreateIfNotFound);
}

/* UAnimTree::ForceGroupRelativePosition (0xc55580) isn't declared in the kit. */

// @baa 0x00c91d60
void UAnimTree::execForceGroupRelativePosition(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(GroupName);
    P_GET_FLOAT(RelativePosition);
    P_FINISH;
    this->ForceGroupRelativePosition(GroupName, RelativePosition);
}

/* UAnimTree::SetGroupRateScale (0xc61500) isn't declared in the kit. */

// @baa 0x00c91e80
void UAnimTree::execSetGroupRateScale(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(GroupName);
    P_GET_FLOAT(NewRateScale);
    P_FINISH;
    this->SetGroupRateScale(GroupName, NewRateScale);
}

extern FName g_026c5128;
	/* SpawnAgent */
struct USeqAct_CrowdSpawner_ : public USeqAct_CrowdSpawner
{
	class ACrowdAgent* eventSpawnAgent(class AActor* SpawnLoc);
};

// @baa 0x00c98940
/* SeqAct_CrowdSpawner.SpawnAgent script event: the generated glue, out of line here. */
class ACrowdAgent* USeqAct_CrowdSpawner_::eventSpawnAgent(class AActor* SpawnLoc)
{
	struct SeqAct_CrowdSpawner_eventSpawnAgent_Parms
	{
		class AActor* SpawnLoc;
		class ACrowdAgent* ReturnValue;
	} Parms;
	Parms.ReturnValue = NULL;
	Parms.SpawnLoc = SpawnLoc;
	ProcessEvent(FindFunctionChecked(g_026c5128), &Parms);
	return Parms.ReturnValue;
}

// @baa 0x00c9f380
void UFracturedStaticMeshComponent::execGetFragmentAverageExteriorNormal(FFrame& Stack, RESULT_DECL)
{
    P_GET_INT(FragmentIndex);
    P_FINISH;
    *(FVector*)Result = GetFragmentAverageExteriorNormal(FragmentIndex);
}

// @baa 0x00c9b540
void UMaterialInstanceTimeVarying::execSetScalarParameterValue(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(ParameterName);
    P_GET_FLOAT(Value);
    P_FINISH;
    SetScalarParameterValue(ParameterName, Value);
}

// @baa 0x00c9b5f0
void UMaterialInstanceTimeVarying::execSetTextureParameterValue(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(ParameterName);
    P_GET_OBJECT(UTexture, Value);
    P_FINISH;
    SetTextureParameterValue(ParameterName, Value);
}

// @baa 0x00c9b7d0
void UMaterialInstanceTimeVarying::execSetScalarStartTime(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(ParameterName);
    P_GET_FLOAT(Value);
    P_FINISH;
    SetScalarStartTime(ParameterName, Value);
}

// @baa 0x00c9b8f0
void UMaterialInstanceTimeVarying::execSetVectorStartTime(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(ParameterName);
    P_GET_FLOAT(Value);
    P_FINISH;
    SetVectorStartTime(ParameterName, Value);
}

/* USkelControlLookAt::CanLookAtPoint (0x922d70) isn't declared in the kit. */

// @baa 0x00c92450
void USkelControlLookAt::execCanLookAtPoint(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FVector, PointLoc);
    P_GET_UBOOL_OPTX(bDrawDebugInfo, FALSE);
    P_GET_UBOOL_OPTX(bDebugUsePersistentLines, FALSE);
    P_GET_UBOOL_OPTX(bDebugFlushLinesFirst, FALSE);
    P_FINISH;
    *(UBOOL*)Result = this->CanLookAtPoint(PointLoc, bDrawDebugInfo, bDebugUsePersistentLines, bDebugFlushLinesFirst);
}

/* USkelControlLookAt::SetLookAtAlpha (0x90d060) isn't declared in the kit. */

// @baa 0x00c923b0
void USkelControlLookAt::execSetLookAtAlpha(FFrame& Stack, RESULT_DECL)
{
    P_GET_FLOAT(DesiredAlpha);
    P_GET_FLOAT(DesiredBlendTime);
    P_FINISH;
    this->SetLookAtAlpha(DesiredAlpha, DesiredBlendTime);
}
