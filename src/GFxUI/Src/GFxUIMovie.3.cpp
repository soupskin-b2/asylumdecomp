// GFxUIMovie.cpp (part 3 of 3): 1 function
// Placed here by: callers 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    void sub_018e39b0(undefined4, undefined4, undefined4);
    int sub_018e3920(int);
};

// @baa 0x018e39b0
void C::sub_018e39b0(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  *(undefined4 *)(param_1 + 0x1c) = param_3;
  *(undefined4 *)(param_1 + 0x20) = param_4;
  ((C *)(this))->sub_018e3920(param_2);
  return;
}
