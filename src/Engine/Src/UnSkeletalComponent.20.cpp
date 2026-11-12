// UnSkeletalComponent.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/Script.h"

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
};

/* Kit gap: FName has no comparison operators (UnName.h, inline). */
/* Kit gap: FName has no comparison operators (UnName.h, inline member). */
struct FName_ : public FName
{
    FORCEINLINE UBOOL operator==(const FName& Other) const { return Index == Other.Index && Number == Other.Number; }
};

// @baa 0x0091de90
void USkeletalMeshComponent::execIsComponentAttached(FFrame& Stack, RESULT_DECL)
{
    P_GET_OBJECT(UActorComponent, Component);
    P_GET_NAME_OPTX(BoneName, NAME_None);
    P_FINISH;
    UBOOL bAttached = FALSE;
    for (INT i = 0; i < Attachments.Num(); i++)
    {
        if (((TArrayAt_<FAttachment>&)Attachments).At(i).Component == Component &&
            (BoneName == FName(NAME_None) || ((TArrayAt_<FAttachment>&)Attachments).At(i).BoneName == BoneName))
        {
            bAttached = TRUE;
            break;
        }
    }
    *(UBOOL*)Result = bAttached;
}

#line 48 "candidate.cpp"
