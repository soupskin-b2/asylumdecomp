// Engine_07b0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"
#include "ue3/Array.h"

// @baa 0x007bed80
/* TArray<AFracturedStaticMeshPart*>::operator=, out of line. */
template void TArray<AFracturedStaticMeshPart*>::operator=(const TArray<AFracturedStaticMeshPart*>& Other);
