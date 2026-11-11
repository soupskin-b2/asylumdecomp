// FCDEffectTools.cpp (part 1 of 2): 2 functions
// Placed here by: callers 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    void sub_00ec75b0(undefined4);
    int sub_01818fc0(int);
};

// @baa 0x00ec75b0
void C::sub_00ec75b0(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C *)(((char *)this + 0x64)))->sub_01818fc0(param_2);
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 1;
  return;
}

struct C_00ec75d0 {
    void sub_00ec75d0(undefined4);
    int sub_01818ec0(int);
};

// @baa 0x00ec75d0
void C_00ec75d0::sub_00ec75d0(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_00ec75d0 *)(((char *)this + 0x64)))->sub_01818ec0(param_2);
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 1;
  return;
}
