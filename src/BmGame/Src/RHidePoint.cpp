// RHidePoint.cpp: 13 functions
// Placed here by: callers 2, file 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x01658930
IMPLEMENT_CLASS_AT(ARHidePoint, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RHidePoint.cpp", 9);

// @baa 0x01658960
IMPLEMENT_CLASS_AT(ARGargoyleBombBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RHidePoint.cpp", 10);

// @baa 0x0165aac0
// @baa 0x0165ab80

// @baa 0x0163dca0

// @baa 0x0163ddb0
int ARHidePoint::vf_000(void) { return 1; }

// @baa 0x0163ddc0
bool ARHidePoint::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0163de00

// @baa 0x0163df10
int ARGargoyleBombBase::vf_000(void) { return 1; }

// @baa 0x0163df20
bool ARGargoyleBombBase::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0163e040
void ARHidePoint::vf_39c(void) {  }

struct ARHidePointArray : public TArray<ARHidePoint*>
{
    INT AddUniqueItem(ARHidePoint* const& Item); /* 0x0164a040 */
    INT RemoveItem(ARHidePoint* const& Item); /* 0x0164a0f0 */
};

extern ARHidePointArray g_026e1c70;
struct ARHidePoint_ : public ARHidePoint
{
    INT sub_0164ef80();
};

// @baa 0x0164ef80
INT ARHidePoint_::sub_0164ef80()
{
    return g_026e1c70.AddUniqueItem(this);
}

struct ARHidePoint__0164efa0 : public ARHidePoint
{
    INT sub_0164efa0();
};

// @baa 0x0164efa0
INT ARHidePoint__0164efa0::sub_0164efa0()
{
    return g_026e1c70.RemoveItem(this);
}
