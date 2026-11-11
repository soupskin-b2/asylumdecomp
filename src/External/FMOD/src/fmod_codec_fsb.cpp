// fmod_codec_fsb.cpp: 1 function
// Placed here by: neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 sub_01793fd1(int, undefined4 *);
};

// @baa 0x01793fd1
undefined4 C::sub_01793fd1(int param_2, undefined4 * param_3)
{
    int param_1 = (int)this;

  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x150) + param_2 * 4);
  if (iVar1 == 0) {
    *param_3 = 0;
  }
  else {
    *param_3 = *(undefined4 *)(iVar1 + 4);
  }
  return 0;
}
