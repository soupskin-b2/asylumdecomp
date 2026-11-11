// GFx_19e0000.cpp (part 2 of 4): 81 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct A_019e0ad0 { virtual void sub_019e1070(); char pad[12]; };

struct B_019e0ad0 { virtual void sub_019e1070(); };

struct C_019e0ad0 : A_019e0ad0, B_019e0ad0 { virtual void sub_019e1070(); C_019e0ad0(); };

C_019e0ad0::C_019e0ad0() {}

// @baa 0x019e0ad0
void C_019e0ad0::sub_019e1070() {}

struct A_019e0ae0 { virtual void sub_019e1070(); char pad[48]; };

struct B_019e0ae0 { virtual void sub_019e1070(); };

struct C_019e0ae0 : A_019e0ae0, B_019e0ae0 { virtual void sub_019e1070(); C_019e0ae0(); };

C_019e0ae0::C_019e0ae0() {}

// @baa 0x019e0ae0
void C_019e0ae0::sub_019e1070() {}

struct C {
    undefined4 * sub_019e1090(undefined4, undefined4);
    int sub_019924d0(int);
    int sub_019068e0(int, int);
};

extern undefined4 g_023ff95c;
extern undefined4 g_023ff9b4;
// @baa 0x019e1090
undefined4 * C::sub_019e1090(undefined4 param_2, undefined4 param_3)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C *)(this))->sub_019924d0(0);
  *param_1 = (undefined4)((&g_023ff9b4));
  param_1[4] = (undefined4)((&g_023ff95c));
  ((C *)(((char *)this + 0x10)))->sub_019068e0(param_2, param_3);
  return param_1;
}

struct A_019e10c0 { virtual void sub_019e16f0(); char pad[12]; };

struct B_019e10c0 { virtual void sub_019e16f0(); };

struct C_019e10c0 : A_019e10c0, B_019e10c0 { virtual void sub_019e16f0(); C_019e10c0(); };

C_019e10c0::C_019e10c0() {}

// @baa 0x019e10c0
void C_019e10c0::sub_019e16f0() {}

struct C_019e1120 {
    undefined4 * sub_019e1120(undefined4);
    int sub_019924d0(int);
    int sub_019dfdc0(int);
};

// @baa 0x019e1120
undefined4 * C_019e1120::sub_019e1120(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_019e1120 *)(this))->sub_019924d0(0);
  *param_1 = (undefined4)((&g_023ff9b4));
  param_1[4] = (undefined4)((&g_023ff95c));
  ((C_019e1120 *)(this))->sub_019dfdc0(param_2);
  return param_1;
}

struct A_019e1290 { virtual void sub_019e16d0(); char pad[12]; };

struct B_019e1290 { virtual void sub_019e16d0(); };

struct C_019e1290 : A_019e1290, B_019e1290 { virtual void sub_019e16d0(); C_019e1290(); };

C_019e1290::C_019e1290() {}

// @baa 0x019e1290
void C_019e1290::sub_019e16d0() {}

struct A_019e1790 { virtual void sub_019e1910(); char pad[12]; };

struct B_019e1790 { virtual void sub_019e1910(); };

struct C_019e1790 : A_019e1790, B_019e1790 { virtual void sub_019e1910(); C_019e1790(); };

C_019e1790::C_019e1790() {}

// @baa 0x019e1790
void C_019e1790::sub_019e1910() {}

struct C_019e19f0 {
    undefined4 sub_019e19f0();
    int sub_01971ed0();
    int sub_019e1940();
};

// @baa 0x019e19f0
undefined4 C_019e19f0::sub_019e19f0(void)
{
    undefined4 param_1 = (undefined4)this;
  ((C_019e19f0 *)(((char *)this + 0x22c)))->sub_01971ed0();
  ((C_019e19f0 *)(this))->sub_019e1940();
  return param_1;
}

struct C_019e2180 {
    undefined4 sub_019e2180();
    int sub_01972280(int, int);
};

