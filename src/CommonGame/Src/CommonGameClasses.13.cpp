// CommonGameClasses.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Native.h"

// @baa 0x01512ce0
/* The new factory's class hides the Object category in the editor. UClass::HideCategories is the
 * kit's Native_f0 (UE3's UClass member at 0xf0, unnamed in the kit). */
void URScriptConversationFactoryNew::StaticConstructor()
{
    new((FNameArray&)GetClass()->Native_f0) FNameText(TEXT("Object"));
}

// @baa 0x0150f3b0
/* ARGameInfoBase::IsPhysXLevelToNotLoad(const FString& LevelName) (slot 0x394): a PhysX level is skipped unless
 * the engine reports PhysX hardware (UEngine 0x00cb0420). */
INT ARGameInfoBase::IsPhysXLevelToNotLoad(const FString& LevelName)
{
    if (!GEngine->sub_00cb0420() && IsPhysXLevel(LevelName))
    {
        return 1;
    }
    return 0;
}
