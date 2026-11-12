// UnAnimTree.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

/* the original returns whatever the callee leaves in eax (no value is set), so the
   wrapper is declared INT but falls off the end after the void call */
#pragma warning(disable:4716)

// @baa 0x00c4b5d0
INT UAnimNodeBlendBase::vf_194(INT)
{
    vf_198();
}
