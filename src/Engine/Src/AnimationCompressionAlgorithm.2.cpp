// AnimationCompressionAlgorithm.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC	/* appRealloc out of line, as in AddItem's reallocation */
#include "ue3/Classes.h"
#include <new.h>

/* Kit gaps, with UE3's definitions (Array.h, UnTemplate.h): TArray has no AddItem; Align. */
template<class T> struct TArrayHelpers : public TArray<T>
{
	INT AddItem(const T& Item)
	{
		const INT Index = Add(1);
		new(GetTypedData() + Index) T(Item);
		return Index;
	}
};

template<class T> inline T Align(const T Ptr, INT Alignment) { return (T)(((DWORD)Ptr + Alignment - 1) & ~(Alignment - 1)); }

// @baa 0x00bfaaf0
/* AnimationCompressionAlgorithm.cpp: pads a compressed byte stream to a 4 byte boundary. */
void PadByteStream(TArray<BYTE>& InputStream, const INT Alignment, BYTE sentinel)
{
	const INT Pad = Align(InputStream.Num(), 4) - InputStream.Num();
	for (INT i = 0; i < Pad; ++i)
	{
		((TArrayHelpers<BYTE>&)InputStream).AddItem(sentinel);
	}
}
