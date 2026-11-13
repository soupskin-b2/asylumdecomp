// UnCoreNative.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// @baa 0x00544830
/* Serializes LengthBits bits as whole bytes; when loading, clears the unused bits of the last byte. */
void FArchive::SerializeBits(void* V, INT LengthBits)
{
	Serialize(V, (LengthBits + 7) / 8);
	if (IsLoading())
	{
		((BYTE*)V)[LengthBits / 8] &= ((1 << (LengthBits & 7)) - 1);
	}
}
