// RRopeComponentBase.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Native.h"

struct URRopeComponentBase_ : public URRopeComponentBase {
    UPhysicalMaterial* sub_0163f5c0();
};

// @baa 0x0163f5c0
UPhysicalMaterial* URRopeComponentBase_::sub_0163f5c0()
{
    UPhysicalMaterial* Material = GEngine->DefaultPhysMaterial;
    if (PhysMaterialOverride != NULL)
        Material = PhysMaterialOverride;
    return Material;
}
