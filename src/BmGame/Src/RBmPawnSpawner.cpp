// RBmPawnSpawner.cpp (part 1 of 2): 24 functions
// Placed here by: callers 11, file 11, neighbours 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x015f7220
IMPLEMENT_CLASS_AT(ARPawnSpawnObject, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmPawnSpawner.cpp", 13);

// @baa 0x015f7550
IMPLEMENT_CLASS_AT(ARDeadBodyBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmPawnSpawner.cpp", 14);

// @baa 0x015f9f60
// @baa 0x015fa020
// @baa 0x015feb10
IMPLEMENT_CLASS_AT(URSeqAct_GetNumPawnsInVolume, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmPawnSpawner.cpp", 19);

// @baa 0x015feb30
IMPLEMENT_CLASS_AT(URBMIncapacitatedPawnCounter, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmPawnSpawner.cpp", 17);

// @baa 0x015feea0
IMPLEMENT_CLASS_AT(URBmPawnSpawner, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmPawnSpawner.cpp", 15);

// @baa 0x015feec0
IMPLEMENT_CLASS_AT(URBMPawnSpawnerController, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmPawnSpawner.cpp", 18);

// @baa 0x015feee0
IMPLEMENT_CLASS_AT(URBMWaveController, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmPawnSpawner.cpp", 16);

// @baa 0x015fef00
IMPLEMENT_CLASS_AT(URSeqAct_ChallengeAction, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmPawnSpawner.cpp", 20);

// @baa 0x015fef20
IMPLEMENT_CLASS_AT(URSeqAct_CombatChallengeSpawner, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmPawnSpawner.cpp", 21);

// @baa 0x015fef40
IMPLEMENT_CLASS_AT(URSeqAct_InfiniteCombatSpawner, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmPawnSpawner.cpp", 22);

// @baa 0x01602800
IMPLEMENT_CLASS_AT(ARPawnBossIvyBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmPawnSpawner.cpp", 23);

// @baa 0x01602810
// @baa 0x016028d0
// @baa 0x01602990
// @baa 0x01602a50
// @baa 0x01602b10
// @baa 0x01602bd0
// @baa 0x01602c90
// @baa 0x01602d50
// @baa 0x01602e10
// @baa 0x01602ed0
// @baa 0x01602fe0
bool ARPawnBossIvyBase::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}
