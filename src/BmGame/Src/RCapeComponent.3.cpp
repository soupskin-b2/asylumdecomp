// RCapeComponent.cpp: 18 functions
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
    *(FName*)Result = ((URCapeComponent__01701fa0*)this)->GetCurrentCapeStateName();
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
	*(UAnimNode**)Result = ((URCapeComponent__01702750*)this)->sub_016ae7f0();
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
	((URCapeComponent__017026f0*)this)->sub_016ae7b0(NewMat);
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
	((URCapeComponent__01702a10*)this)->sub_016b1f80(Speed);
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
	((URCapeComponent__01702cf0*)this)->sub_016be930(OutWindProperties);
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
	*(void**)Result = ((URCapeComponent__01702790*)this)->sub_016ae800(CapeStateName);
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
	*(FLOAT*)Result = ((URCapeComponent__01702810*)this)->sub_016ae830(getNodeName);
}
