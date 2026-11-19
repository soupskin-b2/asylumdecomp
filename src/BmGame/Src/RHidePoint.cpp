// RHidePoint.cpp: 16 functions
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
UBOOL ARHidePoint::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x0163ddc0
UBOOL ARHidePoint::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0163de00

// @baa 0x0163df10
UBOOL ARGargoyleBombBase::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x0163df20
UBOOL ARGargoyleBombBase::HasParentClassChanged() const
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

// @baa 0x0164ef80
void ARHidePoint::ActivateForGrapple()
{
    g_026e1c70.AddUniqueItem(this);
}

// @baa 0x0164efa0
void ARHidePoint::DeactivateForGrapple()
{
    g_026e1c70.RemoveItem(this);
}

// @baa 0x01652010
void ARHidePoint::BeginDestroy()
{
	g_026e1c70.RemoveItem(this);
	Super::BeginDestroy();
}

// @baa 0x01651fe0
/* Slot 0x2c (unnamed in the kit): also drops the hide point from the list. */
void ARHidePoint::FinishDestroy()
{
	g_026e1c70.RemoveItem(this);
	Super::FinishDestroy();
}

// @baa 0x0163df60
INT ARHidePoint::AddMyMarker(AActor * A)
{
    vf_398(1);
    vf_39c();
    return 0;
}
