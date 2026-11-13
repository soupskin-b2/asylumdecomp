// RCapeComponent.cpp: 28 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

struct URCapeComponent_ : public URCapeComponent
{
	UBOOL GetIsInitialised();
	void execGetIsInitialised(FFrame& Stack, RESULT_DECL);
};

// @baa 0x01701ec0
void URCapeComponent_::execGetIsInitialised( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(UBOOL*)Result = GetIsInitialised();
}

struct URCapeComponent__01701fa0 : public URCapeComponent {
    FName GetCurrentCapeStateName(); /* 0x016ae4e0 */
};

// @baa 0x01701fa0
void URCapeComponent::execGetCurrentCapeStateName(FFrame& Stack, RESULT_DECL)
{
    P_FINISH;
    *(FName*)Result = this->GetCurrentCapeStateName();
}

struct URCapeComponent__01702430 : public URCapeComponent
{
	void ForceCapeToAnimPose();
	void execForceCapeToAnimPose(FFrame& Stack, RESULT_DECL);
};

// @baa 0x01702430
void URCapeComponent__01702430::execForceCapeToAnimPose( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	ForceCapeToAnimPose();
}

struct URCapeComponent__01702460 : public URCapeComponent
{
	UBOOL GetIsInCinematicsState();
	void execGetIsInCinematicsState(FFrame& Stack, RESULT_DECL);
};

// @baa 0x01702460
void URCapeComponent__01702460::execGetIsInCinematicsState( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(UBOOL*)Result = GetIsInCinematicsState();
}

struct URCapeComponent__01702a80 : public URCapeComponent
{
	void PauseCape();
	void execPauseCape(FFrame& Stack, RESULT_DECL);
};

// @baa 0x01702a80
void URCapeComponent__01702a80::execPauseCape( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	PauseCape();
}

struct URCapeComponent__01702ab0 : public URCapeComponent
{
	void ResumeCape();
	void execResumeCape(FFrame& Stack, RESULT_DECL);
};

// @baa 0x01702ab0
void URCapeComponent__01702ab0::execResumeCape( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	ResumeCape();
}

struct URCapeComponent__01702dc0 : public URCapeComponent
{
	FLOAT CalculateAngularVelocity();
	void execCalculateAngularVelocity(FFrame& Stack, RESULT_DECL);
};

// @baa 0x01702dc0
void URCapeComponent__01702dc0::execCalculateAngularVelocity( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(FLOAT*)Result = CalculateAngularVelocity();
}

struct URCapeComponent__01702e00 : public URCapeComponent
{
	UBOOL UpdateSkeletalMeshDepthBias();
	void execUpdateSkeletalMeshDepthBias(FFrame& Stack, RESULT_DECL);
};

// @baa 0x01702e00
void URCapeComponent__01702e00::execUpdateSkeletalMeshDepthBias( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(UBOOL*)Result = UpdateSkeletalMeshDepthBias();
}

struct URCapeComponent__01702e40 : public URCapeComponent
{
	UBOOL GetIsCinematicMode();
	void execGetIsCinematicMode(FFrame& Stack, RESULT_DECL);
};

// @baa 0x01702e40
void URCapeComponent__01702e40::execGetIsCinematicMode( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(UBOOL*)Result = GetIsCinematicMode();
}

// @baa 0x01702ae0
void URCapeComponent::execOnTeleport(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	vf_14c();
}

// @baa 0x01702b20
void URCapeComponent::execDoubleFrameTeleport(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	vf_150();
}

struct URCapeComponent__01702750 : public URCapeComponent
{
	UAnimNode* sub_016ae7f0();
};

// @baa 0x01702750
void URCapeComponent::execGetCurrentCapeStateAnimTreeNode(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UAnimNode**)Result = this->sub_016ae7f0();
}

struct URCapeComponent__017026f0 : public URCapeComponent
{
	void sub_016ae7b0(UMaterialInstance*);
};

// @baa 0x017026f0
void URCapeComponent::execUpdateDamageState(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UMaterialInstance, NewMat);
	P_FINISH;
	this->sub_016ae7b0(NewMat);
}

struct URCapeComponent__01702bf0 : public URCapeComponent
{
	void sub_016ae940(UAnimSet*);
};

// @baa 0x01702bf0
void URCapeComponent::execAddCinematicAnimSet(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UAnimSet, NewAnimSet);
	P_FINISH;
	((URCapeComponent__01702bf0*)this)->sub_016ae940(NewAnimSet);
}

struct URCapeComponent__01702a10 : public URCapeComponent
{
	void sub_016b1f80(FLOAT);
};

// @baa 0x01702a10
void URCapeComponent::execSetMaterialSpeedVariableOverride(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT_OPTX(Speed, -1.0f);
	P_FINISH;
	this->sub_016b1f80(Speed);
}

