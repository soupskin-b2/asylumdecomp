// RBmCombatSequence.cpp: 16 functions
// Placed here by: callers 6, file 6, neighbours 4.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x01658460
IMPLEMENT_CLASS_AT(ARBMCombatPoint, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmCombatSequence.cpp", 15);

// @baa 0x01659dd0
IMPLEMENT_CLASS_AT(ARBMCombatDangerZone, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmCombatSequence.cpp", 11);

// @baa 0x01659e00
IMPLEMENT_CLASS_AT(ARBMCombatCollisionProxy, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmCombatSequence.cpp", 12);

// @baa 0x01659e30
IMPLEMENT_CLASS_AT(ARBMCombatDamageProxy, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmCombatSequence.cpp", 13);

// @baa 0x01659e60
IMPLEMENT_CLASS_AT(ARCombatArea, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmCombatSequence.cpp", 14);

// @baa 0x0165a340
// @baa 0x0165a400
// @baa 0x0165a4c0
// @baa 0x0165a580
// @baa 0x0165a640
// @baa 0x01664840
IMPLEMENT_CLASS_AT(URSeqAct_CombatProgress, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmCombatSequence.cpp", 16);

// @baa 0x01664860
IMPLEMENT_CLASS_AT(ARCombatMove_BatmanWeaponAttack, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBMCombatMove.cpp", 11);

// @baa 0x01664970
bool ARCombatMove_BatmanWeaponAttack::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x016649b0
IMPLEMENT_CLASS_AT(ARCombatMove_BatmanStrike, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBMCombatMove.cpp", 12);

// @baa 0x01664ac0
bool ARCombatMove_BatmanStrike::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01664b00
