// GFx_19b0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"

struct GFx19729b0
{
	void sub_019729b0(int Offset, int Flags);
};

struct GFx19b0860
{
	char pad_019b0860[0x34];
	GFx19729b0 sub_019729b0;
	void* sub_019b0860(void* Ptr);
};

// @baa 0x019b0860
void* GFx19b0860::sub_019b0860(void* Ptr)
{
	((GFx19729b0*)Ptr)->sub_019729b0((int)&sub_019729b0, 0);
	return Ptr;
}
