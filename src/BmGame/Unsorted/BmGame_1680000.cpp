// BmGame_1680000.cpp (part 1 of 7): 132 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

void sub_0167bd70();
// @baa 0x01680140
void sub_01680140(void) { sub_0167bd70(); }

int sub_0166be70(void);
int sub_0167ac90(...);
extern undefined4 g_026e1d54;
// @baa 0x01680150
int sub_01680150(void)
{
  if (g_026e1d54 == 0) {
    g_026e1d54 = sub_0167ac90(L"BmGame");
    sub_0166be70();
  }
  return g_026e1d54;
}

// @baa 0x01680180
IMPLEMENT_CLASS_AT(URActorFactoryForensicsDnaNonScan, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameForensicClasses.cpp", 18);

// @baa 0x01680290
bool URActorFactoryForensicsDnaNonScan::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C { C* sub_01680310(void); };

// @baa 0x01680310
C* C::sub_01680310(void) { return this; }

// @baa 0x016807b0
IMPLEMENT_CLASS_AT(URSmashablePropConfigFactoryNew, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RSmashableProp.cpp", 19);

int sub_006f7810(void);
extern undefined * g_02376f90;
// @baa 0x01680810
undefined4 * UPrimitiveComponent::sub_01680810(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_006f7810();
  *param_1 = (undefined4)(&g_02376f90);
  return param_1;
}

// @baa 0x01680830
IMPLEMENT_CLASS_AT(URSimpleRopeComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RSimpleRopeComponent.cpp", 20);

// @baa 0x01680890
int sub_0166cc40(void);
int sub_016820a0(...);
extern undefined4 g_026e1d74;
// @baa 0x01682760
int sub_01682760(void)
{
  if (g_026e1d74 == 0) {
    g_026e1d74 = sub_016820a0(L"BmGame");
    sub_0166cc40();
  }
  return g_026e1d74;
}

int sub_0166af30(void);
int sub_01681fe0(...);
extern undefined4 g_026e1d40;
// @baa 0x01682790
int sub_01682790(void)
{
  if (g_026e1d40 == 0) {
    g_026e1d40 = sub_01681fe0(L"BmGame");
    sub_0166af30();
  }
  return g_026e1d40;
}

int sub_0166a830(void);
int sub_016827e0(...);
extern undefined4 g_026e1d38;
// @baa 0x01682e10
int sub_01682e10(void)
{
  if (g_026e1d38 == 0) {
    g_026e1d38 = sub_016827e0(L"BmGame");
    sub_0166a830();
  }
  return g_026e1d38;
}

// @baa 0x01682f30
IMPLEMENT_CLASS_AT(ARShimmyEdgeMarker, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RShimmyEdgeMarker.cpp", 7);

// @baa 0x01682f90
struct C_01683130 {
    int sub_01683130();
};

// @baa 0x01683130
int C_01683130::sub_01683130(void)
{
    int param_1 = (int)this;

  return param_1 + -0x1ac;
}

// @baa 0x01683140
uint ARForensicDnaSplat::vf_178(void)
{
    int param_1 = (int)this;

  return *(uint *)(*(int *)(param_1 + 0x1a8) + 0x194) >> 9 & 1;
}

struct A_01683160 { virtual void sub_016831f0(); char pad[424]; };

struct B_01683160 { virtual void sub_016831f0(); };

struct C_01683160 : A_01683160, B_01683160 { virtual void sub_016831f0(); C_01683160(); };

C_01683160::C_01683160() {}

// @baa 0x01683160
void C_01683160::sub_016831f0() {}

// @baa 0x01683170
IMPLEMENT_CLASS_AT(ARForensicDnaSplat, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameForensicClasses.cpp", 16);

// @baa 0x016831f0
// @baa 0x01683250
IMPLEMENT_CLASS_AT(ARForensicsDevice, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameForensicClasses.cpp", 23);

// @baa 0x016832f0
// @baa 0x01683320
IMPLEMENT_CLASS_AT(ARForensicDnaSplatStatic, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameForensicClasses.cpp", 14);

struct C_016833d0 {
    int sub_016833d0();
};

// @baa 0x016833d0
int C_016833d0::sub_016833d0(void)
{
    int param_1 = (int)this;

  return param_1 + -0x1a8;
}

// @baa 0x016833e0
uint ARForensicDnaSplatStatic::vf_178(void)
{
    int param_1 = (int)this;

  return *(uint *)(*(int *)(param_1 + 0x1dc) + 0x194) >> 9 & 1;
}

struct A_01683440 { virtual void sub_01683450(); char pad[420]; };

struct B_01683440 { virtual void sub_01683450(); };

struct C_01683440 : A_01683440, B_01683440 { virtual void sub_01683450(); C_01683440(); };

C_01683440::C_01683440() {}

// @baa 0x01683440
void C_01683440::sub_01683450() {}

// @baa 0x01683450
struct A_01683500 { virtual void sub_01683580(); char pad[420]; };

struct B_01683500 { virtual void sub_01683580(); };

struct C_01683500 : A_01683500, B_01683500 { virtual void sub_01683580(); C_01683500(); };

C_01683500::C_01683500() {}

// @baa 0x01683500
void C_01683500::sub_01683580() {}

// @baa 0x01683510
IMPLEMENT_CLASS_AT(ARForensicDnaSplatStaticNonScan, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameForensicClasses.cpp", 15);

// @baa 0x01683580
struct C_01683a20 {
    undefined4 sub_01683a20(byte);
};

int sub_0053dfa0(...);
int sub_01682fc0(void);
// @baa 0x01683a20
undefined4 C_01683a20::sub_01683a20(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01682fc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_0166bba0(void);
int sub_01684560(...);
extern undefined4 g_026e1d48;
// @baa 0x01685140
int sub_01685140(void)
{
  if (g_026e1d48 == 0) {
    g_026e1d48 = sub_01684560(L"BmGame");
    sub_0166bba0();
  }
  return g_026e1d48;
}

// @baa 0x01685170
// @baa 0x01685280
bool ARForensicDnaSplatStaticNonScan::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x016852c0
IMPLEMENT_CLASS_AT(ARPawnCharacter, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RPawnCharacter.cpp", 8);

// @baa 0x016853d0
bool ARPawnCharacter::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

int sub_01684620(...);
int sub_01685170(void);
extern undefined4 g_026e1d4c;
// @baa 0x016859d0
int sub_016859d0(void)
{
  if (g_026e1d4c == 0) {
    g_026e1d4c = sub_01684620(L"BmGame");
    sub_01685170();
  }
  return g_026e1d4c;
}

// @baa 0x01685a00
IMPLEMENT_CLASS_AT(ARPawnCombat, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RPawn.cpp", 14);

// @baa 0x01685b10
bool ARPawnCombat::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x016860b0
void sub_016860b0(void) {  }

// @baa 0x016860c0
float10 sub_016860c0(double param_1)
{
  return (float10)param_1;
}

struct C_016860d0 {
    undefined4 sub_016860d0(float *);
};

// @baa 0x016860d0
undefined4 C_016860d0::sub_016860d0(float * param_2)
{
    float * param_1 = (float *)this;
  if ((((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) &&
     (param_1[3] == param_2[3])) {
    return 0;
  }
  return 1;
}

// @baa 0x01686130
int sub_01686130(void) { return 1; }

struct C_01686140 { char* sub_01686140(void); };

// @baa 0x01686140
char* C_01686140::sub_01686140(void) { return (char*)this + 432; }

// @baa 0x01686150
int sub_01686150(int a0, int a1) { return a1; }

int sub_015549d0(void);
int sub_0157ba90(...);
extern undefined4 g_026e12a8;
// @baa 0x01686160
int sub_01686160(void)
{
  if (g_026e12a8 == 0) {
    g_026e12a8 = sub_0157ba90(L"BmGame");
    sub_015549d0();
  }
  return g_026e12a8;
}

int sub_016ab9a0(void);
int sub_016cadc0(...);
extern undefined4 g_026e20e4;
// @baa 0x01686190
int sub_01686190(void)
{
  if (g_026e20e4 == 0) {
    g_026e20e4 = sub_016cadc0(L"BmGame");
    sub_016ab9a0();
  }
  return g_026e20e4;
}

int sub_01596f90(void);
int sub_0159ce40(...);
extern undefined4 g_026e1420;
// @baa 0x016861c0
int sub_016861c0(void)
{
  if (g_026e1420 == 0) {
    g_026e1420 = sub_0159ce40(L"BmGame");
    sub_01596f90();
  }
  return g_026e1420;
}

// @baa 0x016861f0
int sub_016861f0(int a0, int a1) { return a1; }

// @baa 0x01686200
int sub_01686200(int a0, int a1) { return a1; }

// @baa 0x01686210
int sub_01686210(int a0, int a1) { return a1; }

// @baa 0x01686220
int sub_01686220(int a0, int a1) { return a1; }

// @baa 0x01686230
int sub_01686230(int a0, int a1) { return a1; }

// @baa 0x01686240
int sub_01686240(int a0, int a1) { return a1; }

// @baa 0x01686250
int sub_01686250(int a0, int a1) { return a1; }

// @baa 0x01686260
int sub_01686260(int a0, int a1) { return a1; }

// @baa 0x01686270
int sub_01686270(int a0, int a1) { return a1; }

struct C_016862b0 { C_016862b0* sub_016862b0(int a0); };

// @baa 0x016862b0
C_016862b0* C_016862b0::sub_016862b0(int a0) { return this; }

struct C_016862c0 { C_016862c0* sub_016862c0(int a0); };

// @baa 0x016862c0
C_016862c0* C_016862c0::sub_016862c0(int a0) { return this; }

struct C_01686380 { C_01686380* sub_01686380(int a0); };

// @baa 0x01686380
C_01686380* C_01686380::sub_01686380(int a0) { return this; }

// @baa 0x016863d0
undefined4 sub_016863d0(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

struct C_016863e0 { C_016863e0* sub_016863e0(void); };

// @baa 0x016863e0
C_016863e0* C_016863e0::sub_016863e0(void) { return this; }

struct C_016863f0 { C_016863f0* sub_016863f0(int a0); };

// @baa 0x016863f0
C_016863f0* C_016863f0::sub_016863f0(int a0) { return this; }

// @baa 0x01686460
int sub_01686460(int a0, int a1) { return a1; }

struct C_01686470 { C_01686470* sub_01686470(void); };

// @baa 0x01686470
C_01686470* C_01686470::sub_01686470(void) { return this; }

struct C_01686480 { C_01686480* sub_01686480(int a0); };

// @baa 0x01686480
C_01686480* C_01686480::sub_01686480(int a0) { return this; }

struct C_01686490 { C_01686490* sub_01686490(int a0); };

// @baa 0x01686490
C_01686490* C_01686490::sub_01686490(int a0) { return this; }

struct C_016864a0 { C_016864a0* sub_016864a0(int a0); };

// @baa 0x016864a0
C_016864a0* C_016864a0::sub_016864a0(int a0) { return this; }

struct C_016864b0 { C_016864b0* sub_016864b0(int a0); };

// @baa 0x016864b0
C_016864b0* C_016864b0::sub_016864b0(int a0) { return this; }

// @baa 0x01686620
int sub_01686620(int a0, int a1) { return a1; }

// @baa 0x01686690
int sub_01686690(int a0, int a1) { return a1; }

// @baa 0x016866a0
int sub_016866a0(int a0, int a1) { return a1; }

// @baa 0x016866b0
int sub_016866b0(int a0, int a1) { return a1; }

int sub_015970f0(void);
int sub_0159cf00(...);
extern undefined4 g_026e1424;
// @baa 0x016866c0
int sub_016866c0(void)
{
  if (g_026e1424 == 0) {
    g_026e1424 = sub_0159cf00(L"BmGame");
    sub_015970f0();
  }
  return g_026e1424;
}

int sub_01597250(void);
int sub_0159cfc0(...);
extern undefined4 g_026e1428;
// @baa 0x016866f0
int sub_016866f0(void)
{
  if (g_026e1428 == 0) {
    g_026e1428 = sub_0159cfc0(L"BmGame");
    sub_01597250();
  }
  return g_026e1428;
}

// @baa 0x01686720
int sub_01686720(int a0, int a1) { return a1; }

// @baa 0x01686750
IMPLEMENT_CLASS_AT(UREnvironmentCheckTicker, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RPawnPlayer.cpp", 54);

// @baa 0x016867b0
// @baa 0x016867d0
undefined4 sub_016867d0(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

// @baa 0x01686800
IMPLEMENT_CLASS_AT(URBatmanDamageState, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RPawnPlayer.cpp", 50);

// @baa 0x01686860
// @baa 0x01686880
undefined4 sub_01686880(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

struct C_01686890 { C_01686890* sub_01686890(int a0); };

// @baa 0x01686890
C_01686890* C_01686890::sub_01686890(int a0) { return this; }

struct C_016868a0 { C_016868a0* sub_016868a0(int a0); };

// @baa 0x016868a0
C_016868a0* C_016868a0::sub_016868a0(int a0) { return this; }

extern char g_026e1dd0[];
// @baa 0x01686970
int sub_01686970(void) { return (int)g_026e1dd0; }

int sub_01718430(void);
int sub_01734450(...);
extern undefined4 g_026e24fc;
// @baa 0x01686980
int sub_01686980(void)
{
  if (g_026e24fc == 0) {
    g_026e24fc = sub_01734450(L"BmGame");
    sub_01718430();
  }
  return g_026e24fc;
}

int sub_016d0d90(void);
int sub_016d4780(...);
extern undefined4 g_026e22dc;
// @baa 0x016869b0
int sub_016869b0(void)
{
  if (g_026e22dc == 0) {
    g_026e22dc = sub_016d4780(L"BmGame");
    sub_016d0d90();
  }
  return g_026e22dc;
}

struct C_016869e0 { C_016869e0* sub_016869e0(int a0); };

// @baa 0x016869e0
C_016869e0* C_016869e0::sub_016869e0(int a0) { return this; }

struct C_01686a30 {
    C_01686a30 * sub_01686a30(unsigned int arg1);
};

// @baa 0x01686a30
C_01686a30 * C_01686a30::sub_01686a30(unsigned int arg1)
{
    return this;
}

struct C_0168a780 { int sub_0168a780(void); };

// @baa 0x0168a780
int C_0168a780::sub_0168a780(void) { return *(int*)((char*)this + 8) - *(int*)((char*)this + 4); }

struct C_0168a790 { int a, b, c; C_0168a790(); };

// @baa 0x0168a790
C_0168a790::C_0168a790() : a(0), b(0), c(0) {}

struct C_0168a7a0 { int sub_0168a7a0(void); };

// @baa 0x0168a7a0
int C_0168a7a0::sub_0168a7a0(void) { return *(int*)((char*)this + 4); }

struct C_0168a7b0 { int sub_0168a7b0(void); };

// @baa 0x0168a7b0
int C_0168a7b0::sub_0168a7b0(void) { return *(int*)((char*)this + 4); }

struct C_0168a7c0 { int sub_0168a7c0(void); };

// @baa 0x0168a7c0
int C_0168a7c0::sub_0168a7c0(void) { return *(int*)((char*)this + 4); }

struct C_0168a7d0 { int sub_0168a7d0(void); };

// @baa 0x0168a7d0
int C_0168a7d0::sub_0168a7d0(void) { return *(int*)((char*)this + 4); }

struct C_0168a7e0 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    C_0168a7e0* sub_0168a7e0(INT value);
};

// @baa 0x0168a7e0
C_0168a7e0* C_0168a7e0::sub_0168a7e0(INT value)
{
    Unk00 = value;
    Unk04 = 0;
    return this;
}

struct S {
    char pad[4];
    INT v;
    S* sub_0168a800();
};

// @baa 0x0168a800
S* S::sub_0168a800()
{
    ++v;
    return this;
}

struct C_0168a810 { C_0168a810* sub_0168a810(int a0); };

// @baa 0x0168a810
C_0168a810* C_0168a810::sub_0168a810(int a0) { return this; }

struct C_0168a820 { int sub_0168a820(void); };

// @baa 0x0168a820
int C_0168a820::sub_0168a820(void) { return *(int*)((char*)this + 0); }

struct C_0168a830 { int sub_0168a830(void); };

// @baa 0x0168a830
int C_0168a830::sub_0168a830(void) { return *(int*)((char*)this + 0); }

struct C_0168a8c0 {
    int sub_0168a8c0(int);
};

// @baa 0x0168a8c0
int C_0168a8c0::sub_0168a8c0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

struct C_0168a8d0 { C_0168a8d0* sub_0168a8d0(int a0); };

// @baa 0x0168a8d0
C_0168a8d0* C_0168a8d0::sub_0168a8d0(int a0) { return this; }

struct C_0168a950 { C_0168a950* sub_0168a950(int a0); };

// @baa 0x0168a950
C_0168a950* C_0168a950::sub_0168a950(int a0) { return this; }

struct C_0168a9d0 { C_0168a9d0* sub_0168a9d0(int a0); };

// @baa 0x0168a9d0
C_0168a9d0* C_0168a9d0::sub_0168a9d0(int a0) { return this; }

struct C_0168a9e0 { int sub_0168a9e0(void); };

// @baa 0x0168a9e0
int C_0168a9e0::sub_0168a9e0(void) { return *(int*)((char*)this + 0); }

struct C_0168aa70 { C_0168aa70* sub_0168aa70(int a0); };

// @baa 0x0168aa70
C_0168aa70* C_0168aa70::sub_0168aa70(int a0) { return this; }

struct C_0168aa80 { C_0168aa80* sub_0168aa80(int a0); };

// @baa 0x0168aa80
C_0168aa80* C_0168aa80::sub_0168aa80(int a0) { return this; }

struct C_0168aa90 { int sub_0168aa90(void); };

// @baa 0x0168aa90
int C_0168aa90::sub_0168aa90(void) { return *(int*)((char*)this + 0); }

struct C_0168aaa0 {
    int sub_0168aaa0(int);
};

// @baa 0x0168aaa0
int C_0168aaa0::sub_0168aaa0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x2c + *param_1;
}

struct C_0168aab0 { C_0168aab0* sub_0168aab0(int a0); };

// @baa 0x0168aab0
C_0168aab0* C_0168aab0::sub_0168aab0(int a0) { return this; }

struct C_0168aac0 { int sub_0168aac0(void); };

// @baa 0x0168aac0
int C_0168aac0::sub_0168aac0(void) { return *(int*)((char*)this + 0); }

struct C_0168aad0 {
    int sub_0168aad0(int);
};

// @baa 0x0168aad0
int C_0168aad0::sub_0168aad0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x2c + *param_1;
}

struct C_0168aae0 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_0168aae0(INT Index);
};

// @baa 0x0168aae0
UBOOL C_0168aae0::sub_0168aae0(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

struct C_0168ab00 { C_0168ab00* sub_0168ab00(int a0); };

// @baa 0x0168ab00
C_0168ab00* C_0168ab00::sub_0168ab00(int a0) { return this; }

struct C_0168ab10 { C_0168ab10* sub_0168ab10(int a0); };

// @baa 0x0168ab10
C_0168ab10* C_0168ab10::sub_0168ab10(int a0) { return this; }

struct C_0168ab20 { C_0168ab20* sub_0168ab20(int a0); };

// @baa 0x0168ab20
C_0168ab20* C_0168ab20::sub_0168ab20(int a0) { return this; }

struct C_0168ab30 { int sub_0168ab30(void); };

// @baa 0x0168ab30
int C_0168ab30::sub_0168ab30(void) { return *(int*)((char*)this + 0); }

struct C_0168ab40 { int sub_0168ab40(void); };

// @baa 0x0168ab40
int C_0168ab40::sub_0168ab40(void) { return *(int*)((char*)this + 0); }

struct C_0168ab50 { int sub_0168ab50(void); };

// @baa 0x0168ab50
int C_0168ab50::sub_0168ab50(void) { return *(int*)((char*)this + 0); }

struct C_0168ab60 { int sub_0168ab60(void); };

// @baa 0x0168ab60
int C_0168ab60::sub_0168ab60(void) { return *(int*)((char*)this + 0); }

struct C_0168ab70 { int sub_0168ab70(void); };

// @baa 0x0168ab70
int C_0168ab70::sub_0168ab70(void) { return *(int*)((char*)this + 0); }

struct C_0168ab80 { int sub_0168ab80(void); };

// @baa 0x0168ab80
int C_0168ab80::sub_0168ab80(void) { return *(int*)((char*)this + 0); }

struct C_0168ab90 { int sub_0168ab90(void); };

// @baa 0x0168ab90
int C_0168ab90::sub_0168ab90(void) { return *(int*)((char*)this + 0); }

struct C_0168aba0 { int sub_0168aba0(void); };

// @baa 0x0168aba0
int C_0168aba0::sub_0168aba0(void) { return *(int*)((char*)this + 0); }

struct C_0168abb0 { int sub_0168abb0(void); };

// @baa 0x0168abb0
int C_0168abb0::sub_0168abb0(void) { return *(int*)((char*)this + 0); }

struct C_0168abc0 { int sub_0168abc0(void); };

// @baa 0x0168abc0
int C_0168abc0::sub_0168abc0(void) { return *(int*)((char*)this + 0); }

struct C_0168abd0 { int sub_0168abd0(void); };

// @baa 0x0168abd0
int C_0168abd0::sub_0168abd0(void) { return *(int*)((char*)this + 0); }

struct C_0168abe0 { int sub_0168abe0(void); };

// @baa 0x0168abe0
int C_0168abe0::sub_0168abe0(void) { return *(int*)((char*)this + 0); }

struct C_0168abf0 { int sub_0168abf0(void); };

// @baa 0x0168abf0
int C_0168abf0::sub_0168abf0(void) { return *(int*)((char*)this + 0); }

struct C_0168ac00 { int sub_0168ac00(void); };

// @baa 0x0168ac00
int C_0168ac00::sub_0168ac00(void) { return *(int*)((char*)this + 0); }

struct C_0168ac10 { int sub_0168ac10(void); };

// @baa 0x0168ac10
int C_0168ac10::sub_0168ac10(void) { return *(int*)((char*)this + 0); }

int sub_0155dea0(...);
// @baa 0x0168d8b0
void ARPawnPlayer::sub_0168d8b0(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  iVar1 = sub_0155dea0(*(undefined4 *)(param_1 + 0x1b4));
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x684) = *(uint *)(iVar1 + 0x684) & 0xfffffffd;
  }
  *(undefined4 *)(param_1 + 0x864) = 0xffffffff;
  return;
}

struct S_0168de00 {
    void sub_007d7170();
    void sub_01689170();
    void sub_0168de00();
};

// @baa 0x0168de00
void S_0168de00::sub_0168de00() {
    sub_007d7170();
    sub_01689170();
}
