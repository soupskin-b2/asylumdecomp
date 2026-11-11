// UnSkeletalComponent.cpp: 18 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x0090f330
void USkeletalMeshComponent::execGetUseSimpleBoxCollision( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(UBOOL*)Result = vf_250();
}

struct USkeletalMeshComponent_ : public USkeletalMeshComponent
{
	void UpdateSceneProxy();
	void execUpdateSceneProxy(FFrame& Stack, RESULT_DECL);
};

// @baa 0x0091faa0
void USkeletalMeshComponent_::execUpdateSceneProxy( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	UpdateSceneProxy();
}

struct USkeletalMeshComponent__00935ce0 : public USkeletalMeshComponent
{
	void UpdateAnimations();
	void execUpdateAnimations(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00935ce0
void USkeletalMeshComponent__00935ce0::execUpdateAnimations( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	UpdateAnimations();
}

struct USkeletalMeshComponent__00935bf0 : public USkeletalMeshComponent {
	void sub_0092db40();
	void execSetParentAnimComponent(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00935bf0
void USkeletalMeshComponent__00935bf0::execSetParentAnimComponent(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(USkeletalMeshComponent, NewParentAnimComp);
	P_FINISH;

	ParentAnimComponent = NewParentAnimComp;
	sub_0092db40();
}

struct SkeletalMeshNative : USkeletalMeshComponent
{
    UAnimSequence* sub_0091d860(FName AnimSeqName);
};

// @baa 0x0091db60
void USkeletalMeshComponent::execFindAnimSequence(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(AnimSeqName);
    P_FINISH;
    *(UAnimSequence**)Result = static_cast<SkeletalMeshNative*>(this)->sub_0091d860(AnimSeqName);
}

struct SkeletalMeshNative_0091fb90 : USkeletalMeshComponent
{
    INT sub_0091fad0(FBonePair& Bones);
};

// @baa 0x0091fb90
void USkeletalMeshComponent::execFindInstanceVertexweightBonePair(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT_REF(FBonePair, Bones);
    P_FINISH;
    *(INT*)Result = static_cast<SkeletalMeshNative_0091fb90*>(this)->sub_0091fad0(Bones);
}

struct SkeletalMeshNative_0091d6a0 : USkeletalMeshComponent
{
    FName sub_0091d550(FName BoneName);
};

// @baa 0x0091d6a0
void USkeletalMeshComponent::execGetParentBone(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(BoneName);
    P_FINISH;
    *(FName*)Result = static_cast<SkeletalMeshNative_0091d6a0*>(this)->sub_0091d550(BoneName);
}

void __cdecl sub_00bf75f0(const FString& RegName);
// @baa 0x0091f4e0
void USkeletalMeshComponent::execDeclareFaceFXRegister(FFrame& Stack, RESULT_DECL)
{
    P_GET_STR(RegName);
    P_FINISH;
    sub_00bf75f0(RegName);
}

struct SkeletalMeshNative_0092d9b0 : USkeletalMeshComponent
{
    FLOAT sub_0092d740(UAnimSequence* Sequence, FName NotifyName, INT InstanceNum);
};

// @baa 0x0092d9b0
void USkeletalMeshComponent::execGetTimeOfScriptNotifyInAnimSequence(FFrame& Stack, RESULT_DECL)
{
    P_GET_OBJECT(UAnimSequence, Sequence);
    P_GET_NAME(NotifyName);
    P_GET_INT_OPTX(InstanceNum, 1);
    P_FINISH;
    *(FLOAT*)Result = static_cast<SkeletalMeshNative_0092d9b0*>(this)->sub_0092d740(Sequence, NotifyName, InstanceNum);
}

struct SkeletalMeshNative_0091dc60 : USkeletalMeshComponent
{
    UBOOL sub_0091da00(FName InSocketName, FVector& OutLocation, FRotator* OutRotation);
};

// @baa 0x0091dc60
void USkeletalMeshComponent::execGetSocketWorldLocationAndRotation(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(InSocketName);
    P_GET_STRUCT_REF(FVector, OutLocation);
    FRotator Rotation;
    GPropAddr = 0;
    Stack.Step(Stack.Object, &Rotation);
    FRotator* OutRotation = reinterpret_cast<FRotator*>(GPropAddr);
    P_FINISH;
    *(UBOOL*)Result = static_cast<SkeletalMeshNative_0091dc60*>(this)->sub_0091da00(InSocketName, OutLocation, OutRotation);
}

struct SkeletalMeshNative_00935b00 : USkeletalMeshComponent
{
    void sub_00934fc0(USkeletalMesh* NewMesh, UBOOL bKeepSpaceBases, UBOOL bAlwaysUseInstanceWeights);
};

// @baa 0x00935b00
void USkeletalMeshComponent::execSetSkeletalMesh(FFrame& Stack, RESULT_DECL)
{
    P_GET_OBJECT(USkeletalMesh, NewMesh);
    P_GET_UBOOL_OPTX(bKeepSpaceBases, FALSE);
    P_GET_UBOOL_OPTX(bAlwaysUseInstanceWeights, FALSE);
    P_FINISH;
    static_cast<SkeletalMeshNative_00935b00*>(this)->sub_00934fc0(NewMesh, bKeepSpaceBases, bAlwaysUseInstanceWeights);
}

struct SkeletalMeshNative_0091f670 : USkeletalMeshComponent
{
    void sub_0090e6e0(const FString& RegName, FLOAT RegVal, BYTE RegOp, FLOAT InterpDuration);
};

// @baa 0x0091f670
void USkeletalMeshComponent::execSetFaceFXRegister(FFrame& Stack, RESULT_DECL)
{
    P_GET_STR(RegName);
    P_GET_FLOAT(RegVal);
    P_GET_BYTE(RegOp);
    P_GET_FLOAT_OPTX(InterpDuration, 0.0f);
    P_FINISH;
    static_cast<SkeletalMeshNative_0091f670*>(this)->sub_0090e6e0(RegName, RegVal, RegOp, InterpDuration);
}

// @baa 0x0090f390
void USkeletalMeshComponent::execGetUseSimpleLineCollision(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_254();
}

// @baa 0x0090f500
void USkeletalMeshComponent::execResetRagdollCalmingMeasures(FFrame& Stack, RESULT_DECL)
{
    P_FINISH;
    bHasBeenPermanentlyFixed = FALSE;
    FramesPhysicsAsleep = 0;
    CurrDampingRampupTime = 0.0f;
}

// @baa 0x0090f3f0
void USkeletalMeshComponent::execGetAreRagdollCalmingMeasuresDisabled(FFrame& Stack, RESULT_DECL)
{
    P_FINISH;
    *(UBOOL*)Result = bDisableRagdollCalmingMeasures || bDebugDisableRagdollCalmingMeasures;
}

struct SkeletalMeshNative_0091fa30 : USkeletalMeshComponent
{
    void sub_009143d0(UBOOL bNewDisableColourWrites);
};

// @baa 0x0091fa30
void USkeletalMeshComponent::execSetDisableColourWrites(FFrame& Stack, RESULT_DECL)
{
    P_GET_UBOOL(bNewDisableColourWrites);
    P_FINISH;
    static_cast<SkeletalMeshNative_0091fa30*>(this)->sub_009143d0(bNewDisableColourWrites);
}

struct SkeletalMeshNative_0091f940 : USkeletalMeshComponent
{
    void sub_00914150(FLOAT NewDepthBias, FExtraDepthBiasData NewDepthBiasData);
};

// @baa 0x0091f940
void USkeletalMeshComponent::execSetDepthBias(FFrame& Stack, RESULT_DECL)
{
    P_GET_FLOAT(NewDepthBias);
    FExtraDepthBiasData NewDepthBiasData = {0, {0.0f, 0.0f, 0.0f}, -1.0f, 0.5f};
    Stack.Step(Stack.Object, &NewDepthBiasData);
    P_FINISH;
    static_cast<SkeletalMeshNative_0091f940*>(this)->sub_00914150(NewDepthBias, NewDepthBiasData);
}

struct USkeletalMeshComponent__0092da90 : public USkeletalMeshComponent
{
	FLOAT GetTimeOfScriptNotify(FName NotifyName, INT InstanceNum);
	void execGetTimeOfScriptNotify(FFrame& Stack, RESULT_DECL);
};

// @baa 0x0092da90
void USkeletalMeshComponent__0092da90::execGetTimeOfScriptNotify(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(NotifyName);
	P_GET_INT_OPTX(InstanceNum, 1);
	P_FINISH;
	*(FLOAT*)Result = GetTimeOfScriptNotify(NotifyName, InstanceNum);
}
