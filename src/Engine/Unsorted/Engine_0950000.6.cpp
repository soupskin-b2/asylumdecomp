// Engine_0950000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#define BAA_OUTLINE_NEW
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/SkeletalMesh.h"

// @baa 0x00950af0
/* Array.h's placement new into a TArray, instantiated out of line for kDOP triangles */
template void* operator new(size_t Size, TArray<FkDOPCollisionTriangle>& Array);