// @baa 0x019e2180
undefined4 C_019e2180::sub_019e2180(void)
{
    undefined4 param_1 = (undefined4)this;
  ((C_019e2180 *)(((char *)this + 8)))->sub_01972280(0, 0);
  return param_1;
}

struct M_019e2290 { void sub_019722d0(); };

struct C_019e2290 { char pad[8]; M_019e2290 m; void sub_019e2290(); };

// @baa 0x019e2290
void C_019e2290::sub_019e2290() { m.sub_019722d0(); }

struct C_019e22a0 {
    undefined4 * sub_019e22a0(undefined4 *);
    int sub_01972a00(int);
};

// @baa 0x019e22a0
undefined4 * C_019e22a0::sub_019e22a0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  ((C_019e22a0 *)(((char *)this + 8)))->sub_01972a00((int)(param_2 + 2));
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  return param_1;
}

struct C_019e2570 { int a, b, c; C_019e2570(); };

// @baa 0x019e2570
C_019e2570::C_019e2570() : a(0), b(0), c(0) {}

struct C_019e2580 { int a, b, c; C_019e2580(); };

// @baa 0x019e2580
C_019e2580::C_019e2580() : a(0), b(0), c(0) {}

struct C_019e2600 {
    undefined4 sub_019e2600(byte);
    int sub_019722d0();
};

int sub_00402660(...);
// @baa 0x019e2600
undefined4 C_019e2600::sub_019e2600(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_019e2600 *)(((char *)this + 8)))->sub_019722d0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_019e2740 {
    undefined4 * sub_019e2740(undefined4 *);
    int sub_019729b0(int, int);
};

// @baa 0x019e2740
undefined4 * C_019e2740::sub_019e2740(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  ((C_019e2740 *)(((char *)this + 8)))->sub_019729b0((int)(param_2 + 2), 0);
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  return param_1;
}

struct C_019e2780 { int a, b; C_019e2780(int, int); };

// @baa 0x019e2780
C_019e2780::C_019e2780(int x, int y) : a(x), b(y) {}

struct C_019e3220 { void sub_019e30a0(int); void sub_019e3220(); };

// @baa 0x019e3220
void C_019e3220::sub_019e3220() { sub_019e30a0(0); }

struct S018d4a70 {
    int Data;
    int Count;
    int SizeFlags;
    void sub_019e30a0(int NewNum);
    void sub_019e3990();
};

void __stdcall sub_018d7170(int A);
// @baa 0x019e3990
void S018d4a70::sub_019e3990()
{
    S018d4a70* Self = this;
    sub_019e30a0(0);
    if (Self->Data)
        sub_018d7170(Self->Data);
}

struct C_019e3a10 {
    undefined4 * sub_019e3a10(undefined4);
    int sub_019e3230(int);
};

// @baa 0x019e3a10
undefined4 * C_019e3a10::sub_019e3a10(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  ((C_019e3a10 *)(this))->sub_019e3230(param_2);
  return param_1;
}

struct C_019e3bc0 {
    void sub_019e3bc0();
    int sub_019e3190(int);
};

// @baa 0x019e3bc0
void C_019e3bc0::sub_019e3bc0(void)
{
    int param_1 = (int)this;
  int iVar1;
  iVar1 = *(int *)(param_1 + 0x38) + 1;
  ((C_019e3bc0 *)(((char *)this + 0x34)))->sub_019e3190(iVar1);
  *(undefined4 *)(*(int *)(param_1 + 0x34) + -4 + iVar1 * 4) = 0;
  return;
}

struct C_019e4000 { int a, b, c; C_019e4000(); };

// @baa 0x019e4000
C_019e4000::C_019e4000() : a(0), b(0), c(0) {}

struct S018d4a70_019e4010 {
    int Data;
    int Count;
    int SizeFlags;
    void sub_019e30a0(int NewNum);
    void sub_019e4010();
};

// @baa 0x019e4010
void S018d4a70_019e4010::sub_019e4010()
{
    S018d4a70_019e4010* Self = this;
    sub_019e30a0(0);
    if (Self->Data)
        sub_018d7170(Self->Data);
}

