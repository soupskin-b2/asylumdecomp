// RBMCombatMove.cpp: 13 functions
// Placed here by: callers 5, file 5.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x01659e90
IMPLEMENT_CLASS_AT(ARCombatMove, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBMCombatMove.cpp", 9);

// @baa 0x01659ec0
IMPLEMENT_CLASS_AT(ARCombatMove_BatmanAttack, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBMCombatMove.cpp", 10);

// @baa 0x01659ef0
IMPLEMENT_CLASS_AT(ARCombatMove_BatmanStrike, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBMCombatMove.cpp", 12);

// @baa 0x01659f20
IMPLEMENT_CLASS_AT(ARCombatMove_BatmanWeaponAttack, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBMCombatMove.cpp", 11);

// @baa 0x01659f50
IMPLEMENT_CLASS_AT(ARCombatMove_BatmanCounter, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBMCombatMove.cpp", 13);

// @baa 0x01659f80
// @baa 0x0165a040
// @baa 0x0165a100
// @baa 0x0165a1c0
// @baa 0x0165a280

// @baa 0x0163c460

// @baa 0x01666470

// @baa 0x01666580
bool ARCombatMove_BatmanCounter::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}
