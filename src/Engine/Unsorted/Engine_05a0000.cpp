// Engine_05a0000.cpp: 11 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct A_005aa1e0 { virtual void sub_005aa270(); char pad[44]; };

struct B_005aa1e0 { virtual void sub_005aa270(); };

struct C_005aa1e0 : A_005aa1e0, B_005aa1e0 { virtual void sub_005aa270(); C_005aa1e0(); };

C_005aa1e0::C_005aa1e0() {}

// @baa 0x005aa1e0
void C_005aa1e0::sub_005aa270() {}

// @baa 0x005aa270
UTextBuffer::UTextBuffer(const TCHAR* InText)
{
    new(&Native_48) FString(InText);
}

struct C {
    int sub_005acbd0();
};

// @baa 0x005acbd0
int C::sub_005acbd0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_005acbf0 {
    int sub_005acbf0();
};

// @baa 0x005acbf0
int C_005acbf0::sub_005acbf0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + 4 + *(int *)*param_1;
}

struct C_005acc00 {
    int sub_005acc00();
};

// @baa 0x005acc00
int C_005acc00::sub_005acc00(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_005acc20 {
    int sub_005acc20();
};

// @baa 0x005acc20
int C_005acc20::sub_005acc20(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + 4 + *(int *)*param_1;
}

extern TArray<int> g_026a1ca4;
struct C_005acc30 {
    int sub_005acc30();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x005acc30
int C_005acc30::sub_005acc30()
{
    return g_026a1ca4(Index);
}

struct C_005acc90 {
    int sub_005acc90();
};

// @baa 0x005acc90
int C_005acc90::sub_005acc90(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_005accb0 {
    int sub_005accb0();
};

// @baa 0x005accb0
int C_005accb0::sub_005accb0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

struct C_005accc0 {
    int sub_005accc0(int);
    int sub_005a9720(int, int);
};

// @baa 0x005accc0
int C_005accc0::sub_005accc0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_005accc0 *)(this))->sub_005a9720((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

struct C_view {
    int sub_005a9910(int, int);
};

// @baa 0x005accf0
int UTexture2D::sub_005accf0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view *)(this))->sub_005a9910((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x1c;
  }
  return 0;
}
