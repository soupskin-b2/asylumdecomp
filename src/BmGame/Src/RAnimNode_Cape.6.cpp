// RAnimNode_Cape.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

/* Kit gap (Array.h, issue #39): this build inlines TArray::operator() where the kit's plain-inline one is
 * called out of line; same body, forced inline. */
template<class T> struct TArrayAt_ : public TArray<T>
{
    using TArray<T>::ArrayNum;
    __forceinline T& At(INT i)
    {
#line 560 BAA_ARRAY_FILE
        check(i>=0 && (i<ArrayNum||(i==0 && ArrayNum==0)));
        return this->GetTypedData()[i];
    }
    __forceinline const T& At(INT i) const
    {
#line 566 BAA_ARRAY_FILE
        check(i>=0 && (i<ArrayNum||(i==0 && ArrayNum==0)));
        return this->GetTypedData()[i];
    }
};

enum { kInvalidLookupTableBoneIndex = -1 };
/* Unnamed in the kit: the skeleton bone index for a cape chain link. */
struct URAnimNode_Cape_ : public URAnimNode_Cape
{
    INT sub_015691f0(INT ChainIndex, INT LinkIndex);
};

// @baa 0x015691f0
INT URAnimNode_Cape_::sub_015691f0(INT ChainIndex, INT LinkIndex)
{
#line 482 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimNode_Cape.cpp"
    check(BoneIndexLookupTable.Num() > 0);
#line 485 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimNode_Cape.cpp"
    check(ChainIndex < (UINT)BoneIndexLookupTable.Num());
    const TArrayAt_<INT>& rLookupLinkIndex = (const TArrayAt_<INT>&)((const TArrayAt_<FLookupChainEntry>&)BoneIndexLookupTable).At(ChainIndex).LinkBoneIndex;
#line 487 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimNode_Cape.cpp"
    check(LinkIndex < (UINT)rLookupLinkIndex.Num());
    const INT boneIndex = rLookupLinkIndex.At(LinkIndex);
#line 491 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimNode_Cape.cpp"
    check(boneIndex != kInvalidLookupTableBoneIndex);
    return boneIndex;
}

#line 49 "candidate.cpp"
