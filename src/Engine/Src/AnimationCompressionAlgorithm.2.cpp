// AnimationCompressionAlgorithm.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC	/* appRealloc out of line, as in AddItem's reallocation */
#include "ue3/Classes.h"
#include <new.h>

template<class T> inline T Align(const T Ptr, INT Alignment) { return (T)(((DWORD)Ptr + Alignment - 1) & ~(Alignment - 1)); }

// @baa 0x00bfaaf0
/* AnimationCompressionAlgorithm.cpp: pads a compressed byte stream to a 4 byte boundary. */
void PadByteStream(TArray<BYTE>& InputStream, const INT Alignment, BYTE sentinel)
{
	const INT Pad = Align(InputStream.Num(), 4) - InputStream.Num();
	for (INT i = 0; i < Pad; ++i)
	{
		InputStream.AddItem(sentinel);
	}
}
