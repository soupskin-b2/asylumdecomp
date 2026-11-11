// FCDEffectTools.cpp (part 2 of 2): 1 function
// Placed here by: callers 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    void sub_01881550(undefined4);
    int sub_01818f20(int);
};

// @baa 0x01881550
void C::sub_01881550(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C *)(((char *)this + 0x64)))->sub_01818f20(param_2);
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 1;
  return;
}
