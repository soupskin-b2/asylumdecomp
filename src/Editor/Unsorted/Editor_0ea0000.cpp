// Editor_0ea0000.cpp: 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 sub_00eaa800(byte);
};

int sub_0053dfa0(...);
int sub_00ea9f10(void);
// @baa 0x00eaa800
undefined4 C::sub_00eaa800(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00ea9f10();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00eaa910 {
    void sub_00eaa910();
    int sub_00eaa440(int);
};

// @baa 0x00eaa910
void C_00eaa910::sub_00eaa910(void)
{
    int param_1 = (int)this;
  ((C_00eaa910 *)((*(char **)((char *)this + 0x10))))->sub_00eaa440(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}
