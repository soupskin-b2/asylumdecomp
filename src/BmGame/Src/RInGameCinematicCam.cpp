// RInGameCinematicCam.cpp (part 1 of 2): 9 functions
// Placed here by: class 6, file 1, callers 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x016aaa20
IMPLEMENT_CLASS_AT(ARInGameCinematicCam, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RInGameCinematicCam.cpp", 6);

// @baa 0x016aab30
int ARInGameCinematicCam::vf_000(void) { return 1; }

// @baa 0x016aab40
bool ARInGameCinematicCam::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x016c9120
// @baa 0x016c9190
// @baa 0x016ca450
// @baa 0x016ca870
// @baa 0x01e277e0
void sub_01e277e0(void) {  }

// @baa 0x016aab80
/* Resets the camera smoother when a new animation starts. */
void ARInGameCinematicCam::AnimStarted()
{
	Smoother.LastSmoothDistance = 1.f;
	Smoother.DirectionDistance[0] = 10000.f;
	Smoother.DirectionDistance[1] = 10000.f;
	Smoother.DirectionDistance[2] = 10000.f;
	Smoother.DirectionDistance[3] = 10000.f;
	Smoother.CurrentSmootherIndex = 0;
	Smoother.MinSmootherIndex = 0;
}
