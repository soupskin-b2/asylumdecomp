// CommonGameInteractionClasses.cpp (part 1 of 7): 29 functions
// Placed here by: neighbours 18, class 5, callers 3, file 3.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x0153b490
IMPLEMENT_CLASS_AT(URInteractionManager, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\CommonGameInteractionClasses.cpp", 6);

// @baa 0x0153b5a0
int URInteractionManager::vf_000(void) { return 1; }

// @baa 0x0153b5b0
bool URInteractionManager::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C { void* Data; int Num; int Max; void sub_01541820(); };

// @baa 0x01541820
void C::sub_01541820() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

// @baa 0x01542d00
IMPLEMENT_CLASS_AT(URInteractionComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\CommonGameInteractionClasses.cpp", 7);

int sub_005c7a20(void);
extern undefined * g_022e6578;
// @baa 0x01542d20
undefined4 * UObject::sub_01542d20(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_022e6578);
  return param_1;
}

// @baa 0x01542d40
IMPLEMENT_CLASS_AT(URInteractionClass, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\CommonGameInteractionClasses.cpp", 5);

// @baa 0x01542db0
// @baa 0x01542dd0
// @baa 0x01543b30
// @baa 0x01543b50
struct C_01545850 {
    int sub_01545850();
};

int sub_01543a80(void);
// @baa 0x01545850
int C_01545850::sub_01545850(void)
{
    int param_1 = (int)this;

  sub_01543a80();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x015458d0
IMPLEMENT_CLASS_AT(AREffectVolume, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\CommonGameEffectClasses.cpp", 5);

// @baa 0x01545990
void sub_015454c0();
// @baa 0x015459c0
void sub_015459c0(void) { sub_015454c0(); }

// @baa 0x01545a00
IMPLEMENT_CLASS_AT(ARRotateActor, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\CommonGameEffectClasses.cpp", 7);

// @baa 0x01545a60
// @baa 0x01545a90
IMPLEMENT_CLASS_AT(ARKActorSpawnable, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\CommonGamePropClasses.cpp", 5);

// @baa 0x01545b20
// @baa 0x01545b80
IMPLEMENT_CLASS_AT(ARBreakablePropStatic, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\CommonGamePropClasses.cpp", 4);

// @baa 0x01545c10
// @baa 0x01545c80
IMPLEMENT_CLASS_AT(ARPathNode, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\CommonGameRouterClasses.cpp", 6);

// @baa 0x01545d10
// @baa 0x01545ea0
IMPLEMENT_CLASS_AT(ARFlockActor, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\RFlock.cpp", 4);

// @baa 0x01545f00
struct C_01545f30 { C_01545f30* sub_01545f30(void); };

// @baa 0x01545f30
C_01545f30* C_01545f30::sub_01545f30(void) { return this; }

int sub_005c7a70(...);
int sub_0154a2f0(void);
// @baa 0x0154a370
undefined4 URInteractionManager::sub_0154a370(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0154a2f0();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x84);
  }
  return param_1;
}

// @baa 0x0154a890
// @baa 0x0154a8a0
