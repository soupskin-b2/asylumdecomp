// Engine_0b30000.cpp (part 1 of 4): 222 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00b30ef0
void sub_00b30ef0(void) {  }

// @baa 0x00b30f00
float10 sub_00b30f00(double param_1)
{
  return (float10)param_1;
}

struct C {
    int sub_00b30f90(int);
};

// @baa 0x00b30f90
int C::sub_00b30f90(int param_2)
{
    int param_1 = (int)this;

  return param_1 + param_2 * 4;
}

struct C_00b30fe0 {
    undefined1 sub_00b30fe0();
};

// @baa 0x00b30fe0
undefined1 C_00b30fe0::sub_00b30fe0(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0x1c0);
}

struct C_00b30ff0 {
    undefined1 sub_00b30ff0();
};

// @baa 0x00b30ff0
undefined1 C_00b30ff0::sub_00b30ff0(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0x1c1);
}

struct C_00b31000 { char* sub_00b31000(void); };

// @baa 0x00b31000
char* C_00b31000::sub_00b31000(void) { return (char*)this + 452; }

struct C_00b31010 { char* sub_00b31010(void); };

// @baa 0x00b31010
char* C_00b31010::sub_00b31010(void) { return (char*)this + 464; }

extern char g_01feddf8[];
struct C_00b31040 { void sub_00b31040(void); };

// @baa 0x00b31040
void C_00b31040::sub_00b31040(void) { *(int*)((char*)this + 0) = (int)g_01feddf8; }

// @baa 0x00b31050
int sub_00b31050(void) { return 1; }

// @baa 0x00b31060
int sub_00b31060(void) { return 0; }

// @baa 0x00b31070
void __stdcall sub_00b31070(int a0, int a1, int a2, int a3) {  }

struct C_00b310f0 {
    undefined4 * sub_00b310f0(byte);
};

int sub_0053dfa0(...);
// @baa 0x00b310f0
undefined4 * C_00b310f0::sub_00b310f0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01feddf8);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00b31140 { int a, b; C_00b31140(int, int); };

// @baa 0x00b31140
C_00b31140::C_00b31140(int x, int y) : a(x), b(y) {}

struct C_00b31160 {
    undefined4 sub_00b31160(int);
};

// @baa 0x00b31160
undefined4 C_00b31160::sub_00b31160(int param_2)
{
    int param_1 = (int)this;

  while( true ) {
    if (param_1 == 0) {
      return 0;
    }
    if (param_1 == param_2) break;
    param_1 = *(int *)(param_1 + 4);
  }
  return 1;
}

struct C_00b311b0 { int sub_00b311b0(void); };

// @baa 0x00b311b0
int C_00b311b0::sub_00b311b0(void) { return *(int*)((char*)this + 52); }

struct C_00b311c0 { int sub_00b311c0(void); };

// @baa 0x00b311c0
int C_00b311c0::sub_00b311c0(void) { return *(int*)((char*)this + 56); }

// @baa 0x00b313c0
void sub_00b313c0(void) {  }

int sub_00ba1bc0(...);
int sub_00ba5800(void);
extern undefined4 g_026bf7ec;
// @baa 0x00b319a0
int sub_00b319a0(void)
{
  if (g_026bf7ec == 0) {
    g_026bf7ec = sub_00ba1bc0(L"Engine");
    sub_00ba5800();
  }
  return g_026bf7ec;
}

int sub_00df1aa0(void);
int sub_00df78c0(...);
extern undefined4 g_026c5e78;
// @baa 0x00b319d0
int sub_00b319d0(void)
{
  if (g_026c5e78 == 0) {
    g_026c5e78 = sub_00df78c0(L"Engine");
    sub_00df1aa0();
  }
  return g_026c5e78;
}

// @baa 0x00b31a00
void __stdcall sub_00b31a00(int a0) {  }

// @baa 0x00b31a10
void __stdcall sub_00b31a10(int a0) {  }

// @baa 0x00b31a20
void __stdcall sub_00b31a20(int a0) {  }

struct C_00b31b40 {
    void sub_00b31b40(uint);
};

// @baa 0x00b31b40
void C_00b31b40::sub_00b31b40(uint param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) ^ (*(uint *)(param_1 + 0x30) ^ param_2) & 1;
  return;
}

struct C_00b329a0 {
    void sub_00b329a0(undefined4);
};

int sub_00716170(...);
// @baa 0x00b329a0
void C_00b329a0::sub_00b329a0(undefined4 param_2)
{
    int param_1 = (int)this;

  sub_00716170(param_2,param_1 + 4);
  sub_00716170(param_2,param_1 + 10);
  return;
}

// @baa 0x00b329d0
void __stdcall sub_00b329d0(int a0, int a1, int a2) {  }

extern char g_01ecdfc8[];
struct C_00b32a30 { void sub_00b32a30(void); };

// @baa 0x00b32a30
void C_00b32a30::sub_00b32a30(void) { *(int*)((char*)this + 0) = (int)g_01ecdfc8; }

double sub_01a37606(double);
// @baa 0x00b32a40
float10 sub_00b32a40(float param_1)
{
  double dVar1;
  
  dVar1 = sub_01a37606((double)param_1);
  return (float10)dVar1;
}

