// Engine_06b0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"
#include "ue3/Array.h"

// @baa 0x006bce50
/* the out-of-line TArray<UWorld*>::AddUniqueItem instantiation (GWorld added uniquely to a world list) */
template INT TArray<UWorld*>::AddUniqueItem(UWorld* const& Item);
