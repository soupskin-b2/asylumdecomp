// FUCrc32Test.cpp (part 1 of 2): 1 function
// Placed here by: neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    void sub_01866520(undefined4);
    int sub_01866480(int, int);
};

// @baa 0x01866520
void C::sub_01866520(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C *)(this))->sub_01866480(*(int *)(param_1 + 8) + *(int *)(param_1 + 4) * 4, param_2);
  return;
}
