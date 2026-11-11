// AmbientOcclusionRendering.cpp (part 1 of 3): 29 functions
// Placed here by: neighbours 23, callers 4, file 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00a64910
IMPLEMENT_CLASS_AT(UAmbientOcclusionEffect, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\AmbientOcclusionRendering.cpp", 2046);

int sub_0053dfa0(...);
int sub_007249d0(void);
// @baa 0x00a656f0
undefined4 UObject::sub_00a656f0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00a65780
undefined4 UObject::sub_00a65780(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00a659b0
undefined4 UObject::sub_00a659b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00a65a40
undefined4 UObject::sub_00a65a40(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C {
    undefined4 sub_00a65be0(byte);
};

// @baa 0x00a65be0
undefined4 C::sub_00a65be0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00a65d10 {
    undefined4 sub_00a65d10(undefined4);
    int sub_0073f030(int);
};

int sub_00716170(...);
int sub_007161b0(...);
// @baa 0x00a65d10
undefined4 C_00a65d10::sub_00a65d10(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_00a65d10 *)(this))->sub_0073f030(param_2);
  sub_007161b0(param_2,param_1 + 0x60);
  sub_007161b0(param_2,param_1 + 0x66);
  sub_00716170(param_2,param_1 + 0x6c);
  sub_00716170(param_2,param_1 + 0x72);
  sub_00716170(param_2,param_1 + 0x80);
  sub_00716170(param_2,param_1 + 0x86);
  return uVar1;
}

struct A_00a65d80 { virtual void sub_00a65d90(); char pad[16]; };

struct B_00a65d80 { virtual void sub_00a65d90(); };

struct C_00a65d80 : A_00a65d80, B_00a65d80 { virtual void sub_00a65d90(); C_00a65d80(); };

C_00a65d80::C_00a65d80() {}

// @baa 0x00a65d80
void C_00a65d80::sub_00a65d90() {}

struct C_00a65db0 {
    undefined4 * sub_00a65db0(byte);
};

extern undefined * g_01ebbe1c;
// @baa 0x00a65db0
undefined4 * C_00a65db0::sub_00a65db0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebbe1c);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00a65dd0
struct C_view {
    int sub_00a68600(int, int, int);
    int sub_00a687d0(int, int, int);
    int sub_00a5a150(int, int, int, int, int, int);
};

int sub_006311e0(...);
int sub_00ac55b0(...);
extern undefined4 g_01fc6c10;
// @baa 0x00a745b0
void UMorphWeightSequence::sub_00a745b0(undefined4 param_2, int param_3, int param_4, undefined4 param_5, undefined4 param_6)
{
    int param_1 = (int)this;
  int iVar1;
  int iVar2;
  iVar2 = param_4;
  iVar1 = param_3;
  if ((*(int *)(param_1 + 0x14) == 2) || (*(int *)(param_1 + 0x14) == 4)) {
    param_3 = 0;
    iVar2 = sub_00ac55b0(iVar1,&param_3);
    if (iVar2 == 0) {
      sub_006311e0("bSuccess",
                   "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\AmbientOcclusionRendering.cpp"
                   ,0x580,&g_01fc6c10);
    }
    iVar2 = param_4;
    ((C_view *)((*(char **)((char *)this + 0x18))))->sub_00a68600(param_4, param_2, param_3 + 0x10);
  }
  else {
    ((C_view *)((*(char **)((char *)this + 0x1c))))->sub_00a687d0(param_4, param_2, param_4 + 0x30);
  }
  ((C_view *)(this))->sub_00a5a150(param_2, iVar1, iVar2, param_5, param_6, 0);
  return;
}

struct D { void sub_00651040(); };

extern D g_026b6c04;
// @baa 0x01e240d0
void sub_01e240d0() { g_026b6c04.sub_00651040(); }

extern D g_026b74b0;
// @baa 0x01e24100
void sub_01e24100() { g_026b74b0.sub_00651040(); }

extern D g_026b6da8;
// @baa 0x01e24110
void sub_01e24110() { g_026b6da8.sub_00651040(); }

extern D g_026b70b4;
// @baa 0x01e24120
void sub_01e24120() { g_026b70b4.sub_00651040(); }

extern D g_026b6bc0;
// @baa 0x01e24130
void sub_01e24130() { g_026b6bc0.sub_00651040(); }

extern D g_026b7180;
// @baa 0x01e24140
void sub_01e24140() { g_026b7180.sub_00651040(); }

extern D g_026b7068;
// @baa 0x01e24150
void sub_01e24150() { g_026b7068.sub_00651040(); }

extern D g_026b6b68;
// @baa 0x01e24160
void sub_01e24160() { g_026b6b68.sub_00651040(); }

struct D_01e24170 { void sub_00a5fa60(); };

extern D_01e24170 g_026b7618;
// @baa 0x01e24170
void sub_01e24170() { g_026b7618.sub_00a5fa60(); }

struct D_01e24180 { void sub_00a5f9e0(); };

extern D_01e24180 g_026b75fc;
// @baa 0x01e24180
void sub_01e24180() { g_026b75fc.sub_00a5f9e0(); }

struct D_01e24190 { void sub_00a5f960(); };

extern D_01e24190 g_026b75e0;
// @baa 0x01e24190
void sub_01e24190() { g_026b75e0.sub_00a5f960(); }

struct D_01e241a0 { void sub_00a5f8e0(); };

extern D_01e241a0 g_026b75c4;
// @baa 0x01e241a0
void sub_01e241a0() { g_026b75c4.sub_00a5f8e0(); }

struct D_01e241b0 { void sub_00a5f860(); };

extern D_01e241b0 g_026b75a8;
// @baa 0x01e241b0
void sub_01e241b0() { g_026b75a8.sub_00a5f860(); }

struct D_01e241c0 { void sub_00a5f7e0(); };

extern D_01e241c0 g_026b758c;
// @baa 0x01e241c0
void sub_01e241c0() { g_026b758c.sub_00a5f7e0(); }

struct D_01e241d0 { void sub_00a5f760(); };

extern D_01e241d0 g_026b7570;
// @baa 0x01e241d0
void sub_01e241d0() { g_026b7570.sub_00a5f760(); }

struct D_01e241e0 { void sub_00a5f6e0(); };

extern D_01e241e0 g_026b7554;
// @baa 0x01e241e0
void sub_01e241e0() { g_026b7554.sub_00a5f6e0(); }

struct D_01e241f0 { void sub_00a5f660(); };

extern D_01e241f0 g_026b7538;
// @baa 0x01e241f0
void sub_01e241f0() { g_026b7538.sub_00a5f660(); }

struct D_01e24200 { void sub_00a5f5e0(); };

extern D_01e24200 g_026b751c;
// @baa 0x01e24200
void sub_01e24200() { g_026b751c.sub_00a5f5e0(); }
