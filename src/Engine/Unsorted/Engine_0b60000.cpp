// Engine_0b60000.cpp (part 1 of 2): 48 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

typedef uint size_t;

struct C_view {
    int sub_00417dc0(int);
};

void * sub_01a375f0(void *, void *, size_t);
// @baa 0x00b60110
undefined4 * UObject::sub_00b60110(int * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  puVar1 = (undefined4 *)*param_2;
  ((C_view *)(this))->sub_00417dc0(puVar1[1]);
  if (param_1[1] != 0) {
    sub_01a375f0((void *)*param_1,(void *)*puVar1,param_1[1] * 2);
  }
  puVar1 = (undefined4 *)param_2[1];
  param_1[3] = *puVar1;
  param_1[4] = puVar1[1];
  param_1[5] = puVar1[2];
  param_1[6] = puVar1[3];
  param_1[7] = puVar1[4];
  return param_1;
}

// @baa 0x00b60170
int UObject::sub_00b60170(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

struct C_view_00b60180 {
    int sub_00b60110(int);
};

// @baa 0x00b60180
int UObject::sub_00b60180(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_view_00b60180 *)(this))->sub_00b60110(param_2);
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  return param_1;
}

// @baa 0x00b601a0
int UObject::sub_00b601a0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

void sub_0040fcc0();
// @baa 0x00b601c0
void sub_00b601c0(void) { sub_0040fcc0(); }

// @baa 0x00b601d0
int UObject::sub_00b601d0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

// @baa 0x00b601e0
int UObject::sub_00b601e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x28;
}

// @baa 0x00b601f0
int UObject::sub_00b601f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x28;
}

void sub_00b5f2b0();
// @baa 0x00b60b90
void sub_00b60b90(void) { sub_00b5f2b0(); }

void sub_00b5f310();
// @baa 0x00b60ba0
void sub_00b60ba0(void) { sub_00b5f310(); }

void sub_00b5f3b0();
// @baa 0x00b60bb0
void sub_00b60bb0(void) { sub_00b5f3b0(); }

void sub_00b5f4f0();
// @baa 0x00b60bc0
void sub_00b60bc0(void) { sub_00b5f4f0(); }

void sub_00b5f590();
// @baa 0x00b60bd0
void sub_00b60bd0(void) { sub_00b5f590(); }

void sub_00b5f5f0();
// @baa 0x00b60be0
void sub_00b60be0(void) { sub_00b5f5f0(); }

void sub_00b5f690();
// @baa 0x00b60bf0
void sub_00b60bf0(void) { sub_00b5f690(); }

void sub_00b5f740();
// @baa 0x00b60c00
void sub_00b60c00(void) { sub_00b5f740(); }

void sub_00b5f7e0();
// @baa 0x00b60c10
void sub_00b60c10(void) { sub_00b5f7e0(); }

void sub_00b5f900();
// @baa 0x00b60c20
void sub_00b60c20(void) { sub_00b5f900(); }

void sub_00b5f9a0();
// @baa 0x00b60c30
void sub_00b60c30(void) { sub_00b5f9a0(); }

void sub_00b5fa40();
// @baa 0x00b60c40
void sub_00b60c40(void) { sub_00b5fa40(); }

void sub_00b5fb20();
// @baa 0x00b60c50
void sub_00b60c50(void) { sub_00b5fb20(); }

extern char g_025de098[];
// @baa 0x00b60cd0
int sub_00b60cd0(void) { return (int)g_025de098; }

// @baa 0x00b60ce0
void sub_00b60ce0(void) {  }

// @baa 0x00b60cf0
void __stdcall sub_00b60cf0(int a0) {  }

struct C {
    void sub_00b60d90();
};

// @baa 0x00b60d90
void C::sub_00b60d90(void)
{
    int param_1 = (int)this;

  uint *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x10) + 0x3c);
  puVar1 = (uint *)(iVar2 + 0x50);
  *puVar1 = *puVar1 ^ (*(uint *)(param_1 + 0x18c) ^ *(uint *)(iVar2 + 0x50)) & 1;
  return;
}

extern char g_025de0a0[];
// @baa 0x00b61170
int sub_00b61170(void) { return (int)g_025de0a0; }

// @baa 0x00b656e0
int UParticleModuleBeamBase::vf_130(void) { return 2; }

// @baa 0x00b656f0
IMPLEMENT_CLASS_AT(UParticleModuleBeamBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleBeamModules.cpp", 15);

int sub_005c7a20(void);
extern undefined * g_01ff99f8;
// @baa 0x00b65710
undefined4 * UObject::sub_00b65710(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01ff99f8);
  return param_1;
}

struct C_00b65760 {
    undefined4 sub_00b65760(byte);
};

int sub_0053dfa0(...);
int sub_00b60d00(void);
// @baa 0x00b65760
undefined4 C_00b65760::sub_00b65760(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00b60d00();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00b65a90 {
    undefined4 sub_00b65a90(byte);
};

int sub_00b611e0(void);
// @baa 0x00b65a90
undefined4 C_00b65a90::sub_00b65a90(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00b611e0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern undefined * g_01ff98d0;
// @baa 0x00b66620
undefined4 * UObject::sub_00b66620(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01ff98d0);
  return param_1;
}

extern undefined * g_01ffa118;
// @baa 0x00b66640
undefined4 * UObject::sub_00b66640(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01ffa118);
  return param_1;
}

// @baa 0x00b66660
IMPLEMENT_CLASS_AT(UParticleSpriteEmitter, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleComponents.cpp", 22);

// @baa 0x00b666c0
int sub_00b50a20(void);
int sub_00b68ca0(...);
extern undefined4 g_026bf580;
// @baa 0x00b696d0
int sub_00b696d0(void)
{
  if (g_026bf580 == 0) {
    g_026bf580 = sub_00b68ca0(L"Engine");
    sub_00b50a20();
  }
  return g_026bf580;
}

struct S {
    void sub_00b4e400();
    void sub_00b68950();
    void sub_00b69cf0();
};

// @baa 0x00b69cf0
void S::sub_00b69cf0() {
    sub_00b4e400();
    sub_00b68950();
}

// @baa 0x00b6a4b0
IMPLEMENT_CLASS_AT(UParticleModuleBeamTarget, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleBeamModules.cpp", 1932);

// @baa 0x00b6a5c0
bool UParticleModuleBeamTarget::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_00b6b1e0 {
    int sub_00b6b1e0();
};

int sub_00b661b0(void);
// @baa 0x00b6b1e0
int C_00b6b1e0::sub_00b6b1e0(void)
{
    int param_1 = (int)this;

  sub_00b661b0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00b6b200 {
    int sub_00b6b200();
};

int sub_00b66210(void);
// @baa 0x00b6b200
int C_00b6b200::sub_00b6b200(void)
{
    int param_1 = (int)this;

  sub_00b66210();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00b6b2f0
IMPLEMENT_CLASS_AT(AEmitterCameraLensEffectBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleComponents.cpp", 18);

// @baa 0x00b6b350
void sub_00b6ad50();
// @baa 0x00b6b380
void sub_00b6b380(void) { sub_00b6ad50(); }

// @baa 0x00b6b590
// @baa 0x00b6b6a0
bool UParticleSpriteEmitter::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00b6b6e0
IMPLEMENT_CLASS_AT(UPhysXParticleSystemComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleComponents.cpp", 27);

// @baa 0x00b6b7f0
bool UPhysXParticleSystemComponent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}
