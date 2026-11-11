// UnPatchCommandlets.cpp: 14 functions
// Placed here by: neighbours 9, callers 3, file 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct Inner {
    int* data;
    Inner();
    ~Inner();
};

struct Outer_00557f90 : Inner {
    int num;
    int max;
    void sub_00556fa0(int* p);
    Outer_00557f90(int* p);
};

Inner::Inner()
{
    data = 0;
}

// @baa 0x00557f90
Outer_00557f90::Outer_00557f90(int* p)
{
    num = 0;
    max = 0;
    sub_00556fa0(p);
}

struct C {
    int * sub_010bf040(int);
};

int sub_006311e0(...);
extern undefined2 g_01e3f3dc;
// @baa 0x010bf040
int * C::sub_010bf040(int param_2)
{
    int * param_1 = (int *)this;

  *param_1 = param_2;
  if (param_2 == 0) {
    sub_006311e0("Struct",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnPatchCommandlets.cpp"
                 ,0x17b,&g_01e3f3dc);
  }
  return param_1;
}

struct C_010bfa60 {
    void sub_010bfa60();
};

// @baa 0x010bfa60
void C_010bfa60::sub_010bfa60(void)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xfffffff7 | 0x17;
  *(undefined4 *)(param_1 + 0x70) = 0;
  return;
}

struct C_010dd380 {
    undefined4 * sub_010dd380(undefined4 *);
    int sub_00547da0(int);
    int sub_0054e6c0(int);
    int sub_0054e7f0(int);
    int sub_00553180(int);
};

// @baa 0x010dd380
undefined4 * C_010dd380::sub_010dd380(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  ((C_010dd380 *)(((char *)this + 0x10)))->sub_00547da0((int)(param_2 + 4));
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  ((C_010dd380 *)(((char *)this + 0x3c)))->sub_0054e6c0((int)(param_2 + 0xf));
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = param_2[0x15];
  ((C_010dd380 *)(((char *)this + 0x58)))->sub_0054e7f0((int)(param_2 + 0x16));
  ((C_010dd380 *)(((char *)this + 0x64)))->sub_00553180((int)(param_2 + 0x19));
  return param_1;
}

struct C_010dd420 {
    undefined4 sub_010dd420(byte);
};

int sub_0053dfa0(...);
int sub_010ce700(void);
// @baa 0x010dd420
undefined4 C_010dd420::sub_010dd420(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_010ce700();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_view {
    int sub_00547da0(int);
    int sub_010dd380(int);
    int sub_005532a0(int);
    int sub_0054e920(int);
    int sub_00556fa0(int);
};

// @baa 0x010eea10
undefined4 URFMODSound::sub_010eea10(int param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view *)(this))->sub_00547da0(param_2);
  ((C_view *)(((char *)this + 0xc)))->sub_00547da0(param_2 + 0xc);
  ((C_view *)(((char *)this + 0x18)))->sub_010dd380(param_2 + 0x18);
  ((C_view *)(((char *)this + 0x88)))->sub_005532a0(param_2 + 0x88);
  ((C_view *)(((char *)this + 0x94)))->sub_0054e920(param_2 + 0x94);
  ((C_view *)(((char *)this + 0xa0)))->sub_00556fa0(param_2 + 0xa0);
  return param_1;
}

// @baa 0x010eea80
IMPLEMENT_CLASS_AT(UPatchScriptCommandlet, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnPatchCommandlets.cpp", 1890);

int sub_010fe9e0(void);
// @baa 0x010fea60
undefined4 UObject::sub_010fea60(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_010fe9e0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_view_010fea80 {
    int sub_010fe8a0(int);
};

extern undefined4 g_021a7980;
// @baa 0x010fea80
undefined4 * UObject::sub_010fea80(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view_010fea80 *)(this))->sub_010fe8a0(param_2);
  *param_1 = (undefined4)(&g_021a7980);
  return param_1;
}

void sub_01100dd0();
// @baa 0x01101440
void sub_01101440(void) { sub_01100dd0(); }

struct C_01101450 {
    int sub_01101450();
};

int sub_010d28c0(void);
// @baa 0x01101450
int C_01101450::sub_01101450(void)
{
    int param_1 = (int)this;

  sub_010d28c0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x01101470
void sub_01101470(void) { sub_01100dd0(); }

struct C_01101480 {
    int sub_01101480();
};

// @baa 0x01101480
int C_01101480::sub_01101480(void)
{
    int param_1 = (int)this;

  sub_010d28c0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x011014a0
void sub_011014a0(void) { sub_01100dd0(); }
