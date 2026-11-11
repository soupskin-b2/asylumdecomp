// UnPostProcess.cpp: 17 functions
// Placed here by: class 7, neighbours 6, file 3, callers 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x0064b7f0
IMPLEMENT_CLASS_AT(UPostProcessEffect, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPostProcess.cpp", 7);

// @baa 0x0064b850
int UPostProcessEffect::vf_10c(int a0) { return 0; }

// @baa 0x0064b860
// @baa 0x00889cf0
// @baa 0x00889e00
int UPostProcessEffect::vf_000(void) { return 1; }

// @baa 0x00889e10
bool UPostProcessEffect::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00889e50
IMPLEMENT_CLASS_AT(UPostProcessChain, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPostProcess.cpp", 8);

// @baa 0x00889f60
int UPostProcessChain::vf_000(void) { return 1; }

// @baa 0x00889f70
bool UPostProcessChain::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00889fb0
IMPLEMENT_CLASS_AT(APostProcessVolume, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPostProcess.cpp", 9);

// @baa 0x0088a0c0
int APostProcessVolume::vf_000(void) { return 1; }

// @baa 0x0088a0d0
bool APostProcessVolume::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0088e5a0
// @baa 0x0088f630
// @baa 0x0089a300
// @baa 0x0089bac0
// @baa 0x0089f200
