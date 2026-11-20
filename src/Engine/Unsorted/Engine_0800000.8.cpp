// Engine_0800000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"
#include "ue3/Array.h"

// @baa 0x00808540
/* the out-of-line TArray<INT>::AddUniqueItem instantiation (UnModel: unique INT indices, called from
 * 00815fa0/0082d2d0) */
template INT TArray<INT>::AddUniqueItem(INT const& Item);
