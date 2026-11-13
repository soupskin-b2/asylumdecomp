// RForceField.cpp (part 1 of 3): 25 functions
// Placed here by: class 12, neighbours 7, file 4, callers 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x016cdd90
IMPLEMENT_CLASS_AT(URForceField, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RForceField.cpp", 10);

// @baa 0x016cddf0
extern undefined4 g_026b21a0;
// @baa 0x016d2930
undefined4 sub_016d2930(void)
{
  g_026b21a0 = 1;
  return 4;
}

extern char g_023a0b7c[];
// @baa 0x016d2940
int sub_016d2940(void) { return (int)g_023a0b7c; }

extern char g_023a2b4c[];
struct C { C* sub_016d2950(void); };

// @baa 0x016d2950
C* C::sub_016d2950(void) { *(int*)((char*)this + 0) = (int)g_023a2b4c; return this; }

extern char g_01ebb554[];
// @baa 0x016d2960
void URForceField::sub_016d2960(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

int sub_0053dfa0(...);
// @baa 0x016d2970
undefined4 * URForceField::sub_016d2970(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x01719100
// @baa 0x01719210
int URForceField::vf_000(void) { return 1; }

// @baa 0x01719220
bool URForceField::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01719260
IMPLEMENT_CLASS_AT(URForceFieldConfig, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RForceField.cpp", 11);

// @baa 0x01719370
int URForceFieldConfig::vf_000(void) { return 1; }

// @baa 0x01719380
bool URForceFieldConfig::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x017193c0
IMPLEMENT_CLASS_AT(URForceFieldConfigFactoryNew, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RForceField.cpp", 12);

// @baa 0x017194d0
int URForceFieldConfigFactoryNew::vf_000(void) { return 1; }

// @baa 0x017194e0
bool URForceFieldConfigFactoryNew::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01719560
UBOOL URForceField::GetIsInitialised() { return *(INT*)((BYTE*)this+0x40) != 0; }

extern TCHAR g_023c78b4[];
struct URForceField_ : public URForceField {
    void sub_01719570();
};

// @baa 0x01719570
void URForceField_::sub_01719570()
{
    if (GetIsInitialised()) {
        appFailAssert("!GetIsInitialised()",
            "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RForceField.cpp",
            0x18, g_023c78b4);
    }
}

// @baa 0x0171a360
// @baa 0x0171b220
struct C_0172d740 { C_0172d740* sub_0172d740(void); };

// @baa 0x0172d740
C_0172d740* C_0172d740::sub_0172d740(void) { return this; }

// @baa 0x0172d7b0
// @baa 0x017347e0
// @baa 0x01734e90
// @baa 0x01735640
