// Engine_05c0000.cpp (part 1 of 2): 26 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// @baa 0x005cbec0
int UObject::sub_005cbec0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

// @baa 0x005cbed0
int UObject::sub_005cbed0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

// @baa 0x005cc050
int UObject::sub_005cc050(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_view {
    int sub_005cbfb0(int);
};

// @baa 0x005cc060
int UObject::sub_005cc060(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_view *)(this))->sub_005cbfb0(param_2);
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  return param_1;
}

// @baa 0x005cc080
int UObject::sub_005cc080(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

// @baa 0x005cc090
int UObject::sub_005cc090(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x005cc0b0
int UObject::sub_005cc0b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

// @baa 0x005cc0f0
int UObject::sub_005cc0f0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

// @baa 0x005cc110
int UObject::sub_005cc110(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

// @baa 0x005cc120
int UObject::sub_005cc120(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

// @baa 0x005cc130
int UObject::sub_005cc130(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

// @baa 0x005cc140
int UObject::sub_005cc140(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x005cc160
int UObject::sub_005cc160(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x1c;
}

// @baa 0x005cc180
int UObject::sub_005cc180(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x005cc1a0
int UObject::sub_005cc1a0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x005cc1c0
int UObject::sub_005cc1c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

void sub_005cbd70();
// @baa 0x005cc1d0
void sub_005cc1d0(void) { sub_005cbd70(); }

// @baa 0x005cc1e0
int UObject::sub_005cc1e0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x005cc200
int UObject::sub_005cc200(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x1c;
}

// @baa 0x005cc220
int UObject::sub_005cc220(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x005cc240
int UObject::sub_005cc240(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

// @baa 0x005cc250
int UObject::sub_005cc250(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x005cc270
int UObject::sub_005cc270(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

int sub_005c80f0(void);
int sub_005cb6d0(...);
int sub_0062d220(...);
extern undefined4 g_026a1c70;
// @baa 0x005cc2f0
void sub_005cc2f0(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
  if (g_026a1c70 == 0) {
    g_026a1c70 = sub_005cb6d0(L"Core");
    sub_005c80f0();
  }
  sub_0062d220(param_1,param_2,g_026a1c70,param_3,param_4);
  return;
}

struct C {
    FString sub_005cc5c0();
};

// @baa 0x005cc5c0
FString C::sub_005cc5c0()
{
    return TEXT("FArchiveCountMem");
}

struct FStr
{
    TCHAR* Data;
    int Num;
    int Max;
    FStr() : Data(0), Num(0), Max(0) {}
    ~FStr();
    FStr& operator+=(const FStr& Other);
};

FStr sub_005cc5f0(const TCHAR* Fmt, float A, float B, float C_005cc890, float D);
struct C_005cc890
{
    float M[16];
    FStr sub_005cc890();
};

// @baa 0x005cc890
FStr C_005cc890::sub_005cc890()
{
    FStr Ret;
    Ret += sub_005cc5f0(L"[%f %f %f %f] ", M[0], M[1], M[2], M[3]);
    Ret += sub_005cc5f0(L"[%f %f %f %f] ", M[4], M[5], M[6], M[7]);
    Ret += sub_005cc5f0(L"[%f %f %f %f] ", M[8], M[9], M[10], M[11]);
    Ret += sub_005cc5f0(L"[%f %f %f %f] ", M[12], M[13], M[14], M[15]);
    return Ret;
}
