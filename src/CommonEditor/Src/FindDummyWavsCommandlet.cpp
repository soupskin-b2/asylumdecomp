// FindDummyWavsCommandlet.cpp: 7 functions
// Placed here by: class 6, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x0173ab60
IMPLEMENT_CLASS_AT(UFindDummyWavsCommandlet, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonEditor\\Src\\FindDummyWavsCommandlet.cpp", 7);

// @baa 0x0173ac70
UBOOL UFindDummyWavsCommandlet::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x0173ac80
UBOOL UFindDummyWavsCommandlet::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0174ab60
// @baa 0x0174abc0
// @baa 0x0174c9b0
// @baa 0x0174caf0
