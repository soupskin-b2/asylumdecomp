// fmod_file.cpp (part 2 of 2): 1 function
// Placed here by: neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 sub_0177f518(int);
};

int sub_017975ef(...);
// @baa 0x0177f518
undefined4 C::sub_0177f518(int param_2)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0x25;
  }
  else {
    sub_017975ef(param_1 + 0x2c,param_2,0x100);
    *(undefined1 *)(param_1 + 299) = 0;
    uVar1 = 0;
  }
  return uVar1;
}
