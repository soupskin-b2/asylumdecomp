// UnrealEd_1b30000.cpp (part 4 of 4): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

// @baa 0x01b3f0c0
void sub_01b3f0c0(int * param_1, int * param_2, int * param_3)
{
  int iVar1;
  
  iVar1 = *param_2;
  if (*(double *)(iVar1 + 0x30) < *(double *)(*param_1 + 0x30)) {
    *param_2 = *param_1;
    *param_1 = iVar1;
  }
  iVar1 = *param_3;
  if (*(double *)(iVar1 + 0x30) < *(double *)(*param_2 + 0x30)) {
    *param_3 = *param_2;
    *param_2 = iVar1;
  }
  iVar1 = *param_2;
  if (*(double *)(iVar1 + 0x30) < *(double *)(*param_1 + 0x30)) {
    *param_2 = *param_1;
    *param_1 = iVar1;
  }
  return;
}
