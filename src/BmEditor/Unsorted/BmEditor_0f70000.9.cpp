// BmEditor_0f70000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"

/* This is TArray<UAnimSequence*>::AddUniqueItem's out-of-line copy (collecting the anim sequences an AnimControl
 * track's keys name (FindAnimSequenceFromName), caller 00f98f80). */
// @baa 0x00f7d850
template INT TArray<UAnimSequence*>::AddUniqueItem(UAnimSequence* const& Item);
