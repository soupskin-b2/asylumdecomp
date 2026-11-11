// Core_0f60000.cpp (part 1 of 2): 7 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct C {
    undefined4 * sub_00f62210();
};

int sub_00ff92b0(void);
extern undefined * g_021595d8;
// @baa 0x00f62210
undefined4 * C::sub_00f62210(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_00ff92b0();
  *param_1 = (undefined4)(&g_021595d8);
  param_1[1] = 0xe;
  return param_1;
}

// @baa 0x00f62230
int sub_00f62230(void) { return 0; }

// @baa 0x00f62240
int __stdcall sub_00f62240(int a0, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14) { return 1; }

struct C_00f62250 {
    FString sub_00f62250();
};

// @baa 0x00f62250
FString C_00f62250::sub_00f62250()
{
    return TEXT("SplitX");
}

void sub_00f5e8b0();
// @baa 0x00f62280
void sub_00f62280(void) { sub_00f5e8b0(); }

struct C_00f623b0 { C_00f623b0* sub_00f623b0(void); };

// @baa 0x00f623b0
C_00f623b0* C_00f623b0::sub_00f623b0(void) { return this; }

void sub_00553720();
// @baa 0x00f623c0
void sub_00f623c0(void) { sub_00553720(); }
