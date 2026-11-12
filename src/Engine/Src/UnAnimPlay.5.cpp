// UnAnimPlay.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// @baa 0x00c4b060
/* Re-resolves the blended animations after an edit. */
void UAnimNodeSequenceBlendBase::PostEditChange(UProperty* PropertyThatChanged)
{
    CheckAnimsUpToDate();
    Super::PostEditChange(PropertyThatChanged);
}

// @baa 0x00c4ae40
/* The editor slider scrubs through the sequence (0..1 of its length). */
void UAnimNodeSequence::HandleSliderMove(INT SliderIndex, INT ValueIndex, FLOAT NewSliderValue)
{
#line 89 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimPlay.cpp"
    check(0 == SliderIndex && 0 == ValueIndex);
    if (AnimSeq && AnimSeq->SequenceLength != 0.f)
    {
        SetPosition(NewSliderValue * AnimSeq->SequenceLength, FALSE);
    }
}

#line 27 "candidate.cpp"
