// FMod_0540000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/AppMath.h"

/* FString::Right (UnString.h), which the kit's FString lacks; the exe keeps an out-of-line copy. */
struct FString_ : public FString
{
	const TCHAR* operator*() const { return Num() ? &(*this)(0) : TEXT(""); }
	INT Len() const { return Num() ? Num() - 1 : 0; }
	FString Right(INT Count) const; /* 0x0054dc90 */
};

// @baa 0x0054dc90
FString FString_::Right(INT Count) const
{
	return FString(**this + Len() - Clamp(Count, 0, Len()));
}
