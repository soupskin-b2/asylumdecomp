// UnTerrain.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/AppMath.h"

/* Kit gap: FTerrainHeight is empty in the kit; in UE3 it is { WORD Value; }. */
struct ATerrain_ : public ATerrain
{
    WORD& Height(INT X, INT Y); /* 0x0098b9f0 */
};

// @baa 0x0098b9f0
/* UE3's ATerrain::Height (non-const): the height sample at a vertex, clamping the coordinates to the terrain. */
WORD& ATerrain_::Height(INT X, INT Y)
{
    X = Clamp(X, 0, NumVerticesX - 1);
    Y = Clamp(Y, 0, NumVerticesY - 1);
    return ((TArray<WORD>&)Heights)(Y * NumVerticesX + X);
}

#line 43 "candidate.cpp"
