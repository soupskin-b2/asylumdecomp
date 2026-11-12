// UnAnimTree.cpp: 5 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// @baa 0x00c64770
/* Nodes without a slider show no value text. */
FString UAnimNode::GetSliderDrawValue(INT SliderIndex)
{
    return FString(TEXT(""));
}

// @baa 0x00c53e60
/* Stopping a blend stops every child animation. */
void UAnimNodeBlendBase::StopAnim()
{
    for (INT i = 0; i < Children.Num(); i++)
    {
        if (Children(i).Anim)
        {
            Children(i).Anim->StopAnim();
        }
    }
}

// @baa 0x00c53d80
/* Playing a blend plays every child animation with the same settings. */
void UAnimNodeBlendBase::PlayAnim(UBOOL bLoop, FLOAT Rate, FLOAT StartTime)
{
    for (INT i = 0; i < Children.Num(); i++)
    {
        if (Children(i).Anim)
        {
            Children(i).Anim->PlayAnim(bLoop, Rate, StartTime);
        }
    }
}

// @baa 0x00c53d10
/* UE3's UAnimNodeBlendBase::OnChildAnimEnd(UAnimNodeSequence* Child, FLOAT PlayedTime, FLOAT ExcessTime): pass the
 * notification up to every parent. */
void UAnimNodeBlendBase::OnChildAnimEnd(UAnimNodeSequence* Child, FLOAT PlayedTime, FLOAT ExcessTime)
{
    for (INT i = 0; i < ParentNodes.Num(); i++)
    {
        ParentNodes(i)->OnChildAnimEnd(Child, PlayedTime, ExcessTime);
    }
}

// @baa 0x00c535b0
/* UAnimNodeBlendBase slot 0x134 (kit vf_134, UE3 TickAnim(FLOAT DeltaSeconds, FLOAT TotalWeight)): while relevant,
 * accumulate each connected child's total weight. */
void UAnimNodeBlendBase::vf_134(FLOAT DeltaSeconds, FLOAT TotalWeight)
{
    if (bRelevant)
    {
        const INT NumChildren = Children.Num();
        for (INT i = 0; i < NumChildren; i++)
        {
            if (Children(i).Anim)
            {
                SetChildrenTotalWeightAccumulator(i);
            }
        }
    }
}
