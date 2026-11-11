// FUCrc32Test.cpp (part 2 of 2): 1 function
// Placed here by: callers 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

extern undefined4 g_023ed6b0;
// @baa 0x01878ce0
uint sub_01878ce0(byte * param_1)
{
  short sVar1;
  uint uVar2;
  
  uVar2 = 0xffffffff;
  sVar1 = *(short *)param_1;
  while (sVar1 != 0) {
    uVar2 = uVar2 >> 8 ^ (uint)(&g_023ed6b0)[uVar2 & 0xff ^ (uint)*param_1];
    param_1 = param_1 + 2;
    sVar1 = *(short *)param_1;
  }
  return ~uVar2;
}
