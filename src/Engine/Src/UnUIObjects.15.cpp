// UnUIObjects.cpp (part 15 of 17): 3 functions
// Placed here by: class 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00da80c0
int UConsoleEntry::vf_000(void) { return 1; }

// @baa 0x00db6bd0
IMPLEMENT_CLASS_AT(UConsoleEntry, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIObjects.cpp", 50);

// @baa 0x00daa7e0
UINT UUIObject::GetNumResolvedFaces()
{
    UINT Result = 0;
    for (INT Face = 0; Face < 4; Face++) {
        if (HasPositionBeenResolved(Face)) {
            Result++;
        }
    }
    return Result;
}
