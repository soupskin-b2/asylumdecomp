// fmod_eventsound.cpp: 2 functions
// Placed here by: neighbours 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

int sub_017e5c40(void);
// @baa 0x017e6800
undefined4 sub_017e6800(void)
{
  int iVar1;
  int iVar2;
  
  iVar2 = sub_017e5c40();
  iVar1 = *(int *)(iVar2 + 0x18);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x60) == iVar2)) {
    *(undefined4 *)(iVar1 + 0x60) = 0;
  }
  return 0;
}

// @baa 0x017e6820
bool sub_017e6820(void)
{
  int iVar1;
  
  iVar1 = sub_017e5c40();
  if (*(int *)(iVar1 + 0x18) != 0) {
    return *(int *)(*(int *)(iVar1 + 0x18) + 0x60) == iVar1;
  }
  return false;
}
