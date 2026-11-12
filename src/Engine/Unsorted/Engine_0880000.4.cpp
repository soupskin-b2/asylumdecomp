// Engine_0880000.cpp (part 4 of 6): 3 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C
{
    float First;
    float Second;

    C* sub_00888510();
};

// @baa 0x00888510
C* C::sub_00888510()
{
    First = 0.0f;
    Second = 0.0f;
    return this;
}

struct FPoint_
{
    int X;
    int Y;
    int Z;

    FPoint_ *sub_0088de40(const FPoint_ *Other);
};

// @baa 0x0088de40
FPoint_ *FPoint_::sub_0088de40(const FPoint_ *Other)
{
    X = Other->X;
    Y = Other->Y;
    Z = -1;
    return this;
}

struct Foo {
    int a, b, c;
    Foo* Init(const Foo* Src);
};

// @baa 0x0088dec0
Foo* Foo::Init(const Foo* Src)
{
    a = Src->a;
    b = Src->b;
    c = -1;
    return this;
}
