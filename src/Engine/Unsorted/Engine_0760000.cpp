// Engine_0760000.cpp (part 1 of 5): 277 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct S {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00760010(INT Index);
};

// @baa 0x00760010
DWORD* S::sub_00760010(INT Index)
{
    return &Items(Index);
}

struct E { BYTE Bytes[12]; };

struct S_00760060 {
    TArray<E> Items; // 0x00
    E* sub_00760060(INT Index);
};

// @baa 0x00760060
E* S_00760060::sub_00760060(INT Index)
{
    return &Items(Index);
}

struct S_007600b0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_007600b0(INT Index);
};

// @baa 0x007600b0
DWORD* S_007600b0::sub_007600b0(INT Index)
{
    return &Items(Index);
}

struct S_00760100 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00760100(INT Index);
};

// @baa 0x00760100
DWORD* S_00760100::sub_00760100(INT Index)
{
    return &Items(Index);
}

struct E_00760150 { BYTE Bytes[32]; };

struct S_00760150 {
    TArray<E_00760150> Items; // 0x00
    E_00760150* sub_00760150(INT Index);
};

// @baa 0x00760150
E_00760150* S_00760150::sub_00760150(INT Index)
{
    return &Items(Index);
}

struct S_007601a0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_007601a0(INT Index);
};

// @baa 0x007601a0
DWORD* S_007601a0::sub_007601a0(INT Index)
{
    return &Items(Index);
}

