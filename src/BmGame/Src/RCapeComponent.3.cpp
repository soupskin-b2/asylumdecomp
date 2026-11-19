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


// @baa 0x01702460
void URCapeComponent::execGetIsInCinematicsState( FFrame& Stack, RESULT_DECL )
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

// @baa 0x01702dc0
void URCapeComponent::execCalculateAngularVelocity( FFrame& Stack, RESULT_DECL )
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
	OnTeleport();
}

// @baa 0x01702b20
void URCapeComponent::execDoubleFrameTeleport(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	DoubleFrameTeleport();
}

// @baa 0x01702750
void URCapeComponent::execGetCurrentCapeStateAnimTreeNode(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UAnimNode**)Result = this->GetCurrentCapeStateAnimTreeNode();
}

// @baa 0x017026f0
void URCapeComponent::execUpdateDamageState(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UMaterialInstance, NewMat);
	P_FINISH;
	this->UpdateDamageState(NewMat);
}

struct URCapeComponent__01702bf0 : public URCapeComponent
{
	void AddCinematicAnimSet(UAnimSet*);
};

// @baa 0x01702bf0
void URCapeComponent::execAddCinematicAnimSet(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UAnimSet, NewAnimSet);
	P_FINISH;
	((URCapeComponent__01702bf0*)this)->AddCinematicAnimSet(NewAnimSet);
}

// @baa 0x01702a10
void URCapeComponent::execSetMaterialSpeedVariableOverride(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT_OPTX(Speed, -1.0f);
	P_FINISH;
	this->SetMaterialSpeedVariableOverride(Speed);
}

// @baa 0x01702cf0
void URCapeComponent::execCalculateWindProperties(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT_REF(FCapeWindAudioProperties, OutWindProperties);
	P_FINISH;
	this->CalculateWindProperties(OutWindProperties);
}

// @baa 0x01702790
void URCapeComponent::execGetAnimStateTreeNode(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(CapeStateName);
	P_FINISH;
	*(void**)Result = this->GetAnimStateTreeNode(CapeStateName);
}

// @baa 0x01702810
void URCapeComponent::execGetAnimTreeNodeBlendValue(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(getNodeName);
	P_FINISH;
	*(FLOAT*)Result = this->GetAnimTreeNodeBlendValue(getNodeName);
}

// @baa 0x01702d70
void URCapeComponent::execCalculateCapeLocalToWorld(FFrame& Stack, RESULT_DECL)
{
    P_FINISH;
    *(FMatrix*)Result = this->CalculateCapeLocalToWorld();
}

// @baa 0x01702890
void URCapeComponent::execSetAnimTreeNodeBlendValue(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(setNodeName);
    P_GET_FLOAT(blendValue);
    P_FINISH;
    this->SetAnimTreeNodeBlendValue(setNodeName, blendValue);
}

// @baa 0x01702b60
void URCapeComponent::execSetCapeDebugRenderBone(FFrame& Stack, RESULT_DECL)
{
    P_GET_INT(DebugRenderBoneChainIndex);
    P_GET_INT(DebugRenderBoneLinkIndex);
    P_FINISH;
    this->SetCapeDebugRenderBone(DebugRenderBoneChainIndex, DebugRenderBoneLinkIndex);
}

// @baa 0x01702c50
void URCapeComponent::execApplyWind(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FRWindConfig, WindConfig);
    P_GET_STRUCT_REF(FRWindState, WindState);
    P_FINISH;
    this->ApplyWind(WindConfig, WindState);
}

// @baa 0x01702930
void URCapeComponent::execSetAutoCapeAnimBlendWeights(FFrame& Stack, RESULT_DECL)
{
    P_GET_UBOOL(IsBlendWeightSettingEnabled);
    P_GET_FLOAT_OPTX(rootWeight, 0.f);
    P_GET_FLOAT_OPTX(childWeights, 0.f);
    P_FINISH;
    this->SetAutoCapeAnimBlendWeights(IsBlendWeightSettingEnabled, rootWeight, childWeights);
}


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


// @baa 0x01701f00
/* native function InitEnable(byte NewState, bool bEnable) */
void URCapeComponent::execInitEnable(FFrame& Stack, RESULT_DECL)
{
	P_GET_BYTE(NewState);
	P_GET_UBOOL(bEnable);
	P_FINISH;
	((URCapeComponent*)this)->InitEnable(NewState, bEnable);
}
