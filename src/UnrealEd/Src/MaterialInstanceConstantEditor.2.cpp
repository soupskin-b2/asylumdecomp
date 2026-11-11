// MaterialInstanceConstantEditor.cpp (part 2 of 6): 4 functions
// Placed here by: neighbours 4.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

class wxUpdateUIEvent;
class wxUpdateUIEvent {
    public:
    public: __declspec(dllimport) void Check(bool);
    friend struct C;
};

struct C {
    void sub_01406d00(wxUpdateUIEvent *);
};

// @baa 0x01406d00
void C::sub_01406d00(wxUpdateUIEvent * param_2)
{
    int param_1 = (int)this;

  ((wxUpdateUIEvent *)(param_2))->wxUpdateUIEvent::Check(*(int *)(param_1 + 0x1b4) == 2);
  return;
}

int sub_0053dfa0(...);
int sub_00c38ac0(void);
// @baa 0x01407b30
undefined4 UObject::sub_01407b30(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00c38ac0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

void sub_01407ba0();
// @baa 0x01419aa0
void sub_01419aa0(void) { sub_01407ba0(); }

void sub_01407f00();
// @baa 0x0141c430
void sub_0141c430(void) { sub_01407f00(); }
