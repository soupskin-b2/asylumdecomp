// UnAnimPlay.cpp (part 1 of 2): 40 functions
// Placed here by: class 21, neighbours 6, file 5, callers 4.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00788140
void UCameraAnimInst::sub_00788140(int a0) { *(int*)((char*)this + 108) = a0; }

// @baa 0x00c49dc0
float10 sub_00c49dc0(float param_1)
{
  for (; 2.0 <= param_1; param_1 = param_1 - 4.0) {
  }
  for (; param_1 < -2.0; param_1 = param_1 + 4.0) {
  }
  return (float10)param_1;
}

struct C { C* sub_00c49e20(int a0); };

// @baa 0x00c49e20
C* C::sub_00c49e20(int a0) { return this; }

struct C_00c49e30 { C_00c49e30* sub_00c49e30(int a0); };

// @baa 0x00c49e30
C_00c49e30* C_00c49e30::sub_00c49e30(int a0) { return this; }

// @baa 0x00c4ad40
int UAnimNodeSequence::vf_000(void) { return 1; }

// @baa 0x00c4ad50
int UAnimNodeSequenceBlendBase::vf_000(void) { return 1; }

// @baa 0x00c4ad60
int UAnimNodeSequenceBlendByAim::vf_000(void) { return 1; }

int sub_006311e0(...);
extern undefined4 g_0204f6f0;
// @baa 0x00c4ade0
FLOAT UAnimNodeSequence::GetSliderPosition(INT param_2, INT param_3) {
    int param_1 = (int)this;
  float fVar1;
  if ((param_2 != 0) || (param_3 != 0)) {
    sub_006311e0("0 == SliderIndex && 0 == ValueIndex",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimPlay.cpp"
                 ,0x4e,&g_0204f6f0);
  }
  if ((*(int *)(param_1 + 0xcc) != 0) &&
     (fVar1 = *(float *)(*(int *)(param_1 + 0xcc) + 0x44), 0.0 < fVar1)) {
    return (float10)*(float *)(param_1 + 0xc4) / (float10)fVar1;
  }
  return (float10)0;
}

// @baa 0x00c4afe0
void AActor::sub_00c4afe0(undefined4 param_2)
{
    int param_1 = (int)this;

  *(undefined2 *)(*(int *)(param_1 + 0x18) + 0x34) = 0x181;
  *(undefined4 *)(param_1 + 0xf4) = param_2;
  return;
}

extern undefined4 g_02050c70;
extern undefined4 g_02050d60;
// @baa 0x00c4b120
void UAnimNodeSequenceBlendByAim::HandleSliderMove(INT param_2, INT param_3, FLOAT param_4)
{
    int param_1 = (int)this;
  if (param_2 != 0) {
    sub_006311e0("SliderIndex == 0",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimPlay.cpp"
                 ,0x7d8,&g_02050c70);
  }
  if (param_3 != 0) {
    if (param_3 != 1) {
      sub_006311e0("ValueIndex == 0 || ValueIndex == 1",
                   "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimPlay.cpp"
                   ,0x7d9,&g_02050d60);
    }
    *(float *)(param_1 + 0x110) = (param_4 - 0.5) * -2.0;
    return;
  }
  *(float *)(param_1 + 0x10c) = (param_4 - 0.5) * 2.0;
  return;
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_00c57340 { void* Data; int Num; int Max; void sub_00c57340(); };

// @baa 0x00c57340
void C_00c57340::sub_00c57340() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

// @baa 0x00c64bb0
IMPLEMENT_CLASS_AT(UAnimNodeSequence, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimPlay.cpp", 10);

// @baa 0x00c64c10
uint UAnimNodeSequence::vf_170(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0xc0) >> 0xc & 1;
}

// @baa 0x00c64c20
int sub_005c7a20(void);
extern undefined * g_0205a380;
// @baa 0x00c64c50
undefined4 * UObject::sub_00c64c50(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0205a380);
  return param_1;
}

// @baa 0x00c64c70
IMPLEMENT_CLASS_AT(UAnimNodeSequenceBlendBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimPlay.cpp", 11);

// @baa 0x00c64ce0
extern undefined * g_0205a520;
// @baa 0x00c64d10
undefined4 * UObject::sub_00c64d10(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0205a520);
  return param_1;
}

extern undefined * g_0205a6c8;
// @baa 0x00c64d30
undefined4 * UObject::sub_00c64d30(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0205a6c8);
  return param_1;
}

