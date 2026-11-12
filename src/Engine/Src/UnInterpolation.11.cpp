// UnInterpolation.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/Native.h"

// @baa 0x008855f0
/* TObjectIterator<USeqAct_Interp>::TObjectIterator, kept out of line by the compiler */
template TObjectIterator<USeqAct_Interp>::TObjectIterator(UBOOL bOnlyGCedObjects);

// @baa 0x00f88330
/* TObjectIterator<UInterpGroup>::TObjectIterator, kept out of line by the compiler */
template TObjectIterator<UInterpGroup>::TObjectIterator(UBOOL bOnlyGCedObjects);

extern UBOOL g_026760a4;
          // GIsEditor
#define GIsEditor g_026760a4
extern UBOOL g_0266e86c;
          // set while any matinee (other than the caller) is playing
#define RF_Unreachable          ((QWORD)0x0000000200000000)
#define RF_ClassDefaultObject   ((QWORD)0x0000040000000000)
/* FObjectIterator as UnObjBas.h has it, with the inline constructor (this function inlines it,
 * unlike TObjectIterator's out-of-line one); operator++ is out of line (00410de0). */
class FObjectIteratorInline {
public:
    UClass* Class;
    INT Index;
    QWORD ExclusionFlags;
    void Increment(); // 00410de0
    __forceinline FObjectIteratorInline(UClass* InClass) : Class(InClass), Index(-1), ExclusionFlags(RF_Unreachable)
    {
        if (!GIsEditor)
        {
            ExclusionFlags |= RF_ClassDefaultObject;
        }
#line 3998 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\UnObjBas.h"
        check(Class);
        ++*this;
    }
    void operator++() { Increment(); }
    UObject* operator*() const { return GObjObjects.GetTypedData()[Index]; }
    operator UBOOL() const { return Index >= 0 && Index < GObjObjects.Num(); }
};

struct USeqAct_Interp_ : public USeqAct_Interp {
    void sub_00d19950(UBOOL bIncludeSelf); // sets g_0266e86c if any (other) USeqAct_Interp has ExitAutoBink set
};

// @baa 0x00d19950
void USeqAct_Interp_::sub_00d19950(UBOOL bIncludeSelf)
{
    g_0266e86c = FALSE;
    for (FObjectIteratorInline It(USeqAct_Interp::StaticClass()); It; ++It)
    {
        USeqAct_Interp* Interp = (USeqAct_Interp*)*It;
        if (Interp && (bIncludeSelf || Interp != this) && Interp->ExitAutoBink)
        {
            g_0266e86c = TRUE;
            break;
        }
    }
}

#line 66 "candidate.cpp"
