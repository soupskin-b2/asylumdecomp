// UnTerrain.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/AppMath.h"

/* Kit gap: FTerrainHeight is empty in the kit; in UE3 it is { WORD Value; }. */

// @baa 0x0098b970
/* UE3's ATerrain::Height: the height sample at a vertex, clamping the coordinates to the terrain. */
const WORD& ATerrain::Height(INT X, INT Y) const
{
    X = Clamp(X, 0, NumVerticesX - 1);
    Y = Clamp(Y, 0, NumVerticesY - 1);
    return ((const TArray<WORD>&)Heights)(Y * NumVerticesX + X);
}

#line 43 "candidate.cpp"

/* Kit gap: FTerrainInfoData is empty in the kit; in UE3 it is { BYTE Data; } (visibility/flip flags). */

// @baa 0x0098ba70
/* UE3's ATerrain::GetInfoData: the info flags at a vertex, clamping the coordinates to the terrain. */
BYTE* ATerrain::GetInfoData(INT X, INT Y)
{
    X = Clamp(X, 0, NumVerticesX - 1);
    Y = Clamp(Y, 0, NumVerticesY - 1);
    return &((TArray<BYTE>&)InfoData)(Y * NumVerticesX + X);
}

/* Kit gap: FTerrainInfoData is empty in the kit; in UE3 it is { BYTE Data; } (visibility/flip flags). */

// @baa 0x0098baf0
/* UE3's ATerrain::GetInfoData (const): the info flags at a vertex, clamping the coordinates to the terrain. */
const BYTE* ATerrain::GetInfoData(INT X, INT Y) const
{
    X = Clamp(X, 0, NumVerticesX - 1);
    Y = Clamp(Y, 0, NumVerticesY - 1);
    return &((const TArray<BYTE>&)InfoData)(Y * NumVerticesX + X);
}
