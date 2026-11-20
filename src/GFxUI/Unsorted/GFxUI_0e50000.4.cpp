// GFxUI_0e50000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/GFx.h"

// @baa 0x00e53890
void UGFxInteraction::Tick(FLOAT DeltaTime)
{
    if (GGFxEngine)
    {
        GGFxEngine->Tick(DeltaTime);
    }
}
