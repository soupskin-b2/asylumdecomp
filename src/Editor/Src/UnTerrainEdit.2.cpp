// UnTerrainEdit.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Native.h"

// @baa 0x00ff6480
/* The factory's class hides the Object category in the editor (NAME_Object is hardcoded name 0x97).
 * UClass::HideCategories is the kit's Native_f0 (UE3's UClass member at 0xf0, unnamed in the kit). */
void UTerrainMaterialFactoryNew::StaticConstructor()
{
    new((FNameArray&)GetClass()->Native_f0) FName(NAME_Object);
}

// @baa 0x00ff64b0
/* The factory's class hides the Object category in the editor (NAME_Object is hardcoded name 0x97).
 * UClass::HideCategories is the kit's Native_f0 (UE3's UClass member at 0xf0, unnamed in the kit). */
void UTerrainLayerSetupFactoryNew::StaticConstructor()
{
    new((FNameArray&)GetClass()->Native_f0) FName(NAME_Object);
}
