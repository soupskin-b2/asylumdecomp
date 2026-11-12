// UnSkeletalTools.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#define BAA_OUTLINE_NEW
#include "ue3/Classes.h"
#include "ue3/Array.h"

inline FArchive& operator<<(FArchive& Ar, INT& I) { Ar.ByteOrderSerialize(&I, sizeof(I)); return Ar; }

FArchive& operator<<(FArchive& Ar, FMatrix& M);
// @baa 0x0094ff60
 /* UnMath.h, 0x00802300 */
/* the out-of-line new(TArray<FMatrix>&) instance (Array.h line 1275) */
template void* operator new<FMatrix>(size_t Size, TArray<FMatrix>& Array);
