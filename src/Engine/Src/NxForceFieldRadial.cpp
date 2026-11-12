// NxForceFieldRadial.cpp: 6 functions
// Placed here by: callers 1, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00a50490
IMPLEMENT_CLASS_AT(ANxForceFieldRadial, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\NxForceFieldRadial.cpp", 15);

// @baa 0x00a506a0

// @baa 0x00a345d0

// @baa 0x00a346e0
int ANxForceFieldRadial::vf_000(void) { return 1; }

// @baa 0x00a346f0
bool ANxForceFieldRadial::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00a34750
void ANxForceFieldRadial::vf_354()
{
	Kernel.Dummy = 0;
	ForceField.Dummy = 0;
	vf_238();
}
