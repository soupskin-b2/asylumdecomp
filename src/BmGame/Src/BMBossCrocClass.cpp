// BMBossCrocClass.cpp: 49 functions
// Placed here by: callers 10, file 10.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x016c6d60
IMPLEMENT_CLASS_AT(URGuardRemovalController, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BMBossCrocClass.cpp", 19);

// @baa 0x016c6d80
// @baa 0x016ca390
IMPLEMENT_CLASS_AT(ARPontoonEdgeBlockerBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BMBossCrocClass.cpp", 16);

// @baa 0x016ca540
IMPLEMENT_CLASS_AT(ARCrocLineLauncherBlockingVolume, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BMBossCrocClass.cpp", 24);

// @baa 0x016cab70
IMPLEMENT_CLASS_AT(ARFracturablePontoonPropBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BMBossCrocClass.cpp", 21);

// @baa 0x016caba0
IMPLEMENT_CLASS_AT(ARPawnBossCrocBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BMBossCrocClass.cpp", 15);

// @baa 0x016cac00
IMPLEMENT_CLASS_AT(ARBatarangTarget, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BMBossCrocClass.cpp", 23);

// @baa 0x016cac90
IMPLEMENT_CLASS_AT(ARPontoonGateBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BMBossCrocClass.cpp", 22);

// @baa 0x016cacf0
IMPLEMENT_CLASS_AT(ARSpecialMoveInstance_HoleGrab, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BMBossCrocClass.cpp", 17);

// @baa 0x016cad00
// @baa 0x016cadc0
// @baa 0x016cae80
// @baa 0x016caf40
// @baa 0x016cb000
// @baa 0x016cb0c0
// @baa 0x016cb180
// @baa 0x016cc920
IMPLEMENT_CLASS_AT(URSeqAct_CrocRelativeAnimCamera, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BMBossCrocClass.cpp", 20);

// @baa 0x016cc940
IMPLEMENT_CLASS_AT(URSeqAct_CrocTeleportFinalAttackRefPoints, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BMBossCrocClass.cpp", 18);

// @baa 0x016cc9a0
// @baa 0x016cca60

// @baa 0x016ab840

// @baa 0x016ab950
int ARPawnBossCrocBase::vf_000(void) { return 1; }

// @baa 0x016ab960
bool ARPawnBossCrocBase::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x016ab9a0

// @baa 0x016abab0
int ARPontoonEdgeBlockerBase::vf_000(void) { return 1; }

// @baa 0x016abac0
bool ARPontoonEdgeBlockerBase::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x016abb00

// @baa 0x016abc10
int ARSpecialMoveInstance_HoleGrab::vf_000(void) { return 1; }

// @baa 0x016abc20
bool ARSpecialMoveInstance_HoleGrab::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x016abc60

// @baa 0x016abd70
int URSeqAct_CrocTeleportFinalAttackRefPoints::vf_000(void) { return 1; }

// @baa 0x016abd80
bool URSeqAct_CrocTeleportFinalAttackRefPoints::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x016abdc0

// @baa 0x016abed0
int URGuardRemovalController::vf_000(void) { return 1; }

// @baa 0x016abee0
bool URGuardRemovalController::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x016abf20

// @baa 0x016ac030
int URSeqAct_CrocRelativeAnimCamera::vf_000(void) { return 1; }

// @baa 0x016ac040
bool URSeqAct_CrocRelativeAnimCamera::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x016ac080

// @baa 0x016ac190
int ARFracturablePontoonPropBase::vf_000(void) { return 1; }

// @baa 0x016ac1a0
bool ARFracturablePontoonPropBase::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x016ac1e0

// @baa 0x016ac2f0
int ARPontoonGateBase::vf_000(void) { return 1; }

// @baa 0x016ac300
bool ARPontoonGateBase::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x016ac340

// @baa 0x016ac450
int ARBatarangTarget::vf_000(void) { return 1; }

// @baa 0x016ac460
bool ARBatarangTarget::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x016ac4a0

int sub_005c7a20(void);
extern undefined * g_02397268;
// @baa 0x016cc2a0
undefined4 * UObject::sub_016cc2a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02397268);
  return param_1;
}
