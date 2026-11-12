// RExplodableWallBase.cpp (part 1 of 2): 11 functions
// Placed here by: class 7, neighbours 1, callers 1, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x017168f0
IMPLEMENT_CLASS_AT(ARExplodableWallBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RExplodableWallBase.cpp", 12);

// @baa 0x01716a00
int ARExplodableWallBase::vf_000(void) { return 1; }

// @baa 0x01716a10
bool ARExplodableWallBase::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C { C* sub_01716a50(void); };

// @baa 0x01716a50
C* C::sub_01716a50(void) { return this; }

struct S {
    void sub_0171fe70();
    void sub_007839c0();
    void sub_01720220();
};

// @baa 0x01720220
void S::sub_01720220() {
    sub_0171fe70();
    sub_007839c0();
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_01722350 { void* Data; int Num; int Max; void sub_01722350(); };

// @baa 0x01722350
void C_01722350::sub_01722350() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

// @baa 0x01731390
// @baa 0x01731410
// @baa 0x01733220
// @baa 0x01733fd0

struct ARExplodableWallBase_ : ARExplodableWallBase
{
    FVector sub_01720230(INT PointIndex);
    FVector sub_01720390(INT FirstPointIndex, INT SecondPointIndex);
};

// @baa 0x01720390
FVector ARExplodableWallBase_::sub_01720390(INT FirstPointIndex, INT SecondPointIndex)
{
    FVector FirstPoint = sub_01720230(FirstPointIndex);
    FVector SecondPoint = sub_01720230(SecondPointIndex);
    return FVector(FirstPoint.X - SecondPoint.X,
                   FirstPoint.Y - SecondPoint.Y,
                   FirstPoint.Z - SecondPoint.Z);
}
