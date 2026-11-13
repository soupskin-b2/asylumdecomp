// UnWorld.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Native.h"

extern FOutputDevice* g_025d53e8;
#define GLog g_025d53e8
// @baa 0x009b0810
/* UnLevel.cpp */
void AWorldInfo::DoMemoryTracking()
{
	GEngine->Exec(TEXT("MemLeakCheck"), *GLog);
}
