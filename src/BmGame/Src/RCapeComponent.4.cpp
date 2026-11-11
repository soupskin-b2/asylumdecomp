// RCapeComponent.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Native.h"

struct URCapeComponent_ : public URCapeComponent {
    UPhysicalMaterial* sub_016ae9f0();
};

// @baa 0x016ae9f0
UPhysicalMaterial* URCapeComponent_::sub_016ae9f0()
{
    UPhysicalMaterial* Material = GEngine->DefaultPhysMaterial;
    if (PhysMaterialOverride != NULL)
        Material = PhysMaterialOverride;
    return Material;
}
