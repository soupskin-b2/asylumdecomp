// Core_0560000.cpp (part 1 of 3): 186 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C {
    undefined4 sub_00565c50();
};

// @baa 0x00565c50
undefined4 C::sub_00565c50(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x90) != 0) {
    return *(undefined4 *)(param_1 + 0x80);
  }
  return *(undefined4 *)(param_1 + 0x94);
}

struct C_00565cb0 { int sub_00565cb0(void); };

// @baa 0x00565cb0
int C_00565cb0::sub_00565cb0(void) { return *(int*)((char*)this + 148); }

// @baa 0x00565cc0
int sub_00565cc0(int a0) { return a0; }

// @baa 0x00565cd0
int sub_00565cd0(int a0) { return a0; }

// @baa 0x00565d00
void sub_00565d00(void) {  }

// @baa 0x00565d10
void sub_00565d10(void) {  }

// @baa 0x00565d20
void sub_00565d20(void) {  }

// @baa 0x00565d30
float10 sub_00565d30(double param_1)
{
  return (float10)param_1;
}

struct C_00565d70 { void sub_00565d70(void); };

// @baa 0x00565d70
void C_00565d70::sub_00565d70(void) { *(int*)((char*)this + 64) = 1; }

struct C_00565d80 {
    void sub_00565d80();
};

// @baa 0x00565d80
void C_00565d80::sub_00565d80(void)
{
    int param_1 = (int)this;

  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
  return;
}

struct C_00565d90 {
    void sub_00565d90();
};

// @baa 0x00565d90
void C_00565d90::sub_00565d90(void)
{
    int param_1 = (int)this;

  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -1;
  return;
}

struct C_00565da0 { int sub_00565da0(void); };

// @baa 0x00565da0
int C_00565da0::sub_00565da0(void) { return *(int*)((char*)this + 4); }

struct C_00565db0 { int sub_00565db0(void); };

// @baa 0x00565db0
int C_00565db0::sub_00565db0(void) { return *(int*)((char*)this + 20); }

struct C_00565dc0 { int sub_00565dc0(void); };

// @baa 0x00565dc0
int C_00565dc0::sub_00565dc0(void) { return *(int*)((char*)this + 24); }

struct C_00565dd0 { int sub_00565dd0(void); };

// @baa 0x00565dd0
int C_00565dd0::sub_00565dd0(void) { return *(int*)((char*)this + 28); }

struct C_00565de0 { int sub_00565de0(void); };

// @baa 0x00565de0
int C_00565de0::sub_00565de0(void) { return *(int*)((char*)this + 36); }

struct C_00565df0 { int sub_00565df0(void); };

// @baa 0x00565df0
int C_00565df0::sub_00565df0(void) { return *(int*)((char*)this + 60); }

struct C_00565e00 {
    bool sub_00565e00();
};

// @baa 0x00565e00
bool C_00565e00::sub_00565e00(void)
{
    int param_1 = (int)this;

  return 0 < *(int *)(param_1 + 0x4c);
}

struct C_00565e10 { int sub_00565e10(void); };

// @baa 0x00565e10
int C_00565e10::sub_00565e10(void) { return *(int*)((char*)this + 80); }

struct C_00565e20 { int sub_00565e20(void); };

// @baa 0x00565e20
int C_00565e20::sub_00565e20(void) { return *(int*)((char*)this + 96); }

struct C_00565e30 { int sub_00565e30(void); };

// @baa 0x00565e30
int C_00565e30::sub_00565e30(void) { return *(int*)((char*)this + 100); }

struct C_00565e40 { int sub_00565e40(void); };

// @baa 0x00565e40
int C_00565e40::sub_00565e40(void) { return *(int*)((char*)this + 112); }

struct C_00566920 { int sub_00566920(void); };

// @baa 0x00566920
int C_00566920::sub_00566920(void) { return *(int*)((char*)this + 0); }

struct S {
    TArray<QWORD> Items; // 0x00
    QWORD* sub_00566930(INT Index);
};

// @baa 0x00566930
QWORD* S::sub_00566930(INT Index)
{
    return &Items(Index);
}

// @baa 0x00566980
void __stdcall sub_00566980(int a0, int a1) {  }

struct C_00566990 {
    int sub_00566990();
};