struct C_019e4030 { int a, b, c; C_019e4030(); };

// @baa 0x019e4030
C_019e4030::C_019e4030() : a(0), b(0), c(0) {}

struct C_019e4050 {
    undefined4 * sub_019e4050(undefined4);
    int sub_019e3230(int);
};

// @baa 0x019e4050
undefined4 * C_019e4050::sub_019e4050(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  ((C_019e4050 *)(this))->sub_019e3230(param_2);
  return param_1;
}

struct A_019e5310 { virtual void sub_019e5c30(); char pad[12]; };

struct B_019e5310 { virtual void sub_019e5c30(); };

struct C_019e5310 : A_019e5310, B_019e5310 { virtual void sub_019e5c30(); C_019e5310(); };

C_019e5310::C_019e5310() {}

// @baa 0x019e5310
void C_019e5310::sub_019e5c30() {}

struct A_019e57d0 { virtual void sub_019e5bd0(); char pad[12]; };

struct B_019e57d0 { virtual void sub_019e5bd0(); };

struct C_019e57d0 : A_019e57d0, B_019e57d0 { virtual void sub_019e5bd0(); C_019e57d0(); };

C_019e57d0::C_019e57d0() {}

// @baa 0x019e57d0
void C_019e57d0::sub_019e5bd0() {}

struct A_019e5c90 { virtual void sub_019e5fd0(); char pad[12]; };

struct B_019e5c90 { virtual void sub_019e5fd0(); };

struct C_019e5c90 : A_019e5c90, B_019e5c90 { virtual void sub_019e5fd0(); C_019e5c90(); };

C_019e5c90::C_019e5c90() {}

// @baa 0x019e5c90
void C_019e5c90::sub_019e5fd0() {}

struct A_019e5e10 { virtual void sub_019e5e20(); char pad[12]; };

struct B_019e5e10 { virtual void sub_019e5e20(); };

struct C_019e5e10 : A_019e5e10, B_019e5e10 { virtual void sub_019e5e20(); C_019e5e10(); };

C_019e5e10::C_019e5e10() {}

// @baa 0x019e5e10
void C_019e5e10::sub_019e5e20() {}

// @baa 0x019e6030
bool UGFxDataStoreSubscriber::sub_019e6030(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 != param_2;
}

// @baa 0x019e6040
void UGFxDataStoreSubscriber::sub_019e6040(int a0) { *(int*)((char*)this + 36) = a0; }

struct C_019e6050 {
    char pad[0x20];
    float f;
    void sub_019e6050(float a);
};

// @baa 0x019e6050
void C_019e6050::sub_019e6050(float a)
{
    f = a;
}

// @baa 0x019e6060
uint UGFxDataStoreSubscriber::sub_019e6060(void)
{
    uint * param_1 = (uint *)this;

  return *param_1 >> 1 & 1;
}

// @baa 0x019e6070
bool UGFxDataStoreSubscriber::sub_019e6070(void)
{
    uint * param_1 = (uint *)this;

  return (*param_1 & 3) == 0;
}

// @baa 0x019e6080
void UGFxDataStoreSubscriber::sub_019e6080(char param_2)
{
    uint * param_1 = (uint *)this;

  if (param_2 != '\0') {
    *param_1 = *param_1 | 2;
    return;
  }
  *param_1 = *param_1 & 0xfffffffd;
  return;
}

// @baa 0x019e60a0
void UGFxDataStoreSubscriber::sub_019e60a0(void)
{
    uint * param_1 = (uint *)this;

  *param_1 = *param_1 & 0xfffffffe;
  return;
}

// @baa 0x019e60b0
int UGFxDataStoreSubscriber::sub_019e60b0(void) { return *(int*)((char*)this + 0); }

// @baa 0x019e60e0
undefined4 UGFxDataStoreSubscriber::sub_019e60e0(void)
{
    int param_1 = (int)this;
  return *(undefined4 *)(*(int *)(param_1 + 4) + 0x18);
}

struct C_view {
    int sub_019e61a0(int);
};

