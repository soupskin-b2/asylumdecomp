// Engine_0710000.cpp (part 1 of 7): 420 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C_view {
    int sub_00710100(int);
};

int sub_0053df70(...);
// @baa 0x00710b90
void UObject::sub_00710b90(void)
{
    int * param_1 = (int *)this;
  int iVar1;
  param_1[1] = 0;
  if (param_1[2] != 0) {
    param_1[2] = 0;
    if (*param_1 != 0) {
      iVar1 = sub_0053df70(*param_1,0,8);
      *param_1 = iVar1;
    }
  }
  ((C_view *)(((char *)this + 0xc)))->sub_00710100(0);
  return;
}

struct C_view_00710dd0 {
    int sub_007102b0(int);
};

// @baa 0x00710dd0
void UObject::sub_00710dd0(void)
{
    int * param_1 = (int *)this;
  int iVar1;
  param_1[1] = 0;
  if (param_1[2] != 0) {
    param_1[2] = 0;
    if (*param_1 != 0) {
      iVar1 = sub_0053df70(*param_1,0,8);
      *param_1 = iVar1;
    }
  }
  ((C_view_00710dd0 *)(((char *)this + 0xc)))->sub_007102b0(0);
  return;
}

struct C {
    void sub_00711010();
    int sub_00710460(int);
};

// @baa 0x00711010
void C::sub_00711010(void)
{
    int * param_1 = (int *)this;
  int iVar1;
  param_1[1] = 0;
  if (param_1[2] != 0) {
    param_1[2] = 0;
    if (*param_1 != 0) {
      iVar1 = sub_0053df70(*param_1,0,8);
      *param_1 = iVar1;
    }
  }
  ((C *)(((char *)this + 0xc)))->sub_00710460(0);
  return;
}

int sub_0053dfa0(...);
int sub_006d2a30(void);
// @baa 0x007116b0
undefined4 UMaterialInstanceConstant::sub_007116b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_006d2a30();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct A_00711880 { virtual void sub_00711940(); };

struct B_00711880 { virtual void sub_00711940(); };

struct C_00711880 : A_00711880, B_00711880 { virtual void sub_00711940(); C_00711880(); };

C_00711880::C_00711880() {}

// @baa 0x00711880
void C_00711880::sub_00711940() {}

struct C_00711940 {
    undefined4 sub_00711940(byte);
};

int sub_00711890(void);
// @baa 0x00711940
undefined4 C_00711940::sub_00711940(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00711890();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_005c7a70(...);
int sub_00711a20(void);
// @baa 0x00711ac0
undefined4 UMaterialInstanceTimeVarying::sub_00711ac0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00711a20();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0xa8);
  }
  return param_1;
}

struct C_00712360 {
    void sub_00712360();
};

int sub_00b01b80(...);
// @baa 0x00712360
void C_00712360::sub_00712360(void)
{
    int param_1 = (int)this;

  sub_00b01b80(*(undefined1 *)(param_1 + 0xf7),param_1 + 0x154,param_1 + 0x178,param_1 + 0x19c);
  return;
}

struct C_00712390 {
    void sub_00712390();
};

// @baa 0x00712390
void C_00712390::sub_00712390(void)
{
    int param_1 = (int)this;

  sub_00b01b80(*(undefined1 *)(param_1 + 0xf7),param_1 + 0x1c0,param_1 + 0x1e4,param_1 + 0x208);
  return;
}

struct C_007123c0 { int sub_007123c0(void); };

// @baa 0x007123c0
int C_007123c0::sub_007123c0(void) { return *(int*)((char*)this + 0); }

struct C_007123d0 { int sub_007123d0(void); };

// @baa 0x007123d0
int C_007123d0::sub_007123d0(void) { return *(int*)((char*)this + 0); }

struct C_007123e0 { int sub_007123e0(void); };

// @baa 0x007123e0
int C_007123e0::sub_007123e0(void) { return *(int*)((char*)this + 0); }

struct C_007123f0 { int sub_007123f0(void); };

// @baa 0x007123f0
int C_007123f0::sub_007123f0(void) { return *(int*)((char*)this + 0); }

struct C_00712400 { int sub_00712400(void); };

// @baa 0x00712400
int C_00712400::sub_00712400(void) { return *(int*)((char*)this + 0); }

struct C_00712410 { int sub_00712410(void); };

// @baa 0x00712410
int C_00712410::sub_00712410(void) { return *(int*)((char*)this + 0); }

struct C_00712420 { int sub_00712420(void); };

// @baa 0x00712420
int C_00712420::sub_00712420(void) { return *(int*)((char*)this + 0); }

struct C_00712430 { int sub_00712430(void); };

// @baa 0x00712430
int C_00712430::sub_00712430(void) { return *(int*)((char*)this + 0); }

struct C_00712440 { int sub_00712440(void); };

// @baa 0x00712440
int C_00712440::sub_00712440(void) { return *(int*)((char*)this + 0); }

struct C_00712450 { int sub_00712450(void); };

// @baa 0x00712450
int C_00712450::sub_00712450(void) { return *(int*)((char*)this + 0); }

struct C_00712460 { int sub_00712460(void); };

// @baa 0x00712460
int C_00712460::sub_00712460(void) { return *(int*)((char*)this + 0); }

struct C_00712470 { int sub_00712470(void); };

// @baa 0x00712470
int C_00712470::sub_00712470(void) { return *(int*)((char*)this + 0); }

struct C_00712480 { int sub_00712480(void); };

// @baa 0x00712480
int C_00712480::sub_00712480(void) { return *(int*)((char*)this + 0); }

struct C_00712490 { int sub_00712490(void); };

// @baa 0x00712490
int C_00712490::sub_00712490(void) { return *(int*)((char*)this + 0); }

struct C_007124a0 { int sub_007124a0(void); };

// @baa 0x007124a0
int C_007124a0::sub_007124a0(void) { return *(int*)((char*)this + 0); }

struct C_007124b0 { int sub_007124b0(void); };

// @baa 0x007124b0
int C_007124b0::sub_007124b0(void) { return *(int*)((char*)this + 0); }

struct S_00712a60 { int sub_007124c0(); };

struct C_00712a60 { int a; C_00712a60(S_00712a60 *); };

// @baa 0x00712a60
C_00712a60::C_00712a60(S_00712a60 *s) : a(s->sub_007124c0()) {}

struct S_00712a80 { int sub_00712520(); };

struct C_00712a80 { int a; C_00712a80(S_00712a80 *); };

// @baa 0x00712a80
C_00712a80::C_00712a80(S_00712a80 *s) : a(s->sub_00712520()) {}

struct S_00712aa0 { int sub_00712580(); };

struct C_00712aa0 { int a; C_00712aa0(S_00712aa0 *); };

// @baa 0x00712aa0
C_00712aa0::C_00712aa0(S_00712aa0 *s) : a(s->sub_00712580()) {}

struct S_00712ac0 { int sub_007125e0(); };

struct C_00712ac0 { int a; C_00712ac0(S_00712ac0 *); };

// @baa 0x00712ac0
C_00712ac0::C_00712ac0(S_00712ac0 *s) : a(s->sub_007125e0()) {}

struct S_00712ae0 { int sub_00712640(); };

struct C_00712ae0 { int a; C_00712ae0(S_00712ae0 *); };

// @baa 0x00712ae0
C_00712ae0::C_00712ae0(S_00712ae0 *s) : a(s->sub_00712640()) {}

struct S_00712b00 { int sub_007126a0(); };

struct C_00712b00 { int a; C_00712b00(S_00712b00 *); };

// @baa 0x00712b00
C_00712b00::C_00712b00(S_00712b00 *s) : a(s->sub_007126a0()) {}

struct S_00712b20 { int sub_00712700(); };

struct C_00712b20 { int a; C_00712b20(S_00712b20 *); };

// @baa 0x00712b20
C_00712b20::C_00712b20(S_00712b20 *s) : a(s->sub_00712700()) {}

struct S_00712b40 { int sub_00712760(); };

struct C_00712b40 { int a; C_00712b40(S_00712b40 *); };

// @baa 0x00712b40
C_00712b40::C_00712b40(S_00712b40 *s) : a(s->sub_00712760()) {}

struct S_00712b60 { int sub_007127c0(); };

struct C_00712b60 { int a; C_00712b60(S_00712b60 *); };

// @baa 0x00712b60
C_00712b60::C_00712b60(S_00712b60 *s) : a(s->sub_007127c0()) {}

struct S_00712b80 { int sub_00712820(); };

struct C_00712b80 { int a; C_00712b80(S_00712b80 *); };

// @baa 0x00712b80
C_00712b80::C_00712b80(S_00712b80 *s) : a(s->sub_00712820()) {}

struct S_00712ba0 { int sub_00712880(); };

struct C_00712ba0 { int a; C_00712ba0(S_00712ba0 *); };

// @baa 0x00712ba0
C_00712ba0::C_00712ba0(S_00712ba0 *s) : a(s->sub_00712880()) {}

struct S_00712bc0 { int sub_007128e0(); };

struct C_00712bc0 { int a; C_00712bc0(S_00712bc0 *); };

// @baa 0x00712bc0
C_00712bc0::C_00712bc0(S_00712bc0 *s) : a(s->sub_007128e0()) {}

struct S_00712be0 { int sub_00712940(); };

struct C_00712be0 { int a; C_00712be0(S_00712be0 *); };

// @baa 0x00712be0
C_00712be0::C_00712be0(S_00712be0 *s) : a(s->sub_00712940()) {}

struct S_00712c00 { int sub_007129a0(); };

struct C_00712c00 { int a; C_00712c00(S_00712c00 *); };

// @baa 0x00712c00
C_00712c00::C_00712c00(S_00712c00 *s) : a(s->sub_007129a0()) {}

