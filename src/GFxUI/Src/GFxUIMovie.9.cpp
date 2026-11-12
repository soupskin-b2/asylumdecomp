// GFxUIMovie.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Native.h"
#include "ue3/GFx.h"

/* UWorld::GetTimeSeconds (009c8f80) / GetRealTimeSeconds (009c8fc0) are out of line; the kit
 * doesn't declare them. */
struct UWorld_ : public UWorld
{
    FLOAT GetTimeSeconds();     /* 0x009c8f80 */
    FLOAT GetRealTimeSeconds(); /* 0x009c8fc0 */
};

/* FGFxMovie past pView (GFx.h stops there): the movie's clock and its timing mode. */
struct FGFxMovie_ : public FGFxMovie
{
    FLOAT LastTime;    /* 0x38 */
    BYTE _pad_3c[0x10];
    INT TimingMode;    /* 0x4c */
};

/* Classes.h declares this slot as `virtual INT vf_11c(INT)`; it is SetTimingMode(BYTE Mode)
 * (called by execSetTimingMode, returns nothing), so it is written on a helper. */
struct UGFxMovie_ : public UGFxMovie
{
    FGFxMovie_* GetMovie() const { return (FGFxMovie_*)pMovie.Dummy; }
    void SetTimingMode(BYTE Mode);
};

// @baa 0x00e44fe0
void UGFxMovie_::SetTimingMode(BYTE Mode)
{
    TimingMode = Mode;
    if (GetMovie())
    {
        GetMovie()->TimingMode = Mode;
        GetMovie()->LastTime = (Mode == TM_Real) ? ((UWorld_*)GWorld)->GetRealTimeSeconds() : ((UWorld_*)GWorld)->GetTimeSeconds();
    }
}
