// BmEditor_0620000.cpp: 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    void sub_0062ceb0();
};

// @baa 0x0062ceb0
void C::sub_0062ceb0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = 0x67452301;
  param_1[1] = 0xefcdab89;
  param_1[2] = 0x98badcfe;
  param_1[3] = 0x10325476;
  param_1[4] = 0xc3d2e1f0;
  param_1[5] = 0;
  param_1[6] = 0;
  return;
}
