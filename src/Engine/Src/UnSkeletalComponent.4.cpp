// UnSkeletalComponent.cpp: 26 functions
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

// @baa 0x0091faa0
void USkeletalMeshComponent::execUpdateSceneProxy( FFrame& Stack, RESULT_DECL )
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
    FExtraDepthBiasData NewDepthBiasData = {0, FVector(0.0f, 0.0f, 0.0f), -1.0f, 0.5f};
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

struct USkeletalMeshComponent__0091f7b0 : public USkeletalMeshComponent
{
	void SetFaceFXRegisterEx(const FString& RegName, BYTE RegOp, FLOAT FirstValue, FLOAT FirstInterpDuration, FLOAT NextValue, FLOAT NextInterpDuration);
	void execSetFaceFXRegisterEx(FFrame& Stack, RESULT_DECL);
};

// @baa 0x0091f7b0
void USkeletalMeshComponent__0091f7b0::execSetFaceFXRegisterEx(FFrame& Stack, RESULT_DECL)
{
	P_GET_STR(RegName);
	P_GET_BYTE(RegOp);
	P_GET_FLOAT(FirstValue);
	P_GET_FLOAT(FirstInterpDuration);
	P_GET_FLOAT(NextValue);
	P_GET_FLOAT(NextInterpDuration);
	P_FINISH;
	SetFaceFXRegisterEx(RegName, RegOp, FirstValue, FirstInterpDuration, NextValue, NextInterpDuration);
}

struct USkeletalMeshComponent__0091dbe0 : public USkeletalMeshComponent
{
	UMorphTarget* FindMorphTarget(FName MorphTargetName);
	void execFindMorphTarget(FFrame& Stack, RESULT_DECL);
};

// @baa 0x0091dbe0
void USkeletalMeshComponent__0091dbe0::execFindMorphTarget(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(MorphTargetName);
	P_FINISH;
	*(UMorphTarget**)Result = FindMorphTarget(MorphTargetName);
}

struct USkeletalMeshComponent__0091d3f0 : public USkeletalMeshComponent
{
	FMatrix GetBoneMatrix(INT BoneIndex);
	void execGetBoneMatrix(FFrame& Stack, RESULT_DECL);
};

// @baa 0x0091d3f0
void USkeletalMeshComponent__0091d3f0::execGetBoneMatrix(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(BoneIndex);
	P_FINISH;
	*(FMatrix*)Result = GetBoneMatrix(BoneIndex);
}

// @baa 0x0090f460
void USkeletalMeshComponent::execSetDisableRagdollCalmingMeasures(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bEnabled);
	P_FINISH;
	bDisableRagdollCalmingMeasures = bEnabled;
}

// @baa 0x0091ee70
void USkeletalMeshComponent::execFindClosestBone(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FVector, TestLocation);
    P_GET_STRUCT_OPTX_REF(FVector, BoneLocation);
    P_GET_FLOAT_OPTX(IgnoreScale, -1.0f);
    P_FINISH;
    *(FName*)Result = FindClosestBone(TestLocation, pBoneLocation, IgnoreScale);
}

/* FMatrix methods (UnMath.h); the kit's FMatrix has none. operator* (0x0058e560) and Rotator (0x005c3fc0)
 * are out of line. */
struct FMatrix_ : public FMatrix
{
    FMatrix operator*(const FMatrix& Other) const;
    FRotator Rotator() const;
    FVector GetOrigin() const
    {
        FVector Result;
        Result.X = WPlane.X;
        Result.Y = WPlane.Y;
        Result.Z = WPlane.Z;
        return Result;
    }
};

/* FRotationTranslationMatrix (UnMath.h); constructor out of line at 0x0058f1b0. */
class FRotationTranslationMatrix : public FMatrix_
{
public:
    FRotationTranslationMatrix(const FRotator& Rot, const FVector& Origin);
};

