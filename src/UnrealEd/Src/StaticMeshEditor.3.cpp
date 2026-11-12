// StaticMeshEditor.cpp (part 3 of 3): 2 functions
// Placed here by: neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

int sub_0053dfa0(...);
int sub_01284da0(void);
// @baa 0x0124a550
undefined4 UUnrealEdEngine::sub_0124a550(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01284da0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

class wxWindowBase
{
public:
    __declspec(dllimport) bool Close(bool Force);
};

struct C : public wxWindowBase
{
    void sub_01220ac0(INT Unused);
};

// @baa 0x01220ac0
void C::sub_01220ac0(INT)
{
    Close(false);
}
