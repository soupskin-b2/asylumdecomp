// UnUIStyles.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/AppMath.h"

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
		&&	(!((FScriptDelegate&)__MatchesStyleData__Delegate).IsCallable(this) || this->delegateMatchesStyleData(StyleToCompare));
}
