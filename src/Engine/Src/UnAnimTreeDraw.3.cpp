// UnAnimTreeDraw.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/AppMath.h"

/* UAnimNodeBlend::SetBlendTarget (not virtual in this build) isn't declared in Classes.h. */
struct UAnimNodeBlend_ : public UAnimNodeBlend
{
	void SetBlendTarget(FLOAT BlendTarget, FLOAT BlendTime);
};

// @baa 0x00c54040
void UAnimNodeBlend_::SetBlendTarget(FLOAT BlendTarget, FLOAT BlendTime)
{
	Child2WeightTarget = Clamp<FLOAT>(BlendTarget, 0.f, 1.f);

	// a node that isn't rendered doesn't need to blend
	if (bSkipBlendWhenNotRendered && !SkelComponent->bRecentlyRendered)
	{
		BlendTime = 0.f;
	}

	// we want this weight now: update the weights straight away (don't wait for TickAnim)
	if (BlendTime <= 0.f)
	{
		Child2Weight = Child2WeightTarget;
		Children(0).Weight = 1.f - Child2Weight;
		Children(1).Weight = Child2Weight;
	}

	BlendTimeToGo = BlendTime;
}

#define KINDA_SMALL_NUMBER (1.e-4)
/* UAnimNodeBlendBase::TickAnim (vtable 0x134, declared only as vf_134). */
struct UAnimNodeBlendBase_ : public UAnimNodeBlendBase
{
	void sub_00c535b0(FLOAT DeltaSeconds, FLOAT TotalWeight);	/* TickAnim */
};

/* UAnimNodeBlend's TickAnim override. */
struct UAnimNodeBlend__00c53f20 : public UAnimNodeBlend
{
	void TickAnim(FLOAT DeltaSeconds, FLOAT TotalWeight);
};

// @baa 0x00c53f20
void UAnimNodeBlend__00c53f20::TickAnim(FLOAT DeltaSeconds, FLOAT TotalWeight)
{
	// update the child weight
	if (BlendTimeToGo != 0.f)
	{
		FLOAT BlendDelta = Child2WeightTarget - Child2Weight;

		if (appAbs(BlendDelta) > KINDA_SMALL_NUMBER && BlendTimeToGo > DeltaSeconds)
		{
			Child2Weight += (BlendDelta / BlendTimeToGo) * DeltaSeconds;
			BlendTimeToGo -= DeltaSeconds;
		}
		else
		{
			Child2Weight = Child2WeightTarget;
			BlendTimeToGo = 0.f;
		}
	}

	// the weights of the two children
	Children(0).Weight = 1.f - Child2Weight;
	Children(1).Weight = Child2Weight;

	((UAnimNodeBlendBase_*)this)->sub_00c535b0(DeltaSeconds, TotalWeight);
}
