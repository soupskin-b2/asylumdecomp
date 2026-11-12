// UnAnimTree.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/AppMath.h"
#include "ue3/Array.h"

/* Kit gap (Array.h, issue #39): this build inlines TArray::operator() where the kit's plain-inline one is
 * called out of line; same body, forced inline. */
template<class T> struct TArrayAt_ : public TArray<T>
{
    using TArray<T>::ArrayNum;
    __forceinline T& At(INT i)
    {
#line 560 BAA_ARRAY_FILE
        check(i>=0 && (i<ArrayNum||(i==0 && ArrayNum==0)));
        return this->GetTypedData()[i];
    }
    __forceinline const T& At(INT i) const
    {
#line 566 BAA_ARRAY_FILE
        check(i>=0 && (i<ArrayNum||(i==0 && ArrayNum==0)));
        return this->GetTypedData()[i];
    }
};

#define ZERO_ANIMWEIGHT_THRESH (0.00001f)
/* UAnimNodeSlot::SetActiveChild and UpdateWeightsForAdditiveAnimations aren't declared in Classes.h. */
struct UAnimNodeSlot_ : public UAnimNodeSlot
{
	void SetActiveChild(INT ChildIndex, FLOAT BlendTime);
};

// @baa 0x00c56ca0
void UAnimNodeSlot_::SetActiveChild(INT ChildIndex, FLOAT BlendTime)
{
#line 6113 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimTree.cpp"
	check(Children.Num() == TargetWeight.Num());

	if (ChildIndex < 0 || ChildIndex >= Children.Num())
	{
		ChildIndex = 0;
	}

	// no blend when the mesh isn't seen
	if (bSkipBlendWhenNotRendered && !SkelComponent->bRecentlyRendered)
	{
		BlendTime = 0.f;
	}
	else
	{
		// scale the blend time by how far the child still has to go
		if (TargetChildIndex != INDEX_NONE && TargetChildIndex < Children.Num())
		{
			BlendTime *= Max(((TArrayAt_<FAnimBlendChild>&)Children).At(TargetChildIndex).Weight, 1.f - ((TArrayAt_<FAnimBlendChild>&)Children).At(ChildIndex).Weight);
		}
		else
		{
			BlendTime *= 1.f - ((TArrayAt_<FAnimBlendChild>&)Children).At(ChildIndex).Weight;
		}

		if (BlendTime < ZERO_ANIMWEIGHT_THRESH)
		{
			BlendTime = 0.f;
		}
	}

	for (INT i = 0; i < Children.Num(); i++)
	{
		if (i == ChildIndex)
		{
			((TArrayAt_<FLOAT>&)TargetWeight).At(i) = 1.0f;

			// wanted straight away: don't wait for a tick to update the weights
			if (BlendTime == 0.0f)
			{
				((TArrayAt_<FAnimBlendChild>&)Children).At(i).Weight = 1.0f;
			}
		}
		else
		{
			((TArrayAt_<FLOAT>&)TargetWeight).At(i) = 0.f;

			if (BlendTime == 0.0f)
			{
				((TArrayAt_<FAnimBlendChild>&)Children).At(i).Weight = 0.f;
			}
		}
	}

	UpdateWeightsForAdditiveAnimations();

	TargetChildIndex = ChildIndex;
	BlendTimeToGo = BlendTime;
}

#line 99 "candidate.cpp"
