// RAnimUtil_AdditiveAnimOutput.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include <string.h>

// Zeroes 0xa88 bytes of the object. The caller passes one 4-byte value the
// callee pops (ret 4); the method returns this.
struct T015949d0
{
	void* sub_015949d0(int InX);
};

// @baa 0x015949d0
void* T015949d0::sub_015949d0(int InX)
{
	memset(this, 0, 0xa88);
	return this;
}
