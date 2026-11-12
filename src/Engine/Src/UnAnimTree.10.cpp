// UnAnimTree.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Cast.h"

/* Cast<UAnimNodeSequence> is the out-of-line instantiation at 009109d0. */
extern template UAnimNodeSequence* Cast<UAnimNodeSequence>(UObject* Src);
/* UAnimNodeBlend::SetBlendTarget (non-virtual in this build) and TickAnim (vtable 0x134, declared only as
 * vf_134); neither is declared by name in Classes.h. */
struct UAnimNodeBlend_ : public UAnimNodeBlend
{
	void sub_00c54040(FLOAT BlendTarget, FLOAT BlendTime);	/* SetBlendTarget */
};

/* UAnimNodePlayCustomAnim's TickAnim override. */
struct UAnimNodePlayCustomAnim_ : public UAnimNodePlayCustomAnim
{
	void TickAnim(FLOAT DeltaSeconds, FLOAT TotalWeight);
};

// @baa 0x00c7c810
void UAnimNodePlayCustomAnim_::TickAnim(FLOAT DeltaSeconds, FLOAT TotalWeight)
{
	// a custom animation with a blend out time: blend out before it is over
	if (bIsPlayingCustomAnim && CustomPendingBlendOutTime >= 0.f)
	{
		UAnimNodeSequence* ActiveChild = Cast<UAnimNodeSequence>(Children(1).Anim);
		if (ActiveChild && ActiveChild->AnimSeq)
		{
			FLOAT TimeLeft = ActiveChild->AnimSeq->SequenceLength - ActiveChild->CurrentTime;

			// time to blend out
			if (TimeLeft <= CustomPendingBlendOutTime)
			{
				bIsPlayingCustomAnim = FALSE;
			}
		}
	}

	FLOAT DesiredChild2Weight = bIsPlayingCustomAnim ? 1.f : 0.f;

	// the child needs to be updated
	if (DesiredChild2Weight != Child2WeightTarget)
	{
		FLOAT BlendInTime = 0.f;

		// blending out of the custom animation: use its blend out time if it has one
		if (Child2WeightTarget == 1.f && CustomPendingBlendOutTime >= 0.f)
		{
			BlendInTime = CustomPendingBlendOutTime;
			CustomPendingBlendOutTime = -1.f;
		}

		((UAnimNodeBlend_*)this)->sub_00c54040(DesiredChild2Weight, BlendInTime);
	}

	((UAnimNodeBlend_*)this)->sub_00c53f20(DeltaSeconds, TotalWeight);
}