struct URCapeComponent__01702cf0 : public URCapeComponent
{
	void sub_016be930(FCapeWindAudioProperties&);
};

// @baa 0x01702cf0
void URCapeComponent::execCalculateWindProperties(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT_REF(FCapeWindAudioProperties, OutWindProperties);
	P_FINISH;
	this->sub_016be930(OutWindProperties);
}

struct URCapeComponent__01702790 : public URCapeComponent
{
	void* sub_016ae800(FName);
};

// @baa 0x01702790
void URCapeComponent::execGetAnimStateTreeNode(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(CapeStateName);
	P_FINISH;
	*(void**)Result = this->sub_016ae800(CapeStateName);
}

struct URCapeComponent__01702810 : public URCapeComponent
{
	FLOAT sub_016ae830(FName);
};

// @baa 0x01702810
void URCapeComponent::execGetAnimTreeNodeBlendValue(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(getNodeName);
	P_FINISH;
	*(FLOAT*)Result = this->sub_016ae830(getNodeName);
}

/* URCapeComponent::CalculateCapeLocalToWorld (016b1fe0) isn't declared in the kit. */
struct URCapeComponent__01702d70 : public URCapeComponent
{
    FMatrix CalculateCapeLocalToWorld();
};

// @baa 0x01702d70
void URCapeComponent::execCalculateCapeLocalToWorld(FFrame& Stack, RESULT_DECL)
{
    P_FINISH;
    *(FMatrix*)Result = this->CalculateCapeLocalToWorld();
}

/* URCapeComponent::SetAnimTreeNodeBlendValue (0x16ae850) isn't declared in the kit. */
struct URCapeComponent__01702890 : public URCapeComponent
{
    void SetAnimTreeNodeBlendValue(FName setNodeName, FLOAT blendValue);
};

// @baa 0x01702890
void URCapeComponent::execSetAnimTreeNodeBlendValue(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(setNodeName);
    P_GET_FLOAT(blendValue);
    P_FINISH;
    this->SetAnimTreeNodeBlendValue(setNodeName, blendValue);
}

/* URCapeComponent::SetCapeDebugRenderBone (0x16ae900) isn't declared in the kit. */
struct URCapeComponent__01702b60 : public URCapeComponent
{
    void SetCapeDebugRenderBone(INT DebugRenderBoneChainIndex, INT DebugRenderBoneLinkIndex);
};

// @baa 0x01702b60
void URCapeComponent::execSetCapeDebugRenderBone(FFrame& Stack, RESULT_DECL)
{
    P_GET_INT(DebugRenderBoneChainIndex);
    P_GET_INT(DebugRenderBoneLinkIndex);
    P_FINISH;
    this->SetCapeDebugRenderBone(DebugRenderBoneChainIndex, DebugRenderBoneLinkIndex);
}

/* URCapeComponent::ApplyWind (0x16c6430) isn't declared in the kit. */
struct URCapeComponent__01702c50 : public URCapeComponent
{
    void ApplyWind(FRWindConfig WindConfig, FRWindState& WindState);
};

// @baa 0x01702c50
void URCapeComponent::execApplyWind(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FRWindConfig, WindConfig);
    P_GET_STRUCT_REF(FRWindState, WindState);
    P_FINISH;
    this->ApplyWind(WindConfig, WindState);
}

/* URCapeComponent::SetAutoCapeAnimBlendWeights (0x16ae870) isn't declared in the kit. */
struct URCapeComponent__01702930 : public URCapeComponent
{
    void SetAutoCapeAnimBlendWeights(UBOOL IsBlendWeightSettingEnabled, FLOAT rootWeight, FLOAT childWeights);
};

// @baa 0x01702930
void URCapeComponent::execSetAutoCapeAnimBlendWeights(FFrame& Stack, RESULT_DECL)
{
    P_GET_UBOOL(IsBlendWeightSettingEnabled);
    P_GET_FLOAT_OPTX(rootWeight, 0.f);
    P_GET_FLOAT_OPTX(childWeights, 0.f);
    P_FINISH;
    this->SetAutoCapeAnimBlendWeights(IsBlendWeightSettingEnabled, rootWeight, childWeights);
}

/* URCapeComponent::ChangeCapeStateGeneral (0x16b1ee0) isn't declared in the kit. */
struct URCapeComponent__01702110 : public URCapeComponent
{
    void ChangeCapeStateGeneral(FName CapeStateName, class URCapeStateConfig* CinematicStateTemplate, FName CinematicAnimName, class UAnimSet* CinematicStateExtraAnimSet, FLOAT AnimStartTime, FLOAT AnimPlayRate, FName SyncAnimName, FLOAT SyncAnimOffset, BYTE MirroredType);
};

