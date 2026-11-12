// GFx_19a0000.cpp (part 2 of 2): 30 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct A_019a1080 { virtual void sub_019a2f80(); char pad[12]; };

struct B_019a1080 { virtual void sub_019a2f80(); };

struct C_019a1080 : A_019a1080, B_019a1080 { virtual void sub_019a2f80(); C_019a1080(); };

C_019a1080::C_019a1080() {}

// @baa 0x019a1080
void C_019a1080::sub_019a2f80() {}

struct C {
    undefined4 * sub_019a1700(undefined4);
    int sub_019924d0(int);
};

extern undefined4 g_023fc3bc;
extern undefined4 g_023fc414;
// @baa 0x019a1700
undefined4 * C::sub_019a1700(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C *)(this))->sub_019924d0(0);
  param_1[0xc] = param_2;
  *param_1 = (undefined4)((&g_023fc414));
  param_1[4] = (undefined4)((&g_023fc3bc));
  return param_1;
}

struct A_019a17a0 { virtual void sub_019a2fa0(); char pad[12]; };

struct B_019a17a0 { virtual void sub_019a2fa0(); };

struct C_019a17a0 : A_019a17a0, B_019a17a0 { virtual void sub_019a2fa0(); C_019a17a0(); };

C_019a17a0::C_019a17a0() {}

// @baa 0x019a17a0
void C_019a17a0::sub_019a2fa0() {}

struct C_019aa470 {
    char pad[0x26];
    WORD field_26;
    int sub_019aa470();
};

// @baa 0x019aa470
int C_019aa470::sub_019aa470(void)
{
    return field_26;
}

struct C_019aa480 {
    void sub_019aa480();
    int sub_018e4260(int);
};

// @baa 0x019aa480
void C_019aa480::sub_019aa480(void)
{
    int param_1 = (int)this;
  ((C_019aa480 *)(((char *)this + 0x14)))->sub_018e4260(0);
  *(ushort *)(param_1 + 0x2a) = *(ushort *)(param_1 + 0x2a) & 0xfeff;
  return;
}

struct C_019aa5d0 {
    void sub_019aa5d0(undefined4, int);
    int sub_018e4260(int);
    int sub_018e4430(int, int);
};

int sub_0191f170(...);
// @baa 0x019aa5d0
void C_019aa5d0::sub_019aa5d0(undefined4 param_2, int param_3)
{
    int param_1 = (int)this;
  if (param_3 == -1) {
    param_3 = sub_0191f170(param_2);
  }
  ((C_019aa5d0 *)(((char *)this + 0x14)))->sub_018e4260(0);
  ((C_019aa5d0 *)(((char *)this + 0x14)))->sub_018e4430(param_2, param_3);
  *(ushort *)(param_1 + 0x2a) = *(ushort *)(param_1 + 0x2a) | 0x100;
  return;
}

struct C_019aa610 {
    void sub_019aa610(undefined4);
    int sub_018e4700(int);
};

// @baa 0x019aa610
void C_019aa610::sub_019aa610(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_019aa610 *)(((char *)this + 0x14)))->sub_018e4700(param_2);
  *(ushort *)(param_1 + 0x2a) = *(ushort *)(param_1 + 0x2a) | 0x100;
  return;
}

// @baa 0x019aa630
void UGFxDataStoreSubscriber::sub_019aa630(char param_2)
{
    int param_1 = (int)this;

  if (param_2 != '\0') {
    *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) | 4;
    *(ushort *)(param_1 + 0x2a) = *(ushort *)(param_1 + 0x2a) | 0x40;
    return;
  }
  *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) & 0xfb;
  *(ushort *)(param_1 + 0x2a) = *(ushort *)(param_1 + 0x2a) | 0x40;
  return;
}