/* USkeletalMesh::MatchRefBone (0x00976be0) isn't declared in Classes.h. */
struct USkeletalMesh_ : public USkeletalMesh
{
    INT MatchRefBone(FName BoneName) const;
};

inline UBOOL operator!=(const FName& A, EName B) { return A.Index != B || A.Number != 0; }

struct USkeletalMeshComponent__0091e8d0 : public USkeletalMeshComponent
{
    INT MatchRefBone(FName BoneName) const
    {
        INT BoneIndex = INDEX_NONE;
        if (BoneName != NAME_None && SkeletalMesh)
        {
            BoneIndex = ((USkeletalMesh_*)SkeletalMesh)->MatchRefBone(BoneName);
        }
        return BoneIndex;
    }
};

// @baa 0x0091e8d0
/* transform a location and rotation from a bone's space to world space */
void USkeletalMeshComponent::execTransformFromBoneSpace(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(BoneName);
    P_GET_VECTOR(InPosition);
    P_GET_ROTATOR(InRotation);
    P_GET_STRUCT_REF(FVector, OutPosition);
    P_GET_STRUCT_REF(FRotator, OutRotation);
    P_FINISH;

    const INT BoneIndex = this->MatchRefBone(BoneName);
    if (BoneIndex != INDEX_NONE)
    {
        FMatrix BoneToWorldTM = GetBoneMatrix(BoneIndex);
        FMatrix BoneSpaceTM = FRotationTranslationMatrix(InRotation, InPosition);
        FMatrix WorldTM = (const FMatrix_&)BoneSpaceTM * BoneToWorldTM;

        OutPosition = ((const FMatrix_&)WorldTM).GetOrigin();
        OutRotation = ((const FMatrix_&)WorldTM).Rotator();
    }
}

/* FMatrix methods (UnMath.h); the kit's FMatrix has none. operator* (0x0058e560), Rotator (0x005c3fc0) and Inverse
 * are out of line. */
struct FMatrix__0091e6d0 : public FMatrix
{
    FMatrix operator*(const FMatrix& Other) const;
    FRotator Rotator() const;
    FMatrix Inverse() const; /* 0x006e1510 */
    FVector GetOrigin() const
    {
        FVector Result;
        Result.X = WPlane.X;
        Result.Y = WPlane.Y;
        Result.Z = WPlane.Z;
        return Result;
    }
};

/* FRotationTranslationMatrix_0091e6d0 (UnMath.h); constructor out of line at 0x0058f1b0. */
class FRotationTranslationMatrix_0091e6d0 : public FMatrix__0091e6d0
{
public:
    FRotationTranslationMatrix_0091e6d0(const FRotator& Rot, const FVector& Origin);
};

struct USkeletalMeshComponent__0091e6d0 : public USkeletalMeshComponent
{
    INT MatchRefBone(FName BoneName) const
    {
        INT BoneIndex = INDEX_NONE;
        if (BoneName != NAME_None && SkeletalMesh)
        {
            BoneIndex = ((USkeletalMesh_*)SkeletalMesh)->MatchRefBone(BoneName);
        }
        return BoneIndex;
    }
};

// @baa 0x0091e6d0
/* transform a world location and rotation into a bone's space */
void USkeletalMeshComponent::execTransformToBoneSpace(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(BoneName);
    P_GET_VECTOR(InPosition);
    P_GET_ROTATOR(InRotation);
    P_GET_STRUCT_REF(FVector, OutPosition);
    P_GET_STRUCT_REF(FRotator, OutRotation);
    P_FINISH;

    const INT BoneIndex = this->MatchRefBone(BoneName);
    if (BoneIndex != INDEX_NONE)
    {
        FMatrix BoneToWorldTM = GetBoneMatrix(BoneIndex);
        FMatrix WorldTM = FRotationTranslationMatrix_0091e6d0(InRotation, InPosition);
        FMatrix LocalTM = WorldTM * BoneToWorldTM.Inverse();

        OutPosition = LocalTM.GetOrigin();
        OutRotation = LocalTM.Rotator();
    }
}

