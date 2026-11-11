// UnArchive.cpp (part 1 of 2): 12 functions
// Placed here by: neighbours 12.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

int sub_0053ec70(void);
extern undefined * g_01e72a60;
extern undefined * g_01e7d2a8;
// @baa 0x005707b0
undefined4 * UTexture2D::sub_005707b0(undefined4 param_2, undefined4 param_3)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01e72a60);
  sub_0053ec70();
  param_1[0x1b] = param_1[0x1b] | 0x1000;
  param_1[0x1f] = param_2;
  param_1[4] = 1;
  param_1[9] = 1;
  *param_1 = (undefined4)(&g_01e7d2a8);
  param_1[0x20] = param_3;
  param_1[0x21] = 0;
  return param_1;
}

// @baa 0x00570840
void UTexture2D::sub_00570840(int a0) { *(int*)((char*)this + 132) = a0; }

// @baa 0x00570850
int UTexture2D::sub_00570850(void) { return *(int*)((char*)this + 132); }

// @baa 0x00570870
undefined4 UTexture2D::sub_00570870(void)
{
    int param_1 = (int)this;

  return *(undefined4 *)(*(int *)(param_1 + 0x80) + 4);
}

int sub_0053dfa0(...);
// @baa 0x00570880
undefined4 * UTexture2D::sub_00570880(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01e72a60);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_view {
    int sub_0056fdc0(int, int, int, int);
};

// @baa 0x00570950
void UTexture2D::sub_00570950(void)
{
    int param_1 = (int)this;
  int iVar1;
  iVar1 = *(int *)(param_1 + 0x8c) - *(int *)(param_1 + 0x84);
  if (0 < iVar1) {
    *(undefined4 *)(param_1 + 0x90) = 1;
    ((C_view *)(this))->sub_0056fdc0(*(int *)(param_1 + 0x84), iVar1, *(undefined4 *)(param_1 + 0x98), 0);
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_1 + 0x84);
  }
  return;
}

int sub_0056a440(void);
// @baa 0x00570b30
undefined4 UTexture2D::sub_00570b30(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0056a440();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00570b50
void UTexture2D::sub_00570b50(void)
{
    int param_1 = (int)this;
  *(undefined4 *)(param_1 + 0x90) = 1;
  ((C_view *)(this))->sub_0056fdc0(*(undefined4 *)(param_1 + 0x84), 0x20000, *(undefined4 *)(param_1 + 0x98), 0);
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_1 + 0x84);
  return;
}

void sub_005817d0();
// @baa 0x00583a00
void sub_00583a00(void) { sub_005817d0(); }

void sub_00581760();
// @baa 0x00583e50
void sub_00583e50(void) { sub_00581760(); }

struct C {
    FString sub_0058af70();
};

// @baa 0x0058af70
FString C::sub_0058af70()
{
    return TEXT("FArchiveShowReferences");
}

int sub_0058afa0(void);
// @baa 0x0058b000
undefined4 UTexture2D::sub_0058b000(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0058afa0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}
