// MaterialInstanceConstantEditor.cpp (part 3 of 6): 3 functions
// Placed here by: neighbours 2, class 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

class wxUpdateUIEvent;
class wxUpdateUIEvent {
    public:
    public: __declspec(dllimport) void Check(bool);
    friend struct C;
};

struct C {
    void sub_01406d20(wxUpdateUIEvent *);
};

// @baa 0x01406d20
void C::sub_01406d20(wxUpdateUIEvent * param_2)
{
    int param_1 = (int)this;

  ((wxUpdateUIEvent *)(param_2))->wxUpdateUIEvent::Check(*(int *)(param_1 + 0x1b4) == 1);
  return;
}

struct C_01419ab0 {
    undefined4 sub_01419ab0(byte);
};

int sub_0053dfa0(...);
int sub_01407ba0(void);
// @baa 0x01419ab0
undefined4 C_01419ab0::sub_01419ab0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01407ba0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_01407f00(void);
// @baa 0x0141c440
undefined4 UMaterialEditorInstanceConstant::sub_0141c440(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01407f00();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}
