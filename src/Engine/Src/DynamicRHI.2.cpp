// DynamicRHI.cpp (part 2 of 2): 1 function
// Placed here by: callers 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

int sub_0053df40(...);
extern undefined * g_02044750;
extern undefined4 g_026b21d8;
// @baa 0x00c28ae0
undefined4 * sub_00c28ae0(void)
{
  undefined4 *puVar1;
  
  g_026b21d8 = 1;
  puVar1 = (undefined4 *)sub_0053df40(4,8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (undefined4)(&g_02044750);
    return puVar1;
  }
  return (undefined4 *)0x0;
}
