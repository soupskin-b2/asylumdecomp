// Engine_1560000.cpp: 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct C_view {
    int sub_00547da0(int);
    int sub_00d201d0(int);
};

// @baa 0x015682f0
void URSeqAct_ConversationDialogue::vf_04c(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_view *)(((char *)this + 0x60)))->sub_00547da0(param_1 + 0x110);
  ((C_view *)(this))->sub_00d201d0(param_2);
  return;
}
