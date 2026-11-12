// UnUserInterface.cpp (part 2 of 15): 797 functions
// Placed here by: neighbours 530, class 245, file 13, callers 9.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C {
    int sub_00569570(int);
};

// @baa 0x00569570
int C::sub_00569570(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x00569580
int sub_00569580(int a0) { return *(int*)a0; }

// @baa 0x00569590
bool sub_00569590(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_005695a0 { int a, b; C_005695a0(const C_005695a0 &); };

// @baa 0x005695a0
C_005695a0::C_005695a0(const C_005695a0 &o) : a(o.a), b(o.b) {}

struct C_005695e0 { int sub_005695e0(void); };

// @baa 0x005695e0
int C_005695e0::sub_005695e0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct S {
    INT Unk0; // 0x00
    INT Unk4; // 0x04
    INT Unk8; // 0x08
    S *sub_005695f0(const S &Other);
};

// @baa 0x005695f0
S *S::sub_005695f0(const S &Other)
{
    Unk0 = Other.Unk0;
    Unk4 = Other.Unk4;
    Unk8 = -1;
    return this;
}

// @baa 0x00569610
int sub_00569610(int a0) { return *(int*)a0; }

// @baa 0x00569620
bool sub_00569620(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_00569630 { int a, b; C_00569630(const C_00569630 &); };

// @baa 0x00569630
C_00569630::C_00569630(const C_00569630 &o) : a(o.a), b(o.b) {}

struct C_00569670 { int sub_00569670(void); };

// @baa 0x00569670
int C_00569670::sub_00569670(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct S_00569680 {
    INT Unk0; // 0x00
    INT Unk4; // 0x04
    INT Unk8; // 0x08
    S_00569680 *sub_00569680(const S_00569680 &Other);
};

// @baa 0x00569680
S_00569680 *S_00569680::sub_00569680(const S_00569680 &Other)
{
    Unk0 = Other.Unk0;
    Unk4 = Other.Unk4;
    Unk8 = -1;
    return this;
}

struct C_005696a0 { int sub_005696a0(void); };

// @baa 0x005696a0
int C_005696a0::sub_005696a0(void) { return *(int*)((char*)this + 0); }

struct C_005696b0 { int sub_005696b0(void); };

// @baa 0x005696b0
int C_005696b0::sub_005696b0(void) { return *(int*)((char*)this + 0); }

struct C_005696c0 { int sub_005696c0(void); };

// @baa 0x005696c0
int C_005696c0::sub_005696c0(void) { return *(int*)((char*)this + 20); }

struct C_00569720 { int sub_00569720(void); };

// @baa 0x00569720
int C_00569720::sub_00569720(void) { return *(int*)((char*)this + 12); }

struct C_005697a0 { int sub_005697a0(void); };

// @baa 0x005697a0
int C_005697a0::sub_005697a0(void) { return *(int*)((char*)this + 12); }

struct C_005697b0 {
    void sub_005697b0();
};

int sub_0053df70(...);
// @baa 0x005697b0
void C_005697b0::sub_005697b0(void)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  iVar1 = param_1[1];
  if (param_1[2] != iVar1) {
    param_1[2] = iVar1;
    if ((*param_1 != 0) || (iVar1 != 0)) {
      iVar1 = sub_0053df70(*param_1,iVar1 << 4,8);
      *param_1 = iVar1;
    }
  }
  return;
}

// @baa 0x00569800
int sub_00569800(int a0) { return *(int*)a0; }

// @baa 0x00569810
undefined4 sub_00569810(int * param_1, int * param_2)
{
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return 1;
  }
  return 0;
}

struct C_00569850 {
    int sub_00569850(int);
};

// @baa 0x00569850
int C_00569850::sub_00569850(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00569860 {
    int sub_00569860(int);
};

// @baa 0x00569860
int C_00569860::sub_00569860(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00569870 {
    int sub_00569870(int);
};

// @baa 0x00569870
int C_00569870::sub_00569870(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00569880 {
    int sub_00569880(int);
};

// @baa 0x00569880
int C_00569880::sub_00569880(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00569890 { int sub_00569890(void); };

// @baa 0x00569890
int C_00569890::sub_00569890(void) { return *(int*)((char*)this + 4); }

struct C_00569910 {
    int sub_00569910(int);
};

// @baa 0x00569910
int C_00569910::sub_00569910(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00569920 { int sub_00569920(void); };

// @baa 0x00569920
int C_00569920::sub_00569920(void) { return *(int*)((char*)this + 20); }

struct C_00569930 { int sub_00569930(void); };

// @baa 0x00569930
int C_00569930::sub_00569930(void) { return *(int*)((char*)this + 0); }

struct C_00569940 { int sub_00569940(void); };

// @baa 0x00569940
int C_00569940::sub_00569940(void) { return *(int*)((char*)this + 20); }

struct C_00569950 {
    int sub_00569950(int);
};

// @baa 0x00569950
int C_00569950::sub_00569950(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00569960 {
    int sub_00569960(int);
};

// @baa 0x00569960
int C_00569960::sub_00569960(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00569970 { int sub_00569970(void); };

// @baa 0x00569970
int C_00569970::sub_00569970(void) { return *(int*)((char*)this + 20); }

struct C_00569980 {
    int sub_00569980(int);
};

// @baa 0x00569980
int C_00569980::sub_00569980(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00569990 { int sub_00569990(void); };

// @baa 0x00569990
int C_00569990::sub_00569990(void) { return *(int*)((char*)this + 20); }

struct C_005699a0 { int sub_005699a0(void); };

// @baa 0x005699a0
int C_005699a0::sub_005699a0(void) { return *(int*)((char*)this + 20); }

struct C_00569a40 {
    undefined4 sub_00569a40();
};

// @baa 0x00569a40
undefined4 C_00569a40::sub_00569a40(void)
{
    undefined4 param_1 = (undefined4)this;
  return param_1;
}

struct C_00569a70 {
    int sub_00569a70(int);
};

// @baa 0x00569a70
int C_00569a70::sub_00569a70(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + param_2 * 0x14;
}

struct C_00569a80 { C_00569a80* sub_00569a80(void); };

// @baa 0x00569a80
C_00569a80* C_00569a80::sub_00569a80(void) { return this; }

struct C_00569ab0 {
    int sub_00569ab0(int);
};

// @baa 0x00569ab0
int C_00569ab0::sub_00569ab0(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + param_2 * 0x14;
}

struct C_00569ac0 { C_00569ac0* sub_00569ac0(void); };

// @baa 0x00569ac0
C_00569ac0* C_00569ac0::sub_00569ac0(void) { return this; }

struct C_00569af0 {
    int sub_00569af0(int);
};

// @baa 0x00569af0
int C_00569af0::sub_00569af0(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x10 + *param_1;
}

struct C_00569b00 {
    int sub_00569b00(int);
};

// @baa 0x00569b00
int C_00569b00::sub_00569b00(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00569b10 {
    int sub_00569b10(int);
};

// @baa 0x00569b10
int C_00569b10::sub_00569b10(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00569b20 { int sub_00569b20(void); };

// @baa 0x00569b20
int C_00569b20::sub_00569b20(void) { return *(int*)((char*)this + 0); }

struct C_00569b30 {
    int sub_00569b30(int);
};

// @baa 0x00569b30
int C_00569b30::sub_00569b30(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00569b40 { int sub_00569b40(void); };

// @baa 0x00569b40
int C_00569b40::sub_00569b40(void) { return *(int*)((char*)this + 0); }

struct C_00569b50 {
    int sub_00569b50(int);
};

// @baa 0x00569b50
int C_00569b50::sub_00569b50(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00569b60 { int sub_00569b60(void); };

// @baa 0x00569b60
int C_00569b60::sub_00569b60(void) { return *(int*)((char*)this + 20); }

struct C_00569b70 { int a, b; C_00569b70(int, int); };

// @baa 0x00569b70
C_00569b70::C_00569b70(int x, int y) : a(x), b(y) {}

struct C_00569b90 { int sub_00569b90(void); };

// @baa 0x00569b90
int C_00569b90::sub_00569b90(void) { return *(int*)((char*)this + 20); }

struct C_00569ba0 { int sub_00569ba0(void); };

// @baa 0x00569ba0
int C_00569ba0::sub_00569ba0(void) { return *(int*)((char*)this + 20); }

struct C_00569bb0 { int sub_00569bb0(void); };

// @baa 0x00569bb0
int C_00569bb0::sub_00569bb0(void) { return *(int*)((char*)this + 20); }

struct C_00569bc0 { int sub_00569bc0(void); };

// @baa 0x00569bc0
int C_00569bc0::sub_00569bc0(void) { return *(int*)((char*)this + 20); }

struct C_00569bd0 { int sub_00569bd0(void); };

// @baa 0x00569bd0
int C_00569bd0::sub_00569bd0(void) { return *(int*)((char*)this + 20); }

struct C_00569be0 { int sub_00569be0(void); };

// @baa 0x00569be0
int C_00569be0::sub_00569be0(void) { return *(int*)((char*)this + 20); }

struct C_00569bf0 { int sub_00569bf0(void); };

// @baa 0x00569bf0
int C_00569bf0::sub_00569bf0(void) { return *(int*)((char*)this + 20); }

struct C_00569c00 { int sub_00569c00(void); };

// @baa 0x00569c00
int C_00569c00::sub_00569c00(void) { return *(int*)((char*)this + 20); }

struct C_00569c10 { int sub_00569c10(void); };

// @baa 0x00569c10
int C_00569c10::sub_00569c10(void) { return *(int*)((char*)this + 20); }

struct C_00569c20 { int sub_00569c20(void); };

// @baa 0x00569c20
int C_00569c20::sub_00569c20(void) { return *(int*)((char*)this + 20); }

struct C_00569c30 { int sub_00569c30(void); };

// @baa 0x00569c30
int C_00569c30::sub_00569c30(void) { return *(int*)((char*)this + 20); }

struct C_00569c40 {
    int sub_00569c40(int);
};

// @baa 0x00569c40
int C_00569c40::sub_00569c40(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x00569c50
int sub_00569c50(int a0) { return *(int*)a0; }

struct C_00569c60 { int sub_00569c60(void); };

// @baa 0x00569c60
int C_00569c60::sub_00569c60(void) { return *(int*)((char*)this + 0); }

struct C_00569c70 { int sub_00569c70(void); };

// @baa 0x00569c70
int C_00569c70::sub_00569c70(void) { return *(int*)((char*)this + 0); }

struct C_00569c80 { int a, b; C_00569c80(int, int); };

// @baa 0x00569c80
C_00569c80::C_00569c80(int x, int y) : a(x), b(y) {}

struct C_00569ca0 {
    undefined4 sub_00569ca0();
};

int sub_00569cef(...);
int sub_0059cb80(void);
int sub_005a1290(...);
extern undefined4 g_0268d088;
// @baa 0x00569ca0
undefined4 C_00569ca0::sub_00569ca0(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    if (g_0268d088 == 0) {
      g_0268d088 = sub_005a1290(L"Core");
      sub_0059cb80();
      if (g_0268d088 == 0) {
sub_00569cef:
        return *(undefined4 *)(param_1 + 0x2c);
      }
    }
    for (iVar1 = *(int *)(*(int *)(param_1 + 0x2c) + 0x28); iVar1 != 0;
        iVar1 = *(int *)(iVar1 + 0x30)) {
      if (iVar1 == g_0268d088) goto sub_00569cef;
    }
  }
  return 0;
}

#pragma pack(push, 1)
struct CRect { char _pad0[1]; };

#pragma pack(pop)
struct C_00569d80 {
    void sub_00569d80(int, int, int, int);
};

int sub_00630f20(...);
// @baa 0x00569d80
void C_00569d80::sub_00569d80(int param_1, int param_2, int param_3, int param_4)
{
    CRect * this_ = (CRect *)this;

  sub_00630f20(this_,param_1,param_2,param_3,param_4);
  return;
}

int sub_005c80f0(void);
int sub_005cb6d0(...);
int sub_005d88c0(...);
extern undefined4 g_026a1c70;
// @baa 0x00569da0
void sub_00569da0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
{
  if (g_026a1c70 == 0) {
    g_026a1c70 = sub_005cb6d0(L"Core");
    sub_005c80f0();
  }
  sub_005d88c0(g_026a1c70,param_1,param_2,param_3);
  return;
}

int sub_0059c990(void);
int sub_005adee0(...);
extern undefined4 g_0268d084;
// @baa 0x00569de0
void sub_00569de0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
{
  if (g_0268d084 == 0) {
    g_0268d084 = sub_005adee0(L"Core");
    sub_0059c990();
  }
  sub_005d88c0(g_0268d084,param_1,param_2,param_3);
  return;
}

struct C_0056ef70 { int sub_0056ef70(void); };

// @baa 0x0056ef70
int C_0056ef70::sub_0056ef70(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_0056ef80 {
    int sub_0056ef80();
};

// @baa 0x0056ef80
int C_0056ef80::sub_0056ef80(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct C_0056ef90 {
    int sub_0056ef90();
};

// @baa 0x0056ef90
int C_0056ef90::sub_0056ef90(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_0056efa0 {
    int sub_0056efa0();
};

// @baa 0x0056efa0
int C_0056efa0::sub_0056efa0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct C_0056efb0 {
    int sub_0056efb0(int);
};

// @baa 0x0056efb0
int C_0056efb0::sub_0056efb0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0056efc0 {
    int sub_0056efc0();
};

// @baa 0x0056efc0
int C_0056efc0::sub_0056efc0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0056efe0 {
    int sub_0056efe0(int);
};

// @baa 0x0056efe0
int C_0056efe0::sub_0056efe0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_0056eff0 {
    int sub_0056eff0();
};

// @baa 0x0056eff0
int C_0056eff0::sub_0056eff0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0056f010 {
    int sub_0056f010();
};

// @baa 0x0056f010
int C_0056f010::sub_0056f010(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_0056f020 {
    int sub_0056f020();
};

// @baa 0x0056f020
int C_0056f020::sub_0056f020(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_0056f030 {
    int sub_0056f030();
};

// @baa 0x0056f030
int C_0056f030::sub_0056f030(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_0056f040 {
    int sub_0056f040(int);
};

// @baa 0x0056f040
int C_0056f040::sub_0056f040(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0056f050 {
    int sub_0056f050(int);
};

// @baa 0x0056f050
int C_0056f050::sub_0056f050(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0056f060 {
    int sub_0056f060();
};

// @baa 0x0056f060
int C_0056f060::sub_0056f060(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

int sub_00569e20(...);
// @baa 0x0056f0b0
void sub_0056f0b0(undefined4 param_1)
{
  sub_00569e20(param_1,0);
  return;
}

struct C_0056f0c0 {
    int sub_0056f0c0(int);
};

// @baa 0x0056f0c0
int C_0056f0c0::sub_0056f0c0(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x10 + *param_1;
}

struct C_0056f0d0 {
    int sub_0056f0d0();
};

// @baa 0x0056f0d0
int C_0056f0d0::sub_0056f0d0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0056f0f0 {
    int sub_0056f0f0();
};

// @baa 0x0056f0f0
int C_0056f0f0::sub_0056f0f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_0056f100 {
    int sub_0056f100();
};

// @baa 0x0056f100
int C_0056f100::sub_0056f100(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0056f1b0 {
    int sub_0056f1b0(int);
};

// @baa 0x0056f1b0
int C_0056f1b0::sub_0056f1b0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_0056f1c0 { C_0056f1c0* sub_0056f1c0(void); };

// @baa 0x0056f1c0
C_0056f1c0* C_0056f1c0::sub_0056f1c0(void) { *(int*)((char*)this + 12) = -1; return this; }

struct C_0056f220 {
    void sub_0056f220(int *);
};

// @baa 0x0056f220
void C_0056f220::sub_0056f220(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = *(int *)(param_1 + 8);
  return;
}

struct C_0056f290 {
    int sub_0056f290(int);
};

// @baa 0x0056f290
int C_0056f290::sub_0056f290(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_0056f2a0 { C_0056f2a0* sub_0056f2a0(void); };

// @baa 0x0056f2a0
C_0056f2a0* C_0056f2a0::sub_0056f2a0(void) { *(int*)((char*)this + 12) = -1; return this; }

// @baa 0x00573840
int UGameUISceneClient::sub_00573840(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[2] * 0x10 + *(int *)*param_1;
}

struct C_00573890 {
    int sub_00573890();
};

// @baa 0x00573890
int C_00573890::sub_00573890(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_005738b0 {
    int sub_005738b0();
};

// @baa 0x005738b0
int C_005738b0::sub_005738b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 4;
}

// @baa 0x00573b10
int UObject::sub_00573b10(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x00573b90
int UObject::sub_00573b90(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x00573c20
int UObject::sub_00573c20(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x00573c30
int UObject::sub_00573c30(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x00573e10
int UObject::sub_00573e10(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x00573fe0
int UObject::sub_00573fe0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x2c + *param_1;
}

struct C_view {
    int sub_00573f30(int);
};

// @baa 0x00573ff0
int UObject::sub_00573ff0(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_view *)(this))->sub_00573f30(param_2);
  *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  return param_1;
}

struct C_00574090 {
    int sub_00574090(int);
};

// @baa 0x00574090
int C_00574090::sub_00574090(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00574110 {
    int sub_00574110();
};

// @baa 0x00574110
int C_00574110::sub_00574110(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

// @baa 0x00574120
void __stdcall sub_00574120(int a0, int a1) {  }

// @baa 0x005741b0
int UGameUISceneClient::sub_005741b0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x00574230
int UGameUISceneClient::sub_00574230(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x2c + *(int *)*param_1;
}

// @baa 0x005742c0
int UGameUISceneClient::sub_005742c0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x00574340
int UGameUISceneClient::sub_00574340(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

void sub_005738c0();
// @baa 0x005743b0
void sub_005743b0(void) { sub_005738c0(); }

struct C_view_005775b0 {
    int sub_00573a10(int, int);
};

// @baa 0x005775b0
int UGameUISceneClient::sub_005775b0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_005775b0 *)(this))->sub_00573a10((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x14;
  }
  return 0;
}

struct C_view_005775e0 {
    int sub_0054d4a0(int, int);
};

// @baa 0x005775e0
int UPackageMap::sub_005775e0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_005775e0 *)(this))->sub_0054d4a0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

struct C_view_00577630 {
    int sub_0054d590(int, int);
};

// @baa 0x00577630
int APrefabInstance::sub_00577630(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_00577630 *)(this))->sub_0054d590((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

struct C_view_00577680 {
    int sub_00573d90(int, int);
};

// @baa 0x00577680
int UGameUISceneClient::sub_00577680(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_00577680 *)(this))->sub_00573d90((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

struct C_005776b0 {
    int sub_005776b0(int);
};

// @baa 0x005776b0
int C_005776b0::sub_005776b0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x2c + *param_1;
}

struct C_005776c0 {
    int sub_005776c0();
};

// @baa 0x005776c0
int C_005776c0::sub_005776c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_005776d0 { void* Data; int Num; int Max; void sub_005776d0(); };

// @baa 0x005776d0
void C_005776d0::sub_005776d0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

// @baa 0x00577810
void UGameUISceneClient::sub_00577810(int param_2)
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

struct TBitArray {
    int* AllocatorData;
    int NumBits;
    int MaxBits;
    int InlineData[4];
};

struct FBitIterator {
    int WordIndex;
    int Mask;
    const int* WordData;
    int UnvisitedMask;
    int CurrentIndex;
    int BaseIndex;

    FBitIterator(const TBitArray& Array, int StartIndex)
        : WordIndex(StartIndex >> 5)
        , Mask(1 << (StartIndex & 31))
        , WordData(Array.InlineData)
        , UnvisitedMask(~0 << (StartIndex & 31))
        , CurrentIndex(StartIndex)
        , BaseIndex(StartIndex & ~31)
    {
    }
    void FindFirstSetBit();
    void Advance()
    {
        UnvisitedMask &= ~Mask;
        FindFirstSetBit();
    }
};

struct TConstSetBitIterator_00577970 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00577970(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00577970& operator++();
};

TConstSetBitIterator_00577970::TConstSetBitIterator_00577970(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00577970
TConstSetBitIterator_00577970& TConstSetBitIterator_00577970::operator++()
{
    It.Advance();
    return *this;
}

struct C_view_005779c0 {
    int sub_00574130(int, int);
};

// @baa 0x005779c0
int UGameUISceneClient::sub_005779c0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_005779c0 *)(this))->sub_00574130((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

// @baa 0x005779f0
int UGameUISceneClient::sub_005779f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x2c + *(int *)*param_1;
}

// @baa 0x00577a80
int UGameUISceneClient::sub_00577a80(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[2] * 0x10 + *(int *)*param_1;
}

// @baa 0x00577ad0
int UGameUISceneClient::sub_00577ad0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

int sub_0053dfa0(...);
int sub_00576270(void);
// @baa 0x00577be0
undefined4 UGameUISceneClient::sub_00577be0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00576270();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00577c80 {
    int sub_00577c80(int);
};

// @baa 0x00577c80
int C_00577c80::sub_00577c80(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x2c + *param_1;
}

struct TConstSetBitIterator_00577c90 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00577c90(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00577c90& operator++();
};

TConstSetBitIterator_00577c90::TConstSetBitIterator_00577c90(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00577c90
TConstSetBitIterator_00577c90& TConstSetBitIterator_00577c90::operator++()
{
    It.Advance();
    return *this;
}

// @baa 0x00578300
void UGameUISceneClient::sub_00578300(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 0x2c,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct TConstSetBitIterator_005786a0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005786a0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005786a0& operator++();
};

TConstSetBitIterator_005786a0::TConstSetBitIterator_005786a0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005786a0
TConstSetBitIterator_005786a0& TConstSetBitIterator_005786a0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005786f0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005786f0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005786f0& operator++();
};

TConstSetBitIterator_005786f0::TConstSetBitIterator_005786f0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005786f0
TConstSetBitIterator_005786f0& TConstSetBitIterator_005786f0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00578740 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00578740(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00578740& operator++();
};

TConstSetBitIterator_00578740::TConstSetBitIterator_00578740(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00578740
TConstSetBitIterator_00578740& TConstSetBitIterator_00578740::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00578790 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00578790(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00578790& operator++();
};

TConstSetBitIterator_00578790::TConstSetBitIterator_00578790(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00578790
TConstSetBitIterator_00578790& TConstSetBitIterator_00578790::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005787e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005787e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005787e0& operator++();
};

TConstSetBitIterator_005787e0::TConstSetBitIterator_005787e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005787e0
TConstSetBitIterator_005787e0& TConstSetBitIterator_005787e0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00578830 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00578830(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00578830& operator++();
};

TConstSetBitIterator_00578830::TConstSetBitIterator_00578830(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00578830
TConstSetBitIterator_00578830& TConstSetBitIterator_00578830::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00578880 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00578880(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00578880& operator++();
};

TConstSetBitIterator_00578880::TConstSetBitIterator_00578880(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00578880
TConstSetBitIterator_00578880& TConstSetBitIterator_00578880::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005788d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005788d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005788d0& operator++();
};

TConstSetBitIterator_005788d0::TConstSetBitIterator_005788d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005788d0
TConstSetBitIterator_005788d0& TConstSetBitIterator_005788d0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00578920 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00578920(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00578920& operator++();
};

TConstSetBitIterator_00578920::TConstSetBitIterator_00578920(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00578920
TConstSetBitIterator_00578920& TConstSetBitIterator_00578920::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00578970 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00578970(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00578970& operator++();
};

TConstSetBitIterator_00578970::TConstSetBitIterator_00578970(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00578970
TConstSetBitIterator_00578970& TConstSetBitIterator_00578970::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005789c0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005789c0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005789c0& operator++();
};

TConstSetBitIterator_005789c0::TConstSetBitIterator_005789c0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005789c0
TConstSetBitIterator_005789c0& TConstSetBitIterator_005789c0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00578a10 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00578a10(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00578a10& operator++();
};

TConstSetBitIterator_00578a10::TConstSetBitIterator_00578a10(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00578a10
TConstSetBitIterator_00578a10& TConstSetBitIterator_00578a10::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00578a60 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00578a60(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00578a60& operator++();
};

TConstSetBitIterator_00578a60::TConstSetBitIterator_00578a60(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00578a60
TConstSetBitIterator_00578a60& TConstSetBitIterator_00578a60::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00578ab0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00578ab0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00578ab0& operator++();
};

TConstSetBitIterator_00578ab0::TConstSetBitIterator_00578ab0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00578ab0
TConstSetBitIterator_00578ab0& TConstSetBitIterator_00578ab0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00578b00 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00578b00(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00578b00& operator++();
};

TConstSetBitIterator_00578b00::TConstSetBitIterator_00578b00(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00578b00
TConstSetBitIterator_00578b00& TConstSetBitIterator_00578b00::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00578b50 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00578b50(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00578b50& operator++();
};

TConstSetBitIterator_00578b50::TConstSetBitIterator_00578b50(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00578b50
TConstSetBitIterator_00578b50& TConstSetBitIterator_00578b50::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00578ba0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00578ba0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00578ba0& operator++();
};

TConstSetBitIterator_00578ba0::TConstSetBitIterator_00578ba0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00578ba0
TConstSetBitIterator_00578ba0& TConstSetBitIterator_00578ba0::operator++()
{
    It.Advance();
    return *this;
}

struct C_view_0057a2b0 {
    int sub_00573a10(int, int);
};

// @baa 0x0057a2b0
int UGameUISceneClient::sub_0057a2b0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_view_0057a2b0 *)(this))->sub_00573a10((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x14, iVar1 != 0)) {
    return iVar1 + 8;
  }
  return 0;
}

// @baa 0x0057a3f0
int UGameUISceneClient::sub_0057a3f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

// @baa 0x0057a400
int UGameUISceneClient::sub_0057a400(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + 4 + *(int *)*param_1;
}

struct TConstSetBitIterator_0057a5c0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0057a5c0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0057a5c0& operator++();
};

TConstSetBitIterator_0057a5c0::TConstSetBitIterator_0057a5c0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0057a5c0
TConstSetBitIterator_0057a5c0& TConstSetBitIterator_0057a5c0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0057a610 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0057a610(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0057a610& operator++();
};

TConstSetBitIterator_0057a610::TConstSetBitIterator_0057a610(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0057a610
TConstSetBitIterator_0057a610& TConstSetBitIterator_0057a610::operator++()
{
    It.Advance();
    return *this;
}

struct C_view_0057a630 {
    int sub_00577850(int, int);
};

// @baa 0x0057a630
void UGameUISceneClient::sub_0057a630(void)
{
    int param_1 = (int)this;
  ((C_view_0057a630 *)((*(char **)((char *)this + 0))))->sub_00577850(*(undefined4 *)(param_1 + 0x14), 1);
  return;
}

// @baa 0x0057a680
int UGameUISceneClient::sub_0057a680(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x2c + 0xc + *(int *)*param_1;
}

struct C_view_0057a690 {
    int sub_00577c00(int, int);
};

// @baa 0x0057a690
int UGameUISceneClient::sub_0057a690(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_0057a690 *)(this))->sub_00577c00((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x2c + *param_1;
  }
  return 0;
}

struct TConstSetBitIterator_0057a8c0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0057a8c0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0057a8c0& operator++();
};

TConstSetBitIterator_0057a8c0::TConstSetBitIterator_0057a8c0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0057a8c0
TConstSetBitIterator_0057a8c0& TConstSetBitIterator_0057a8c0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0057aa20 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0057aa20(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0057aa20& operator++();
};

TConstSetBitIterator_0057aa20::TConstSetBitIterator_0057aa20(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0057aa20
TConstSetBitIterator_0057aa20& TConstSetBitIterator_0057aa20::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0057aa40 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0057aa40(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0057aa40& operator++();
};

TConstSetBitIterator_0057aa40::TConstSetBitIterator_0057aa40(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0057aa40
TConstSetBitIterator_0057aa40& TConstSetBitIterator_0057aa40::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0057aab0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0057aab0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0057aab0& operator++();
};

TConstSetBitIterator_0057aab0::TConstSetBitIterator_0057aab0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0057aab0
TConstSetBitIterator_0057aab0& TConstSetBitIterator_0057aab0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0057ab00 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0057ab00(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0057ab00& operator++();
};

TConstSetBitIterator_0057ab00::TConstSetBitIterator_0057ab00(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0057ab00
TConstSetBitIterator_0057ab00& TConstSetBitIterator_0057ab00::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0057b550 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0057b550(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0057b550& operator++();
};

TConstSetBitIterator_0057b550::TConstSetBitIterator_0057b550(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0057b550
TConstSetBitIterator_0057b550& TConstSetBitIterator_0057b550::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0057b570 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0057b570(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0057b570& operator++();
};

TConstSetBitIterator_0057b570::TConstSetBitIterator_0057b570(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0057b570
TConstSetBitIterator_0057b570& TConstSetBitIterator_0057b570::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0057b6f0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0057b6f0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0057b6f0& operator++();
};

TConstSetBitIterator_0057b6f0::TConstSetBitIterator_0057b6f0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0057b6f0
TConstSetBitIterator_0057b6f0& TConstSetBitIterator_0057b6f0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0057b870 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0057b870(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0057b870& operator++();
};

TConstSetBitIterator_0057b870::TConstSetBitIterator_0057b870(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0057b870
TConstSetBitIterator_0057b870& TConstSetBitIterator_0057b870::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0057b890 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0057b890(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0057b890& operator++();
};

TConstSetBitIterator_0057b890::TConstSetBitIterator_0057b890(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0057b890
TConstSetBitIterator_0057b890& TConstSetBitIterator_0057b890::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0057ba80 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0057ba80(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0057ba80& operator++();
};

TConstSetBitIterator_0057ba80::TConstSetBitIterator_0057ba80(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0057ba80
TConstSetBitIterator_0057ba80& TConstSetBitIterator_0057ba80::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0057bad0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0057bad0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0057bad0& operator++();
};

TConstSetBitIterator_0057bad0::TConstSetBitIterator_0057bad0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0057bad0
TConstSetBitIterator_0057bad0& TConstSetBitIterator_0057bad0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0057bb20 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0057bb20(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0057bb20& operator++();
};

TConstSetBitIterator_0057bb20::TConstSetBitIterator_0057bb20(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0057bb20
TConstSetBitIterator_0057bb20& TConstSetBitIterator_0057bb20::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0057bb70 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0057bb70(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0057bb70& operator++();
};

TConstSetBitIterator_0057bb70::TConstSetBitIterator_0057bb70(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0057bb70
TConstSetBitIterator_0057bb70& TConstSetBitIterator_0057bb70::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0057bbc0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0057bbc0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0057bbc0& operator++();
};

TConstSetBitIterator_0057bbc0::TConstSetBitIterator_0057bbc0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0057bbc0
TConstSetBitIterator_0057bbc0& TConstSetBitIterator_0057bbc0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0057bc10 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0057bc10(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0057bc10& operator++();
};

TConstSetBitIterator_0057bc10::TConstSetBitIterator_0057bc10(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0057bc10
TConstSetBitIterator_0057bc10& TConstSetBitIterator_0057bc10::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0057bc30 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0057bc30(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0057bc30& operator++();
};

TConstSetBitIterator_0057bc30::TConstSetBitIterator_0057bc30(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0057bc30
TConstSetBitIterator_0057bc30& TConstSetBitIterator_0057bc30::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0057bc80 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0057bc80(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0057bc80& operator++();
};

TConstSetBitIterator_0057bc80::TConstSetBitIterator_0057bc80(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0057bc80
TConstSetBitIterator_0057bc80& TConstSetBitIterator_0057bc80::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0057bca0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0057bca0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0057bca0& operator++();
};

TConstSetBitIterator_0057bca0::TConstSetBitIterator_0057bca0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0057bca0
TConstSetBitIterator_0057bca0& TConstSetBitIterator_0057bca0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0057bcf0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0057bcf0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0057bcf0& operator++();
};

TConstSetBitIterator_0057bcf0::TConstSetBitIterator_0057bcf0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0057bcf0
TConstSetBitIterator_0057bcf0& TConstSetBitIterator_0057bcf0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0057bd10 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0057bd10(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0057bd10& operator++();
};

TConstSetBitIterator_0057bd10::TConstSetBitIterator_0057bd10(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0057bd10
TConstSetBitIterator_0057bd10& TConstSetBitIterator_0057bd10::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0057bd60 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0057bd60(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0057bd60& operator++();
};

TConstSetBitIterator_0057bd60::TConstSetBitIterator_0057bd60(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0057bd60
TConstSetBitIterator_0057bd60& TConstSetBitIterator_0057bd60::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0057bf60 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0057bf60(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0057bf60& operator++();
};

TConstSetBitIterator_0057bf60::TConstSetBitIterator_0057bf60(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0057bf60
TConstSetBitIterator_0057bf60& TConstSetBitIterator_0057bf60::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0057c010 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0057c010(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0057c010& operator++();
};

TConstSetBitIterator_0057c010::TConstSetBitIterator_0057c010(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0057c010
TConstSetBitIterator_0057c010& TConstSetBitIterator_0057c010::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0057c060 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0057c060(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0057c060& operator++();
};

TConstSetBitIterator_0057c060::TConstSetBitIterator_0057c060(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0057c060
TConstSetBitIterator_0057c060& TConstSetBitIterator_0057c060::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0057c080 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0057c080(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0057c080& operator++();
};

TConstSetBitIterator_0057c080::TConstSetBitIterator_0057c080(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0057c080
TConstSetBitIterator_0057c080& TConstSetBitIterator_0057c080::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0057c0d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0057c0d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0057c0d0& operator++();
};

TConstSetBitIterator_0057c0d0::TConstSetBitIterator_0057c0d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0057c0d0
TConstSetBitIterator_0057c0d0& TConstSetBitIterator_0057c0d0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0057c0f0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0057c0f0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0057c0f0& operator++();
};

TConstSetBitIterator_0057c0f0::TConstSetBitIterator_0057c0f0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0057c0f0
TConstSetBitIterator_0057c0f0& TConstSetBitIterator_0057c0f0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0057c140 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0057c140(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0057c140& operator++();
};

TConstSetBitIterator_0057c140::TConstSetBitIterator_0057c140(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0057c140
TConstSetBitIterator_0057c140& TConstSetBitIterator_0057c140::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0057c160 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0057c160(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0057c160& operator++();
};

TConstSetBitIterator_0057c160::TConstSetBitIterator_0057c160(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0057c160
TConstSetBitIterator_0057c160& TConstSetBitIterator_0057c160::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0057c1b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0057c1b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0057c1b0& operator++();
};

TConstSetBitIterator_0057c1b0::TConstSetBitIterator_0057c1b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0057c1b0
TConstSetBitIterator_0057c1b0& TConstSetBitIterator_0057c1b0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0057c1d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0057c1d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0057c1d0& operator++();
};

TConstSetBitIterator_0057c1d0::TConstSetBitIterator_0057c1d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0057c1d0
TConstSetBitIterator_0057c1d0& TConstSetBitIterator_0057c1d0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0057c220 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0057c220(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0057c220& operator++();
};

TConstSetBitIterator_0057c220::TConstSetBitIterator_0057c220(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0057c220
TConstSetBitIterator_0057c220& TConstSetBitIterator_0057c220::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0057c240 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0057c240(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0057c240& operator++();
};

TConstSetBitIterator_0057c240::TConstSetBitIterator_0057c240(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0057c240
TConstSetBitIterator_0057c240& TConstSetBitIterator_0057c240::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0057c290 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0057c290(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0057c290& operator++();
};

TConstSetBitIterator_0057c290::TConstSetBitIterator_0057c290(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0057c290
TConstSetBitIterator_0057c290& TConstSetBitIterator_0057c290::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0057c2b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0057c2b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0057c2b0& operator++();
};

TConstSetBitIterator_0057c2b0::TConstSetBitIterator_0057c2b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0057c2b0
TConstSetBitIterator_0057c2b0& TConstSetBitIterator_0057c2b0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0057c300 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0057c300(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0057c300& operator++();
};

TConstSetBitIterator_0057c300::TConstSetBitIterator_0057c300(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0057c300
TConstSetBitIterator_0057c300& TConstSetBitIterator_0057c300::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0057c320 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0057c320(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0057c320& operator++();
};

TConstSetBitIterator_0057c320::TConstSetBitIterator_0057c320(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0057c320
TConstSetBitIterator_0057c320& TConstSetBitIterator_0057c320::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0057c370 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0057c370(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0057c370& operator++();
};

TConstSetBitIterator_0057c370::TConstSetBitIterator_0057c370(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0057c370
TConstSetBitIterator_0057c370& TConstSetBitIterator_0057c370::operator++()
{
    It.Advance();
    return *this;
}

struct C_view_0057c400 {
    int sub_00575910(int, int);
};

// @baa 0x0057c400
int UState::sub_0057c400(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_view_0057c400 *)(this))->sub_00575910((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x1c, iVar1 != 0)) {
    return iVar1 + 0x10;
  }
  return 0;
}

struct C_view_0057c440 {
    int sub_00578e60(int);
};

// @baa 0x0057c440
void UState::sub_0057c440(void)
{
    int param_1 = (int)this;
  ((C_view_0057c440 *)((*(char **)((char *)this + 0x10))))->sub_00578e60(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_view_0057c460 {
    int sub_00578ef0(int);
};

// @baa 0x0057c460
void UState::sub_0057c460(void)
{
    int param_1 = (int)this;
  ((C_view_0057c460 *)((*(char **)((char *)this + 0x10))))->sub_00578ef0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct TConstSetBitIterator_0057c670 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0057c670(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0057c670& operator++();
};

TConstSetBitIterator_0057c670::TConstSetBitIterator_0057c670(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0057c670
TConstSetBitIterator_0057c670& TConstSetBitIterator_0057c670::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0057c690 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0057c690(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0057c690& operator++();
};

TConstSetBitIterator_0057c690::TConstSetBitIterator_0057c690(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0057c690
TConstSetBitIterator_0057c690& TConstSetBitIterator_0057c690::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0057c9b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0057c9b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0057c9b0& operator++();
};

TConstSetBitIterator_0057c9b0::TConstSetBitIterator_0057c9b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0057c9b0
TConstSetBitIterator_0057c9b0& TConstSetBitIterator_0057c9b0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0057ca00 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0057ca00(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0057ca00& operator++();
};

TConstSetBitIterator_0057ca00::TConstSetBitIterator_0057ca00(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0057ca00
TConstSetBitIterator_0057ca00& TConstSetBitIterator_0057ca00::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0057ca50 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0057ca50(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0057ca50& operator++();
};

TConstSetBitIterator_0057ca50::TConstSetBitIterator_0057ca50(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0057ca50
TConstSetBitIterator_0057ca50& TConstSetBitIterator_0057ca50::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0057caa0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0057caa0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0057caa0& operator++();
};

TConstSetBitIterator_0057caa0::TConstSetBitIterator_0057caa0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0057caa0
TConstSetBitIterator_0057caa0& TConstSetBitIterator_0057caa0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0057cfb0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0057cfb0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0057cfb0& operator++();
};

TConstSetBitIterator_0057cfb0::TConstSetBitIterator_0057cfb0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0057cfb0
TConstSetBitIterator_0057cfb0& TConstSetBitIterator_0057cfb0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0057d0b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0057d0b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0057d0b0& operator++();
};

TConstSetBitIterator_0057d0b0::TConstSetBitIterator_0057d0b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0057d0b0
TConstSetBitIterator_0057d0b0& TConstSetBitIterator_0057d0b0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0057d0d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0057d0d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0057d0d0& operator++();
};

TConstSetBitIterator_0057d0d0::TConstSetBitIterator_0057d0d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0057d0d0
TConstSetBitIterator_0057d0d0& TConstSetBitIterator_0057d0d0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0057d180 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0057d180(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0057d180& operator++();
};

TConstSetBitIterator_0057d180::TConstSetBitIterator_0057d180(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0057d180
TConstSetBitIterator_0057d180& TConstSetBitIterator_0057d180::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0057d1a0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0057d1a0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0057d1a0& operator++();
};

TConstSetBitIterator_0057d1a0::TConstSetBitIterator_0057d1a0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0057d1a0
TConstSetBitIterator_0057d1a0& TConstSetBitIterator_0057d1a0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0057d1c0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0057d1c0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0057d1c0& operator++();
};

TConstSetBitIterator_0057d1c0::TConstSetBitIterator_0057d1c0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0057d1c0
TConstSetBitIterator_0057d1c0& TConstSetBitIterator_0057d1c0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0057d1e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0057d1e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0057d1e0& operator++();
};

TConstSetBitIterator_0057d1e0::TConstSetBitIterator_0057d1e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0057d1e0
TConstSetBitIterator_0057d1e0& TConstSetBitIterator_0057d1e0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0057d200 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0057d200(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0057d200& operator++();
};

TConstSetBitIterator_0057d200::TConstSetBitIterator_0057d200(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0057d200
TConstSetBitIterator_0057d200& TConstSetBitIterator_0057d200::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0057d2a0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0057d2a0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0057d2a0& operator++();
};

TConstSetBitIterator_0057d2a0::TConstSetBitIterator_0057d2a0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0057d2a0
TConstSetBitIterator_0057d2a0& TConstSetBitIterator_0057d2a0::operator++()
{
    It.Advance();
    return *this;
}

struct C_0057d2c0 {
    void sub_0057d2c0();
    int sub_0057ab20(int);
};

// @baa 0x0057d2c0
void C_0057d2c0::sub_0057d2c0(void)
{
    int param_1 = (int)this;
  ((C_0057d2c0 *)((*(char **)((char *)this + 0x10))))->sub_0057ab20(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_0057d2e0 {
    void sub_0057d2e0();
    int sub_0057ac90(int);
};

// @baa 0x0057d2e0
void C_0057d2e0::sub_0057d2e0(void)
{
    int param_1 = (int)this;
  ((C_0057d2e0 *)((*(char **)((char *)this + 0x10))))->sub_0057ac90(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_0057d300 {
    void sub_0057d300();
    int sub_0057aed0(int);
};

// @baa 0x0057d300
void C_0057d300::sub_0057d300(void)
{
    int param_1 = (int)this;
  ((C_0057d300 *)((*(char **)((char *)this + 0x10))))->sub_0057aed0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct TConstSetBitIterator_0057d320 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0057d320(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0057d320& operator++();
};

TConstSetBitIterator_0057d320::TConstSetBitIterator_0057d320(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0057d320
TConstSetBitIterator_0057d320& TConstSetBitIterator_0057d320::operator++()
{
    It.Advance();
    return *this;
}

struct C_0057d340 {
    void sub_0057d340();
    int sub_0057b040(int);
};

// @baa 0x0057d340
void C_0057d340::sub_0057d340(void)
{
    int param_1 = (int)this;
  ((C_0057d340 *)((*(char **)((char *)this + 0x10))))->sub_0057b040(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_0057d360 {
    void sub_0057d360();
    int sub_0057b290(int);
};

// @baa 0x0057d360
void C_0057d360::sub_0057d360(void)
{
    int param_1 = (int)this;
  ((C_0057d360 *)((*(char **)((char *)this + 0x10))))->sub_0057b290(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_0057d380 {
    void sub_0057d380();
    int sub_0057b3f0(int);
};

// @baa 0x0057d380
void C_0057d380::sub_0057d380(void)
{
    int param_1 = (int)this;
  ((C_0057d380 *)((*(char **)((char *)this + 0x10))))->sub_0057b3f0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_0057d3a0 {
    void sub_0057d3a0();
    int sub_0057b590(int);
};

// @baa 0x0057d3a0
void C_0057d3a0::sub_0057d3a0(void)
{
    int param_1 = (int)this;
  ((C_0057d3a0 *)((*(char **)((char *)this + 0x10))))->sub_0057b590(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_0057d3c0 {
    void sub_0057d3c0();
    int sub_0057b710(int);
};

// @baa 0x0057d3c0
void C_0057d3c0::sub_0057d3c0(void)
{
    int param_1 = (int)this;
  ((C_0057d3c0 *)((*(char **)((char *)this + 0x10))))->sub_0057b710(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct TConstSetBitIterator_0057d710 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0057d710(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0057d710& operator++();
};

TConstSetBitIterator_0057d710::TConstSetBitIterator_0057d710(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0057d710
TConstSetBitIterator_0057d710& TConstSetBitIterator_0057d710::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0057e4d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0057e4d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0057e4d0& operator++();
};

TConstSetBitIterator_0057e4d0::TConstSetBitIterator_0057e4d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0057e4d0
TConstSetBitIterator_0057e4d0& TConstSetBitIterator_0057e4d0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0057e520 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0057e520(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0057e520& operator++();
};

TConstSetBitIterator_0057e520::TConstSetBitIterator_0057e520(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0057e520
TConstSetBitIterator_0057e520& TConstSetBitIterator_0057e520::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0057e570 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0057e570(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0057e570& operator++();
};

TConstSetBitIterator_0057e570::TConstSetBitIterator_0057e570(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0057e570
TConstSetBitIterator_0057e570& TConstSetBitIterator_0057e570::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0057e5c0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0057e5c0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0057e5c0& operator++();
};

TConstSetBitIterator_0057e5c0::TConstSetBitIterator_0057e5c0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0057e5c0
TConstSetBitIterator_0057e5c0& TConstSetBitIterator_0057e5c0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0057e610 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0057e610(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0057e610& operator++();
};

TConstSetBitIterator_0057e610::TConstSetBitIterator_0057e610(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0057e610
TConstSetBitIterator_0057e610& TConstSetBitIterator_0057e610::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0057e800 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0057e800(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0057e800& operator++();
};

TConstSetBitIterator_0057e800::TConstSetBitIterator_0057e800(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0057e800
TConstSetBitIterator_0057e800& TConstSetBitIterator_0057e800::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0057e850 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0057e850(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0057e850& operator++();
};

TConstSetBitIterator_0057e850::TConstSetBitIterator_0057e850(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0057e850
TConstSetBitIterator_0057e850& TConstSetBitIterator_0057e850::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0057ea40 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0057ea40(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0057ea40& operator++();
};

TConstSetBitIterator_0057ea40::TConstSetBitIterator_0057ea40(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0057ea40
TConstSetBitIterator_0057ea40& TConstSetBitIterator_0057ea40::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0057ea90 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0057ea90(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0057ea90& operator++();
};

TConstSetBitIterator_0057ea90::TConstSetBitIterator_0057ea90(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0057ea90
TConstSetBitIterator_0057ea90& TConstSetBitIterator_0057ea90::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0057eae0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0057eae0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0057eae0& operator++();
};

TConstSetBitIterator_0057eae0::TConstSetBitIterator_0057eae0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0057eae0
TConstSetBitIterator_0057eae0& TConstSetBitIterator_0057eae0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0057ef60 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0057ef60(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0057ef60& operator++();
};

TConstSetBitIterator_0057ef60::TConstSetBitIterator_0057ef60(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0057ef60
TConstSetBitIterator_0057ef60& TConstSetBitIterator_0057ef60::operator++()
{
    It.Advance();
    return *this;
}

void sub_0057d0f0();
// @baa 0x0057f2b0
void sub_0057f2b0(void) { sub_0057d0f0(); }

struct TConstSetBitIterator_0057f2c0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0057f2c0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0057f2c0& operator++();
};

TConstSetBitIterator_0057f2c0::TConstSetBitIterator_0057f2c0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0057f2c0
TConstSetBitIterator_0057f2c0& TConstSetBitIterator_0057f2c0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0057f390 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0057f390(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0057f390& operator++();
};

TConstSetBitIterator_0057f390::TConstSetBitIterator_0057f390(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0057f390
TConstSetBitIterator_0057f390& TConstSetBitIterator_0057f390::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0057f3b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0057f3b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0057f3b0& operator++();
};

TConstSetBitIterator_0057f3b0::TConstSetBitIterator_0057f3b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0057f3b0
TConstSetBitIterator_0057f3b0& TConstSetBitIterator_0057f3b0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0057f3d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0057f3d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0057f3d0& operator++();
};

TConstSetBitIterator_0057f3d0::TConstSetBitIterator_0057f3d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0057f3d0
TConstSetBitIterator_0057f3d0& TConstSetBitIterator_0057f3d0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0057f3f0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0057f3f0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0057f3f0& operator++();
};

TConstSetBitIterator_0057f3f0::TConstSetBitIterator_0057f3f0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0057f3f0
TConstSetBitIterator_0057f3f0& TConstSetBitIterator_0057f3f0::operator++()
{
    It.Advance();
    return *this;
}

void sub_0057d220();
// @baa 0x0057f410
void sub_0057f410(void) { sub_0057d220(); }

struct TConstSetBitIterator_0057f420 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0057f420(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0057f420& operator++();
};

TConstSetBitIterator_0057f420::TConstSetBitIterator_0057f420(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0057f420
TConstSetBitIterator_0057f420& TConstSetBitIterator_0057f420::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0057f860 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0057f860(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0057f860& operator++();
};

TConstSetBitIterator_0057f860::TConstSetBitIterator_0057f860(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0057f860
TConstSetBitIterator_0057f860& TConstSetBitIterator_0057f860::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005802a0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005802a0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005802a0& operator++();
};

TConstSetBitIterator_005802a0::TConstSetBitIterator_005802a0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005802a0
TConstSetBitIterator_005802a0& TConstSetBitIterator_005802a0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005803b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005803b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005803b0& operator++();
};

TConstSetBitIterator_005803b0::TConstSetBitIterator_005803b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005803b0
TConstSetBitIterator_005803b0& TConstSetBitIterator_005803b0::operator++()
{
    It.Advance();
    return *this;
}

int sub_0057bde0(void);
// @baa 0x00580c60
int UGameUISceneClient::sub_00580c60(void)
{
    int param_1 = (int)this;

  sub_0057bde0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_0057be40(void);
// @baa 0x00580c80
int UGameUISceneClient::sub_00580c80(void)
{
    int param_1 = (int)this;

  sub_0057be40();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_0057bea0(void);
// @baa 0x00580ca0
int UGameUISceneClient::sub_00580ca0(void)
{
    int param_1 = (int)this;

  sub_0057bea0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_0057bf00(void);
// @baa 0x00580cc0
int UState::sub_00580cc0(void)
{
    int param_1 = (int)this;

  sub_0057bf00();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_0057bfb0(void);
// @baa 0x00580ce0
int UState::sub_00580ce0(void)
{
    int param_1 = (int)this;

  sub_0057bfb0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_view_005819f0 {
    int sub_0057fa80(int, int);
};

// @baa 0x005819f0
void UGameUISceneClient::sub_005819f0(void)
{
    int param_1 = (int)this;
  ((C_view_005819f0 *)(this))->sub_0057fa80(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_view_00581a70 {
    int sub_0057fc50(int, int);
};

// @baa 0x00581a70
void UGameUISceneClient::sub_00581a70(void)
{
    int param_1 = (int)this;
  ((C_view_00581a70 *)(this))->sub_0057fc50(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_view_00581c10 {
    int sub_0055a690(int, int);
};

// @baa 0x00581c10
void UPackageMap::sub_00581c10(void)
{
    int param_1 = (int)this;
  ((C_view_00581c10 *)(this))->sub_0055a690(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_view_00581d00 {
    int sub_0057ffa0(int, int);
};

// @baa 0x00581d00
void UGameUISceneClient::sub_00581d00(void)
{
    int param_1 = (int)this;
  ((C_view_00581d00 *)(this))->sub_0057ffa0(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_view_00581e40 {
    int sub_00580060(int, int);
};

// @baa 0x00581e40
void UGameUISceneClient::sub_00581e40(void)
{
    int param_1 = (int)this;
  ((C_view_00581e40 *)(this))->sub_00580060(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_view_00581f70 {
    int sub_00580120(int, int);
};

// @baa 0x00581f70
void UTexture2D::sub_00581f70(void)
{
    int param_1 = (int)this;
  ((C_view_00581f70 *)(this))->sub_00580120(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct TConstSetBitIterator_00582140 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00582140(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00582140& operator++();
};

TConstSetBitIterator_00582140::TConstSetBitIterator_00582140(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00582140
TConstSetBitIterator_00582140& TConstSetBitIterator_00582140::operator++()
{
    It.Advance();
    return *this;
}

struct C_view_00582190 {
    int sub_005802f0(int, int);
};

// @baa 0x00582190
undefined4 UGameUISceneClient::sub_00582190(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_00582190 *)(this))->sub_005802f0(param_2, param_3);
  return param_1;
}

struct C_view_005821b0 {
    int sub_00580350(int, int);
};

// @baa 0x005821b0
undefined4 UGameUISceneClient::sub_005821b0(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_005821b0 *)(this))->sub_00580350(param_2, param_3);
  return param_1;
}

struct TConstSetBitIterator_005821d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005821d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005821d0& operator++();
};

TConstSetBitIterator_005821d0::TConstSetBitIterator_005821d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005821d0
TConstSetBitIterator_005821d0& TConstSetBitIterator_005821d0::operator++()
{
    It.Advance();
    return *this;
}

struct C_view_00582220 {
    int sub_00580400(int, int);
};

// @baa 0x00582220
undefined4 UGameUISceneClient::sub_00582220(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_00582220 *)(this))->sub_00580400(param_2, param_3);
  return param_1;
}

struct C_view_00582300 {
    int sub_00580520(int, int);
};

// @baa 0x00582300
undefined4 UGameUISceneClient::sub_00582300(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_00582300 *)(this))->sub_00580520(param_2, param_3);
  return param_1;
}

struct C_view_00582320 {
    int sub_00580580(int, int);
};

// @baa 0x00582320
undefined4 UGameUISceneClient::sub_00582320(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_00582320 *)(this))->sub_00580580(param_2, param_3);
  return param_1;
}

struct C_view_00582340 {
    int sub_005805e0(int, int);
};

// @baa 0x00582340
void UGameUISceneClient::sub_00582340(void)
{
    int param_1 = (int)this;
  ((C_view_00582340 *)(this))->sub_005805e0(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_view_00582410 {
    int sub_005806a0(int, int);
};

// @baa 0x00582410
undefined4 UGameUISceneClient::sub_00582410(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_00582410 *)(this))->sub_005806a0(param_2, param_3);
  return param_1;
}

struct C_view_00582430 {
    int sub_00580700(int, int);
};

// @baa 0x00582430
undefined4 UGameUISceneClient::sub_00582430(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_00582430 *)(this))->sub_00580700(param_2, param_3);
  return param_1;
}

struct C_view_00582450 {
    int sub_00580760(int, int);
};

// @baa 0x00582450
int UGameUISceneClient::sub_00582450(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_00582450 *)(this))->sub_00580760(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_00582470 {
    int sub_005807e0(int, int);
};

// @baa 0x00582470
int UGameUISceneClient::sub_00582470(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_00582470 *)(this))->sub_005807e0(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_00582490 {
    int sub_00580860(int, int);
};

// @baa 0x00582490
undefined4 UGameUISceneClient::sub_00582490(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_00582490 *)(this))->sub_00580860(param_2, param_3);
  return param_1;
}

struct C_view_005824b0 {
    int sub_005808e0(int, int);
};

// @baa 0x005824b0
int UGameUISceneClient::sub_005824b0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_005824b0 *)(this))->sub_005808e0(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_005824d0 {
    int sub_00580960(int, int);
};

// @baa 0x005824d0
int UGameUISceneClient::sub_005824d0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_005824d0 *)(this))->sub_00580960(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_005824f0 {
    int sub_005809e0(int, int);
};

// @baa 0x005824f0
int UGameUISceneClient::sub_005824f0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_005824f0 *)(this))->sub_005809e0(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_00582510 {
    int sub_00580a60(int, int);
};

// @baa 0x00582510
int UGameUISceneClient::sub_00582510(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_00582510 *)(this))->sub_00580a60(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_00582530 {
    int sub_00580ae0(int, int);
};

// @baa 0x00582530
int UGameUISceneClient::sub_00582530(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_00582530 *)(this))->sub_00580ae0(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_00582550 {
    int sub_00580b60(int, int);
};

// @baa 0x00582550
int UGameUISceneClient::sub_00582550(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_00582550 *)(this))->sub_00580b60(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_00582570 {
    int sub_00580be0(int, int);
};

// @baa 0x00582570
int UGameUISceneClient::sub_00582570(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_00582570 *)(this))->sub_00580be0(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

// @baa 0x00582590
int UGameUISceneClient::sub_00582590(void)
{
    int param_1 = (int)this;

  sub_0057bde0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00582610
int UGameUISceneClient::sub_00582610(void)
{
    int param_1 = (int)this;

  sub_0057be40();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00582630
int UGameUISceneClient::sub_00582630(void)
{
    int param_1 = (int)this;

  sub_0057bea0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00582650
int UState::sub_00582650(void)
{
    int param_1 = (int)this;

  sub_0057bf00();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00582670
int UState::sub_00582670(void)
{
    int param_1 = (int)this;

  sub_0057bfb0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_0057bd80(void);
// @baa 0x00582690
int UState::sub_00582690(void)
{
    int param_1 = (int)this;

  sub_0057bd80();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_005814d0();
// @baa 0x00582740
void sub_00582740(void) { sub_005814d0(); }

void sub_00581540();
// @baa 0x00582750
void sub_00582750(void) { sub_00581540(); }

void sub_005817d0();
// @baa 0x00582760
void sub_00582760(void) { sub_005817d0(); }

void sub_00581760();
// @baa 0x00582770
void sub_00582770(void) { sub_00581760(); }

void sub_005815b0();
// @baa 0x00582780
void sub_00582780(void) { sub_005815b0(); }

void sub_00580e80();
// @baa 0x005827e0
void sub_005827e0(void) { sub_00580e80(); }

struct Block {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    int Unk20;   // 0x20
    int Unk24;   // 0x24
    int Unk28;   // 0x28
    int Unk2C;   // 0x2c
    void sub_0057ebc0(int, int);
};

struct C_005828b0 {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    Block* Unk20;  // 0x20
    int Unk24;     // 0x24
    int Unk28;     // 0x28
    int Unk2C;     // 0x2c
    void sub_005828b0(void);
};

// @baa 0x005828b0
void C_005828b0::sub_005828b0(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_0057ebc0(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
}

struct C_view_00582a90 {
    int sub_00581370(int, int);
};

// @baa 0x00582a90
undefined4 UState::sub_00582a90(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_00582a90 *)(this))->sub_00581370(param_2, param_3);
  return param_1;
}

int sub_00578ff0(void);
// @baa 0x00582ab0
int UState::sub_00582ab0(void)
{
    int param_1 = (int)this;

  sub_00578ff0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00582ad0 {
    int sub_00582ad0();
};

int sub_005790a0(void);
// @baa 0x00582ad0
int C_00582ad0::sub_00582ad0(void)
{
    int param_1 = (int)this;

  sub_005790a0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00582af0 {
    int sub_00582af0();
};

int sub_00579100(void);
// @baa 0x00582af0
int C_00582af0::sub_00582af0(void)
{
    int param_1 = (int)this;

  sub_00579100();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00582b10 {
    int sub_00582b10();
};

int sub_005791b0(void);
// @baa 0x00582b10
int C_00582b10::sub_00582b10(void)
{
    int param_1 = (int)this;

  sub_005791b0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_00581840();
// @baa 0x00582b30
void sub_00582b30(void) { sub_00581840(); }

int sub_00581450(void);
// @baa 0x00582b40
undefined4 UTexture2D::sub_00582b40(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00581450();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

void sub_00581980();
// @baa 0x00582ba0
void sub_00582ba0(void) { sub_00581980(); }

void sub_00581a00();
// @baa 0x00582bb0
void sub_00582bb0(void) { sub_00581a00(); }

void sub_00581a80();
// @baa 0x00582bc0
void sub_00582bc0(void) { sub_00581a80(); }

void sub_00581bb0();
// @baa 0x00582c10
void sub_00582c10(void) { sub_00581bb0(); }

struct Foo {
    void sub_00581c20(int a);
    void sub_00582fd0(int a);
};

// @baa 0x00582fd0
void Foo::sub_00582fd0(int a) {
    sub_00581c20(a);
}

void sub_00581de0();
// @baa 0x00583020
void sub_00583020(void) { sub_00581de0(); }

void sub_00581f10();
// @baa 0x00583070
void sub_00583070(void) { sub_00581f10(); }

struct TConstSetBitIterator_00583100 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00583100(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00583100& operator++();
};

TConstSetBitIterator_00583100::TConstSetBitIterator_00583100(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00583100
TConstSetBitIterator_00583100& TConstSetBitIterator_00583100::operator++()
{
    It.Advance();
    return *this;
}

struct C_view_00583150 {
    int sub_005802f0(int, int);
};

// @baa 0x00583150
int UGameUISceneClient::sub_00583150(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_view_00583150 *)(this))->sub_005802f0(param_2, param_4);
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return param_1;
}

struct Block_00583180 {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    int Unk20;   // 0x20
    int Unk24;   // 0x24
    int Unk28;   // 0x28
    int Unk2C;   // 0x2c
    void sub_0057ffa0(int, int);
};

struct C_00583180 {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    Block_00583180* Unk20;  // 0x20
    int Unk24;     // 0x24
    int Unk28;     // 0x28
    int Unk2C;     // 0x2c
    void sub_00583180(void);
};

// @baa 0x00583180
void C_00583180::sub_00583180(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_0057ffa0(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
}

struct C_view_005831a0 {
    int sub_00580350(int, int);
};

// @baa 0x005831a0
int UGameUISceneClient::sub_005831a0(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_view_005831a0 *)(this))->sub_00580350(param_2, param_4);
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return param_1;
}

struct Block_005831d0 {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    int Unk20;   // 0x20
    int Unk24;   // 0x24
    int Unk28;   // 0x28
    int Unk2C;   // 0x2c
    void sub_00580060(int, int);
};

struct C_005831d0 {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    Block_005831d0* Unk20;  // 0x20
    int Unk24;     // 0x24
    int Unk28;     // 0x28
    int Unk2C;     // 0x2c
    void sub_005831d0(void);
};

// @baa 0x005831d0
void C_005831d0::sub_005831d0(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_00580060(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
}

struct TConstSetBitIterator_005831f0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005831f0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005831f0& operator++();
};

TConstSetBitIterator_005831f0::TConstSetBitIterator_005831f0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005831f0
TConstSetBitIterator_005831f0& TConstSetBitIterator_005831f0::operator++()
{
    It.Advance();
    return *this;
}

struct C_view_00583240 {
    int sub_00580400(int, int);
};

// @baa 0x00583240
int UGameUISceneClient::sub_00583240(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_view_00583240 *)(this))->sub_00580400(param_2, param_4);
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return param_1;
}

struct Block_00583270 {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    int Unk20;   // 0x20
    int Unk24;   // 0x24
    int Unk28;   // 0x28
    int Unk2C;   // 0x2c
    void sub_0055a690(int, int);
};

struct C_00583270 {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    Block_00583270* Unk20;  // 0x20
    int Unk24;     // 0x24
    int Unk28;     // 0x28
    int Unk2C;     // 0x2c
    void sub_00583270(void);
};

// @baa 0x00583270
void C_00583270::sub_00583270(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_0055a690(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
}

struct C_view_005832d0 {
    int sub_00580520(int, int);
};

// @baa 0x005832d0
int UGameUISceneClient::sub_005832d0(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_view_005832d0 *)(this))->sub_00580520(param_2, param_4);
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return param_1;
}

struct Block_00583300 {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    int Unk20;   // 0x20
    int Unk24;   // 0x24
    int Unk28;   // 0x28
    int Unk2C;   // 0x2c
    void sub_0057fa80(int, int);
};

struct C_00583300 {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    Block_00583300* Unk20;  // 0x20
    int Unk24;     // 0x24
    int Unk28;     // 0x28
    int Unk2C;     // 0x2c
    void sub_00583300(void);
};

// @baa 0x00583300
void C_00583300::sub_00583300(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_0057fa80(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
}

struct C_view_00583320 {
    int sub_00580580(int, int);
};

// @baa 0x00583320
int UGameUISceneClient::sub_00583320(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_view_00583320 *)(this))->sub_00580580(param_2, param_4);
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return param_1;
}

struct Block_00583350 {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    int Unk20;   // 0x20
    int Unk24;   // 0x24
    int Unk28;   // 0x28
    int Unk2C;   // 0x2c
    void sub_00580120(int, int);
};

struct C_00583350 {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    Block_00583350* Unk20;  // 0x20
    int Unk24;     // 0x24
    int Unk28;     // 0x28
    int Unk2C;     // 0x2c
    void sub_00583350(void);
};

// @baa 0x00583350
void C_00583350::sub_00583350(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_00580120(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
}

struct C_view_005833b0 {
    int sub_005806a0(int, int);
};

// @baa 0x005833b0
int UGameUISceneClient::sub_005833b0(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_view_005833b0 *)(this))->sub_005806a0(param_2, param_4);
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return param_1;
}

struct Block_005833e0 {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    int Unk20;   // 0x20
    int Unk24;   // 0x24
    int Unk28;   // 0x28
    int Unk2C;   // 0x2c
    void sub_005805e0(int, int);
};

struct C_005833e0 {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    Block_005833e0* Unk20;  // 0x20
    int Unk24;     // 0x24
    int Unk28;     // 0x28
    int Unk2C;     // 0x2c
    void sub_005833e0(void);
};

// @baa 0x005833e0
void C_005833e0::sub_005833e0(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_005805e0(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
}

struct C_view_00583400 {
    int sub_00580700(int, int);
};

// @baa 0x00583400
int UGameUISceneClient::sub_00583400(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_view_00583400 *)(this))->sub_00580700(param_2, param_4);
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return param_1;
}

struct Block_00583430 {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    int Unk20;   // 0x20
    int Unk24;   // 0x24
    int Unk28;   // 0x28
    int Unk2C;   // 0x2c
    void sub_0057fc50(int, int);
};

struct C_00583430 {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    Block_00583430* Unk20;  // 0x20
    int Unk24;     // 0x24
    int Unk28;     // 0x28
    int Unk2C;     // 0x2c
    void sub_00583430(void);
};

// @baa 0x00583430
void C_00583430::sub_00583430(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_0057fc50(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
}

// @baa 0x00583450
int UGameUISceneClient::sub_00583450(void)
{
    int param_1 = (int)this;

  sub_0057bde0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_005825b0();
// @baa 0x00583470
void sub_00583470(void) { sub_005825b0(); }

// @baa 0x00583480
int UGameUISceneClient::sub_00583480(void)
{
    int param_1 = (int)this;

  sub_0057be40();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x005834a0
int UGameUISceneClient::sub_005834a0(void)
{
    int param_1 = (int)this;

  sub_0057bea0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_view_005834c0 {
    int sub_0057b1a0();
    int sub_00580060(int, int);
};

// @baa 0x005834c0
void UGameUISceneClient::sub_005834c0(void)
{
    int param_1 = (int)this;
  ((C_view_005834c0 *)(this))->sub_0057b1a0();
  ((C_view_005834c0 *)(this))->sub_00580060(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

// @baa 0x00586400
int UGameUISceneClient::sub_00586400(void)
{
    int param_1 = (int)this;

  sub_0057bde0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_view_00586420 {
    int sub_005825b0(int);
};

// @baa 0x00586420
void UPackageMap::sub_00586420(int param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  ((C_view_00586420 *)(this))->sub_005825b0(param_2);
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (*(int *)(param_1 + 0x44) != param_2) {
    *(int *)(param_1 + 0x44) = param_2;
    if ((*(int *)(param_1 + 0x3c) != 0) || (param_2 != 0)) {
      uVar1 = sub_0053df70(*(int *)(param_1 + 0x3c),param_2 * 4,8);
      *(undefined4 *)(param_1 + 0x3c) = uVar1;
    }
  }
  return;
}

// @baa 0x00586470
int UGameUISceneClient::sub_00586470(void)
{
    int param_1 = (int)this;

  sub_0057be40();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00586490
int UGameUISceneClient::sub_00586490(void)
{
    int param_1 = (int)this;

  sub_0057bea0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_view_005864b0 {
    int sub_0057b1a0();
    int sub_00580060(int, int);
};

// @baa 0x005864b0
void UGameUISceneClient::sub_005864b0(void)
{
    int param_1 = (int)this;
  ((C_view_005864b0 *)(this))->sub_0057b1a0();
  ((C_view_005864b0 *)(this))->sub_00580060(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_view_005acd30 {
    int sub_00573a10(int, int);
};

// @baa 0x005acd30
int UGameUISceneClient::sub_005acd30(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_005acd30 *)(this))->sub_00573a10((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x14;
  }
  return 0;
}

struct C_view_005acd60 {
    int sub_00573a90(int, int);
};

// @baa 0x005acd60
int UGameUISceneClient::sub_005acd60(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_005acd60 *)(this))->sub_00573a90((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

struct C_view_005af6e0 {
    int sub_00573a10(int, int);
};

// @baa 0x005af6e0
undefined4 UGameUISceneClient::sub_005af6e0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_view_005af6e0 *)(this))->sub_00573a10((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x14, iVar1 != 0)) {
    return *(undefined4 *)(iVar1 + 8);
  }
  return 0;
}

struct C_view_005b7100 {
    int sub_0057fe20(int, int);
};

// @baa 0x005b7100
void UGameUISceneClient::sub_005b7100(void)
{
    int param_1 = (int)this;
  ((C_view_005b7100 *)(this))->sub_0057fe20(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_006938f0 {
    int sub_006938f0();
};

int sub_00687690(void);
// @baa 0x006938f0
int C_006938f0::sub_006938f0(void)
{
    int param_1 = (int)this;

  sub_00687690();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

typedef uint size_t;

int sub_0053d240(...);
void*sub_0053df30(void*,void*,size_t);
int sub_006311e0(...);
extern undefined2 g_01e3f3dc;
// @baa 0x00d20b10
void UGameUISceneClient::sub_00d20b10(int param_2,int param_3)
{
int*param_1=(int*)this;
int iVar1;
int iVar2;
if(param_3<0){
sub_006311e0("Count>=0",
"e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
,0x31a,&g_01e3f3dc);
}
if(param_1[1]<0){
sub_006311e0("ArrayNum>=0",
"e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
,0x31b,&g_01e3f3dc);
}
if(param_1[2]<param_1[1]){
sub_006311e0("ArrayMax>=ArrayNum",
"e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
,0x31c,&g_01e3f3dc);
}
if(param_2<0){
sub_006311e0("Index>=0",
"e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
,0x31d,&g_01e3f3dc);
}
if(param_2>param_1[1]){
sub_006311e0("Index<=ArrayNum",
"e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
,0x31e,&g_01e3f3dc);
}
iVar1=param_1[1];
iVar2=iVar1+param_3;
param_1[1]=iVar2;
if(iVar2>param_1[2]){
iVar2=sub_0053d240(iVar2,param_1[2],4);
param_1[2]=iVar2;
if((*param_1!=0)||(iVar2!=0)){
iVar2=sub_0053df70(*param_1,iVar2*4,8);
*param_1=iVar2;
}
}
sub_0053df30((void*)(*param_1+(param_2+param_3)*4),(void*)(*param_1+param_2*4),
(iVar1-param_2)*4);
return;
}

struct T_00d29090;
// @baa 0x00d29090
template INT TArray<T_00d29090*>::RemoveItem(T_00d29090* const&);

struct C_00d38e50 { C_00d38e50* sub_00d38e50(void); };

// @baa 0x00d38e50
C_00d38e50* C_00d38e50::sub_00d38e50(void) { return this; }

struct C_00d38e60 { C_00d38e60* sub_00d38e60(void); };

// @baa 0x00d38e60
C_00d38e60* C_00d38e60::sub_00d38e60(void) { return this; }

struct C_00d39010 { int a, b, c; C_00d39010(); };

// @baa 0x00d39010
C_00d39010::C_00d39010() : a(0), b(0), c(0) {}

struct C_00d39020 { int a, b, c; C_00d39020(); };

// @baa 0x00d39020
C_00d39020::C_00d39020() : a(0), b(0), c(0) {}

struct C_view_00d39100 {
    int sub_00d28e10();
};

// @baa 0x00d39100
undefined4 UGameUISceneClient::sub_00d39100(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_00d39100 *)(((char *)this + 0x18)))->sub_00d28e10();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct M_00d78bd0 { void sub_0040fcc0(); };

struct C_00d78bd0 { char pad[8]; M_00d78bd0 m; void sub_00d78bd0(); };

// @baa 0x00d78bd0
void C_00d78bd0::sub_00d78bd0() { m.sub_0040fcc0(); }

// @baa 0x00d78c50
int UGameUISceneClient::sub_00d78c50(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

// @baa 0x00d78c60
int UGameUISceneClient::sub_00d78c60(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

// @baa 0x00d78d10
int UGameUISceneClient::sub_00d78d10(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00d78dc0 {
    int sub_00d78dc0(int);
};

// @baa 0x00d78dc0
int C_00d78dc0::sub_00d78dc0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x34 + *param_1;
}

struct C_00d78e70 {
    int sub_00d78e70(int);
};

// @baa 0x00d78e70
int C_00d78e70::sub_00d78e70(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00d78e80 {
    int sub_00d78e80(int);
};

// @baa 0x00d78e80
int C_00d78e80::sub_00d78e80(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00d7c070 { void* Data; int Num; int Max; void sub_00d7c070(); };

// @baa 0x00d7c070
void C_00d7c070::sub_00d7c070() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00d7c0d0 { void* Data; int Num; int Max; void sub_00d7c0d0(); };

// @baa 0x00d7c0d0
void C_00d7c0d0::sub_00d7c0d0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00d7c130 { void* Data; int Num; int Max; void sub_00d7c130(); };

// @baa 0x00d7c130
void C_00d7c130::sub_00d7c130() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00d7c190 { void* Data; int Num; int Max; void sub_00d7c190(); };

// @baa 0x00d7c190
void C_00d7c190::sub_00d7c190() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00d7c1f0 { void* Data; int Num; int Max; void sub_00d7c1f0(); };

// @baa 0x00d7c1f0
void C_00d7c1f0::sub_00d7c1f0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00d7c250 {
    int sub_00d7c250();
};

// @baa 0x00d7c250
int C_00d7c250::sub_00d7c250(void)
{
    int param_1 = (int)this;
  return *(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c);
}

struct C_00d7c260 { void* Data; int Num; int Max; void sub_00d7c260(); };

// @baa 0x00d7c260
void C_00d7c260::sub_00d7c260() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00d7c2c0 {
    int sub_00d7c2c0();
};

// @baa 0x00d7c2c0
int C_00d7c2c0::sub_00d7c2c0(void)
{
    int param_1 = (int)this;
  return *(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c);
}

struct C_00d7c2d0 {
    int sub_00d7c2d0();
};

// @baa 0x00d7c2d0
int C_00d7c2d0::sub_00d7c2d0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00d7c2f0 {
    int sub_00d7c2f0();
};

// @baa 0x00d7c2f0
int C_00d7c2f0::sub_00d7c2f0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00d7c310 { int sub_00d7c310(void); };

// @baa 0x00d7c310
int C_00d7c310::sub_00d7c310(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00d7c320 {
    int sub_00d7c320();
};

// @baa 0x00d7c320
int C_00d7c320::sub_00d7c320(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00d7c340 {
    int sub_00d7c340();
};

// @baa 0x00d7c340
int C_00d7c340::sub_00d7c340(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00d7c360 {
    int sub_00d7c360();
};

// @baa 0x00d7c360
int C_00d7c360::sub_00d7c360(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00d7c410 {
    int sub_00d7c410(int);
};

// @baa 0x00d7c410
int C_00d7c410::sub_00d7c410(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00d7c420 {
    int sub_00d7c420(int);
};

// @baa 0x00d7c420
int C_00d7c420::sub_00d7c420(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00d7c430 {
    int sub_00d7c430(int);
};

// @baa 0x00d7c430
int C_00d7c430::sub_00d7c430(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x34 + *param_1;
}

struct C_00d7c440 {
    int sub_00d7c440(int);
};

// @baa 0x00d7c440
int C_00d7c440::sub_00d7c440(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00d7c450 {
    int sub_00d7c450(int);
};

// @baa 0x00d7c450
int C_00d7c450::sub_00d7c450(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00d7c460 {
    int sub_00d7c460();
};

// @baa 0x00d7c460
int C_00d7c460::sub_00d7c460(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00d7c470 {
    int sub_00d7c470();
};

// @baa 0x00d7c470
int C_00d7c470::sub_00d7c470(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00d7c480 {
    int sub_00d7c480(int);
};

// @baa 0x00d7c480
int C_00d7c480::sub_00d7c480(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_00d7c490 {
    int sub_00d7c490();
};

// @baa 0x00d7c490
int C_00d7c490::sub_00d7c490(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_00d7c4a0 {
    int sub_00d7c4a0();
};

// @baa 0x00d7c4a0
int C_00d7c4a0::sub_00d7c4a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00d7c4b0 {
    undefined4 sub_00d7c4b0(byte);
    int sub_0040fcc0();
};

// @baa 0x00d7c4b0
undefined4 C_00d7c4b0::sub_00d7c4b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_00d7c4b0 *)(((char *)this + 8)))->sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00d7c4e0 {
    undefined4 sub_00d7c4e0(byte);
    int sub_0040fcc0();
};

// @baa 0x00d7c4e0
undefined4 C_00d7c4e0::sub_00d7c4e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_00d7c4e0 *)(((char *)this + 8)))->sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00d78b70(void);
// @baa 0x00d7c510
undefined4 UObject::sub_00d7c510(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00d78b70();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00d7c530 {
    undefined4 sub_00d7c530(byte);
    int sub_0040fcc0();
};

// @baa 0x00d7c530
undefined4 C_00d7c530::sub_00d7c530(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_00d7c530 *)(((char *)this + 8)))->sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct M_00d7c5c0 { void sub_00d78810(); };

struct C_00d7c5c0 { char pad[8]; M_00d7c5c0 m; void sub_00d7c5c0(); };

// @baa 0x00d7c5c0
void C_00d7c5c0::sub_00d7c5c0() { m.sub_00d78810(); }

// @baa 0x00d7c5d0
int UGameUISceneClient::sub_00d7c5d0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

// @baa 0x00d7c5f0
int UGameUISceneClient::sub_00d7c5f0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

// @baa 0x00d7c690
int UGameUISceneClient::sub_00d7c690(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

// @baa 0x00d7c720
int UGameUISceneClient::sub_00d7c720(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00d7c7b0 {
    int sub_00d7c7b0(int);
};

// @baa 0x00d7c7b0
int C_00d7c7b0::sub_00d7c7b0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x34 + *param_1;
}

struct C_00d7c7c0 { void* Data; int Num; int Max; void sub_00d7c7c0(); };

// @baa 0x00d7c7c0
void C_00d7c7c0::sub_00d7c7c0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

// @baa 0x00d7c8a0
int UGameUISceneClient::sub_00d7c8a0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00d7c910 {
    int sub_00d7c910(int);
};

// @baa 0x00d7c910
int C_00d7c910::sub_00d7c910(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x10 + *param_1;
}

struct C_00d7c920 {
    int sub_00d7c920(int);
};

// @baa 0x00d7c920
int C_00d7c920::sub_00d7c920(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_00d7c930 {
    int sub_00d7c930();
};

// @baa 0x00d7c930
int C_00d7c930::sub_00d7c930(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x48;
}

struct C_00d7c940 { void* Data; int Num; int Max; void sub_00d7c940(); };

// @baa 0x00d7c940
void C_00d7c940::sub_00d7c940() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00d7cd00 {
    void sub_00d7cd00(int);
};

// @baa 0x00d7cd00
void C_00d7cd00::sub_00d7cd00(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 0x34,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_view_00d7fbd0 {
    int sub_00d7c610(int, int);
};

// @baa 0x00d7fbd0
int UGameUISceneClient::sub_00d7fbd0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_00d7fbd0 *)(this))->sub_00d7c610((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x14;
  }
  return 0;
}

struct C_view_00d7fc00 {
    int sub_00d7c730(int, int);
};

// @baa 0x00d7fc00
int UGameUISceneClient::sub_00d7fc00(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_00d7fc00 *)(this))->sub_00d7c730((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x34 + *param_1;
  }
  return 0;
}

struct C_view_00d7fc30 {
    int sub_00d7c820(int, int);
};

// @baa 0x00d7fc30
int UGameUISceneClient::sub_00d7fc30(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_00d7fc30 *)(this))->sub_00d7c820((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

struct C_view_00d7fc80 {
    int sub_00d7c8b0(int, int);
};

// @baa 0x00d7fc80
int UGameUISceneClient::sub_00d7fc80(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_00d7fc80 *)(this))->sub_00d7c8b0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

// @baa 0x00d7fcb0
int UGameUISceneClient::sub_00d7fcb0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x48;
}

// @baa 0x00d7fd20
int UGameUISceneClient::sub_00d7fd20(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  return *(int *)*param_1 + param_1[2] * 0x1c;
}

int sub_00d7c560(void);
// @baa 0x00d7fee0
undefined4 UGameUISceneClient::sub_00d7fee0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00d7c560();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_view_00d7ff00 {
    int sub_00d78810();
};

// @baa 0x00d7ff00
undefined4 UGameUISceneClient::sub_00d7ff00(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_00d7ff00 *)(((char *)this + 8)))->sub_00d78810();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct M_00d7ff30 { void sub_00553720(); };

struct C_00d7ff30 { char pad[4]; M_00d7ff30 m; void sub_00d7ff30(); };

// @baa 0x00d7ff30
void C_00d7ff30::sub_00d7ff30() { m.sub_00553720(); }

void sub_00d7c070();
// @baa 0x00d80010
void sub_00d80010(void) { sub_00d7c070(); }

struct TConstSetBitIterator_00d80800 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d80800(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d80800& operator++();
};

TConstSetBitIterator_00d80800::TConstSetBitIterator_00d80800(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d80800
TConstSetBitIterator_00d80800& TConstSetBitIterator_00d80800::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00d80820 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d80820(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d80820& operator++();
};

TConstSetBitIterator_00d80820::TConstSetBitIterator_00d80820(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d80820
TConstSetBitIterator_00d80820& TConstSetBitIterator_00d80820::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00d80930 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d80930(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d80930& operator++();
};

TConstSetBitIterator_00d80930::TConstSetBitIterator_00d80930(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d80930
TConstSetBitIterator_00d80930& TConstSetBitIterator_00d80930::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00d80950 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d80950(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d80950& operator++();
};

TConstSetBitIterator_00d80950::TConstSetBitIterator_00d80950(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d80950
TConstSetBitIterator_00d80950& TConstSetBitIterator_00d80950::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00d80970 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d80970(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d80970& operator++();
};

TConstSetBitIterator_00d80970::TConstSetBitIterator_00d80970(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d80970
TConstSetBitIterator_00d80970& TConstSetBitIterator_00d80970::operator++()
{
    It.Advance();
    return *this;
}

struct M_00d80990 { void sub_00553720(); };

struct C_00d80990 { char pad[4]; M_00d80990 m; void sub_00d80990(); };

// @baa 0x00d80990
void C_00d80990::sub_00d80990() { m.sub_00553720(); }

struct M_00d809a0 { void sub_00d7c940(); };

struct C_00d809a0 { char pad[4]; M_00d809a0 m; void sub_00d809a0(); };

// @baa 0x00d809a0
void C_00d809a0::sub_00d809a0() { m.sub_00d7c940(); }

struct TConstSetBitIterator_00d809b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d809b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d809b0& operator++();
};

TConstSetBitIterator_00d809b0::TConstSetBitIterator_00d809b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d809b0
TConstSetBitIterator_00d809b0& TConstSetBitIterator_00d809b0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00d80a60 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d80a60(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d80a60& operator++();
};

TConstSetBitIterator_00d80a60::TConstSetBitIterator_00d80a60(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d80a60
TConstSetBitIterator_00d80a60& TConstSetBitIterator_00d80a60::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00d80ab0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d80ab0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d80ab0& operator++();
};

TConstSetBitIterator_00d80ab0::TConstSetBitIterator_00d80ab0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d80ab0
TConstSetBitIterator_00d80ab0& TConstSetBitIterator_00d80ab0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00d80b00 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d80b00(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d80b00& operator++();
};

TConstSetBitIterator_00d80b00::TConstSetBitIterator_00d80b00(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d80b00
TConstSetBitIterator_00d80b00& TConstSetBitIterator_00d80b00::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00d80b50 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d80b50(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d80b50& operator++();
};

TConstSetBitIterator_00d80b50::TConstSetBitIterator_00d80b50(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d80b50
TConstSetBitIterator_00d80b50& TConstSetBitIterator_00d80b50::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00d80ba0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d80ba0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d80ba0& operator++();
};

TConstSetBitIterator_00d80ba0::TConstSetBitIterator_00d80ba0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d80ba0
TConstSetBitIterator_00d80ba0& TConstSetBitIterator_00d80ba0::operator++()
{
    It.Advance();
    return *this;
}

struct C_view_00d82360 {
    int sub_00d7c610(int, int);
};

// @baa 0x00d82360
undefined4 UGameUISceneClient::sub_00d82360(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_view_00d82360 *)(this))->sub_00d7c610((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x14, iVar1 != 0)) {
    return *(undefined4 *)(iVar1 + 8);
  }
  return 0;
}

// @baa 0x00d82480
int UGameUISceneClient::sub_00d82480(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x48;
}

// @baa 0x00d82490
int UGameUISceneClient::sub_00d82490(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + 4 + param_1[5] * 0x48;
}

struct TConstSetBitIterator_00d826b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d826b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d826b0& operator++();
};

TConstSetBitIterator_00d826b0::TConstSetBitIterator_00d826b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d826b0
TConstSetBitIterator_00d826b0& TConstSetBitIterator_00d826b0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00d826d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d826d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d826d0& operator++();
};

TConstSetBitIterator_00d826d0::TConstSetBitIterator_00d826d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d826d0
TConstSetBitIterator_00d826d0& TConstSetBitIterator_00d826d0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00d826f0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d826f0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d826f0& operator++();
};

TConstSetBitIterator_00d826f0::TConstSetBitIterator_00d826f0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d826f0
TConstSetBitIterator_00d826f0& TConstSetBitIterator_00d826f0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00d82710 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d82710(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d82710& operator++();
};

TConstSetBitIterator_00d82710::TConstSetBitIterator_00d82710(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d82710
TConstSetBitIterator_00d82710& TConstSetBitIterator_00d82710::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00d82730 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d82730(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d82730& operator++();
};

TConstSetBitIterator_00d82730::TConstSetBitIterator_00d82730(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d82730
TConstSetBitIterator_00d82730& TConstSetBitIterator_00d82730::operator++()
{
    It.Advance();
    return *this;
}

struct C_view_00d82750 {
    int sub_00d80020(int);
};

// @baa 0x00d82750
void UGameUISceneClient::sub_00d82750(void)
{
    int param_1 = (int)this;
  ((C_view_00d82750 *)((*(char **)((char *)this + 0x10))))->sub_00d80020(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_view_00d82770 {
    int sub_00d80190(int);
};

// @baa 0x00d82770
void UGameUISceneClient::sub_00d82770(void)
{
    int param_1 = (int)this;
  ((C_view_00d82770 *)((*(char **)((char *)this + 0x10))))->sub_00d80190(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_view_00d82790 {
    int sub_00d803e0(int);
};

// @baa 0x00d82790
void UGameUISceneClient::sub_00d82790(void)
{
    int param_1 = (int)this;
  ((C_view_00d82790 *)((*(char **)((char *)this + 0x10))))->sub_00d803e0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_view_00d827b0 {
    int sub_00d80540(int);
};

// @baa 0x00d827b0
void UGameUISceneClient::sub_00d827b0(void)
{
    int param_1 = (int)this;
  ((C_view_00d827b0 *)((*(char **)((char *)this + 0x10))))->sub_00d80540(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_view_00d827d0 {
    int sub_00d806a0(int);
};

// @baa 0x00d827d0
void UGameUISceneClient::sub_00d827d0(void)
{
    int param_1 = (int)this;
  ((C_view_00d827d0 *)((*(char **)((char *)this + 0x10))))->sub_00d806a0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

int sub_00d7ff40(void);
// @baa 0x00d827f0
undefined4 UGameUISceneClient::sub_00d827f0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00d7ff40();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00d7ffb0(void);
// @baa 0x00d82810
undefined4 UGameUISceneClient::sub_00d82810(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00d7ffb0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_view_00d82a90 {
    int sub_00553720();
};

// @baa 0x00d82a90
undefined4 UGameUISceneClient::sub_00d82a90(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_00d82a90 *)(((char *)this + 4)))->sub_00553720();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct M_00d82ac0 { void sub_00d7c940(); };

struct C_00d82ac0 { char pad[4]; M_00d82ac0 m; void sub_00d82ac0(); };

// @baa 0x00d82ac0
void C_00d82ac0::sub_00d82ac0() { m.sub_00d7c940(); }

struct TConstSetBitIterator_00d83340 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d83340(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d83340& operator++();
};

TConstSetBitIterator_00d83340::TConstSetBitIterator_00d83340(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d83340
TConstSetBitIterator_00d83340& TConstSetBitIterator_00d83340::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00d83390 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d83390(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d83390& operator++();
};

TConstSetBitIterator_00d83390::TConstSetBitIterator_00d83390(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d83390
TConstSetBitIterator_00d83390& TConstSetBitIterator_00d83390::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00d836d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d836d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d836d0& operator++();
};

TConstSetBitIterator_00d836d0::TConstSetBitIterator_00d836d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d836d0
TConstSetBitIterator_00d836d0& TConstSetBitIterator_00d836d0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00d83720 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d83720(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d83720& operator++();
};

TConstSetBitIterator_00d83720::TConstSetBitIterator_00d83720(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d83720
TConstSetBitIterator_00d83720& TConstSetBitIterator_00d83720::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00d83770 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d83770(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d83770& operator++();
};

TConstSetBitIterator_00d83770::TConstSetBitIterator_00d83770(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d83770
TConstSetBitIterator_00d83770& TConstSetBitIterator_00d83770::operator++()
{
    It.Advance();
    return *this;
}

struct C_00d837c0 {
    undefined4 * sub_00d837c0(undefined4 *);
    int sub_0060d780(int);
};

// @baa 0x00d837c0
undefined4 * C_00d837c0::sub_00d837c0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_00d837c0 *)(((char *)this + 4)))->sub_0060d780((int)(param_2 + 1));
  return param_1;
}

struct TConstSetBitIterator_00d837e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d837e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d837e0& operator++();
};

TConstSetBitIterator_00d837e0::TConstSetBitIterator_00d837e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d837e0
TConstSetBitIterator_00d837e0& TConstSetBitIterator_00d837e0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00d852d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d852d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d852d0& operator++();
};

TConstSetBitIterator_00d852d0::TConstSetBitIterator_00d852d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d852d0
TConstSetBitIterator_00d852d0& TConstSetBitIterator_00d852d0::operator++()
{
    It.Advance();
    return *this;
}

struct C_00d85460 {
    undefined4 * sub_00d85460(undefined4 *);
    int sub_0060d780(int);
};

// @baa 0x00d85460
undefined4 * C_00d85460::sub_00d85460(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_00d85460 *)(((char *)this + 4)))->sub_0060d780(param_2[1]);
  return param_1;
}

struct C_view_00d85530 {
    int sub_0060d780(int);
};

// @baa 0x00d85530
undefined4 * UObject::sub_00d85530(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_view_00d85530 *)(((char *)this + 4)))->sub_0060d780(param_2[1]);
  param_1[4] = 0xffffffff;
  return param_1;
}

struct TConstSetBitIterator_00d85560 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d85560(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d85560& operator++();
};

TConstSetBitIterator_00d85560::TConstSetBitIterator_00d85560(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d85560
TConstSetBitIterator_00d85560& TConstSetBitIterator_00d85560::operator++()
{
    It.Advance();
    return *this;
}

struct C_00d855b0 {
    int sub_00d855b0();
};

int sub_00d80a00(void);
// @baa 0x00d855b0
int C_00d855b0::sub_00d855b0(void)
{
    int param_1 = (int)this;

  sub_00d80a00();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00d85a00 {
    undefined4 sub_00d85a00(byte);
    int sub_00d7c940();
};

// @baa 0x00d85a00
undefined4 C_00d85a00::sub_00d85a00(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_00d85a00 *)(((char *)this + 4)))->sub_00d7c940();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00d85a30 {
    int sub_00d85a30();
};

int sub_00d80ce0(void);
// @baa 0x00d85a30
int C_00d85a30::sub_00d85a30(void)
{
    int param_1 = (int)this;

  sub_00d80ce0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00d85a50 {
    int sub_00d85a50();
};

int sub_00d80d40(void);
// @baa 0x00d85a50
int C_00d85a50::sub_00d85a50(void)
{
    int param_1 = (int)this;

  sub_00d80d40();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00d85a70 {
    int sub_00d85a70();
};

int sub_00d80da0(void);
// @baa 0x00d85a70
int C_00d85a70::sub_00d85a70(void)
{
    int param_1 = (int)this;

  sub_00d80da0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00d85a90 {
    int sub_00d85a90();
};

int sub_00d80e00(void);
// @baa 0x00d85a90
int C_00d85a90::sub_00d85a90(void)
{
    int param_1 = (int)this;

  sub_00d80e00();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_00d845c0();
// @baa 0x00d85be0
void sub_00d85be0(void) { sub_00d845c0(); }

struct C_00d85bf0 {
    undefined4 * sub_00d85bf0();
};

int sub_005c7a20(void);
extern undefined * g_020b54b0;
// @baa 0x00d85bf0
undefined4 * C_00d85bf0::sub_00d85bf0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020b54b0);
  param_1[0x1f] = 0;
  return param_1;
}

// @baa 0x00d85c10
IMPLEMENT_CLASS_AT(UOnlineGameplayEvents, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UOnlineSubsystem.cpp", 12);

// @baa 0x00d85cc0
void sub_00d846c0();
// @baa 0x00d85cf0
void sub_00d85cf0(void) { sub_00d846c0(); }

// @baa 0x00d85d30
IMPLEMENT_CLASS_AT(ANxGenericForceFieldBrush, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPhysActorForceField.cpp", 21);

// @baa 0x00d85dc0
// @baa 0x00d85e20
IMPLEMENT_CLASS_AT(ARB_ForceFieldExcludeVolume, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPhysActorForceField.cpp", 25);

// @baa 0x00d85e80
// @baa 0x00d85eb0
IMPLEMENT_CLASS_AT(ANxCylindricalForceField, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPhysActorForceField.cpp", 16);

// @baa 0x00d85f10
// @baa 0x00d85fa0
IMPLEMENT_CLASS_AT(ANxCylindricalForceFieldCapsule, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPhysActorForceField.cpp", 17);

// @baa 0x00d86000
// @baa 0x00d86030
IMPLEMENT_CLASS_AT(ANxGenericForceField, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPhysActorForceField.cpp", 18);

// @baa 0x00d86090
// @baa 0x00d86120
IMPLEMENT_CLASS_AT(ANxGenericForceFieldBox, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPhysActorForceField.cpp", 19);

// @baa 0x00d86180
// @baa 0x00d861e0
IMPLEMENT_CLASS_AT(ANxGenericForceFieldCapsule, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPhysActorForceField.cpp", 20);

// @baa 0x00d86240
struct C_00d86270 { C_00d86270* sub_00d86270(void); };

// @baa 0x00d86270
C_00d86270* C_00d86270::sub_00d86270(void) { return this; }

struct C_view_00d868c0 {
    int sub_00d84f70(int, int);
};

// @baa 0x00d868c0
void UGameUISceneClient::sub_00d868c0(void)
{
    int param_1 = (int)this;
  ((C_view_00d868c0 *)(this))->sub_00d84f70(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_view_00d86ae0 {
    int sub_00d850f0(int, int);
};

// @baa 0x00d86ae0
void UGameUISceneClient::sub_00d86ae0(void)
{
    int param_1 = (int)this;
  ((C_view_00d86ae0 *)(this))->sub_00d850f0(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_00d86c70 {
    undefined4 sub_00d86c70(undefined4, undefined4);
    int sub_00d85270(int, int);
};

// @baa 0x00d86c70
undefined4 C_00d86c70::sub_00d86c70(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_00d86c70 *)(this))->sub_00d85270(param_2, param_3);
  return param_1;
}

struct TConstSetBitIterator_00d86c90 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d86c90(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d86c90& operator++();
};

TConstSetBitIterator_00d86c90::TConstSetBitIterator_00d86c90(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d86c90
TConstSetBitIterator_00d86c90& TConstSetBitIterator_00d86c90::operator++()
{
    It.Advance();
    return *this;
}

struct C_00d86ce0 {
    void sub_00d86ce0();
    int sub_00d853a0(int, int);
};

// @baa 0x00d86ce0
void C_00d86ce0::sub_00d86ce0(void)
{
    int param_1 = (int)this;
  ((C_00d86ce0 *)(this))->sub_00d853a0(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct TConstSetBitIterator_00d86e90 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d86e90(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d86e90& operator++();
};

TConstSetBitIterator_00d86e90::TConstSetBitIterator_00d86e90(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d86e90
TConstSetBitIterator_00d86e90& TConstSetBitIterator_00d86e90::operator++()
{
    It.Advance();
    return *this;
}

struct C_00d86ee0 {
    int sub_00d86ee0();
};

// @baa 0x00d86ee0
int C_00d86ee0::sub_00d86ee0(void)
{
    int param_1 = (int)this;

  sub_00d80a00();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_view_00d86f00 {
    int sub_00d855d0(int, int);
};

// @baa 0x00d86f00
undefined4 UObject::sub_00d86f00(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_00d86f00 *)(this))->sub_00d855d0(param_2, param_3);
  return param_1;
}

struct C_view_00d86f20 {
    int sub_00d85630(int, int);
};

// @baa 0x00d86f20
undefined4 UObject::sub_00d86f20(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_00d86f20 *)(this))->sub_00d85630(param_2, param_3);
  return param_1;
}

struct C_view_00d86f40 {
    int sub_00d85690(int, int);
};

// @baa 0x00d86f40
undefined4 UObject::sub_00d86f40(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_00d86f40 *)(this))->sub_00d85690(param_2, param_3);
  return param_1;
}

struct C_view_00d86f60 {
    int sub_00d85710(int, int);
};

// @baa 0x00d86f60
int UObject::sub_00d86f60(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_00d86f60 *)(this))->sub_00d85710(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_00d86f80 {
    int sub_00d85790(int, int);
};

// @baa 0x00d86f80
int UObject::sub_00d86f80(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_00d86f80 *)(this))->sub_00d85790(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_00d86fa0 {
    int sub_00d85810(int, int);
};

// @baa 0x00d86fa0
int UObject::sub_00d86fa0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_00d86fa0 *)(this))->sub_00d85810(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_00d86fc0 {
    int sub_00d85890(int, int);
};

// @baa 0x00d86fc0
int UObject::sub_00d86fc0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_00d86fc0 *)(this))->sub_00d85890(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_00d86fe0 {
    int sub_00d85910(int, int);
};

// @baa 0x00d86fe0
int UObject::sub_00d86fe0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_00d86fe0 *)(this))->sub_00d85910(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_00d87000 {
    int sub_00d85980(int, int);
};

// @baa 0x00d87000
int UObject::sub_00d87000(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_00d87000 *)(this))->sub_00d85980(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_00d87020 {
    int sub_00d85320(int);
};

// @baa 0x00d87020
void UObject::sub_00d87020(void)
{
    int param_1 = (int)this;
  ((C_view_00d87020 *)((*(char **)((char *)this + 0x10))))->sub_00d85320(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

void sub_00d86860();
// @baa 0x00d87f40
void sub_00d87f40(void) { sub_00d86860(); }

void sub_00d86990();
// @baa 0x00d87f90
void sub_00d87f90(void) { sub_00d86990(); }

struct C_00d88060 {
    int sub_00d88060(undefined4, undefined4, undefined4);
    int sub_00d85270(int, int);
};

// @baa 0x00d88060
int C_00d88060::sub_00d88060(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_00d88060 *)(this))->sub_00d85270(param_2, param_4);
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return param_1;
}

struct Block_00d88090 {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    int Unk20;   // 0x20
    int Unk24;   // 0x24
    int Unk28;   // 0x28
    int Unk2C;   // 0x2c
    void sub_00d850f0(int, int);
};

struct C_00d88090 {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    Block_00d88090* Unk20;  // 0x20
    int Unk24;     // 0x24
    int Unk28;     // 0x28
    int Unk2C;     // 0x2c
    void sub_00d88090(void);
};

// @baa 0x00d88090
void C_00d88090::sub_00d88090(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_00d850f0(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
}

struct TConstSetBitIterator_00d880b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d880b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d880b0& operator++();
};

TConstSetBitIterator_00d880b0::TConstSetBitIterator_00d880b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d880b0
TConstSetBitIterator_00d880b0& TConstSetBitIterator_00d880b0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00d881b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d881b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d881b0& operator++();
};

TConstSetBitIterator_00d881b0::TConstSetBitIterator_00d881b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d881b0
TConstSetBitIterator_00d881b0& TConstSetBitIterator_00d881b0::operator++()
{
    It.Advance();
    return *this;
}

struct C_00d88200 {
    int sub_00d88200();
};

// @baa 0x00d88200
int C_00d88200::sub_00d88200(void)
{
    int param_1 = (int)this;

  sub_00d80a00();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  return param_1;
}

struct C_view_00d88220 {
    int sub_00d855d0(int, int);
};

// @baa 0x00d88220
int UObject::sub_00d88220(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_view_00d88220 *)(this))->sub_00d855d0(param_2, param_4);
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return param_1;
}

struct Block_00d88250 {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    int Unk20;   // 0x20
    int Unk24;   // 0x24
    int Unk28;   // 0x28
    int Unk2C;   // 0x2c
    void sub_00d853a0(int, int);
};

struct C_00d88250 {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    Block_00d88250* Unk20;  // 0x20
    int Unk24;     // 0x24
    int Unk28;     // 0x28
    int Unk2C;     // 0x2c
    void sub_00d88250(void);
};

// @baa 0x00d88250
void C_00d88250::sub_00d88250(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_00d853a0(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
}

struct C_view_00d88270 {
    int sub_00d85630(int, int);
};

// @baa 0x00d88270
int UObject::sub_00d88270(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_view_00d88270 *)(this))->sub_00d85630(param_2, param_4);
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return param_1;
}

struct Block_00d882a0 {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    int Unk20;   // 0x20
    int Unk24;   // 0x24
    int Unk28;   // 0x28
    int Unk2C;   // 0x2c
    void sub_00d84f70(int, int);
};

struct C_00d882a0 {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    Block_00d882a0* Unk20;  // 0x20
    int Unk24;     // 0x24
    int Unk28;     // 0x28
    int Unk2C;     // 0x2c
    void sub_00d882a0(void);
};

// @baa 0x00d882a0
void C_00d882a0::sub_00d882a0(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_00d84f70(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
}

struct C_00d88340 {
    int sub_00d88340();
};

// @baa 0x00d88340
int C_00d88340::sub_00d88340(void)
{
    int param_1 = (int)this;

  sub_00d80ce0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00d88360 {
    int sub_00d88360();
};

// @baa 0x00d88360
int C_00d88360::sub_00d88360(void)
{
    int param_1 = (int)this;

  sub_00d80d40();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_view_00d88380 {
    int sub_00d802f0();
    int sub_00d84f70(int, int);
};

// @baa 0x00d88380
void UGameUISceneClient::sub_00d88380(void)
{
    int param_1 = (int)this;
  ((C_view_00d88380 *)(this))->sub_00d802f0();
  ((C_view_00d88380 *)(this))->sub_00d84f70(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_view_00d8a870 {
    int sub_00d802f0();
    int sub_00d84f70(int, int);
};

// @baa 0x00d8a870
void UGameUISceneClient::sub_00d8a870(void)
{
    int param_1 = (int)this;
  ((C_view_00d8a870 *)(this))->sub_00d802f0();
  ((C_view_00d8a870 *)(this))->sub_00d84f70(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct T_00dad2d0 { BYTE b[4]; };

// @baa 0x00dad2d0
template T_00dad2d0& TArray<T_00dad2d0>::Last(INT);

struct C_view_00db8910 {
    int sub_00db5e60(int, int);
};

// @baa 0x00db8910
int UGameUISceneClient::sub_00db8910(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_00db8910 *)(this))->sub_00db5e60((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x48;
  }
  return 0;
}

struct C_view_00db8940 {
    int sub_00d7c6a0(int, int);
};

// @baa 0x00db8940
int UGameUISceneClient::sub_00db8940(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_00db8940 *)(this))->sub_00d7c6a0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

struct C_view_00dba3f0 {
    int sub_00db5e60(int, int);
};

// @baa 0x00dba3f0
int UGameUISceneClient::sub_00dba3f0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_view_00dba3f0 *)(this))->sub_00db5e60((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x48, iVar1 != 0)) {
    return iVar1 + 4;
  }
  return 0;
}

// @baa 0x00ddd080
IMPLEMENT_CLASS_AT(UUISceneClient, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUserInterface.cpp", 24);

// @baa 0x00ddd120
float UUISceneClient::vf_128(int param1)
{
  return 1.0f;
}

// @baa 0x00ddd160
int UUISceneClient::vf_138(int a0) { return 0; }

// @baa 0x00ddd170
int UUISceneClient::vf_14c(int a0, int a1, int a2, int a3) { return 0; }

// @baa 0x00ddd1b0
int UUISceneClient::vf_154(int a0, int a1, int a2, int a3, int a4) { return 0; }

// @baa 0x00ddd1c0
int UUISceneClient::vf_158(int a0, int a1, int a2, int a3, int a4) { return 0; }

// @baa 0x00ddd1d0
int UUISceneClient::vf_15c(int a0, int a1, int a2) { return 0; }

// @baa 0x00ddd1e0
int UUISceneClient::vf_160(int a0, int a1, int a2) { return 0; }

// @baa 0x00ddd1f0
// @baa 0x00ddd240
undefined4 sub_00ddd240(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

// @baa 0x00ddd250
IMPLEMENT_CLASS_AT(UUIState, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUserInterface.cpp", 28);

extern undefined * g_020d5358;
// @baa 0x00ddd2b0
undefined4 * UObject::sub_00ddd2b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020d5358);
  return param_1;
}

// @baa 0x00ddd2d0
// @baa 0x00ddd2f0
undefined4 sub_00ddd2f0(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

extern undefined * g_020d5468;
// @baa 0x00ddd300
undefined4 * UObject::sub_00ddd300(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020d5468);
  return param_1;
}

// @baa 0x00ddd320
IMPLEMENT_CLASS_AT(UUIState_Disabled, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUserInterface.cpp", 30);

// @baa 0x00ddd380
// @baa 0x00ddd3a0
undefined4 sub_00ddd3a0(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

extern undefined * g_020d5578;
// @baa 0x00ddd3b0
undefined4 * UObject::sub_00ddd3b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020d5578);
  return param_1;
}

// @baa 0x00ddd3d0
IMPLEMENT_CLASS_AT(UUIState_Enabled, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUserInterface.cpp", 29);

// @baa 0x00ddd430
extern char g_020d5684[];
// @baa 0x00ddd450
void UUIState_Enabled::sub_00ddd450(void) { *(int*)((char*)this + 0) = (int)g_020d5684; }

// @baa 0x00ddd460
undefined4 * UUIState_Enabled::sub_00ddd460(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_020d5684);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00ddd480 { C_00ddd480* sub_00ddd480(int a0); };

// @baa 0x00ddd480
C_00ddd480* C_00ddd480::sub_00ddd480(int a0) { return this; }

struct C_00ddd4f0 { C_00ddd4f0* sub_00ddd4f0(int a0); };

// @baa 0x00ddd4f0
C_00ddd4f0* C_00ddd4f0::sub_00ddd4f0(int a0) { return this; }

// @baa 0x00ddd550
int sub_00ddd550(int a0, int a1) { return a1; }

// @baa 0x00ddd560
int UObject::sub_00ddd560(void) { return *(int*)((char*)this + 28); }

extern char g_020b5210[];
// @baa 0x00ddd570
int sub_00ddd570(void) { return (int)g_020b5210; }

// @baa 0x00ddd580
int sub_00ddd580(int a0, int a1) { return a1; }

extern undefined * g_020d5690;
// @baa 0x00ddd590
undefined4 * UObject::sub_00ddd590(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020d5690);
  return param_1;
}

// @baa 0x00ddd5b0
IMPLEMENT_CLASS_AT(UUIState_Active, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUserInterface.cpp", 31);

// @baa 0x00ddd610
// @baa 0x00ddd630
undefined4 sub_00ddd630(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

extern undefined * g_020d57a0;
// @baa 0x00ddd640
undefined4 * UObject::sub_00ddd640(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020d57a0);
  return param_1;
}

// @baa 0x00ddd660
IMPLEMENT_CLASS_AT(UUIState_Focused, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUserInterface.cpp", 32);

// @baa 0x00ddd6c0
// @baa 0x00ddd6e0
undefined4 sub_00ddd6e0(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

extern undefined * g_020d58b0;
// @baa 0x00ddd6f0
undefined4 * UObject::sub_00ddd6f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020d58b0);
  return param_1;
}

// @baa 0x00ddd710
IMPLEMENT_CLASS_AT(UUIState_Pressed, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUserInterface.cpp", 33);

// @baa 0x00ddd770
// @baa 0x00ddd790
undefined4 sub_00ddd790(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

extern undefined * g_020d59c0;
// @baa 0x00ddd7a0
undefined4 * UObject::sub_00ddd7a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020d59c0);
  return param_1;
}

// @baa 0x00ddd7c0
IMPLEMENT_CLASS_AT(UUITexture, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUserInterface.cpp", 27);

// @baa 0x00ddd820
struct C_00ddd840 {
    C_00ddd840 *sub_00ddd840(int);
};

// @baa 0x00ddd840
C_00ddd840 *C_00ddd840::sub_00ddd840(int param)
{
    return this;
}

struct C_00ddd850 { C_00ddd850* sub_00ddd850(int a0); };

// @baa 0x00ddd850
C_00ddd850* C_00ddd850::sub_00ddd850(int a0) { return this; }

// @baa 0x00ddd8e0
int sub_00ddd8e0(int a0, int a1) { return a1; }

struct C_00ddd8f0 { C_00ddd8f0* sub_00ddd8f0(void); };

// @baa 0x00ddd8f0
C_00ddd8f0* C_00ddd8f0::sub_00ddd8f0(void) { *(int*)((char*)this + 0) = (int)g_020d5684; return this; }

// @baa 0x00ddd900
IMPLEMENT_CLASS_AT(UUIRoot, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUserInterface.cpp", 23);

// @baa 0x00ddda10
int UUIRoot::vf_000(void) { return 1; }

// @baa 0x00ddda20
bool UUIRoot::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00ddda60
int UUISceneClient::vf_000(void) { return 1; }

// @baa 0x00ddda90
int UUITexture::vf_000(void) { return 1; }

// @baa 0x00dddaa0
int UUIState::vf_000(void) { return 1; }

// @baa 0x00dddab0
int UUIState_Enabled::vf_000(void) { return 1; }

// @baa 0x00dddac0
int UUIState_Disabled::vf_000(void) { return 1; }

// @baa 0x00dddad0
int UUIState_Active::vf_000(void) { return 1; }

// @baa 0x00dddae0
int UUIState_Focused::vf_000(void) { return 1; }

// @baa 0x00dddaf0
int UUIState_Pressed::vf_000(void) { return 1; }

// @baa 0x00dddb00
int UUILayerBase::vf_000(void) { return 1; }

struct C_view_00dddb10 {
    int sub_00c407b0(int);
};

extern undefined4 g_020d5acc;
// @baa 0x00dddb10
undefined4 * UUnrealEdEngine::sub_00dddb10(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view_00dddb10 *)(this))->sub_00c407b0(2);
  param_1[4] = param_2;
  param_1[5] = param_2;
  *param_1 = (undefined4)(&g_020d5acc);
  return param_1;
}

int sub_00ddcdc0(void);
extern undefined4 g_026c5e5c;
extern undefined4 g_026c5e60;
extern undefined4 g_026c5e64;
// @baa 0x00dddb30
undefined * sub_00dddb30(void)
{
  if ((g_026c5e64 & 1) == 0) {
    g_026c5e64 = g_026c5e64 | 1;
    g_026c5e5c = sub_00ddcdc0();
    g_026c5e60 = (undefined4)(L"HUIHitProxy");
  }
  return (undefined *)(&g_026c5e5c);
}

// @baa 0x00dddb60
undefined * sub_00dddb60(void)
{
  if ((g_026c5e64 & 1) == 0) {
    g_026c5e64 = g_026c5e64 | 1;
    g_026c5e5c = sub_00ddcdc0();
    g_026c5e60 = (undefined4)(L"HUIHitProxy");
  }
  return (undefined *)(&g_026c5e5c);
}

// @baa 0x00dddb90
int sub_00dddb90(void) { return 3; }

void sub_00c38ac0();
// @baa 0x00dddba0
void sub_00dddba0(void) { sub_00c38ac0(); }

// @baa 0x00dddbb0
char* UUIInputConfiguration::sub_00dddbb0(void) { return (char*)this + 48; }

// @baa 0x00dddc80
int UUITickableObjectProxy::vf_000(void) { return 1; }

// @baa 0x00dddd20
void UUISceneClient::vf_10c(int a0, int a1) {  }

// @baa 0x00dddd30
int UUISceneClient::vf_110(int a0, int a1) { return 0; }

extern char g_020d5af4[];
struct C_00ddde60 { C_00ddde60* sub_00ddde60(void); };

// @baa 0x00ddde60
C_00ddde60* C_00ddde60::sub_00ddde60(void) { *(int*)((char*)this + 0) = (int)g_020d5af4; return this; }

int sub_00aa5130(void);
// @baa 0x00ddde70
undefined4 UUISceneClient::sub_00ddde70(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00aa5130();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern int g_020d5b00;
// A small two-dword value struct used by DecalComponent.cpp.
struct FDecalValue
{
    FDecalValue* sub_00ddde90(int* Src);
    int Value;  // 0x0
    int Unk04;  // 0x4
};

// @baa 0x00ddde90
FDecalValue* FDecalValue::sub_00ddde90(int* Src)
{
    Value = (int)&g_020d5b00;
    Unk04 = *Src;
    return this;
}

extern char g_020d1fdc[];
// @baa 0x00ddded0
int sub_00ddded0(void) { return (int)g_020d1fdc; }

extern char g_01ebb554[];
// @baa 0x00dddee0
void UUISceneClient::sub_00dddee0(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

// @baa 0x00dddef0
undefined4 * UUISceneClient::sub_00dddef0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00dde330
void sub_00dde330(void) {  }

// @baa 0x00dde340
int UGameUISceneClient::vf_18c(int a0) { return 0; }

// @baa 0x00dde450
void UGameUISceneClient::vf_1ac(INT a0, INT a1, INT a2) {  }

// @baa 0x00dde4f0
void UGameUISceneClient::sub_00dde4f0(void)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0xf8) = *(uint *)(param_1 + 0xf8) | 2;
  return;
}

// @baa 0x00dde500
void UGameUISceneClient::sub_00dde500(void)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0xf8) = *(uint *)(param_1 + 0xf8) | 4;
  return;
}

struct C_00dde6c0 {
    float10 sub_00dde6c0();
};

// @baa 0x00dde6c0
float10 C_00dde6c0::sub_00dde6c0(void)
{
    int param_1 = (int)this;
  if (*(float *)(param_1 + 0xc) == 0.0) {
    return ((float10)*(float *)(param_1 + 8) - (float10)*(float *)(param_1 + 4)) * (float10)0.01;
  }
  return (float10)*(float *)(param_1 + 0xc);
}

struct C_00dde9a0 {
    void sub_00dde9a0(byte, undefined1);
};

// @baa 0x00dde9a0
void C_00dde9a0::sub_00dde9a0(byte param_2, undefined1 param_3)
{
    int param_1 = (int)this;
  *(undefined1 *)(param_2 + 0x10 + param_1) = param_3;
  return;
}

struct C_00ddecb0 {
    void sub_00ddecb0(int);
};

extern undefined4 g_020d31bc;
// @baa 0x00ddecb0
void C_00ddecb0::sub_00ddecb0(int param_2)
{
    int * param_1 = (int *)this;

  if (param_2 == 0) {
    sub_006311e0("inOwnerWidget",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUserInterface.cpp"
                 ,0x17a0,&g_020d31bc);
  }
  *param_1 = param_2;
  return;
}

struct C_00ddece0 { int sub_00ddece0(void); };

// @baa 0x00ddece0
int C_00ddece0::sub_00ddece0(void) { return *(int*)((char*)this + 0); }

struct C_00ddecf0 { void sub_00ddecf0(int a0); };

// @baa 0x00ddecf0
void C_00ddecf0::sub_00ddecf0(int a0) { *(int*)((char*)this + 4) = a0; }

struct C_00dded00 { int sub_00dded00(void); };

// @baa 0x00dded00
int C_00dded00::sub_00dded00(void) { return *(int*)((char*)this + 4); }

struct C_00dded10 { int sub_00dded10(void); };

// @baa 0x00dded10
int C_00dded10::sub_00dded10(void) { return *(int*)((char*)this + 0); }

struct C_00dded20 { int sub_00dded20(void); };

// @baa 0x00dded20
int C_00dded20::sub_00dded20(void) { return *(int*)((char*)this + 4); }

struct C_00dded30 { int sub_00dded30(void); };

// @baa 0x00dded30
int C_00dded30::sub_00dded30(void) { return *(int*)((char*)this + 8); }

struct C_00dded40 { int sub_00dded40(void); };

// @baa 0x00dded40
int C_00dded40::sub_00dded40(void) { return *(int*)((char*)this + 12); }

struct C_00ddf000 {
    undefined4 sub_00ddf000(int *);
};

// @baa 0x00ddf000
undefined4 C_00ddf000::sub_00ddf000(int * param_2)
{
    int * param_1 = (int *)this;

  if (((*param_2 == *param_1) && (param_2[1] == param_1[1])) &&
     ((char)param_2[2] == (char)param_1[2])) {
    return 1;
  }
  return 0;
}

struct C_00ddf080 { int sub_00ddf080(void); };

// @baa 0x00ddf080
int C_00ddf080::sub_00ddf080(void) { return *(int*)((char*)this + 4); }

struct C_00ddf090 { int sub_00ddf090(void); };

// @baa 0x00ddf090
int C_00ddf090::sub_00ddf090(void) { return *(int*)((char*)this + 4); }

struct C_00ddf0a0 { int sub_00ddf0a0(void); };

// @baa 0x00ddf0a0
int C_00ddf0a0::sub_00ddf0a0(void) { return *(int*)((char*)this + 4); }

struct C_00ddf0b0 {
    void sub_00ddf0b0();
};

// @baa 0x00ddf0b0
void C_00ddf0b0::sub_00ddf0b0(void)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  iVar1 = param_1[1];
  if (param_1[2] != iVar1) {
    param_1[2] = iVar1;
    if ((*param_1 != 0) || (iVar1 != 0)) {
      iVar1 = sub_0053df70(*param_1,iVar1 * 0x1c,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_00ddf0f0 { int a, b, c; C_00ddf0f0(); };

// @baa 0x00ddf0f0
C_00ddf0f0::C_00ddf0f0() : a(0), b(0), c(0) {}

struct C_00ddf100 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_00ddf100(INT Index);
};

// @baa 0x00ddf100
UBOOL C_00ddf100::sub_00ddf100(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

struct C_00ddf120 { int a, b, c; C_00ddf120(); };

// @baa 0x00ddf120
C_00ddf120::C_00ddf120() : a(0), b(0), c(0) {}

struct C_00ddf130 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_00ddf130(INT Index);
};

// @baa 0x00ddf130
UBOOL C_00ddf130::sub_00ddf130(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

struct C_00ddf150 { int sub_00ddf150(void); };

// @baa 0x00ddf150
int C_00ddf150::sub_00ddf150(void) { return *(int*)((char*)this + 4); }

struct C_00ddf160 { int sub_00ddf160(void); };

// @baa 0x00ddf160
int C_00ddf160::sub_00ddf160(void) { return *(int*)((char*)this + 0); }

struct C_00ddf1a0 { int sub_00ddf1a0(void); };

// @baa 0x00ddf1a0
int C_00ddf1a0::sub_00ddf1a0(void) { return *(int*)((char*)this + 0); }

struct C_00ddf1e0 { C_00ddf1e0* sub_00ddf1e0(int a0); };

// @baa 0x00ddf1e0
C_00ddf1e0* C_00ddf1e0::sub_00ddf1e0(int a0) { return this; }

struct C_00ddf260 { C_00ddf260* sub_00ddf260(int a0); };

// @baa 0x00ddf260
C_00ddf260* C_00ddf260::sub_00ddf260(int a0) { return this; }

struct C_00ddf270 { int sub_00ddf270(void); };

// @baa 0x00ddf270
int C_00ddf270::sub_00ddf270(void) { return *(int*)((char*)this + 0); }

struct C_00ddf280 { int sub_00ddf280(void); };

// @baa 0x00ddf280
int C_00ddf280::sub_00ddf280(void) { return *(int*)((char*)this + 0); }

struct C_00ddf2c0{
void sub_00ddf2c0(int,int);
};

// @baa 0x00ddf2c0
void C_00ddf2c0::sub_00ddf2c0(int param_2,int param_3)
{
int*param_1=(int*)this;
int iVar1;
int iVar2;
if(param_3<0){
sub_006311e0("Count>=0",
"e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
,0x31a,&g_01e3f3dc);
}
if(param_1[1]<0){
sub_006311e0("ArrayNum>=0",
"e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
,0x31b,&g_01e3f3dc);
}
if(param_1[2]<param_1[1]){
sub_006311e0("ArrayMax>=ArrayNum",
"e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
,0x31c,&g_01e3f3dc);
}
if(param_2<0){
sub_006311e0("Index>=0",
"e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
,0x31d,&g_01e3f3dc);
}
if(param_2>param_1[1]){
sub_006311e0("Index<=ArrayNum",
"e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
,0x31e,&g_01e3f3dc);
}
iVar1=param_1[1];
iVar2=iVar1+param_3;
param_1[1]=iVar2;
if(iVar2>param_1[2]){
iVar2=sub_0053d240(iVar2,param_1[2],4);
param_1[2]=iVar2;
if((*param_1!=0)||(iVar2!=0)){
iVar2=sub_0053df70(*param_1,iVar2*4,8);
*param_1=iVar2;
}
}
sub_0053df30((void*)(*param_1+(param_2+param_3)*4),(void*)(*param_1+param_2*4),
(iVar1-param_2)*4);
return;
}

struct C_00ddf3e0 {
    int sub_00ddf3e0(int);
};

// @baa 0x00ddf3e0
int C_00ddf3e0::sub_00ddf3e0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_00ddf3f0 { int sub_00ddf3f0(void); };

// @baa 0x00ddf3f0
int C_00ddf3f0::sub_00ddf3f0(void) { return *(int*)((char*)this + 0); }

struct C_00ddf400 {
    int sub_00ddf400();
};

// @baa 0x00ddf400
int C_00ddf400::sub_00ddf400(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00ddf410 {
    int sub_00ddf410();
};

// @baa 0x00ddf410
int C_00ddf410::sub_00ddf410(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00ddf420 {
    int sub_00ddf420();
};

// @baa 0x00ddf420
int C_00ddf420::sub_00ddf420(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00ddf430 { int a, b; C_00ddf430(int, int); };

// @baa 0x00ddf430
C_00ddf430::C_00ddf430(int x, int y) : a(x), b(y) {}

struct C_00ddf450 {
    int sub_00ddf450();
};

// @baa 0x00ddf450
int C_00ddf450::sub_00ddf450(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00ddf460 { int a, b; C_00ddf460(int, int); };

// @baa 0x00ddf460
C_00ddf460::C_00ddf460(int x, int y) : a(x), b(y) {}

// @baa 0x00ddf4f0
int sub_00ddf4f0(int a0) { return *(int*)a0; }

// @baa 0x00ddf500
bool sub_00ddf500(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_00ddf510 {
    void sub_00ddf510(undefined4 *);
};

// @baa 0x00ddf510
void C_00ddf510::sub_00ddf510(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_2 = *param_1;
  param_2[1] = (undefined4)(param_1 + 1);
  return;
}

// @baa 0x00ddf530
int sub_00ddf530(int a0) { return *(int*)a0; }

// @baa 0x00ddf540
bool sub_00ddf540(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_00ddf550 {
    void sub_00ddf550(undefined4 *);
};

// @baa 0x00ddf550
void C_00ddf550::sub_00ddf550(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_2 = *param_1;
  param_2[1] = (undefined4)(param_1 + 1);
  return;
}

struct C_00ddf570 {
    void sub_00ddf570();
};

// @baa 0x00ddf570
void C_00ddf570::sub_00ddf570(void)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  iVar1 = param_1[1];
  if (param_1[2] != iVar1) {
    param_1[2] = iVar1;
    if ((*param_1 != 0) || (iVar1 != 0)) {
      iVar1 = sub_0053df70(*param_1,iVar1 * 0x48,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_00ddf5b0 {
    void sub_00ddf5b0();
};

// @baa 0x00ddf5b0
void C_00ddf5b0::sub_00ddf5b0(void)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  iVar1 = param_1[1];
  if (param_1[2] != iVar1) {
    param_1[2] = iVar1;
    if ((*param_1 != 0) || (iVar1 != 0)) {
      iVar1 = sub_0053df70(*param_1,iVar1 * 0x18,8);
      *param_1 = iVar1;
    }
  }
  return;
}

// @baa 0x00ddf5f0
int sub_00ddf5f0(int a0) { return a0; }

struct C_00ddf600 {
    int sub_00ddf600();
};

// @baa 0x00ddf600
int C_00ddf600::sub_00ddf600(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00ddf620 {
    int sub_00ddf620(int);
};

// @baa 0x00ddf620
int C_00ddf620::sub_00ddf620(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_00ddf630 {
    int sub_00ddf630(int);
};

// @baa 0x00ddf630
int C_00ddf630::sub_00ddf630(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_00ddf640 { int sub_00ddf640(void); };

// @baa 0x00ddf640
int C_00ddf640::sub_00ddf640(void) { return *(int*)((char*)this + 20); }

struct C_00ddf650 { int sub_00ddf650(void); };

// @baa 0x00ddf650
int C_00ddf650::sub_00ddf650(void) { return *(int*)((char*)this + 20); }

struct C_00ddf660 {
    int sub_00ddf660();
};

// @baa 0x00ddf660
int C_00ddf660::sub_00ddf660(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00ddf680 { int sub_00ddf680(void); };

// @baa 0x00ddf680
int C_00ddf680::sub_00ddf680(void) { return *(int*)((char*)this + 20); }

struct C_00ddf690 {
    int sub_00ddf690();
};

// @baa 0x00ddf690
int C_00ddf690::sub_00ddf690(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

int sub_005eb8e0(...);
int sub_00da7f00(void);
int sub_00db9f70(...);
extern undefined4 g_026c5cc4;
// @baa 0x00ddf6b0
void sub_00ddf6b0(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
{
  if (g_026c5cc4 == 0) {
    g_026c5cc4 = sub_00db9f70(L"Engine");
    sub_00da7f00();
  }
  sub_005eb8e0(g_026c5cc4,param_1,param_2,param_3,param_4,param_5);
  return;
}

int sub_0062d220(...);
int sub_00dbb960(void);
int sub_00dc5a70(...);
extern undefined4 g_026c5cdc;
// @baa 0x00ddf760
void sub_00ddf760(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
  if (g_026c5cdc == 0) {
    g_026c5cdc = sub_00dc5a70(L"Engine");
    sub_00dbb960();
  }
  sub_0062d220(param_1,param_2,g_026c5cdc,param_3,param_4);
  return;
}

struct C_00ddf7e0 { int sub_00ddf7e0(void); };

// @baa 0x00ddf7e0
int C_00ddf7e0::sub_00ddf7e0(void) { return *(int*)((char*)this + 4); }

struct S_00ddf7f0 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_00ddf7f0(INT Index) const;
};

// @baa 0x00ddf7f0
const DWORD* S_00ddf7f0::sub_00ddf7f0(INT Index) const
{
    return &Items(Index);
}

// @baa 0x00ddf8e0
// @baa 0x00ddf900
IMPLEMENT_CLASS_AT(UUILayerBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUserInterface.cpp", 38);

// @baa 0x00ddf920
// @baa 0x00ddf950
// @baa 0x00ddf970
// @baa 0x00ddf990
// @baa 0x00ddf9b0
// @baa 0x00ddf9d0
// @baa 0x00ddf9f0
// @baa 0x00ddfa10
// @baa 0x00ddfa50
IMPLEMENT_CLASS_AT(UUITickableObjectProxy, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUserInterface.cpp", 186);

// @baa 0x00ddfac0
int UUITickableObjectProxy::sub_00ddfac0(void)
{
    int param_1 = (int)this;

  return param_1 + -0x30;
}

// @baa 0x00ddfad0
struct A_00ddfaf0 { virtual void sub_00ddfad0(); char pad[44]; };

struct B_00ddfaf0 { virtual void sub_00ddfad0(); };

struct C_00ddfaf0 : A_00ddfaf0, B_00ddfaf0 { virtual void sub_00ddfad0(); C_00ddfaf0(); };

C_00ddfaf0::C_00ddfaf0() {}

// @baa 0x00ddfaf0
void C_00ddfaf0::sub_00ddfad0() {}

// @baa 0x00ddfb00
// @baa 0x00ddfbc0
// @baa 0x00ddfc80
// @baa 0x00ddfd40
// @baa 0x00ddfe00
// @baa 0x00ddfec0
// @baa 0x00ddff80
// @baa 0x00de0040
// @baa 0x00de0100
// @baa 0x00de01c0
// @baa 0x00de02c0
undefined4 UUITickableObjectProxy::sub_00de02c0(void)
{
    int param_1 = (int)this;

  if ((*(int *)(param_1 + 4) != 0) && (*(int *)(param_1 + 8) != 0)) {
    return 1;
  }
  return 0;
}

struct C_00de0a10 {
    void sub_00de0a10(int);
};

// @baa 0x00de0a10
void C_00de0a10::sub_00de0a10(int param_2)
{
    int * param_1 = (int *)this;
  *param_1 = param_2;
  if (param_2 != 0) {
    param_1[1] = param_2;
  }
  return;
}

struct T_00de0a50 { BYTE b[4]; };

// @baa 0x00de0a50
template T_00de0a50& TArray<T_00de0a50>::Last(INT);

struct T_00de0ab0 { BYTE b[4]; };

// @baa 0x00de0ab0
template T_00de0ab0& TArray<T_00de0ab0>::Last(INT);

struct C_00de0b10 {
    int sub_00de0b10(int);
    int sub_006e0e60(int);
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x00de0b10
int C_00de0b10::sub_00de0b10(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_00de0b10 *)(this))->sub_006e0e60(param_2);
  sub_01a37612((void *)(iVar1 * 0x10 + *param_1),0,param_2 << 4);
  return iVar1;
}

struct E { BYTE Bytes[12]; };

struct S_00de0b40 {
    TArray<E> Items; // 0x00
    const E* sub_00de0b40(INT Index) const;
};

// @baa 0x00de0b40
const E* S_00de0b40::sub_00de0b40(INT Index) const
{
    return &Items(Index);
}

struct E_00de0b90 { BYTE Bytes[20]; };

struct S_00de0b90 {
    TArray<E_00de0b90> Items; // 0x00
    const E_00de0b90* sub_00de0b90(INT Index) const;
};

// @baa 0x00de0b90
const E_00de0b90* S_00de0b90::sub_00de0b90(INT Index) const
{
    return &Items(Index);
}

struct S_00de0c90 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00de0c90(INT Index);
};

// @baa 0x00de0c90
DWORD* S_00de0c90::sub_00de0c90(INT Index)
{
    return &Items(Index);
}

struct S_00de0ce0 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_00de0ce0(INT Index) const;
};

// @baa 0x00de0ce0
const DWORD* S_00de0ce0::sub_00de0ce0(INT Index) const
{
    return &Items(Index);
}

struct T_00de0d30 { BYTE b[4]; };

// @baa 0x00de0d30
template T_00de0d30& TArray<T_00de0d30>::Last(INT);

struct C_00de0de0 {
    int sub_00de0de0(undefined4 *, int);
    int sub_00ddf2c0(int, int);
};

// @baa 0x00de0de0
int C_00de0de0::sub_00de0de0(undefined4 * param_2, int param_3)
{
    int * param_1 = (int *)this;
  undefined4 *puVar1;
  ((C_00de0de0 *)(this))->sub_00ddf2c0(param_3, 1);
  puVar1 = (undefined4 *)(*param_1 + param_3 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_2;
  }
  return param_3;
}

// @baa 0x00de0e40
void __stdcall sub_00de0e40(int a, int b)
{
    (void)a;
    (void)b;
}

struct C_00de0e50 { int sub_00de0e50(void); };

// @baa 0x00de0e50
int C_00de0e50::sub_00de0e50(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00de0e90 { int sub_00de0e90(void); };

// @baa 0x00de0e90
int C_00de0e90::sub_00de0e90(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00de0ea0 { int sub_00de0ea0(void); };

// @baa 0x00de0ea0
int C_00de0ea0::sub_00de0ea0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

int sub_005413d0(...);
// @baa 0x00de0eb0
void sub_00de0eb0(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_00de0ec0 {
    int sub_00de0ec0(int);
};

// @baa 0x00de0ec0
int C_00de0ec0::sub_00de0ec0(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + param_2 * 0x18;
}

struct C_00de0f00 {
    int sub_00de0f00(int);
};

// @baa 0x00de0f00
int C_00de0f00::sub_00de0f00(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_00de0f10 {
    int sub_00de0f10(int);
};

// @baa 0x00de0f10
int C_00de0f10::sub_00de0f10(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_00de0f20 {
    int sub_00de0f20();
};

// @baa 0x00de0f20
int C_00de0f20::sub_00de0f20(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_00de0f30 {
    int sub_00de0f30();
};

// @baa 0x00de0f30
int C_00de0f30::sub_00de0f30(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_00de0f40 { int sub_00de0f40(void); };

// @baa 0x00de0f40
int C_00de0f40::sub_00de0f40(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00de10a0 {
    void sub_00de10a0(undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4);
};

// @baa 0x00de10a0
void C_00de10a0::sub_00de10a0(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9, undefined4 param_10, undefined4 param_11, undefined4 param_12, undefined4 param_13, undefined4 param_14, undefined4 param_15, undefined4 param_16)
{
    undefined4 param_1 = (undefined4)this;

  sub_00630f20(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11,param_12,param_13,param_14,param_15,param_16);
  return;
}

// @baa 0x00de1510
// @baa 0x00de1540
// @baa 0x00de1690
// @baa 0x00de17a0
bool UUITexture::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00de17e0
// @baa 0x00de18f0
bool UUIState::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00de1930
// @baa 0x00de1a40
bool UUILayerBase::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00de1b80
// @baa 0x00de1c40
// @baa 0x00de1d50
bool UUITickableObjectProxy::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_00de3ac0 { void* Data; int Num; int Max; void sub_00de3ac0(); };

// @baa 0x00de3ac0
void C_00de3ac0::sub_00de3ac0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00de3b60 { int sub_00de3b60(void); };

// @baa 0x00de3b60
int C_00de3b60::sub_00de3b60(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct M_00de3b70 { void sub_0054eec0(); };

struct C_00de3b70 { char pad[4]; M_00de3b70 m; void sub_00de3b70(); };

// @baa 0x00de3b70
void C_00de3b70::sub_00de3b70() { m.sub_0054eec0(); }

// @baa 0x00de3d90
int UGameUISceneClient::sub_00de3d90(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct M_00de3da0 { void sub_0054eec0(); };

struct C_00de3da0 { char pad[4]; M_00de3da0 m; void sub_00de3da0(); };

// @baa 0x00de3da0
void C_00de3da0::sub_00de3da0() { m.sub_0054eec0(); }

// @baa 0x00de3db0
int UGameUISceneClient::sub_00de3db0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

// @baa 0x00de3dc0
int UGameUISceneClient::sub_00de3dc0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x48;
}

struct C_view_00de3f50 {
    int sub_00d7c940();
};

// @baa 0x00de3f50
undefined4 UGameUISceneClient::sub_00de3f50(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_00de3f50 *)(((char *)this + 4)))->sub_00d7c940();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_view_00de3f80 {
    int sub_0054eec0();
};

// @baa 0x00de3f80
undefined4 UGameUISceneClient::sub_00de3f80(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_00de3f80 *)(((char *)this + 4)))->sub_0054eec0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00de4110
// @baa 0x00de4220
bool UUIState_Enabled::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00de4260
// @baa 0x00de4370
bool UUIState_Disabled::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00de43b0
// @baa 0x00de44c0
bool UUIState_Active::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00de4500
// @baa 0x00de4610
bool UUIState_Focused::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00de4650
// @baa 0x00de4760
bool UUIState_Pressed::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_00de6120 { C_00de6120* sub_00de6120(void); };

// @baa 0x00de6120
C_00de6120* C_00de6120::sub_00de6120(void) { return this; }

// @baa 0x00de6190
int UGameUISceneClient::sub_00de6190(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

extern TArray<int> g_026a1ca4;
struct C_00de61a0 {
    int sub_00de61a0();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x00de61a0
int C_00de61a0::sub_00de61a0()
{
    return g_026a1ca4(Index);
}

// @baa 0x00de6200
int UGameUISceneClient::sub_00de6200(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

// @baa 0x00de6220
int UGameUISceneClient::sub_00de6220(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x48;
}

// @baa 0x00de6230
int UGameUISceneClient::sub_00de6230(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_view_00de6240 {
    int sub_00de3bf0(int, int);
};

// @baa 0x00de6240
int UGameUISceneClient::sub_00de6240(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_00de6240 *)(this))->sub_00de3bf0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x18;
  }
  return 0;
}

// @baa 0x00de6270
int UGameUISceneClient::sub_00de6270(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_view_00de6280 {
    int sub_00de3cd0(int, int);
};

// @baa 0x00de6280
int UGameUISceneClient::sub_00de6280(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_00de6280 *)(this))->sub_00de3cd0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x18;
  }
  return 0;
}

// @baa 0x00de62b0
int UGameUISceneClient::sub_00de62b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[2] * 0x1c;
}

// @baa 0x00de6360
int UGameUISceneClient::sub_00de6360(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

// @baa 0x00de6380
int UGameUISceneClient::sub_00de6380(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x48;
}

// @baa 0x00de6390
int UGameUISceneClient::sub_00de6390(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

// @baa 0x00de63a0
int UGameUISceneClient::sub_00de63a0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_view_00de63b0 {
    int sub_0054eec0();
};

// @baa 0x00de63b0
undefined4 UGameUISceneClient::sub_00de63b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_00de63b0 *)(((char *)this + 4)))->sub_0054eec0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct TConstSetBitIterator_00de69c0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00de69c0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00de69c0& operator++();
};

TConstSetBitIterator_00de69c0::TConstSetBitIterator_00de69c0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00de69c0
TConstSetBitIterator_00de69c0& TConstSetBitIterator_00de69c0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00de69e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00de69e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00de69e0& operator++();
};

TConstSetBitIterator_00de69e0::TConstSetBitIterator_00de69e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00de69e0
TConstSetBitIterator_00de69e0& TConstSetBitIterator_00de69e0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00de6a30 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00de6a30(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00de6a30& operator++();
};

TConstSetBitIterator_00de6a30::TConstSetBitIterator_00de6a30(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00de6a30
TConstSetBitIterator_00de6a30& TConstSetBitIterator_00de6a30::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00de6a50 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00de6a50(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00de6a50& operator++();
};

TConstSetBitIterator_00de6a50::TConstSetBitIterator_00de6a50(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00de6a50
TConstSetBitIterator_00de6a50& TConstSetBitIterator_00de6a50::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00de6a70 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00de6a70(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00de6a70& operator++();
};

TConstSetBitIterator_00de6a70::TConstSetBitIterator_00de6a70(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00de6a70
TConstSetBitIterator_00de6a70& TConstSetBitIterator_00de6a70::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00de6ac0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00de6ac0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00de6ac0& operator++();
};

TConstSetBitIterator_00de6ac0::TConstSetBitIterator_00de6ac0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00de6ac0
TConstSetBitIterator_00de6ac0& TConstSetBitIterator_00de6ac0::operator++()
{
    It.Advance();
    return *this;
}

// @baa 0x00de6b10
int UGameUISceneClient::sub_00de6b10(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x1c;
}

int sub_00ddfd40(...);
int sub_00de17e0(void);
extern undefined4 g_026c5df0;
// @baa 0x00de6b30
void sub_00de6b30(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
{
  if (g_026c5df0 == 0) {
    g_026c5df0 = sub_00ddfd40(L"Engine");
    sub_00de17e0();
  }
  sub_005eb8e0(g_026c5df0,param_1,param_2,param_3,param_4,param_5);
  return;
}

struct C_view_00de6b80 {
    int sub_00de66e0(int);
};

// @baa 0x00de6b80
undefined4 * UGameUISceneClient::sub_00de6b80(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_view_00de6b80 *)(((char *)this + 4)))->sub_00de66e0((int)(param_2 + 1));
  return param_1;
}

struct C_view_00de6ba0 {
    int sub_00555160(int);
};

// @baa 0x00de6ba0
undefined4 * UGameUISceneClient::sub_00de6ba0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_view_00de6ba0 *)(((char *)this + 4)))->sub_00555160((int)(param_2 + 1));
  return param_1;
}

struct C_view_00de7110 {
    int sub_00de3bf0(int, int);
};

// @baa 0x00de7110
int UGameUISceneClient::sub_00de7110(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_view_00de7110 *)(this))->sub_00de3bf0((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x18, iVar1 != 0)) {
    return iVar1 + 4;
  }
  return 0;
}

struct C_view_00de7150 {
    int sub_00de3cd0(int, int);
};

// @baa 0x00de7150
int UGameUISceneClient::sub_00de7150(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_view_00de7150 *)(this))->sub_00de3cd0((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x18, iVar1 != 0)) {
    return iVar1 + 4;
  }
  return 0;
}

struct C_view_00de7760 {
    int sub_00de66e0(int);
};

// @baa 0x00de7760
undefined4 * UGameUISceneClient::sub_00de7760(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_view_00de7760 *)(((char *)this + 4)))->sub_00de66e0(param_2[1]);
  return param_1;
}

struct C_00de7970 {
    undefined4 * sub_00de7970(undefined4 *);
    int sub_00de66e0(int);
};

// @baa 0x00de7970
undefined4 * C_00de7970::sub_00de7970(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_00de7970 *)(((char *)this + 4)))->sub_00de66e0(param_2[1]);
  param_1[4] = 0xffffffff;
  return param_1;
}

struct C_view_00de7a20 {
    int sub_00555160(int);
};

// @baa 0x00de7a20
undefined4 * UGameUISceneClient::sub_00de7a20(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_view_00de7a20 *)(((char *)this + 4)))->sub_00555160(param_2[1]);
  return param_1;
}

struct C_view_00de7b30 {
    int sub_00555160(int);
};

// @baa 0x00de7b30
undefined4 * UGameUISceneClient::sub_00de7b30(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_view_00de7b30 *)(((char *)this + 4)))->sub_00555160(param_2[1]);
  param_1[4] = 0xffffffff;
  return param_1;
}

struct TConstSetBitIterator_00de7b60 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00de7b60(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00de7b60& operator++();
};

TConstSetBitIterator_00de7b60::TConstSetBitIterator_00de7b60(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00de7b60
TConstSetBitIterator_00de7b60& TConstSetBitIterator_00de7b60::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00de7d30 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00de7d30(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00de7d30& operator++();
};

TConstSetBitIterator_00de7d30::TConstSetBitIterator_00de7d30(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00de7d30
TConstSetBitIterator_00de7d30& TConstSetBitIterator_00de7d30::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00de7d80 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00de7d80(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00de7d80& operator++();
};

TConstSetBitIterator_00de7d80::TConstSetBitIterator_00de7d80(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00de7d80
TConstSetBitIterator_00de7d80& TConstSetBitIterator_00de7d80::operator++()
{
    It.Advance();
    return *this;
}

struct C_view_00de98f0 {
    int sub_008cda10(int);
};

// @baa 0x00de98f0
undefined4 * UGameUISceneClient::sub_00de98f0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  ((C_view_00de98f0 *)(((char *)this + 0xc)))->sub_008cda10((int)(param_2 + 3));
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  return param_1;
}

struct C_view_00de9930 {
    int sub_00de7360(int);
};

// @baa 0x00de9930
void UGameUISceneClient::sub_00de9930(void)
{
    int param_1 = (int)this;
  ((C_view_00de9930 *)((*(char **)((char *)this + 0x10))))->sub_00de7360(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_view_00de9950 {
    int sub_00de76e0(int);
};

// @baa 0x00de9950
void UGameUISceneClient::sub_00de9950(void)
{
    int param_1 = (int)this;
  ((C_view_00de9950 *)((*(char **)((char *)this + 0x10))))->sub_00de76e0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_view_00de9970 {
    int sub_00de79a0(int);
};

// @baa 0x00de9970
void UGameUISceneClient::sub_00de9970(void)
{
    int param_1 = (int)this;
  ((C_view_00de9970 *)((*(char **)((char *)this + 0x10))))->sub_00de79a0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

int sub_00de7bb0(void);
// @baa 0x00dec730
int UGameUISceneClient::sub_00dec730(void)
{
    int param_1 = (int)this;

  sub_00de7bb0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_00de7c70(void);
// @baa 0x00dec750
int UGameUISceneClient::sub_00dec750(void)
{
    int param_1 = (int)this;

  sub_00de7c70();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_00de7cd0(void);
// @baa 0x00dec770
int UGameUISceneClient::sub_00dec770(void)
{
    int param_1 = (int)this;

  sub_00de7cd0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_view_00decba0 {
    int sub_00dec540(int, int);
};

// @baa 0x00decba0
int UGameUISceneClient::sub_00decba0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_00decba0 *)(this))->sub_00dec540(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_00decbc0 {
    int sub_00dec5c0(int, int);
};

// @baa 0x00decbc0
int UGameUISceneClient::sub_00decbc0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_00decbc0 *)(this))->sub_00dec5c0(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_00decbe0 {
    int sub_00dec640(int, int);
};

// @baa 0x00decbe0
int UGameUISceneClient::sub_00decbe0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_00decbe0 *)(this))->sub_00dec640(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_00decc00 {
    int sub_00dec6c0(int, int);
};

// @baa 0x00decc00
int UGameUISceneClient::sub_00decc00(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_00decc00 *)(this))->sub_00dec6c0(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

// @baa 0x00decc20
int UGameUISceneClient::sub_00decc20(void)
{
    int param_1 = (int)this;

  sub_00de7bb0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_view_00decc40 {
    int sub_00dec300(int, int);
};

// @baa 0x00decc40
void UGameUISceneClient::sub_00decc40(void)
{
    int param_1 = (int)this;
  ((C_view_00decc40 *)(this))->sub_00dec300(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

// @baa 0x00decc50
int UGameUISceneClient::sub_00decc50(void)
{
    int param_1 = (int)this;

  sub_00de7c70();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_view_00decc70 {
    int sub_00dec3c0(int, int);
};

// @baa 0x00decc70
void UGameUISceneClient::sub_00decc70(void)
{
    int param_1 = (int)this;
  ((C_view_00decc70 *)(this))->sub_00dec3c0(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

// @baa 0x00decc80
int UGameUISceneClient::sub_00decc80(void)
{
    int param_1 = (int)this;

  sub_00de7cd0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_00dec7f0();
// @baa 0x00decd80
void sub_00decd80(void) { sub_00dec7f0(); }

void sub_00dec900();
// @baa 0x00ded320
void sub_00ded320(void) { sub_00dec900(); }

// @baa 0x00ded3b0
int UGameUISceneClient::sub_00ded3b0(void)
{
    int param_1 = (int)this;

  sub_00de7bb0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_view_00ded3d0 {
    int sub_00de75e0();
    int sub_00dec300(int, int);
};

// @baa 0x00ded3d0
void UGameUISceneClient::sub_00ded3d0(void)
{
    int param_1 = (int)this;
  ((C_view_00ded3d0 *)(this))->sub_00de75e0();
  ((C_view_00ded3d0 *)(this))->sub_00dec300(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

// @baa 0x00ded3f0
int UGameUISceneClient::sub_00ded3f0(void)
{
    int param_1 = (int)this;

  sub_00de7c70();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_view_00ded410 {
    int sub_00de7870();
    int sub_00dec3c0(int, int);
};

// @baa 0x00ded410
void UGameUISceneClient::sub_00ded410(void)
{
    int param_1 = (int)this;
  ((C_view_00ded410 *)(this))->sub_00de7870();
  ((C_view_00ded410 *)(this))->sub_00dec3c0(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

// @baa 0x00ded430
int UGameUISceneClient::sub_00ded430(void)
{
    int param_1 = (int)this;

  sub_00de7cd0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00ded4b0
void sub_00ded4b0(void) { sub_00dec7f0(); }

// @baa 0x00ded6b0
int UGameUISceneClient::sub_00ded6b0(void)
{
    int param_1 = (int)this;

  sub_00de7bb0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_view_00ded6d0 {
    int sub_00de75e0();
    int sub_00dec300(int, int);
};

// @baa 0x00ded6d0
void UGameUISceneClient::sub_00ded6d0(void)
{
    int param_1 = (int)this;
  ((C_view_00ded6d0 *)(this))->sub_00de75e0();
  ((C_view_00ded6d0 *)(this))->sub_00dec300(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

// @baa 0x00ded6f0
int UGameUISceneClient::sub_00ded6f0(void)
{
    int param_1 = (int)this;

  sub_00de7c70();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_view_00ded710 {
    int sub_00de7870();
    int sub_00dec3c0(int, int);
};

// @baa 0x00ded710
void UGameUISceneClient::sub_00ded710(void)
{
    int param_1 = (int)this;
  ((C_view_00ded710 *)(this))->sub_00de7870();
  ((C_view_00ded710 *)(this))->sub_00dec3c0(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

// @baa 0x00ded730
int UGameUISceneClient::sub_00ded730(void)
{
    int param_1 = (int)this;

  sub_00de7cd0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00ded750 { void sub_00ded450(int); C_00ded750 *sub_00ded750(int); };

// @baa 0x00ded750
C_00ded750 *C_00ded750::sub_00ded750(int a) { sub_00ded450(a); return this; }

// @baa 0x00ded770
void sub_00ded770(void) { sub_00dec7f0(); }

struct C_00dee530 { void sub_00ded450(int); C_00dee530 *sub_00dee530(int); };

// @baa 0x00dee530
C_00dee530 *C_00dee530::sub_00dee530(int a) { sub_00ded450(a); return this; }

struct C_view_00dee550 {
    int sub_00d864f0();
};

// @baa 0x00dee550
undefined4 UGameUISceneClient::sub_00dee550(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_00dee550 *)(((char *)this + 4)))->sub_00d864f0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00dee580
int UGameUISceneClient::sub_00dee580(void)
{
    int param_1 = (int)this;

  sub_00de7bb0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00dee630
IMPLEMENT_CLASS_AT(UGameUISceneClient, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUserInterface.cpp", 25);

int sub_005c7a70(...);
int sub_00dee5a0(void);
// @baa 0x00dee640
undefined4 UGameUISceneClient::sub_00dee640(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00dee5a0();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x160);
  }
  return param_1;
}

// @baa 0x00dee670
struct C_00dee730 { C_00dee730* sub_00dee730(void); };

// @baa 0x00dee730
C_00dee730* C_00dee730::sub_00dee730(void) { return this; }

struct C_00dee740 { void sub_00ded450(int); C_00dee740 *sub_00dee740(int); };

// @baa 0x00dee740
C_00dee740 *C_00dee740::sub_00dee740(int a) { sub_00ded450(a); return this; }

struct C_00deea90 { void sub_00ded450(int); C_00deea90 *sub_00deea90(int); };

// @baa 0x00deea90
C_00deea90 *C_00deea90::sub_00deea90(int a) { sub_00ded450(a); return this; }

struct C_view_00deeab0 {
    int sub_00ded450(int);
};

// @baa 0x00deeab0
undefined4 * UGameUISceneClient::sub_00deeab0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_view_00deeab0 *)(((char *)this + 4)))->sub_00ded450((int)(param_2 + 1));
  return param_1;
}

struct C_view_00deec60 {
    int sub_00deea10(int);
};

// @baa 0x00deec60
void UGameUISceneClient::sub_00deec60(void)
{
    int param_1 = (int)this;
  ((C_view_00deec60 *)((*(char **)((char *)this + 0x10))))->sub_00deea10(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_view_00deec80 {
    int sub_00ded450(int);
};

// @baa 0x00deec80
undefined4 * UGameUISceneClient::sub_00deec80(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_view_00deec80 *)(((char *)this + 4)))->sub_00ded450(param_2[1]);
  return param_1;
}

struct C_view_00deeca0 {
    int sub_00ded450(int);
};

// @baa 0x00deeca0
undefined4 * UGameUISceneClient::sub_00deeca0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_view_00deeca0 *)(((char *)this + 4)))->sub_00ded450(param_2[1]);
  param_1[0x10] = 0xffffffff;
  return param_1;
}

int sub_00de7c10(void);
// @baa 0x00deecd0
int UGameUISceneClient::sub_00deecd0(void)
{
    int param_1 = (int)this;

  sub_00de7c10();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_00deec00();
// @baa 0x00deed60
void sub_00deed60(void) { sub_00deec00(); }

// @baa 0x00deee90
int UGameUISceneClient::sub_00deee90(void)
{
    int param_1 = (int)this;

  sub_00de7c10();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00deeef0
int UGameUISceneClient::sub_00deeef0(void)
{
    int param_1 = (int)this;

  sub_00de7c10();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00def5e0
int UGameUISceneClient::sub_00def5e0(void)
{
    int param_1 = (int)this;

  sub_00de7c10();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_view_00e66d70 {
    int sub_0057f8b0(int, int);
};

// @baa 0x00e66d70
void UGameUISceneClient::sub_00e66d70(void)
{
    int param_1 = (int)this;
  ((C_view_00e66d70 *)(this))->sub_0057f8b0(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_view_0111f080 {
    int sub_00d20b10(int, int);
};

// @baa 0x0111f080
int UGameUISceneClient::sub_0111f080(undefined4 * param_2, int param_3)
{
    int * param_1 = (int *)this;
  undefined4 *puVar1;
  ((C_view_0111f080 *)(this))->sub_00d20b10(param_3, 1);
  puVar1 = (undefined4 *)(*param_1 + param_3 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_2;
  }
  return param_3;
}

struct C_view_013b6f30 {
    int sub_00d7c6a0(int, int);
};

// @baa 0x013b6f30
int UGameUISceneClient::sub_013b6f30(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_013b6f30 *)(this))->sub_00d7c6a0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}
