// UnAudio.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include <string.h>

struct UAudioDevice_ : public UAudioDevice
{
	virtual void* sub_0079ca30(void* Memory, INT Size);
};

// @baa 0x0079ca30
void* UAudioDevice_::sub_0079ca30(void* Memory, INT Size)
{
	memset(Memory, 0, 0x7c);
	return Memory;
}

void use_0079ca30() { UAudioDevice_ D; void* P = &D; D.sub_0079ca30(P, 0); }