// @baa 0x019e61d0
int UGFxDataStoreSubscriber::sub_019e61d0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_view *)(this))->sub_019e61a0(param_2);
  if ((iVar1 == -1) ||
     (iVar1 = *(int *)(*param_1 + 4 + iVar1 * 8), *(int *)(iVar1 + 0x18) != param_2)) {
    iVar1 = 0;
  }
  return iVar1;
}

// @baa 0x019e6200
undefined4 UGFxDataStoreSubscriber::sub_019e6200(void)
{
    int * param_1 = (int *)this;

  if (param_1[1] != 0) {
    return *(undefined4 *)(*(int *)(*param_1 + -4 + param_1[1] * 8) + 0x18);
  }
  return 0xffffffff;
}

struct C_019e6df0 { int a; C_019e6df0(int); };

// @baa 0x019e6df0
C_019e6df0::C_019e6df0(int x) : a(x) {}

struct C_019e6e90 { int a; C_019e6e90(int); };

// @baa 0x019e6e90
C_019e6e90::C_019e6e90(int x) : a(x) {}

struct A_019e79a0 { virtual void sub_019e81f0(); char pad[12]; };

struct B_019e79a0 { virtual void sub_019e81f0(); };

struct C_019e79a0 : A_019e79a0, B_019e79a0 { virtual void sub_019e81f0(); C_019e79a0(); };

C_019e79a0::C_019e79a0() {}

// @baa 0x019e79a0
void C_019e79a0::sub_019e81f0() {}

struct A_019e7d90 { virtual void sub_019e8190(); char pad[12]; };

struct B_019e7d90 { virtual void sub_019e8190(); };

struct C_019e7d90 : A_019e7d90, B_019e7d90 { virtual void sub_019e8190(); C_019e7d90(); };

C_019e7d90::C_019e7d90() {}

// @baa 0x019e7d90
void C_019e7d90::sub_019e8190() {}

__declspec(noreturn) void sub_01973ce0(void);
// @baa 0x019e8230
void sub_019e8230(void)
{
    sub_01973ce0();
}

struct A_019e8240 { virtual void sub_019e8250(); char pad[12]; };

struct B_019e8240 { virtual void sub_019e8250(); };

struct C_019e8240 : A_019e8240, B_019e8240 { virtual void sub_019e8250(); C_019e8240(); };

C_019e8240::C_019e8240() {}

// @baa 0x019e8240
void C_019e8240::sub_019e8250() {}

struct A_019e84a0 { virtual void sub_019e8670(); char pad[12]; };

struct B_019e84a0 { virtual void sub_019e8670(); };

struct C_019e84a0 : A_019e84a0, B_019e84a0 { virtual void sub_019e8670(); C_019e84a0(); };

C_019e84a0::C_019e84a0() {}

// @baa 0x019e84a0
void C_019e84a0::sub_019e8670() {}

struct C_019e9e10 {
    undefined4 * sub_019e9e10(undefined4, undefined4);
    int sub_019924d0(int);
    int sub_019068e0(int, int);
};

extern undefined4 g_024005f4;
extern undefined4 g_0240064c;
// @baa 0x019e9e10
undefined4 * C_019e9e10::sub_019e9e10(undefined4 param_2, undefined4 param_3)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_019e9e10 *)(this))->sub_019924d0(0);
  *param_1 = (undefined4)((&g_0240064c));
  param_1[4] = (undefined4)((&g_024005f4));
  ((C_019e9e10 *)(((char *)this + 0x10)))->sub_019068e0(param_2, param_3);
  return param_1;
}

struct A_019e9e50 { virtual void sub_019ea6f0(); char pad[12]; };

struct B_019e9e50 { virtual void sub_019ea6f0(); };

struct C_019e9e50 : A_019e9e50, B_019e9e50 { virtual void sub_019ea6f0(); C_019e9e50(); };

C_019e9e50::C_019e9e50() {}

// @baa 0x019e9e50
void C_019e9e50::sub_019ea6f0() {}

struct A_019ea290 { virtual void sub_019ea6d0(); char pad[12]; };

