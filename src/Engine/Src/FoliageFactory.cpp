// FoliageFactory.cpp: 4 functions
// Placed here by: callers 1, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00bd51c0
IMPLEMENT_CLASS_AT(AFoliageFactory, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\FoliageFactory.cpp", 10);

// @baa 0x00bd51f0

// @baa 0x00bac400

// @baa 0x00bd59c0
void AFoliageFactory::PostEditChange(UProperty* PropertyThatChanged)
{
    Super::PostEditChange(PropertyThatChanged);
    sub_00bd52b0();
}