// @baa 0x00566990
int C_00566990::sub_00566990(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_005669a0 { int a, b; C_005669a0(int, int); };

// @baa 0x005669a0
C_005669a0::C_005669a0(int x, int y) : a(x), b(y) {}

struct C_005669c0 {
    int sub_005669c0();
};

// @baa 0x005669c0
int C_005669c0::sub_005669c0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

// @baa 0x005669f0
int sub_005669f0(int a0) { return *(int*)a0; }

struct C_00566a60 {
    void sub_00566a60(int *);
};

// @baa 0x00566a60
void C_00566a60::sub_00566a60(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = *(int *)(param_1 + 0x10);
  return;
}

// @baa 0x00566aa0
undefined4 sub_00566aa0(undefined4 * param_1)
{
  return *param_1;
}

// @baa 0x00566ab0
bool sub_00566ab0(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_00566b00 { int sub_00566b00(void); };

// @baa 0x00566b00
int C_00566b00::sub_00566b00(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00566b30 {
    undefined4 sub_00566b30();
};

// @baa 0x00566b30
undefined4 C_00566b30::sub_00566b30(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  return *param_1;
}

int sub_00627f70(...);
// @baa 0x00566bb0
void sub_00566bb0(undefined4 param_1)
{
  sub_00627f70(param_1,0x10,0);
  return;
}

struct C_00566c40 {
    int sub_00566c40(int);
};

// @baa 0x00566c40
int C_00566c40::sub_00566c40(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00566c50 { int sub_00566c50(void); };

// @baa 0x00566c50
int C_00566c50::sub_00566c50(void) { return *(int*)((char*)this + 20); }

struct C_00566c60 { int sub_00566c60(void); };

// @baa 0x00566c60
int C_00566c60::sub_00566c60(void) { return *(int*)((char*)this + 20); }

struct C_00566c70 { int sub_00566c70(void); };

// @baa 0x00566c70
int C_00566c70::sub_00566c70(void) { return *(int*)((char*)this + 20); }

struct C_00566c80 { int sub_00566c80(void); };

// @baa 0x00566c80
int C_00566c80::sub_00566c80(void) { return *(int*)((char*)this + 20); }

struct C_00566c90 { int sub_00566c90(void); };

// @baa 0x00566c90
int C_00566c90::sub_00566c90(void) { return *(int*)((char*)this + 20); }

struct C_00566ca0 { int sub_00566ca0(void); };

// @baa 0x00566ca0
int C_00566ca0::sub_00566ca0(void) { return *(int*)((char*)this + 20); }

struct C_00566cb0 {
    int sub_00566cb0(int);
};

// @baa 0x00566cb0
int C_00566cb0::sub_00566cb0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00566cc0 {
    int sub_00566cc0(int);
};

// @baa 0x00566cc0
int C_00566cc0::sub_00566cc0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00566cd0 {
    int sub_00566cd0(int);
};

// @baa 0x00566cd0
int C_00566cd0::sub_00566cd0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00566ce0 {
    int sub_00566ce0(int);
};

// @baa 0x00566ce0
int C_00566ce0::sub_00566ce0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00566cf0 {
    void sub_00566cf0(undefined4, undefined4);
};

int sub_00630f20(...);
// @baa 0x00566cf0
void C_00566cf0::sub_00566cf0(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;

  sub_00630f20(param_1,param_2,param_3);
  return;
}

struct C_00566d10 { float sub_00566d10(void); };

// @baa 0x00566d10
float C_00566d10::sub_00566d10(void) { return *(float*)((char*)this + 88); }

struct C_00566d20 {
    float10 sub_00566d20();
};

// @baa 0x00566d20
float10 C_00566d20::sub_00566d20(void)
{
    int param_1 = (int)this;

  return (float10)*(double *)(param_1 + 0x50);
}

struct C_00566dc0 {
    void sub_00566dc0();
};

// @baa 0x00566dc0
void C_00566dc0::sub_00566dc0(void)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x38);
  return;
}

extern undefined4 g_026760a4;
extern undefined4 g_026a1be8;
// @baa 0x00566dd0
void sub_00566dd0(void)
{
  g_026a1be8 = g_026a1be8 + 1;
  g_026760a4 = 1;
  return;
}

// @baa 0x00566df0
void sub_00566df0(void)
{
  g_026a1be8 = g_026a1be8 + -1;
  g_026760a4 = 0;
  return;
}

// @baa 0x00566e60
void sub_00566e60(void) {  }

typedef long LONG;

// Indirect call through the IAT slot; callee cleans its own arg (no pop after call).
extern "C" int (__stdcall *g_01e290cc)(LONG *);
struct C_00566f10 {
    void sub_00566f10();
};

// @baa 0x00566f10
void C_00566f10::sub_00566f10(void)
{
    g_01e290cc((LONG*)(((int)this) + 0x68));
}

// Indirect call through the IAT slot; callee cleans its own arg (no pop after call).
extern "C" int (__stdcall *g_01e290d0)(LONG *);
struct C_00566f20 {
    void sub_00566f20();
};

// @baa 0x00566f20
void C_00566f20::sub_00566f20(void)
{
    g_01e290d0((LONG*)(((int)this) + 0x68));
}

struct C_00567000 {
    virtual void v00();
    virtual void v01();
    virtual void v02();
    virtual void v03();
    virtual void v04();
    virtual void v05();
    virtual void v06();
    virtual void v07();
    virtual void v08();
    virtual void v09();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16(int);
    void sub_00567000(int x);
};

void C_00567000::v00() {}

void C_00567000::v01() {}

void C_00567000::v02() {}

void C_00567000::v03() {}

void C_00567000::v04() {}

void C_00567000::v05() {}

void C_00567000::v06() {}

void C_00567000::v07() {}

void C_00567000::v08() {}

void C_00567000::v09() {}

void C_00567000::v10() {}

void C_00567000::v11() {}

void C_00567000::v12() {}

void C_00567000::v13() {}

void C_00567000::v14() {}

void C_00567000::v15() {}

void C_00567000::v16(int x) {}

// @baa 0x00567000
void C_00567000::sub_00567000(int x)
{
    v16(x);
}

int sub_00567030(void);
// @baa 0x005670a0
bool UTexture2D::sub_005670a0(void)
{
    int param_1 = (int)this;

  sub_00567030();
  return *(int *)(param_1 + 0x34) == 0;
}

// @baa 0x005671f0
int sub_005671f0(void) { return 0; }

// @baa 0x00567280
void sub_00567280(void) {  }

struct C_00567c30 {
    void sub_00567c30();
};

// @baa 0x00567c30
void C_00567c30::sub_00567c30(void)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 1;
  return;
}

// @baa 0x00567c60
int sub_00567c60(void) { return 1; }

// @baa 0x00567c90
int sub_00567c90(void) { return 2; }

// @baa 0x00567cc0
int sub_00567cc0(void) { return 4; }

// @baa 0x00567cf0
int sub_00567cf0(void) { return 4; }

struct C_00567d20 { C_00567d20* sub_00567d20(void); };

// @baa 0x00567d20
C_00567d20* C_00567d20::sub_00567d20(void) { return this; }

struct C_00567e80 { void sub_00567e80(int a0); };

// @baa 0x00567e80
void C_00567e80::sub_00567e80(int a0) { *(int*)((char*)this + 140) = a0; }

struct C_00567e90 {
    undefined4 * sub_00567e90(undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4);
    int sub_005ead80(int, int, int, int, int, int);
};

extern undefined * g_01e7cf70;
// @baa 0x00567e90
undefined4 * C_00567e90::sub_00567e90(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_00567e90 *)(this))->sub_005ead80(0, param_3, param_4, param_5, param_6, param_7);
  *param_1 = (undefined4)(&g_01e7cf70);
  param_1[0xc] = param_8;
  param_1[0xd] = 0;
  return param_1;
}

