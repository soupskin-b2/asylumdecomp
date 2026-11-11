// FUObjectTest.cpp (part 7 of 7): 1 function
// Placed here by: neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 sub_018677f0(byte);
};

int sub_00402660(...);
int sub_01854460(void);
// @baa 0x018677f0
undefined4 C::sub_018677f0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01854460();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}
