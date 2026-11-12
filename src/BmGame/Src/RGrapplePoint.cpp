// RGrapplePoint.cpp: 13 functions
// Placed here by: callers 5, file 5.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x01658580
IMPLEMENT_CLASS_AT(ARGrappleBlockingVolume, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RGrapplePoint.cpp", 24);

// @baa 0x01658650
IMPLEMENT_CLASS_AT(ARGrappleGun, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RGrapplePoint.cpp", 20);

// @baa 0x01658830
IMPLEMENT_CLASS_AT(ARGrapplePointCatchmentArea, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RGrapplePoint.cpp", 23);

// @baa 0x016589f0
IMPLEMENT_CLASS_AT(ARGrapplePoint, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RGrapplePoint.cpp", 21);

// @baa 0x01658a20
IMPLEMENT_CLASS_AT(ARRescuePoint, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RGrapplePoint.cpp", 22);

// @baa 0x01658d50
// @baa 0x01658e10
// @baa 0x01658ed0
// @baa 0x01658f90
// @baa 0x01659050

// @baa 0x01639d00

// @baa 0x01639e10
int ARGrapplePoint::vf_000(void) { return 1; }

// @baa 0x01639e20
bool ARGrapplePoint::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}
