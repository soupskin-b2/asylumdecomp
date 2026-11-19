// RAnimNode_Cape.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

enum { kInvalidLookupTableBoneIndex = -1 };
/* Unnamed in the kit: the skeleton bone index for a cape chain link. */

// @baa 0x015691f0
INT URAnimNode_Cape::sub_015691f0(INT ChainIndex, INT LinkIndex)
{
#line 482 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimNode_Cape.cpp"
    check(BoneIndexLookupTable.Num() > 0);
#line 485 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimNode_Cape.cpp"
    check(ChainIndex < (UINT)BoneIndexLookupTable.Num());
    const TArray<INT>& rLookupLinkIndex = (const TArray<INT>&)((const TArray<FLookupChainEntry>&)BoneIndexLookupTable)(ChainIndex).LinkBoneIndex;
#line 487 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimNode_Cape.cpp"
    check(LinkIndex < (UINT)rLookupLinkIndex.Num());
    const INT boneIndex = rLookupLinkIndex(LinkIndex);
#line 491 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimNode_Cape.cpp"
    check(boneIndex != kInvalidLookupTableBoneIndex);
    return boneIndex;
}

#line 49 "candidate.cpp"
