// UnrealEd_0f20000.cpp: 37 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Array.h"

struct E { BYTE Bytes[12]; };

struct S {
    TArray<E> Items; // 0x00
    E* sub_00f20de0(INT Index);
};

// @baa 0x00f20de0
E* S::sub_00f20de0(INT Index)
{
    return &Items(Index);
}

struct S_00f20e30 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00f20e30(INT Index);
};

// @baa 0x00f20e30
DWORD* S_00f20e30::sub_00f20e30(INT Index)
{
    return &Items(Index);
}

struct C {
    int sub_00f20ee0(int);
};

// @baa 0x00f20ee0
int C::sub_00f20ee0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00f20ef0 {
    int sub_00f20ef0(int);
};

// @baa 0x00f20ef0
int C_00f20ef0::sub_00f20ef0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x00f20f00
void __stdcall sub_00f20f00(int a0, int a1) {  }

struct C_00f20f10 {
    int sub_00f20f10(int);
};

// @baa 0x00f20f10
int C_00f20f10::sub_00f20f10(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x128 + *param_1;
}

// @baa 0x00f20f20
void __stdcall sub_00f20f20(int a0, int a1) {  }

struct C_00f20f30 {
    int sub_00f20f30(int);
};

// @baa 0x00f20f30
int C_00f20f30::sub_00f20f30(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_00f20f40 {
    int sub_00f20f40(int);
};

// @baa 0x00f20f40
int C_00f20f40::sub_00f20f40(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x00f20f50
void __stdcall sub_00f20f50(int a0, int a1) {  }

struct C_00f20f60 {
    int sub_00f20f60(int);
};

// @baa 0x00f20f60
int C_00f20f60::sub_00f20f60(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00f20f70 {
    int sub_00f20f70(int);
};

// @baa 0x00f20f70
int C_00f20f70::sub_00f20f70(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

struct C_00f20f80 {
    int sub_00f20f80(int);
};

// @baa 0x00f20f80
int C_00f20f80::sub_00f20f80(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct S_00f20f90 { int sub_00544d40(int); };

// @baa 0x00f20f90
int sub_00f20f90(S_00f20f90 *s, int a) { return s->sub_00544d40(a); }

struct C_00f20fa0 {
    int sub_00f20fa0(int);
};

// @baa 0x00f20fa0
int C_00f20fa0::sub_00f20fa0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_00f20fb0 {
    int sub_00f20fb0(int);
};

// @baa 0x00f20fb0
int C_00f20fb0::sub_00f20fb0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_00f20fc0 {
    int sub_00f20fc0(int);
};

// @baa 0x00f20fc0
int C_00f20fc0::sub_00f20fc0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_00f20fd0 {
    int sub_00f20fd0(int);
};

// @baa 0x00f20fd0
int C_00f20fd0::sub_00f20fd0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_00f20fe0 {
    int sub_00f20fe0(int);
};

// @baa 0x00f20fe0
int C_00f20fe0::sub_00f20fe0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_00f20ff0 {
    int sub_00f20ff0(int);
};

// @baa 0x00f20ff0
int C_00f20ff0::sub_00f20ff0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_00f21000 {
    int sub_00f21000(int);
};

// @baa 0x00f21000
int C_00f21000::sub_00f21000(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_00f21010 {
    int sub_00f21010(int);
};

// @baa 0x00f21010
int C_00f21010::sub_00f21010(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

int sub_005413d0(...);
// @baa 0x00f21050
void sub_00f21050(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_00f21060 {
    int sub_00f21060(int);
};

// @baa 0x00f21060
int C_00f21060::sub_00f21060(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + param_2 * 0x18;
}

struct C_00f210f0 {
    int sub_00f210f0(int);
};

// @baa 0x00f210f0
int C_00f210f0::sub_00f210f0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

// @baa 0x00f21130
void sub_00f21130(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_00f21140 {
    int sub_00f21140(int);
};

// @baa 0x00f21140
int C_00f21140::sub_00f21140(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + param_2 * 0x18;
}

// @baa 0x00f21180
void sub_00f21180(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_00f21190 {
    int sub_00f21190(int);
};

// @baa 0x00f21190
int C_00f21190::sub_00f21190(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + param_2 * 0x18;
}

// @baa 0x00f211d0
void sub_00f211d0(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_00f211e0 {
    int sub_00f211e0(int);
};

// @baa 0x00f211e0
int C_00f211e0::sub_00f211e0(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + param_2 * 0x18;
}

// @baa 0x00f21220
void sub_00f21220(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_00f21230 {
    int sub_00f21230(int);
};

// @baa 0x00f21230
int C_00f21230::sub_00f21230(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + param_2 * 0x18;
}

// @baa 0x00f21270
void sub_00f21270(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_00f21280 {
    int sub_00f21280(int);
};

// @baa 0x00f21280
int C_00f21280::sub_00f21280(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + param_2 * 0x18;
}

// @baa 0x00f212c0
void sub_00f212c0(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_00f212d0 {
    int sub_00f212d0(int);
};

// @baa 0x00f212d0
int C_00f212d0::sub_00f212d0(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + param_2 * 0x18;
}
