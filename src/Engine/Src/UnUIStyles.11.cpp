// UnUIStyles.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/AppMath.h"

/* Kit gaps: FScriptDelegate::IsCallable (00784f80), UUIStyle_Data::delegateMatchesStyleData (00dc9a40, script
 * delegate glue), FLinearColor::operator== and DELTA aren't declared. */
#define DELTA (0.00001f)
struct FScriptDelegate_ : public FScriptDelegate
{
	UBOOL IsCallable(const UObject* OwnerObject) const;
};

FORCEINLINE UBOOL operator==(const FLinearColor& A, const FLinearColor& B)
{
	return A.R == B.R && A.G == B.G && A.B == B.B && A.A == B.A;
}

struct UUIStyle_Data_ : public UUIStyle_Data
{
	UBOOL delegateMatchesStyleData(UUIStyle_Data* StyleToCompare);
};

// @baa 0x00dca6d0
/* Whether StyleToCompare has the same color and padding as this style (and the script delegate agrees). */
UBOOL UUIStyle_Data::MatchesStyleData(UUIStyle_Data* StyleToCompare)
{
	if (StyleToCompare == NULL)
	{
		return StyleToCompare == this;
	}
	if (StyleToCompare == this)
	{
		return TRUE;
	}
	return StyleColor == StyleToCompare->StyleColor
		&&	appAbs(StylePadding[0] - StyleToCompare->StylePadding[0]) < DELTA
		&&	appAbs(StylePadding[1] - StyleToCompare->StylePadding[1]) < DELTA
		&&	(!((FScriptDelegate_&)__MatchesStyleData__Delegate).IsCallable(this) || ((UUIStyle_Data_*)this)->delegateMatchesStyleData(StyleToCompare));
}
