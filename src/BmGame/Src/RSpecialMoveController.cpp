// RSpecialMoveController.cpp (part 1 of 2): 8 functions
// Placed here by: class 6, callers 1, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x01638780
IMPLEMENT_CLASS_AT(URSpecialMoveController, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RSpecialMoveController.cpp", 9);

// @baa 0x01638890
int URSpecialMoveController::vf_000(void) { return 1; }

// @baa 0x016388a0
bool URSpecialMoveController::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C { void* Data; int Num; int Max; void sub_0164a1d0(); };

// @baa 0x0164a1d0
void C::sub_0164a1d0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

// @baa 0x01650350
// @baa 0x016503c0
// @baa 0x016549e0
// @baa 0x01654a00