// @baa 0x00b32a60
float10 sub_00b32a60(float param_1, float param_2, float param_3)
{
  if (param_2 < param_1) {
    return (float10)param_2;
  }
  if (param_1 < param_3) {
    return (float10)param_3;
  }
  return (float10)param_1;
}

struct C_00b32aa0 {
    void sub_00b32aa0();
};

// @baa 0x00b32aa0
void C_00b32aa0::sub_00b32aa0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  return;
}

// @baa 0x00b32b90
IMPLEMENT_CLASS_AT(UParticleModuleCollisionBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\ParticleModules_Collision.cpp", 19);

// @baa 0x00b32ca0
int UParticleModuleCollisionBase::vf_000(void) { return 1; }

// @baa 0x00b32cb0
bool UParticleModuleCollisionBase::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00b32e10
IMPLEMENT_CLASS_AT(UParticleModuleEventBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\ParticleModules_Event.cpp", 11);

// @baa 0x00b32f20
int UParticleModuleEventBase::vf_000(void) { return 1; }

// @baa 0x00b32f30
bool UParticleModuleEventBase::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00b32fd0
int UParticleModuleEventReceiverBase::vf_000(void) { return 1; }

// @baa 0x00b32fe0
int UParticleModuleEventReceiverSpawn::vf_000(void) { return 1; }

// @baa 0x00b33270
IMPLEMENT_CLASS_AT(UParticleModuleMaterialBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\ParticleModules_Material.cpp", 12);

// @baa 0x00b33380
int UParticleModuleMaterialBase::vf_000(void) { return 1; }

// @baa 0x00b33390
bool UParticleModuleMaterialBase::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00b333d0
int UParticleModuleMeshMaterial::vf_000(void) { return 1; }

// @baa 0x00b333f0
int UParticleModuleMaterialByParameter::vf_000(void) { return 1; }

// @baa 0x00b33400
IMPLEMENT_CLASS_AT(UParticleModuleOrbitBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\ParticleModules_Orbit.cpp", 11);

// @baa 0x00b33510
int UParticleModuleOrbitBase::vf_000(void) { return 1; }

// @baa 0x00b33520
bool UParticleModuleOrbitBase::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00b339e0
IMPLEMENT_CLASS_AT(UParticleModuleParameterBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\ParticleModules_Parameter.cpp", 15);

// @baa 0x00b33af0
int UParticleModuleParameterBase::vf_000(void) { return 1; }

// @baa 0x00b33b00
bool UParticleModuleParameterBase::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_00b33c10 {
    float10 sub_00b33c10();
};

// @baa 0x00b33c10
float10 C_00b33c10::sub_00b33c10(void)
{
    int param_1 = (int)this;

  return (float10)*(float *)(*(int *)(param_1 + 0x38) + 4);
}

void sub_00df7320();
// @baa 0x00b33c20
void sub_00b33c20(void) { sub_00df7320(); }

int sub_005eae70(...);
int sub_00b749d0(void);
// @baa 0x00b34060
void UParticleModuleTypeDataPhysX::vf_16c(void)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  sub_00b749d0();
  if (*(int *)(param_1 + 0x48) == 0) {
    if (g_026c5e78 == 0) {
      g_026c5e78 = sub_00df78c0(L"Engine");
      sub_00df1aa0();
    }
    uVar1 = sub_005eae70(g_026c5e78,0,L"EngineResources.DefaultPhysXParSys",0,0,0,1);
    *(undefined4 *)(param_1 + 0x48) = uVar1;
  }
  return;
}

// @baa 0x00b34100
IMPLEMENT_CLASS_AT(UParticleModuleSpawnBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\ParticleModules_Spawn.cpp", 11);

// @baa 0x00b34210
int UParticleModuleSpawnBase::vf_000(void) { return 1; }

// @baa 0x00b34220
bool UParticleModuleSpawnBase::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00b34260
int UParticleModuleSpawn::vf_000(void) { return 1; }

// @baa 0x00b342e0
int UParticleModuleSpawnPerUnit::vf_118(int a0) { return 4; }

struct C_00b34950 {
    uint sub_00b34950();
};

// @baa 0x00b34950
uint C_00b34950::sub_00b34950(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x18c) >> 1 & 1;
}

struct C_00b34960 { int sub_00b34960(void); };

// @baa 0x00b34960
int C_00b34960::sub_00b34960(void) { return *(int*)((char*)this + 4); }

struct C_00b34970 { int sub_00b34970(void); };

// @baa 0x00b34970
int C_00b34970::sub_00b34970(void) { return *(int*)((char*)this + 4); }

struct C_00b34980 { int sub_00b34980(void); };

// @baa 0x00b34980
int C_00b34980::sub_00b34980(void) { return *(int*)((char*)this + 4); }

struct C_00b34990 { int sub_00b34990(void); };

// @baa 0x00b34990
int C_00b34990::sub_00b34990(void) { return *(int*)((char*)this + 4); }

struct C_00b349a0 { int sub_00b349a0(void); };

// @baa 0x00b349a0
int C_00b349a0::sub_00b349a0(void) { return *(int*)((char*)this + 4); }

struct C_00b349b0 { int sub_00b349b0(void); };

// @baa 0x00b349b0
int C_00b349b0::sub_00b349b0(void) { return *(int*)((char*)this + 4); }

struct C_00b349c0 { int sub_00b349c0(void); };

// @baa 0x00b349c0
int C_00b349c0::sub_00b349c0(void) { return *(int*)((char*)this + 4); }

struct C_00b349d0 { int sub_00b349d0(void); };

// @baa 0x00b349d0
int C_00b349d0::sub_00b349d0(void) { return *(int*)((char*)this + 4); }

struct C_00b349e0 { int sub_00b349e0(void); };

// @baa 0x00b349e0
int C_00b349e0::sub_00b349e0(void) { return *(int*)((char*)this + 4); }

struct C_00b349f0 { int sub_00b349f0(void); };

// @baa 0x00b349f0
int C_00b349f0::sub_00b349f0(void) { return *(int*)((char*)this + 4); }

struct C_00b34a00 { int sub_00b34a00(void); };

// @baa 0x00b34a00
int C_00b34a00::sub_00b34a00(void) { return *(int*)((char*)this + 4); }

struct C_00b34a10 { int sub_00b34a10(void); };

// @baa 0x00b34a10
int C_00b34a10::sub_00b34a10(void) { return *(int*)((char*)this + 4); }

struct C_00b34a20 { int sub_00b34a20(void); };

// @baa 0x00b34a20
int C_00b34a20::sub_00b34a20(void) { return *(int*)((char*)this + 0); }

struct C_00b34aa0 { int sub_00b34aa0(void); };

// @baa 0x00b34aa0
int C_00b34aa0::sub_00b34aa0(void) { return *(int*)((char*)this + 0); }

struct C_00b34ab0 { int sub_00b34ab0(void); };

// @baa 0x00b34ab0
int C_00b34ab0::sub_00b34ab0(void) { return *(int*)((char*)this + 0); }

struct C_00b34ac0 { int sub_00b34ac0(void); };

// @baa 0x00b34ac0
int C_00b34ac0::sub_00b34ac0(void) { return *(int*)((char*)this + 0); }

struct C_00b34ad0 { int sub_00b34ad0(void); };

// @baa 0x00b34ad0
int C_00b34ad0::sub_00b34ad0(void) { return *(int*)((char*)this + 0); }

struct C_00b34ae0 { int sub_00b34ae0(void); };

// @baa 0x00b34ae0
int C_00b34ae0::sub_00b34ae0(void) { return *(int*)((char*)this + 0); }

struct C_00b34af0 { int sub_00b34af0(void); };

// @baa 0x00b34af0
int C_00b34af0::sub_00b34af0(void) { return *(int*)((char*)this + 0); }

struct C_00b34b00 { int sub_00b34b00(void); };

// @baa 0x00b34b00
int C_00b34b00::sub_00b34b00(void) { return *(int*)((char*)this + 0); }

struct C_00b34b10 { int sub_00b34b10(void); };

// @baa 0x00b34b10
int C_00b34b10::sub_00b34b10(void) { return *(int*)((char*)this + 0); }

struct C_00b34b20 { int sub_00b34b20(void); };

// @baa 0x00b34b20
int C_00b34b20::sub_00b34b20(void) { return *(int*)((char*)this + 0); }

struct C_00b34b30 { int sub_00b34b30(void); };

// @baa 0x00b34b30
int C_00b34b30::sub_00b34b30(void) { return *(int*)((char*)this + 0); }

struct C_00b34b40 { C_00b34b40* sub_00b34b40(int a0); };

// @baa 0x00b34b40
C_00b34b40* C_00b34b40::sub_00b34b40(int a0) { return this; }

struct C_00b34b50 { int sub_00b34b50(void); };

// @baa 0x00b34b50
int C_00b34b50::sub_00b34b50(void) { return *(int*)((char*)this + 0); }

struct C_00b34b60 { C_00b34b60* sub_00b34b60(int a0); };

// @baa 0x00b34b60
C_00b34b60* C_00b34b60::sub_00b34b60(int a0) { return this; }

struct C_00b34b70 { C_00b34b70* sub_00b34b70(int a0); };

// @baa 0x00b34b70
C_00b34b70* C_00b34b70::sub_00b34b70(int a0) { return this; }

struct C_00b34b80 { int sub_00b34b80(void); };

// @baa 0x00b34b80
int C_00b34b80::sub_00b34b80(void) { return *(int*)((char*)this + 0); }

struct C_00b34b90 { int sub_00b34b90(void); };

// @baa 0x00b34b90
int C_00b34b90::sub_00b34b90(void) { return *(int*)((char*)this + 0); }

struct C_00b34ba0 {
    int sub_00b34ba0();
};

// @baa 0x00b34ba0
int C_00b34ba0::sub_00b34ba0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00b34bb0 { int a, b; C_00b34bb0(int, int); };

// @baa 0x00b34bb0
C_00b34bb0::C_00b34bb0(int x, int y) : a(x), b(y) {}

struct C_00b34bd0 {
    int sub_00b34bd0();
};

// @baa 0x00b34bd0
int C_00b34bd0::sub_00b34bd0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00b34be0 { int a, b; C_00b34be0(int, int); };

// @baa 0x00b34be0
C_00b34be0::C_00b34be0(int x, int y) : a(x), b(y) {}

struct C_00b34c00 { int sub_00b34c00(void); };

// @baa 0x00b34c00
int C_00b34c00::sub_00b34c00(void) { return *(int*)((char*)this + 0); }

// @baa 0x00b34c10
int sub_00b34c10(int a0) { return *(int*)a0; }

// @baa 0x00b34c20
bool sub_00b34c20(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_00b34c30 { int a, b; C_00b34c30(const C_00b34c30 &); };

// @baa 0x00b34c30
C_00b34c30::C_00b34c30(const C_00b34c30 &o) : a(o.a), b(o.b) {}

// @baa 0x00b34c90
int sub_00b34c90(int a0) { return *(int*)a0; }

// @baa 0x00b34ca0
bool sub_00b34ca0(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_00b34cb0 { int a, b; C_00b34cb0(const C_00b34cb0 &); };

// @baa 0x00b34cb0
C_00b34cb0::C_00b34cb0(const C_00b34cb0 &o) : a(o.a), b(o.b) {}

struct C_00b34d10 { int sub_00b34d10(void); };

// @baa 0x00b34d10
int C_00b34d10::sub_00b34d10(void) { return *(int*)((char*)this + 0); }

struct C_00b34d20 { int sub_00b34d20(void); };

// @baa 0x00b34d20
int C_00b34d20::sub_00b34d20(void) { return *(int*)((char*)this + 0); }

struct C_00b34d30 { int sub_00b34d30(void); };

// @baa 0x00b34d30
int C_00b34d30::sub_00b34d30(void) { return *(int*)((char*)this + 0); }

struct C_00b34d40 { int sub_00b34d40(void); };

// @baa 0x00b34d40
int C_00b34d40::sub_00b34d40(void) { return *(int*)((char*)this + 0); }

struct C_00b34d50 { int sub_00b34d50(void); };

// @baa 0x00b34d50
int C_00b34d50::sub_00b34d50(void) { return *(int*)((char*)this + 0); }

struct C_00b34dd0 { int sub_00b34dd0(void); };

// @baa 0x00b34dd0
int C_00b34dd0::sub_00b34dd0(void) { return *(int*)((char*)this + 0); }

struct C_00b34de0 {
    int sub_00b34de0(int);
};

// @baa 0x00b34de0
int C_00b34de0::sub_00b34de0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00b34df0 {
    int sub_00b34df0(int);
};

// @baa 0x00b34df0
int C_00b34df0::sub_00b34df0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00b34e00 { int sub_00b34e00(void); };

// @baa 0x00b34e00
int C_00b34e00::sub_00b34e00(void) { return *(int*)((char*)this + 20); }

struct C_00b34e10 { int sub_00b34e10(void); };

// @baa 0x00b34e10
int C_00b34e10::sub_00b34e10(void) { return *(int*)((char*)this + 20); }

struct C_00b34e20 { int sub_00b34e20(void); };

// @baa 0x00b34e20
int C_00b34e20::sub_00b34e20(void) { return *(int*)((char*)this + 20); }

struct C_00b34e30 {
    void sub_00b34e30(int);
};

// @baa 0x00b34e30
void C_00b34e30::sub_00b34e30(int param_2)
{
    int param_1 = (int)this;

  *(int *)(param_1 + 0x14) = param_2;
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 100);
  return;
}

struct C_00b35230 { int a, b; C_00b35230(const C_00b35230 &); };

// @baa 0x00b35230
C_00b35230::C_00b35230(const C_00b35230 &o) : a(o.a), b(o.b) {}

struct C_00b35250 { int a, b; C_00b35250(const C_00b35250 &); };

// @baa 0x00b35250
C_00b35250::C_00b35250(const C_00b35250 &o) : a(o.a), b(o.b) {}

struct S {
    TArray<QWORD> Items; // 0x00
    const QWORD* sub_00b35270(INT Index) const;
};

// @baa 0x00b35270
const QWORD* S::sub_00b35270(INT Index) const
{
    return &Items(Index);
}

struct C_00b352c0 { int sub_00b352c0(void); };

// @baa 0x00b352c0
int C_00b352c0::sub_00b352c0(void) { return *(int*)((char*)this + 4); }

struct E { BYTE Bytes[12]; };

struct S_00b352d0 {
    TArray<E> Items; // 0x00
    const E* sub_00b352d0(INT Index) const;
};

// @baa 0x00b352d0
const E* S_00b352d0::sub_00b352d0(INT Index) const
{
    return &Items(Index);
}

struct C_00b35390 {
    void sub_00b35390(int);
};

// @baa 0x00b35390
void C_00b35390::sub_00b35390(int param_2)
{
    int * param_1 = (int *)this;

  *param_1 = param_2 >> 5;
  param_1[1] = 1 << ((byte)param_2 & 0x1f);
  return;
}

// @baa 0x00b353b0
int sub_00b353b0(int param_1)
{
  return param_1 + 0x18;
}

struct C_00b353c0 { int a, b, c; C_00b353c0(); };

// @baa 0x00b353c0
C_00b353c0::C_00b353c0() : a(0), b(0), c(0) {}

struct C_00b353d0 { int a, b, c; C_00b353d0(); };

// @baa 0x00b353d0
C_00b353d0::C_00b353d0() : a(0), b(0), c(0) {}

struct C_00b353e0 { int sub_00b353e0(void); };

// @baa 0x00b353e0
int C_00b353e0::sub_00b353e0(void) { return *(int*)((char*)this + 0); }

struct S_00b35410 { int sub_00b311d0(int); };

// @baa 0x00b35410
int sub_00b35410(S_00b35410 *s, int a) { return s->sub_00b311d0(a); }

struct C_00b35420 { int sub_00b35420(void); };

// @baa 0x00b35420
int C_00b35420::sub_00b35420(void) { return *(int*)((char*)this + 20); }

struct C_00b35430 { int sub_00b35430(void); };

// @baa 0x00b35430
int C_00b35430::sub_00b35430(void) { return *(int*)((char*)this + 4); }

struct A_00b35540 { virtual void sub_00b35700(); char pad[16]; };

struct B_00b35540 { virtual void sub_00b35700(); };

struct C_00b35540 : A_00b35540, B_00b35540 { virtual void sub_00b35700(); C_00b35540(); };

C_00b35540::C_00b35540() {}

// @baa 0x00b35540
void C_00b35540::sub_00b35700() {}

int sub_00b36660(void);
// @baa 0x00b366d0
undefined4 ULensFlare::sub_00b366d0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00b36660();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00b36ce0 {
    void sub_00b36ce0(undefined4);
};

// @baa 0x00b36ce0
void C_00b36ce0::sub_00b36ce0(undefined4 param_2)
{
    int param_1 = (int)this;

  sub_00716170(param_2,param_1 + 4);
  sub_00716170(param_2,param_1 + 10);
  sub_00716170(param_2,param_1 + 0x10);
  sub_00716170(param_2,param_1 + 0x16);
  sub_00716170(param_2,param_1 + 0x1c);
  return;
}

struct C_00b36d30 { void sub_00b36d30(void); };

// @baa 0x00b36d30
void C_00b36d30::sub_00b36d30(void) { *(int*)((char*)this + 0) = (int)g_01ecdfc8; }

struct C_00b36d40 {
    undefined4 * sub_00b36d40(byte);
};

// @baa 0x00b36d40
undefined4 * C_00b36d40::sub_00b36d40(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ecdfc8);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00b37620 {
    int sub_00b37620();
};

int sub_00b36d60(void);
// @baa 0x00b37620
int C_00b37620::sub_00b37620(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  iVar1 = sub_00b36d60();
  *(int *)(param_1 + 0x170) = *(int *)(param_1 + 0xc0) + iVar1;
  return iVar1 + 0x24;
}

int sub_0053df40(...);
extern undefined * g_01fede90;
// @baa 0x00b37ae0
undefined4 * sub_00b37ae0(void)
{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0053df40(0x10,8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (undefined4)(&g_01fede90);
    *(undefined2 *)(puVar1 + 2) = 0;
    *(undefined2 *)((int)puVar1 + 0xe) = 0;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

struct C_00b37b10 {
    undefined4 * sub_00b37b10(byte);
};

// @baa 0x00b37b10
undefined4 * C_00b37b10::sub_00b37b10(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ecdfc8);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct S_00b39520 {
    TArray<E> Items; // 0x00
    E* sub_00b39520(INT Index);
};

// @baa 0x00b39520
E* S_00b39520::sub_00b39520(INT Index)
{
    return &Items(Index);
}

struct S_00b395b0 {
    TArray<E> Items; // 0x00
    E* sub_00b395b0(INT Index);
};

// @baa 0x00b395b0
E* S_00b395b0::sub_00b395b0(INT Index)
{
    return &Items(Index);
}

struct E_00b39600 { BYTE Bytes[44]; };

struct S_00b39600 {
    TArray<E_00b39600> Items; // 0x00
    E_00b39600* sub_00b39600(INT Index);
};

// @baa 0x00b39600
E_00b39600* S_00b39600::sub_00b39600(INT Index)
{
    return &Items(Index);
}

struct E_00b39650 { BYTE Bytes[52]; };

struct S_00b39650 {
    TArray<E_00b39650> Items; // 0x00
    E_00b39650* sub_00b39650(INT Index);
};

// @baa 0x00b39650
E_00b39650* S_00b39650::sub_00b39650(INT Index)
{
    return &Items(Index);
}

struct E_00b396f0 { BYTE Bytes[84]; };

struct S_00b396f0 {
    TArray<E_00b396f0> Items; // 0x00
    E_00b396f0* sub_00b396f0(INT Index);
};

// @baa 0x00b396f0
E_00b396f0* S_00b396f0::sub_00b396f0(INT Index)
{
    return &Items(Index);
}

struct E_00b39740 { BYTE Bytes[68]; };

struct S_00b39740 {
    TArray<E_00b39740> Items; // 0x00
    E_00b39740* sub_00b39740(INT Index);
};

// @baa 0x00b39740
E_00b39740* S_00b39740::sub_00b39740(INT Index)
{
    return &Items(Index);
}

struct S_00b39790 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00b39790(INT Index);
};

// @baa 0x00b39790
DWORD* S_00b39790::sub_00b39790(INT Index)
{
    return &Items(Index);
}

struct S_00b397e0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00b397e0(INT Index);
};

// @baa 0x00b397e0
DWORD* S_00b397e0::sub_00b397e0(INT Index)
{
    return &Items(Index);
}

struct S_00b39830 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00b39830(INT Index);
};

// @baa 0x00b39830
DWORD* S_00b39830::sub_00b39830(INT Index)
{
    return &Items(Index);
}

struct S_00b39880 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00b39880(INT Index);
};

// @baa 0x00b39880
DWORD* S_00b39880::sub_00b39880(INT Index)
{
    return &Items(Index);
}

struct S_00b398d0 {
    TArray<E> Items; // 0x00
    E* sub_00b398d0(INT Index);
};

// @baa 0x00b398d0
E* S_00b398d0::sub_00b398d0(INT Index)
{
    return &Items(Index);
}

struct E_00b39920 { BYTE Bytes[40]; };

struct S_00b39920 {
    TArray<E_00b39920> Items; // 0x00
    E_00b39920* sub_00b39920(INT Index);
};

// @baa 0x00b39920
E_00b39920* S_00b39920::sub_00b39920(INT Index)
{
    return &Items(Index);
}

struct S_00b399d0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00b399d0(INT Index);
};

// @baa 0x00b399d0
DWORD* S_00b399d0::sub_00b399d0(INT Index)
{
    return &Items(Index);
}

int sub_00b39970(void);
// @baa 0x00b39a20
undefined4 ULensFlare::sub_00b39a20(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00b39970();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00b39a60 {
    int sub_00b39a60(int);
};

// @baa 0x00b39a60
int C_00b39a60::sub_00b39a60(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

struct C_00b39a70 {
    int sub_00b39a70(int);
};

// @baa 0x00b39a70
int C_00b39a70::sub_00b39a70(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_00b39a80 {
    int sub_00b39a80(int);
};

// @baa 0x00b39a80
int C_00b39a80::sub_00b39a80(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

// @baa 0x00b39a90
void __stdcall sub_00b39a90(int a0, int a1) {  }

// @baa 0x00b39aa0
void __stdcall sub_00b39aa0(int a0, int a1) {  }

struct C_00b39ab0 {
    int sub_00b39ab0(int);
};

// @baa 0x00b39ab0
int C_00b39ab0::sub_00b39ab0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

// @baa 0x00b39ac0
void __stdcall sub_00b39ac0(int a0, int a1) {  }

struct C_00b39ad0 {
    int sub_00b39ad0(int);
};

// @baa 0x00b39ad0
int C_00b39ad0::sub_00b39ad0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

// @baa 0x00b39af0
void __stdcall sub_00b39af0(int a0, int a1) {  }

struct C_00b39b00 {
    int sub_00b39b00(int);
};

// @baa 0x00b39b00
int C_00b39b00::sub_00b39b00(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

struct C_00b39b10{
int sub_00b39b10(undefined4*);
};

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x00b39b10
int C_00b39b10::sub_00b39b10(undefined4*param_2)
{
int*param_1=(int*)this;

undefined4*puVar1;
int iVar2;
int iVar3;

iVar2=param_1[1];
iVar3=iVar2+1;
param_1[1]=iVar3;
if(iVar3>param_1[2]){
iVar3=sub_0053d240(iVar3,param_1[2],4);
param_1[2]=iVar3;
if((*param_1!=0)||(iVar3)){
iVar3=sub_0053df70(*param_1,iVar3*4,8);
*param_1=iVar3;
}
}
puVar1=(undefined4*)(*param_1+4*iVar2);
if((undefined4*)0x0!=puVar1){
*puVar1=*param_2;
}
return iVar2;
}

// @baa 0x00b39b70
void __stdcall sub_00b39b70(int a0, int a1) {  }

struct S_00b39b80 {
    TArray<QWORD> Items; // 0x00
    QWORD* sub_00b39b80(INT Index);
};

// @baa 0x00b39b80
QWORD* S_00b39b80::sub_00b39b80(INT Index)
{
    return &Items(Index);
}

int sub_005413d0(...);
// @baa 0x00b39c00
void sub_00b39c00(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_00b39c10 {
    int sub_00b39c10();
};

// @baa 0x00b39c10
int C_00b39c10::sub_00b39c10(void)
{
    int param_1 = (int)this;
  return *(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c);
}

struct C_00b39c20 { int sub_00b39c20(void); };

// @baa 0x00b39c20
int C_00b39c20::sub_00b39c20(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00b39c30 {
    int sub_00b39c30(int);
};

// @baa 0x00b39c30
int C_00b39c30::sub_00b39c30(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00b39c40 {
    int sub_00b39c40(int);
};

// @baa 0x00b39c40
int C_00b39c40::sub_00b39c40(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x00b39c80
void sub_00b39c80(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_00b39c90 {
    int sub_00b39c90(int);
};

// @baa 0x00b39c90
int C_00b39c90::sub_00b39c90(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x10 + *param_1;
}

struct C_00b39ca0 {
    int sub_00b39ca0(int);
};

// @baa 0x00b39ca0
int C_00b39ca0::sub_00b39ca0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00b39cb0 { int sub_00b39cb0(void); };

// @baa 0x00b39cb0
int C_00b39cb0::sub_00b39cb0(void) { return *(int*)((char*)this + 20); }

struct C_00b39cc0 {
    int sub_00b39cc0();
};

// @baa 0x00b39cc0
int C_00b39cc0::sub_00b39cc0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00b39ce0 {
    int sub_00b39ce0();
};

// @baa 0x00b39ce0
int C_00b39ce0::sub_00b39ce0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00b39d00 {
    int sub_00b39d00();
};

// @baa 0x00b39d00
int C_00b39d00::sub_00b39d00(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00b39d10 {
    int sub_00b39d10();
};

// @baa 0x00b39d10
int C_00b39d10::sub_00b39d10(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00b39d30 {
    int sub_00b39d30();
};

// @baa 0x00b39d30
int C_00b39d30::sub_00b39d30(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

// @baa 0x00b39d40
void sub_00b39d40(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

// @baa 0x00b39d60
void sub_00b39d60(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

struct E_00b39d80 { BYTE Bytes[16]; };

struct S_00b39d80 {
    TArray<E_00b39d80> Items; // 0x00
    E_00b39d80* sub_00b39d80(INT Index);
};

// @baa 0x00b39d80
E_00b39d80* S_00b39d80::sub_00b39d80(INT Index)
{
    return &Items(Index);
}

struct C_00b39dd0 {
    undefined4 * sub_00b39dd0(int);
    int sub_0069c7f0(int);
};

extern undefined4 g_01fedf78;
// @baa 0x00b39dd0
undefined4 * C_00b39dd0::sub_00b39dd0(int param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_00b39dd0 *)(this))->sub_0069c7f0(param_2);
  *param_1 = (undefined4)(&g_01fedf78);
  param_1[5] = *(undefined4 *)(param_2 + 0x14);
  param_1[6] = *(undefined4 *)(param_2 + 0x18);
  return param_1;
}

struct C_00b39e30 { int sub_00b39e30(void); };

// @baa 0x00b39e30
int C_00b39e30::sub_00b39e30(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00b39e70 { int sub_00b39e70(void); };

// @baa 0x00b39e70
int C_00b39e70::sub_00b39e70(void) { return *(int*)((char*)this + 0); }

struct C_00b39e80 {
    void sub_00b39e80();
};

int sub_006311e0(...);
extern undefined2 g_01e3f3dc;
extern undefined4 g_01ec1274;
// @baa 0x00b39e80
void C_00b39e80::sub_00b39e80(void)
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

struct C_00b39eb0 {
    undefined4 * sub_00b39eb0(byte);
};

// @baa 0x00b39eb0
undefined4 * C_00b39eb0::sub_00b39eb0(byte param_2)
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

int sub_0069c170(...);
// @baa 0x00b39ef0
void sub_00b39ef0(int param_1)
{
  sub_0069c170(*(undefined4 *)(param_1 + 4),0);
  return;
}

struct C_00b39f10 {
    int sub_00b39f10(int);
};

// @baa 0x00b39f10
int C_00b39f10::sub_00b39f10(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x48;
}

struct C_00b39f20 {
    int sub_00b39f20();
};

// @baa 0x00b39f20
int C_00b39f20::sub_00b39f20(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00b3a0b0{
void sub_00b3a0b0(int*);
};

extern undefined4*g_026b0d94;
// @baa 0x00b3a0b0
void C_00b3a0b0::sub_00b3a0b0(int*param_2)
{
DWORD param_1=(int)this;

DWORD iVar1;
int iVar2;

iVar1=*param_2;
iVar2=*(int*)(param_1+0x19c);
if(0!=iVar1){
(*(DWORD(__stdcall**)(int))(*g_026b0d94+0x1fc))((int)(iVar1));
}
*(int*)(param_1+0x19c)=iVar1;
if(iVar2!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x248))((int)(iVar2));
}
return;
}

struct S16 {
    INT f00;
    INT f04;
    INT f08;
    INT f0c;
    S16* sub_00b3a100();
};

// @baa 0x00b3a100
S16* S16::sub_00b3a100()
{
    f00 = 0;
    f04 = 0;
    f08 = 0;
    f0c = 0;
    return this;
}

// @baa 0x00b3a4a0
int sub_00b3a4a0(void)
{
  int iVar1;
  
  iVar1 = sub_00b36d60();
  return iVar1 + 4;
}

struct C_00b3a940{
void sub_00b3a940();
};

// @baa 0x00b3a940
void C_00b3a940::sub_00b3a940(void)
{
int param_1=(int)this;

int iVar1;

iVar1=*(int*)(param_1+0x14);
*(undefined4*)(param_1+0x14)=0;
if(0!=iVar1){
(*(int(__stdcall**)(int))(*g_026b0d94+0x248))((int)(iVar1));
}
return;
}

struct C_00b3a960{
void sub_00b3a960();
};

extern undefined4*g_026bf53c;
// @baa 0x00b3a960
void C_00b3a960::sub_00b3a960(void)
{
int param_1=(int)this;

int iVar2;
int iVar1;

iVar2=(int)(g_026bf53c);
iVar1=*(int*)(param_1+0x19c);
if(g_026bf53c!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x1fc))((int)(g_026bf53c));
}
*(int*)(param_1+0x19c)=iVar2;
if(iVar1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x248))((int)(iVar1));
}
return;
}

extern undefined * g_01fedecc;
// @baa 0x00b3a9b0
undefined4 * sub_00b3a9b0(void)
{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0053df40(0x24,8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (undefined4)(&g_01fedecc);
    *(undefined2 *)(puVar1 + 2) = 0;
    *(undefined2 *)((int)puVar1 + 0xe) = 0;
    *(undefined2 *)(puVar1 + 5) = 0;
    *(undefined2 *)((int)puVar1 + 0x1a) = 0;
    *(undefined2 *)(puVar1 + 8) = 0;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_00b3c0f0 { void* Data; int Num; int Max; void sub_00b3c0f0(); };

// @baa 0x00b3c0f0
void C_00b3c0f0::sub_00b3c0f0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00b3c270 { void* Data; int Num; int Max; void sub_00b3c270(); };

// @baa 0x00b3c270
void C_00b3c270::sub_00b3c270() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

// @baa 0x00b3c4f0
void __stdcall sub_00b3c4f0(int a0, int a1) {  }

void sub_007b9350();
// @baa 0x00b3c5e0
void sub_00b3c5e0(void) { sub_007b9350(); }

struct C_00b3c5f0 { int sub_00b3c5f0(void); };

// @baa 0x00b3c5f0
int C_00b3c5f0::sub_00b3c5f0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

void sub_00b3d3a0();
// @baa 0x00b3d400
void sub_00b3d400(void) { sub_00b3d3a0(); }

// @baa 0x00b3d410
void sub_00b3d410(void) { sub_00b3d3a0(); }

// @baa 0x00b3d420
void sub_00b3d420(void) { sub_00b3d3a0(); }

struct M_00b3d490 { void sub_00765d90(); };

struct C_00b3d490 { char pad[4]; M_00b3d490 m; void sub_00b3d490(); };

// @baa 0x00b3d490
void C_00b3d490::sub_00b3d490() { m.sub_00765d90(); }

void sub_00b3c270();
// @baa 0x00b3d570
void sub_00b3d570(void) { sub_00b3c270(); }

// @baa 0x00b3db30
int UParticleModuleSpawnBase::vf_130(void) { return 4; }

// @baa 0x00b3db40
int sub_005c7a20(void);
extern undefined * g_01fee968;
// @baa 0x00b3db60
undefined4 * UObject::sub_00b3db60(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01fee968);
  return param_1;
}

// @baa 0x00b3db80
IMPLEMENT_CLASS_AT(UParticleModuleTypeDataBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleModules.cpp", 26);

// @baa 0x00b3dbe0
void UParticleModuleTypeDataBase::vf_170(int a0, int a1) {  }

// @baa 0x00b3dbf0
void UParticleModuleTypeDataBase::vf_174(int a0, int a1, int a2) {  }

// @baa 0x00b3dc00
void UParticleModuleTypeDataBase::vf_178(int a0, int a1, int a2) {  }

// @baa 0x00b3dc10
int UParticleModuleTypeDataBase::vf_130(void) { return 1; }

// @baa 0x00b3dc20
int UParticleModuleTypeDataBase::vf_17c(void) { return 0; }

// @baa 0x00b3dc30
extern undefined * g_01feead8;
// @baa 0x00b3dc50
undefined4 * UObject::sub_00b3dc50(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01feead8);
  return param_1;
}

// @baa 0x00b3dc70
IMPLEMENT_CLASS_AT(UParticleModuleTypeDataMesh, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleModules.cpp", 2815);

// @baa 0x00b3dcd0
int UParticleModuleTypeDataMesh::vf_17c(void) { return 1; }

// @baa 0x00b3dce0
extern undefined * g_01feec58;
// @baa 0x00b3dd00
undefined4 * UObject::sub_00b3dd00(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01feec58);
  return param_1;
}

extern undefined * g_01feedd8;
// @baa 0x00b3dd20
undefined4 * UObject::sub_00b3dd20(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01feedd8);
  return param_1;
}

// @baa 0x00b3dd40
IMPLEMENT_CLASS_AT(UParticleModuleTypeDataPhysX, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\ParticleModules_PhysX.cpp", 127);

// @baa 0x00b3dda0
extern undefined * g_01feef58;
// @baa 0x00b3ddc0
undefined4 * UObject::sub_00b3ddc0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01feef58);
  return param_1;
}

struct C_00b3f7e0 { C_00b3f7e0* sub_00b3f7e0(void); };

// @baa 0x00b3f7e0
C_00b3f7e0* C_00b3f7e0::sub_00b3f7e0(void) { return this; }

struct C_00b3f7f0 { C_00b3f7f0* sub_00b3f7f0(void); };

// @baa 0x00b3f7f0
C_00b3f7f0* C_00b3f7f0::sub_00b3f7f0(void) { return this; }

struct C_00b3f800 { int sub_00b3f800(void); };

// @baa 0x00b3f800
int C_00b3f800::sub_00b3f800(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00b3f810 {
    int sub_00b3f810(int);
};

// @baa 0x00b3f810
int C_00b3f810::sub_00b3f810(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00b3f820 {
    int sub_00b3f820(int);
};

// @baa 0x00b3f820
int C_00b3f820::sub_00b3f820(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}
