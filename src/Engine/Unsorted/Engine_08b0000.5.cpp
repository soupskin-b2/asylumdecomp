// Engine_08b0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Native.h"

/* Unnamed in the kit: UE3's FString FURL::String(UBOOL FullyQualified = 0) const. */
struct FURL_ : public FURL
{
    FString sub_00d51a10(UBOOL FullyQualified);
};

// @baa 0x008b6f80
/* UE3's AWorldInfo::GetLocalURL(): the current world's URL as a string (UWorld::URL is the kit's Native_cc). */
FString AWorldInfo::GetLocalURL()
{
    return ((FURL_&)GWorld->Native_cc).sub_00d51a10(FALSE);
}
