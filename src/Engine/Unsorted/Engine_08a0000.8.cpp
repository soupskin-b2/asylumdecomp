// Engine_08a0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Native.h"

struct UWorld_ : public UWorld
{
	UBOOL FarMoveActor(AActor* Actor, const FVector& DestLocation, UBOOL test = 0, UBOOL bNoCheck = 0, UBOOL bAttachedMove = 0); /* 0x007eda90 */
};

// @baa 0x008a7bb0
/* Teleports the actor to NewLocation (UWorld::FarMoveActor with its default flags). */
UBOOL AActor::SetLocation(FVector NewLocation)
{
	return ((UWorld_*)GWorld)->FarMoveActor(this, NewLocation);
}
