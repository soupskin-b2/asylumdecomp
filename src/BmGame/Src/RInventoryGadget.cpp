// RInventoryGadget.cpp (part 1 of 2): 35 functions
// Placed here by: neighbours 18, class 6, file 6, callers 5.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x0163ac30
IMPLEMENT_CLASS_AT(ARInventoryGadget, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RInventoryGadget.cpp", 23);

// @baa 0x0163ad40
int ARInventoryGadget::vf_000(void) { return 1; }

// @baa 0x0163ad50
bool ARInventoryGadget::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0163ad90
IMPLEMENT_CLASS_AT(ARProjectile, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RInventoryGadget.cpp", 24);

// @baa 0x0163aea0
int ARProjectile::vf_000(void) { return 1; }

// @baa 0x0163aeb0
bool ARProjectile::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0163aef0
int ARGooSpray::vf_000(void) { return 1; }

// @baa 0x0163af00
IMPLEMENT_CLASS_AT(ARExplosiveGooMine, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RInventoryGadget.cpp", 26);

// @baa 0x0163b010
int ARExplosiveGooMine::vf_000(void) { return 1; }

// @baa 0x0163b020
bool ARExplosiveGooMine::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0163b060
int ARResonatorTuner::vf_000(void) { return 1; }

struct C { C* sub_0163b070(void); };

// @baa 0x0163b070
C* C::sub_0163b070(void) { return this; }

struct C_0163b0d0 { C_0163b0d0* sub_0163b0d0(void); };

// @baa 0x0163b0d0
C_0163b0d0* C_0163b0d0::sub_0163b0d0(void) { *(int*)((char*)this + 360) = 0; return this; }

struct C_016504b0 { C_016504b0* sub_016504b0(void); };

// @baa 0x016504b0
C_016504b0* C_016504b0::sub_016504b0(void) { return this; }

void sub_0164fee0();
// @baa 0x016504c0
void sub_016504c0(void) { sub_0164fee0(); }

void sub_0164ff40();
// @baa 0x016504d0
void sub_016504d0(void) { sub_0164ff40(); }

void sub_0164ffa0();
// @baa 0x016504e0
void sub_016504e0(void) { sub_0164ffa0(); }

void sub_01650000();
// @baa 0x016504f0
void sub_016504f0(void) { sub_01650000(); }

void sub_01650060();
// @baa 0x01650500
void sub_01650500(void) { sub_01650060(); }

void sub_016500c0();
// @baa 0x01650520
void sub_01650520(void) { sub_016500c0(); }

void sub_01650130();
// @baa 0x01650530
void sub_01650530(void) { sub_01650130(); }

// @baa 0x01655da0
// @baa 0x01655e60
// @baa 0x016585e0
// @baa 0x01658620
IMPLEMENT_CLASS_AT(ARGooSpray, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RInventoryGadget.cpp", 25);

// @baa 0x016586e0
IMPLEMENT_CLASS_AT(ARResonatorTuner, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RInventoryGadget.cpp", 27);

// @baa 0x01658720
IMPLEMENT_CLASS_AT(ARInventoryManager, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RInventoryGadget.cpp", 22);

// @baa 0x01658730
// @baa 0x01658800
// @baa 0x01659590
// @baa 0x01659650
// @baa 0x01659710
// @baa 0x016597d0
// @baa 0x01659890
// @baa 0x01659950
