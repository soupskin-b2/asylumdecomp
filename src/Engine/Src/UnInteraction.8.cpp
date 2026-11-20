// UnInteraction.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"

/* This is TArray<FLOAT*>::AddUniqueItem's out-of-line copy (UInput's AxisArray of float input properties, caller
 * 00d7b7c0). */
// @baa 0x00d78760
template INT TArray<FLOAT*>::AddUniqueItem(FLOAT* const& Item);
