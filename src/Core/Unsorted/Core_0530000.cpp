// Core_0530000.cpp (part 1 of 2): 35 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

extern char g_02666094[];
// @baa 0x00537210
int sub_00537210(void) { return (int)g_02666094; }

struct A_00537220 { virtual void sub_00539560(); char pad[320]; };

struct B_00537220 { virtual void sub_00539560(); };

struct C_00537220 : A_00537220, B_00537220 { virtual void sub_00539560(); C_00537220(); };

C_00537220::C_00537220() {}

// @baa 0x00537220
void C_00537220::sub_00539560() {}

struct C {
    undefined4 sub_00538980(byte);
};

int sub_00402660(...);
int sub_005352e0(void);
// @baa 0x00538980
undefined4 C::sub_00538980(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_005352e0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_00538b90 { void sub_00536cb0(); void sub_00538b90(int); };

// @baa 0x00538b90
void C_00538b90::sub_00538b90(int) { sub_00536cb0(); }

struct C_00539560 {
    undefined4 sub_00539560(byte);
};

int sub_00537230(void);
// @baa 0x00539560
undefined4 C_00539560::sub_00539560(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00537230();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_0053d190 {
    bool sub_0053d190();
};

// @baa 0x0053d190
bool C_0053d190::sub_0053d190(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 4) != 0;
}

/* math.h's float overload of atan2, out of line */
// @baa 0x0053d1c0
float sub_0053d1c0(float y, float x)
{
    return atan2(y, x);
}

struct C_0053d5b0 {
    virtual int v00();
    virtual int v01();
    virtual int v02();
    virtual int v03();
    virtual int v04();
    virtual int v05();
    virtual int v06();
    virtual int v07();
    virtual int v08();
    virtual int v09();
    virtual int v10();
    virtual int v11();
    virtual int v12();
    virtual int v13();
    virtual int v14();
    virtual int v15();
    virtual int v16();
    virtual int v17();
    virtual int v18();
    virtual int v19();
    virtual int v20();
    virtual int v21();
    virtual int v22();
    virtual int v23();
    virtual int v24();
    virtual int v25();
    virtual int v26();
    virtual int v27();
    virtual int v28();
    virtual int v29();
    virtual int v30();
    virtual int v31();
    virtual int v32();
    virtual int v33();
    virtual int sub_00546de0();
    int sub_0053d5b0();
};

int C_0053d5b0::v00() { return 0; }

int C_0053d5b0::v01() { return 0; }

int C_0053d5b0::v02() { return 0; }

int C_0053d5b0::v03() { return 0; }

int C_0053d5b0::v04() { return 0; }

int C_0053d5b0::v05() { return 0; }

int C_0053d5b0::v06() { return 0; }

int C_0053d5b0::v07() { return 0; }

int C_0053d5b0::v08() { return 0; }

int C_0053d5b0::v09() { return 0; }

int C_0053d5b0::v10() { return 0; }

int C_0053d5b0::v11() { return 0; }

int C_0053d5b0::v12() { return 0; }

int C_0053d5b0::v13() { return 0; }

int C_0053d5b0::v14() { return 0; }

int C_0053d5b0::v15() { return 0; }

int C_0053d5b0::v16() { return 0; }

int C_0053d5b0::v17() { return 0; }

int C_0053d5b0::v18() { return 0; }

int C_0053d5b0::v19() { return 0; }

int C_0053d5b0::v20() { return 0; }

int C_0053d5b0::v21() { return 0; }

int C_0053d5b0::v22() { return 0; }

int C_0053d5b0::v23() { return 0; }

int C_0053d5b0::v24() { return 0; }

int C_0053d5b0::v25() { return 0; }

int C_0053d5b0::v26() { return 0; }

int C_0053d5b0::v27() { return 0; }

int C_0053d5b0::v28() { return 0; }

int C_0053d5b0::v29() { return 0; }

int C_0053d5b0::v30() { return 0; }

int C_0053d5b0::v31() { return 0; }

int C_0053d5b0::v32() { return 0; }

int C_0053d5b0::v33() { return 0; }

INT UDistributionFloat::vf_08c() { return 0; }

// @baa 0x0053d5b0
int C_0053d5b0::sub_0053d5b0() { return sub_00546de0(); }

struct C_view {
    int sub_005c1a10(int);
};

// @baa 0x0053d5c0
void UDistributionFloat::PostEditChange(UProperty* param_2)
{
    int param_1 = (int)this;
  Super::PostEditChange(param_2);
  *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) | 2;
  return;
}

// @baa 0x0053d5e0
float UDistributionFloat::vf_11c(float a, float b)
{
    return 0.0f;
}

struct C_0053d670 {
    virtual int v00();
    virtual int v01();
    virtual int v02();
    virtual int v03();
    virtual int v04();
    virtual int v05();
    virtual int v06();
    virtual int v07();
    virtual int v08();
    virtual int v09();
    virtual int v10();
    virtual int v11();
    virtual int v12();
    virtual int v13();
    virtual int v14();
    virtual int v15();
    virtual int v16();
    virtual int v17();
    virtual int v18();
    virtual int v19();
    virtual int v20();
    virtual int v21();
    virtual int v22();
    virtual int v23();
    virtual int v24();
    virtual int v25();
    virtual int v26();
    virtual int v27();
    virtual int v28();
    virtual int v29();
    virtual int v30();
    virtual int v31();
    virtual int v32();
    virtual int v33();
    virtual int sub_00546de0();
    int sub_0053d670();
};

int C_0053d670::v00() { return 0; }

int C_0053d670::v01() { return 0; }

int C_0053d670::v02() { return 0; }

int C_0053d670::v03() { return 0; }

int C_0053d670::v04() { return 0; }

