// FCollada_1bd0000.cpp (part 2 of 2): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

// @baa 0x01bd4500
void sub_01bd4500(int param_1, int * param_2)
{
  if ((param_1 != 0) && (param_2 != (int *)0x0)) {
    *(int *)(*(int *)(param_1 + 4) + *param_2 * 4) = param_2[1];
    if (*param_2 != 0) {
      *(int *)(*(int *)(param_1 + 8) + -4 + *param_2 * 4) = param_2[2];
      *(int *)(*(int *)(param_1 + 0xc) + -4 + *param_2 * 4) = param_2[3];
    }
    *(int *)(*(int *)(param_1 + 0x10) + *param_2 * 4) = param_2[4];
  }
  return;
}