struct C_view {
    int sub_005df8c0(int, int, int, int, int);
};

// @baa 0x00567ed0
undefined4 * UState::sub_00567ed0(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view *)(this))->sub_005df8c0(0, param_3, param_4, param_5, param_6);
  *param_1 = (undefined4)(&g_01e7cf70);
  param_1[0xd] = 0;
  return param_1;
}

int sub_005c7a20(void);
// @baa 0x00567f10
undefined4 * UStrProperty::sub_00567f10(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  param_1[0xc] = param_2;
  *param_1 = (undefined4)(&g_01e7cf70);
  return param_1;
}

// @baa 0x00567f50
void UField::vf_114(void) {  }

// @baa 0x00567fb0
int UField::vf_118(void) { return 0; }

// @baa 0x00567fc0
int UField::vf_110(void) { return 1; }

// @baa 0x00568010
IMPLEMENT_CLASS_AT(UField, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Core\\Src\\UnClass.cpp", 86);

// @baa 0x00568120
int UField::vf_000(void) { return 1; }

// @baa 0x00568130
bool UField::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00568580
int UConst::vf_000(void) { return 1; }

struct C_005685c0 { int sub_005685c0(void); };

// @baa 0x005685c0
int C_005685c0::sub_005685c0(void) { return *(int*)((char*)this + 4); }

struct C_005686d0 {
    undefined4 sub_005686d0();
};

// @baa 0x005686d0
undefined4 C_005686d0::sub_005686d0(void)
{
    int param_1 = (int)this;
  return *(undefined4 *)(param_1 + 4);
}

struct C_005686e0 { int sub_005686e0(void); };

// @baa 0x005686e0
int C_005686e0::sub_005686e0(void) { return *(int*)((char*)this + 4); }

struct C_005686f0 { int sub_005686f0(void); };

// @baa 0x005686f0
int C_005686f0::sub_005686f0(void) { return *(int*)((char*)this + 4); }

struct C_00568700 { int sub_00568700(void); };

// @baa 0x00568700
int C_00568700::sub_00568700(void) { return *(int*)((char*)this + 4); }

struct C_00568710 { int a, b, c; C_00568710(); };

// @baa 0x00568710
C_00568710::C_00568710() : a(0), b(0), c(0) {}

struct C_00568720 { int sub_00568720(void); };

// @baa 0x00568720
int C_00568720::sub_00568720(void) { return *(int*)((char*)this + 4); }

struct C_00568750 { int sub_00568750(void); };

// @baa 0x00568750
int C_00568750::sub_00568750(void) { return *(int*)((char*)this + 4); }

struct C_00568760 { void sub_00568760(int a0); };

// @baa 0x00568760
void C_00568760::sub_00568760(int a0) { *(int*)((char*)this + 12) = a0; }

struct C_00568770 { int a; C_00568770(int); };

// @baa 0x00568770
C_00568770::C_00568770(int x) : a(x) {}

struct C_00568790 {
    C_00568790 *sub_00568790();
};

// @baa 0x00568790
C_00568790 *C_00568790::sub_00568790()
{
    int *pp = (int *)this;
    *pp = *(int *)(*pp + 4);
    return this;
}

struct C_005687a0 { int a, b, c; C_005687a0(); };

// @baa 0x005687a0
C_005687a0::C_005687a0() : a(0), b(0), c(0) {}

struct C_005687b0 { int sub_005687b0(void); };

// @baa 0x005687b0
int C_005687b0::sub_005687b0(void) { return *(int*)((char*)this + 0); }

struct C_005687c0 { int sub_005687c0(void); };

// @baa 0x005687c0
int C_005687c0::sub_005687c0(void) { return *(int*)((char*)this + 4); }

struct S_005687d0 {
    TArray<QWORD> Items; // 0x00
    QWORD* sub_005687d0(INT Index);
};

// @baa 0x005687d0
QWORD* S_005687d0::sub_005687d0(INT Index)
{
    return &Items(Index);
}

struct C_00568820 { int a, b, c; C_00568820(); };

// @baa 0x00568820
C_00568820::C_00568820() : a(0), b(0), c(0) {}

struct C_00568830 { int sub_00568830(void); };

// @baa 0x00568830
int C_00568830::sub_00568830(void) { return *(int*)((char*)this + 4); }

struct C_00568840 {
    int Unk0;
    int Unk4;
    int sub_00568840();
};

// @baa 0x00568840
int C_00568840::sub_00568840()
{
    return Unk4 == 0 ? -1 : 0;
}

struct C_00568850 { int sub_00568850(void); };

// @baa 0x00568850
int C_00568850::sub_00568850(void) { return *(int*)((char*)this + 4); }

struct C_00568860 { int sub_00568860(void); };

// @baa 0x00568860
int C_00568860::sub_00568860(void) { return *(int*)((char*)this + 4); }

struct C_00568870 {
    int Unk0;
    int Unk4;
    int sub_00568870();
};

// @baa 0x00568870
int C_00568870::sub_00568870()
{
    return Unk4 == 0 ? -1 : 0;
}

struct C_00568880 { int sub_00568880(void); };

// @baa 0x00568880
int C_00568880::sub_00568880(void) { return *(int*)((char*)this + 4); }

struct C_00568890 {
    int Unk0;
    int Unk4;
    int sub_00568890();
};

// @baa 0x00568890
int C_00568890::sub_00568890()
{
    return Unk4 == 0 ? -1 : 0;
}

struct C_005688a0 { int sub_005688a0(void); };

// @baa 0x005688a0
int C_005688a0::sub_005688a0(void) { return *(int*)((char*)this + 4); }

extern char g_01e3f370[];
struct C_005688b0 { C_005688b0* sub_005688b0(int a0); };

// @baa 0x005688b0
C_005688b0* C_005688b0::sub_005688b0(int a0) { *(int*)((char*)this + 0) = (int)g_01e3f370; return this; }

struct C_005688c0 { int sub_005688c0(void); };

// @baa 0x005688c0
int C_005688c0::sub_005688c0(void) { return *(int*)((char*)this + 0); }

struct C_00568a60 { int sub_00568a60(void); };

// @baa 0x00568a60
int C_00568a60::sub_00568a60(void) { return *(int*)((char*)this + 0); }

struct C_00568b10 { int sub_00568b10(void); };

// @baa 0x00568b10
int C_00568b10::sub_00568b10(void) { return *(int*)((char*)this + 0); }

struct C_00568bb0 { int sub_00568bb0(void); };

// @baa 0x00568bb0
int C_00568bb0::sub_00568bb0(void) { return *(int*)((char*)this + 0); }

struct C_00568bc0 { int a, b, c; C_00568bc0(); };

// @baa 0x00568bc0
C_00568bc0::C_00568bc0() : a(0), b(0), c(0) {}

struct C_00568bd0 { int sub_00568bd0(void); };

// @baa 0x00568bd0
int C_00568bd0::sub_00568bd0(void) { return *(int*)((char*)this + 4); }

struct C_00568be0 {
    void sub_00568be0();
};

int sub_0053df70(...);
// @baa 0x00568be0
void C_00568be0::sub_00568be0(void)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  iVar1 = param_1[1];
  if (param_1[2] != iVar1) {
    param_1[2] = iVar1;
    if ((*param_1 != 0) || (iVar1 != 0)) {
      iVar1 = sub_0053df70(*param_1,iVar1 * 4,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_00568c60 { int sub_00568c60(void); };

// @baa 0x00568c60
int C_00568c60::sub_00568c60(void) { return *(int*)((char*)this + 20); }

// @baa 0x00568ce0
void __stdcall sub_00568ce0(int a0, int a1) {  }

struct C_00568cf0 { int sub_00568cf0(void); };

// @baa 0x00568cf0
int C_00568cf0::sub_00568cf0(void) { return *(int*)((char*)this + 0); }

struct C_0056a290 { C_0056a290* sub_0056a290(void); };

// @baa 0x0056a290
C_0056a290* C_0056a290::sub_0056a290(void) { *(int*)((char*)this + 0) = 0; return this; }

int sub_005413d0(...);
int sub_00569d00(...);
// @baa 0x0056a3f0
void sub_0056a3f0(undefined4 * param_1)
{
  undefined4 uVar1;
  
  uVar1 = sub_00569d00(param_1,0);
  sub_005413d0(*param_1,uVar1);
  return;
}

struct C_0056a410 {
    void sub_0056a410(undefined4);
};

extern undefined4 g_026667a8;
// @baa 0x0056a410
void C_0056a410::sub_0056a410(undefined4 param_2)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x90) != 0) {
    *(undefined4 *)(param_1 + 0x80) = param_2;
    return;
  }
  sub_00630f20(g_026667a8,L"Seeking not supported with FArchiveSaveCompressedProxy");
  return;
}

extern undefined4 g_026a1ca8;
// @baa 0x0056a530
undefined4 sub_0056a530(void)
{
  return g_026a1ca8;
}

extern "C" void sub_005664e0();
struct CNode {
    // 0x00
    void* Unk00;
    // 0x04
    void* Unk04;
    void sub_0056a630();
};

// @baa 0x0056a630
void CNode::sub_0056a630()
{
    Unk04 = *(void**)((char*)Unk04 + 0x34);
    sub_005664e0();
}

int sub_0053dfa0(...);
int sub_00567290(void);
// @baa 0x0056a640
undefined4 UTexture2D::sub_0056a640(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00567290();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0056a6f0 {
    undefined4 * sub_0056a6f0(byte);
};

extern undefined * g_01e72a60;
// @baa 0x0056a6f0
undefined4 * C_0056a6f0::sub_0056a6f0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01e72a60);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct S_0056a710 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_0056a710(INT Index);
};

