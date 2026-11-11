// BmGame_1600000.cpp (part 2 of 3): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

int sub_0053dfa0(...);
int sub_006837e0(void);
// @baa 0x01605db0
undefined4 ULensFlare::sub_01605db0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_006837e0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// ARBMRouter_NoPawn::GetPos (slot 0x354): returns the actor's own Location.
// The header's placeholder for this slot is `virtual INT vf_354(INT)`; the code
// returns a 12-byte FVector by value (hidden result pointer, ret 4).
struct ARBMRouter_NoPawn_ : public ARBMRouter_NoPawn
{
    FVector sub_0160f290();
};

// @baa 0x0160f290
FVector ARBMRouter_NoPawn_::sub_0160f290()
{
    return Location;
}
