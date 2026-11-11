// Core_0620000.cpp (part 1 of 2): 59 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

int sub_0060de00(void);
// @baa 0x00621110
int UPackageMap::sub_00621110(void)
{
    int param_1 = (int)this;

  sub_0060de00();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_0061eae0(...);
int sub_00637c10(...);
// @baa 0x00621130
void sub_00621130(undefined4 param_1, int param_2)
{
  undefined4 uVar1;
  
  uVar1 = sub_00637c10(param_1,param_2);
  sub_0061eae0(uVar1,param_2 + 0xc);
  return;
}

struct C { void sub_0061ee60(int); C *sub_00621150(int); };

// @baa 0x00621150
C *C::sub_00621150(int a) { sub_0061ee60(a); return this; }

void sub_0061e940();
// @baa 0x00621170
void sub_00621170(void) { sub_0061e940(); }

// @baa 0x00621210
void sub_00621210(void) { sub_0061e940(); }

void sub_00621220();
// @baa 0x00621280
void sub_00621280(void) { sub_00621220(); }

struct C_00621290 { void sub_0061ee60(int); C_00621290 *sub_00621290(int); };

// @baa 0x00621290
C_00621290 *C_00621290::sub_00621290(int a) { sub_0061ee60(a); return this; }

// @baa 0x006212d0
int UPackageMap::sub_006212d0(void)
{
    int param_1 = (int)this;

  sub_0060de00();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  return param_1;
}

struct C_00621310 { void sub_0061ee60(int); C_00621310 *sub_00621310(int); };

// @baa 0x00621310
C_00621310 *C_00621310::sub_00621310(int a) { sub_0061ee60(a); return this; }

int sub_0060de60(void);
// @baa 0x006258a0
int UPackageMap::sub_006258a0(void)
{
    int param_1 = (int)this;

  sub_0060de60();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_006258c0 { void sub_00621d80(int); C_006258c0 *sub_006258c0(int); };

// @baa 0x006258c0
C_006258c0 *C_006258c0::sub_006258c0(int a) { sub_00621d80(a); return this; }

struct C_006258e0 { void sub_006220b0(int); C_006258e0 *sub_006258e0(int); };

// @baa 0x006258e0
C_006258e0 *C_006258e0::sub_006258e0(int a) { sub_006220b0(a); return this; }

void sub_00621b70();
// @baa 0x00625ff0
void sub_00625ff0(void) { sub_00621b70(); }

extern undefined4 g_0269d7d0;
// @baa 0x00627f70
uint sub_00627f70(int param_1, int param_2, uint param_3)
{
  int iVar1;
  
  iVar1 = 0;
  param_3 = ~param_3;
  if (0 < param_2) {
    do {
      param_3 = param_3 << 8 ^ (&g_0269d7d0)[(uint)*(byte *)(iVar1 + param_1) ^ param_3 >> 0x18];
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return ~param_3;
}

// @baa 0x006280a0
void sub_006280a0(undefined4 * param_1)
{
  param_1[5] = 0;
  param_1[4] = 0;
  *param_1 = 0x67452301;
  param_1[1] = 0xefcdab89;
  param_1[2] = 0x98badcfe;
  param_1[3] = 0x10325476;
  return;
}

struct C_00628170 {
    void sub_00628170();
};

// @baa 0x00628170
void C_00628170::sub_00628170(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = 0x67452301;
  param_1[1] = 0xefcdab89;
  param_1[2] = 0x98badcfe;
  param_1[3] = 0x10325476;
  param_1[4] = 0xc3d2e1f0;
  param_1[5] = 0;
  param_1[6] = 0;
  return;
}

extern undefined4 g_026a4bac;
// @baa 0x00629b80
void sub_00629b80(void)
{
  g_026a4bac = 0;
  return;
}

struct C_00629b90 { void sub_00629b90(void); };

// @baa 0x00629b90
void C_00629b90::sub_00629b90(void) { *(int*)((char*)this + 124) = 1; }

extern char g_026a4bb0[];
// @baa 0x00629c10
int sub_00629c10(void) { return (int)g_026a4bb0; }

extern char g_025d5698[];
// @baa 0x0062a6a0
int sub_0062a6a0(void) { return (int)g_025d5698; }

// @baa 0x0062a6b0
void sub_0062a6b0(void) {  }

int sub_0053df40(...);
// @baa 0x0062a6f0
void sub_0062a6f0(undefined4 param_1, int param_2, int param_3)
{
  sub_0053df40(param_2 * param_3,8);
  return;
}

int sub_0053dfa0(...);
// @baa 0x0062a710
void sub_0062a710(undefined4 param_1, undefined4 param_2)
{
  sub_0053dfa0(param_2);
  return;
}

// @baa 0x0062a7b0
void UProperty::vf_154(int a0) {  }

// @baa 0x0062a800
void __stdcall sub_0062a800(int a0, int a1) {  }

// @baa 0x0062c000
undefined4 sub_0062c000(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

// @baa 0x0062c010
int sub_0062c010(int a0, int a1) { return a1; }

// @baa 0x0062c020
int sub_0062c020(int a0, int a1) { return a1; }

// @baa 0x0062c030
int sub_0062c030(int a0, int a1) { return a1; }

// @baa 0x0062c040
int sub_0062c040(int a0, int a1) { return a1; }

// @baa 0x0062c050
int sub_0062c050(int a0, int a1) { return a1; }

// @baa 0x0062c060
int sub_0062c060(int a0, int a1) { return a1; }

// @baa 0x0062c070
int sub_0062c070(int a0, int a1) { return a1; }

// @baa 0x0062c120
void __stdcall sub_0062c120(int a0) {  }

// @baa 0x0062c150
int sub_0062c150(int a0, int a1) { return a1; }

int sub_005c7a20(void);
extern undefined * g_01eaefb8;
// @baa 0x0062c160
undefined4 * UObject::sub_0062c160(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01eaefb8);
  return param_1;
}

// @baa 0x0062c180
IMPLEMENT_CLASS_AT(UObjectRedirector, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Core\\Src\\UnObjectRedirector.cpp", 75);

// @baa 0x0062c1e0
struct C_0062c200 {
    undefined4 sub_0062c200();
};

// @baa 0x0062c200
undefined4 C_0062c200::sub_0062c200(void)
{
    int param_1 = (int)this;
  return *(undefined4 *)(param_1 + 0x10);
}

// @baa 0x0062c210
int sub_0062c210(int a0, int a1) { return a1; }

extern char g_01eaf0c4[];
struct C_0062c220 { C_0062c220* sub_0062c220(void); };

// @baa 0x0062c220
C_0062c220* C_0062c220::sub_0062c220(void) { *(int*)((char*)this + 0) = (int)g_01eaf0c4; return this; }

struct C_0062c230 { void sub_0062c230(int a0); };

// @baa 0x0062c230
void C_0062c230::sub_0062c230(int a0) { *(int*)((char*)this + 12) = a0; }

struct C_0062c240 { int sub_0062c240(void); };

// @baa 0x0062c240
int C_0062c240::sub_0062c240(void) { return *(int*)((char*)this + 0); }

struct C_0062c250 { int sub_0062c250(void); };

// @baa 0x0062c250
int C_0062c250::sub_0062c250(void) { return *(int*)((char*)this + 0); }

struct C_0062c260 { int sub_0062c260(void); };

// @baa 0x0062c260
int C_0062c260::sub_0062c260(void) { return *(int*)((char*)this + 20); }

struct C_0062c270 { int a, b, c; C_0062c270(); };

// @baa 0x0062c270
C_0062c270::C_0062c270() : a(0), b(0), c(0) {}

struct C_0062c280 { int sub_0062c280(void); };

// @baa 0x0062c280
int C_0062c280::sub_0062c280(void) { return *(int*)((char*)this + 0); }

struct C_0062c290 { int sub_0062c290(void); };

// @baa 0x0062c290
int C_0062c290::sub_0062c290(void) { return *(int*)((char*)this + 0); }

// @baa 0x0062d990
int USystem::vf_000(void) { return 1; }

// @baa 0x0062d9a0
bool USystem::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0062daa0
// @baa 0x0062dbb0
int UObjectRedirector::vf_000(void) { return 1; }

// @baa 0x0062dbc0
bool UObjectRedirector::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_view {
    int sub_00567f10(int);
};

extern undefined * g_01ea6c00;
// @baa 0x0062dc20
undefined4 * UStrProperty::sub_0062dc20(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view *)(this))->sub_00567f10(0);
  *param_1 = (undefined4)(&g_01ea6c00);
  param_1[0xe] = 1;
  param_1[0x14] = 0;
  param_1[0x19] = 0;
  return param_1;
}

struct C_0062fac0 {
    int sub_0062fac0(int);
};

// @baa 0x0062fac0
int C_0062fac0::sub_0062fac0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x24;
}

struct C_0062fad0 {
    int sub_0062fad0();
};

// @baa 0x0062fad0
int C_0062fad0::sub_0062fad0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0062faf0 {
    int sub_0062faf0(int);
};

// @baa 0x0062faf0
int C_0062faf0::sub_0062faf0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x24;
}

void sub_0062d120();
// @baa 0x0062ffc0
void sub_0062ffc0(void) { sub_0062d120(); }

struct C_0062ffd0 {
    undefined4 * sub_0062ffd0(byte);
};

extern undefined * g_01e729c0;
// @baa 0x0062ffd0
undefined4 * C_0062ffd0::sub_0062ffd0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01e729c0);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}