struct S_00712c20 { int sub_00712a00(); };

struct C_00712c20 { int a; C_00712c20(S_00712c20 *); };

// @baa 0x00712c20
C_00712c20::C_00712c20(S_00712c20 *s) : a(s->sub_00712a00()) {}

struct C_00712fd0 {
    undefined4 sub_00712fd0(byte);
};

int sub_00712f60(void);
// @baa 0x00712fd0
undefined4 C_00712fd0::sub_00712fd0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00712f60();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00713480 {
    undefined4 sub_00713480(byte);
};

int sub_00a55bf0(void);
// @baa 0x00713480
undefined4 C_00713480::sub_00713480(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00a55bf0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_006d8c20(void);
int sub_007130b0(...);
extern undefined4 g_026b1294;
// @baa 0x007134a0
int sub_007134a0(void)
{
  if (g_026b1294 == 0) {
    g_026b1294 = sub_007130b0(L"Engine");
    sub_006d8c20();
  }
  return g_026b1294;
}

// @baa 0x00715240
void sub_00715240(void) {  }

// @baa 0x00715250
void sub_00715250(void) {  }

extern char g_01eee2b0[];
struct C_00715260 { void sub_00715260(void); };

// @baa 0x00715260
void C_00715260::sub_00715260(void) { *(int*)((char*)this + 0) = (int)g_01eee2b0; }

struct C_00715270 {
    undefined4 * sub_00715270(byte);
};

// @baa 0x00715270
undefined4 * C_00715270::sub_00715270(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01eee2b0);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00715320 {
    undefined4 sub_00715320();
};

// @baa 0x00715320
undefined4 C_00715320::sub_00715320(void)
{
    int * param_1 = (int *)this;

  if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
    return *(undefined4 *)*param_1;
  }
  return 0;
}

struct C_00715390 {
    void sub_00715390();
};

// @baa 0x00715390
void C_00715390::sub_00715390(void)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x10) = 1;
  return;
}

// @baa 0x007153a0
float10 sub_007153a0(void)
{
  return (float10)0;
}

// @baa 0x007153b0
void __stdcall sub_007153b0(int a0, int a1, int a2) {  }

struct C_007153c0 {
    void sub_007153c0(undefined4);
};

int sub_006311e0(...);
extern undefined2 g_01e3f3dc;
// @baa 0x007153c0
void C_007153c0::sub_007153c0(undefined4 param_2)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x40) != -1) {
    sub_006311e0("PushedThread==NoThread","Core/Inc\\Core.h",0x886,&g_01e3f3dc);
    *(undefined4 *)(param_1 + 0x3c) = param_2;
    return;
  }
  *(undefined4 *)(param_1 + 0x3c) = param_2;
  return;
}

struct C_00715400 { C_00715400* sub_00715400(void); };

// @baa 0x00715400
C_00715400* C_00715400::sub_00715400(void) { *(int*)((char*)this + 8) = 0; return this; }

// @baa 0x00715470
void sub_00715470(void) {  }

struct C_00715480 {
    uint sub_00715480();
};

// @baa 0x00715480
uint C_00715480::sub_00715480(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x10) & 1;
}

// @baa 0x00715490
undefined4 sub_00715490(int * param_1)
{
  if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
    return *(undefined4 *)*param_1;
  }
  return 0;
}

struct C_007154a0 {
    int sub_007154a0();
};

// @baa 0x007154a0
int C_007154a0::sub_007154a0(void)
{
    int param_1 = (int)this;
  return param_1 + 0x18;
}

struct C_007154b0 { int sub_007154b0(void); };

// @baa 0x007154b0
int C_007154b0::sub_007154b0(void) { return *(int*)((char*)this + 24); }

struct C_007154c0 { int sub_007154c0(void); };

// @baa 0x007154c0
int C_007154c0::sub_007154c0(void) { return *(int*)((char*)this + 28); }

struct C_007154d0 { int sub_007154d0(void); };

// @baa 0x007154d0
int C_007154d0::sub_007154d0(void) { return *(int*)((char*)this + 12); }

// @baa 0x007154e0
int sub_007154e0(int param_1)
{
  return param_1 + 0x18;
}

// @baa 0x007154f0
int sub_007154f0(int a0, int a1) { return a1; }

struct C_00715530 { void sub_00715530(int a0); };

// @baa 0x00715530
void C_00715530::sub_00715530(int a0) { *(int*)((char*)this + 484) = a0; }

struct C_00715540 { int sub_00715540(void); };

// @baa 0x00715540
int C_00715540::sub_00715540(void) { return *(int*)((char*)this + 484); }

struct C_00715550 { int sub_00715550(void); };

// @baa 0x00715550
int C_00715550::sub_00715550(void) { return *(int*)((char*)this + 488); }

struct C_00715560 { void sub_00715560(int a0); };

// @baa 0x00715560
void C_00715560::sub_00715560(int a0) { *(int*)((char*)this + 488) = a0; }

// @baa 0x00715570
int sub_00715570(void) { return 0; }

struct C_00715580 {
    bool sub_00715580();
};

// @baa 0x00715580
bool C_00715580::sub_00715580(void)
{
    int param_1 = (int)this;

  return 0 < *(int *)(param_1 + 0x108);
}

// @baa 0x00715590
int sub_00715590(int a0, int a1) { return a1; }

struct C_007155a0 { C_007155a0* sub_007155a0(void); };

// @baa 0x007155a0
C_007155a0* C_007155a0::sub_007155a0(void) { return this; }

// @baa 0x007155b0
int sub_007155b0(int a0, int a1) { return a1; }

// @baa 0x007155c0
int sub_007155c0(int a0, int a1) { return a1; }

// @baa 0x007155d0
int sub_007155d0(int a0, int a1) { return a1; }

// @baa 0x007155e0
int sub_007155e0(int a0, int a1) { return a1; }

// @baa 0x007155f0
int sub_007155f0(int a0, int a1) { return a1; }

// @baa 0x00715600
int sub_00715600(int a0, int a1) { return a1; }

struct C_00715610 { int sub_00715610(void); };

// @baa 0x00715610
int C_00715610::sub_00715610(void) { return *(int*)((char*)this + 144); }

int sub_0056bf90(void);
extern undefined * g_01eee2dc;
// @baa 0x00715630
undefined4 * UTexture2D::sub_00715630(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0056bf90();
  *param_1 = (undefined4)(&g_01eee2dc);
  return param_1;
}

