// Engine_1560000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/Cast.h"

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

// @baa 0x01566d10
/* Slot 0x364 (unnamed in the kit): tells each AI pawn standing on (based on) the panel that this was the last
 * floor panel it touched. */
void ARElectrifiedFloorPanel::vf_364()
{
	for (INT i = 0; i < Attached.Num(); i++)
	{
		AActor* Other = ((TArrayAt_<AActor*>&)Attached).At(i);
		if (Other && ObjectIsA(Other, ARBMPawnAI::StaticClass()))
		{
			((ARBMPawnAI*)Other)->LastFloorPanel = this;
		}
	}
}

#line 37 "candidate.cpp"
