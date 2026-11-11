// BmEditor_12a0000.cpp: 4 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct S {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_012a1930(INT Index);
};

// @baa 0x012a1930
DWORD* S::sub_012a1930(INT Index)
{
    return &Items(Index);
}

int sub_005c7a70(...);
int sub_012abb10(void);
// @baa 0x012abb70
undefined4 UTexAligner::sub_012abb70(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_012abb10();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x50);
  }
  return param_1;
}

extern TArray<int> g_026a1ca4;
struct C {
    int sub_012ae710();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x012ae710
int C::sub_012ae710()
{
    return g_026a1ca4(Index);
}

struct C_012ae770 {
    int sub_012ae770();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x012ae770
int C_012ae770::sub_012ae770()
{
    return g_026a1ca4(Index);
}