int sub_005413d0(...);
// @baa 0x00760270
void sub_00760270(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C {
    int sub_00760280();
};

// @baa 0x00760280
int C::sub_00760280(void)
{
    int param_1 = (int)this;
  return *(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c);
}

struct C_00760290 { int sub_00760290(void); };

// @baa 0x00760290
int C_00760290::sub_00760290(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_007602a0 {
    uint sub_007602a0();
};

// @baa 0x007602a0
uint C_007602a0::sub_007602a0(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 0x80) | -(uint)(*(uint *)(param_1 + 0x80) == 0) & param_1;
}

// @baa 0x007602f0
void sub_007602f0(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_00760300 {
    int sub_00760300();
};

// @baa 0x00760300
int C_00760300::sub_00760300(void)
{
    int param_1 = (int)this;
  return *(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c);
}

struct C_00760310 {
    int sub_00760310(int);
};

// @baa 0x00760310
int C_00760310::sub_00760310(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_00760320 {
    int sub_00760320(int);
};

// @baa 0x00760320
int C_00760320::sub_00760320(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

// @baa 0x00760360
void sub_00760360(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_00760370 {
    int sub_00760370(int);
};

// @baa 0x00760370
int C_00760370::sub_00760370(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x10 + *param_1;
}

struct C_00760380 {
    int sub_00760380(int);
};

// @baa 0x00760380
int C_00760380::sub_00760380(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00760390 {
    int sub_00760390(int);
};

// @baa 0x00760390
int C_00760390::sub_00760390(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_007603a0 {
    int sub_007603a0(int);
};

// @baa 0x007603a0
int C_007603a0::sub_007603a0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_007603b0 {
    int sub_007603b0();
};

// @baa 0x007603b0
int C_007603b0::sub_007603b0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_007603d0 {
    int sub_007603d0();
};

// @baa 0x007603d0
int C_007603d0::sub_007603d0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_007603f0 {
    int sub_007603f0();
};

// @baa 0x007603f0
int C_007603f0::sub_007603f0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00760410 {
    int sub_00760410();
};

// @baa 0x00760410
int C_00760410::sub_00760410(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00760430 {
    int sub_00760430();
};

// @baa 0x00760430
int C_00760430::sub_00760430(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00760450 {
    int sub_00760450();
};

// @baa 0x00760450
int C_00760450::sub_00760450(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00760470 {
    int sub_00760470(int);
};

// @baa 0x00760470
int C_00760470::sub_00760470(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00760480 {
    int sub_00760480(int);
};

// @baa 0x00760480
int C_00760480::sub_00760480(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00760490 {
    int sub_00760490(int);
};

// @baa 0x00760490
int C_00760490::sub_00760490(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_007604a0 {
    int sub_007604a0();
};

// @baa 0x007604a0
int C_007604a0::sub_007604a0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_007604c0 {
    int sub_007604c0();
};

// @baa 0x007604c0
int C_007604c0::sub_007604c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_007604d0 {
    int sub_007604d0();
};

// @baa 0x007604d0
int C_007604d0::sub_007604d0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_007604f0 {
    int sub_007604f0();
};

// @baa 0x007604f0
int C_007604f0::sub_007604f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00760500 {
    int sub_00760500();
};

// @baa 0x00760500
int C_00760500::sub_00760500(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00760520 {
    int sub_00760520(int);
};

// @baa 0x00760520
int C_00760520::sub_00760520(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

// @baa 0x00760870
void sub_00760870(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

// @baa 0x00760890
void sub_00760890(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

struct C_00760900 { C_00760900* sub_00760900(void); };

// @baa 0x00760900
C_00760900* C_00760900::sub_00760900(void) { *(int*)((char*)this + 128) = 0; return this; }

// @baa 0x00760990
int sub_00760990(void) { return 0; }

// @baa 0x007609a0
int sub_007609a0(void) { return 0; }

struct A_007609b0 { virtual void sub_007609c0(); char pad[64]; };

struct B_007609b0 { virtual void sub_007609c0(); };

struct C_007609b0 : A_007609b0, B_007609b0 { virtual void sub_007609c0(); C_007609b0(); };

C_007609b0::C_007609b0() {}

// @baa 0x007609b0
void C_007609b0::sub_007609c0() {}

int sub_0053dfa0(...);
int sub_0075b170(void);
// @baa 0x007609c0
undefined4 UTextureCube::sub_007609c0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0075b170();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00760a70 { C_00760a70* sub_00760a70(void); };

// @baa 0x00760a70
C_00760a70* C_00760a70::sub_00760a70(void) { return this; }

struct A_00760a80 { virtual void sub_00760b30(); char pad[64]; };

struct B_00760a80 { virtual void sub_00760b30(); };

struct C_00760a80 : A_00760a80, B_00760a80 { virtual void sub_00760b30(); C_00760a80(); };

C_00760a80::C_00760a80() {}

// @baa 0x00760a80
void C_00760a80::sub_00760b30() {}

struct A_00760a90 { virtual void sub_007561d0(); char pad[64]; };

struct B_00760a90 { virtual void sub_007561d0(); };

struct C_00760a90 : A_00760a90, B_00760a90 { virtual void sub_007561d0(); C_00760a90(); };

C_00760a90::C_00760a90() {}

// @baa 0x00760a90
void C_00760a90::sub_007561d0() {}

struct A_00760aa0 { virtual void sub_007561c0(); char pad[64]; };

struct B_00760aa0 { virtual void sub_007561c0(); };

struct C_00760aa0 : A_00760aa0, B_00760aa0 { virtual void sub_007561c0(); C_00760aa0(); };

C_00760aa0::C_00760aa0() {}

// @baa 0x00760aa0
void C_00760aa0::sub_007561c0() {}

int sub_00760ab0(void);
// @baa 0x00760b30
undefined4 UTextureCube::sub_00760b30(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00760ab0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_0075b2b0(void);
// @baa 0x00760b50
undefined4 UTextureCube::sub_00760b50(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0075b2b0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00760b70 { C_00760b70* sub_00760b70(void); };

// @baa 0x00760b70
C_00760b70* C_00760b70::sub_00760b70(void) { return this; }

struct M_00760b80 { void sub_0040fcc0(); };

struct C_00760b80 { char pad[4]; M_00760b80 m; void sub_00760b80(); };

// @baa 0x00760b80
void C_00760b80::sub_00760b80() { m.sub_0040fcc0(); }

int sub_005c7a20(void);
extern undefined * g_01efe990;
// @baa 0x00760b90
undefined4 * UObject::sub_00760b90(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01efe990);
  return param_1;
}

// @baa 0x00760bb0
IMPLEMENT_CLASS_AT(UClipPadEntry, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 106);

// @baa 0x00760c30
// @baa 0x00760c50
IMPLEMENT_CLASS_AT(UDamageType, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 88);

extern undefined * g_01efeaa0;
// @baa 0x00760ce0
undefined4 * UObject::sub_00760ce0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01efeaa0);
  return param_1;
}

// @baa 0x00760d00
extern undefined * g_01efebb0;
// @baa 0x00760d30
undefined4 * UObject::sub_00760d30(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01efebb0);
  return param_1;
}

// @baa 0x00760d50
IMPLEMENT_CLASS_AT(UKillZDamageType, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 89);

// @baa 0x00760db0
extern undefined * g_01efecc0;
// @baa 0x00760de0
undefined4 * UObject::sub_00760de0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01efecc0);
  return param_1;
}

// @baa 0x00760e00
IMPLEMENT_CLASS_AT(UEdCoordSystem, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 102);

// @baa 0x00760e70
int sub_00759260(void);
int sub_0075e780(...);
extern undefined4 g_026b3cd4;
// @baa 0x00760ea0
int sub_00760ea0(void)
{
  if (g_026b3cd4 == 0) {
    g_026b3cd4 = sub_0075e780(L"Engine");
    sub_00759260();
  }
  return g_026b3cd4;
}

// @baa 0x00760fb0
DOUBLE UTextureCube::vf_10c() {
    int param_1 = (int)this;

  return (float10)*(int *)(param_1 + 0xb0);
}

// @baa 0x00761040
IMPLEMENT_CLASS_AT(UTextureCube, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\TextureCube.cpp", 12);

// @baa 0x007611a0
IMPLEMENT_CLASS_AT(UTextureRenderTarget, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\TextureRenderTarget.cpp", 12);

// @baa 0x00761260
struct S_00761820 {
    void sub_0075b630();
    void sub_00720ef0();
    void sub_00761820();
};

// @baa 0x00761820
void S_00761820::sub_00761820() {
    sub_0075b630();
    sub_00720ef0();
}

// @baa 0x00764b50
IMPLEMENT_CLASS_AT(UAudioComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActorComponent.cpp", 47);

// @baa 0x00764c60
bool UAudioComponent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00764ca0
IMPLEMENT_CLASS_AT(UWindDirectionalSourceComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActorComponent.cpp", 49);

// @baa 0x00764df0
IMPLEMENT_CLASS_AT(UMeshComponentFactory, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActorComponent.cpp", 52);

// @baa 0x00764f00
bool UMeshComponentFactory::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00766540
void __stdcall sub_00766540(int a0, int a1) {  }

// @baa 0x00766550
void __stdcall sub_00766550(int a0, int a1) {  }

// @baa 0x00766560
void __stdcall sub_00766560(int a0, int a1) {  }

// @baa 0x00766570
void __stdcall sub_00766570(int a0, int a1) {  }

// @baa 0x00766580
void __stdcall sub_00766580(int a0, int a1) {  }

// @baa 0x00766590
void __stdcall sub_00766590(int a0, int a1) {  }

// @baa 0x007665a0
void __stdcall sub_007665a0(int a0, int a1) {  }

// @baa 0x007665b0
void __stdcall sub_007665b0(int a0, int a1) {  }

// @baa 0x007665c0
void __stdcall sub_007665c0(int a0, int a1) {  }

// @baa 0x007665d0
void __stdcall sub_007665d0(int a0, int a1) {  }

// @baa 0x007665e0
void __stdcall sub_007665e0(int a0, int a1) {  }

// @baa 0x007665f0
void __stdcall sub_007665f0(int a0, int a1) {  }

// @baa 0x00766600
void __stdcall sub_00766600(int a0, int a1) {  }

// @baa 0x00766610
void __stdcall sub_00766610(int a0, int a1) {  }

// @baa 0x00766620
void __stdcall sub_00766620(int a0, int a1) {  }

// @baa 0x00766630
void __stdcall sub_00766630(int a0, int a1) {  }

// @baa 0x00766640
void __stdcall sub_00766640(int a0, int a1) {  }

// @baa 0x00766650
void __stdcall sub_00766650(int a0, int a1) {  }

// @baa 0x00766660
void __stdcall sub_00766660(int a0, int a1) {  }

// @baa 0x00766670
void __stdcall sub_00766670(int a0, int a1) {  }

// @baa 0x00766680
void __stdcall sub_00766680(int a0, int a1) {  }

// @baa 0x00766690
void __stdcall sub_00766690(int a0, int a1) {  }

struct C_007666a0 {
    uint sub_007666a0();
};

// @baa 0x007666a0
uint C_007666a0::sub_007666a0(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 0x80) | -(uint)(*(uint *)(param_1 + 0x80) == 0) & param_1;
}

struct M_007666c0 { void sub_00547290(); };

struct C_007666c0 { char pad[4]; M_007666c0 m; void sub_007666c0(); };

// @baa 0x007666c0
void C_007666c0::sub_007666c0() { m.sub_00547290(); }

struct M_007666d0 { void sub_0040fcc0(); };

struct C_007666d0 { char pad[28]; M_007666d0 m; void sub_007666d0(); };

// @baa 0x007666d0
void C_007666d0::sub_007666d0() { m.sub_0040fcc0(); }

void sub_0040fcc0();
// @baa 0x007666e0
void sub_007666e0(void) { sub_0040fcc0(); }

struct M_007666f0 { void sub_0040fcc0(); };

struct C_007666f0 { char pad[4]; M_007666f0 m; void sub_007666f0(); };

// @baa 0x007666f0
void C_007666f0::sub_007666f0() { m.sub_0040fcc0(); }

struct C_007667e0 {
    int sub_007667e0(int);
};

// @baa 0x007667e0
int C_007667e0::sub_007667e0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_007668e0 {
    int sub_007668e0(int);
};

// @baa 0x007668e0
int C_007668e0::sub_007668e0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_007668f0 {
    uint sub_007668f0();
};

// @baa 0x007668f0
uint C_007668f0::sub_007668f0(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 0x80) | -(uint)(*(uint *)(param_1 + 0x80) == 0) & param_1;
}

struct C_00766980 {
    int sub_00766980(int);
};

// @baa 0x00766980
int C_00766980::sub_00766980(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00766990 {
    int sub_00766990(int);
};

// @baa 0x00766990
int C_00766990::sub_00766990(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct M_007669a0 { void sub_00547290(); };

struct C_007669a0 { char pad[4]; M_007669a0 m; void sub_007669a0(); };

// @baa 0x007669a0
void C_007669a0::sub_007669a0() { m.sub_00547290(); }

struct M_007669b0 { void sub_0040fcc0(); };

struct C_007669b0 { char pad[8]; M_007669b0 m; void sub_007669b0(); };

// @baa 0x007669b0
void C_007669b0::sub_007669b0() { m.sub_0040fcc0(); }

struct C_007669c0 {
    int sub_007669c0();
};

// @baa 0x007669c0
int C_007669c0::sub_007669c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_007669d0 {
    int sub_007669d0();
};

// @baa 0x007669d0
int C_007669d0::sub_007669d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_007669e0 {
    int sub_007669e0();
};

// @baa 0x007669e0
int C_007669e0::sub_007669e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_007669f0 {
    int sub_007669f0();
};

// @baa 0x007669f0
int C_007669f0::sub_007669f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00766a00 {
    int sub_00766a00();
};

// @baa 0x00766a00
int C_00766a00::sub_00766a00(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00766a10 {
    int sub_00766a10(int);
};

// @baa 0x00766a10
int C_00766a10::sub_00766a10(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

struct C_00766a20 {
    int sub_00766a20();
};

// @baa 0x00766a20
int C_00766a20::sub_00766a20(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00766f50 {
    undefined4 sub_00766f50(byte);
    int sub_00547290();
};

// @baa 0x00766f50
undefined4 C_00766f50::sub_00766f50(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_00766f50 *)(((char *)this + 4)))->sub_00547290();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00766f80 {
    void sub_00766f80(int);
};

int sub_0053df70(...);
// @baa 0x00766f80
void C_00766f80::sub_00766f80(int param_2)
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

struct C_00766fc0 {
    undefined4 * sub_00766fc0(undefined4 *);
    int sub_005cb9e0(int);
};

// @baa 0x00766fc0
undefined4 * C_00766fc0::sub_00766fc0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_00766fc0 *)(((char *)this + 4)))->sub_005cb9e0((int)(param_2 + 1));
  return param_1;
}

void sub_00765f60();
// @baa 0x00766ff0
void sub_00766ff0(void) { sub_00765f60(); }

void sub_00765fe0();
// @baa 0x00767020
void sub_00767020(void) { sub_00765fe0(); }

void sub_00766040();
// @baa 0x00767040
void sub_00767040(void) { sub_00766040(); }

int sub_00766bb0(...);
extern undefined4 g_026b62b8;
// @baa 0x00769da0
undefined4 AActor::sub_00769da0(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  if (g_026b62b8 != 0) {
    iVar1 = sub_00766bb0(*(undefined4 *)(param_1 + 0x1c));
    if (iVar1 == *(int *)(g_026b62b8 + 0x44)) {
      return 1;
    }
  }
  return 0;
}

// @baa 0x00769e70
int ABrush::vf_2cc(void) { return 0; }

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_0076a450 { void* Data; int Num; int Max; void sub_0076a450(); };

// @baa 0x0076a450
void C_0076a450::sub_0076a450() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0076a4b0 { void* Data; int Num; int Max; void sub_0076a4b0(); };

// @baa 0x0076a4b0
void C_0076a4b0::sub_0076a4b0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0076a510 { int a, b, c; C_0076a510(); };

// @baa 0x0076a510
C_0076a510::C_0076a510() : a(0), b(0), c(0) {}

struct C_0076a520 { C_0076a520* sub_0076a520(void); };

// @baa 0x0076a520
C_0076a520* C_0076a520::sub_0076a520(void) { return this; }

struct C_0076a530 { void* Data; int Num; int Max; void sub_0076a530(); };

// @baa 0x0076a530
void C_0076a530::sub_0076a530() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0076a590 { void* Data; int Num; int Max; void sub_0076a590(); };

// @baa 0x0076a590
void C_0076a590::sub_0076a590() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0076a5f0 { void* Data; int Num; int Max; void sub_0076a5f0(); };

// @baa 0x0076a5f0
void C_0076a5f0::sub_0076a5f0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0076a650 { void* Data; int Num; int Max; void sub_0076a650(); };

// @baa 0x0076a650
void C_0076a650::sub_0076a650() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0076a6b0 { void* Data; int Num; int Max; void sub_0076a6b0(); };

// @baa 0x0076a6b0
void C_0076a6b0::sub_0076a6b0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0076a710 { void* Data; int Num; int Max; void sub_0076a710(); };

// @baa 0x0076a710
void C_0076a710::sub_0076a710() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0076a770 { void* Data; int Num; int Max; void sub_0076a770(); };

// @baa 0x0076a770
void C_0076a770::sub_0076a770() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0076a7d0 { void* Data; int Num; int Max; void sub_0076a7d0(); };

// @baa 0x0076a7d0
void C_0076a7d0::sub_0076a7d0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0076a830 { void* Data; int Num; int Max; void sub_0076a830(); };

// @baa 0x0076a830
void C_0076a830::sub_0076a830() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0076a890 { void* Data; int Num; int Max; void sub_0076a890(); };

// @baa 0x0076a890
void C_0076a890::sub_0076a890() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0076a8f0 { void* Data; int Num; int Max; void sub_0076a8f0(); };

// @baa 0x0076a8f0
void C_0076a8f0::sub_0076a8f0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0076a950 { void* Data; int Num; int Max; void sub_0076a950(); };

// @baa 0x0076a950
void C_0076a950::sub_0076a950() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0076a9b0 { void* Data; int Num; int Max; void sub_0076a9b0(); };

// @baa 0x0076a9b0
void C_0076a9b0::sub_0076a9b0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0076aa10 { void* Data; int Num; int Max; void sub_0076aa10(); };

// @baa 0x0076aa10
void C_0076aa10::sub_0076aa10() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0076aa70 { void* Data; int Num; int Max; void sub_0076aa70(); };

// @baa 0x0076aa70
void C_0076aa70::sub_0076aa70() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0076aad0 { void* Data; int Num; int Max; void sub_0076aad0(); };

// @baa 0x0076aad0
void C_0076aad0::sub_0076aad0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0076ab30 { void* Data; int Num; int Max; void sub_0076ab30(); };

// @baa 0x0076ab30
void C_0076ab30::sub_0076ab30() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0076ab90 { void* Data; int Num; int Max; void sub_0076ab90(); };

// @baa 0x0076ab90
void C_0076ab90::sub_0076ab90() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0076abf0 { void* Data; int Num; int Max; void sub_0076abf0(); };

// @baa 0x0076abf0
void C_0076abf0::sub_0076abf0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0076ac50 { void* Data; int Num; int Max; void sub_0076ac50(); };

// @baa 0x0076ac50
void C_0076ac50::sub_0076ac50() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0076acb0 { void* Data; int Num; int Max; void sub_0076acb0(); };

// @baa 0x0076acb0
void C_0076acb0::sub_0076acb0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0076ad10 {
    undefined4 sub_0076ad10();
};

// @baa 0x0076ad10
undefined4 C_0076ad10::sub_0076ad10(void)
{
    undefined4 param_1 = (undefined4)this;
  return param_1;
}

struct C_0076ad20 { void* Data; int Num; int Max; void sub_0076ad20(); };

// @baa 0x0076ad20
void C_0076ad20::sub_0076ad20() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0076ad80 {
    undefined4 sub_0076ad80();
};

// @baa 0x0076ad80
undefined4 C_0076ad80::sub_0076ad80(void)
{
    undefined4 param_1 = (undefined4)this;
  return param_1;
}

extern TArray<int> g_026a1ca4;
struct C_0076ad90 {
    int sub_0076ad90();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x0076ad90
int C_0076ad90::sub_0076ad90()
{
    return g_026a1ca4(Index);
}

struct C_0076adf0 {
    int sub_0076adf0();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x0076adf0
int C_0076adf0::sub_0076adf0()
{
    return g_026a1ca4(Index);
}

struct C_0076afa0 {
    int sub_0076afa0(int);
};

// @baa 0x0076afa0
int C_0076afa0::sub_0076afa0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_0076afb0 {
    int sub_0076afb0(int);
    int sub_00766700(int, int);
};

// @baa 0x0076afb0
int C_0076afb0::sub_0076afb0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_0076afb0 *)(this))->sub_00766700((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x18;
  }
  return 0;
}

struct C_0076afe0 {
    int sub_0076afe0(int);
    int sub_007667f0(int, int);
};

// @baa 0x0076afe0
int C_0076afe0::sub_0076afe0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_0076afe0 *)(this))->sub_007667f0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

struct C_0076b010 {
    int sub_0076b010(int);
};

// @baa 0x0076b010
int C_0076b010::sub_0076b010(int param_2)
{
    uint param_1 = (uint)this;

  return (-(uint)(*(uint *)(param_1 + 0x80) == 0) & param_1 | *(uint *)(param_1 + 0x80)) +
         param_2 * 4;
}

// @baa 0x0076b030
void __stdcall sub_0076b030(int a0, int a1) {  }

struct C_0076b040 {
    int sub_0076b040(int);
};

// @baa 0x0076b040
int C_0076b040::sub_0076b040(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0076b050 {
    undefined4 sub_0076b050(byte);
    int sub_0040fcc0();
};

// @baa 0x0076b050
undefined4 C_0076b050::sub_0076b050(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_0076b050 *)(((char *)this + 0x1c)))->sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0076b0a0 {
    undefined4 sub_0076b0a0(byte);
    int sub_0040fcc0();
};

// @baa 0x0076b0a0
undefined4 C_0076b0a0::sub_0076b0a0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_0076b0a0 *)(((char *)this + 4)))->sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0076b0d0 {
    int sub_0076b0d0(int);
};

// @baa 0x0076b0d0
int C_0076b0d0::sub_0076b0d0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_0076b0e0 {
    undefined4 * sub_0076b0e0(undefined4 *);
    int sub_005cb9e0(int);
};

// @baa 0x0076b0e0
undefined4 * C_0076b0e0::sub_0076b0e0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_0076b0e0 *)(((char *)this + 4)))->sub_005cb9e0(param_2[1]);
  return param_1;
}

struct C_0076b100 {
    undefined4 * sub_0076b100(undefined4 *);
    int sub_005cb9e0(int);
};

// @baa 0x0076b100
undefined4 * C_0076b100::sub_0076b100(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_0076b100 *)(((char *)this + 4)))->sub_005cb9e0(param_2[1]);
  param_1[4] = 0xffffffff;
  return param_1;
}

struct C_0076b1b0 {
    int sub_0076b1b0(int);
};

// @baa 0x0076b1b0
int C_0076b1b0::sub_0076b1b0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0076b1c0 {
    undefined4 sub_0076b1c0(byte);
    int sub_00547290();
};

// @baa 0x0076b1c0
undefined4 C_0076b1c0::sub_0076b1c0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_0076b1c0 *)(((char *)this + 4)))->sub_00547290();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct M_0076b1f0 { void sub_0040fcc0(); };

struct C_0076b1f0 { char pad[8]; M_0076b1f0 m; void sub_0076b1f0(); };

// @baa 0x0076b1f0
void C_0076b1f0::sub_0076b1f0() { m.sub_0040fcc0(); }

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

struct TConstSetBitIterator_0076b460 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0076b460(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0076b460& operator++();
};

TConstSetBitIterator_0076b460::TConstSetBitIterator_0076b460(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0076b460
TConstSetBitIterator_0076b460& TConstSetBitIterator_0076b460::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0076b480 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0076b480(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0076b480& operator++();
};

TConstSetBitIterator_0076b480::TConstSetBitIterator_0076b480(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0076b480
TConstSetBitIterator_0076b480& TConstSetBitIterator_0076b480::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0076b4a0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0076b4a0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0076b4a0& operator++();
};

TConstSetBitIterator_0076b4a0::TConstSetBitIterator_0076b4a0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0076b4a0
TConstSetBitIterator_0076b4a0& TConstSetBitIterator_0076b4a0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0076b4c0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0076b4c0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0076b4c0& operator++();
};

TConstSetBitIterator_0076b4c0::TConstSetBitIterator_0076b4c0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0076b4c0
TConstSetBitIterator_0076b4c0& TConstSetBitIterator_0076b4c0::operator++()
{
    It.Advance();
    return *this;
}

struct C_0076b4e0 {
    int sub_0076b4e0();
};

// @baa 0x0076b4e0
int C_0076b4e0::sub_0076b4e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x28;
}

struct TConstSetBitIterator_0076b4f0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0076b4f0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0076b4f0& operator++();
};

TConstSetBitIterator_0076b4f0::TConstSetBitIterator_0076b4f0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0076b4f0
TConstSetBitIterator_0076b4f0& TConstSetBitIterator_0076b4f0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0076b510 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0076b510(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0076b510& operator++();
};

TConstSetBitIterator_0076b510::TConstSetBitIterator_0076b510(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0076b510
TConstSetBitIterator_0076b510& TConstSetBitIterator_0076b510::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0076b530 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0076b530(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0076b530& operator++();
};

TConstSetBitIterator_0076b530::TConstSetBitIterator_0076b530(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0076b530
TConstSetBitIterator_0076b530& TConstSetBitIterator_0076b530::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0076b580 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0076b580(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0076b580& operator++();
};

TConstSetBitIterator_0076b580::TConstSetBitIterator_0076b580(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0076b580
TConstSetBitIterator_0076b580& TConstSetBitIterator_0076b580::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0076b5d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0076b5d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0076b5d0& operator++();
};

TConstSetBitIterator_0076b5d0::TConstSetBitIterator_0076b5d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0076b5d0
TConstSetBitIterator_0076b5d0& TConstSetBitIterator_0076b5d0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0076b620 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0076b620(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0076b620& operator++();
};

TConstSetBitIterator_0076b620::TConstSetBitIterator_0076b620(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0076b620
TConstSetBitIterator_0076b620& TConstSetBitIterator_0076b620::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0076b670 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0076b670(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0076b670& operator++();
};

TConstSetBitIterator_0076b670::TConstSetBitIterator_0076b670(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0076b670
TConstSetBitIterator_0076b670& TConstSetBitIterator_0076b670::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0076b6c0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0076b6c0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0076b6c0& operator++();
};

TConstSetBitIterator_0076b6c0::TConstSetBitIterator_0076b6c0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0076b6c0
TConstSetBitIterator_0076b6c0& TConstSetBitIterator_0076b6c0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0076b710 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0076b710(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0076b710& operator++();
};

TConstSetBitIterator_0076b710::TConstSetBitIterator_0076b710(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0076b710
TConstSetBitIterator_0076b710& TConstSetBitIterator_0076b710::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0076b730 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0076b730(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0076b730& operator++();
};

TConstSetBitIterator_0076b730::TConstSetBitIterator_0076b730(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0076b730
TConstSetBitIterator_0076b730& TConstSetBitIterator_0076b730::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0076b750 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0076b750(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0076b750& operator++();
};

TConstSetBitIterator_0076b750::TConstSetBitIterator_0076b750(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0076b750
TConstSetBitIterator_0076b750& TConstSetBitIterator_0076b750::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0076b770 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0076b770(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0076b770& operator++();
};

TConstSetBitIterator_0076b770::TConstSetBitIterator_0076b770(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0076b770
TConstSetBitIterator_0076b770& TConstSetBitIterator_0076b770::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0076b7c0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0076b7c0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0076b7c0& operator++();
};

TConstSetBitIterator_0076b7c0::TConstSetBitIterator_0076b7c0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0076b7c0
TConstSetBitIterator_0076b7c0& TConstSetBitIterator_0076b7c0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0076b810 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0076b810(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0076b810& operator++();
};

TConstSetBitIterator_0076b810::TConstSetBitIterator_0076b810(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0076b810
TConstSetBitIterator_0076b810& TConstSetBitIterator_0076b810::operator++()
{
    It.Advance();
    return *this;
}

struct C_0076b990 {
    void sub_0076b990(int);
    int sub_0075af80(int, int, int);
};

// @baa 0x0076b990
void C_0076b990::sub_0076b990(int param_2)
{
    int param_1 = (int)this;
  *(undefined4 *)(param_1 + 0x84) = 0;
  if (*(int *)(param_1 + 0x88) != param_2) {
    *(int *)(param_1 + 0x88) = param_2;
    ((C_0076b990 *)(this))->sub_0075af80(0, param_2, 4);
  }
  return;
}

void sub_0076a530();
// @baa 0x0076b9c0
void sub_0076b9c0(void) { sub_0076a530(); }

void sub_0076a590();
// @baa 0x0076b9d0
void sub_0076b9d0(void) { sub_0076a590(); }

void sub_0076a5f0();
// @baa 0x0076b9f0
void sub_0076b9f0(void) { sub_0076a5f0(); }

void sub_0076a650();
// @baa 0x0076ba00
void sub_0076ba00(void) { sub_0076a650(); }

void sub_0076a6b0();
// @baa 0x0076ba10
void sub_0076ba10(void) { sub_0076a6b0(); }

void sub_0076a710();
// @baa 0x0076ba20
void sub_0076ba20(void) { sub_0076a710(); }

void sub_0076a770();
// @baa 0x0076ba30
void sub_0076ba30(void) { sub_0076a770(); }

void sub_0076a7d0();
// @baa 0x0076ba40
void sub_0076ba40(void) { sub_0076a7d0(); }

void sub_0076a830();
// @baa 0x0076ba50
void sub_0076ba50(void) { sub_0076a830(); }

void sub_0076a890();
// @baa 0x0076ba60
void sub_0076ba60(void) { sub_0076a890(); }

void sub_0076a8f0();
// @baa 0x0076ba70
void sub_0076ba70(void) { sub_0076a8f0(); }

void sub_0076a950();
// @baa 0x0076ba80
void sub_0076ba80(void) { sub_0076a950(); }

// @baa 0x0076ba90
IMPLEMENT_CLASS_AT(UReachSpec, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 49);

// @baa 0x0076bb00
int UReachSpec::vf_11c(void) { return 0; }

// @baa 0x0076bb10
int UReachSpec::vf_120(void) { return 0; }

// @baa 0x0076bb20
UINT UReachSpec::vf_138(INT a0) { return 1; }

// @baa 0x0076bb30
struct C_0076bb80 {
    undefined4 * sub_0076bb80();
};

extern undefined * g_01eff830;
// @baa 0x0076bb80
undefined4 * C_0076bb80::sub_0076bb80(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  *param_1 = (undefined4)(&g_01eff830);
  return param_1;
}

// @baa 0x0076bbd0
IMPLEMENT_CLASS_AT(UAdvancedReachSpec, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 51);

// @baa 0x0076bc30
struct C_0076bc60 {
    undefined4 * sub_0076bc60();
};

extern undefined * g_01eff970;
// @baa 0x0076bc60
undefined4 * C_0076bc60::sub_0076bc60(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  *param_1 = (undefined4)(&g_01eff970);
  return param_1;
}

// @baa 0x0076bc80
IMPLEMENT_CLASS_AT(UCeilingReachSpec, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 60);

// @baa 0x0076bce0
// @baa 0x0076bd10
IMPLEMENT_CLASS_AT(UForcedReachSpec, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 50);

// @baa 0x0076bda0
int UForcedReachSpec::vf_11c(void) { return 1; }

// @baa 0x0076bdb0
struct C_0076bde0 {
    undefined4 * sub_0076bde0();
};

extern undefined * g_01effab0;
// @baa 0x0076bde0
undefined4 * C_0076bde0::sub_0076bde0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  *param_1 = (undefined4)(&g_01effab0);
  return param_1;
}

struct C_0076be00 {
    undefined4 * sub_0076be00();
};

extern undefined * g_01effbf0;
// @baa 0x0076be00
undefined4 * C_0076be00::sub_0076be00(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  *param_1 = (undefined4)(&g_01effbf0);
  return param_1;
}

// @baa 0x0076be20
IMPLEMENT_CLASS_AT(UCoverSlipReachSpec, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 57);

// @baa 0x0076be80
struct C_0076beb0 {
    undefined4 * sub_0076beb0();
};

extern undefined * g_01effd30;
// @baa 0x0076beb0
undefined4 * C_0076beb0::sub_0076beb0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  *param_1 = (undefined4)(&g_01effd30);
  return param_1;
}

// @baa 0x0076bed0
IMPLEMENT_CLASS_AT(UFloorToCeilingReachSpec, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 59);

// @baa 0x0076bf30
struct C_0076bf60 {
    undefined4 * sub_0076bf60();
};

extern undefined * g_01effe70;
// @baa 0x0076bf60
undefined4 * C_0076bf60::sub_0076bf60(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  *param_1 = (undefined4)(&g_01effe70);
  return param_1;
}

// @baa 0x0076bf80
IMPLEMENT_CLASS_AT(UMantleReachSpec, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 55);

// @baa 0x0076bfe0
struct C_0076c010 {
    undefined4 * sub_0076c010();
};

extern undefined * g_01efffb0;
// @baa 0x0076c010
undefined4 * C_0076c010::sub_0076c010(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  *param_1 = (undefined4)(&g_01efffb0);
  return param_1;
}

// @baa 0x0076c030
IMPLEMENT_CLASS_AT(USlotToSlotReachSpec, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 54);

// @baa 0x0076c090
struct C_0076c0c0 {
    undefined4 * sub_0076c0c0();
};

extern undefined * g_01f000f0;
// @baa 0x0076c0c0
undefined4 * C_0076c0c0::sub_0076c0c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  *param_1 = (undefined4)(&g_01f000f0);
  return param_1;
}

// @baa 0x0076c0e0
IMPLEMENT_CLASS_AT(USwatTurnReachSpec, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 56);

// @baa 0x0076c140
struct C_0076c170 {
    undefined4 * sub_0076c170();
};

extern undefined * g_01f00230;
// @baa 0x0076c170
undefined4 * C_0076c170::sub_0076c170(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  *param_1 = (undefined4)(&g_01f00230);
  return param_1;
}

// @baa 0x0076c190
IMPLEMENT_CLASS_AT(UWallTransReachSpec, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 58);

// @baa 0x0076c1f0
struct C_0076c220 {
    undefined4 * sub_0076c220();
};

extern undefined * g_01f00370;
// @baa 0x0076c220
undefined4 * C_0076c220::sub_0076c220(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  *param_1 = (undefined4)(&g_01f00370);
  return param_1;
}

// @baa 0x0076c270
IMPLEMENT_CLASS_AT(ULadderReachSpec, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 52);

// @baa 0x0076c2d0
struct C_0076c300 {
    undefined4 * sub_0076c300();
};

extern undefined * g_01f004b0;
// @baa 0x0076c300
undefined4 * C_0076c300::sub_0076c300(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  *param_1 = (undefined4)(&g_01f004b0);
  return param_1;
}

// @baa 0x0076c350
int UProscribedReachSpec::vf_120(void) { return 1; }

// @baa 0x0076c360
IMPLEMENT_CLASS_AT(UProscribedReachSpec, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 53);

// @baa 0x0076c3c0
struct C_0076c3f0 {
    undefined4 * sub_0076c3f0();
};

extern undefined * g_01f005f0;
// @baa 0x0076c3f0
undefined4 * C_0076c3f0::sub_0076c3f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  *param_1 = (undefined4)(&g_01f005f0);
  return param_1;
}

// @baa 0x0076c410
IMPLEMENT_CLASS_AT(UTeleportReachSpec, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 112);

// @baa 0x0076c470
void sub_0076a9b0();
// @baa 0x0076c4a0
void sub_0076c4a0(void) { sub_0076a9b0(); }

void sub_0076aa10();
// @baa 0x0076c4b0
void sub_0076c4b0(void) { sub_0076aa10(); }

void sub_0076aa70();
// @baa 0x0076c4c0
void sub_0076c4c0(void) { sub_0076aa70(); }

void sub_0076aad0();
// @baa 0x0076c4d0
void sub_0076c4d0(void) { sub_0076aad0(); }

void sub_0076ab30();
// @baa 0x0076c4e0
void sub_0076c4e0(void) { sub_0076ab30(); }

void sub_0076ab90();
// @baa 0x0076c4f0
void sub_0076c4f0(void) { sub_0076ab90(); }

void sub_0076abf0();
// @baa 0x0076c500
void sub_0076c500(void) { sub_0076abf0(); }

void sub_0076ac50();
// @baa 0x0076c510
void sub_0076c510(void) { sub_0076ac50(); }

void sub_0076acb0();
// @baa 0x0076c520
void sub_0076c520(void) { sub_0076acb0(); }

void sub_0076ad20();
// @baa 0x0076c530
void sub_0076c530(void) { sub_0076ad20(); }

int sub_00757130(void);
int sub_00768e20(...);
extern undefined4 g_026b3c34;
// @baa 0x0076c540
int sub_0076c540(void)
{
  if (g_026b3c34 == 0) {
    g_026b3c34 = sub_00768e20(L"Engine");
    sub_00757130();
  }
  return g_026b3c34;
}

// @baa 0x0076c570
// @baa 0x0076c5e0
int UMeshComponentFactory::vf_110(int a0) { return 0; }

// @baa 0x0076c5f0
int sub_00754d50(void);
int sub_00767190(...);
extern undefined4 g_026b3b30;
// @baa 0x0076c610
int sub_0076c610(void)
{
  if (g_026b3b30 == 0) {
    g_026b3b30 = sub_00767190(L"Engine");
    sub_00754d50();
  }
  return g_026b3b30;
}

int sub_00755ba0(void);
int sub_00767ee0(...);
extern undefined4 g_026b3b40;
// @baa 0x0076c640
int sub_0076c640(void)
{
  if (g_026b3b40 == 0) {
    g_026b3b40 = sub_00767ee0(L"Engine");
    sub_00755ba0();
  }
  return g_026b3b40;
}

// @baa 0x0076cb40
// @baa 0x0076cc50
bool UKillZDamageType::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_0076d6e0 { void sub_0076b860(int); C_0076d6e0 *sub_0076d6e0(int); };

// @baa 0x0076d6e0
C_0076d6e0 *C_0076d6e0::sub_0076d6e0(int a) { sub_0076b860(a); return this; }

struct C_0076d950 {
    int sub_0076d950(int);
    int sub_0076b130(int, int);
};

// @baa 0x0076d950
int C_0076d950::sub_0076d950(int param_2)
{
    int * param_1 = (int *)this;
  ((C_0076d950 *)(this))->sub_0076b130((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

struct C_0076d980 {
    int sub_0076d980(int);
    int sub_0076b130(int, int);
};

// @baa 0x0076d980
int C_0076d980::sub_0076d980(int param_2)
{
    int * param_1 = (int *)this;
  ((C_0076d980 *)(this))->sub_0076b130((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

// @baa 0x0076da30
void sub_0076da30(void) { sub_0076a6b0(); }

struct C_0076ddf0 {
    undefined4 sub_0076ddf0(byte);
    int sub_0040fcc0();
};

// @baa 0x0076ddf0
undefined4 C_0076ddf0::sub_0076ddf0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_0076ddf0 *)(((char *)this + 8)))->sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct TConstSetBitIterator_0076df70 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0076df70(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0076df70& operator++();
};

TConstSetBitIterator_0076df70::TConstSetBitIterator_0076df70(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0076df70
TConstSetBitIterator_0076df70& TConstSetBitIterator_0076df70::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0076dfc0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0076dfc0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0076dfc0& operator++();
};

TConstSetBitIterator_0076dfc0::TConstSetBitIterator_0076dfc0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0076dfc0
TConstSetBitIterator_0076dfc0& TConstSetBitIterator_0076dfc0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0076e010 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0076e010(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0076e010& operator++();
};

TConstSetBitIterator_0076e010::TConstSetBitIterator_0076e010(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0076e010
TConstSetBitIterator_0076e010& TConstSetBitIterator_0076e010::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0076e240 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0076e240(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0076e240& operator++();
};

TConstSetBitIterator_0076e240::TConstSetBitIterator_0076e240(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0076e240
TConstSetBitIterator_0076e240& TConstSetBitIterator_0076e240::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0076e290 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0076e290(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0076e290& operator++();
};

TConstSetBitIterator_0076e290::TConstSetBitIterator_0076e290(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0076e290
TConstSetBitIterator_0076e290& TConstSetBitIterator_0076e290::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0076e2e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0076e2e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0076e2e0& operator++();
};

TConstSetBitIterator_0076e2e0::TConstSetBitIterator_0076e2e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0076e2e0
TConstSetBitIterator_0076e2e0& TConstSetBitIterator_0076e2e0::operator++()
{
    It.Advance();
    return *this;
}

extern undefined * g_01f00730;
// @baa 0x0076e890
undefined4 * UObject::sub_0076e890(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f00730);
  return param_1;
}

extern undefined * g_01f00848;
// @baa 0x0076e8b0
undefined4 * UObject::sub_0076e8b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f00848);
  return param_1;
}

// @baa 0x0076e8d0
bool UStaticMeshComponentFactory::vf_10c(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x44) != 0;
}

// @baa 0x0076e8e0
IMPLEMENT_CLASS_AT(UStaticMeshComponentFactory, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActorComponent.cpp", 53);

// @baa 0x0076e940
int sub_00767fa0(...);
int sub_0076c670(void);
extern undefined4 g_026b3b44;
// @baa 0x0076eb70
int sub_0076eb70(void)
{
  if (g_026b3b44 == 0) {
    g_026b3b44 = sub_00767fa0(L"Engine");
    sub_0076c670();
  }
  return g_026b3b44;
}

// @baa 0x0076ee00
IMPLEMENT_CLASS_AT(UScriptedTexture, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\TextureRenderTarget2D.cpp", 382);

// @baa 0x0076ef10
bool UScriptedTexture::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}
