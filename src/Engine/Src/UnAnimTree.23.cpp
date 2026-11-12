// UnAnimTree.cpp: 3 functions
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
