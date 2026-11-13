// UnUIObjects.cpp (part 8 of 17): 1 function
// Placed here by: class 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x00d98fe0
const UUIScene* UUIScreenObject::GetScene() const
{
    GError->Logf(TEXT("Pure virtual not implemented (%s)"), TEXT("const UUIScreenObject::GetScene"));
    return NULL;
}
