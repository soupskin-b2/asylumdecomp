// UnrealEd_1420000.cpp (part 2 of 9): 3 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct C {
    undefined4 sub_014229e0(byte);
};

int sub_0053dfa0(...);
int sub_011ee210(void);
// @baa 0x014229e0
undefined4 C::sub_014229e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_011ee210();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

class wxUpdateUIEvent;
class wxUpdateUIEvent {
    public:
    public: __declspec(dllimport) void Check(bool);
    friend struct C_01426690;
};

struct C_01426690 {
    void sub_01426690(wxUpdateUIEvent *);
};

// @baa 0x01426690
void C_01426690::sub_01426690(wxUpdateUIEvent * param_2)
{
    int param_1 = (int)this;

  ((wxUpdateUIEvent *)(param_2))->wxUpdateUIEvent::Check(*(int *)(param_1 + 0x3e4) == 1);
  return;
}

int sub_00c38ac0(void);
// @baa 0x01427a60
undefined4 UObject::sub_01427a60(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00c38ac0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}
