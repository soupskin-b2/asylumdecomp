// Engine_09c0000.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Cast.h"
#include "ue3/Array.h"

/* Unnamed in the kit: UE3's AWorldInfo* ULevel::GetWorldInfo() const. */
struct ULevel_ : public ULevel
{
    AWorldInfo* sub_007de2b0();
};

// @baa 0x009c9950
/* UE3's AWorldInfo::GetMapInfo(): the persistent level's MyMapInfo when streaming levels are in use. */
UMapInfo* AWorldInfo::sub_009c9950()
{
    if (StreamingLevels.Num() > 0 && StreamingLevels(0)->LoadedLevel && Cast<ULevelStreamingPersistent>(StreamingLevels(0)))
    {
        return ((ULevel_*)StreamingLevels(0)->LoadedLevel)->sub_007de2b0()->MyMapInfo;
    }
    return MyMapInfo;
}

// @baa 0x009c9a20
/* UE3's AWorldInfo::SetMapInfo(UMapInfo* NewMapInfo): set it on the persistent level's world info when streaming
 * levels are in use. */
void AWorldInfo::sub_009c9a20(UMapInfo* NewMapInfo)
{
    AWorldInfo* CurrentWorldInfo = this;
    if (StreamingLevels.Num() > 0 && StreamingLevels(0)->LoadedLevel && Cast<ULevelStreamingPersistent>(StreamingLevels(0)))
    {
        CurrentWorldInfo = ((ULevel_*)StreamingLevels(0)->LoadedLevel)->sub_007de2b0();
    }
    CurrentWorldInfo->MyMapInfo = NewMapInfo;
}
