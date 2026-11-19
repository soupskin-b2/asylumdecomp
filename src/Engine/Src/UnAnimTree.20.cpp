// UnAnimTree.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/Cast.h"
#include "ue3/AppMath.h"

// @baa 0x00c7abf0
/* Switches to child ChildIndex (the first one if it's out of range), blending over BlendTime seconds: shortened by
 * how far the target child already is blended in, or skipped when the node just became relevant or the mesh isn't
 * being rendered. If bPlayActiveChild is set, a sequence child is restarted. */
void UAnimNodeBlendList::SetActiveChild(INT ChildIndex, FLOAT BlendTime)
{
#line 2113 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimTree.cpp"
	check(Children.Num() == TargetWeight.Num());

	if (ChildIndex < 0 || ChildIndex >= Children.Num())
	{
		ChildIndex = 0;
	}

	if (BlendTime > 0.f)
	{
		ActiveChildIndex = Clamp<INT>(ActiveChildIndex, 0, Children.Num() - 1);

		if ((bForceChildFullWeightWhenBecomingRelevant && bJustBecameRelevant) ||
			(bSkipBlendWhenNotRendered && !SkelComponent->bRecentlyRendered))
		{
			BlendTime = 0.f;
		}
		else if (Children(ActiveChildIndex).Anim == Children(ChildIndex).Anim)
		{
			BlendTime *= (1.f - Children(ActiveChildIndex).Weight);
		}
		else
		{
			BlendTime *= (1.f - Children(ChildIndex).Weight);
		}
	}

	for (INT i = 0; i < Children.Num(); i++)
	{
		if (i == ChildIndex)
		{
			TargetWeight(i) = 1.f;

			// If we basically want this straight away - don't wait until a tick to update weights.
			if (BlendTime == 0.f)
			{
				Children(i).Weight = 1.f;
			}
		}
		else
		{
			TargetWeight(i) = 0.f;

			if (BlendTime == 0.f)
			{
				Children(i).Weight = 0.f;
			}
		}
	}

	BlendTimeToGo = BlendTime;
	ActiveChildIndex = ChildIndex;

	if (bPlayActiveChild)
	{
		UAnimNodeSequence* AnimSeq = Cast<UAnimNodeSequence>(Children(ActiveChildIndex).Anim);
		if (AnimSeq)
		{
			AnimSeq->PlayAnim(AnimSeq->bLooping, AnimSeq->Rate, 0.f);
		}
	}
}

#line 98 "candidate.cpp"