/* Kit gap (Array.h, issue #39): this build inlines TArray::operator() where the kit's plain-inline one is
 * called out of line; same body, forced inline. */
template<class T> struct TArrayAt_ : public TArray<T>
{
    __forceinline T& At(INT i)
    {
#line 560 BAA_ARRAY_FILE
        check(i>=0 && (i<this->ArrayNum||(i==0 && this->ArrayNum==0)));
        return this->GetTypedData()[i];
    }
    __forceinline const T& At(INT i) const
    {
#line 566 BAA_ARRAY_FILE
        check(i>=0 && (i<this->ArrayNum||(i==0 && this->ArrayNum==0)));
        return this->GetTypedData()[i];
    }
};

/* UnScript.h / UnStack.h iterator support, not in the kit */
enum { EX_IteratorPop = 0x30, EX_IteratorNext = 0x31 };
enum { MAX_SIMPLE_RETURN_VALUE_SIZE = 64 };
/* FFrame::ReadWord (UnStack.h) */
inline INT ReadWord(FFrame& Stack)
{
    INT Result = *(WORD*)Stack.Code;
    Stack.Code += sizeof(WORD);
    return Result;
}

/* UStruct::Script, the bytecode, is the kit's Native_48 */
#define Script Native_48
#define PRE_ITERATOR \
    INT wEndOffset = ReadWord(Stack); \
    BYTE B = 0, Buffer[MAX_SIMPLE_RETURN_VALUE_SIZE]; \
    BYTE* StartCode = Stack.Code; \
    do {
#define POST_ITERATOR \
        while ((B = *Stack.Code) != EX_IteratorPop && B != EX_IteratorNext) \
            Stack.Step(Stack.Object, Buffer); \
        if (*Stack.Code++ == EX_IteratorNext) \
            Stack.Code = StartCode; \
    } while (B != EX_IteratorPop);
/* UObject::IsPendingKill (the kit's vf_038) and IsA (UnObjBas.h) */
struct UObject_ : public UObject
{
    UBOOL IsPendingKill() { return IsPendingKill(); }

    UBOOL IsA(const UClass* SomeBase) const
    {
        if (SomeBase == NULL)
        {
            return TRUE;
        }
        for (const UField* TempClass = (const UField*)GetClass(); TempClass; TempClass = TempClass->SuperField)
        {
            if (TempClass == (const UField*)SomeBase)
            {
                return TRUE;
            }
        }
        return FALSE;
    }
};

// @baa 0x0091e010
/* script iterator over the attached components of a class */
void USkeletalMeshComponent::execAttachedComponents(FFrame& Stack, RESULT_DECL)
{
    P_GET_OBJECT(UClass, BaseClass);
    P_GET_OBJECT_REF(UActorComponent, OutComponent);
    P_FINISH;

    if (!BaseClass)
    {
        INT wEndOffset = ReadWord(Stack);
        Stack.Code = &((TArrayAt_<BYTE>&)Stack.Node->Script).At(wEndOffset + 1);
        return;
    }

    INT AttachmentIndex = 0;
    PRE_ITERATOR;
        // fetch the next component of the class
        OutComponent = NULL;
        while (AttachmentIndex < Attachments.Num() && !OutComponent)
        {
            UActorComponent* TestComponent = Attachments(AttachmentIndex++).Component;
            if (TestComponent && !((UObject_*)TestComponent)->IsPendingKill() && ((UObject_*)TestComponent)->IsA(BaseClass))
            {
                OutComponent = TestComponent;
            }
        }
        if (OutComponent == NULL)
        {
            Stack.Code = &((TArrayAt_<BYTE>&)Stack.Node->Script).At(wEndOffset + 1);
            break;
        }
    POST_ITERATOR;
}

#line 525 "candidate.cpp"
