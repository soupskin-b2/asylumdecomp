// UnAnimPlay.cpp (part 1 of 2): 40 functions
// Placed here by: class 21, neighbours 6, file 5, callers 4.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"
#include "ue3/Script.h"

struct C_00788140 { void sub_00788140(int a0); };
// @baa 0x00788140
void C_00788140::sub_00788140(int a0) { *(int*)((char*)this + 108) = a0; }

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
UBOOL UAnimNodeSequence::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x00c4ad50
UBOOL UAnimNodeSequenceBlendBase::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x00c4ad60
UBOOL UAnimNodeSequenceBlendByAim::HasUniqueStaticConfigName() const { return 1; }

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
void AActor::FinishAnim(UAnimNodeSequence* SeqNode)
{
	StateFrame->LatentAction = EPOLL_FinishAnim;
	LatentSeqNode = SeqNode;
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
INT UAnimNodeSequence::GetNumSliders() const
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0xc0) >> 0xc & 1;
}

// @baa 0x00c64c20
int sub_005c7a20(void);
extern undefined * g_0205a380;
struct C_00c64c50 { undefined4 * sub_00c64c50(void); };
// @baa 0x00c64c50
undefined4 * C_00c64c50::sub_00c64c50(void)
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
struct C_00c64d10 { undefined4 * sub_00c64d10(void); };
// @baa 0x00c64d10
undefined4 * C_00c64d10::sub_00c64d10(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0205a520);
  return param_1;
}

extern undefined * g_0205a6c8;
struct C_00c64d30 { undefined4 * sub_00c64d30(void); };
// @baa 0x00c64d30
undefined4 * C_00c64d30::sub_00c64d30(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0205a6c8);
  return param_1;
}

// @baa 0x00c64d50
INT UAnimNodeSequenceBlendByAim::GetNumSliders() const { return 1; }

// @baa 0x00c64d60
ESliderType UAnimNodeSequenceBlendByAim::GetSliderType(INT InIndex) const { return ST_2D; }

// @baa 0x00c64d70
IMPLEMENT_CLASS_AT(UAnimNodeSequenceBlendByAim, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimPlay.cpp", 12);

// @baa 0x00c64dd0

// @baa 0x00c67d30
void UAnimNodeSequence::TickAnim(FLOAT DeltaSeconds, FLOAT TotalWeight)
{
    if (SynchGroupName.Index == 0 && SynchGroupName.Number == 0)
    {
        PreviousTime = CurrentTime;
        if (bPlaying && AnimSeq)
        {
            const FLOAT MoveDelta = SkelComponent->GlobalAnimRateScale * AnimSeq->RateScale * Rate * DeltaSeconds;
            AdvanceBy(MoveDelta, DeltaSeconds, !SkelComponent->bUseRawData);
        }
    }

    if (ActiveCameraAnimInstance)
    {
        if (sub_00c4fe50() && bPlaying && bRelevant)
        {
            ((UCameraAnimInst*)ActiveCameraAnimInstance)->ApplyTransientScaling(NodeTotalWeight);
        }
        else if (ActiveCameraAnimInstance)   /* UE3's StopCameraAnim(), inlined */
        {
            ((UCameraAnimInst*)ActiveCameraAnimInstance)->Stop(1);
            ActiveCameraAnimInstance->bAutoReleaseWhenFinished = 1;
            ActiveCameraAnimInstance = NULL;
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
UBOOL UAnimNodeSequence::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00c77950
// @baa 0x00c77a60
UBOOL UAnimNodeSequenceBlendBase::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00c79560
// @baa 0x00c79670
UBOOL UAnimNodeSequenceBlendByAim::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00c4b080
FVector2D UAnimNodeSequenceBlendByAim::sub_00c4b080()
{
    return Aim;
}

// @baa 0x00c5e6a0
/* CheckAnimsUpToDate: Refreshes every blended animation's info, and plays the first
 * one that resolves on this node. */
void UAnimNodeSequenceBlendBase::CheckAnimsUpToDate()
{
	const INT NumAnims = Anims.Num();
	bool bUpdatedSeqNode = false;
	for (INT i = 0; i < NumAnims; i++)
	{
		this->SetAnimInfo(Anims(i).AnimName, Anims(i).AnimInfo);

		if (!bUpdatedSeqNode && Anims(i).AnimInfo.AnimSeq)
		{
			SetAnim(Anims(i).AnimName);
			bUpdatedSeqNode = (AnimSeq != NULL);
		}
	}
}

/* Kit gap: TArray<FBoneAtom>::operator= (out of line here, 00c64160). */
struct FBoneAtomArray : public TArray<FBoneAtom>
{
	void sub_00c64160(const TArray<FBoneAtom>& Other);	/* operator= */
};

// @baa 0x00c6b8e0
/* Hands back this node's cached pose (and root motion, if it was cached this tick) when it fits OutAtoms. */
UBOOL UAnimNode::GetCachedResults(TArray<FBoneAtom>& OutAtoms, FBoneAtom& OutRootMotionDelta, INT& bOutHasRootMotion)
{
#line 17 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimPlay.cpp"
	check(SkelComponent);

	// See if the cached array is the same size as the target array.
	if (CachedBoneAtoms.Num() == OutAtoms.Num())
	{
		((FBoneAtomArray&)OutAtoms).sub_00c64160(CachedBoneAtoms);

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
			OutRootMotionDelta.Rotation = FBoneAtom::Identity.Rotation;
			OutRootMotionDelta.Translation = FBoneAtom::Identity.Translation;
			OutRootMotionDelta.Scale = FBoneAtom::Identity.Scale;
			bOutHasRootMotion = 0;
		}
		return TRUE;
	}

	return FALSE;
}

#line 333 "candidate.cpp"

/* UAnimNodeSequence::ClearCachedResult (00c5e220), inline here. */
struct UAnimNodeSequence__00c5e520 : public UAnimNodeSequence
{
	void ClearCachedResult()
	{
		if (CachedBoneAtoms.Num() > 0 && !ShouldKeepCachedResult())
		{
			CachedBoneAtoms.Reset();
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
		AnimSeq = ((USkeletalMeshComponent*)SkelComponent)->FindAnimSequence(AnimSeqName);
	}
}
