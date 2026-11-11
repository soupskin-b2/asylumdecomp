// Engine_0e10000.cpp (part 1 of 3): 60 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00e117d0
IMPLEMENT_CLASS_AT(AFluidInfluenceActor, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\FluidInfluenceActor.cpp", 9);

// @baa 0x00e11830
struct C {
    void sub_00e11ad0();
    int sub_00e0f9c0(int, int);
};

// @baa 0x00e11ad0
void C::sub_00e11ad0(void)
{
    int param_1 = (int)this;
  ((C *)(this))->sub_00e0f9c0(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_00e11bc0 {
    void sub_00e11bc0();
    int sub_00e0fa80(int, int);
};

// @baa 0x00e11bc0
void C_00e11bc0::sub_00e11bc0(void)
{
    int param_1 = (int)this;
  ((C_00e11bc0 *)(this))->sub_00e0fa80(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_00e11c90 {
    undefined4 sub_00e11c90(undefined4, undefined4);
    int sub_00e0fb40(int, int);
};

// @baa 0x00e11c90
undefined4 C_00e11c90::sub_00e11c90(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_00e11c90 *)(this))->sub_00e0fb40(param_2, param_3);
  return param_1;
}

struct C_00e11cb0 {
    undefined4 sub_00e11cb0(undefined4, undefined4);
    int sub_00e0fba0(int, int);
};

// @baa 0x00e11cb0
undefined4 C_00e11cb0::sub_00e11cb0(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_00e11cb0 *)(this))->sub_00e0fba0(param_2, param_3);
  return param_1;
}

struct C_00e11cd0 {
    int sub_00e11cd0(undefined4, undefined4);
    int sub_00e0fc00(int, int);
};

// @baa 0x00e11cd0
int C_00e11cd0::sub_00e11cd0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_00e11cd0 *)(this))->sub_00e0fc00(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_00e11cf0 {
    int sub_00e11cf0(undefined4, undefined4);
    int sub_00e0fc80(int, int);
};

// @baa 0x00e11cf0
int C_00e11cf0::sub_00e11cf0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_00e11cf0 *)(this))->sub_00e0fc80(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_00e11d10 {
    int sub_00e11d10();
};

int sub_00e08f60(void);
// @baa 0x00e11d10
int C_00e11d10::sub_00e11d10(void)
{
    int param_1 = (int)this;

  sub_00e08f60();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00e11d30 {
    int sub_00e11d30();
};

int sub_00e08fc0(void);
// @baa 0x00e11d30
int C_00e11d30::sub_00e11d30(void)
{
    int param_1 = (int)this;

  sub_00e08fc0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00e11e80 {
    int sub_00e11e80(undefined4);
    int sub_00e0fe00(int);
};

// @baa 0x00e11e80
int C_00e11e80::sub_00e11e80(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_00e11e80 *)(this))->sub_00e0fe00(param_2);
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  return param_1;
}

void sub_00e11a60();
// @baa 0x00e12070
void sub_00e12070(void) { sub_00e11a60(); }

// @baa 0x00e13530
void sub_00e13530(void) { sub_00e11a60(); }

// @baa 0x00e139d0
int sub_00e139d0(void) { return 0; }

// @baa 0x00e139e0
uint UGuidCache::sub_00e139e0(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x18c) >> 2 & 1;
}

// @baa 0x00e139f0
int __stdcall sub_00e139f0(int a0) { return 0; }

// @baa 0x00e13a00
void __stdcall sub_00e13a00(int a0, int a1, int a2, int a3, int a4, int a5) {  }

// @baa 0x00e13a10
void __stdcall sub_00e13a10(int a0, int a1, int a2, int a3) {  }

// @baa 0x00e13a20
void __stdcall sub_00e13a20(int a0, int a1, int a2, int a3) {  }