// @baa 0x01702110
void URCapeComponent::execChangeCapeStateGeneral(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(CapeStateName);
    P_GET_OBJECT(URCapeStateConfig, CinematicStateTemplate);
    P_GET_NAME(CinematicAnimName);
    P_GET_OBJECT(UAnimSet, CinematicStateExtraAnimSet);
    P_GET_FLOAT_OPTX(AnimStartTime, 0.f);
    P_GET_FLOAT_OPTX(AnimPlayRate, 1.f);
    P_GET_NAME_OPTX(SyncAnimName, NAME_None);
    P_GET_FLOAT_OPTX(SyncAnimOffset, 0.f);
    P_GET_BYTE_OPTX(MirroredType, 0);
    P_FINISH;
    this->ChangeCapeStateGeneral(CapeStateName, CinematicStateTemplate, CinematicAnimName, CinematicStateExtraAnimSet, AnimStartTime, AnimPlayRate, SyncAnimName, SyncAnimOffset, MirroredType);
}

/* URCapeComponent::BeginCinematicState (0x16ae6d0) isn't declared in the kit. */
struct URCapeComponent__017024a0 : public URCapeComponent
{
    void BeginCinematicState(FName AnimName, class UAnimSet* TemporaryAnimSet, FLOAT AnimStartTime, FLOAT AnimPlayRate, FName SyncAnimName, FLOAT SyncAnimOffset, BYTE MirroredType, class URCapeStateConfig* TemplateStateConfig, UBOOL ClearVelocityOnExit, UBOOL bTeleportToInitialPose);
};

// @baa 0x017024a0
void URCapeComponent::execBeginCinematicState(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(AnimName);
    P_GET_OBJECT_OPTX(UAnimSet, TemporaryAnimSet, NULL);
    P_GET_FLOAT_OPTX(AnimStartTime, 0.f);
    P_GET_FLOAT_OPTX(AnimPlayRate, 1.f);
    P_GET_NAME_OPTX(SyncAnimName, NAME_None);
    P_GET_FLOAT_OPTX(SyncAnimOffset, 0.f);
    P_GET_BYTE_OPTX(MirroredType, 0);
    P_GET_OBJECT_OPTX(URCapeStateConfig, TemplateStateConfig, NULL);
    P_GET_UBOOL_OPTX(ClearVelocityOnExit, FALSE);
    P_GET_UBOOL_OPTX(bTeleportToInitialPose, FALSE);
    P_FINISH;
    this->BeginCinematicState(AnimName, TemporaryAnimSet, AnimStartTime, AnimPlayRate, SyncAnimName, SyncAnimOffset, MirroredType, TemplateStateConfig, ClearVelocityOnExit, bTeleportToInitialPose);
}

/* Kit gaps: ChangeCapeState (016ae530) isn't declared (names from the exe's native table). */
struct URCapeComponent__01701ff0 : public URCapeComponent
{
	void ChangeCapeState(FName NewCapeStateName, FLOAT AnimStartTime, FLOAT AnimPlayRate, BYTE MirroredType);	/* 0x016ae530 */
};

// @baa 0x01701ff0
void URCapeComponent::execChangeCapeState(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(NewCapeStateName);
	P_GET_FLOAT_OPTX(AnimStartTime, 0.f);
	P_GET_FLOAT_OPTX(AnimPlayRate, 1.f);
	P_GET_BYTE_OPTX(MirroredType, 0);
	P_FINISH;
	this->ChangeCapeState(NewCapeStateName, AnimStartTime, AnimPlayRate, MirroredType);
}

/* Kit gaps: StartCapeInState (016ae600) isn't declared (names from the exe's native table). */
struct URCapeComponent__01702310 : public URCapeComponent
{
	void StartCapeInState(FName NewCapeStateName, FLOAT AnimStartTime, FLOAT AnimPlayRate, BYTE MirroredType);	/* 0x016ae600 */
};

// @baa 0x01702310
void URCapeComponent::execStartCapeInState(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(NewCapeStateName);
	P_GET_FLOAT_OPTX(AnimStartTime, 0.f);
	P_GET_FLOAT_OPTX(AnimPlayRate, 1.f);
	P_GET_BYTE_OPTX(MirroredType, 0);
	P_FINISH;
	this->StartCapeInState(NewCapeStateName, AnimStartTime, AnimPlayRate, MirroredType);
}

struct URCapeComponent__01701f00 : public URCapeComponent
{
	void InitEnable(BYTE NewState, UBOOL bEnable); /* 0x016cd7b0 */
};

// @baa 0x01701f00
/* native function InitEnable(byte NewState, bool bEnable) */
void URCapeComponent::execInitEnable(FFrame& Stack, RESULT_DECL)
{
	P_GET_BYTE(NewState);
	P_GET_UBOOL(bEnable);
	P_FINISH;
	((URCapeComponent__01701f00*)this)->InitEnable(NewState, bEnable);
}
