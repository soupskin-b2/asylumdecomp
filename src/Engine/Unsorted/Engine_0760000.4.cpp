// Engine_0760000.cpp (part 4 of 5): 3 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

int sub_0053dfa0(...);
int sub_0075b520(void);
struct C_007615b0 { undefined4 sub_007615b0(byte param_2); };
// @baa 0x007615b0
undefined4 C_007615b0::sub_007615b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0075b520();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

/* This build has CastChecked<ULevel> out of line (0x00766bb0): declared, not defined (no ue3/Cast.h), so the call binds to it. */
template<class T> T* CastChecked(UObject* Src);
extern template ULevel* CastChecked<ULevel>(UObject* Src);

// @baa 0x00769d90
ULevel* AActor::sub_00769d90() const
{
    return CastChecked<ULevel>(GetOuter());
}


// @baa 0x00763700
/* Returns the bounding box of the actor's colliding components. */
void AActor::sub_00763700(FBox& OutBox)
{
	OutBox = ((AActor*)this)->GetComponentsBoundingBox();
}
