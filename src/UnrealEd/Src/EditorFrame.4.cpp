// EditorFrame.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"

/* This is TArray<USeqVar_Object*>::AddUniqueItem's out-of-line copy (EditorFrame mesh conversion collecting object
 * variables that reference the actor, caller 01157090). */
// @baa 0x0112f6a0
template INT TArray<USeqVar_Object*>::AddUniqueItem(USeqVar_Object* const& Item);
