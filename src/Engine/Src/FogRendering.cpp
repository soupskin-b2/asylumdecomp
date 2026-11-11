// FogRendering.cpp: 1 function
// Placed here by: neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 sub_00a5f3e0(undefined4);
    int sub_0073f030(int);
};

int sub_00716170(...);
int sub_00afa590(...);
// @baa 0x00a5f3e0
undefined4 C::sub_00a5f3e0(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C *)(this))->sub_0073f030(param_2);
  sub_00afa590(param_2,param_1 + 0x4c);
  sub_00716170(param_2,param_1 + 0x6a);
  sub_00716170(param_2,param_1 + 0x70);
  sub_00716170(param_2,param_1 + 0x76);
  sub_00716170(param_2,param_1 + 0x7c);
  sub_00716170(param_2,param_1 + 0x82);
  sub_00716170(param_2,param_1 + 0x88);
  return uVar1;
}
