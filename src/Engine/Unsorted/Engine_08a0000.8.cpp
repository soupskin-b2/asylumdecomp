// Engine_08a0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Native.h"


// @baa 0x008a7bb0
/* Teleports the actor to NewLocation (UWorld::FarMoveActor with its default flags). */
UBOOL AActor::SetLocation(FVector NewLocation)
{
	return ((UWorld*)GWorld)->FarMoveActor(this, NewLocation);
}