int sub_00581450(void);
// @baa 0x00715650
undefined4 UTexture2D::sub_00715650(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00581450();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00715670
int sub_00715670(int a0, int a1) { return a1; }

// @baa 0x00715680
int sub_00715680(int a0, int a1) { return a1; }

struct C_00715690 {
    void sub_00715690();
};

// @baa 0x00715690
void C_00715690::sub_00715690(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 8) != 0) {
    sub_0053dfa0(*(int *)(param_1 + 8));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

// @baa 0x00715700
int sub_00715700(void) { return 1; }

extern char g_01edeb04[];
// @baa 0x007157b0
int sub_007157b0(void) { return (int)g_01edeb04; }

extern char g_01eee2f0[];
struct C_007157c0 { C_007157c0* sub_007157c0(void); };

// @baa 0x007157c0
C_007157c0* C_007157c0::sub_007157c0(void) { *(int*)((char*)this + 0) = (int)g_01eee2f0; return this; }

extern char g_01ebb554[];
struct C_007157d0 { void sub_007157d0(void); };

// @baa 0x007157d0
void C_007157d0::sub_007157d0(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

extern char g_01eee2fc[];
struct C_007157e0 { C_007157e0* sub_007157e0(void); };

// @baa 0x007157e0
C_007157e0* C_007157e0::sub_007157e0(void) { *(int*)((char*)this + 0) = (int)g_01eee2fc; return this; }

struct C_007157f0 { void sub_007157f0(void); };

// @baa 0x007157f0
void C_007157f0::sub_007157f0(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00715800 {
    undefined4 * sub_00715800(byte);
};

// @baa 0x00715800
undefined4 * C_00715800::sub_00715800(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00715820 {
    undefined4 * sub_00715820(byte);
};

// @baa 0x00715820
undefined4 * C_00715820::sub_00715820(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00715840 { C_00715840* sub_00715840(void); };

// @baa 0x00715840
C_00715840* C_00715840::sub_00715840(void) { *(int*)((char*)this + 0) = (int)g_01eee2b0; return this; }

extern int g_01eee314;
// A small two-dword value struct used by DecalComponent.cpp.
struct FDecalValue
{
    FDecalValue* sub_007159d0(int* Src);
    int Value;  // 0x0
    int Unk04;  // 0x4
};

// @baa 0x007159d0
FDecalValue* FDecalValue::sub_007159d0(int* Src)
{
    Value = (int)&g_01eee314;
    Unk04 = *Src;
    return this;
}

extern char g_01edf67c[];
// @baa 0x007159f0
int sub_007159f0(void) { return (int)g_01edf67c; }

struct C_00715a00 { void sub_00715a00(void); };

// @baa 0x00715a00
void C_00715a00::sub_00715a00(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00715a10 {
    undefined4 * sub_00715a10(byte);
};

// @baa 0x00715a10
undefined4 * C_00715a10::sub_00715a10(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern int g_01eee320;
// A small two-dword value struct used by DecalComponent.cpp.
struct FDecalValue_00715a30
{
    FDecalValue_00715a30* sub_00715a30(int* Src);
    int Value;  // 0x0
    int Unk04;  // 0x4
};

// @baa 0x00715a30
FDecalValue_00715a30* FDecalValue_00715a30::sub_00715a30(int* Src)
{
    Value = (int)&g_01eee320;
    Unk04 = *Src;
    return this;
}

extern char g_01edf8b4[];
// @baa 0x00715a60
int sub_00715a60(void) { return (int)g_01edf8b4; }

struct C_00715a70 { void sub_00715a70(void); };

// @baa 0x00715a70
void C_00715a70::sub_00715a70(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00715a80 {
    undefined4 * sub_00715a80(byte);
};

// @baa 0x00715a80
undefined4 * C_00715a80::sub_00715a80(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern int g_01eee32c;
// A small two-dword value struct used by DecalComponent.cpp.
struct FDecalValue_00715aa0
{
    FDecalValue_00715aa0* sub_00715aa0(int* Src);
    int Value;  // 0x0
    int Unk04;  // 0x4
};

// @baa 0x00715aa0
FDecalValue_00715aa0* FDecalValue_00715aa0::sub_00715aa0(int* Src)
{
    Value = (int)&g_01eee32c;
    Unk04 = *Src;
    return this;
}

extern char g_01edfaf4[];
// @baa 0x00715ad0
int sub_00715ad0(void) { return (int)g_01edfaf4; }

struct C_00715ae0 { void sub_00715ae0(void); };

// @baa 0x00715ae0
void C_00715ae0::sub_00715ae0(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00715af0 {
    undefined4 * sub_00715af0(byte);
};

// @baa 0x00715af0
undefined4 * C_00715af0::sub_00715af0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern int g_01eee338;
// A small two-dword value struct used by DecalComponent.cpp.
struct FDecalValue_00715b10
{
    FDecalValue_00715b10* sub_00715b10(int* Src);
    int Value;  // 0x0
    int Unk04;  // 0x4
};

// @baa 0x00715b10
FDecalValue_00715b10* FDecalValue_00715b10::sub_00715b10(int* Src)
{
    Value = (int)&g_01eee338;
    Unk04 = *Src;
    return this;
}

extern char g_01edfd34[];
// @baa 0x00715b40
int sub_00715b40(void) { return (int)g_01edfd34; }

struct C_00715b50 { void sub_00715b50(void); };

// @baa 0x00715b50
void C_00715b50::sub_00715b50(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00715b60 {
    undefined4 * sub_00715b60(byte);
};

// @baa 0x00715b60
undefined4 * C_00715b60::sub_00715b60(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00715c90
int AReverbVolume::vf_000(void) { return 1; }

// @baa 0x00715ca0
bool AReverbVolume::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00715ea0
int sub_00715ea0(void) { return 1; }

// @baa 0x00715eb0
int sub_00715eb0(void) { return 1; }

struct C_00715ec0 { C_00715ec0* sub_00715ec0(void); };

// @baa 0x00715ec0
C_00715ec0* C_00715ec0::sub_00715ec0(void) { return this; }

// @baa 0x007165a0
int USphericalHarmonicLightComponent::vf_000(void) { return 1; }

// @baa 0x007165b0
bool USphericalHarmonicLightComponent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x007165f0
void __stdcall sub_007165f0(int a0) {  }

// @baa 0x00716600
int sub_00716600(void) { return 0; }

// @baa 0x00716640
int USphericalHarmonicLightComponent::GetLightType(void) { return 1; }

// @baa 0x00716760
int USpotLightComponent::vf_000(void) { return 1; }

// @baa 0x00716770
bool USpotLightComponent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x007167b0
int sub_007167b0(void) { return 1; }

// @baa 0x00716990
int USpriteComponent::vf_000(void) { return 1; }

// @baa 0x007169a0
bool USpriteComponent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

extern int g_01eee344;
// A small two-dword value struct used by DecalComponent.cpp.
struct FDecalValue_007169f0
{
    FDecalValue_007169f0* sub_007169f0(int* Src);
    int Value;  // 0x0
    int Unk04;  // 0x4
};

// @baa 0x007169f0
FDecalValue_007169f0* FDecalValue_007169f0::sub_007169f0(int* Src)
{
    Value = (int)&g_01eee344;
    Unk04 = *Src;
    return this;
}

extern char g_01ee4588[];
// @baa 0x00716a10
int sub_00716a10(void) { return (int)g_01ee4588; }

struct C_00716a20 { void sub_00716a20(void); };

// @baa 0x00716a20
void C_00716a20::sub_00716a20(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00716a30 {
    undefined4 * sub_00716a30(byte);
};

// @baa 0x00716a30
undefined4 * C_00716a30::sub_00716a30(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern char g_01ee4bd4[];
// @baa 0x00716c70
int sub_00716c70(void) { return (int)g_01ee4bd4; }

struct C_00716c80 { void sub_00716c80(void); };

// @baa 0x00716c80
void C_00716c80::sub_00716c80(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00716c90 {
    undefined4 * sub_00716c90(byte);
};

// @baa 0x00716c90
undefined4 * C_00716c90::sub_00716c90(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern char g_01ebb6c0[];
struct C_00716d50 { void sub_00716d50(void); };

// @baa 0x00716d50
void C_00716d50::sub_00716d50(void) { *(int*)((char*)this + 0) = (int)g_01ebb6c0; }

struct C_00716d60 {
    undefined4 * sub_00716d60(byte);
};

// @baa 0x00716d60
undefined4 * C_00716d60::sub_00716d60(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb6c0);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern char g_01ee5a60[];
// @baa 0x00717330
int sub_00717330(void) { return (int)g_01ee5a60; }

struct C_00717340 { void sub_00717340(void); };

// @baa 0x00717340
void C_00717340::sub_00717340(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00717350 {
    undefined4 * sub_00717350(byte);
};

// @baa 0x00717350
undefined4 * C_00717350::sub_00717350(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00717430
wchar_t * sub_00717430(undefined4 param_1)
{
  switch(param_1) {
  case 1:
    return L"TC_Normalmap";
  case 2:
    return L"TC_Displacementmap";
  case 3:
    return L"TC_NormalmapAlpha";
  case 4:
    return L"TC_Grayscale";
  case 5:
    return L"TC_HighDynamicRange";
  default:
    return L"TC_Default";
  }
}

struct C_00717b70 {
    undefined4 sub_00717b70(int);
};

// @baa 0x00717b70
undefined4 C_00717b70::sub_00717b70(int param_2)
{
    int param_1 = (int)this;

  return *(undefined4 *)(param_2 * 0x10 + 8 + param_1);
}

struct C_00717b80 {
    undefined4 sub_00717b80(int);
};

// @baa 0x00717b80
undefined4 C_00717b80::sub_00717b80(int param_2)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  uVar1 = 0;
  if ((param_2 == 0) || (*(char *)(param_2 + 0x89) != '\0')) {
    uVar1 = *(undefined4 *)((uint)*(byte *)(param_2 + 0x8a) * 0x10 + 0xc + param_1);
  }
  return uVar1;
}

// @baa 0x00717bb0
int UTexture2D::vf_000(void) { return 1; }

struct C_view_00717bc0 {
    int sub_00542bd0(int);
};

extern undefined4 g_01eee3c4;
// @baa 0x00717bc0
undefined4 * UTexture2D::sub_00717bc0(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view_00717bc0 *)(this))->sub_00542bd0(0);
  param_1[3] = param_2;
  *param_1 = (undefined4)(&g_01eee3c4);
  return param_1;
}

// @baa 0x00717be0
void sub_00717be0(void) {  }

// @baa 0x00717bf0
int sub_00717bf0(void) { return 61; }

extern undefined * g_01eee3d0;
// @baa 0x00717cf0
undefined4 * UTexture2D::sub_00717cf0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0056bf90();
  *param_1 = (undefined4)(&g_01eee3d0);
  return param_1;
}

extern int g_01eee3e4;
// A small two-dword value struct used by DecalComponent.cpp.
struct FDecalValue_00717da0
{
    FDecalValue_00717da0* sub_00717da0(int* Src);
    int Value;  // 0x0
    int Unk04;  // 0x4
};

// @baa 0x00717da0
FDecalValue_00717da0* FDecalValue_00717da0::sub_00717da0(int* Src)
{
    Value = (int)&g_01eee3e4;
    Unk04 = *Src;
    return this;
}

extern char g_01ee8dfc[];
// @baa 0x00717de0
int sub_00717de0(void) { return (int)g_01ee8dfc; }

struct C_00717df0 { void sub_00717df0(void); };

// @baa 0x00717df0
void C_00717df0::sub_00717df0(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00717e00 {
    undefined4 * sub_00717e00(byte);
};

// @baa 0x00717e00
undefined4 * C_00717e00::sub_00717e00(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00717e30 {
    undefined4 sub_00717e30();
};

// @baa 0x00717e30
undefined4 C_00717e30::sub_00717e30(void)
{
    int param_1 = (int)this;

  return *(undefined4 *)(*(int *)(param_1 + 0x44) + 0xbc);
}

struct C_00717e40 {
    undefined4 sub_00717e40();
};

// @baa 0x00717e40
undefined4 C_00717e40::sub_00717e40(void)
{
    int param_1 = (int)this;

  return *(undefined4 *)(*(int *)(param_1 + 0x44) + 0xc0);
}

extern char g_01ee9934[];
// @baa 0x00717e70
int sub_00717e70(void) { return (int)g_01ee9934; }

struct C_00717e80 { void sub_00717e80(void); };

// @baa 0x00717e80
void C_00717e80::sub_00717e80(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00717e90 {
    undefined4 * sub_00717e90(byte);
};

// @baa 0x00717e90
undefined4 * C_00717e90::sub_00717e90(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern int g_01eee3fc;
// A small two-dword value struct used by DecalComponent.cpp.
struct FDecalValue_00717eb0
{
    FDecalValue_00717eb0* sub_00717eb0(int* Src);
    int Value;  // 0x0
    int Unk04;  // 0x4
};

// @baa 0x00717eb0
FDecalValue_00717eb0* FDecalValue_00717eb0::sub_00717eb0(int* Src)
{
    Value = (int)&g_01eee3fc;
    Unk04 = *Src;
    return this;
}

extern char g_01ee9ce4[];
// @baa 0x00717ed0
int sub_00717ed0(void) { return (int)g_01ee9ce4; }

struct C_00717ee0 { void sub_00717ee0(void); };

// @baa 0x00717ee0
void C_00717ee0::sub_00717ee0(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00717ef0 {
    undefined4 * sub_00717ef0(byte);
};

// @baa 0x00717ef0
undefined4 * C_00717ef0::sub_00717ef0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern int g_01eee408;
// A small two-dword value struct used by DecalComponent.cpp.
struct FDecalValue_00717f10
{
    FDecalValue_00717f10* sub_00717f10(int* Src);
    int Value;  // 0x0
    int Unk04;  // 0x4
};

// @baa 0x00717f10
FDecalValue_00717f10* FDecalValue_00717f10::sub_00717f10(int* Src)
{
    Value = (int)&g_01eee408;
    Unk04 = *Src;
    return this;
}

extern char g_01eea09c[];
// @baa 0x00717f30
int sub_00717f30(void) { return (int)g_01eea09c; }

struct C_00717f40 { void sub_00717f40(void); };

// @baa 0x00717f40
void C_00717f40::sub_00717f40(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00717f50 {
    undefined4 * sub_00717f50(byte);
};

// @baa 0x00717f50
undefined4 * C_00717f50::sub_00717f50(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00718020
int UTexture2DComposite::vf_000(void) { return 1; }

extern char g_01eeb23c[];
// @baa 0x00718030
int sub_00718030(void) { return (int)g_01eeb23c; }

// @baa 0x00718040
FLOAT UTexture2DComposite::GetSurfaceWidth() {
  return (float10)1;
}

struct C_00718060 { int sub_00718060(void); };

// @baa 0x00718060
int C_00718060::sub_00718060(void) { return *(int*)((char*)this + 4); }

struct C_00718070 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_00718070(INT Index);
};

// @baa 0x00718070
UBOOL C_00718070::sub_00718070(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

struct C_00718090 { int sub_00718090(void); };

// @baa 0x00718090
int C_00718090::sub_00718090(void) { return *(int*)((char*)this + 0); }

struct C_007180a0{
int*sub_007180a0(int*);
};

extern undefined4*g_026b0d94;
// @baa 0x007180a0
int*C_007180a0::sub_007180a0(int*param_2)
{
int*param_1=(int*)this;

int iVar1;

iVar1=*param_2;
*param_1=iVar1;
if(iVar1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x1dc))((int)(iVar1));
}
return param_1;
}

// @baa 0x007180d0
bool sub_007180d0(int * param_1)
{
  return *param_1 != 0;
}

struct C_007180e0 { int sub_007180e0(void); };

// @baa 0x007180e0
int C_007180e0::sub_007180e0(void) { return *(int*)((char*)this + 0); }

struct C_007180f0 { C_007180f0* sub_007180f0(void); };

// @baa 0x007180f0
C_007180f0* C_007180f0::sub_007180f0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_00718100 { int sub_00718100(void); };

// @baa 0x00718100
int C_00718100::sub_00718100(void) { return *(int*)((char*)this + 0); }

struct C_00718110 { int a, b, c; C_00718110(); };

// @baa 0x00718110
C_00718110::C_00718110() : a(0), b(0), c(0) {}

struct C_00718120 { int sub_00718120(void); };

// @baa 0x00718120
int C_00718120::sub_00718120(void) { return *(int*)((char*)this + 4); }

struct C_00718180 {
    void sub_00718180(int *);
};

// @baa 0x00718180
void C_00718180::sub_00718180(int * param_2)
{
    int param_1 = (int)this;

  if (*param_2 != 0) {
    *(int *)(*param_2 + 8) = param_1 + 4;
  }
  *(int *)(param_1 + 4) = *param_2;
  *(int **)(param_1 + 8) = param_2;
  *param_2 = param_1;
  return;
}

struct C_007181a0 { int sub_007181a0(void); };

// @baa 0x007181a0
int C_007181a0::sub_007181a0(void) { return *(int*)((char*)this + 4); }

struct T_007181b0 { int x; };

// @baa 0x007181b0
template T_007181b0& TIndirectArray<T_007181b0>::operator()(INT);

struct T_00718200 { int x; };

// @baa 0x00718200
template const T_00718200& TIndirectArray<T_00718200>::operator()(INT) const;

struct C_00718250 {
    int pad;
    int a;
    int b;
    C_00718250 *sub_00718250();
};

// @baa 0x00718250
C_00718250 *C_00718250::sub_00718250()
{
    a = 0;
    b = 0;
    return this;
}

struct C_007182b0 {
    void sub_007182b0(int *);
};

// @baa 0x007182b0
void C_007182b0::sub_007182b0(int * param_2)
{
    int param_1 = (int)this;

  if (*param_2 != 0) {
    *(int *)(*param_2 + 8) = param_1 + 4;
  }
  *(int *)(param_1 + 4) = *param_2;
  *(int **)(param_1 + 8) = param_2;
  *param_2 = param_1;
  return;
}

struct C_007182d0 {
    bool sub_007182d0();
};

// @baa 0x007182d0
bool C_007182d0::sub_007182d0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) != 0;
}

struct C_007182e0 { int a, b, c; C_007182e0(); };

// @baa 0x007182e0
C_007182e0::C_007182e0() : a(0), b(0), c(0) {}

struct C_007182f0 { int sub_007182f0(void); };

// @baa 0x007182f0
int C_007182f0::sub_007182f0(void) { return *(int*)((char*)this + 4); }

struct C_00718350 {
    void sub_00718350(int *);
};

// @baa 0x00718350
void C_00718350::sub_00718350(int * param_2)
{
    int param_1 = (int)this;

  if (*param_2 != 0) {
    *(int *)(*param_2 + 8) = param_1 + 4;
  }
  *(int *)(param_1 + 4) = *param_2;
  *(int **)(param_1 + 8) = param_2;
  *param_2 = param_1;
  return;
}

struct C_00718370 { int sub_00718370(void); };

// @baa 0x00718370
int C_00718370::sub_00718370(void) { return *(int*)((char*)this + 0); }

struct C_00718380 { int sub_00718380(void); };

// @baa 0x00718380
int C_00718380::sub_00718380(void) { return *(int*)((char*)this + 0); }

struct C_00718390 { int a; C_00718390(int); };

// @baa 0x00718390
C_00718390::C_00718390(int x) : a(x) {}

struct C_007183a0 {
    void sub_007183a0();
};

// @baa 0x007183a0
void C_007183a0::sub_007183a0(void)
{
    int * param_1 = (int *)this;

  *param_1 = *(int *)(*param_1 + 4);
  return;
}

struct C_007183c0 { int sub_007183c0(void); };

// @baa 0x007183c0
int C_007183c0::sub_007183c0(void) { return *(int*)((char*)this + 0); }

struct C_007183d0 { int sub_007183d0(void); };

// @baa 0x007183d0
int C_007183d0::sub_007183d0(void) { return *(int*)((char*)this + 0); }

struct C_007183e0 { int sub_007183e0(void); };

// @baa 0x007183e0
int C_007183e0::sub_007183e0(void) { return *(int*)((char*)this + 0); }

struct C_007183f0 { int sub_007183f0(void); };

// @baa 0x007183f0
int C_007183f0::sub_007183f0(void) { return *(int*)((char*)this + 0); }

struct C_00718400 { int sub_00718400(void); };

// @baa 0x00718400
int C_00718400::sub_00718400(void) { return *(int*)((char*)this + 0); }

struct C_00718410 { int sub_00718410(void); };

// @baa 0x00718410
int C_00718410::sub_00718410(void) { return *(int*)((char*)this + 4); }

// @baa 0x00718460
void sub_00718460(void) {  }

// @baa 0x00718670
void sub_00718670(void) {  }

struct C_00718860 { int a, b, c; C_00718860(); };

// @baa 0x00718860
C_00718860::C_00718860() : a(0), b(0), c(0) {}

struct C_00718870 { int a, b, c; C_00718870(); };

// @baa 0x00718870
C_00718870::C_00718870() : a(0), b(0), c(0) {}

struct C_00718890 { int sub_00718890(void); };

// @baa 0x00718890
int C_00718890::sub_00718890(void) { return *(int*)((char*)this + 0); }

struct C_00718950 { int sub_00718950(void); };

// @baa 0x00718950
int C_00718950::sub_00718950(void) { return *(int*)((char*)this + 0); }

struct C_007189d0 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    C_007189d0* sub_007189d0(INT value);
};

// @baa 0x007189d0
C_007189d0* C_007189d0::sub_007189d0(INT value)
{
    Unk00 = value;
    Unk04 = 4294967295;
    return this;
}

struct C_007189f0 { C_007189f0* sub_007189f0(int a0); };

// @baa 0x007189f0
C_007189f0* C_007189f0::sub_007189f0(int a0) { return this; }

struct C_00718a00 { int sub_00718a00(void); };

// @baa 0x00718a00
int C_00718a00::sub_00718a00(void) { return *(int*)((char*)this + 0); }

struct C_00718a10 { int sub_00718a10(void); };

// @baa 0x00718a10
int C_00718a10::sub_00718a10(void) { return *(int*)((char*)this + 0); }

struct C_00718a90 {
    int sub_00718a90(int);
};

// @baa 0x00718a90
int C_00718a90::sub_00718a90(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00718aa0 { int a, b, c; C_00718aa0(); };

// @baa 0x00718aa0
C_00718aa0::C_00718aa0() : a(0), b(0), c(0) {}

struct C_00718ab0 { int sub_00718ab0(void); };

// @baa 0x00718ab0
int C_00718ab0::sub_00718ab0(void) { return *(int*)((char*)this + 0); }

struct C_00718ac0 {
    int sub_00718ac0();
};

// @baa 0x00718ac0
int C_00718ac0::sub_00718ac0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00718ad0 { int a, b; C_00718ad0(int, int); };

// @baa 0x00718ad0
C_00718ad0::C_00718ad0(int x, int y) : a(x), b(y) {}

struct C_00718af0 {
    int sub_00718af0();
};

// @baa 0x00718af0
int C_00718af0::sub_00718af0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00718b00 { int a, b; C_00718b00(int, int); };

// @baa 0x00718b00
C_00718b00::C_00718b00(int x, int y) : a(x), b(y) {}

struct C_00718b20 {
    int sub_00718b20();
};

// @baa 0x00718b20
int C_00718b20::sub_00718b20(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00718b30 { int a, b; C_00718b30(int, int); };

// @baa 0x00718b30
C_00718b30::C_00718b30(int x, int y) : a(x), b(y) {}

struct C_00718b50 {
    int sub_00718b50();
};

// @baa 0x00718b50
int C_00718b50::sub_00718b50(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00718b60 { int a, b; C_00718b60(int, int); };

// @baa 0x00718b60
C_00718b60::C_00718b60(int x, int y) : a(x), b(y) {}

struct C_00718b80 {
    int sub_00718b80();
};

// @baa 0x00718b80
int C_00718b80::sub_00718b80(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00718b90 { int a, b; C_00718b90(int, int); };

// @baa 0x00718b90
C_00718b90::C_00718b90(int x, int y) : a(x), b(y) {}

struct C_00718bb0 {
    int sub_00718bb0();
};

// @baa 0x00718bb0
int C_00718bb0::sub_00718bb0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00718bc0 { int a, b; C_00718bc0(int, int); };

// @baa 0x00718bc0
C_00718bc0::C_00718bc0(int x, int y) : a(x), b(y) {}

struct C_00718be0 {
    int sub_00718be0();
};

// @baa 0x00718be0
int C_00718be0::sub_00718be0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00718bf0 { int a, b; C_00718bf0(int, int); };

// @baa 0x00718bf0
C_00718bf0::C_00718bf0(int x, int y) : a(x), b(y) {}

struct C_00718c10{
int*sub_00718c10(byte);
};

// @baa 0x00718c10
int*C_00718c10::sub_00718c10(byte param_2)
{
int*param_1=(int*)this;
if(*param_1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x224))((int)(*param_1));
}
if((param_2&1)!=0){
sub_0053dfa0(param_1);
}
return param_1;
}

struct C_00718c50 {
    DWORD d;
    DWORD sub_00718c50();
};

// @baa 0x00718c50
DWORD C_00718c50::sub_00718c50()
{
    *(WORD*)(this + 1) = 0;
    return (DWORD)this;
}

// @baa 0x00718ca0
int sub_00718ca0(int a0) { return *(int*)a0; }

struct C_00718cb0 {
    void sub_00718cb0(int *);
};

// @baa 0x00718cb0
void C_00718cb0::sub_00718cb0(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = param_1 + 0xc;
  return;
}

struct C_00718cf0 { int sub_00718cf0(void); };

// @baa 0x00718cf0
int C_00718cf0::sub_00718cf0(void) { return *(int*)((char*)this + 0); }

struct C_00718d20 { int sub_00718d20(void); };

// @baa 0x00718d20
int C_00718d20::sub_00718d20(void) { return *(int*)((char*)this + 0); }

struct C_00718d30 {
    void sub_00718d30(undefined4, int, int);
};

// @baa 0x00718d30
void C_00718d30::sub_00718d30(undefined4 param_2, int param_3, int param_4)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  if ((*param_1 != 0) || (param_3 != 0)) {
    iVar1 = sub_0053df70(*param_1,param_3 * param_4,8);
    *param_1 = iVar1;
  }
  return;
}

// @baa 0x00718d60
int sub_00718d60(int a0) { return *(int*)a0; }

// @baa 0x00718d70
bool sub_00718d70(int param_1, int param_2)
{
  return param_1 == param_2;
}

// @baa 0x00718d80
int sub_00718d80(int a0) { return a0; }

struct C_00718d90 { int a, b; C_00718d90(const C_00718d90 &); };

// @baa 0x00718d90
C_00718d90::C_00718d90(const C_00718d90 &o) : a(o.a), b(o.b) {}

// @baa 0x00718df0
int sub_00718df0(int a0) { return *(int*)a0; }

// @baa 0x00718e00
bool sub_00718e00(int param_1, int param_2)
{
  return param_1 == param_2;
}

// @baa 0x00718e10
int sub_00718e10(int a0) { return a0; }

struct C_00718e20 { int a, b; C_00718e20(const C_00718e20 &); };

// @baa 0x00718e20
C_00718e20::C_00718e20(const C_00718e20 &o) : a(o.a), b(o.b) {}

// @baa 0x00718e80
int sub_00718e80(int a0) { return *(int*)a0; }

struct S_00718e90 { int sub_00a438b0(int); };

// @baa 0x00718e90
int sub_00718e90(S_00718e90 *s, int a) { return s->sub_00a438b0(a); }

// @baa 0x00718ea0
undefined4 sub_00718ea0(int * param_1)
{
  if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
    return *(undefined4 *)*param_1;
  }
  return 0;
}

struct C_00718eb0 {
    void sub_00718eb0(int *);
};

// @baa 0x00718eb0
void C_00718eb0::sub_00718eb0(int * param_2)
{
    int param_1 = (int)this;
  *param_2 = param_1;
  param_2[1] = param_1 + 0x1c;
  return;
}

// @baa 0x00718ec0
int sub_00718ec0(int a0) { return *(int*)a0; }

struct C_00718ed0 {
    void sub_00718ed0(int *);
};

// @baa 0x00718ed0
void C_00718ed0::sub_00718ed0(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = param_1 + 0xc;
  return;
}

// @baa 0x00718ee0
int sub_00718ee0(int a0) { return *(int*)a0; }

struct C_00718ef0 {
    void sub_00718ef0(int *);
};

// @baa 0x00718ef0
void C_00718ef0::sub_00718ef0(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = param_1 + 0xc;
  return;
}

// @baa 0x00718f00
int sub_00718f00(int a0) { return *(int*)a0; }

struct C_00718f10 {
    void sub_00718f10(int *);
};

// @baa 0x00718f10
void C_00718f10::sub_00718f10(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = *(int *)(param_1 + 0xc);
  return;
}

struct C_00718f90 { int sub_00718f90(void); };

// @baa 0x00718f90
int C_00718f90::sub_00718f90(void) { return *(int*)((char*)this + 0); }

struct C_00718fa0 { int sub_00718fa0(void); };

// @baa 0x00718fa0
int C_00718fa0::sub_00718fa0(void) { return *(int*)((char*)this + 0); }

struct C_00718fb0 { int sub_00718fb0(void); };

// @baa 0x00718fb0
int C_00718fb0::sub_00718fb0(void) { return *(int*)((char*)this + 20); }

struct C_00719000 {
    void sub_00719000();
};

// @baa 0x00719000
void C_00719000::sub_00719000(void)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  iVar1 = param_1[1];
  if (param_1[2] != iVar1) {
    param_1[2] = iVar1;
    if ((*param_1 != 0) || (iVar1 != 0)) {
      iVar1 = sub_0053df70(*param_1,iVar1 * 0x28,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_00719070 { int sub_00719070(void); };

// @baa 0x00719070
int C_00719070::sub_00719070(void) { return *(int*)((char*)this + 20); }

struct C_00719080 { int sub_00719080(void); };

// @baa 0x00719080
int C_00719080::sub_00719080(void) { return *(int*)((char*)this + 0); }

struct C_00719090 { int sub_00719090(void); };

// @baa 0x00719090
int C_00719090::sub_00719090(void) { return *(int*)((char*)this + 0); }

struct C_007190a0 { int sub_007190a0(void); };

// @baa 0x007190a0
int C_007190a0::sub_007190a0(void) { return *(int*)((char*)this + 0); }

struct C_007190b0 { int sub_007190b0(void); };

// @baa 0x007190b0
int C_007190b0::sub_007190b0(void) { return *(int*)((char*)this + 20); }

struct C_007190c0 {
    int sub_007190c0();
};

// @baa 0x007190c0
int C_007190c0::sub_007190c0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_007190e0 {
    int sub_007190e0();
};

// @baa 0x007190e0
int C_007190e0::sub_007190e0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00719100 {
    int sub_00719100();
};

// @baa 0x00719100
int C_00719100::sub_00719100(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00719120 {
    int sub_00719120();
};

// @baa 0x00719120
int C_00719120::sub_00719120(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00719140 {
    int sub_00719140();
};

// @baa 0x00719140
int C_00719140::sub_00719140(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00719160 {
    int sub_00719160();
};

// @baa 0x00719160
int C_00719160::sub_00719160(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00719180 {
    int sub_00719180();
};

// @baa 0x00719180
int C_00719180::sub_00719180(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_007191a0 {
    int sub_007191a0();
};

// @baa 0x007191a0
int C_007191a0::sub_007191a0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_007191c0 {
    int sub_007191c0();
};

// @baa 0x007191c0
int C_007191c0::sub_007191c0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_007191e0 {
    int sub_007191e0();
};

// @baa 0x007191e0
int C_007191e0::sub_007191e0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00719200 {
    int sub_00719200();
};

// @baa 0x00719200
int C_00719200::sub_00719200(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00719220 {
    int sub_00719220();
};

// @baa 0x00719220
int C_00719220::sub_00719220(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00719240 {
    int sub_00719240();
};

// @baa 0x00719240
int C_00719240::sub_00719240(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00719260 { C_00719260* sub_00719260(void); };

// @baa 0x00719260
C_00719260* C_00719260::sub_00719260(void) { return this; }

struct C_00719270 {
    int sub_00719270(int);
};

// @baa 0x00719270
int C_00719270::sub_00719270(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00719280 { C_00719280* sub_00719280(void); };

// @baa 0x00719280
C_00719280* C_00719280::sub_00719280(void) { return this; }

struct C_007192c0 {
    int sub_007192c0(int);
};

// @baa 0x007192c0
int C_007192c0::sub_007192c0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_007192d0 {
    int sub_007192d0(int);
};

// @baa 0x007192d0
int C_007192d0::sub_007192d0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_007192e0 { int sub_007192e0(void); };

// @baa 0x007192e0
int C_007192e0::sub_007192e0(void) { return *(int*)((char*)this + 20); }

struct C_007192f0 {
    int sub_007192f0(int);
};

// @baa 0x007192f0
int C_007192f0::sub_007192f0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_00719300 {
    int sub_00719300(int);
};

// @baa 0x00719300
int C_00719300::sub_00719300(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_00719310 { int sub_00719310(void); };

// @baa 0x00719310
int C_00719310::sub_00719310(void) { return *(int*)((char*)this + 20); }

struct C_00719320 { int sub_00719320(void); };

// @baa 0x00719320
int C_00719320::sub_00719320(void) { return *(int*)((char*)this + 20); }

struct C_00719330 { int sub_00719330(void); };

// @baa 0x00719330
int C_00719330::sub_00719330(void) { return *(int*)((char*)this + 20); }

struct C_00719340 { int sub_00719340(void); };

// @baa 0x00719340
int C_00719340::sub_00719340(void) { return *(int*)((char*)this + 20); }

struct C_00719350 { int sub_00719350(void); };

// @baa 0x00719350
int C_00719350::sub_00719350(void) { return *(int*)((char*)this + 20); }

struct C_00719360 { int sub_00719360(void); };

// @baa 0x00719360
int C_00719360::sub_00719360(void) { return *(int*)((char*)this + 20); }

struct C_00719370 { int sub_00719370(void); };

// @baa 0x00719370
int C_00719370::sub_00719370(void) { return *(int*)((char*)this + 20); }

struct C_00719380 { int sub_00719380(void); };

// @baa 0x00719380
int C_00719380::sub_00719380(void) { return *(int*)((char*)this + 20); }

struct C_00719390 { int sub_00719390(void); };

// @baa 0x00719390
int C_00719390::sub_00719390(void) { return *(int*)((char*)this + 20); }

struct C_007193a0 { int sub_007193a0(void); };

// @baa 0x007193a0
int C_007193a0::sub_007193a0(void) { return *(int*)((char*)this + 20); }

struct C_007193b0 { int sub_007193b0(void); };

// @baa 0x007193b0
int C_007193b0::sub_007193b0(void) { return *(int*)((char*)this + 20); }

struct C_007193c0 { int sub_007193c0(void); };

// @baa 0x007193c0
int C_007193c0::sub_007193c0(void) { return *(int*)((char*)this + 20); }

struct C_007193d0 { int sub_007193d0(void); };

// @baa 0x007193d0
int C_007193d0::sub_007193d0(void) { return *(int*)((char*)this + 20); }

struct C_007193e0 {
    int sub_007193e0();
};

// @baa 0x007193e0
int C_007193e0::sub_007193e0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00719400 { int sub_00719400(void); };

// @baa 0x00719400
int C_00719400::sub_00719400(void) { return *(int*)((char*)this + 20); }

struct C_00719410 {
    int sub_00719410();
};

// @baa 0x00719410
int C_00719410::sub_00719410(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00719430 { int sub_00719430(void); };

// @baa 0x00719430
int C_00719430::sub_00719430(void) { return *(int*)((char*)this + 20); }

struct C_00719440 {
    int sub_00719440();
};

// @baa 0x00719440
int C_00719440::sub_00719440(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00719460 { int sub_00719460(void); };

// @baa 0x00719460
int C_00719460::sub_00719460(void) { return *(int*)((char*)this + 20); }

struct C_00719470 {
    int sub_00719470();
};

// @baa 0x00719470
int C_00719470::sub_00719470(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00719490 { int sub_00719490(void); };

// @baa 0x00719490
int C_00719490::sub_00719490(void) { return *(int*)((char*)this + 20); }

struct C_007194a0 {
    int sub_007194a0();
};

// @baa 0x007194a0
int C_007194a0::sub_007194a0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_007194c0 { int sub_007194c0(void); };

// @baa 0x007194c0
int C_007194c0::sub_007194c0(void) { return *(int*)((char*)this + 0); }

struct C_007194d0 { int sub_007194d0(void); };

// @baa 0x007194d0
int C_007194d0::sub_007194d0(void) { return *(int*)((char*)this + 0); }

struct C_007194e0 { int sub_007194e0(void); };

// @baa 0x007194e0
int C_007194e0::sub_007194e0(void) { return *(int*)((char*)this + 0); }

struct C_007194f0 { int sub_007194f0(void); };

// @baa 0x007194f0
int C_007194f0::sub_007194f0(void) { return *(int*)((char*)this + 0); }

struct C_00719500 { int sub_00719500(void); };

// @baa 0x00719500
int C_00719500::sub_00719500(void) { return *(int*)((char*)this + 0); }

struct C_00719510 { int sub_00719510(void); };

// @baa 0x00719510
int C_00719510::sub_00719510(void) { return *(int*)((char*)this + 0); }

struct C_00719520 { int sub_00719520(void); };

// @baa 0x00719520
int C_00719520::sub_00719520(void) { return *(int*)((char*)this + 0); }

struct C_00719530 { int sub_00719530(void); };

// @baa 0x00719530
int C_00719530::sub_00719530(void) { return *(int*)((char*)this + 0); }

struct C_00719540 { int sub_00719540(void); };

// @baa 0x00719540
int C_00719540::sub_00719540(void) { return *(int*)((char*)this + 0); }

struct C_00719550 { int sub_00719550(void); };

// @baa 0x00719550
int C_00719550::sub_00719550(void) { return *(int*)((char*)this + 0); }

struct C_00719560 { int sub_00719560(void); };

// @baa 0x00719560
int C_00719560::sub_00719560(void) { return *(int*)((char*)this + 0); }

struct C_00719570 { int sub_00719570(void); };

// @baa 0x00719570
int C_00719570::sub_00719570(void) { return *(int*)((char*)this + 0); }

struct C_00719580 { int sub_00719580(void); };

// @baa 0x00719580
int C_00719580::sub_00719580(void) { return *(int*)((char*)this + 0); }

struct C_00719590 { int sub_00719590(void); };

// @baa 0x00719590
int C_00719590::sub_00719590(void) { return *(int*)((char*)this + 0); }

struct C_007195a0 { int sub_007195a0(void); };

// @baa 0x007195a0
int C_007195a0::sub_007195a0(void) { return *(int*)((char*)this + 0); }

struct C_007195b0 { int sub_007195b0(void); };

// @baa 0x007195b0
int C_007195b0::sub_007195b0(void) { return *(int*)((char*)this + 0); }

struct C_007195c0 { int sub_007195c0(void); };

// @baa 0x007195c0
int C_007195c0::sub_007195c0(void) { return *(int*)((char*)this + 0); }

struct C_007195d0 { int sub_007195d0(void); };

// @baa 0x007195d0
int C_007195d0::sub_007195d0(void) { return *(int*)((char*)this + 0); }

struct C_007195e0 { int sub_007195e0(void); };

// @baa 0x007195e0
int C_007195e0::sub_007195e0(void) { return *(int*)((char*)this + 0); }

struct C_007195f0 { int sub_007195f0(void); };

// @baa 0x007195f0
int C_007195f0::sub_007195f0(void) { return *(int*)((char*)this + 0); }

struct C_00719600 { int sub_00719600(void); };

// @baa 0x00719600
int C_00719600::sub_00719600(void) { return *(int*)((char*)this + 0); }

struct C_00719610 { int sub_00719610(void); };

// @baa 0x00719610
int C_00719610::sub_00719610(void) { return *(int*)((char*)this + 0); }

struct C_00719620 { int sub_00719620(void); };

// @baa 0x00719620
int C_00719620::sub_00719620(void) { return *(int*)((char*)this + 0); }

struct C_00719630 { int sub_00719630(void); };

// @baa 0x00719630
int C_00719630::sub_00719630(void) { return *(int*)((char*)this + 0); }

struct C_00719660 { int sub_00719660(void); };

// @baa 0x00719660
int C_00719660::sub_00719660(void) { return *(int*)((char*)this + 0); }

struct C_00719690 { int sub_00719690(void); };

// @baa 0x00719690
int C_00719690::sub_00719690(void) { return *(int*)((char*)this + 0); }

struct C_007196c0 { int sub_007196c0(void); };

// @baa 0x007196c0
int C_007196c0::sub_007196c0(void) { return *(int*)((char*)this + 0); }

struct C_007196f0 { int sub_007196f0(void); };

// @baa 0x007196f0
int C_007196f0::sub_007196f0(void) { return *(int*)((char*)this + 0); }

struct C_00719720 { int sub_00719720(void); };

// @baa 0x00719720
int C_00719720::sub_00719720(void) { return *(int*)((char*)this + 0); }

struct C_00719750 { int sub_00719750(void); };

// @baa 0x00719750
int C_00719750::sub_00719750(void) { return *(int*)((char*)this + 0); }

// @baa 0x007197f0
void sub_007197f0(undefined4 * param_1, undefined4 param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = param_2;
  }
  return;
}

struct C_00719870 { int sub_00719870(void); };

// @baa 0x00719870
int C_00719870::sub_00719870(void) { return *(int*)((char*)this + 4); }

struct S {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_00719880(INT Index) const;
};

// @baa 0x00719880
const DWORD* S::sub_00719880(INT Index) const
{
    return &Items(Index);
}

struct C_007198d0 { int a, b; C_007198d0(const C_007198d0 &); };

// @baa 0x007198d0
C_007198d0::C_007198d0(const C_007198d0 &o) : a(o.a), b(o.b) {}

struct C_007198f0 { int a, b; C_007198f0(const C_007198f0 &); };

// @baa 0x007198f0
C_007198f0::C_007198f0(const C_007198f0 &o) : a(o.a), b(o.b) {}

int sub_00627f00(...);
// @baa 0x00719990
void sub_00719990(undefined4 param_1, undefined4 param_2)
{
  sub_00627f00(param_1,param_2,0x30);
  return;
}

struct V_00719a00 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual void v51();
    virtual void v52();
    virtual void v53();
    virtual void v54();
    virtual void v55();
    virtual void v56();
    virtual void v57();
    virtual void v58();
    virtual void v59();
    virtual void v60();
    virtual void v61();
    virtual void v62();
    virtual void v63();
    virtual void v64();
    virtual void v65();
    virtual void v66();
    virtual void v67();
    virtual void v68();
    virtual void v69();
    virtual void v70();
    virtual void v71();
    virtual void v72();
    virtual void v73();
    virtual void v74();
    virtual void v75();
    virtual void g();
};

// @baa 0x00719a00
void (V_00719a00::*sub_00719a00)() = &V_00719a00::g;

extern char g_01eee414[];
struct C_00719bf0 { C_00719bf0* sub_00719bf0(void); };

// @baa 0x00719bf0
C_00719bf0* C_00719bf0::sub_00719bf0(void) { *(int*)((char*)this + 0) = (int)g_01eee414; return this; }

int sub_00abc630(void);
// @baa 0x00719c00
undefined4 sub_00719c00(void)
{
  sub_00abc630();
  return 1;
}

// @baa 0x00719c10
void sub_00719c10(void) {  }

// @baa 0x00719c20
void sub_00719c20(void) {  }

struct C_00719c30 { void sub_00719c30(void); };

// @baa 0x00719c30
void C_00719c30::sub_00719c30(void) { *(int*)((char*)this + 0) = (int)g_01eee2b0; }

struct C_00719c40 {
    undefined4 * sub_00719c40(byte);
};

// @baa 0x00719c40
undefined4 * C_00719c40::sub_00719c40(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01eee2b0);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0071ae60 {
    uint sub_0071ae60(undefined4);
};

// @baa 0x0071ae60
uint C_0071ae60::sub_0071ae60(undefined4 param_2)
{
    uint * param_1 = (uint *)this;

  switch(param_2) {
  case 0:
    return *param_1 >> 5 & 1;
  case 1:
    return *param_1 >> 6 & 1;
  case 2:
    return *param_1 >> 7 & 1;
  case 3:
    return *param_1 >> 8 & 1;
  case 4:
    return *param_1 >> 9 & 1;
  default:
    return 0;
  }
}

// @baa 0x0071af80
int sub_0071af80(void) { return 1690; }

void sub_006efb40();
// @baa 0x0071af90
void sub_0071af90(void) { sub_006efb40(); }

struct C_0071b110 {
    int sub_0071b110();
};

// @baa 0x0071b110
int C_0071b110::sub_0071b110(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x84) * 4;
}

int sub_0053df40(...);
extern undefined * g_01eee488;
// @baa 0x0071cd80
undefined4 * sub_0071cd80(void)
{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0053df40(0x44,8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (undefined4)(&g_01eee488);
    *(undefined2 *)(puVar1 + 3) = 0;
    *(undefined2 *)((int)puVar1 + 0x12) = 0;
    *(undefined2 *)(puVar1 + 6) = 0;
    *(undefined2 *)((int)puVar1 + 0x1e) = 0;
    *(undefined2 *)(puVar1 + 9) = 0;
    *(undefined2 *)((int)puVar1 + 0x2a) = 0;
    *(undefined2 *)(puVar1 + 0xc) = 0;
    *(undefined2 *)((int)puVar1 + 0x36) = 0;
    *(undefined2 *)(puVar1 + 0xf) = 0;
    *(undefined2 *)((int)puVar1 + 0x42) = 0;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

extern undefined * g_01eee558;
// @baa 0x0071cdd0
undefined4 * sub_0071cdd0(void)
{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0053df40(100,8);
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined2 *)(puVar1 + 3) = 0;
    *(undefined2 *)((int)puVar1 + 0x12) = 0;
    *(undefined2 *)(puVar1 + 6) = 0;
    *(undefined2 *)((int)puVar1 + 0x1e) = 0;
    *(undefined2 *)(puVar1 + 9) = 0;
    *(undefined2 *)((int)puVar1 + 0x2a) = 0;
    *(undefined2 *)(puVar1 + 0xc) = 0;
    *(undefined2 *)((int)puVar1 + 0x36) = 0;
    *(undefined2 *)(puVar1 + 0xf) = 0;
    *(undefined2 *)((int)puVar1 + 0x42) = 0;
    *puVar1 = (undefined4)(&g_01eee558);
    *(undefined2 *)(puVar1 + 0x12) = 0;
    *(undefined2 *)((int)puVar1 + 0x4e) = 0;
    *(undefined2 *)(puVar1 + 0x15) = 0;
    *(undefined2 *)((int)puVar1 + 0x5a) = 0;
    *(undefined2 *)(puVar1 + 0x18) = 0;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// @baa 0x0071d630
void UTexture2D::sub_0071d630(void)
{
int*param_1=(int*)this;

int iVar1;

iVar1=*param_1;
*param_1=0;
if(iVar1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x23c))((int)(iVar1));
}
return;
}

// @baa 0x0071d650
int*UTexture2D::sub_0071d650(int*param_2)
{
int*param_1=(int*)this;

int iVar1;
int iVar2;

iVar1=*param_2;
iVar2=*param_1;
if(iVar1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x1ec))((int)(iVar1));
}
*param_1=iVar1;
if(iVar2!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x238))((int)(iVar2));
}
return param_1;
}

// @baa 0x0071d6a0
void UTexture2D::sub_0071d6a0(void)
{
int*param_1=(int*)this;

int iVar1;

iVar1=*param_1;
*param_1=0;
if(iVar1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x228))((int)(iVar1));
}
return;
}

struct S_0071d6c0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_0071d6c0(INT Index);
};

// @baa 0x0071d6c0
DWORD* S_0071d6c0::sub_0071d6c0(INT Index)
{
    return &Items(Index);
}

struct FFaceFXElement
{
	INT X;    // 0x00
	INT Y;    // 0x04
	INT Z;    // 0x08
	INT W;    // 0x0c
	INT Unk10;// 0x10
};

struct UFxRenderWidget
{
	TArray<FFaceFXElement> BoneArray; // 0x00
	FFaceFXElement* sub_0071d770(INT Index);
};

// @baa 0x0071d770
FFaceFXElement* UFxRenderWidget::sub_0071d770(INT Index)
{
	return &BoneArray(Index);
}

struct E { BYTE Bytes[20]; };

struct S_0071d7c0 {
    TArray<E> Items; // 0x00
    const E* sub_0071d7c0(INT Index) const;
};

// @baa 0x0071d7c0
const E* S_0071d7c0::sub_0071d7c0(INT Index) const
{
    return &Items(Index);
}

struct S_0071d890 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_0071d890(INT Index);
};

// @baa 0x0071d890
DWORD* S_0071d890::sub_0071d890(INT Index)
{
    return &Items(Index);
}

// @baa 0x0071d8e0
bool sub_0071d8e0(int param_1)
{
  return param_1 != 2;
}

// @baa 0x0071d8f0
int sub_0071d8f0(void) { return 1; }

// @baa 0x0071d900
undefined4 sub_0071d900(int param_1)
{
  if ((param_1 != 0) && (param_1 != 1)) {
    return 0;
  }
  return 1;
}

// @baa 0x0071d920
bool sub_0071d920(int param_1)
{
  return param_1 == 0;
}

// @baa 0x0071d930
bool sub_0071d930(int param_1)
{
  return param_1 != 3;
}

// @baa 0x0071d960
int UTexture2D::sub_0071d960(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x0071d970
void __stdcall sub_0071d970(int a0, int a1) {  }

// @baa 0x0071d980
int UTexture2D::sub_0071d980(void) { return *(int*)((char*)this + 0); }

// @baa 0x0071d990
int UTexture2D::sub_0071d990(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

// @baa 0x0071d9d0
void __stdcall sub_0071d9d0(int a0, int a1) {  }

struct C_0071e090 {
    int sub_0071e090(int);
};

// @baa 0x0071e090
int C_0071e090::sub_0071e090(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0071e0a0 {
    int sub_0071e0a0(int);
};

// @baa 0x0071e0a0
int C_0071e0a0::sub_0071e0a0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0071e0b0 { C_0071e0b0* sub_0071e0b0(void); };

// @baa 0x0071e0b0
C_0071e0b0* C_0071e0b0::sub_0071e0b0(void) { *(int*)((char*)this + 8) = -1; return this; }

struct C_0071e120 {
    int sub_0071e120(int);
};

// @baa 0x0071e120
int C_0071e120::sub_0071e120(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0071e130 {
    int sub_0071e130(int);
};

// @baa 0x0071e130
int C_0071e130::sub_0071e130(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0071e140 { C_0071e140* sub_0071e140(void); };

// @baa 0x0071e140
C_0071e140* C_0071e140::sub_0071e140(void) { *(int*)((char*)this + 8) = -1; return this; }

struct C_0071e180 {
    int sub_0071e180(int);
};

// @baa 0x0071e180
int C_0071e180::sub_0071e180(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

struct C_0071e210 {
    int sub_0071e210(int);
};

// @baa 0x0071e210
int C_0071e210::sub_0071e210(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_0071e220 {
    int sub_0071e220(int);
};

// @baa 0x0071e220
int C_0071e220::sub_0071e220(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_0071e280 {
    int sub_0071e280(int);
};

// @baa 0x0071e280
int C_0071e280::sub_0071e280(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_0071e290 {
    int sub_0071e290(int);
};

// @baa 0x0071e290
int C_0071e290::sub_0071e290(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_0071e2f0 {
    int sub_0071e2f0(int);
};

// @baa 0x0071e2f0
int C_0071e2f0::sub_0071e2f0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_0071e300 {
    int sub_0071e300(int);
};

// @baa 0x0071e300
int C_0071e300::sub_0071e300(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_0071e310 {
    int sub_0071e310(int);
};

// @baa 0x0071e310
int C_0071e310::sub_0071e310(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

struct C_0071e320 {
    int sub_0071e320();
};

// @baa 0x0071e320
int C_0071e320::sub_0071e320(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

struct C_0071e330 {
    int sub_0071e330(int);
};

// @baa 0x0071e330
int C_0071e330::sub_0071e330(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

struct C_0071e340 {
    int sub_0071e340(int);
};

// @baa 0x0071e340
int C_0071e340::sub_0071e340(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_0071e350 {
    int sub_0071e350(int);
};

// @baa 0x0071e350
int C_0071e350::sub_0071e350(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

struct C_0071e360 {
    int sub_0071e360(int);
};

// @baa 0x0071e360
int C_0071e360::sub_0071e360(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_0071e370 {
    int sub_0071e370(int);
};

// @baa 0x0071e370
int C_0071e370::sub_0071e370(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

struct C_0071e380 {
    int sub_0071e380(int);
};

// @baa 0x0071e380
int C_0071e380::sub_0071e380(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_0071e390 {
    int sub_0071e390(int);
};

// @baa 0x0071e390
int C_0071e390::sub_0071e390(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

struct C_0071e3a0 {
    int sub_0071e3a0(int);
};

// @baa 0x0071e3a0
int C_0071e3a0::sub_0071e3a0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_0071e3b0 {
    int sub_0071e3b0(int);
};

// @baa 0x0071e3b0
int C_0071e3b0::sub_0071e3b0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

struct C_0071e3c0 {
    int sub_0071e3c0(int);
};

// @baa 0x0071e3c0
int C_0071e3c0::sub_0071e3c0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_0071e3d0 {
    int sub_0071e3d0(int);
};

// @baa 0x0071e3d0
int C_0071e3d0::sub_0071e3d0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

struct C_0071e3e0 {
    int sub_0071e3e0(int);
};

// @baa 0x0071e3e0
int C_0071e3e0::sub_0071e3e0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_0071e3f0 {
    int sub_0071e3f0();
};

// @baa 0x0071e3f0
int C_0071e3f0::sub_0071e3f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_0071e400 {
    int sub_0071e400();
};

// @baa 0x0071e400
int C_0071e400::sub_0071e400(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_0071e410 {
    int sub_0071e410();
};

// @baa 0x0071e410
int C_0071e410::sub_0071e410(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

struct C_0071e420 {
    int sub_0071e420();
};

// @baa 0x0071e420
int C_0071e420::sub_0071e420(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_0071e430 { int sub_0071e430(void); };

// @baa 0x0071e430
int C_0071e430::sub_0071e430(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct S_0071e440 {
    TArray<QWORD> Items; // 0x00
    QWORD* sub_0071e440(INT Index);
};

// @baa 0x0071e440
QWORD* S_0071e440::sub_0071e440(INT Index)
{
    return &Items(Index);
}

struct E_0071e490 { BYTE Bytes[12]; };

struct S_0071e490 {
    TArray<E_0071e490> Items; // 0x00
    E_0071e490* sub_0071e490(INT Index);
};

// @baa 0x0071e490
E_0071e490* S_0071e490::sub_0071e490(INT Index)
{
    return &Items(Index);
}

struct C_0071e4e0 {
    int sub_0071e4e0(int);
};

// @baa 0x0071e4e0
int C_0071e4e0::sub_0071e4e0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

struct S_0071e4f0 {
    TArray<QWORD> Items; // 0x00
    QWORD* sub_0071e4f0(INT Index);
};

// @baa 0x0071e4f0
QWORD* S_0071e4f0::sub_0071e4f0(INT Index)
{
    return &Items(Index);
}

struct E_0071e540 { BYTE Bytes[24]; };

struct S_0071e540 {
    TArray<E_0071e540> Items; // 0x00
    E_0071e540* sub_0071e540(INT Index);
};

// @baa 0x0071e540
E_0071e540* S_0071e540::sub_0071e540(INT Index)
{
    return &Items(Index);
}

struct C_0071e590 {
    int sub_0071e590(int);
};

// @baa 0x0071e590
int C_0071e590::sub_0071e590(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

struct S_0071e5a0 {
    TArray<QWORD> Items; // 0x00
    QWORD* sub_0071e5a0(INT Index);
};

// @baa 0x0071e5a0
QWORD* S_0071e5a0::sub_0071e5a0(INT Index)
{
    return &Items(Index);
}

struct E_0071e5f0 { BYTE Bytes[12]; };

struct S_0071e5f0 {
    TArray<E_0071e5f0> Items; // 0x00
    E_0071e5f0* sub_0071e5f0(INT Index);
};

// @baa 0x0071e5f0
E_0071e5f0* S_0071e5f0::sub_0071e5f0(INT Index)
{
    return &Items(Index);
}

struct C_0071e640 {
    int sub_0071e640(int);
};

// @baa 0x0071e640
int C_0071e640::sub_0071e640(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

struct S_0071e650 {
    TArray<QWORD> Items; // 0x00
    QWORD* sub_0071e650(INT Index);
};

// @baa 0x0071e650
QWORD* S_0071e650::sub_0071e650(INT Index)
{
    return &Items(Index);
}

struct E_0071e6a0 { BYTE Bytes[12]; };

struct S_0071e6a0 {
    TArray<E_0071e6a0> Items; // 0x00
    E_0071e6a0* sub_0071e6a0(INT Index);
};

// @baa 0x0071e6a0
E_0071e6a0* S_0071e6a0::sub_0071e6a0(INT Index)
{
    return &Items(Index);
}

struct C_0071e6f0 {
    int sub_0071e6f0(int);
};

// @baa 0x0071e6f0
int C_0071e6f0::sub_0071e6f0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

struct S_0071e700 {
    TArray<QWORD> Items; // 0x00
    QWORD* sub_0071e700(INT Index);
};

// @baa 0x0071e700
QWORD* S_0071e700::sub_0071e700(INT Index)
{
    return &Items(Index);
}

struct E_0071e750 { BYTE Bytes[24]; };

struct S_0071e750 {
    TArray<E_0071e750> Items; // 0x00
    E_0071e750* sub_0071e750(INT Index);
};

// @baa 0x0071e750
E_0071e750* S_0071e750::sub_0071e750(INT Index)
{
    return &Items(Index);
}

struct C_0071e7a0 {
    int sub_0071e7a0(int);
};

// @baa 0x0071e7a0
int C_0071e7a0::sub_0071e7a0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

struct S_0071e7b0 {
    TArray<QWORD> Items; // 0x00
    QWORD* sub_0071e7b0(INT Index);
};

// @baa 0x0071e7b0
QWORD* S_0071e7b0::sub_0071e7b0(INT Index)
{
    return &Items(Index);
}

struct E_0071e800 { BYTE Bytes[12]; };

struct S_0071e800 {
    TArray<E_0071e800> Items; // 0x00
    E_0071e800* sub_0071e800(INT Index);
};

// @baa 0x0071e800
E_0071e800* S_0071e800::sub_0071e800(INT Index)
{
    return &Items(Index);
}

struct C_0071e850 {
    int sub_0071e850(int);
};

// @baa 0x0071e850
int C_0071e850::sub_0071e850(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

struct C_0071eb00 {
    int sub_0071eb00();
};

// @baa 0x0071eb00
int C_0071eb00::sub_0071eb00(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0071eb20 {
    void sub_0071eb20(undefined4, undefined4);
};

int sub_0056a2a0(...);
// @baa 0x0071eb20
void C_0071eb20::sub_0071eb20(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;

  sub_0056a2a0(param_1,param_2,param_3);
  return;
}

// @baa 0x0071ed50
void sub_0071ed50(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

// @baa 0x0071ed70
void sub_0071ed70(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

// @baa 0x0071fa50
int*ULensFlare::sub_0071fa50(int*param_2)
{
int*param_1=(int*)this;

int iVar1;
int iVar2;

iVar1=*param_2;
iVar2=*param_1;
if(iVar1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x1fc))((int)(iVar1));
}
*param_1=iVar1;
if(iVar2!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x248))((int)(iVar2));
}
return param_1;
}

// @baa 0x0071faa0
void ULensFlare::sub_0071faa0(void)
{
int*param_1=(int*)this;

int iVar1;

iVar1=*param_1;
*param_1=0;
if(iVar1){
(*(int(__stdcall**)(int))(*g_026b0d94+0x248))((int)(iVar1));
}
return;
}

// @baa 0x0071fbc0
void ULensFlare::sub_0071fbc0(void)
{
int param_1=(uint)this;

int iVar1;

iVar1=*(int*)(param_1+0x14);
*(undefined4*)(0x14+param_1)=0;
if(iVar1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x248))((int)(iVar1));
}
return;
}

int sub_0071f960(void);
// @baa 0x0071fbe0
undefined4 ULensFlare::sub_0071fbe0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0071f960();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}
