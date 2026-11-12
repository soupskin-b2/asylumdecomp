// UnAnimTree.cpp (part 3 of 4): 8 functions
// Placed here by: neighbours 6.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/AppMath.h"

struct C {
    void sub_00c57500(int);
};

int sub_0053df70(...);
// @baa 0x00c57500
void C::sub_00c57500(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 4,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_00c575c0 {
    void sub_00c575c0(int);
};

// @baa 0x00c575c0
void C_00c575c0::sub_00c575c0(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 4,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_00c576c0 {
    void sub_00c576c0(int);
};

// @baa 0x00c576c0
void C_00c576c0::sub_00c576c0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 4,8);
      *param_1 = iVar1;
    }
  }
  return;
}

int sub_0040fcc0(void);
int sub_0053dfa0(...);
// @baa 0x00c63550
undefined4 UObject::sub_00c63550(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00c6aa10 {
    undefined4 sub_00c6aa10(byte);
};

int sub_00921250(void);
// @baa 0x00c6aa10
undefined4 C_00c6aa10::sub_00c6aa10(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00921250();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00c6aa30 {
    undefined4 sub_00c6aa30(byte);
};

// @baa 0x00c6aa30
undefined4 C_00c6aa30::sub_00c6aa30(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00921250();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

/* UAnimNodeSlot::UpdateWeightsForAdditiveAnimations isn't declared in Classes.h. */

// @baa 0x00c56870
void UAnimNodeSlot::UpdateWeightsForAdditiveAnimations()
{
	// Make sure non additive channels weight sum up to 1.
	FLOAT AccumulatedWeight = 0.f;
	for(INT i=1; i<Children.Num(); i++)
	{
		// Don't count additive animations
		if( !Children(i).bIsAdditive )
		{
			AccumulatedWeight += Children(i).Weight;
		}
	}

	// Set source weight to 1 - total weight of other children
	Children(0).Weight = 1.f - Clamp<FLOAT>(AccumulatedWeight, 0.f, 1.f);
}

/* The kit's FName has no comparison operators (UnName.h). */
/* UnAnimTree.cpp's static helper: a node's relative position on its time line, 0 without a positive length. */
static inline FLOAT GetNodeRelativePosition(UAnimNodeSequence* SeqNode)
{
	if (SeqNode && SeqNode->AnimSeq && SeqNode->AnimSeq->SequenceLength > 0.f)
	{
		FLOAT RelativePosition = appFmod((SeqNode->CurrentTime / SeqNode->AnimSeq->SequenceLength) - SeqNode->SynchPosOffset, 1.f);
		if (RelativePosition < 0.f)
		{
			RelativePosition += 1.f;
		}
		return RelativePosition;
	}
	return 0.f;
}

/* UAnimNodeSynch::GetRelativePosition isn't declared in Classes.h. */
struct UAnimNodeSynch_ : public UAnimNodeSynch
{
	FLOAT GetRelativePosition(FName GroupName);
};

// @baa 0x00c56440
FLOAT UAnimNodeSynch_::GetRelativePosition(FName GroupName)
{
	for (INT GroupIdx = 0; GroupIdx < Groups.Num(); GroupIdx++)
	{
		FSynchGroup& SynchGroup = Groups(GroupIdx);
		if (SynchGroup.GroupName == GroupName && SynchGroup.MasterNode)
		{
			return GetNodeRelativePosition(SynchGroup.MasterNode);
		}
	}
	return 0.f;
}
