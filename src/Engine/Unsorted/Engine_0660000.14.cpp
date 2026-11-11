// Engine_0660000.cpp (part 14 of 17): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x006634f0
IMPLEMENT_CLASS_AT(UMaterialInterface, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\MaterialShared.cpp", 10);

// A UMaterialInterface member the header doesn't declare: returns the material's default
// surface height (an INT).
struct UMaterialInterface_ : public UMaterialInterface
{
    INT sub_006d9240();
    virtual DOUBLE GetSurfaceHeight();
};

// @baa 0x006635a0
DOUBLE UMaterialInterface_::GetSurfaceHeight()
{
    return sub_006d9240();
}