// @baa 0x019aa650
void UGFxDataStoreSubscriber::sub_019aa650(char param_2)
{
    int param_1 = (int)this;

  if (param_2 != '\0') {
    *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) | 8;
    *(ushort *)(param_1 + 0x2a) = *(ushort *)(param_1 + 0x2a) | 0x80;
    return;
  }
  *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) & 0xf7;
  *(ushort *)(param_1 + 0x2a) = *(ushort *)(param_1 + 0x2a) | 0x80;
  return;
}

// @baa 0x019aa680
int UGFxDataStoreSubscriber::sub_019aa680(undefined4 * param_2)
{
    int param_1 = (int)this;

  if (*(undefined4 **)(param_1 + 0x10) != (undefined4 *)0x0) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = **(undefined4 **)(param_1 + 0x10);
    }
    return *(int *)(param_1 + 0x10) + 4;
  }
  return 0;
}

// @baa 0x019aa6b0
void UGFxDataStoreSubscriber::sub_019aa6b0(uint param_2, uint param_3)
{
    int param_1 = (int)this;

  uint *puVar1;
  
  puVar1 = *(uint **)(param_1 + 0x10);
  if ((puVar1 != (uint *)0x0) && (param_2 < *puVar1)) {
    puVar1[param_2 + 1] = param_3;
  }
  return;
}

struct C_019aab10 {
    int sub_019aab10(int);
    int sub_019aaac0(int);
};

