// Engine_1ae0000.cpp (part 2 of 2): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

// @baa 0x01aedd60
int sub_01aedd60(uint param_1, uint param_2)
{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 < param_2) {
    param_1 = param_2;
  }
  for (; param_1 != 0; param_1 = param_1 >> 1) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}

struct C {
    void sub_01aede50(undefined4);
};

// @baa 0x01aede50
void C::sub_01aede50(undefined4 param_2)
{
    int param_1 = (int)this;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  return;
}
