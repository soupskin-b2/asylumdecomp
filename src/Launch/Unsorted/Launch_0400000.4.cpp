// Launch_0400000.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include <wchar.h>

// @baa 0x00401af0
/* wcslen, an out-of-line copy */
size_t sub_00401af0(const wchar_t* s)
{
	return wcslen(s);
}

// @baa 0x00401830
/* <wchar.h>'s C++ inline wmemcmp, out of line */
int sub_00401830(const wchar_t* _S1, const wchar_t* _S2, size_t _N)
{
	for (; 0 < _N; ++_S1, ++_S2, --_N)
		if (*_S1 != *_S2)
			return (*_S1 < *_S2 ? -1 : +1);
	return (0);
}
