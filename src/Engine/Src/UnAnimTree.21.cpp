// UnAnimTree.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Cast.h"
#include "ue3/Array.h"

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

/* Cast<UAnimNodeSequence> is out of line in this build. */
extern template UAnimNodeSequence* Cast<UAnimNodeSequence>(UObject* Src);
/* UAnimNodeSlot::GetCustomAnimNodeSeq isn't declared in Classes.h. */
struct UAnimNodeSlot_ : public UAnimNodeSlot
{
	UAnimNodeSequence* GetCustomAnimNodeSeq();
};

// @baa 0x00c7ccb0
UAnimNodeSequence* UAnimNodeSlot_::GetCustomAnimNodeSeq()
{
	// child 0 is the normal animation; the custom animation plays on the others
	if (CustomChildIndex > 0)
	{
		return Cast<UAnimNodeSequence>(((TArrayAt_<FAnimBlendChild>&)Children).At(CustomChildIndex).Anim);
	}

	return NULL;
}

#line 48 "candidate.cpp"
