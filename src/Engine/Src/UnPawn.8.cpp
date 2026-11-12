// UnPawn.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/Cast.h"

/* Cast<T> is out of line for this T in the exe (006b0290) */
extern template UPrimitiveComponent* Cast<UPrimitiveComponent>(UObject* Src);
/* Kit gap (Array.h, issue #39): forceinline operator() stand-in */
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

struct AActor_ : public AActor
{
    UBOOL sub_00764820();
};

// @baa 0x00764820
/* TRUE if the actor has a collision component and it is the only component that collides with actors */
UBOOL AActor_::sub_00764820()
{
    if (!CollisionComponent)
    {
        return FALSE;
    }

    for (INT ComponentIdx = 0; ComponentIdx < AllComponents.Num(); ComponentIdx++)
    {
        UPrimitiveComponent* Primitive = Cast<UPrimitiveComponent>(((TArrayFI<UActorComponent*>&)AllComponents)(ComponentIdx));
        if (Primitive && Primitive->CollideActors && Primitive != CollisionComponent)
        {
            return FALSE;
        }
    }
    return TRUE;
}

#line 53 "candidate.cpp"
