// UnActorComponent.cpp: 9 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

/* TArray<UActorComponent*> members the exe keeps out of line */
struct FActorComponentArray : public TArray<UActorComponent*> {
    void sub_006bc930(INT Index, INT Count);                                  // Remove
    void Remove(INT Index, INT Count = 1) { sub_006bc930(Index, Count); }
    template<class SearchType> UBOOL FindItemByClass(SearchType** Item = NULL, INT* ItemIndex = NULL, INT StartIndex = 0); // <UStaticMeshComponent>: 006b72f0
};

// @baa 0x006c0f40
// AFogVolumeDensityInfo::PostLoad
void AFogVolumeDensityInfo::vf_01c()
{
    Super::vf_01c();

    // remove NULL entries from the components array
    for (INT i = Components.Num() - 1; i >= 0; i--)
    {
        if (Components(i) == NULL)
        {
            ((FActorComponentArray&)Components).Remove(i);
        }
    }

    // the automatic mesh component is no longer used: drop any leftover static mesh component
    if (AutomaticMeshComponent == NULL)
    {
        UStaticMeshComponent* MeshComponent;
        INT ComponentIndex = INDEX_NONE;
        if (((FActorComponentArray&)Components).FindItemByClass<UStaticMeshComponent>(&MeshComponent, &ComponentIndex))
        {
            ((FActorComponentArray&)Components).Remove(ComponentIndex);
        }
    }
}

// @baa 0x006d4390
struct Sub7 {
    INT A;
    INT B;
    INT C;
    INT D;
    INT E;
    INT F;
    INT G;
    Sub7& sub_006d4390();
};

// @baa 0x006d4390
Sub7& Sub7::sub_006d4390()
{
    A = 0;
    B = 0;
    C = 0;
    D = 0;
    E = 0;
    F = 0;
    G = 0;
    return *this;
}

// @baa 0x007549a0
int sub_007549a0(void) { return 1; }

// @baa 0x00764b50
IMPLEMENT_CLASS_AT(UAudioComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActorComponent.cpp", 47);

// @baa 0x00764ca0
IMPLEMENT_CLASS_AT(UWindDirectionalSourceComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActorComponent.cpp", 49);

// @baa 0x007774c0
IMPLEMENT_CLASS_AT(UStaticMeshComponentFactory, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActorComponent.cpp", 53);

// @baa 0x007775d0
bool UStaticMeshComponentFactory::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

#define RF_PendingKill ((QWORD)0x0000000200000000)
extern UBOOL g_025d6810;
struct UObject_ : public UObject {
    UBOOL HasAnyFlags(QWORD Flags) { return (*(QWORD*)&ObjectFlags & Flags) != 0; }
};

// @baa 0x007651d0
bool AActor::vf_30c()
{
    UBOOL bPendingKill = FALSE;
    if (g_025d6810)
    {
        if (((UObject_*)this)->HasAnyFlags(RF_PendingKill))
        {
            bPendingKill = TRUE;
        }
        for (INT i = 0; i < Components.Num(); i++)
        {
            UActorComponent* Comp = Components(i);
            if (Comp && ((UObject_*)Comp)->HasAnyFlags(RF_PendingKill))
            {
                bPendingKill = TRUE;
            }
        }
        for (INT i = 0; i < AllComponents.Num(); i++)
        {
            UActorComponent* Comp = AllComponents(i);
            if (Comp && ((UObject_*)Comp)->HasAnyFlags(RF_PendingKill))
            {
                bPendingKill = TRUE;
            }
        }
        if (bPendingKill)
        {
            // the log lines that listed the components are compiled out
            for (INT i = 0; i < Components.Num(); i++)
            {
                UActorComponent* Comp = Components(i);
            }
            for (INT i = 0; i < AllComponents.Num(); i++)
            {
                UActorComponent* Comp = AllComponents(i);
            }
        }
    }
    return !bPendingKill;
}

/* TArray<UActorComponent*>::RemoveItem as this build has it (Array.h:1032, the older remove-in-place form
 * whose check reads the allocation directly; the kit's RemoveItem is the newer compacting one).
 * operator() is forced inline (issue #39), Remove is out of line in the exe (00766450). */
template<class T> class TArrayRemoveItem_
{
public:
    typedef T ElementType;
    FHeapAllocation AllocatorInstance;
    INT ArrayNum;
    INT ArrayMax;

    void Remove(INT Index, INT Count = 1);
    __forceinline T& operator()(INT i)
    {
#line 560 BAA_ARRAY_FILE
        check(i>=0 && (i<ArrayNum||(i==0 && ArrayNum==0)));
        return ((T*)AllocatorInstance.GetAllocation())[i];
    }
    INT RemoveItem(const T& Item)
    {
#line 1032 BAA_ARRAY_FILE
        check( ((&Item) < (ElementType*)AllocatorInstance.GetAllocation()) || ((&Item) >= (ElementType*)AllocatorInstance.GetAllocation()+ArrayMax) );
        const INT OriginalNum = ArrayNum;
        for (INT Index = 0; Index < ArrayNum; Index++)
        {
            if ((*this)(Index) == Item)
            {
                Remove(Index--);
            }
        }
        return OriginalNum - ArrayNum;
    }
};

// @baa 0x0076a3b0
template INT TArrayRemoveItem_<UActorComponent*>::RemoveItem(UActorComponent* const& Item);

#line 169 "candidate.cpp"