int sub_00e08f00(void);
// @baa 0x00e13c00
int UGuidCache::sub_00e13c00(void)
{
    int param_1 = (int)this;

  sub_00e08f00();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00e148c0
IMPLEMENT_CLASS_AT(UPackageMapLevel, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnNetDrv.cpp", 195);

int sub_0061bbe0(void);
extern undefined * g_020e4070;
// @baa 0x00e14920
undefined4 * UPackageMap::sub_00e14920(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0061bbe0();
  *param_1 = (undefined4)(&g_020e4070);
  return param_1;
}

struct C_00e14940 {
    undefined4 * sub_00e14940(undefined4);
};

// @baa 0x00e14940
undefined4 * C_00e14940::sub_00e14940(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0061bbe0();
  param_1[0x2d] = param_2;
  *param_1 = (undefined4)(&g_020e4070);
  return param_1;
}

// @baa 0x00e14960
extern undefined * g_020e41b0;
// @baa 0x00e14990
undefined4 * UPackageMap::sub_00e14990(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0061bbe0();
  *param_1 = (undefined4)(&g_020e41b0);
  return param_1;
}

// @baa 0x00e149b0
void UPackageMapSeekFree::vf_120(void) {  }

// @baa 0x00e149c0
void UPackageMapSeekFree::vf_130(int a0) {  }

// @baa 0x00e149d0
void UPackageMapSeekFree::vf_124(void) {  }

// @baa 0x00e149e0
int UPackageMapSeekFree::vf_128(int a) {
    return a | 0xFFFFFFFF;
}

// @baa 0x00e14a30
IMPLEMENT_CLASS_AT(UPackageMapSeekFree, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnNetDrv.cpp", 298);

// @baa 0x00e14a90
undefined4 * UPackageMapSeekFree::sub_00e14a90(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0061bbe0();
  param_1[0x2d] = param_2;
  *param_1 = (undefined4)(&g_020e41b0);
  return param_1;
}

// @baa 0x00e14ab0
// @baa 0x00e16840
// @baa 0x00e16950
bool UPackageMapSeekFree::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

void sub_00e16290();
// @baa 0x00e16b60
void sub_00e16b60(void) { sub_00e16290(); }

// @baa 0x00e16fe0
bool UChildConnection::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

int sub_005eb8e0(...);
int sub_00df3e30(void);
int sub_00e16780(...);
extern undefined4 g_026c5ec4;
// @baa 0x00e17020
void sub_00e17020(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
{
  if (g_026c5ec4 == 0) {
    g_026c5ec4 = sub_00e16780(L"Engine");
    sub_00df3e30();
  }
  sub_005eb8e0(g_026c5ec4,param_1,param_2,param_3,param_4,param_5);
  return;
}

// @baa 0x00e17110
void sub_00e17110(void)
{
  return;
}

// @baa 0x00e17120
void sub_00e17120(void) {  }

// @baa 0x00e17140
int sub_00e17140(int param_1)
{
  if ((param_1 == 0) || ((*(uint *)(*(int *)(param_1 + 0x28) + 0xdc) & 0x80000) == 0)) {
    param_1 = 0;
  }
  return param_1;
}

// @baa 0x00e17160
int sub_00e17160(int param_1)
{
  if ((param_1 == 0) || ((*(uint *)(*(int *)(param_1 + 0x28) + 0xdc) & 0x100000) == 0)) {
    param_1 = 0;
  }
  return param_1;
}

// @baa 0x00e17180
int sub_00e17180(int param_1)
{
  if ((param_1 == 0) || ((*(uint *)(*(int *)(param_1 + 0x28) + 0xdc) & 0x200) == 0)) {
    param_1 = 0;
  }
  return param_1;
}

// @baa 0x00e171a0
int sub_00e171a0(int param_1)
{
  if ((param_1 == 0) || ((*(uint *)(*(int *)(param_1 + 0x28) + 0xdc) & 0x400) == 0)) {
    param_1 = 0;
  }
  return param_1;
}

// @baa 0x00e171c0
int sub_00e171c0(int param_1)
{
  if ((param_1 == 0) || ((*(uint *)(*(int *)(param_1 + 0x28) + 0xdc) & 0x1000) == 0)) {
    param_1 = 0;
  }
  return param_1;
}

// @baa 0x00e171e0
int sub_00e171e0(int param_1)
{
  if ((param_1 == 0) || ((*(uint *)(*(int *)(param_1 + 0x28) + 0xdc) & 0x200000) == 0)) {
    param_1 = 0;
  }
  return param_1;
}

// @baa 0x00e17200
int sub_00e17200(int param_1)
{
  if ((param_1 == 0) || ((*(uint *)(*(int *)(param_1 + 0x28) + 0xdc) & 0x800000) == 0)) {
    param_1 = 0;
  }
  return param_1;
}

extern char g_020e9df0[];
struct C_00e17220 { void sub_00e17220(void); };

// @baa 0x00e17220
void C_00e17220::sub_00e17220(void) { *(int*)((char*)this + 0) = (int)g_020e9df0; }

struct C_00e17230 {
    undefined4 * sub_00e17230(byte);
};

int sub_0053dfa0(...);
// @baa 0x00e17230
undefined4 * C_00e17230::sub_00e17230(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_020e9df0);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00e17250
undefined2 sub_00e17250(void)
{
  return 0x73;
}

// @baa 0x00e17260
int sub_00e17260(int a0, int a1) { return a1; }

// @baa 0x00e17270
int sub_00e17270(int a0, int a1) { return a1; }

// @baa 0x00e17280
IMPLEMENT_CLASS_AT(UPendingLevel, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPenLev.cpp", 22);

// @baa 0x00e17390
int UPendingLevel::vf_000(void) { return 1; }

// @baa 0x00e173a0
bool UPendingLevel::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00e17420
int sub_00e17420(void) { return 0; }

// @baa 0x00e17430
void __stdcall sub_00e17430(int a0) {  }

// @baa 0x00e17440
int __stdcall sub_00e17440(int a0) { return 0; }

// @baa 0x00e17450
int sub_00e17450(void) { return 0; }

// @baa 0x00e195c0
void sub_00e195c0(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

extern "C" int sub_00630f20(int, const wchar_t*);
extern int g_026667a8;
// @baa 0x00e14a10
INT UPackageMapSeekFree::vf_138(INT a, INT b)
{
    sub_00630f20(g_026667a8, L"This should never have been called with UPackageMapSeekFree!");
    return 0;
}