// @baa 0x0056a710
DWORD* S_0056a710::sub_0056a710(INT Index)
{
    return &Items(Index);
}

struct S_0056a760 {
    TArray<BYTE> Items; // 0x00
    const BYTE* sub_0056a760(INT Index) const;
};

// @baa 0x0056a760
const BYTE* S_0056a760::sub_0056a760(INT Index) const
{
    return &Items(Index);
}

extern "C" void sub_005668c0();
struct CNode_0056a7d0 {
    // 0x00
    void* Unk00;
    // 0x04
    void* Unk04;
    void sub_0056a7d0();
};

// @baa 0x0056a7d0
void CNode_0056a7d0::sub_0056a7d0()
{
    Unk04 = *(void**)((char*)Unk04 + 0x34);
    sub_005668c0();
}

// @baa 0x0056a870
void __stdcall sub_0056a870(int a0, int a1) {  }

struct C_0056a880{
int sub_0056a880(undefined4*);
};

int sub_0053d240(...);
// @baa 0x0056a880
int C_0056a880::sub_0056a880(undefined4*param_2)
{
int*param_1=(int*)this;

undefined4*puVar1;
int iVar3;
int iVar2;

iVar2=param_1[1];
iVar3=iVar2+1;
param_1[1]=iVar3;
if(iVar3>param_1[2]){
iVar3=sub_0053d240(iVar3,param_1[2],8);
param_1[2]=iVar3;
if((*param_1!=0)||(iVar3)){
iVar3=sub_0053df70(*param_1,iVar3*8,8);
*param_1=iVar3;
}
}
puVar1=(undefined4*)(*param_1+iVar2*8);
if(puVar1!=(undefined4*)0x0){
*puVar1=*param_2;
puVar1[1]=param_2[1];
}
return iVar2;
}

