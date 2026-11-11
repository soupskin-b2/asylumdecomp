// Engine_06d0000.cpp (part 1 of 4): 335 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct M_006d0e90 { void sub_006cbc40(); };

struct C { char pad[96]; M_006d0e90 m; void sub_006d0e90(); };

// @baa 0x006d0e90
void C::sub_006d0e90() { m.sub_006cbc40(); }

void sub_006cd050();
// @baa 0x006d0ea0
void sub_006d0ea0(void) { sub_006cd050(); }

void sub_006cc0f0();
// @baa 0x006d0fd0
void sub_006d0fd0(void) { sub_006cc0f0(); }

struct C_006d0fe0 {
    char pad[0x1944];
    int count;
    void sub_006cd1e0();
    void sub_006d0fe0();
};

// @baa 0x006d0fe0
void C_006d0fe0::sub_006d0fe0()
{
    count++;
    sub_006cd1e0();
}

int sub_006c91f0(void);
// @baa 0x006d1580
int USpeechRecognition::sub_006d1580(void)
{
    int param_1 = (int)this;

  sub_006c91f0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_006d15a0 {
    int sub_006d15a0();
};

int sub_006c9250(void);
// @baa 0x006d15a0
int C_006d15a0::sub_006d15a0(void)
{
    int param_1 = (int)this;

  sub_006c9250();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x006d55d0
void UMaterial::vf_05c(void)
{
    int param_1 = (int)this;

  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + 0x214);
  iVar2 = 2;
  do {
    if (*piVar1 != 0) {
      *(undefined4 *)(*piVar1 + 0x54) = 0;
    }
    piVar1 = piVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

// @baa 0x006d5d10
int USpeechRecognition::sub_006d5d10(void)
{
    int param_1 = (int)this;

  sub_006c91f0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_006d5d30 {
    int sub_006d5d30();
};

// @baa 0x006d5d30
int C_006d5d30::sub_006d5d30(void)
{
    int param_1 = (int)this;

  sub_006c9250();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_006d2950();
// @baa 0x006d6270
void sub_006d6270(void) { sub_006d2950(); }

void sub_006d29c0();
// @baa 0x006d6280
void sub_006d6280(void) { sub_006d29c0(); }

void sub_006d2a30();
// @baa 0x006d62c0
void sub_006d62c0(void) { sub_006d2a30(); }

// @baa 0x006d66b0
int USpeechRecognition::sub_006d66b0(void)
{
    int param_1 = (int)this;

  sub_006c91f0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x006d66d0
void sub_006d66d0(void) { sub_006d2950(); }

// @baa 0x006d6890
int sub_006d6890(void) { return 1; }

// @baa 0x006d68a0
int sub_006d68a0(void) { return 0; }

// @baa 0x006d68b0
int sub_006d68b0(void) { return 0; }

// @baa 0x006d68c0
int sub_006d68c0(void) { return 0; }

// @baa 0x006d68d0
int sub_006d68d0(void) { return 0; }

// @baa 0x006d68e0
int sub_006d68e0(void) { return 0; }

// @baa 0x006d68f0
int sub_006d68f0(void) { return 0; }

// @baa 0x006d6900
int sub_006d6900(void) { return 0; }

// @baa 0x006d6910
int sub_006d6910(void) { return 0; }

// @baa 0x006d6920
int sub_006d6920(void) { return 0; }

// @baa 0x006d6930
int sub_006d6930(void) { return 0; }

// @baa 0x006d6940
int sub_006d6940(void) { return 0; }

// @baa 0x006d6950
int sub_006d6950(void) { return 0; }

// @baa 0x006d6960
int sub_006d6960(void) { return 0; }

// @baa 0x006d6970
int sub_006d6970(void) { return 0; }

// @baa 0x006d6980
int sub_006d6980(void) { return 0; }

// @baa 0x006d6990
int sub_006d6990(void) { return 0; }

// @baa 0x006d69a0
int sub_006d69a0(void) { return 0; }

// @baa 0x006d69b0
int sub_006d69b0(void) { return 0; }

// @baa 0x006d69c0
int sub_006d69c0(void) { return 0; }

int sub_006ae990(void);
int sub_006d6500(...);
extern undefined4 g_026b0de4;
// @baa 0x006d6a00
int sub_006d6a00(void)
{
  if (g_026b0de4 == 0) {
    g_026b0de4 = sub_006d6500(L"Engine");
    sub_006ae990();
  }
  return g_026b0de4;
}

// @baa 0x006d6f40
int USpeechRecognition::sub_006d6f40(void)
{
    int param_1 = (int)this;

  sub_006c91f0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  return param_1;
}

int sub_0053dfa0(...);
int sub_006d6e60(void);
// @baa 0x006d7490
undefined4 UMaterial::sub_006d7490(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_006d6e60();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x006d8030
void sub_006d8030(void) {  }

// @baa 0x006d8040
void sub_006d8040(void) {  }

// @baa 0x006d8050
float10 sub_006d8050(double param_1)
{
  return (float10)param_1;
}

struct C_006d8060 { void sub_006d8060(void); };

// @baa 0x006d8060
void C_006d8060::sub_006d8060(void) { *(int*)((char*)this + 0) = 0; }

struct C_006d8300 { int sub_006d8300(void); };

// @baa 0x006d8300
int C_006d8300::sub_006d8300(void) { return *(int*)((char*)this + 8); }

struct C_006d8310 {
    void sub_006d8310(undefined4, undefined4, undefined4);
};

// @baa 0x006d8310
void C_006d8310::sub_006d8310(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;

  (**(code **)(param_1 + 0x20))(param_2,param_3,param_4);
  return;
}

struct C_006d8330 {
    void sub_006d8330();
};

int sub_006311e0(...);
extern undefined2 g_01e3f3dc;
extern undefined4 g_01ec1274;
// @baa 0x006d8330
void C_006d8330::sub_006d8330(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ec1274);
  if (param_1[1] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  return;
}

extern char g_01ed9080[];
struct C_006d8360 { C_006d8360* sub_006d8360(void); };

// @baa 0x006d8360
C_006d8360* C_006d8360::sub_006d8360(void) { *(int*)((char*)this + 0) = (int)g_01ed9080; return this; }

// @baa 0x006d8370
int __stdcall sub_006d8370(int a0) { return a0; }

struct C_006d8380 { char* sub_006d8380(void); };

// @baa 0x006d8380
char* C_006d8380::sub_006d8380(void) { return (char*)this + 104; }

struct C_006d8390 { int sub_006d8390(void); };

// @baa 0x006d8390
int C_006d8390::sub_006d8390(void) { return *(int*)((char*)this + 100); }

struct C_006d83a0 {
    void sub_006d83a0(undefined4, undefined4, undefined4);
};

// @baa 0x006d83a0
void C_006d83a0::sub_006d83a0(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;

  (**(code **)(param_1 + 0xa4))(param_2,param_3,param_4);
  return;
}

struct C_006d8420 { C_006d8420* sub_006d8420(void); };

// @baa 0x006d8420
C_006d8420* C_006d8420::sub_006d8420(void) { return this; }

struct C_006d8430 {
    void sub_006d8430();
};

// @baa 0x006d8430
void C_006d8430::sub_006d8430(void)
{
    uint * param_1 = (uint *)this;

  *param_1 = *param_1 | 0xfffffffe;
  return;
}

// @baa 0x006d8440
int sub_006d8440(int a0, int a1) { return a1; }

// @baa 0x006d8450
int sub_006d8450(int a0, int a1) { return a1; }

struct S {
    virtual void vf_00();
    virtual void vf_04();
    virtual void vf_08();
    virtual void vf_0c();
    virtual void vf_10();
    virtual void vf_14();
    virtual void vf_18(INT Value);
};

// @baa 0x006d8560
void sub_006d8560(S* p, INT Value)
{
    p->vf_18(Value);
}

int sub_00716a50(void);
int sub_0071b2d0(...);
extern undefined4 g_026b2248;
// @baa 0x006d8580
int sub_006d8580(void)
{
  if (g_026b2248 == 0) {
    g_026b2248 = sub_0071b2d0(L"Engine");
    sub_00716a50();
  }
  return g_026b2248;
}

// @baa 0x006d85b0
int sub_006d85b0(int a0, int a1) { return a1; }

// @baa 0x006d85c0
int sub_006d85c0(int a0, int a1) { return a1; }

struct C_view {
    int sub_00c407b0(int);
};

extern undefined4 g_01ed917c;
// @baa 0x006d85e0
undefined4 * UUnrealEdEngine::sub_006d85e0(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view *)(this))->sub_00c407b0(0);
  param_1[4] = param_2;
  *param_1 = (undefined4)(&g_01ed917c);
  return param_1;
}

extern undefined4 g_026af518;
extern undefined4 g_026af51c;
extern undefined4 g_026af520;
extern undefined4 g_026b1330;
extern undefined4 g_026b1334;
extern undefined4 g_026b1338;
// @baa 0x006d8600
undefined * sub_006d8600(void)
{
  if ((g_026b1338 & 1) == 0) {
    g_026b1338 = g_026b1338 | 1;
    if ((g_026af520 & 1) == 0) {
      g_026af520 = g_026af520 | 1;
      g_026af518 = 0;
      g_026af51c = (undefined4)(L"HHitProxy");
    }
    g_026b1330 = (undefined4)(&g_026af518);
    g_026b1334 = (undefined4)(L"HActor");
  }
  return (undefined *)(&g_026b1330);
}

// @baa 0x006d8660
undefined4 * UUnrealEdEngine::sub_006d8660(undefined4 param_2, undefined4 param_3)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view *)(this))->sub_00c407b0(param_3);
  *param_1 = (undefined4)(&g_01ed917c);
  param_1[4] = param_2;
  return param_1;
}

// @baa 0x006d86a0
int sub_006d86a0(void) { return 3; }

void sub_00c38ac0();
// @baa 0x006d86b0
void sub_006d86b0(void) { sub_00c38ac0(); }

int sub_00c330c0(...);
int sub_00c39600(void);
extern undefined4 g_026c098c;
// @baa 0x006d86c0
int sub_006d86c0(void)
{
  if (g_026c098c == 0) {
    g_026c098c = sub_00c330c0(L"Engine");
    sub_00c39600();
  }
  return g_026c098c;
}

int sub_00c34d40(...);
int sub_00c439a0(void);
extern undefined4 g_026c0a24;
// @baa 0x006d86f0
int sub_006d86f0(void)
{
  if (g_026c0a24 == 0) {
    g_026c0a24 = sub_00c34d40(L"Engine");
    sub_00c439a0();
  }
  return g_026c0a24;
}

struct C_006d8720 { C_006d8720* sub_006d8720(void); };

// @baa 0x006d8720
C_006d8720* C_006d8720::sub_006d8720(void) { *(int*)((char*)this + 16) = 0; return this; }

struct C_006d8730 { C_006d8730* sub_006d8730(void); };

// @baa 0x006d8730
C_006d8730* C_006d8730::sub_006d8730(void) { *(int*)((char*)this + 12) = 0; return this; }

struct C_006d8740 { C_006d8740* sub_006d8740(void); };

// @baa 0x006d8740
C_006d8740* C_006d8740::sub_006d8740(void) { *(int*)((char*)this + 12) = 0; return this; }

struct C_006d8750 { C_006d8750* sub_006d8750(void); };

// @baa 0x006d8750
C_006d8750* C_006d8750::sub_006d8750(void) { *(int*)((char*)this + 24) = 0; return this; }

// @baa 0x006d8760
int sub_006d8760(int a0, int a1) { return a1; }

struct C_006d8770 { C_006d8770* sub_006d8770(void); };

// @baa 0x006d8770
C_006d8770* C_006d8770::sub_006d8770(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_006d8780 { C_006d8780* sub_006d8780(void); };

// @baa 0x006d8780
C_006d8780* C_006d8780::sub_006d8780(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_006d8790 { C_006d8790* sub_006d8790(void); };

// @baa 0x006d8790
C_006d8790* C_006d8790::sub_006d8790(void) { *(int*)((char*)this + 0) = 0; return this; }

// @baa 0x006d87a0
int sub_006d87a0(int a0, int a1) { return a1; }

// @baa 0x006d8820
IMPLEMENT_CLASS_AT(UMaterialInstanceConstant, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\MaterialInstanceConstant.cpp", 10);

// @baa 0x006d8930
int UMaterialInstanceConstant::vf_000(void) { return 1; }

// @baa 0x006d8940
bool UMaterialInstanceConstant::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x006d8980
int sub_006d8980(int param_1)
{
  return param_1 + 0x7c;
}

extern char g_01ed14c0[];
// @baa 0x006d89c0
int sub_006d89c0(void) { return (int)g_01ed14c0; }

extern char g_01ebb554[];
// @baa 0x006d89d0
void UMaterialInstanceConstant::sub_006d89d0(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

// @baa 0x006d89e0
undefined4 * UMaterialInstanceConstant::sub_006d89e0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x006d8a00
int sub_006d8a00(int param_1)
{
  return param_1 + 0x94;
}

extern char g_01ed14f4[];
// @baa 0x006d8a50
int sub_006d8a50(void) { return (int)g_01ed14f4; }

// @baa 0x006d8a60
void UMaterialInstanceConstant::sub_006d8a60(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

// @baa 0x006d8a70
undefined4 * UMaterialInstanceConstant::sub_006d8a70(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x006d8a90
int sub_006d8a90(int param_1)
{
  return param_1 + 0x88;
}

extern char g_01ed1528[];
// @baa 0x006d8ad0
int sub_006d8ad0(void) { return (int)g_01ed1528; }

// @baa 0x006d8ae0
void UMaterialInstanceConstant::sub_006d8ae0(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

// @baa 0x006d8af0
undefined4 * UMaterialInstanceConstant::sub_006d8af0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x006d8b10
int sub_006d8b10(int param_1)
{
  return param_1 + 0x70;
}

extern char g_01ed155c[];
// @baa 0x006d8b50
int sub_006d8b50(void) { return (int)g_01ed155c; }

// @baa 0x006d8b60
void UMaterialInstanceConstant::sub_006d8b60(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

// @baa 0x006d8b70
undefined4 * UMaterialInstanceConstant::sub_006d8b70(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x006d8c20
IMPLEMENT_CLASS_AT(UMaterialInstanceTimeVarying, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\MaterialInstanceTimeVarying.cpp", 10);

// @baa 0x006d8d30
int UMaterialInstanceTimeVarying::vf_000(void) { return 1; }

// @baa 0x006d8d40
bool UMaterialInstanceTimeVarying::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x006d8d80
int sub_006d8d80(int param_1)
{
  return param_1 + 0x84;
}

extern char g_01ed17fc[];
// @baa 0x006d8d90
int sub_006d8d90(void) { return (int)g_01ed17fc; }

// @baa 0x006d8da0
int sub_006d8da0(int param_1)
{
  return param_1 + 0x9c;
}

extern char g_01ed1830[];
// @baa 0x006d8db0
int sub_006d8db0(void) { return (int)g_01ed1830; }

// @baa 0x006d8dc0
int sub_006d8dc0(int param_1)
{
  return param_1 + 0x90;
}

extern char g_01ed1864[];
// @baa 0x006d8e00
int sub_006d8e00(void) { return (int)g_01ed1864; }

// @baa 0x006d8e10
void UMaterialInstanceTimeVarying::sub_006d8e10(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

// @baa 0x006d8e20
undefined4 * UMaterialInstanceTimeVarying::sub_006d8e20(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x006d8e40
int sub_006d8e40(int param_1)
{
  return param_1 + 0x78;
}

extern char g_01ed1898[];
// @baa 0x006d8e80
int sub_006d8e80(void) { return (int)g_01ed1898; }

// @baa 0x006d8e90
void UMaterialInstanceTimeVarying::sub_006d8e90(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

// @baa 0x006d8ea0
undefined4 * UMaterialInstanceTimeVarying::sub_006d8ea0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x006d8f50
void sub_006d8f50(S* p, INT Value)
{
    p->vf_18(Value);
}

// @baa 0x006d8f70
IMPLEMENT_CLASS_AT(UMaterialInterface, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\MaterialShared.cpp", 10);

// @baa 0x006d9080
int UMaterialInterface::vf_000(void) { return 1; }

// @baa 0x006d9090
bool UMaterialInterface::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x006d90d0
IMPLEMENT_CLASS_AT(AMaterialInstanceActor, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\MaterialShared.cpp", 11);

// @baa 0x006d91e0
int AMaterialInstanceActor::vf_000(void) { return 1; }

// @baa 0x006d91f0
bool AMaterialInstanceActor::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x006d9230
int sub_006d9230(void) { return 272; }

// @baa 0x006d9240
int sub_006d9240(void) { return 290; }

// @baa 0x006d9310
int UMaterialInterface::vf_124(int a0, int a1, int a2) { return 0; }

// @baa 0x006d9320
int UMaterialInterface::vf_118(int a0, int a1, int a2) { return 0; }

// @baa 0x006d9330
int UMaterialInterface::vf_11c(int a0, int a1, int a2) { return 0; }

// @baa 0x006d9340
int UMaterialInterface::vf_128(int a0, int a1, int a2) { return 0; }

// @baa 0x006d9350
int UMaterialInterface::vf_120(int a0, int a1, int a2) { return 0; }

// @baa 0x006d9360
UINT UMaterialInterface::vf_114(UINT a0, UINT a1, INT * a2, UINT * a3) { return 0; }

extern char g_026b133c[];
// @baa 0x006d9370
int sub_006d9370(void) { return (int)g_026b133c; }

// @baa 0x006d9710
undefined4 sub_006d9710(int param_1)
{
  if ((param_1 != 0) && (param_1 != 1)) {
    return 1;
  }
  return 0;
}

struct C_006d9730 {
    uint sub_006d9730();
};

// @baa 0x006d9730
uint C_006d9730::sub_006d9730(void)
{
    int param_1 = (int)this;

  return *(uint *)(*(int *)(param_1 + 0xb4) + 0x20c) & 1;
}

struct C_006d9740 {
    uint sub_006d9740();
};

// @baa 0x006d9740
uint C_006d9740::sub_006d9740(void)
{
    int param_1 = (int)this;

  return *(uint *)(*(int *)(param_1 + 0xb4) + 0x20c) >> 1 & 1;
}

struct C_006d9760 {
    uint sub_006d9760();
};

// @baa 0x006d9760
uint C_006d9760::sub_006d9760(void)
{
    int param_1 = (int)this;

  return *(uint *)(*(int *)(param_1 + 0xb4) + 0x20c) >> 2 & 1;
}

struct C_006d97b0 {
    byte sub_006d97b0();
};

// @baa 0x006d97b0
byte C_006d97b0::sub_006d97b0(void)
{
    int param_1 = (int)this;

  return *(byte *)(*(int *)(param_1 + 0xb4) + 0x20f) & 1;
}

struct C_006d97d0 {
    uint sub_006d97d0();
};

// @baa 0x006d97d0
uint C_006d97d0::sub_006d97d0(void)
{
    int param_1 = (int)this;

  return *(uint *)(*(int *)(param_1 + 0xb4) + 0x20c) >> 5 & 1;
}

struct C_006d97f0 {
    uint sub_006d97f0();
};

// @baa 0x006d97f0
uint C_006d97f0::sub_006d97f0(void)
{
    int param_1 = (int)this;

  return *(uint *)(*(int *)(param_1 + 0xb4) + 0x20c) >> 4 & 1;
}

struct C_006d9810 {
    uint sub_006d9810();
};

// @baa 0x006d9810
uint C_006d9810::sub_006d9810(void)
{
    int param_1 = (int)this;

  return *(uint *)(*(int *)(param_1 + 0xb4) + 0x20c) >> 6 & 1;
}

// @baa 0x006d9830
int sub_006d9830(void) { return 0; }

// @baa 0x006d9840
int sub_006d9840(void) { return 0; }

struct C_006d9850 {
    uint sub_006d9850();
};

// @baa 0x006d9850
uint C_006d9850::sub_006d9850(void)
{
    int param_1 = (int)this;

  return *(uint *)(*(int *)(param_1 + 0xb4) + 0x20c) >> 7 & 1;
}

struct C_006d9870 {
    uint sub_006d9870();
};

// @baa 0x006d9870
uint C_006d9870::sub_006d9870(void)
{
    int param_1 = (int)this;

  return *(uint *)(*(int *)(param_1 + 0xb4) + 0x20c) >> 8 & 1;
}

struct C_006d9890 {
    uint sub_006d9890();
};

// @baa 0x006d9890
uint C_006d9890::sub_006d9890(void)
{
    int param_1 = (int)this;

  return *(uint *)(*(int *)(param_1 + 0xb4) + 0x20c) >> 0xe & 1;
}

struct C_006d98d0 {
    uint sub_006d98d0();
};

// @baa 0x006d98d0
uint C_006d98d0::sub_006d98d0(void)
{
    int param_1 = (int)this;

  return *(uint *)(*(int *)(param_1 + 0xb4) + 0x20c) >> 10 & 1;
}

struct C_006d98f0 {
    uint sub_006d98f0();
};

// @baa 0x006d98f0
uint C_006d98f0::sub_006d98f0(void)
{
    int param_1 = (int)this;

  return *(uint *)(*(int *)(param_1 + 0xb4) + 0x20c) >> 0xb & 1;
}

struct C_006d9910 {
    uint sub_006d9910();
};

// @baa 0x006d9910
uint C_006d9910::sub_006d9910(void)
{
    int param_1 = (int)this;

  return *(uint *)(*(int *)(param_1 + 0xb4) + 0x20c) >> 0xc & 1;
}

struct C_006d9930 {
    uint sub_006d9930();
};

// @baa 0x006d9930
uint C_006d9930::sub_006d9930(void)
{
    int param_1 = (int)this;

  return *(uint *)(*(int *)(param_1 + 0xb4) + 0x20c) >> 0xd & 1;
}

struct C_006d9950 {
    uint sub_006d9950();
};

// @baa 0x006d9950
uint C_006d9950::sub_006d9950(void)
{
    int param_1 = (int)this;

  return *(uint *)(*(int *)(param_1 + 0xb4) + 0x20c) >> 0xf & 1;
}

struct C_006d9970 {
    byte sub_006d9970();
};

// @baa 0x006d9970
byte C_006d9970::sub_006d9970(void)
{
    int param_1 = (int)this;

  return *(byte *)(*(int *)(param_1 + 0xb4) + 0x20e) & 1;
}

struct C_006d9990 {
    uint sub_006d9990();
};

// @baa 0x006d9990
uint C_006d9990::sub_006d9990(void)
{
    int param_1 = (int)this;

  return *(uint *)(*(int *)(param_1 + 0xb4) + 0x20c) >> 0x11 & 1;
}

struct C_006d99b0 {
    uint sub_006d99b0();
};

// @baa 0x006d99b0
uint C_006d99b0::sub_006d99b0(void)
{
    int param_1 = (int)this;
  return *(uint *)(*(int *)(param_1 + 0xb4) + 0x20c) >> 0x12 & 1;
}

struct C_006d99d0 {
    uint sub_006d99d0();
};

// @baa 0x006d99d0
uint C_006d99d0::sub_006d99d0(void)
{
    int param_1 = (int)this;

  return *(uint *)(*(int *)(param_1 + 0xb4) + 0x20c) >> 0x13 & 1;
}

struct C_006d99f0 {
    uint sub_006d99f0();
};

// @baa 0x006d99f0
uint C_006d99f0::sub_006d99f0(void)
{
    int param_1 = (int)this;

  return *(uint *)(*(int *)(param_1 + 0xb4) + 0x20c) >> 0x15 & 1;
}

struct C_006d9a10 {
    uint sub_006d9a10();
};

// @baa 0x006d9a10
uint C_006d9a10::sub_006d9a10(void)
{
    int param_1 = (int)this;

  return *(uint *)(*(int *)(param_1 + 0xb4) + 0x20c) >> 0x14 & 1;
}

struct C_006d9a30 {
    uint sub_006d9a30();
};

// @baa 0x006d9a30
uint C_006d9a30::sub_006d9a30(void)
{
    int param_1 = (int)this;

  return *(uint *)(*(int *)(param_1 + 0xb4) + 0x20c) >> 0x16 & 1;
}

struct C_006d9a50 {
    uint sub_006d9a50();
};

// @baa 0x006d9a50
uint C_006d9a50::sub_006d9a50(void)
{
    int param_1 = (int)this;

  return *(uint *)(*(int *)(param_1 + 0xb4) + 0x20c) >> 0x17 & 1;
}

// @baa 0x006d9a70
int sub_006d9a70(void) { return 1; }

struct C_006d9aa0 {
    float10 sub_006d9aa0();
};

// @baa 0x006d9aa0
float10 C_006d9aa0::sub_006d9aa0(void)
{
    int param_1 = (int)this;

  return (float10)*(float *)(*(int *)(param_1 + 0xb4) + 0x170);
}

struct C_006d9ab0 {
    undefined4 sub_006d9ab0();
};

// @baa 0x006d9ab0
undefined4 C_006d9ab0::sub_006d9ab0(void)
{
    int param_1 = (int)this;

  uint uVar1;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 0xb4) + 0x20c);
  if (((uVar1 & 0x4000000) != 0) && ((uVar1 & 8) == 0)) {
    return 1;
  }
  return 0;
}

struct C_006d9ad0 {
    uint sub_006d9ad0();
};

// @baa 0x006d9ad0
uint C_006d9ad0::sub_006d9ad0(void)
{
    int param_1 = (int)this;

  return *(uint *)(*(int *)(param_1 + 0xb4) + 0x20c) >> 0x1b & 1;
}

struct C_006d9af0 {
    uint sub_006d9af0();
};

// @baa 0x006d9af0
uint C_006d9af0::sub_006d9af0(void)
{
    int param_1 = (int)this;

  return *(uint *)(*(int *)(param_1 + 0xb4) + 0x20c) >> 0x1c & 1;
}

// @baa 0x006d9b70
undefined4 sub_006d9b70(undefined4 param_1)
{
  switch(param_1) {
  case 1:
    return 0xf;
  case 2:
    return 2;
  case 3:
    return 4;
  case 4:
    return 8;
  default:
    return 0x40;
  }
}

struct C_006d9bc0 {
    INT* Unk00; // 0x00
    INT Value04; // 0x04
    C_006d9bc0* sub_006d9bc0();
};

extern INT g_01ed9200;
// @baa 0x006d9bc0
C_006d9bc0* C_006d9bc0::sub_006d9bc0()
{
    Value04 = 0;
    Unk00 = &g_01ed9200;
    return this;
}

// @baa 0x006d9bd0
void __stdcall sub_006d9bd0(int a0, int a1) {  }

// @baa 0x006d9be0
void __stdcall sub_006d9be0(int a0, int a1) {  }

// @baa 0x006d9bf0
void __stdcall sub_006d9bf0(int a0, int a1) {  }

// @baa 0x006d9c00
int sub_006d9c00(void) { return 0; }

// @baa 0x006d9c10
int __stdcall sub_006d9c10(int a0) { return 0; }

struct C_006d9c20 {
    undefined4 * sub_006d9c20(byte);
};

// @baa 0x006d9c20
undefined4 * C_006d9c20::sub_006d9c20(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ec1274);
  if (param_1[1] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_006d9c60 {
    INT* Unk00; // 0x00
    INT Value04; // 0x04
    C_006d9c60* sub_006d9c60();
};

extern INT g_01ed9220;
// @baa 0x006d9c60
C_006d9c60* C_006d9c60::sub_006d9c60()
{
    Value04 = 0;
    Unk00 = &g_01ed9220;
    return this;
}

// @baa 0x006d9c70
void sub_006d9c70(S* p, INT Value)
{
    p->vf_18(Value);
}

extern char g_025d7a08[];
// @baa 0x006d9c90
int sub_006d9c90(void) { return (int)g_025d7a08; }

struct C_006d9cf0 {
    void sub_006d9cf0(undefined4, undefined4 *);
};

// @baa 0x006d9cf0
void C_006d9cf0::sub_006d9cf0(undefined4 param_2, undefined4 * param_3)
{
    int param_1 = (int)this;

  *param_3 = *(undefined4 *)(param_1 + 8);
  return;
}

// @baa 0x006d9d00
int sub_006d9d00(void) { return 0; }

struct C_006d9d30 {
    void sub_006d9d30();
};

// @baa 0x006d9d30
void C_006d9d30::sub_006d9d30(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ec1274);
  if (param_1[1] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  return;
}

struct C_006d9d60 {
    INT* Unk00; // 0x00
    INT Value04; // 0x04
    C_006d9d60* sub_006d9d60();
};

extern INT g_01ed9240;
// @baa 0x006d9d60
C_006d9d60* C_006d9d60::sub_006d9d60()
{
    Value04 = 0;
    Unk00 = &g_01ed9240;
    return this;
}

extern char g_025d7a10[];
// @baa 0x006d9d70
int sub_006d9d70(void) { return (int)g_025d7a10; }

// @baa 0x006d9d80
void __stdcall sub_006d9d80(int a0) {  }

// @baa 0x006d9da0
int sub_006d9da0(void) { return 0; }

// @baa 0x006d9db0
int __stdcall sub_006d9db0(int a0) { return 1; }

struct C_006d9dc0 {
    void sub_006d9dc0();
};

// @baa 0x006d9dc0
void C_006d9dc0::sub_006d9dc0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ec1274);
  if (param_1[1] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  return;
}

struct C_006d9df0 {
    INT* Unk00; // 0x00
    INT Value04; // 0x04
    C_006d9df0* sub_006d9df0();
};

extern INT g_01ed9260;
// @baa 0x006d9df0
C_006d9df0* C_006d9df0::sub_006d9df0()
{
    Value04 = 0;
    Unk00 = &g_01ed9260;
    return this;
}

extern char g_025d7a18[];
// @baa 0x006d9e00
int sub_006d9e00(void) { return (int)g_025d7a18; }

// @baa 0x006d9e10
void __stdcall sub_006d9e10(int a0) {  }

// @baa 0x006d9e30
int sub_006d9e30(void) { return 0; }

// @baa 0x006d9e40
int __stdcall sub_006d9e40(int a0) { return 1; }

struct C_006d9e50 {
    void sub_006d9e50();
};

// @baa 0x006d9e50
void C_006d9e50::sub_006d9e50(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ec1274);
  if (param_1[1] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  return;
}

struct C_006d9e80 {
    INT* Unk00; // 0x00
    INT Value04; // 0x04
    C_006d9e80* sub_006d9e80();
};

extern INT g_01ed9280;
// @baa 0x006d9e80
C_006d9e80* C_006d9e80::sub_006d9e80()
{
    Value04 = 0;
    Unk00 = &g_01ed9280;
    return this;
}

struct C_006d9ed0 {
    undefined4 sub_006d9ed0(float *);
};

// @baa 0x006d9ed0
undefined4 C_006d9ed0::sub_006d9ed0(float * param_2)
{
    float * param_1 = (float *)this;
  if ((((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) &&
     (param_1[3] == param_2[3])) {
    return 1;
  }
  return 0;
}

extern char g_025d7a20[];
// @baa 0x006d9f20
int sub_006d9f20(void) { return (int)g_025d7a20; }

// @baa 0x006d9fe0
int sub_006d9fe0(void) { return 0; }

struct C_006da050 {
    void sub_006da050();
};

// @baa 0x006da050
void C_006da050::sub_006da050(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ec1274);
  if (param_1[1] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  return;
}

struct C_006da080 {
    INT* Unk00; // 0x00
    INT Value04; // 0x04
    C_006da080* sub_006da080();
};

extern INT g_01ed92a0;
// @baa 0x006da080
C_006da080* C_006da080::sub_006da080()
{
    Value04 = 0;
    Unk00 = &g_01ed92a0;
    return this;
}

extern char g_025d7a28[];
// @baa 0x006da090
int sub_006da090(void) { return (int)g_025d7a28; }

// @baa 0x006da110
int sub_006da110(void) { return 0; }

struct C_006da150 {
    void sub_006da150();
};

// @baa 0x006da150
void C_006da150::sub_006da150(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(&g_01ec1274);
  if (param_1[1] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  return;
}

struct C_006da180 {
    INT* Unk00; // 0x00
    INT Value04; // 0x04
    C_006da180* sub_006da180();
};

extern INT g_01ed92c0;
// @baa 0x006da180
C_006da180* C_006da180::sub_006da180()
{
    Value04 = 0;
    Unk00 = &g_01ed92c0;
    return this;
}

extern char g_025d7a30[];
// @baa 0x006da190
int sub_006da190(void) { return (int)g_025d7a30; }

// @baa 0x006da280
int sub_006da280(void) { return 0; }

struct C_006da2c0 {
    void sub_006da2c0();
};

// @baa 0x006da2c0
void C_006da2c0::sub_006da2c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ec1274);
  if (param_1[1] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  return;
}

struct C_006da2f0 {
    INT* Unk00; // 0x00
    INT Value04; // 0x04
    C_006da2f0* sub_006da2f0();
};

extern INT g_01ed92e0;
// @baa 0x006da2f0
C_006da2f0* C_006da2f0::sub_006da2f0()
{
    Value04 = 0;
    Unk00 = &g_01ed92e0;
    return this;
}

// @baa 0x006da300
void sub_006da300(S* p, INT Value)
{
    p->vf_18(Value);
}

extern char g_025d7a38[];
// @baa 0x006da320
int sub_006da320(void) { return (int)g_025d7a38; }

// @baa 0x006da380
int sub_006da380(void) { return 0; }

struct C_006da3b0 {
    void sub_006da3b0();
};

// @baa 0x006da3b0
void C_006da3b0::sub_006da3b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ec1274);
  if (param_1[1] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  return;
}

struct T {
    virtual void f0();
};

struct C_006da490 {
    DWORD pad0;
    T *p;
    void sub_006da490();
};

// @baa 0x006da490
void C_006da490::sub_006da490() {
    p->f0();
}

struct Target {
    virtual int v0();
    virtual int v1(int a);
    virtual int v2(int a);
};

struct S_006da5c0 {
    int f0;
    Target *f1;
    int sub_006da5c0(int a);
};

// @baa 0x006da5c0
int S_006da5c0::sub_006da5c0(int a)
{
    return f1->v2(a);
}

struct Target_006da5d0 {
    virtual ~Target_006da5d0() = 0;
    virtual void v1() = 0;
    virtual void v2() = 0;
    virtual void v3(int x, int y, int z) = 0;
};

struct C_006da5d0 {
    char pad[4];
    Target_006da5d0* p; // offset 4

    void sub_006da5d0(int a, int b, int c) {
        p->v3(a, b, c);
    }

    void caller() {
        sub_006da5d0(1, 2, 3);
    }
};

extern C_006da5d0* g_ptr;
// @baa 0x006da5d0
void ref_user() { g_ptr->caller(); }

struct T_006da5e0 {
    virtual void f();
};

struct C_006da5e0 {
    char pad[4];
    T_006da5e0* t;
    void sub_006da5e0();
};

// @baa 0x006da5e0
void C_006da5e0::sub_006da5e0()
{
    return t->f();
}

struct Target_006da5f0 {
    virtual int v0();
    virtual int v1(int a);
};

struct S_006da5f0 {
    int f0;
    Target_006da5f0 *f1;
    int sub_006da5f0(int a);
};

// @baa 0x006da5f0
int S_006da5f0::sub_006da5f0(int a)
{
    return f1->v1(a);
}

struct S_006da600 {
    int f0;
    Target *f1;
    int sub_006da600(int a);
};

// @baa 0x006da600
int S_006da600::sub_006da600(int a)
{
    return f1->v2(a);
}

struct C_006da650 {
    DWORD pad0;
    T *p;
    void sub_006da650();
};

// @baa 0x006da650
void C_006da650::sub_006da650() {
    p->f0();
}

struct Target_006da660 {
    virtual int v0();
    virtual int v1(int a);
};

struct S_006da660 {
    int f0;
    Target_006da660 *f1;
    int sub_006da660(int a);
};

// @baa 0x006da660
int S_006da660::sub_006da660(int a) { return f1->v1(a); }

struct S_006da670 {
    int f0;
    Target *f1;
    int sub_006da670(int a);
};

// @baa 0x006da670
int S_006da670::sub_006da670(int a)
{
    return f1->v2(a);
}

struct C_006da680 { C_006da680* sub_006da680(void); };

// @baa 0x006da680
C_006da680* C_006da680::sub_006da680(void) { return this; }

// @baa 0x006da6e0
IMPLEMENT_CLASS_AT(UPointLightComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\PointLightComponent.cpp", 11);

// @baa 0x006da7f0
int UPointLightComponent::vf_000(void) { return 1; }

// @baa 0x006da800
bool UPointLightComponent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x006da8b0
int sub_006da8b0(void) { return 1; }

extern char g_01ed493c[];
// @baa 0x006da8f0
int sub_006da8f0(void) { return (int)g_01ed493c; }

// @baa 0x006da900
void UPointLightComponent::sub_006da900(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

// @baa 0x006da910
undefined4 * UPointLightComponent::sub_006da910(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x006daaf0
IMPLEMENT_CLASS_AT(APortalVolume, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\PortalVolume.cpp", 8);

// @baa 0x006dac00
int APortalVolume::vf_000(void) { return 1; }

// @baa 0x006dac10
bool APortalVolume::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x006dac50
IMPLEMENT_CLASS_AT(UPrimitiveComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\PrimitiveComponent.cpp", 14);

// @baa 0x006dad60
int UPrimitiveComponent::vf_000(void) { return 1; }

// @baa 0x006dad70
bool UPrimitiveComponent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x006dadb0
int UMeshComponent::vf_000(void) { return 1; }

extern char g_01ed5d1c[];
// @baa 0x006db000
int sub_006db000(void) { return (int)g_01ed5d1c; }

struct C_006db060 {
    undefined4 sub_006db060(byte);
};

int sub_006db010(void);
// @baa 0x006db060
undefined4 C_006db060::sub_006db060(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_006db010();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern char g_01ed6164[];
// @baa 0x006db0c0
int sub_006db0c0(void) { return (int)g_01ed6164; }

struct C_006db0d0 { void sub_006db0d0(void); };

// @baa 0x006db0d0
void C_006db0d0::sub_006db0d0(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_006db0e0 {
    undefined4 * sub_006db0e0(byte);
};

// @baa 0x006db0e0
undefined4 * C_006db0e0::sub_006db0e0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern int g_01ed945c;
// A small two-dword value struct used by DecalComponent.cpp.
struct FDecalValue
{
    FDecalValue* sub_006db100(int* Src);
    int Value;  // 0x0
    int Unk04;  // 0x4
};

// @baa 0x006db100
FDecalValue* FDecalValue::sub_006db100(int* Src)
{
    Value = (int)&g_01ed945c;
    Unk04 = *Src;
    return this;
}

extern char g_01ed64c8[];
// @baa 0x006db130
int sub_006db130(void) { return (int)g_01ed64c8; }

struct C_006db140 { void sub_006db140(void); };

// @baa 0x006db140
void C_006db140::sub_006db140(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_006db150 {
    undefined4 * sub_006db150(byte);
};

// @baa 0x006db150
undefined4 * C_006db150::sub_006db150(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x006db170
void sub_006db170(void) {  }

// @baa 0x006db230
int UPrimitiveComponent::vf_154(void) { return 0; }

// @baa 0x006db280
uint UPrimitiveComponent::sub_006db280(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x198) & 1;
}

// @baa 0x006db290
undefined4 UPrimitiveComponent::sub_006db290(void)
{
    int param_1 = (int)this;

  if (((*(byte *)(param_1 + 0x198) & 0x10) != 0) &&
     ((*(int *)(param_1 + 0x40) == 0 ||
      ((*(uint *)(*(int *)(param_1 + 0x40) + 0x34) & 0x80000000) != 0)))) {
    return 1;
  }
  return 0;
}

// @baa 0x006db2c0
int UPrimitiveComponent::vf_150(int a0) { return 0; }

// @baa 0x006db630
void UPrimitiveComponent::sub_006db630(void)
{
    int param_1 = (int)this;

  if ((*(byte *)(param_1 + 0x198) & 1) == 0) {
    *(uint *)(param_1 + 0x18c) = *(uint *)(param_1 + 0x18c) & 0xffffffe9;
  }
  return;
}

int sub_00765d00(void);
// @baa 0x006dbad0
void UPrimitiveComponent::vf_218(uint param_2)
{
    int param_1 = (int)this;

  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x194);
  if ((uVar1 >> 4 & 1) != param_2) {
    *(uint *)(param_1 + 0x194) = (param_2 << 4 ^ uVar1) & 0x10 ^ uVar1;
    sub_00765d00();
  }
  return;
}

// @baa 0x006dbcf0
void UPrimitiveComponent::vf_228(uint param_2)
{
    int param_1 = (int)this;

  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x194);
  if (param_2 != (uVar1 >> 5 & 1)) {
    *(uint *)(param_1 + 0x194) = (param_2 << 5 ^ uVar1) & 0x20 ^ uVar1;
    sub_00765d00();
  }
  return;
}

// @baa 0x006dbda0
void UPrimitiveComponent::vf_22c(uint param_2)
{
    int param_1 = (int)this;

  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x194);
  if (param_2 != (uVar1 >> 6 & 1)) {
    *(uint *)(param_1 + 0x194) = (param_2 << 6 ^ uVar1) & 0x40 ^ uVar1;
    sub_00765d00();
  }
  return;
}

// @baa 0x006dbe50
void UPrimitiveComponent::vf_230(uint param_2)
{
    int param_1 = (int)this;

  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x194);
  if ((uVar1 >> 7 & 1) != param_2) {
    *(uint *)(param_1 + 0x194) = (param_2 << 7 ^ uVar1) & 0x80 ^ uVar1;
    sub_00765d00();
  }
  return;
}

// @baa 0x006dbe90
void UPrimitiveComponent::sub_006dbe90(uint param_2)
{
    int param_1 = (int)this;

  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x194);
  if ((uVar1 >> 9 & 1) != param_2) {
    *(uint *)(param_1 + 0x194) = (param_2 << 9 ^ uVar1) & 0x200 ^ uVar1;
    sub_00765d00();
  }
  return;
}

// @baa 0x006dbf40
void UPrimitiveComponent::vf_234(undefined4 param_2)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0xf8) = param_2;
  sub_00765d00();
  return;
}

// @baa 0x006dbfd0
void UPrimitiveComponent::vf_238(undefined4 param_2)
{
    int param_1 = (int)this;

  if ((*(byte *)(param_1 + 0x44) & 1) != 0) {
    *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_1 + 0x11c);
  }
  *(undefined4 *)(param_1 + 0x11c) = param_2;
  sub_00765d00();
  return;
}

// @baa 0x006dc070
void UPrimitiveComponent::vf_23c(float param_2)
{
    int param_1 = (int)this;
  if (*(float *)(param_1 + 300) != param_2) {
    *(float *)(param_1 + 300) = param_2;
    sub_00765d00();
  }
  return;
}

// @baa 0x006dc100
void UPrimitiveComponent::vf_240(undefined4 param_2)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x18c) = param_2;
  sub_00765d00();
  return;
}

// @baa 0x006dc190
void UPrimitiveComponent::vf_244(undefined1 param_2)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 0x19d) = param_2;
  sub_00765d00();
  return;
}

// @baa 0x006dc1b0
void sub_006dc1b0(void) {  }

// @baa 0x006dc7b0
UINT UMeshComponent::vf_250() { return 0; }

// @baa 0x006dc800
UINT UMeshComponent::vf_254() { return 0; }

// @baa 0x006dcb10
int sub_006dcb10(void) { return 1690; }

// @baa 0x006dd120
int sub_006dd120(void) { return 1690; }

// @baa 0x006dd450
int sub_006dd450(void) { return 1690; }

// @baa 0x006dd740
int sub_006dd740(void) { return 1690; }

// @baa 0x006dde80
int sub_006dde80(void) { return 1690; }

// @baa 0x006dee00
int sub_006dee00(void) { return 1690; }

struct C_006df3e0 { int sub_006df3e0(void); };

// @baa 0x006df3e0
int C_006df3e0::sub_006df3e0(void) { return *(int*)((char*)this + 0); }

struct C_006df3f0 { int a, b, c; C_006df3f0(); };

// @baa 0x006df3f0
C_006df3f0::C_006df3f0() : a(0), b(0), c(0) {}

struct C_006df400 { int a, b, c; C_006df400(); };

// @baa 0x006df400
C_006df400::C_006df400() : a(0), b(0), c(0) {}

struct C_006df410 { int a, b, c; C_006df410(); };

// @baa 0x006df410
C_006df410::C_006df410() : a(0), b(0), c(0) {}

struct C_006df420 { int sub_006df420(void); };

// @baa 0x006df420
int C_006df420::sub_006df420(void) { return *(int*)((char*)this + 4); }

struct C_006df430 { int sub_006df430(void); };

// @baa 0x006df430
int C_006df430::sub_006df430(void) { return *(int*)((char*)this + 4); }

struct C_006df440 { int sub_006df440(void); };

// @baa 0x006df440
int C_006df440::sub_006df440(void) { return *(int*)((char*)this + 4); }

struct C_006df450 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_006df450(INT Index);
};

// @baa 0x006df450
UBOOL C_006df450::sub_006df450(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

struct C_006df470 { int sub_006df470(void); };

// @baa 0x006df470
int C_006df470::sub_006df470(void) { return *(int*)((char*)this + 4); }

struct C_006df480 { int sub_006df480(void); };

// @baa 0x006df480
int C_006df480::sub_006df480(void) { return *(int*)((char*)this + 4); }

struct C_006df490 { int sub_006df490(void); };

// @baa 0x006df490
int C_006df490::sub_006df490(void) { return *(int*)((char*)this + 4); }

struct C_006df4a0 { int sub_006df4a0(void); };

// @baa 0x006df4a0
int C_006df4a0::sub_006df4a0(void) { return *(int*)((char*)this + 4); }

struct C_006df4b0 { int sub_006df4b0(void); };

// @baa 0x006df4b0
int C_006df4b0::sub_006df4b0(void) { return *(int*)((char*)this + 4); }

struct C_006df4c0 { int sub_006df4c0(void); };

// @baa 0x006df4c0
int C_006df4c0::sub_006df4c0(void) { return *(int*)((char*)this + 4); }

struct C_006df4d0 { int sub_006df4d0(void); };

// @baa 0x006df4d0
int C_006df4d0::sub_006df4d0(void) { return *(int*)((char*)this + 4); }

struct C_006df4e0 { int sub_006df4e0(void); };

// @baa 0x006df4e0
int C_006df4e0::sub_006df4e0(void) { return *(int*)((char*)this + 4); }

struct C_006df4f0 { int sub_006df4f0(void); };

// @baa 0x006df4f0
int C_006df4f0::sub_006df4f0(void) { return *(int*)((char*)this + 4); }

struct C_006df550 {
    void sub_006df550(int *);
};

// @baa 0x006df550
void C_006df550::sub_006df550(int * param_2)
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

struct C_006df570 { C_006df570* sub_006df570(void); };

// @baa 0x006df570
C_006df570* C_006df570::sub_006df570(void) { return this; }

struct C_006df580 { int sub_006df580(void); };

// @baa 0x006df580
int C_006df580::sub_006df580(void) { return *(int*)((char*)this + 4); }

struct C_006df590 { C_006df590* sub_006df590(void); };

// @baa 0x006df590
C_006df590* C_006df590::sub_006df590(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_006df5e0 { int sub_006df5e0(void); };

// @baa 0x006df5e0
int C_006df5e0::sub_006df5e0(void) { return *(int*)((char*)this + 0); }

// @baa 0x006df6d0
void sub_006df6d0(void) {  }

struct C_006df8c0 { int a, b, c; C_006df8c0(); };

// @baa 0x006df8c0
C_006df8c0::C_006df8c0() : a(0), b(0), c(0) {}

struct C_006df8d0 { int sub_006df8d0(void); };

// @baa 0x006df8d0
int C_006df8d0::sub_006df8d0(void) { return *(int*)((char*)this + 4); }

struct C_006df8e0 { int sub_006df8e0(void); };

// @baa 0x006df8e0
int C_006df8e0::sub_006df8e0(void) { return *(int*)((char*)this + 0); }

struct C_006df920 { int sub_006df920(void); };

// @baa 0x006df920
int C_006df920::sub_006df920(void) { return *(int*)((char*)this + 0); }

struct C_006df930 { int sub_006df930(void); };

// @baa 0x006df930
int C_006df930::sub_006df930(void) { return *(int*)((char*)this + 4); }

struct C_006dfa40 { int sub_006dfa40(void); };

// @baa 0x006dfa40
int C_006dfa40::sub_006dfa40(void) { return *(int*)((char*)this + 0); }

struct C_006dfa50 { int sub_006dfa50(void); };

// @baa 0x006dfa50
int C_006dfa50::sub_006dfa50(void) { return *(int*)((char*)this + 0); }

struct C_006dfad0 {
    int sub_006dfad0(int);
};

// @baa 0x006dfad0
int C_006dfad0::sub_006dfad0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_006dfae0 { C_006dfae0* sub_006dfae0(int a0); };

// @baa 0x006dfae0
C_006dfae0* C_006dfae0::sub_006dfae0(int a0) { return this; }

struct C_006dfaf0 { C_006dfaf0* sub_006dfaf0(int a0); };

// @baa 0x006dfaf0
C_006dfaf0* C_006dfaf0::sub_006dfaf0(int a0) { return this; }

struct C_006dfb70 { C_006dfb70* sub_006dfb70(int a0); };

// @baa 0x006dfb70
C_006dfb70* C_006dfb70::sub_006dfb70(int a0) { return this; }

struct C_006dfb80 { C_006dfb80* sub_006dfb80(int a0); };

// @baa 0x006dfb80
C_006dfb80* C_006dfb80::sub_006dfb80(int a0) { return this; }

struct C_006dfb90 { int sub_006dfb90(void); };

// @baa 0x006dfb90
int C_006dfb90::sub_006dfb90(void) { return *(int*)((char*)this + 0); }

struct C_006dfc10 { C_006dfc10* sub_006dfc10(int a0); };

// @baa 0x006dfc10
C_006dfc10* C_006dfc10::sub_006dfc10(int a0) { return this; }

struct C_006dfc20 { C_006dfc20* sub_006dfc20(int a0); };

// @baa 0x006dfc20
C_006dfc20* C_006dfc20::sub_006dfc20(int a0) { return this; }

struct C_006dfc30 { int sub_006dfc30(void); };

// @baa 0x006dfc30
int C_006dfc30::sub_006dfc30(void) { return *(int*)((char*)this + 0); }

struct C_006dfc40 {
    int sub_006dfc40(int);
};

// @baa 0x006dfc40
int C_006dfc40::sub_006dfc40(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x2c + *param_1;
}

struct C_006dfc50 { int sub_006dfc50(void); };

// @baa 0x006dfc50
int C_006dfc50::sub_006dfc50(void) { return *(int*)((char*)this + 0); }

struct C_006dfc60 { C_006dfc60* sub_006dfc60(int a0); };

// @baa 0x006dfc60
C_006dfc60* C_006dfc60::sub_006dfc60(int a0) { return this; }

struct C_006dfc70 { int sub_006dfc70(void); };

// @baa 0x006dfc70
int C_006dfc70::sub_006dfc70(void) { return *(int*)((char*)this + 0); }

struct C_006dfc80 { C_006dfc80* sub_006dfc80(int a0); };

// @baa 0x006dfc80
C_006dfc80* C_006dfc80::sub_006dfc80(int a0) { return this; }

struct C_006dfc90 { int sub_006dfc90(void); };

// @baa 0x006dfc90
int C_006dfc90::sub_006dfc90(void) { return *(int*)((char*)this + 0); }

struct C_006dfca0 { C_006dfca0* sub_006dfca0(int a0); };

// @baa 0x006dfca0
C_006dfca0* C_006dfca0::sub_006dfca0(int a0) { return this; }

struct C_006dfcb0 { int sub_006dfcb0(void); };

// @baa 0x006dfcb0
int C_006dfcb0::sub_006dfcb0(void) { return *(int*)((char*)this + 0); }

struct C_006dfcc0 { C_006dfcc0* sub_006dfcc0(int a0); };

// @baa 0x006dfcc0
C_006dfcc0* C_006dfcc0::sub_006dfcc0(int a0) { return this; }

struct C_006dfcd0 { int sub_006dfcd0(void); };

// @baa 0x006dfcd0
int C_006dfcd0::sub_006dfcd0(void) { return *(int*)((char*)this + 0); }

struct C_006dfce0 { C_006dfce0* sub_006dfce0(int a0); };

// @baa 0x006dfce0
C_006dfce0* C_006dfce0::sub_006dfce0(int a0) { return this; }

struct C_006dfcf0 { int sub_006dfcf0(void); };

// @baa 0x006dfcf0
int C_006dfcf0::sub_006dfcf0(void) { return *(int*)((char*)this + 0); }

struct C_006dfd00 { C_006dfd00* sub_006dfd00(int a0); };

// @baa 0x006dfd00
C_006dfd00* C_006dfd00::sub_006dfd00(int a0) { return this; }

struct C_006dfd10 { int sub_006dfd10(void); };

// @baa 0x006dfd10
int C_006dfd10::sub_006dfd10(void) { return *(int*)((char*)this + 0); }

struct C_006dfd20 { C_006dfd20* sub_006dfd20(int a0); };

// @baa 0x006dfd20
C_006dfd20* C_006dfd20::sub_006dfd20(int a0) { return this; }

struct C_006dfd30 { int sub_006dfd30(void); };

// @baa 0x006dfd30
int C_006dfd30::sub_006dfd30(void) { return *(int*)((char*)this + 0); }

struct C_006dfd40 { C_006dfd40* sub_006dfd40(int a0); };

// @baa 0x006dfd40
C_006dfd40* C_006dfd40::sub_006dfd40(int a0) { return this; }

struct C_006dfd50 { int sub_006dfd50(void); };

// @baa 0x006dfd50
int C_006dfd50::sub_006dfd50(void) { return *(int*)((char*)this + 0); }

struct C_006dfd90 { int sub_006dfd90(void); };

// @baa 0x006dfd90
int C_006dfd90::sub_006dfd90(void) { return *(int*)((char*)this + 0); }

struct C_006dfda0 { int a, b; C_006dfda0(int, int); };

// @baa 0x006dfda0
C_006dfda0::C_006dfda0(int x, int y) : a(x), b(y) {}

struct C_006dfdc0 {
    int sub_006dfdc0();
};

// @baa 0x006dfdc0
int C_006dfdc0::sub_006dfdc0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_006dfdd0 { int a, b; C_006dfdd0(int, int); };

// @baa 0x006dfdd0
C_006dfdd0::C_006dfdd0(int x, int y) : a(x), b(y) {}

struct C_006dfdf0 {
    int sub_006dfdf0();
};

// @baa 0x006dfdf0
int C_006dfdf0::sub_006dfdf0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_006dfe20 {
    int sub_006dfe20();
};

// @baa 0x006dfe20
int C_006dfe20::sub_006dfe20(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_006dfe30 { int a, b; C_006dfe30(int, int); };

// @baa 0x006dfe30
C_006dfe30::C_006dfe30(int x, int y) : a(x), b(y) {}

struct C_006dfe50 {
    int sub_006dfe50();
};

// @baa 0x006dfe50
int C_006dfe50::sub_006dfe50(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_006dfe60 { int a, b; C_006dfe60(int, int); };

// @baa 0x006dfe60
C_006dfe60::C_006dfe60(int x, int y) : a(x), b(y) {}

struct C_006dfe80 {
    int sub_006dfe80();
};

// @baa 0x006dfe80
int C_006dfe80::sub_006dfe80(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_006dfe90 { int a, b; C_006dfe90(int, int); };

// @baa 0x006dfe90
C_006dfe90::C_006dfe90(int x, int y) : a(x), b(y) {}

struct C_006dfeb0 {
    int sub_006dfeb0();
};

// @baa 0x006dfeb0
int C_006dfeb0::sub_006dfeb0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_006dfec0 { int a, b; C_006dfec0(int, int); };

// @baa 0x006dfec0
C_006dfec0::C_006dfec0(int x, int y) : a(x), b(y) {}

struct C_006dfee0 {
    DWORD d;
    DWORD sub_006dfee0();
};

// @baa 0x006dfee0
DWORD C_006dfee0::sub_006dfee0()
{
    *(WORD*)(this + 1) = 0;
    return (DWORD)this;
}

struct C_006dfef0 {
    DWORD d;
    DWORD sub_006dfef0();
};

// @baa 0x006dfef0
DWORD C_006dfef0::sub_006dfef0()
{
    *(WORD*)(this + 1) = 0;
    return (DWORD)this;
}

// @baa 0x006dff10
int sub_006dff10(int a0) { return *(int*)a0; }

struct S_006dffb0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_006dffb0(INT Index);
};

// @baa 0x006dffb0
DWORD* S_006dffb0::sub_006dffb0(INT Index)
{
    return &Items(Index);
}

struct UMaterialInstanceConstant_ : public UMaterialInstanceConstant
{
	/* UMaterialInstance's parameter bookkeeping that takes the name of the caller it was reached
	 * through (0x006c47c0), and its SetParent (0x006aef90). */
	void sub_006c47c0(const TCHAR* Caller);
	void sub_006aef90(class UMaterialInterface* NewParent);
	void SetParent(class UMaterialInterface* NewParent);
};

// @baa 0x006d8b90
void UMaterialInstanceConstant_::SetParent( class UMaterialInterface* NewParent )
{
	sub_006c47c0(TEXT("MIC::SetParent"));
	sub_006aef90(NewParent);
	vf_180();
}

struct UMaterialInstanceTimeVarying_ : public UMaterialInstanceTimeVarying
{
	/* UMaterialInstance's parameter bookkeeping that takes the name of the caller it was reached
	 * through (0x006c47c0), and its SetParent (0x006aef90). */
	void sub_006c47c0(const TCHAR* Caller);
	void sub_006aef90(class UMaterialInterface* NewParent);
	void SetParent(class UMaterialInterface* NewParent);
};

// @baa 0x006d8ef0
void UMaterialInstanceTimeVarying_::SetParent( class UMaterialInterface* NewParent )
{
	sub_006c47c0(TEXT("MITV::SetParent"));
	sub_006aef90(NewParent);
	vf_180();
}

// @baa 0x006db600
void UPrimitiveComponent::Serialize( FArchive& Ar )
{
	Super::Serialize( Ar );
	if( !Ar.IsSaving() && !Ar.IsLoading() )
	{
		Ar << BodyInstance;
	}
}

struct UPrimitiveComponent_ : public UPrimitiveComponent {
    virtual void sub_006db520(const FMatrix* ParentToWorld);
};

// @baa 0x006db520
void UPrimitiveComponent_::sub_006db520(const FMatrix* ParentToWorld)
{
    CachedParentToWorld = *ParentToWorld;
}

struct UPointLightComponent_ : public UPointLightComponent
{
    void sub_006da930(const FMatrix* In);
};

// @baa 0x006da930
void UPointLightComponent_::sub_006da930(const FMatrix* In)
{
    CachedParentToWorld = *In;
}
