// RStealthTakeDownStage.cpp: 16 functions
// Placed here by: callers 4, file 4.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x0165a700
IMPLEMENT_CLASS_AT(ARStealthTakeDownStage, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RStealthTakeDownStage.cpp", 9);

// @baa 0x0165a730
IMPLEMENT_CLASS_AT(ARStealthTakeDownStage_GrabOnFloor, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RStealthTakeDownStage.cpp", 10);

// @baa 0x0165a760
IMPLEMENT_CLASS_AT(ARStealthTakeDownStageFearBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RStealthTakeDownStage.cpp", 11);

// @baa 0x0165a790
IMPLEMENT_CLASS_AT(ARStealthTakeDownStage_RailingAttack, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RStealthTakeDownStage.cpp", 12);

// @baa 0x0165a7c0
// @baa 0x0165a880
// @baa 0x0165a940
// @baa 0x0165aa00

// @baa 0x0163d370

// @baa 0x0163d480
UBOOL ARStealthTakeDownStage::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x0163d490
UBOOL ARStealthTakeDownStage::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0163d4d0
UBOOL ARStealthTakeDownStage_GrabOnFloor::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x0163d4e0
UBOOL ARStealthTakeDownStageFearBase::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x0163d4f0
UBOOL ARStealthTakeDownStage_RailingAttack::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x01664d10

// @baa 0x01664e20
UBOOL ARStealthTakeDownStage_RailingAttack::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}
