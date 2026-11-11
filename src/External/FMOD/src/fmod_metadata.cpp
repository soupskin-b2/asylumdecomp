// fmod_metadata.cpp (part 1 of 2): 1 function
// Placed here by: neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 sub_0179d8ca(int *, int *);
};

// @baa 0x0179d8ca
undefined4 C::sub_0179d8ca(int * param_2, int * param_3)
{
    undefined4 * param_1 = (undefined4 *)this;

  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = 0;
  for (puVar1 = (undefined4 *)*param_1; puVar1 != param_1; puVar1 = (undefined4 *)*puVar1) {
    iVar2 = iVar2 + 1;
    if (*(char *)(puVar1 + 9) != '\0') {
      iVar3 = iVar3 + 1;
    }
  }
  if (param_2 != (int *)0x0) {
    *param_2 = iVar2;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = iVar3;
  }
  return 0;
}
