// RBmBossScarecrowClass.cpp: 19 functions
// Placed here by: callers 4, file 4.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x016cabd0
IMPLEMENT_CLASS_AT(ARPawnBossScarecrowBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmBossScarecrowClass.cpp", 21);

// @baa 0x016cac30
IMPLEMENT_CLASS_AT(ARBMBossManager, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmBossScarecrowClass.cpp", 19);

// @baa 0x016cb3c0
// @baa 0x016cb480
// @baa 0x016cc960
IMPLEMENT_CLASS_AT(URSeqAct_SetScarecrowCamera, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmBossScarecrowClass.cpp", 22);

// @baa 0x016cc980
IMPLEMENT_CLASS_AT(URSeqAct_SetScarecrowPositionOnPath, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmBossScarecrowClass.cpp", 23);

// @baa 0x016ccb20
// @baa 0x016ccbe0

// @baa 0x016ad150

// @baa 0x016ad260
UBOOL ARBMBossManager::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x016ad270
UBOOL ARBMBossManager::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x016ad2b0

// @baa 0x016ad3c0
UBOOL ARPawnBossScarecrowBase::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x016ad3d0
UBOOL ARPawnBossScarecrowBase::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x016ad410

// @baa 0x016ad520
UBOOL URSeqAct_SetScarecrowCamera::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x016ad530
UBOOL URSeqAct_SetScarecrowCamera::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x016ad570

int sub_005c7a20(void);
extern undefined * g_023975b0;
struct C_016cc420 { undefined4 * sub_016cc420(void); };
// @baa 0x016cc420
undefined4 * C_016cc420::sub_016cc420(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_023975b0);
  return param_1;
}
