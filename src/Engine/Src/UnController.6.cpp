// UnController.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Native.h"

// @baa 0x007a1d70
/* AController slot 0x1d8 (UE3 PostBeginPlay()): register with the world's controller list. */
void AController::PostBeginPlay()
{
    AActor::PostBeginPlay();
    if (!bDeleteMe)
    {
        GWorld->AddController(this);
    }
}
