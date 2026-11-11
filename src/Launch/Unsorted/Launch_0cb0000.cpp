// Launch_0cb0000.cpp: 22 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00cb0510
int UEngine::vf_180(int a0, int a1) { return 0; }

// @baa 0x00cb0790
int UServerCommandlet::vf_000(void) { return 1; }

// @baa 0x00cb07a0
bool UServerCommandlet::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00cb07e0
IMPLEMENT_CLASS_AT(USmokeTestCommandlet, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnEngine.cpp", 2233);

// @baa 0x00cb08f0
int USmokeTestCommandlet::vf_000(void) { return 1; }

// @baa 0x00cb0900
bool USmokeTestCommandlet::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

int sub_01503520(void);
int sub_01507310(...);
extern undefined4 g_0266e840;
// @baa 0x00cb0990
undefined4 sub_00cb0990(void)
{
  g_0266e840 = 1;
  sub_01507310(0);
  sub_01503520();
  return 0;
}

struct C { C* sub_00cb0a20(void); };

// @baa 0x00cb0a20
C* C::sub_00cb0a20(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_00cb0a30 { int sub_00cb0a30(void); };

// @baa 0x00cb0a30
int C_00cb0a30::sub_00cb0a30(void) { return *(int*)((char*)this + 0); }

// @baa 0x00cb0a40
bool sub_00cb0a40(int * param_1)
{
  return *param_1 != 0;
}

struct C_00cb0a50 { int a, b, c; C_00cb0a50(); };

// @baa 0x00cb0a50
C_00cb0a50::C_00cb0a50() : a(0), b(0), c(0) {}

struct C_00cb0a60 { int a, b, c; C_00cb0a60(); };

// @baa 0x00cb0a60
C_00cb0a60::C_00cb0a60() : a(0), b(0), c(0) {}

struct C_00cb0a70 { int a, b, c; C_00cb0a70(); };

// @baa 0x00cb0a70
C_00cb0a70::C_00cb0a70() : a(0), b(0), c(0) {}

struct C_00cb0a80 { int sub_00cb0a80(void); };

// @baa 0x00cb0a80
int C_00cb0a80::sub_00cb0a80(void) { return *(int*)((char*)this + 4); }

struct C_00cb0a90 { int sub_00cb0a90(void); };

// @baa 0x00cb0a90
int C_00cb0a90::sub_00cb0a90(void) { return *(int*)((char*)this + 4); }

struct C_00cb0aa0 { int a, b, c; C_00cb0aa0(); };

// @baa 0x00cb0aa0
C_00cb0aa0::C_00cb0aa0() : a(0), b(0), c(0) {}

struct C_00cb0ab0 { int sub_00cb0ab0(void); };

// @baa 0x00cb0ab0
int C_00cb0ab0::sub_00cb0ab0(void) { return *(int*)((char*)this + 4); }

struct C_00cb0ac0 { int sub_00cb0ac0(void); };

// @baa 0x00cb0ac0
int C_00cb0ac0::sub_00cb0ac0(void) { return *(int*)((char*)this + 4); }

struct C_00cb0ad0 { int a, b, c; C_00cb0ad0(); };

// @baa 0x00cb0ad0
C_00cb0ad0::C_00cb0ad0() : a(0), b(0), c(0) {}

struct C_00cb0ae0 { int sub_00cb0ae0(void); };

// @baa 0x00cb0ae0
int C_00cb0ae0::sub_00cb0ae0(void) { return *(int*)((char*)this + 4); }

struct C_00cb0af0 { int a, b, c; C_00cb0af0(); };

// @baa 0x00cb0af0
C_00cb0af0::C_00cb0af0() : a(0), b(0), c(0) {}

struct C_00cb0b00 { int sub_00cb0b00(void); };

// @baa 0x00cb0b00
int C_00cb0b00::sub_00cb0b00(void) { return *(int*)((char*)this + 4); }
