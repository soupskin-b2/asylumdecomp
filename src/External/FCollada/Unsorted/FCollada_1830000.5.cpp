// FCollada_1830000.cpp (part 5 of 24): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 sub_01833da0(byte);
};

int sub_00402660(...);
int sub_01831d70(void);
// @baa 0x01833da0
undefined4 C::sub_01833da0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01831d70();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}
