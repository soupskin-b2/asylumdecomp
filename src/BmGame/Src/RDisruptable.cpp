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
int ARDisruptableObjectBase::vf_000(void) { return 1; }

// @baa 0x017166e0
bool ARDisruptableObjectBase::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01716720

struct ARDisruptableObjectDoor_ : public ARDisruptableObjectDoor
{
	void sub_007771e0(int Param);
	void sub_01732370();
	void sub_01732630(int Param);
};

// @baa 0x01732630
void ARDisruptableObjectDoor_::sub_01732630(int Param)
{
	sub_007771e0(Param);
	sub_01732370();
}

// Virtual slot 0x04c of ARDisruptableObjectDoor: forwards the parameter to
// sub_00783b70, then runs sub_01732370.
struct ARDisruptableObjectDoor__01732650 : public ARDisruptableObjectDoor {
	int sub_00783b70(int Param);
	void sub_01732370();
	void sub_01732650(UINT Param);
};

// @baa 0x01732650
void ARDisruptableObjectDoor__01732650::sub_01732650(UINT Param)
{
	sub_00783b70(Param);
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