struct B_019ea290 { virtual void sub_019ea6d0(); };

struct C_019ea290 : A_019ea290, B_019ea290 { virtual void sub_019ea6d0(); C_019ea290(); };

C_019ea290::C_019ea290() {}

// @baa 0x019ea290
void C_019ea290::sub_019ea6d0() {}

struct C_019ea770 {
    void sub_01973ce0();
    void sub_019ea770();
};

// @baa 0x019ea770
void C_019ea770::sub_019ea770()
{
    sub_01973ce0();
}

struct A_019ea780 { virtual void sub_019ea790(); char pad[12]; };

struct B_019ea780 { virtual void sub_019ea790(); };

struct C_019ea780 : A_019ea780, B_019ea780 { virtual void sub_019ea790(); C_019ea780(); };

C_019ea780::C_019ea780() {}

// @baa 0x019ea780
void C_019ea780::sub_019ea790() {}

struct A_019ea820 { virtual void sub_019ea9b0(); char pad[12]; };

struct B_019ea820 { virtual void sub_019ea9b0(); };

struct C_019ea820 : A_019ea820, B_019ea820 { virtual void sub_019ea9b0(); C_019ea820(); };

C_019ea820::C_019ea820() {}

// @baa 0x019ea820
void C_019ea820::sub_019ea9b0() {}

void __stdcall sub_018d7150(int Index);
// @baa 0x019eaae0
void sub_019eaae0(int Value)
{
    sub_018d7150(Value * 8);
}

// @baa 0x019eab00
void sub_019eab00(int Value)
{
    sub_018d7150(Value * 4);
}

// @baa 0x019eab40
void sub_019eab40(int Value)
{
    sub_018d7150(Value * 4);
}

extern double g_02400824;
// @baa 0x019eb730
double sub_019eb730(void)
{
    return g_02400824;
}

extern double g_0240082c;
// @baa 0x019eb740
double sub_019eb740(void) { return g_0240082c; }

extern double g_02400834;
// @baa 0x019eb750
double sub_019eb750(void)
{
    return g_02400834;
}

extern double g_02400854;
// @baa 0x019eb760
double sub_019eb760(void)
{
    return g_02400854;
}

extern double g_0240084c;
// @baa 0x019eb770
double sub_019eb770(void)
{
    return g_0240084c;
}

extern double g_02400844;
// @baa 0x019eb790
double sub_019eb790(void)
{
    return g_02400844;
}

struct A_019ec240 { virtual void sub_019ec250(); char pad[12]; };

struct B_019ec240 { virtual void sub_019ec250(); };

struct C_019ec240 : A_019ec240, B_019ec240 { virtual void sub_019ec250(); C_019ec240(); };

C_019ec240::C_019ec240() {}

// @baa 0x019ec240
void C_019ec240::sub_019ec250() {}

struct A_019ec2e0 { virtual void sub_019ec990(); char pad[12]; };

struct B_019ec2e0 { virtual void sub_019ec990(); };

struct C_019ec2e0 : A_019ec2e0, B_019ec2e0 { virtual void sub_019ec990(); C_019ec2e0(); };

C_019ec2e0::C_019ec2e0() {}

// @baa 0x019ec2e0
void C_019ec2e0::sub_019ec990() {}

struct A_019ec530 { virtual void sub_019ec930(); char pad[12]; };

struct B_019ec530 { virtual void sub_019ec930(); };

struct C_019ec530 : A_019ec530, B_019ec530 { virtual void sub_019ec930(); C_019ec530(); };

C_019ec530::C_019ec530() {}

// @baa 0x019ec530
void C_019ec530::sub_019ec930() {}

struct A_019eca20 { virtual void sub_019ecbe0(); char pad[12]; };

struct B_019eca20 { virtual void sub_019ecbe0(); };

struct C_019eca20 : A_019eca20, B_019eca20 { virtual void sub_019ecbe0(); C_019eca20(); };

C_019eca20::C_019eca20() {}

// @baa 0x019eca20
void C_019eca20::sub_019ecbe0() {}

