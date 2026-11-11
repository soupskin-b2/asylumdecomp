// Launch_1270000.cpp: 14 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

int sub_014c7cb0(void);
int sub_014d7d50(...);
extern undefined4 g_026dde58;
// @baa 0x01277e70
int sub_01277e70(void)
{
  if (g_026dde58 == 0) {
    g_026dde58 = sub_014d7d50(L"UnrealEd");
    sub_014c7cb0();
  }
  return g_026dde58;
}

int sub_014c7e10(void);
int sub_014d7e10(...);
extern undefined4 g_026dde5c;
// @baa 0x01277ea0
int sub_01277ea0(void)
{
  if (g_026dde5c == 0) {
    g_026dde5c = sub_014d7e10(L"UnrealEd");
    sub_014c7e10();
  }
  return g_026dde5c;
}

int sub_014c75b0(void);
int sub_014d7bd0(...);
extern undefined4 g_026dde48;
// @baa 0x01277ed0
int sub_01277ed0(void)
{
  if (g_026dde48 == 0) {
    g_026dde48 = sub_014d7bd0(L"UnrealEd");
    sub_014c75b0();
  }
  return g_026dde48;
}

int sub_014c7930(...);
int sub_014c79f0(void);
extern undefined4 g_026dde50;
// @baa 0x01277f00
int sub_01277f00(void)
{
  if (g_026dde50 == 0) {
    g_026dde50 = sub_014c7930(L"UnrealEd");
    sub_014c79f0();
  }
  return g_026dde50;
}

int sub_014c7b50(void);
int sub_014d7c90(...);
extern undefined4 g_026dde54;
// @baa 0x01277f30
int sub_01277f30(void)
{
  if (g_026dde54 == 0) {
    g_026dde54 = sub_014d7c90(L"UnrealEd");
    sub_014c7b50();
  }
  return g_026dde54;
}

int sub_014c7f70(void);
int sub_014d7ed0(...);
extern undefined4 g_026dde60;
// @baa 0x01277f60
int sub_01277f60(void)
{
  if (g_026dde60 == 0) {
    g_026dde60 = sub_014d7ed0(L"UnrealEd");
    sub_014c7f70();
  }
  return g_026dde60;
}

// @baa 0x0127c3b0
IMPLEMENT_CLASS_AT(UUnrealEdEngine, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\UnrealEd.cpp", 75);

// @baa 0x0127c4c0
int UUnrealEdEngine::vf_000(void) { return 1; }

// @baa 0x0127c4d0
bool UUnrealEdEngine::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

extern char g_02217b34[];
struct C { C* sub_0127c510(void); };

// @baa 0x0127c510
C* C::sub_0127c510(void) { *(int*)((char*)this + 0) = (int)g_02217b34; return this; }

int sub_00ec5970(void);
// @baa 0x0127c5f0
void sub_0127c5f0(void)
{
  int iVar1;
  
  iVar1 = sub_00ec5970();
  if (*(int *)(*(int *)(iVar1 + 0x50) + 0x38) == 3) {
    iVar1 = sub_00ec5970();
                    
                    
    (**(code **)(**(int **)(iVar1 + 0x50) + 0x7c))();
    return;
  }
  return;
}

// @baa 0x0127ca70
IMPLEMENT_CLASS_AT(UUnrealEdOptions, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\UnrealEdEngine.cpp", 1048);

// @baa 0x0127cba0
bool UUnrealEdOptions::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0127cbe0
IMPLEMENT_CLASS_AT(UUnrealEdKeyBindings, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\UnrealEdEngine.cpp", 1049);
