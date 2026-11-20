// GFxUIEngine.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/GFx.h"

// @baa 0x00e5fce0
UBOOL UGFxInteraction::InputChar(INT ControllerId, TCHAR Character)
{
    if (GGFxEngine)
    {
        return GGFxEngine->InputChar(ControllerId, Character);
    }
    return FALSE;
}
