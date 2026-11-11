// Launch_1730000.cpp: 9 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

int sub_017193c0(void);
int sub_01735640(...);
extern undefined4 g_026e2544;
// @baa 0x01735700
int sub_01735700(void)
{
  if (g_026e2544 == 0) {
    g_026e2544 = sub_01735640(L"BmGame");
    sub_017193c0();
  }
  return g_026e2544;
}

// @baa 0x0173a620
int UCacheDestructibleScalesCommandlet::vf_000(void) { return 1; }

// @baa 0x0173a630
bool UCacheDestructibleScalesCommandlet::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

extern char g_023d4a40[];
struct C { C* sub_0173a670(void); };

// @baa 0x0173a670
C* C::sub_0173a670(void) { *(int*)((char*)this + 0) = (int)g_023d4a40; return this; }

extern char g_022d3378[];
struct C_0173a680 { void sub_0173a680(void); };

// @baa 0x0173a680
void C_0173a680::sub_0173a680(void) { *(int*)((char*)this + 0) = (int)g_022d3378; }

struct C_0173a690 {
    undefined4 * sub_0173a690(byte);
};

int sub_0053dfa0(...);
// @baa 0x0173a690
undefined4 * C_0173a690::sub_0173a690(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_022d3378);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x0173a8a0
IMPLEMENT_CLASS_AT(URActorFactoryStaticMeshNoCL, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonEditor\\Src\\CommonEditorClasses.cpp", 5);

// @baa 0x0173a9b0
int URActorFactoryStaticMeshNoCL::vf_000(void) { return 1; }

// @baa 0x0173a9c0
bool URActorFactoryStaticMeshNoCL::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}
