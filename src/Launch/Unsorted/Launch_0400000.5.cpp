// Launch_0400000.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include <string.h>

// @baa 0x00401a20
/* memcmp (the compiler's intrinsic form), an out-of-line copy */
int sub_00401a20(const void* buf1, const void* buf2, size_t count)
{
	return memcmp(buf1, buf2, count);
}

// @baa 0x00401ce0
/* memcmp (the compiler's intrinsic form), an out-of-line copy */
int sub_00401ce0(const void* buf1, const void* buf2, size_t count)
{
	return memcmp(buf1, buf2, count);
}
