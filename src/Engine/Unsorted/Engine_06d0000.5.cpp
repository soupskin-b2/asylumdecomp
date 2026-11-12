// Engine_06d0000.cpp: 29 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

struct UMaterialInstanceTimeVarying_ : public UMaterialInstanceTimeVarying
{
	/* UMaterialInstance's (0x006c47c0): a parameter update that takes the name of the caller it
	 * was reached through. */
	void sub_006c47c0(const TCHAR* Caller);
};

// @baa 0x006d8f20
void UMaterialInstanceTimeVarying::SetDuration(FLOAT Value)
{
	((UMaterialInstanceTimeVarying_*)this)->sub_006c47c0(TEXT("MITV::SetDuration"));
	Duration = Value;
	vf_180();
}

// @baa 0x006dc680
void UPrimitiveComponent::execGetHasFallenOutOfWorld( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(UBOOL*)Result = vf_1e8();
}

// @baa 0x006dc7c0
void UMeshComponent::execGetUseSimpleBoxCollision( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(UBOOL*)Result = vf_250();
}

// @baa 0x006dc810
void UMeshComponent::execGetUseSimpleLineCollision( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(UBOOL*)Result = vf_254();
}

// @baa 0x006dc930
void UMeshComponent::execGetNumElements( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(INT*)Result = vf_258();
}

// @baa 0x006dbed0
void UPrimitiveComponent::execSetShadowParent(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UPrimitiveComponent, NewShadowParent);
	P_FINISH;

	vf_234(NewShadowParent);
}

// @baa 0x006d92d0
void UMaterialInterface::execGetPhysicalMaterial(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UPhysicalMaterial**)Result = (UPhysicalMaterial*)GetPhysicalMaterial();
}

extern void* g_026b2234;
// @baa 0x006d9280
void UMaterialInterface::execGetMaterial(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UMaterial**)Result = (UMaterial*)vf_130((INT)g_026b2234);
}

// @baa 0x006dbf60
void UPrimitiveComponent::execSetLightEnvironment(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(ULightEnvironmentComponent, NewLightEnvironment);
	P_FINISH;
	SetLightEnvironment(NewLightEnvironment);
}

// @baa 0x006dc0a0
void UPrimitiveComponent::execSetLightingChannels(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT(FLightingChannelContainer, NewLightingChannels);
	P_FINISH;
	vf_240(*(UINT*)&NewLightingChannels);
}

// @baa 0x006dc000
void UPrimitiveComponent::execSetCullDistance(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(NewCullDistance);
	P_FINISH;
	vf_23c(NewCullDistance);
}

// @baa 0x006dc8c0
void UMeshComponent::execGetMaterial(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(ElementIndex);
	P_FINISH;
	*(UMaterialInterface**)Result = (UMaterialInterface*)vf_25c(ElementIndex);
}

// @baa 0x006dc740
void USkeletalMeshComponent::execGetPhysicalMaterial(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(BodyIndex);
	P_FINISH;
	*(UPhysicalMaterial**)Result = (UPhysicalMaterial*)vf_1ec(BodyIndex);
}

// @baa 0x006db8f0
void UPrimitiveComponent::execSetOwnerNoSee(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bOwnerNoSee);
	P_FINISH;
	vf_214(bOwnerNoSee);
}

struct UPrimitiveComponent_ : public UPrimitiveComponent
{
	void sub_007596c0();
};

// @baa 0x006dc300
void UPrimitiveComponent::execSetScale(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(NewScale);
	P_FINISH;
	if (NewScale != Scale)
	{
		Scale = NewScale;
		((UPrimitiveComponent_*)this)->sub_007596c0();
	}
}

// @baa 0x006db9b0
void UPrimitiveComponent::execSetOnlyOwnerSee(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bOnlyOwnerSee);
	P_FINISH;
	vf_218(bOnlyOwnerSee);
}

// @baa 0x006dba50
void UPrimitiveComponent::execSetIgnoreOwnerHidden(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bIgnoreOwnerHidden);
	P_FINISH;
	vf_21c(bIgnoreOwnerHidden);
}

// @baa 0x006dbb00
void UPrimitiveComponent::execSetHidden(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bHidden);
	P_FINISH;
	vf_220(bHidden);
}

// @baa 0x006dbbb0
void UPrimitiveComponent::execSetHiddenEditor(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bHiddenEditor);
	P_FINISH;
	vf_224(bHiddenEditor);
}