// @baa 0x00c64d50
UINT UAnimNodeSequenceBlendByAim::vf_170() { return 1; }

// @baa 0x00c64d60
int UAnimNodeSequenceBlendByAim::vf_174(int a0) { return 1; }

// @baa 0x00c64d70
IMPLEMENT_CLASS_AT(UAnimNodeSequenceBlendByAim, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimPlay.cpp", 12);

// @baa 0x00c64dd0
struct UCameraAnimInst_ : public UCameraAnimInst {
    void sub_007880c0(UBOOL bImmediate);   /* Stop */
    void sub_00788120(FLOAT NewWeight);    /* ApplyWeight */
};

struct UAnimNodeSequence_ : public UAnimNodeSequence {
    void sub_00c5e2f0(FLOAT MoveDelta, FLOAT DeltaSeconds, UBOOL bFireNotifies); /* AdvanceBy */
    UBOOL sub_00c4fe50();
    void sub_00c4fee0();                   /* StartCameraAnim */
    void StopCameraAnim()
    {
        if (ActiveCameraAnimInstance)
        {
            ((UCameraAnimInst_*)ActiveCameraAnimInstance)->sub_007880c0(1);
            ActiveCameraAnimInstance->bAutoReleaseWhenFinished = 1;
            ActiveCameraAnimInstance = NULL;
        }
    }
    void sub_00c67d30(FLOAT DeltaSeconds, FLOAT TotalWeight);
};

// @baa 0x00c67d30
void UAnimNodeSequence_::sub_00c67d30(FLOAT DeltaSeconds, FLOAT TotalWeight)
{
    if (SynchGroupName.Index == 0 && SynchGroupName.Number == 0)
    {
        PreviousTime = CurrentTime;
        if (bPlaying && AnimSeq)
        {
            const FLOAT MoveDelta = SkelComponent->GlobalAnimRateScale * AnimSeq->RateScale * Rate * DeltaSeconds;
            sub_00c5e2f0(MoveDelta, DeltaSeconds, !SkelComponent->bUseRawData);
        }
    }

    if (ActiveCameraAnimInstance)
    {
        if (sub_00c4fe50() && bPlaying && bRelevant)
        {
            ((UCameraAnimInst_*)ActiveCameraAnimInstance)->sub_00788120(NodeTotalWeight);
        }
        else
        {
            StopCameraAnim();
        }
    }
    else if (CameraAnim && bPlaying && bLoopCameraAnim && bRelevant)
    {
        sub_00c4fee0();
    }
}

// @baa 0x00c6b010
// @baa 0x00c6b030
// @baa 0x00c6b050
// @baa 0x00c6b6a0
// @baa 0x00c6b760
// @baa 0x00c6b820
// @baa 0x00c75900
// @baa 0x00c75a10
bool UAnimNodeSequence::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00c77950
// @baa 0x00c77a60
bool UAnimNodeSequenceBlendBase::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00c79560
// @baa 0x00c79670
bool UAnimNodeSequenceBlendByAim::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct UAnimNodeSequenceBlendByAim2 : public UAnimNodeSequenceBlendByAim {
    FVector2D sub_00c4b080();
};

// @baa 0x00c4b080
FVector2D UAnimNodeSequenceBlendByAim2::sub_00c4b080()
{
    return Aim;
}

/* SetAnimInfo (00c52b90) isn't declared on UAnimNodeSequenceBlendBase. */
struct UAnimNodeSequenceBlendBase_ : public UAnimNodeSequenceBlendBase
{
	void SetAnimInfo(FName InSequenceName, FAnimInfo& InAnimInfo);
};

// @baa 0x00c5e6a0
/* vf_1a0 is CheckAnimsUpToDate (flagged): refreshes every blended animation's info, and plays the first
 * one that resolves on this node. */
void UAnimNodeSequenceBlendBase::CheckAnimsUpToDate()
{
	const INT NumAnims = Anims.Num();
	bool bUpdatedSeqNode = false;
	for (INT i = 0; i < NumAnims; i++)
	{
		((UAnimNodeSequenceBlendBase_*)this)->SetAnimInfo(Anims(i).AnimName, Anims(i).AnimInfo);

		if (!bUpdatedSeqNode && Anims(i).AnimInfo.AnimSeq)
		{
			SetAnim(Anims(i).AnimName);
			bUpdatedSeqNode = (AnimSeq != NULL);
		}
	}
}

/* Kit gaps: FBoneAtom::Identity (UnSkeletalMesh.h) and TArray<FBoneAtom>::operator= (out of line here,
 * 00c64160). */
struct FBoneAtom_ : public FBoneAtom
{
	static const FBoneAtom Identity;	/* 025df358 */
};

struct FBoneAtomArray : public TArray<FBoneAtom>
{
	void sub_00c64160(const TArray<FBoneAtom>& Other);	/* operator= */
};

/* UAnimNode::GetCachedResults is vtable slot 0x148 (declared only as vf_148, flagged). */
struct UAnimNode_ : public UAnimNode
{
	UBOOL GetCachedResults(FBoneAtomArray& OutAtoms, FBoneAtom& OutRootMotionDelta, INT& bOutHasRootMotion);
};

// @baa 0x00c6b8e0
/* Hands back this node's cached pose (and root motion, if it was cached this tick) when it fits OutAtoms. */
UBOOL UAnimNode_::GetCachedResults(FBoneAtomArray& OutAtoms, FBoneAtom& OutRootMotionDelta, INT& bOutHasRootMotion)
{
#line 17 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimPlay.cpp"
	check(SkelComponent);

	// See if the cached array is the same size as the target array.
	if (CachedBoneAtoms.Num() == OutAtoms.Num())
	{
		OutAtoms.sub_00c64160(CachedBoneAtoms);

		// The root motion is only valid if it was cached this frame.
		if (NodeCachedAtomsTag == SkelComponent->CachedAtomsTag)
		{
			// FBoneAtom::operator= (copies the members; not in the kit)
			OutRootMotionDelta.Rotation = CachedRootMotionDelta.Rotation;
			OutRootMotionDelta.Translation = CachedRootMotionDelta.Translation;
			OutRootMotionDelta.Scale = CachedRootMotionDelta.Scale;
			bOutHasRootMotion = bCachedHasRootMotion;
		}
		else
		{
			OutRootMotionDelta.Rotation = FBoneAtom_::Identity.Rotation;
			OutRootMotionDelta.Translation = FBoneAtom_::Identity.Translation;
			OutRootMotionDelta.Scale = FBoneAtom_::Identity.Scale;
			bOutHasRootMotion = 0;
		}
		return TRUE;
	}

	return FALSE;
}

#line 333 "candidate.cpp"

/* Kit gaps: FName comparisons, USkeletalMeshComponent::FindAnimSequence (0091d860) and
 * UAnimNodeSequence::ShouldKeepCachedResult (00c4ad70) aren't declared. */
/* Kit gap (Array.h): this build's TArray::Reset() is just 'DestructItems(0, ArrayNum); ArrayNum = 0;' (see
 * 00c5e220); the kit's Reset(NewSize) adds an Empty branch that VC8 can't fold. */
template<class T> struct TArrayReset : public TArray<T>
{
	void Reset() { this->ArrayNum = 0; }
};

struct USkeletalMeshComponent_ : public USkeletalMeshComponent
{
	UAnimSequence* sub_0091d860(FName AnimSeqName);		/* FindAnimSequence */
};

struct UAnimNodeSequence__00c5e520 : public UAnimNodeSequence
{
	UBOOL sub_00c4ad70();					/* ShouldKeepCachedResult */

	/* ClearCachedResult (00c5e220), inline here. */
	void ClearCachedResult()
	{
		if (CachedBoneAtoms.Num() > 0 && !sub_00c4ad70())
		{
			((TArrayReset<FBoneAtom>&)CachedBoneAtoms).Reset();
		}
	}
};

// @baa 0x00c5e520
/* Switches the node to InSequenceName, looking the sequence up in the skeletal mesh component's AnimSets. */
void UAnimNodeSequence::SetAnim(FName InSequenceName)
{
	// Changing the animation while its notifies are being fired would pull it out from under them.
	if (bIsIssuingNotifies && AnimSeqName != InSequenceName)
	{
		return;
	}

	AnimSeqName = InSequenceName;
	AnimSeq = NULL;
	((UAnimNodeSequence__00c5e520*)this)->ClearCachedResult();

	if (InSequenceName != FName(NAME_None) && SkelComponent && SkelComponent->SkeletalMesh)
	{
		AnimSeq = ((USkeletalMeshComponent_*)SkelComponent)->sub_0091d860(AnimSeqName);
	}
}
