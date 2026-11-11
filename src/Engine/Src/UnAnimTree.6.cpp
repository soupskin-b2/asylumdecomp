// UnAnimTree.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

/* the original returns whatever the callee leaves in eax (no value is set), so the
   wrapper is declared INT but falls off the end after the void call */
#pragma warning(disable:4716)
struct UAnimNodeBlendBase_ : public UAnimNodeBlendBase
{
    INT vf_190(INT Arg);
};

// @baa 0x00c4b5c0
INT UAnimNodeBlendBase_::vf_190(INT)
{
    vf_198();
}
