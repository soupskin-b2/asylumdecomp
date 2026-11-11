// Engine_0c90000.cpp: 19 functions
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
