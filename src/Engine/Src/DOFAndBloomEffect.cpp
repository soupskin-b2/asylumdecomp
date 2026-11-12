// DOFAndBloomEffect.cpp: 5 functions
// Placed here by: callers 1, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00656990
IMPLEMENT_CLASS_AT(UDOFAndBloomEffect, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\DOFAndBloomEffect.cpp", 11);

// @baa 0x00659100

// @baa 0x00650310

// @baa 0x00650420
int UDOFAndBloomEffect::vf_000(void) { return 1; }

// @baa 0x00650430
bool UDOFAndBloomEffect::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}
