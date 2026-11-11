// FMOD_1770000.cpp (part 2 of 2): 8 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 sub_01773288(undefined4 *, undefined4 *);
};

// @baa 0x01773288
undefined4 C::sub_01773288(undefined4 * param_2, undefined4 * param_3)
{
    int param_1 = (int)this;

  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x1a8);
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(param_1 + 0x1ac);
  }
  return 0;
}

struct C_0177b066 {
    undefined4 sub_0177b066(byte *, undefined4 *);
};

// @baa 0x0177b066
undefined4 C_0177b066::sub_0177b066(byte * param_2, undefined4 * param_3)
{
    int param_1 = (int)this;

  if (param_2 != (byte *)0x0) {
    *param_2 = (byte)(*(uint *)(param_1 + 0x188) >> 4) & 1;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(param_1 + 0x178);
  }
  return 0;
}

struct C_0177b413 {
    undefined4 sub_0177b413(undefined4 *, undefined4 *);
};

// @baa 0x0177b413
undefined4 C_0177b413::sub_0177b413(undefined4 * param_2, undefined4 * param_3)
{
    int param_1 = (int)this;

  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x7c);
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(param_1 + 0x80);
  }
  return 0;
}

struct C_0177bcf6 {
    undefined4 sub_0177bcf6(undefined4);
};

// @baa 0x0177bcf6
undefined4 C_0177bcf6::sub_0177bcf6(undefined4 param_2)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x24) = param_2;
  return 0;
}

struct C_0177bd8e {
    undefined4 sub_0177bd8e(undefined4);
};

// @baa 0x0177bd8e
undefined4 C_0177bd8e::sub_0177bd8e(undefined4 param_2)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0xe8) = param_2;
  return 0;
}

// @baa 0x0177c188
undefined1 sub_0177c188(void)
{
  return 0;
}

// @baa 0x0177e36f
int sub_0177e36f(void) { return 0; }

// @baa 0x0177fa52
int sub_0177fa52(void) { return 0; }
