// FCollada_1860000.cpp (part 12 of 15): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 sub_01866a40(byte);
};

int sub_00402660(...);
int sub_01854460(void);
// @baa 0x01866a40
undefined4 C::sub_01866a40(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01854460();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}
