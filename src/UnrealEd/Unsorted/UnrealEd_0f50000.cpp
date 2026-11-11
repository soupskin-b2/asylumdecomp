// UnrealEd_0f50000.cpp: 3 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Array.h"

typedef uint size_t;

struct C {
    void sub_00f53340(int, int);
    int sub_00f513c0(int, int);
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x00f53340
void C::sub_00f53340(int param_2, int param_3)
{
    int * param_1 = (int *)this;
  ((C *)(this))->sub_00f513c0(param_2, param_3);
  sub_01a37612((void *)(param_2 * 0x54 + *param_1),0,param_3 * 0x54);
  return;
}

struct S {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00f53370(INT Index);
};

// @baa 0x00f53370
DWORD* S::sub_00f53370(INT Index)
{
    return &Items(Index);
}

struct S_00f533c0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00f533c0(INT Index);
};

// @baa 0x00f533c0
DWORD* S_00f533c0::sub_00f533c0(INT Index)
{
    return &Items(Index);
}