// @baa 0x019aab10
int C_019aab10::sub_019aab10(int param_2)
{
    int param_1 = (int)this;
  *(undefined2 *)(param_1 + 0x14) = *(undefined2 *)(param_2 + 0x14);
  *(undefined2 *)(param_1 + 0x16) = *(undefined2 *)(param_2 + 0x16);
  *(undefined2 *)(param_1 + 0x18) = *(undefined2 *)(param_2 + 0x18);
  *(undefined2 *)(param_1 + 0x1a) = *(undefined2 *)(param_2 + 0x1a);
  *(undefined2 *)(param_1 + 0x1c) = *(undefined2 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  *(undefined2 *)(param_1 + 0x2a) = *(undefined2 *)(param_2 + 0x2a);
  ((C_019aab10 *)(this))->sub_019aaac0(*(undefined4 *)(param_2 + 0x10));
  return param_1;
}

struct C_019aba70 { int a; C_019aba70(int); };

// @baa 0x019aba70
C_019aba70::C_019aba70(int x) : a(x) {}

struct A_019ad300 { virtual void sub_019ae620(); char pad[12]; };

struct B_019ad300 { virtual void sub_019ae620(); };

struct C_019ad300 : A_019ad300, B_019ad300 { virtual void sub_019ae620(); C_019ad300(); };

C_019ad300::C_019ad300() {}

// @baa 0x019ad300
void C_019ad300::sub_019ae620() {}

struct A_019ae1d0 { virtual void sub_019ae600(); char pad[12]; };

struct B_019ae1d0 { virtual void sub_019ae600(); };

struct C_019ae1d0 : A_019ae1d0, B_019ae1d0 { virtual void sub_019ae600(); C_019ae1d0(); };

C_019ae1d0::C_019ae1d0() {}

// @baa 0x019ae1d0
void C_019ae1d0::sub_019ae600() {}

struct A_019ae680 { virtual void sub_019ae890(); char pad[12]; };

struct B_019ae680 { virtual void sub_019ae890(); };

struct C_019ae680 : A_019ae680, B_019ae680 { virtual void sub_019ae890(); C_019ae680(); };

C_019ae680::C_019ae680() {}

// @baa 0x019ae680
void C_019ae680::sub_019ae890() {}

void sub_01973ce0(void);
// @baa 0x019ae6c0
void sub_019ae6c0(void)
{
    sub_01973ce0();
}

struct A_019ae6d0 { virtual void sub_019ae6e0(); char pad[12]; };

struct B_019ae6d0 { virtual void sub_019ae6e0(); };

struct C_019ae6d0 : A_019ae6d0, B_019ae6d0 { virtual void sub_019ae6e0(); C_019ae6d0(); };

C_019ae6d0::C_019ae6d0() {}

// @baa 0x019ae6d0
void C_019ae6d0::sub_019ae6e0() {}

struct C_019aea40 { int a, b, c; C_019aea40(); };

// @baa 0x019aea40
C_019aea40::C_019aea40() : a(0), b(0), c(0) {}

struct S {
    INT Unk00;
    INT Unk04;
    S *sub_019aeb50();
};

// @baa 0x019aeb50
S *S::sub_019aeb50()
{
    Unk00 = 0;
    Unk04 = 0;
    return this;
}

struct A_019af470 { virtual void sub_019af480(); char pad[12]; };

struct B_019af470 { virtual void sub_019af480(); };

struct C_019af470 : A_019af470, B_019af470 { virtual void sub_019af480(); C_019af470(); };

C_019af470::C_019af470() {}

// @baa 0x019af470
void C_019af470::sub_019af480() {}

struct C_019af600 { void sub_019af4c0(int); void sub_019af600(); };

// @baa 0x019af600
void C_019af600::sub_019af600() { sub_019af4c0(0); }

struct S018d4a70 {
    int Data;
    int Count;
    int SizeFlags;
    void sub_019af4c0(int NewNum);
    void sub_019af610();
};

void __stdcall sub_018d7170(int A);
// @baa 0x019af610
void S018d4a70::sub_019af610()
{
    S018d4a70* Self = this;
    sub_019af4c0(0);
    if (Self->Data)
        sub_018d7170(Self->Data);
}

struct C_019af630 { int a, b, c; C_019af630(); };

// @baa 0x019af630
C_019af630::C_019af630() : a(0), b(0), c(0) {}

struct S018d4a70_019af640 {
    int Data;
    int Count;
    int SizeFlags;
    void sub_019af4c0(int NewNum);
    void sub_019af640();
};

// @baa 0x019af640
void S018d4a70_019af640::sub_019af640()
{
    S018d4a70_019af640* Self = this;
    sub_019af4c0(0);
    if (Self->Data)
        sub_018d7170(Self->Data);
}

struct A_019af6c0 { virtual void sub_019afd30(); char pad[12]; };

struct B_019af6c0 { virtual void sub_019afd30(); };

struct C_019af6c0 : A_019af6c0, B_019af6c0 { virtual void sub_019afd30(); C_019af6c0(); };

C_019af6c0::C_019af6c0() {}

// @baa 0x019af6c0
void C_019af6c0::sub_019afd30() {}

struct A_019af8d0 { virtual void sub_019afcd0(); char pad[12]; };

struct B_019af8d0 { virtual void sub_019afcd0(); };

struct C_019af8d0 : A_019af8d0, B_019af8d0 { virtual void sub_019afcd0(); C_019af8d0(); };

C_019af8d0::C_019af8d0() {}

// @baa 0x019af8d0
void C_019af8d0::sub_019afcd0() {}

struct A_019afdc0 { virtual void sub_019aff80(); char pad[12]; };

struct B_019afdc0 { virtual void sub_019aff80(); };

struct C_019afdc0 : A_019afdc0, B_019afdc0 { virtual void sub_019aff80(); C_019afdc0(); };

C_019afdc0::C_019afdc0() {}

// @baa 0x019afdc0
void C_019afdc0::sub_019aff80() {}

// GFx: tests bit 7 of a 16-bit flags field.
struct GFxFlagsOwner
{
    char           Header[0x2a];
    unsigned short Flags;

    bool sub_019aa4d0() const;
};

// @baa 0x019aa4d0
bool GFxFlagsOwner::sub_019aa4d0() const
{
    return (Flags & 0x80) != 0;
}

struct C_019af8b0 {
    int sub_019af8b0(int Arg);
    int sub_019729b0(int A, int B);
};

// @baa 0x019af8b0
int C_019af8b0::sub_019af8b0(int Arg)
{
    ((C_019af8b0*)Arg)->sub_019729b0((int)((char*)this + 0x3c), 0);
    return Arg;
}
