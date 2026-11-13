// UnPhysAssetTools.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

/* Kit gap (Array.h, issue #39): this build inlines TArray::operator() where the kit's plain-inline one is
 * called out of line; TArray's layout and operator() with the same body, forced inline. */
template<class T> class TArrayFI
{
public:
    FHeapAllocation AllocatorInstance;
    INT ArrayNum;
    INT ArrayMax;

    INT Num() const { return ArrayNum; }
    __forceinline T& operator()(INT i)
    {
#line 560 BAA_ARRAY_FILE
        check(i>=0 && (i<ArrayNum||(i==0 && ArrayNum==0)));
        return ((T*)AllocatorInstance.GetAllocation())[i];
    }
};

/* FSetElementId (UnSet.h): index of an element in a TSet, INDEX_NONE if none. */
class FSetElementId
{
public:
    FSetElementId() : Index(INDEX_NONE) {}
    operator INT() const { return Index; }
private:
    INT Index;
};

/* TMap<FName,INT> (UnMap.h): the kit only has the script mirror (FMap_Mirror), so this stand-in
 * declares what Set needs; TSet::Empty and TSet::Add are out of line (0x00617000, 0x005b6e00). */
struct FNameIndexMap
{
    /* TPairInitializer<const FName&, INT> */
    struct FPairInitializer
    {
        const FName& Key;
        INT Value;
        FPairInitializer(const FName& InKey, INT InValue) : Key(InKey), Value(InValue) {}
    };

    void Empty(INT ExpectedNumElements = 0);
    FSetElementId Add(const FPairInitializer& InElement, UBOOL* bIsAlreadyInSetPtr = NULL);

    /* TMap::Set (the returned value reference is unused here) */
    void Set(const FName& InKey, INT InValue)
    {
        Add(FPairInitializer(InKey, InValue));
    }
};

// @baa 0x00a2c950
void UPhysicsAsset::UpdateBodySetupIndexMap()
{
    TArrayFI<URB_BodySetup*>& BodySetup = (TArrayFI<URB_BodySetup*>&)this->BodySetup;
    FNameIndexMap& BodySetupIndexMap = (FNameIndexMap&)this->BodySetupIndexMap;

    // update BodySetupIndexMap
    BodySetupIndexMap.Empty();

    for (INT i = 0; i < this->BodySetup.Num(); i++)
    {
#line 606 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPhysAssetTools.cpp"
        check(BodySetup(i));
        BodySetupIndexMap.Set(BodySetup(i)->BoneName, i);
    }
}

#line 78 "candidate.cpp"
