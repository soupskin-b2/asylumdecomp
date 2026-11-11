// UnEditor.cpp: 37 functions
// Placed here by: neighbours 30, file 4, callers 3.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00f4cec0
void UEditorEngine::vf_174(void)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x5e0) = *(uint *)(param_1 + 0x5e0) | 4;
  return;
}

// @baa 0x00f4ced0
void UEditorEngine::vf_188(void) {  }

// @baa 0x00f4cee0
void UEditorEngine::vf_18c(void) {  }

extern undefined4 g_026b62b8;
// @baa 0x00f4cef0
undefined4 sub_00f4cef0(undefined4 param_1)
{
  undefined4 uVar1;
  
  uVar1 = g_026b62b8;
  g_026b62b8 = param_1;
  return uVar1;
}

int sub_006311e0(...);
extern undefined4 g_02153c64;
// @baa 0x00f4cf00
void sub_00f4cf00(undefined4 param_1)
{
  sub_006311e0("GIsPlayInEditorWorld",
               "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEditor.cpp"
               ,0x64e,&g_02153c64);
  g_026b62b8 = param_1;
  return;
}

// @baa 0x00f51b60
IMPLEMENT_CLASS_AT(UEditorUserSettings, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEditor.cpp", 78);

// @baa 0x00f51b80
IMPLEMENT_CLASS_AT(ULightingChannelsObject, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEditor.cpp", 77);

int sub_0053dfa0(...);
extern undefined4 g_02158e54;
// @baa 0x00f51ba0
undefined4 * ULightingChannelsObject::sub_00f51ba0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_02158e54);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00f51bc0
undefined4 * ULightingChannelsObject::sub_00f51bc0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_02158e54);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C {
    void sub_00f51be0(int *);
};

// @baa 0x00f51be0
void C::sub_00f51be0(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1 + 0x10;
  param_2[1] = 0;
  return;
}

struct C_00f51c00 {
    void sub_00f51c00(int *);
};

// @baa 0x00f51c00
void C_00f51c00::sub_00f51c00(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1 + 0x3c;
  param_2[1] = 0;
  return;
}

int sub_00c38ac0(void);
// @baa 0x00f51c20
undefined4 UObject::sub_00f51c20(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00c38ac0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00f51c40
undefined4 UObject::sub_00f51c40(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00c38ac0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00f51c60
undefined4 UObject::sub_00f51c60(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00c38ac0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern char g_02158f10[];
struct C_00f51c80 { C_00f51c80* sub_00f51c80(void); };

// @baa 0x00f51c80
C_00f51c80* C_00f51c80::sub_00f51c80(void) { *(int*)((char*)this + 0) = (int)g_02158f10; return this; }

struct S {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00f51c90(INT Index);
};

// @baa 0x00f51c90
DWORD* S::sub_00f51c90(INT Index)
{
    return &Items(Index);
}

struct S_00f51ce0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00f51ce0(INT Index);
};

// @baa 0x00f51ce0
DWORD* S_00f51ce0::sub_00f51ce0(INT Index)
{
    return &Items(Index);
}

struct C_00f51d30 {
    int sub_00f51d30(int);
};

// @baa 0x00f51d30
int C_00f51d30::sub_00f51d30(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_00f51d40 {
    int sub_00f51d40(int);
};

// @baa 0x00f51d40
int C_00f51d40::sub_00f51d40(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_00f51d50 {
    int sub_00f51d50(int);
};

// @baa 0x00f51d50
int C_00f51d50::sub_00f51d50(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_00f51d60 {
    int sub_00f51d60(int);
};

// @baa 0x00f51d60
int C_00f51d60::sub_00f51d60(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct E { BYTE Bytes[12]; };

struct S_00f51d70 {
    TArray<E> Items; // 0x00
    E* sub_00f51d70(INT Index);
};

// @baa 0x00f51d70
E* S_00f51d70::sub_00f51d70(INT Index)
{
    return &Items(Index);
}

struct E_00f51dc0 { BYTE Bytes[40]; };

struct S_00f51dc0 {
    TArray<E_00f51dc0> Items; // 0x00
    E_00f51dc0* sub_00f51dc0(INT Index);
};

// @baa 0x00f51dc0
E_00f51dc0* S_00f51dc0::sub_00f51dc0(INT Index)
{
    return &Items(Index);
}

struct S_00f51e10 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00f51e10(INT Index);
};

// @baa 0x00f51e10
DWORD* S_00f51e10::sub_00f51e10(INT Index)
{
    return &Items(Index);
}

struct S_00f51e60 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00f51e60(INT Index);
};

// @baa 0x00f51e60
DWORD* S_00f51e60::sub_00f51e60(INT Index)
{
    return &Items(Index);
}

struct S_00f51eb0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00f51eb0(INT Index);
};

// @baa 0x00f51eb0
DWORD* S_00f51eb0::sub_00f51eb0(INT Index)
{
    return &Items(Index);
}

// @baa 0x00f51f00
IMPLEMENT_CLASS_AT(UTerrainHeightMapFactoryTextT3D, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFactTerrain.cpp", 1558);

// @baa 0x00f52010
bool UTerrainHeightMapFactoryTextT3D::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00f52050
IMPLEMENT_CLASS_AT(UTerrainHeightMapFactoryG16BMP, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFactTerrain.cpp", 1813);

// @baa 0x00f52160
bool UTerrainHeightMapFactoryG16BMP::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00f521a0
// @baa 0x00f52260
extern char g_02158f20[];
struct C_00f52390 { C_00f52390* sub_00f52390(void); };

// @baa 0x00f52390
C_00f52390* C_00f52390::sub_00f52390(void) { *(int*)((char*)this + 0) = (int)g_02158f20; return this; }

extern char g_02158f70[];
struct C_00f557a0 { C_00f557a0* sub_00f557a0(void); };

// @baa 0x00f557a0
C_00f557a0* C_00f557a0::sub_00f557a0(void) { *(int*)((char*)this + 0) = (int)g_02158f70; return this; }

// @baa 0x00f684c0
IMPLEMENT_CLASS_AT(UEditorEngine, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEditor.cpp", 76);

int sub_00f683d0(void);
// @baa 0x00f684d0
undefined4 UEditorEngine::sub_00f684d0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00f683d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00f684f0
