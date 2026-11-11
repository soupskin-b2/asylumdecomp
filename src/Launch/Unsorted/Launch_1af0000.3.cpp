// Launch_1af0000.cpp (part 3 of 5): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    void sub_01af7950(undefined4, int *);
};

int sub_01af54e0(...);
// @baa 0x01af7950
void C::sub_01af7950(undefined4 param_2, int * param_3)
{
    undefined4 param_1 = (undefined4)this;

  sub_01af54e0(param_1,"%s{%d,%d,%d,%d}%dx%d",param_2,*param_3,param_3[1],param_3[2],param_3[3],
               (param_3[2] - *param_3) + 1,(param_3[3] - param_3[1]) + 1);
  return;
}

struct C_01af7990 {
    void sub_01af7990(undefined4, undefined4 *);
};

// @baa 0x01af7990
void C_01af7990::sub_01af7990(undefined4 param_2, undefined4 * param_3)
{
    undefined4 param_1 = (undefined4)this;

  sub_01af54e0(param_1,"%s{%d,%d,%d,%d}%dx%d",param_2,*param_3,param_3[1],param_3[2],param_3[3],
               param_3[4],param_3[5]);
  return;
}
