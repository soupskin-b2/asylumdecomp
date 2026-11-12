// RSmashableProp.cpp: 22 functions
// Placed here by: class 9, neighbours 6, callers 3, file 3.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x0166add0
IMPLEMENT_CLASS_AT(ARSmashableProp, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RSmashableProp.cpp", 17);

// @baa 0x0166aee0
int ARSmashableProp::vf_000(void) { return 1; }

// @baa 0x0166aef0
bool ARSmashableProp::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0166af30
IMPLEMENT_CLASS_AT(URSmashablePropConfig, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RSmashableProp.cpp", 18);

// @baa 0x0166b040
int URSmashablePropConfig::vf_000(void) { return 1; }

// @baa 0x0166b050
bool URSmashablePropConfig::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0166b090
IMPLEMENT_CLASS_AT(URSmashablePropConfigFactoryNew, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RSmashableProp.cpp", 19);

// @baa 0x0166b1a0
int URSmashablePropConfigFactoryNew::vf_000(void) { return 1; }

// @baa 0x0166b1b0
bool URSmashablePropConfigFactoryNew::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01672810
undefined4 ARSmashableProp::sub_01672810(void)
{
    int param_1 = (int)this;

  if ((*(int *)(param_1 + 0x2a4) != 0) && (0 < *(int *)(*(int *)(param_1 + 0x2a4) + 0x5c))) {
    return 1;
  }
  return 0;
}

// @baa 0x01672830
undefined4 ARSmashableProp::sub_01672830(void)
{
    int param_1 = (int)this;

  if ((*(int *)(param_1 + 0x2a4) != 0) && (0 < *(int *)(*(int *)(param_1 + 0x2a4) + 0x5c))) {
    return 1;
  }
  return 0;
}

struct C_view {
    int sub_0166b6a0();
    int sub_0166b820();
};

// @baa 0x01672850
void ARSmashableProp::SetupProp(class URSmashablePropConfig* propSetupData)
{
    PropData = propSetupData;
    ((C_view *)(this))->sub_0166b6a0();
    ((C_view *)(this))->sub_0166b820();
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C { void* Data; int Num; int Max; void sub_01676e40(); };

// @baa 0x01676e40
void C::sub_01676e40() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

// @baa 0x016807f0
// @baa 0x01681fe0
// @baa 0x01682740
// @baa 0x01682d60
// @baa 0x01682de0
// @baa 0x01683030
// @baa 0x01683810
// @baa 0x016843a0

// @baa 0x016807b0