int C_0053d670::v05() { return 0; }

int C_0053d670::v06() { return 0; }

int C_0053d670::v07() { return 0; }

int C_0053d670::v08() { return 0; }

int C_0053d670::v09() { return 0; }

int C_0053d670::v10() { return 0; }

int C_0053d670::v11() { return 0; }

int C_0053d670::v12() { return 0; }

int C_0053d670::v13() { return 0; }

int C_0053d670::v14() { return 0; }

int C_0053d670::v15() { return 0; }

int C_0053d670::v16() { return 0; }

int C_0053d670::v17() { return 0; }

int C_0053d670::v18() { return 0; }

int C_0053d670::v19() { return 0; }

int C_0053d670::v20() { return 0; }

int C_0053d670::v21() { return 0; }

int C_0053d670::v22() { return 0; }

int C_0053d670::v23() { return 0; }

int C_0053d670::v24() { return 0; }

int C_0053d670::v25() { return 0; }

int C_0053d670::v26() { return 0; }

int C_0053d670::v27() { return 0; }

int C_0053d670::v28() { return 0; }

int C_0053d670::v29() { return 0; }

int C_0053d670::v30() { return 0; }

int C_0053d670::v31() { return 0; }

int C_0053d670::v32() { return 0; }

int C_0053d670::v33() { return 0; }

INT UDistributionVector::vf_08c() { return 0; }

// @baa 0x0053d670
int C_0053d670::sub_0053d670() { return sub_00546de0(); }

// @baa 0x0053d680
void UDistributionVector::PostEditChange(UProperty* param_2)
{
    int param_1 = (int)this;
  Super::PostEditChange(param_2);
  *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) | 2;
  return;
}

// @baa 0x0053d760
DWORD __stdcall sub_0053d760(DWORD a) {
    return a | 0xFFFFFFFF;
}

// @baa 0x0053d770
DWORD __stdcall sub_0053d770(int arg)
{
    return -1;
}

struct C_0053d910 { int sub_0053d910(void); };

// @baa 0x0053d910
int C_0053d910::sub_0053d910(void) { return *(int*)((char*)this + 152); }

struct C_0053d920 { int sub_0053d920(void); };

// @baa 0x0053d920
int C_0053d920::sub_0053d920(void) { return *(int*)((char*)this + 148); }

struct C_0053d960 { int sub_0053d960(void); };

// @baa 0x0053d960
int C_0053d960::sub_0053d960(void) { return *(int*)((char*)this + 148); }

// @baa 0x0053da10
int __stdcall sub_0053da10(int a0) { return 0; }

// @baa 0x0053da40
void __stdcall sub_0053da40(int a0) {  }

struct S_0053ddf0 { int sub_005cae00(int); };

// @baa 0x0053ddf0
int sub_0053ddf0(S_0053ddf0 *s, int a) { return s->sub_005cae00(a); }

// @baa 0x0053de20
int sub_0053de20(int param_1)
{
  int iVar1;
  
  if (param_1 == 0) {
    return 1;
  }
  iVar1 = sub_0053de20(param_1 + -1);
  return iVar1 * param_1;
}

struct C_0053e120 { int sub_0053e120(void); };

// @baa 0x0053e120
int C_0053e120::sub_0053e120(void) { return *(int*)((char*)this + 4); }

struct C_0053e130 { int sub_0053e130(void); };

// @baa 0x0053e130
int C_0053e130::sub_0053e130(void) { return *(int*)((char*)this + 12); }

struct C_0053e140 { int sub_0053e140(void); };

// @baa 0x0053e140
int C_0053e140::sub_0053e140(void) { return *(int*)((char*)this + 4); }

struct C_0053e150 { int sub_0053e150(void); };

// @baa 0x0053e150
int C_0053e150::sub_0053e150(void) { return *(int*)((char*)this + 4); }

struct C_0053e160 { int sub_0053e160(void); };

// @baa 0x0053e160
int C_0053e160::sub_0053e160(void) { return *(int*)((char*)this + 4); }

struct C_0053e170 { int sub_0053e170(void); };

// @baa 0x0053e170
int C_0053e170::sub_0053e170(void) { return *(int*)((char*)this + 4); }

struct C_0053e180 { int sub_0053e180(void); };

// @baa 0x0053e180
int C_0053e180::sub_0053e180(void) { return *(int*)((char*)this + 4); }

struct C_0053e190 { C_0053e190* sub_0053e190(void); };

// @baa 0x0053e190
C_0053e190* C_0053e190::sub_0053e190(void) { return this; }

struct C_0053e1a0 { int sub_0053e1a0(void); };

// @baa 0x0053e1a0
int C_0053e1a0::sub_0053e1a0(void) { return *(int*)((char*)this + 4); }

struct C_0053e1b0 { int sub_0053e1b0(void); };

// @baa 0x0053e1b0
int C_0053e1b0::sub_0053e1b0(void) { return *(int*)((char*)this + 4); }

struct C_0053e1c0 { int sub_0053e1c0(void); };

// @baa 0x0053e1c0
int C_0053e1c0::sub_0053e1c0(void) { return *(int*)((char*)this + 4); }

// @baa 0x0053e200
int sub_0053e200(float param_1)
{
  return (int)param_1;
}

// @baa 0x0053ffe0
int sub_0053ffe0(int param_1, int param_2)
{
  return (param_1 + 1) * param_1 + param_2;
}

int sub_0059cb80(void);
int sub_005a1290(...);
extern undefined4 g_0268d088;
// @baa 0x0053fff0
int sub_0053fff0(void)
{
  if (g_0268d088 == 0) {
    g_0268d088 = sub_005a1290(L"Core");
    sub_0059cb80();
  }
  return g_0268d088;
}
