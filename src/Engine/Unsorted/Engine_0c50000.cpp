// Engine_0c50000.cpp: 89 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C {
    int sub_00c50be0(int);
};

// @baa 0x00c50be0
int C::sub_00c50be0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00c50bf0 {
    int sub_00c50bf0(int);
};

// @baa 0x00c50bf0
int C_00c50bf0::sub_00c50bf0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_00c50c00 {
    int sub_00c50c00(int);
};

// @baa 0x00c50c00
int C_00c50c00::sub_00c50c00(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x44;
}

// @baa 0x00c50c20
void __stdcall sub_00c50c20(int a0, int a1) {  }

struct C_00c50c30 {
    int sub_00c50c30(int);
};

// @baa 0x00c50c30
int C_00c50c30::sub_00c50c30(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x104 + *param_1;
}

// @baa 0x00c50c40
void __stdcall sub_00c50c40(int a0, int a1) {  }

struct C_00c50c50 {
    int sub_00c50c50(int);
};

// @baa 0x00c50c50
int C_00c50c50::sub_00c50c50(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x6c + *param_1;
}

struct C_00c50c60 {
    int sub_00c50c60(int);
};

// @baa 0x00c50c60
int C_00c50c60::sub_00c50c60(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

// @baa 0x00c50c80
void __stdcall sub_00c50c80(int a0, int a1) {  }

struct C_00c50c90 {
    int sub_00c50c90(int);
};

// @baa 0x00c50c90
int C_00c50c90::sub_00c50c90(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

// @baa 0x00c50cb0
void __stdcall sub_00c50cb0(int a0, int a1) {  }

struct C_00c50cc0 {
    int sub_00c50cc0(int);
};

// @baa 0x00c50cc0
int C_00c50cc0::sub_00c50cc0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x30 + *param_1;
}

struct C_00c50cd0 {
    int sub_00c50cd0(int);
};

// @baa 0x00c50cd0
int C_00c50cd0::sub_00c50cd0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_00c50ce0 {
    int sub_00c50ce0(int);
};

// @baa 0x00c50ce0
int C_00c50ce0::sub_00c50ce0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x24;
}

struct C_00c50cf0 {
    int sub_00c50cf0(int);
};

// @baa 0x00c50cf0
int C_00c50cf0::sub_00c50cf0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x00c50d00
void __stdcall sub_00c50d00(int a0, int a1) {  }

// @baa 0x00c50d10
void __stdcall sub_00c50d10(int a0, int a1) {  }

struct E { BYTE Bytes[16]; };

struct S {
    TArray<E> Items; // 0x00
    E* sub_00c50d20(INT Index);
};

// @baa 0x00c50d20
E* S::sub_00c50d20(INT Index)
{
    return &Items(Index);
}

struct C_00c50d70 { int sub_00c50d70(void); };