// @baa 0x006dbc70
void UPrimitiveComponent::execSetXrayNoSee(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bXrayNoSee);
	P_FINISH;
	vf_228(bXrayNoSee);
}

// @baa 0x006dbd20
void UPrimitiveComponent::execSetOnlyXraySee(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bOnlyXraySee);
	P_FINISH;
	vf_22c(bOnlyXraySee);
}

// @baa 0x006dbdd0
void UPrimitiveComponent::execSetDontDrawThisFrame(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bDontDrawThisFrame);
	P_FINISH;
	vf_230(bDontDrawThisFrame);
}

// @baa 0x006dc270
void UPrimitiveComponent::execSetRotation(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FRotator, NewRotation);
    P_FINISH;

    if (NewRotation.Pitch != Rotation.Pitch || NewRotation.Yaw != Rotation.Yaw || NewRotation.Roll != Rotation.Roll)
    {
        Rotation = NewRotation;
        BeginDeferredUpdateTransform();
    }
}

struct UActorComponent_ : public UActorComponent
{
    /* BeginDeferredReattach; Classes.h doesn't declare it. */
    void sub_00765d00();
};

// @baa 0x006dce00
void UCylinderComponent::execSetCylinderSize(FFrame& Stack, RESULT_DECL)
{
    P_GET_FLOAT(NewRadius);
    P_GET_FLOAT(NewHeight);
    P_FINISH;

    CollisionHeight = NewHeight;
    CollisionRadius = NewRadius;
    ((UActorComponent_*)this)->sub_00765d00();
}

struct UMeshComponent_ : public UMeshComponent
{
    /* PrestreamTextures; Classes.h doesn't declare it. */
    void sub_006dc850(FLOAT Seconds, UBOOL bPrioritizeCharacterTextures);
};

// @baa 0x006dc970
void UMeshComponent::execPrestreamTextures(FFrame& Stack, RESULT_DECL)
{
    P_GET_FLOAT(Seconds);
    P_GET_UBOOL(bPrioritizeCharacterTextures);
    P_FINISH;
    ((UMeshComponent_*)this)->sub_006dc850(Seconds, bPrioritizeCharacterTextures);
}

// @baa 0x006dc1c0
void UPrimitiveComponent::execSetTranslation(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FVector, NewTranslation);
    P_FINISH;

    if (NewTranslation.X != Translation.X || NewTranslation.Y != Translation.Y || NewTranslation.Z != Translation.Z)
    {
        Translation = NewTranslation;
        BeginDeferredUpdateTransform();
    }
}

// @baa 0x006db6e0
void UPrimitiveComponent::execSetTraceBlocking(FFrame& Stack, RESULT_DECL)
{
    P_GET_UBOOL(NewBlockZeroExtent);
    P_GET_UBOOL(NewBlockNonZeroExtent);
    P_FINISH;

    BlockZeroExtent = NewBlockZeroExtent;
    BlockNonZeroExtent = NewBlockNonZeroExtent;
}

// @baa 0x006dc460
void UPrimitiveComponent::execSetAbsolute(FFrame& Stack, RESULT_DECL)
{
    P_GET_UBOOL_OPTX(NewAbsoluteTranslation, AbsoluteTranslation);
    P_GET_UBOOL_OPTX(NewAbsoluteRotation, AbsoluteRotation);
    P_GET_UBOOL_OPTX(NewAbsoluteScale, AbsoluteScale);
    P_FINISH;

    AbsoluteTranslation = NewAbsoluteTranslation;
    AbsoluteRotation = NewAbsoluteRotation;
    AbsoluteScale = NewAbsoluteScale;
    BeginDeferredUpdateTransform();
}

struct AActor_ : public AActor
{
    /* FindTouchingActors; Classes.h doesn't declare it. */
    void sub_007814c0();
};

// @baa 0x006db7a0
void UPrimitiveComponent::execSetActorCollision(FFrame& Stack, RESULT_DECL)
{
    P_GET_UBOOL(NewCollideActors);
    P_GET_UBOOL(NewBlockActors);
    P_GET_UBOOL_OPTX(NewAlwaysCheckCollision, FALSE);
    P_FINISH;

    AlwaysCheckCollision = NewAlwaysCheckCollision;
    if (NewCollideActors != CollideActors)
    {
        CollideActors = NewCollideActors;
        ((UActorComponent_*)this)->sub_00765d00();
        if (CollideActors && AlwaysCheckCollision && Owner)
        {
            ((AActor_*)Owner)->sub_007814c0();
        }
    }
    BlockActors = NewBlockActors;
}
