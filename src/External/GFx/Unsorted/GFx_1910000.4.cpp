// GFx_1910000.cpp (part 4 of 5): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 sub_0191f680();
};

// @baa 0x0191f680
undefined4 C::sub_0191f680(void)
{
    char * param_1 = (char *)this;

  if ((*param_1 != 'A') && (*param_1 != 'C')) {
    return 0;
  }
  return 1;
}
