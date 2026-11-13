// FMod_0540000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include <wchar.h>

/* FString's comparisons (UnString.h, case-insensitive), which the kit's FString lacks; the exe
 * keeps out-of-line copies. */
struct FString_ : public FString
{
	const TCHAR* operator*() const { return Num() ? &(*this)(0) : TEXT(""); }
	UBOOL operator==(const FString_& Other) const; /* 0x00544d40 */
};

// @baa 0x00544d40
UBOOL FString_::operator==(const FString_& Other) const
{
	return _wcsicmp(**this, *Other) == 0;
}
