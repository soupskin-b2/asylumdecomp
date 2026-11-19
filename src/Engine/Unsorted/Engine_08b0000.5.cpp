// Engine_08b0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Native.h"

/* UE3's FString FURL::String(UBOOL FullyQualified = 0) const. */

// @baa 0x008b6f80
FString AWorldInfo::GetLocalURL()
{
    return ((FURL&)GWorld->URL).String(FALSE);
}
