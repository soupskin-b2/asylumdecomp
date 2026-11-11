// fmod_geometryi.cpp (part 2 of 2): 1 function
// Placed here by: neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 sub_0179a97f(undefined4 *, undefined4 *);
};

// @baa 0x0179a97f
undefined4 C::sub_0179a97f(undefined4 * param_2, undefined4 * param_3)
{
    int param_1 = (int)this;

  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x20);
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(param_1 + 0x18);
  }
  return 0;
}