struct C_019ecdc0 {
    int sub_019ecdc0();
    int sub_019ecc40(int);
};

int sub_018f11e0(void);
// @baa 0x019ecdc0
int C_019ecdc0::sub_019ecdc0(void)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  *(undefined4 *)(param_1 + 0x20) = 0x587c4;
  *(undefined4 *)(param_1 + 0x24) = 7;
  uVar1 = sub_018f11e0();
  ((C_019ecdc0 *)(this))->sub_019ecc40(uVar1);
  return param_1;
}

struct C_019ece00 {
    char pad[0x20];
    int* m_field;
    DWORD sub_019ece00(int);
};

// @baa 0x019ece00
DWORD C_019ece00::sub_019ece00(int a)
{
    return *m_field;
}

struct A_019ee2b0 { virtual void sub_019ee2c0(); char pad[12]; };

struct B_019ee2b0 { virtual void sub_019ee2c0(); };

struct C_019ee2b0 : A_019ee2b0, B_019ee2b0 { virtual void sub_019ee2c0(); C_019ee2b0(); };

C_019ee2b0::C_019ee2b0() {}

// @baa 0x019ee2b0
void C_019ee2b0::sub_019ee2c0() {}

struct A_019ee530 { virtual void sub_019eec50(); char pad[12]; };

struct B_019ee530 { virtual void sub_019eec50(); };

struct C_019ee530 : A_019ee530, B_019ee530 { virtual void sub_019eec50(); C_019ee530(); };

C_019ee530::C_019ee530() {}

// @baa 0x019ee530
void C_019ee530::sub_019eec50() {}

struct C_019ee5a0 {
    undefined4 * sub_019ee5a0(int);
    int sub_019924d0(int);
    int sub_019eda60(int);
};

extern undefined4 g_02400bac;
extern undefined4 g_02400c04;
// @baa 0x019ee5a0
undefined4 * C_019ee5a0::sub_019ee5a0(int param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;
  int iVar2;
  ((C_019ee5a0 *)(this))->sub_019924d0(0);
  *param_1 = (undefined4)((&g_02400c04));
  param_1[4] = (undefined4)((&g_02400bac));
  iVar2 = *(int *)(*(int *)(param_2 + 0x78) + 0x10);
  param_1[0xc] = iVar2;
  piVar1 = (int *)(iVar2 + 0xc);
  *piVar1 = *piVar1 + 1;
  ((C_019ee5a0 *)(this))->sub_019eda60(param_2);
  return param_1;
}

struct C_019ee5e0 {
    undefined4 * sub_019ee5e0(undefined4, int *);
    int sub_019924d0(int);
    int sub_019eda60(int);
};

// @baa 0x019ee5e0
undefined4 * C_019ee5e0::sub_019ee5e0(undefined4 param_2, int * param_3)
{
    undefined4 * param_1 = (undefined4 *)this;
  int *piVar1;
  int iVar2;
  ((C_019ee5e0 *)(this))->sub_019924d0(0);
  *param_1 = (undefined4)((&g_02400c04));
  param_1[4] = (undefined4)((&g_02400bac));
  iVar2 = *param_3;
  param_1[0xc] = iVar2;
  piVar1 = (int *)(iVar2 + 0xc);
  *piVar1 = *piVar1 + 1;
  ((C_019ee5e0 *)(this))->sub_019eda60(param_2);
  return param_1;
}

struct A_019ee7f0 { virtual void sub_019eebf0(); char pad[12]; };

struct B_019ee7f0 { virtual void sub_019eebf0(); };

struct C_019ee7f0 : A_019ee7f0, B_019ee7f0 { virtual void sub_019eebf0(); C_019ee7f0(); };

C_019ee7f0::C_019ee7f0() {}

// @baa 0x019ee7f0
void C_019ee7f0::sub_019eebf0() {}

struct A_019eecb0 { virtual void sub_019eee70(); char pad[12]; };

struct B_019eecb0 { virtual void sub_019eee70(); };

