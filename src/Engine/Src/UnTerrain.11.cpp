// UnTerrain.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/AppMath.h"

/* Kit gap (Array.h, issue #39): this build inlines TArray::operator() where the kit's plain-inline one is
 * called out of line; same body, forced inline. */
template<class T> struct TArrayAt_ : public TArray<T>
{
    using TArray<T>::ArrayNum;
    __forceinline T& At(INT i)
    {
#line 560 BAA_ARRAY_FILE
        check(i>=0 && (i<ArrayNum||(i==0 && ArrayNum==0)));
        return this->GetTypedData()[i];
    }
    __forceinline const T& At(INT i) const
    {
#line 566 BAA_ARRAY_FILE
        check(i>=0 && (i<ArrayNum||(i==0 && ArrayNum==0)));
        return this->GetTypedData()[i];
    }
};

/* Kit gap: FTerrainHeight is empty in the kit; in UE3 it is { WORD Value; }. */
struct ATerrain_ : public ATerrain
{
    const WORD& Height(INT X, INT Y) const; /* 0x0098b970 */
};

// @baa 0x0098b970
/* UE3's ATerrain::Height: the height sample at a vertex, clamping the coordinates to the terrain. */
const WORD& ATerrain_::Height(INT X, INT Y) const
{
    X = Clamp(X, 0, NumVerticesX - 1);
    Y = Clamp(Y, 0, NumVerticesY - 1);
    return ((const TArrayAt_<WORD>&)Heights).At(Y * NumVerticesX + X);
}

#line 43 "candidate.cpp"

/* Kit gap: FTerrainInfoData is empty in the kit; in UE3 it is { BYTE Data; } (visibility/flip flags). */
struct ATerrain__0098ba70 : public ATerrain
{
    BYTE* GetInfoData(INT X, INT Y); /* 0x0098ba70 */
};

// @baa 0x0098ba70
/* UE3's ATerrain::GetInfoData: the info flags at a vertex, clamping the coordinates to the terrain. */
BYTE* ATerrain__0098ba70::GetInfoData(INT X, INT Y)
{
    X = Clamp(X, 0, NumVerticesX - 1);
    Y = Clamp(Y, 0, NumVerticesY - 1);
    return &((TArrayAt_<BYTE>&)InfoData).At(Y * NumVerticesX + X);
}

/* Kit gap: FTerrainInfoData is empty in the kit; in UE3 it is { BYTE Data; } (visibility/flip flags). */
struct ATerrain__0098baf0 : public ATerrain
{
    const BYTE* GetInfoData(INT X, INT Y) const; /* 0x0098baf0 */
};

// @baa 0x0098baf0
/* UE3's ATerrain::GetInfoData (const): the info flags at a vertex, clamping the coordinates to the terrain. */
const BYTE* ATerrain__0098baf0::GetInfoData(INT X, INT Y) const
{
    X = Clamp(X, 0, NumVerticesX - 1);
    Y = Clamp(Y, 0, NumVerticesY - 1);
    return &((const TArrayAt_<BYTE>&)InfoData).At(Y * NumVerticesX + X);
}
