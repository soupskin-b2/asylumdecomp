// FUUniqueStringMapTest.cpp (part 2 of 2): 1 function
// Placed here by: callers 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    void sub_01823f80(undefined4);
    int sub_01823b70(int, int);
};

// @baa 0x01823f80
void C::sub_01823f80(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C *)(this))->sub_01823b70(*(int *)(param_1 + 8) + *(int *)(param_1 + 4) * 0xc, param_2);
  return;
}