struct C_019eecb0 : A_019eecb0, B_019eecb0 { virtual void sub_019eee70(); C_019eecb0(); };

C_019eecb0::C_019eecb0() {}

// @baa 0x019eecb0
void C_019eecb0::sub_019eee70() {}

struct C_019ef450 {
    void sub_01973ce0();
    void sub_019ef450();
};

// @baa 0x019ef450
void C_019ef450::sub_019ef450()
{
    sub_01973ce0();
}

struct A_019ef460 { virtual void sub_019ef470(); char pad[12]; };

struct B_019ef460 { virtual void sub_019ef470(); };

struct C_019ef460 : A_019ef460, B_019ef460 { virtual void sub_019ef470(); C_019ef460(); };

C_019ef460::C_019ef460() {}

// @baa 0x019ef460
void C_019ef460::sub_019ef470() {}

struct C_019ef490 {
    undefined4 * sub_019ef490(undefined4, undefined4);
    int sub_019924d0(int);
    int sub_019068e0(int, int);
};

extern undefined4 g_02400de4;
extern undefined4 g_02400e3c;
// @baa 0x019ef490
undefined4 * C_019ef490::sub_019ef490(undefined4 param_2, undefined4 param_3)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_019ef490 *)(this))->sub_019924d0(0);
  *param_1 = (undefined4)((&g_02400e3c));
  param_1[4] = (undefined4)((&g_02400de4));
  *(undefined1 *)(param_1 + 0xc) = 0;
  ((C_019ef490 *)(((char *)this + 0x10)))->sub_019068e0(param_2, param_3);
  return param_1;
}

struct A_019ef4e0 { virtual void sub_019efb50(); char pad[12]; };

struct B_019ef4e0 { virtual void sub_019efb50(); };

struct C_019ef4e0 : A_019ef4e0, B_019ef4e0 { virtual void sub_019efb50(); C_019ef4e0(); };

C_019ef4e0::C_019ef4e0() {}

// @baa 0x019ef4e0
void C_019ef4e0::sub_019efb50() {}

struct C_019ef540 {
    undefined4 * sub_019ef540(undefined4);
    int sub_019924d0(int);
    int sub_019ef3e0(int);
};

// @baa 0x019ef540
undefined4 * C_019ef540::sub_019ef540(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_019ef540 *)(this))->sub_019924d0(0);
  *param_1 = (undefined4)((&g_02400e3c));
  param_1[4] = (undefined4)((&g_02400de4));
  *(undefined1 *)(param_1 + 0xc) = 0;
  ((C_019ef540 *)(this))->sub_019ef3e0(param_2);
  return param_1;
}

struct C_019ef570 {
    undefined4 * sub_019ef570(undefined4, undefined1);
    int sub_019924d0(int);
    int sub_019ef3e0(int);
};

// @baa 0x019ef570
undefined4 * C_019ef570::sub_019ef570(undefined4 param_2, undefined1 param_3)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_019ef570 *)(this))->sub_019924d0(0);
  *param_1 = (undefined4)((&g_02400e3c));
  param_1[4] = (undefined4)((&g_02400de4));
  *(undefined1 *)(param_1 + 0xc) = param_3;
  ((C_019ef570 *)(this))->sub_019ef3e0(param_2);
  return param_1;
}

struct A_019ef6f0 { virtual void sub_019efb30(); char pad[12]; };

struct B_019ef6f0 { virtual void sub_019efb30(); };

struct C_019ef6f0 : A_019ef6f0, B_019ef6f0 { virtual void sub_019efb30(); C_019ef6f0(); };

C_019ef6f0::C_019ef6f0() {}

// @baa 0x019ef6f0
void C_019ef6f0::sub_019efb30() {}

struct A_019efc20 { virtual void sub_019efda0(); char pad[12]; };

struct B_019efc20 { virtual void sub_019efda0(); };

struct C_019efc20 : A_019efc20, B_019efc20 { virtual void sub_019efda0(); C_019efc20(); };

C_019efc20::C_019efc20() {}

// @baa 0x019efc20
void C_019efc20::sub_019efda0() {}
