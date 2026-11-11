// UnrealEd_1740000.cpp: 5 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Array.h"

extern char g_023d5314[];
// @baa 0x01742f50
int sub_01742f50(void) { return (int)g_023d5314; }

struct A_01742f60 { virtual void sub_01745700(); char pad[320]; };

struct B_01742f60 { virtual void sub_01745700(); };

struct C_01742f60 : A_01742f60, B_01742f60 { virtual void sub_01745700(); C_01742f60(); };

C_01742f60::C_01742f60() {}

// @baa 0x01742f60
void C_01742f60::sub_01745700() {}

struct A_01742f70 { virtual void sub_01745700(); char pad[324]; };

struct B_01742f70 { virtual void sub_01745700(); };

struct C_01742f70 : A_01742f70, B_01742f70 { virtual void sub_01745700(); C_01742f70(); };

C_01742f70::C_01742f70() {}

// @baa 0x01742f70
void C_01742f70::sub_01745700() {}

struct C { void sub_017411c0(int); C *sub_01743940(int); };

// @baa 0x01743940
C *C::sub_01743940(int a) { sub_017411c0(a); return this; }

extern TArray<int> g_026a1ca4;
struct C_01743960 {
    int sub_01743960();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x01743960
int C_01743960::sub_01743960()
{
    return g_026a1ca4(Index);
}
