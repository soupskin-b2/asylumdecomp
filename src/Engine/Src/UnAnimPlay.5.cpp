// UnAnimPlay.cpp: 1 function
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
