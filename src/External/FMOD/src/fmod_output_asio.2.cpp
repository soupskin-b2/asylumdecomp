// fmod_output_asio.cpp (part 2 of 2): 2 functions
// Placed here by: callers 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    int sub_017c9758();
};

int sub_017c9505(void);
// @baa 0x017c9758
int C::sub_017c9758(void)
{
    int param_1 = (int)this;

  sub_017c9505();
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  return param_1;
}

struct C_017c97e8 {
    void sub_017c97e8();
    int sub_017c9631(int);
};

// @baa 0x017c97e8
void C_017c97e8::sub_017c97e8(void)
{
    int param_1 = (int)this;
  if (*(int *)(param_1 + 0xc) != -1) {
    ((C_017c97e8 *)(this))->sub_017c9631(*(int *)(param_1 + 0xc));
  }
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  return;
}
