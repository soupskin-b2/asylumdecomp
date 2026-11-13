// UnUIStyleEditor.cpp (part 5 of 5): 3 functions
// Placed here by: neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct C {
    undefined4 sub_014e8d20(byte);
};

int sub_0053dfa0(...);
int sub_014dd570(void);
// @baa 0x014e8d20
undefined4 C::sub_014e8d20(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_014dd570();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct StyleObj {
    char pad[0x154];
    class UObject* Field_0x154;
    void sub_014dc9d0();
};

// @baa 0x014dc9d0
void StyleObj::sub_014dc9d0()
{
    GCallbackEvent->Send((ECallbackEventType)0x26, Field_0x154);
}

// A two-word record, cleared.
struct FClear_
{
	INT First; /* 0x0 */
	INT Header[6];
	INT Second; /* 0x1c */

	FClear_* Init();
};

// @baa 0x00dca7c0
FClear_* FClear_::Init()
{
	First = 0;
	Second = 0;
	return this;
}
