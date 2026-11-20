// RBMBehaviour_Combat.cpp: 34 functions
// Placed here by: callers 7, file 7.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x015f74b0
IMPLEMENT_CLASS_AT(ARBMCombatManager, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBMBehaviour_Combat.cpp", 15);

// @baa 0x015f9250
// @baa 0x015fec60
IMPLEMENT_CLASS_AT(URBMBehaviour_Combat, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBMBehaviour_Combat.cpp", 16);

// @baa 0x015fec80
IMPLEMENT_CLASS_AT(URBMBehaviour_CombatAI, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBMBehaviour_Combat.cpp", 17);

// @baa 0x015feca0
IMPLEMENT_CLASS_AT(URBMBehaviour_CombatHeavyObject, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBMBehaviour_Combat.cpp", 18);

// @baa 0x015fecc0
IMPLEMENT_CLASS_AT(URBMBehaviour_CombatRifle, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBMBehaviour_Combat.cpp", 19);

// @baa 0x015fece0
IMPLEMENT_CLASS_AT(URBMBehaviour_CombatStunStick, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBMBehaviour_Combat.cpp", 20);

// @baa 0x015fed00
IMPLEMENT_CLASS_AT(URBMBehaviour_Venom, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBMBehaviour_Combat.cpp", 21);

// @baa 0x01600890
// @baa 0x01600950
// @baa 0x01600a10
// @baa 0x01600ad0
// @baa 0x01600b90
// @baa 0x01600c50

// @baa 0x015dd090

int sub_005c7a20(void);
extern undefined * g_0233a7f8;
struct C_015fab20 { undefined4 * sub_015fab20(void); };
// @baa 0x015fab20
undefined4 * C_015fab20::sub_015fab20(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0233a7f8);
  return param_1;
}

extern undefined * g_0233a9e8;
struct C_015fabf0 { undefined4 * sub_015fabf0(void); };
// @baa 0x015fabf0
undefined4 * C_015fabf0::sub_015fabf0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0233a9e8);
  return param_1;
}

extern undefined * g_0233abd8;
struct C_015fac40 { undefined4 * sub_015fac40(void); };
// @baa 0x015fac40
undefined4 * C_015fac40::sub_015fac40(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0233abd8);
  return param_1;
}

extern undefined * g_0233adc8;
struct C_015facf0 { undefined4 * sub_015facf0(void); };
// @baa 0x015facf0
undefined4 * C_015facf0::sub_015facf0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0233adc8);
  return param_1;
}

extern undefined * g_0233afb8;
struct C_015fada0 { undefined4 * sub_015fada0(void); };
// @baa 0x015fada0
undefined4 * C_015fada0::sub_015fada0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0233afb8);
  return param_1;
}

extern undefined * g_0233b1a8;
struct C_015fae50 { undefined4 * sub_015fae50(void); };
// @baa 0x015fae50
undefined4 * C_015fae50::sub_015fae50(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0233b1a8);
  return param_1;
}

// @baa 0x01607bb0

// @baa 0x01607cc0
UBOOL URBMBehaviour_Combat::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0160ce80

// @baa 0x0160cf90
UBOOL URBMBehaviour_CombatAI::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0160cfd0

// @baa 0x0160d0e0
UBOOL URBMBehaviour_Venom::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0160d6a0

// @baa 0x0160d7b0
UBOOL URBMBehaviour_CombatHeavyObject::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0160d7f0

// @baa 0x0160d900
UBOOL URBMBehaviour_CombatRifle::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0160d940

// @baa 0x0160da50
UBOOL URBMBehaviour_CombatStunStick::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x015ed580
/* With no combat areas every location counts; otherwise it has to be inside one of them. */
UBOOL ARBMCombatManager::IsLocationInCombatArea(FVector TestLocation)
{
    if (CombatAreas.Num() == 0)
    {
        return TRUE;
    }
    for (INT i = 0; i < CombatAreas.Num(); i++)
    {
        if (CombatAreas(i)->IsLocationInArea(TestLocation))
        {
            return TRUE;
        }
    }
    return FALSE;
}