// @baa 0x00c50d70
int C_00c50d70::sub_00c50d70(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00c50d80 { int sub_00c50d80(void); };

// @baa 0x00c50d80
int C_00c50d80::sub_00c50d80(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00c50d90 { int sub_00c50d90(void); };

// @baa 0x00c50d90
int C_00c50d90::sub_00c50d90(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

int sub_005413d0(...);
// @baa 0x00c50dd0
void sub_00c50dd0(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_00c50de0 {
    int sub_00c50de0(int);
};

// @baa 0x00c50de0
int C_00c50de0::sub_00c50de0(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x10 + *param_1;
}

struct C_00c50df0 {
    int sub_00c50df0(int);
};

// @baa 0x00c50df0
int C_00c50df0::sub_00c50df0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x00c50e30
void sub_00c50e30(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_00c50e40 {
    int sub_00c50e40(int);
};

// @baa 0x00c50e40
int C_00c50e40::sub_00c50e40(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x10 + *param_1;
}

struct C_00c50e50 {
    int sub_00c50e50(int);
};

// @baa 0x00c50e50
int C_00c50e50::sub_00c50e50(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x00c50e90
void sub_00c50e90(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_00c50ea0 {
    int sub_00c50ea0(int);
};

// @baa 0x00c50ea0
int C_00c50ea0::sub_00c50ea0(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x10 + *param_1;
}

struct C_00c50eb0 {
    int sub_00c50eb0(int);
};

// @baa 0x00c50eb0
int C_00c50eb0::sub_00c50eb0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00c50ec0 {
    int sub_00c50ec0();
};

// @baa 0x00c50ec0
int C_00c50ec0::sub_00c50ec0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00c50ee0 {
    int sub_00c50ee0();
};

// @baa 0x00c50ee0
int C_00c50ee0::sub_00c50ee0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00c50f00 {
    int sub_00c50f00();
};

// @baa 0x00c50f00
int C_00c50f00::sub_00c50f00(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00c50f20 {
    int sub_00c50f20();
};

// @baa 0x00c50f20
int C_00c50f20::sub_00c50f20(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00c50f40 {
    int sub_00c50f40();
};

// @baa 0x00c50f40
int C_00c50f40::sub_00c50f40(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00c50f50 {
    int sub_00c50f50();
};

// @baa 0x00c50f50
int C_00c50f50::sub_00c50f50(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00c50f70 {
    int sub_00c50f70();
};

// @baa 0x00c50f70
int C_00c50f70::sub_00c50f70(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00c50f80 {
    int sub_00c50f80();
};

// @baa 0x00c50f80
int C_00c50f80::sub_00c50f80(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00c50fa0 {
    int sub_00c50fa0();
};

// @baa 0x00c50fa0
int C_00c50fa0::sub_00c50fa0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

// @baa 0x00c510f0
void sub_00c510f0(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

// @baa 0x00c51110
void sub_00c51110(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

// @baa 0x00c51130
void sub_00c51130(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

int sub_00c51210(void);
// @baa 0x00c51270
bool sub_00c51270(void)
{
  int iVar1;
  
  iVar1 = sub_00c51210();
  return iVar1 != 0;
}

struct C_00c51280 {
    INT Unk00;
    INT Unk04;
    INT Unk08;
    C_00c51280& sub_00c51280(int Arg);
};

// @baa 0x00c51280
C_00c51280& C_00c51280::sub_00c51280(int Arg)
{
    Unk00 = 0;
    Unk04 = 0;
    Unk08 = 0;
    return *this;
}

int sub_005c7a20(void);
extern undefined * g_02057af8;
// @baa 0x00c512a0
undefined4 * UObject::sub_00c512a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02057af8);
  return param_1;
}

// @baa 0x00c512c0
IMPLEMENT_CLASS_AT(UActorFactoryAmbientSound, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActorFactory.cpp", 47);

// @baa 0x00c51360
IMPLEMENT_CLASS_AT(UActorFactoryAmbientSoundMovable, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActorFactory.cpp", 48);

// @baa 0x00c51400
IMPLEMENT_CLASS_AT(UActorFactoryAmbientSoundSimple, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActorFactory.cpp", 49);

// @baa 0x00c514a0
IMPLEMENT_CLASS_AT(UActorFactoryArchetype, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActorFactory.cpp", 52);

// @baa 0x00c51540
IMPLEMENT_CLASS_AT(UActorFactoryCoverLink, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActorFactory.cpp", 51);

// @baa 0x00c515a0
// @baa 0x00c515c0
IMPLEMENT_CLASS_AT(UActorFactoryDynamicSM, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActorFactory.cpp", 46);

// @baa 0x00c51680
IMPLEMENT_CLASS_AT(UActorFactoryMover, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActorFactory.cpp", 40);

// @baa 0x00c51720
IMPLEMENT_CLASS_AT(UActorFactoryRigidBody, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActorFactory.cpp", 39);

// @baa 0x00c517d0
IMPLEMENT_CLASS_AT(UActorFactoryEmitter, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActorFactory.cpp", 41);

// @baa 0x00c51870
IMPLEMENT_CLASS_AT(UActorFactoryFracturedStaticMesh, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActorFactory.cpp", 30);

// @baa 0x00c51910
IMPLEMENT_CLASS_AT(UActorFactoryLensFlare, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActorFactory.cpp", 53);

// @baa 0x00c519b0
IMPLEMENT_CLASS_AT(UActorFactoryLight, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActorFactory.cpp", 34);

// @baa 0x00c51a50
IMPLEMENT_CLASS_AT(UActorFactoryPathNode, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActorFactory.cpp", 37);

// @baa 0x00c51af0
IMPLEMENT_CLASS_AT(UActorFactoryPhysicsAsset, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActorFactory.cpp", 38);

// @baa 0x00c51b90
IMPLEMENT_CLASS_AT(UActorFactoryPlayerStart, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActorFactory.cpp", 45);

// @baa 0x00c51bf0
// @baa 0x00c51c10
IMPLEMENT_CLASS_AT(UActorFactorySkeletalMesh, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActorFactory.cpp", 44);

// @baa 0x00c51cd0
IMPLEMENT_CLASS_AT(UActorFactorySpotLight, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActorFactory.cpp", 35);

// @baa 0x00c51d70
IMPLEMENT_CLASS_AT(UActorFactoryStaticMesh, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActorFactory.cpp", 29);

// @baa 0x00c51e10
IMPLEMENT_CLASS_AT(UActorFactoryTrigger, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActorFactory.cpp", 36);

struct C_00c57300 {
    void sub_00c57300(int);
};

int sub_0053df70(...);
// @baa 0x00c57300
void C_00c57300::sub_00c57300(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 0x104,8);
      *param_1 = iVar1;
    }
  }
  return;
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_00c573a0 { void* Data; int Num; int Max; void sub_00c573a0(); };

// @baa 0x00c573a0
void C_00c573a0::sub_00c573a0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00c57a00 {
    int sub_00c57a00(int);
};

// @baa 0x00c57a00
int C_00c57a00::sub_00c57a00(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00c57a10 {
    int sub_00c57a10();
};

// @baa 0x00c57a10
int C_00c57a10::sub_00c57a10(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00c57a20 {
    int sub_00c57a20();
};

// @baa 0x00c57a20
int C_00c57a20::sub_00c57a20(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00c57a30 {
    int sub_00c57a30();
};

// @baa 0x00c57a30
int C_00c57a30::sub_00c57a30(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

