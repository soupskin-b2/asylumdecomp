// Engine_07f0000.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x007f72f0
void UEngine::SetClientTravel( INT URL, INT Flags ) PURE_VIRTUAL(UEngine::SetClientTravel,);

// @baa 0x007f72d0
void UEngine::Tick(INT DeltaSeconds)
{
	PURE_VIRTUAL(UEngine::Tick,);
}