struct C_0056a8e0 {
    int sub_0056a8e0(int);
};

// @baa 0x0056a8e0
int C_0056a8e0::sub_0056a8e0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

struct C_0056a8f0 { int sub_0056a8f0(void); };

// @baa 0x0056a8f0
int C_0056a8f0::sub_0056a8f0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_0056a930 {
    int sub_0056a930(int);
};

// @baa 0x0056a930
int C_0056a930::sub_0056a930(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

// @baa 0x0056a950
void sub_0056a950(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_0056a960 {
    int sub_0056a960(int);
};

// @baa 0x0056a960
int C_0056a960::sub_0056a960(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + param_2 * 0x14;
}

struct C_0056a970 { int sub_0056a970(void); };

// @baa 0x0056a970
int C_0056a970::sub_0056a970(void) { return *(int*)((char*)this + 20); }

struct C_0056a980 {
    int sub_0056a980(int);
};

// @baa 0x0056a980
int C_0056a980::sub_0056a980(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0056a990 { int sub_0056a990(void); };

// @baa 0x0056a990
int C_0056a990::sub_0056a990(void) { return *(int*)((char*)this + 20); }

struct C_0056a9a0 {
    int sub_0056a9a0();
};

// @baa 0x0056a9a0
int C_0056a9a0::sub_0056a9a0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0056a9c0 {
    int sub_0056a9c0();
};

// @baa 0x0056a9c0
int C_0056a9c0::sub_0056a9c0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0056a9e0 {
    int sub_0056a9e0();
};

// @baa 0x0056a9e0
int C_0056a9e0::sub_0056a9e0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0056aa00 {
    int sub_0056aa00();
};

// @baa 0x0056aa00
int C_0056aa00::sub_0056aa00(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0056aa20 {
    int sub_0056aa20(int);
};

// @baa 0x0056aa20
int C_0056aa20::sub_0056aa20(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_0056aa40 {
    int sub_0056aa40(int);
};

// @baa 0x0056aa40
int C_0056aa40::sub_0056aa40(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_0056aa50 {
    int sub_0056aa50(int);
};

// @baa 0x0056aa50
int C_0056aa50::sub_0056aa50(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_0056aa60 {
    int sub_0056aa60(int);
};

// @baa 0x0056aa60
int C_0056aa60::sub_0056aa60(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_0056aa70 {
    int sub_0056aa70(int);
};

// @baa 0x0056aa70
int C_0056aa70::sub_0056aa70(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0056aa80 {
    int sub_0056aa80(int);
};

// @baa 0x0056aa80
int C_0056aa80::sub_0056aa80(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_0056aa90 {
    int sub_0056aa90();
};

// @baa 0x0056aa90
int C_0056aa90::sub_0056aa90(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0056aab0 {
    int sub_0056aab0();
};

// @baa 0x0056aab0
int C_0056aab0::sub_0056aab0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x0056aad0
void sub_0056aad0(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    param_1[4] = param_2[4];
  }
  return;
}

// @baa 0x0056ab00
void sub_0056ab00(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  return;
}

// @baa 0x0056bfd0
int __stdcall sub_0056bfd0(int a0, int a1) { return 0; }

struct E { BYTE Bytes[92]; };

struct S_0056e710 {
    TArray<E> Items; // 0x00
    E* sub_0056e710(INT Index);
};

// @baa 0x0056e710
E* S_0056e710::sub_0056e710(INT Index)
{
    return &Items(Index);
}

struct E_0056e8c0 { BYTE Bytes[80]; };

struct S_0056e8c0 {
    TArray<E_0056e8c0> Items; // 0x00
    E_0056e8c0* sub_0056e8c0(INT Index);
};

// @baa 0x0056e8c0
E_0056e8c0* S_0056e8c0::sub_0056e8c0(INT Index)
{
    return &Items(Index);
}

struct S_0056e910 {
    TArray<QWORD> Items; // 0x00
    QWORD* sub_0056e910(INT Index);
};

// @baa 0x0056e910
QWORD* S_0056e910::sub_0056e910(INT Index)
{
    return &Items(Index);
}

struct C_0056e960 { int sub_0056e960(void); };

// @baa 0x0056e960
int C_0056e960::sub_0056e960(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_0056e970 {
    void sub_0056e970();
};

int sub_00568c10(void);
extern undefined4 g_01e7d100;
// @baa 0x0056e970
void C_0056e970::sub_0056e970(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01e7d100);
  sub_00568c10();
  return;
}

struct C_0056f6b0 {
    int sub_0056f6b0();
};

// @baa 0x0056f6b0
int C_0056f6b0::sub_0056f6b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_0056f6c0 {
    int sub_0056f6c0(int);
};

// @baa 0x0056f6c0
int C_0056f6c0::sub_0056f6c0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x2c + *param_1;
}

struct C_0056f6d0 {
    int sub_0056f6d0();
};

// @baa 0x0056f6d0
int C_0056f6d0::sub_0056f6d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_0056f6e0 {
    int sub_0056f6e0();
};

// @baa 0x0056f6e0
int C_0056f6e0::sub_0056f6e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct C_0056f6f0 {
    int sub_0056f6f0();
};

// @baa 0x0056f6f0
int C_0056f6f0::sub_0056f6f0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0056f710 {
    int sub_0056f710();
};

// @baa 0x0056f710
int C_0056f710::sub_0056f710(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct C_0056f720 {
    int sub_0056f720();
};

// @baa 0x0056f720
int C_0056f720::sub_0056f720(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0056f740 {
    int sub_0056f740();
};

// @baa 0x0056f740
int C_0056f740::sub_0056f740(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct C_0056f750 {
    int sub_0056f750();
};

// @baa 0x0056f750
int C_0056f750::sub_0056f750(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0056f770 {
    int sub_0056f770();
};

// @baa 0x0056f770
int C_0056f770::sub_0056f770(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_0056f780 {
    int sub_0056f780();
};

// @baa 0x0056f780
int C_0056f780::sub_0056f780(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0056f7a0 {
    int sub_0056f7a0();
};

// @baa 0x0056f7a0
int C_0056f7a0::sub_0056f7a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_0056f7b0 {
    int sub_0056f7b0();
};

// @baa 0x0056f7b0
int C_0056f7b0::sub_0056f7b0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0056f7d0 {
    int sub_0056f7d0();
};

// @baa 0x0056f7d0
int C_0056f7d0::sub_0056f7d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_0056f7e0 {
    int sub_0056f7e0();
};

// @baa 0x0056f7e0
int C_0056f7e0::sub_0056f7e0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0056f800 {
    int sub_0056f800();
};

// @baa 0x0056f800
int C_0056f800::sub_0056f800(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0056f820 {
    int sub_0056f820();
};

// @baa 0x0056f820
int C_0056f820::sub_0056f820(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_0056f830 {
    int sub_0056f830();
};

// @baa 0x0056f830
int C_0056f830::sub_0056f830(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0056f850 {
    int sub_0056f850();
};

// @baa 0x0056f850
int C_0056f850::sub_0056f850(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

// @baa 0x0056f860
void sub_0056f860(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct E_0056f890 { BYTE Bytes[44]; };

struct S_0056f890 {
    TArray<E_0056f890> Items; // 0x00
    E_0056f890* sub_0056f890(INT Index);
};

// @baa 0x0056f890
E_0056f890* S_0056f890::sub_0056f890(INT Index)
{
    return &Items(Index);
}

// @baa 0x0056fb80
void sub_0056fb80(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  return;
}

// @baa 0x0056fba0
void sub_0056fba0(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

// @baa 0x0056fbc0
void sub_0056fbc0(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

// @baa 0x0056fbe0
void sub_0056fbe0(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  return;
}

// @baa 0x0056fc00
void sub_0056fc00(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

// @baa 0x0056fd30
void sub_0056fd30(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

// @baa 0x0056fd50
void sub_0056fd50(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

// @baa 0x0056fd70
void sub_0056fd70(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

// @baa 0x0056fd90
void sub_0056fd90(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  return;
}

// @baa 0x00567f80
void UField::Serialize( FArchive& Ar )
{
	Super::Serialize( Ar );
	Ar << SuperField << Next;
}

struct UClass_ : public UClass
{
    void sub_005f2bf0(UField* UField::* Field);
};

// @baa 0x00567f30
void UField::StaticConstructor()
{
    UClass* C = Class;
    ((UClass_*)C)->sub_005f2bf0(&UField::SuperField);
    ((UClass_*)C)->sub_005f2bf0(&UField::Next);
}

struct sub_00565e50_Base
{
    virtual ~sub_00565e50_Base() {}
    virtual void sub_00565e51(sub_00565e50_Base* Other, INT Mode) = 0;
};

// @baa 0x00565e50
sub_00565e50_Base* __cdecl sub_00565e50(sub_00565e50_Base* A, sub_00565e50_Base* B)
{
    A->sub_00565e51(B, 1);
    return A;
}

struct SThreeDWORDs {
    DWORD A;
    DWORD B;
    DWORD C;

    SThreeDWORDs& sub_00568b90(INT FA, INT FB, INT FC);
};

// @baa 0x00568b90
SThreeDWORDs& SThreeDWORDs::sub_00568b90(INT FA, INT FB, INT FC)
{
    A = FA;
    B = FB;
    C = FC;
    return *this;
}

// 12-byte value object; assignment overwrites the destination's fields
// with the source's copy and returns the destination.
struct C005685d0
{
    DWORD Part0;
    DWORD Part1;
    DWORD Part2;

    __declspec(noinline) C005685d0& sub_005685d0(const C005685d0& Source)
    {
        Part0 = Source.Part0;
        Part1 = Source.Part1;
        Part2 = Source.Part2;
        return *this;
    }
};

// @baa 0x005685d0
void Probe005685d0(C005685d0* Dest, C005685d0* Source)
{
    Dest->sub_005685d0(*Source);
}
