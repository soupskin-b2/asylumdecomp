// UnrealEd_12f0000.cpp: 4 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C { void* Data; int Num; int Max; void sub_012f1910(); };

// @baa 0x012f1910
void C::sub_012f1910() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct M_012f6820 { void sub_012d3660(); };

struct C_012f6820 { char pad[36]; M_012f6820 m; void sub_012f6820(); };

// @baa 0x012f6820
void C_012f6820::sub_012f6820() { m.sub_012d3660(); }

void sub_012f1850();
// @baa 0x012f6830
void sub_012f6830(void) { sub_012f1850(); }

struct C_012f6810
{
    char pad_0[0x24];
    INT Value_24;
    INT Value_28;
    INT Value_2c;

    C_012f6810* sub_012f6810();
};

// @baa 0x012f6810
C_012f6810* C_012f6810::sub_012f6810()
{
    Value_24 = 0;
    Value_28 = 0;
    Value_2c = 0;
    return this;
}
