// RHarpoonGun.cpp (part 1 of 2): 29 functions
// Placed here by: class 6, callers 6, file 6.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x0163a770
int ARSpecialMoveInstance_HarpoonYank::vf_000(void) { return 1; }

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C { void* Data; int Num; int Max; void sub_0164a170(); };

// @baa 0x0164a170
void C::sub_0164a170() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

// @baa 0x016559e0
IMPLEMENT_CLASS_AT(ARSpecialMoveInstance_HarpoonYank, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RHarpoonGun.cpp", 19);

// @baa 0x01655a50
// @baa 0x01658490
IMPLEMENT_CLASS_AT(ARSpecialMoveInstance_HarpoonBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RHarpoonGun.cpp", 18);

// @baa 0x016584d0
// @baa 0x01658550
IMPLEMENT_CLASS_AT(ARBatclawBlockingVolume, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RHarpoonGun.cpp", 25);

// @baa 0x01658680
IMPLEMENT_CLASS_AT(ARHarpoonGun, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RHarpoonGun.cpp", 17);

// @baa 0x016588a0
IMPLEMENT_CLASS_AT(ARProjectileWithRope, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RHarpoonGun.cpp", 21);

// @baa 0x016588d0
IMPLEMENT_CLASS_AT(ARHarpoonProjectile, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RHarpoonGun.cpp", 22);

// @baa 0x01659110
// @baa 0x016591d0
// @baa 0x01659290
// @baa 0x01659350
// @baa 0x01659410
// @baa 0x016594d0
// @baa 0x0165c110
// @baa 0x0165c220
bool ARSpecialMoveInstance_HarpoonYank::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0163a600
int ARHarpoonGun::vf_000(void) { return 1; }

// @baa 0x0163a610

// @baa 0x0163a720
int ARSpecialMoveInstance_HarpoonBase::vf_000(void) { return 1; }

// @baa 0x0163a730
bool ARSpecialMoveInstance_HarpoonBase::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0163a780

// @baa 0x0163a890
int ARProjectileWithRope::vf_000(void) { return 1; }

// @baa 0x0163a8a0
bool ARProjectileWithRope::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0163a8e0
int ARHarpoonProjectile::vf_000(void) { return 1; }

// @baa 0x0163a8f0

// @baa 0x0163aa00
int ARBatclawBlockingVolume::vf_000(void) { return 1; }

// @baa 0x0163aa10
bool ARBatclawBlockingVolume::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}
