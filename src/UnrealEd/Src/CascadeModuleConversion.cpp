// CascadeModuleConversion.cpp (part 1 of 3): 17 functions
// Placed here by: callers 9, neighbours 8.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

int sub_007a2380(void);
int sub_007b5740(...);
extern undefined4 g_026b52ec;
// @baa 0x00785350
int sub_00785350(void)
{
  if (g_026b52ec == 0) {
    g_026b52ec = sub_007b5740(L"Engine");
    sub_007a2380();
  }
  return g_026b52ec;
}

// @baa 0x007a24e0
IMPLEMENT_CLASS_AT(UDistributionFloatUniformCurve, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnDistributions.cpp", 11);

int sub_007a2910(void);
int sub_007aff00(...);
extern undefined4 g_026b5300;
// @baa 0x00b4fd20
int sub_00b4fd20(void)
{
  if (g_026b5300 == 0) {
    g_026b5300 = sub_007aff00(L"Engine");
    sub_007a2910();
  }
  return g_026b5300;
}

int sub_007a24e0(void);
int sub_007c7df0(...);
extern undefined4 g_026b52f0;
// @baa 0x00b71c50
int sub_00b71c50(void)
{
  if (g_026b52f0 == 0) {
    g_026b52f0 = sub_007c7df0(L"Engine");
    sub_007a24e0();
  }
  return g_026b52f0;
}

int sub_007affc0(...);
int sub_007b58c0(void);
extern undefined4 g_026b5308;
// @baa 0x00b71c80
int sub_00b71c80(void)
{
  if (g_026b5308 == 0) {
    g_026b5308 = sub_007affc0(L"Engine");
    sub_007b58c0();
  }
  return g_026b5308;
}

int sub_007a2a70(void);
int sub_007c7f70(...);
extern undefined4 g_026b5304;
// @baa 0x00b71cb0
int sub_00b71cb0(void)
{
  if (g_026b5304 == 0) {
    g_026b5304 = sub_007c7f70(L"Engine");
    sub_007a2a70();
  }
  return g_026b5304;
}

int sub_00b72450(void);
int sub_00b7a1d0(...);
extern undefined4 g_026bf75c;
// @baa 0x00b855a0
int sub_00b855a0(void)
{
  if (g_026bf75c == 0) {
    g_026bf75c = sub_00b7a1d0(L"Engine");
    sub_00b72450();
  }
  return g_026bf75c;
}

int sub_00b722f0(void);
int sub_00b855d0(...);
extern undefined4 g_026bf758;
// @baa 0x00b92cf0
int sub_00b92cf0(void)
{
  if (g_026bf758 == 0) {
    g_026bf758 = sub_00b855d0(L"Engine");
    sub_00b722f0();
  }
  return g_026bf758;
}

// @baa 0x012c00f0
undefined4 sub_012c00f0(int param_1, int param_2, int param_3, float param_4)
{
  *(float *)(param_1 + 0xc) =
       (1.0 - param_4) * *(float *)(param_3 + 0xc) + *(float *)(param_2 + 0xc) * param_4;
  return 1;
}

// @baa 0x012c0130
undefined4 sub_012c0130(int param_1, int param_2, int param_3, float param_4)
{
  float fVar1;
  fVar1 = 1.0 - param_4;
  *(char *)(param_1 + 0x16) =
       (char)(int)((float)*(byte *)(param_3 + 0x16) * fVar1 +
                  (float)*(byte *)(param_2 + 0x16) * param_4);
  *(char *)(param_1 + 0x15) =
       (char)(int)((float)*(byte *)(param_3 + 0x15) * fVar1 +
                  (float)*(byte *)(param_2 + 0x15) * param_4);
  *(char *)(param_1 + 0x14) =
       (char)(int)((float)*(byte *)(param_3 + 0x14) * fVar1 +
                  (float)*(byte *)(param_2 + 0x14) * param_4);
  *(char *)(param_1 + 0x17) =
       (char)(int)((float)*(byte *)(param_3 + 0x17) * fVar1 +
                  (float)*(byte *)(param_2 + 0x17) * param_4);
  return 1;
}

// @baa 0x012c0210
undefined4 sub_012c0210(int param_1, int param_2)
{
  *(undefined4 *)(param_1 + *(int *)(*(int *)(param_2 + 4) + 0x54)) =
       *(undefined4 *)(param_2 + 0x14);
  return 1;
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C { void* Data; int Num; int Max; void sub_012d3460(); };

// @baa 0x012d3460
void C::sub_012d3460() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_012d34c0 {
    void sub_012d34c0(int);
};

int sub_0053df70(...);
// @baa 0x012d34c0
void C_012d34c0::sub_012d34c0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 4,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_012d3500 { void* Data; int Num; int Max; void sub_012d3500(); };

// @baa 0x012d3500
void C_012d3500::sub_012d3500() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_012d35b0 {
    undefined4 sub_012d35b0(byte);
    int sub_0040fcc0();
};

int sub_0053dfa0(...);
// @baa 0x012d35b0
undefined4 C_012d35b0::sub_012d35b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_012d35b0 *)(((char *)this + 4)))->sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_012d3660 { void* Data; int Num; int Max; void sub_012d3660(); };

// @baa 0x012d3660
void C_012d3660::sub_012d3660() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_012d36c0 {
    undefined4 sub_012d36c0();
};

// @baa 0x012d36c0
undefined4 C_012d36c0::sub_012d36c0(void)
{
    undefined4 param_1 = (undefined4)this;
  return param_1;
}
