// RDisruptable.cpp: 11 functions
// Placed here by: callers 2, file 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x01733580
IMPLEMENT_CLASS_AT(ARDisruptableObjectBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RDisruptable.cpp", 10);

// @baa 0x017335b0
IMPLEMENT_CLASS_AT(ARDisruptableObjectDoor, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RDisruptable.cpp", 11);

// @baa 0x01733e50
// @baa 0x01733f10

// @baa 0x017165c0

// @baa 0x017166d0
UBOOL ARDisruptableObjectBase::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x017166e0
UBOOL ARDisruptableObjectBase::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01716720

// @baa 0x01732630
void ARDisruptableObjectDoor::PostEditMove(UBOOL bFinished)
{
	AActor::PostEditMove(bFinished);
	sub_01732370();
}

// Virtual slot 0x04c of ARDisruptableObjectDoor: forwards the parameter to
// sub_00783b70, then runs sub_01732370.

// @baa 0x01732650
void ARDisruptableObjectDoor::PostEditChange(UProperty* PropertyThatChanged)
{
	AActor::PostEditChange(PropertyThatChanged);
	sub_01732370();
}

struct S {
    void sub_007839c0();
    void sub_01732370();
    void sub_01732670();
};

// @baa 0x01732670
void S::sub_01732670() {
    sub_007839c0();
    sub_01732370();
}
