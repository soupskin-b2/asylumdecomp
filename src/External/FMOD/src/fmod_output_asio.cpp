// fmod_output_asio.cpp (part 1 of 2): 3 functions
// Placed here by: callers 2, neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 sub_017b6d8b(undefined4 *);
};

// @baa 0x017b6d8b
undefined4 C::sub_017b6d8b(undefined4 * param_2)
{
    int param_1 = (int)this;

  *param_2 = *(undefined4 *)(param_1 + 0xfc);
  return 0;
}

struct C_017c95d0 { int sub_017c95d0(void); };

// @baa 0x017c95d0
int C_017c95d0::sub_017c95d0(void) { return *(int*)((char*)this + 4); }

int sub_017c95b9(void);
// @baa 0x017c9768
undefined1 sub_017c9768(void)
{
  sub_017c95b9();
  return 1;
}
