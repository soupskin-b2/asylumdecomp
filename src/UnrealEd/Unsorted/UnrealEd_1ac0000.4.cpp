// UnrealEd_1ac0000.cpp (part 4 of 4): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

extern undefined4 *g_027ca524;
// @baa 0x01ace0e0
undefined4 sub_01ace0e0(int param_1)
{
  if (g_027ca524 != 0) {
    return *(undefined4 *)(*g_027ca524 + param_1 * 4);
  }
  return 0;
}
