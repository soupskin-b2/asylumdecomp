// fmod_output_software.cpp (part 1 of 2): 2 functions
// Placed here by: neighbours 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

typedef uint size_t;

struct C {
    undefined4 * sub_01780874();
    int sub_01796fef();
};

int sub_017807a5(...);
void * sub_01a37612(void *, int, size_t);
extern undefined4 g_023db6ec;
// @baa 0x01780874
undefined4 * C::sub_01780874(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C *)(this))->sub_01796fef();
  *param_1 = (undefined4)((&g_023db6ec));
  sub_01a37612(param_1 + 0x14,0,0xac);
  param_1[0x16] = 0;
  param_1[0x40] = 0;
  param_1[10] = 0;
  param_1[0x14] = (undefined4)("FMOD Software Output");
  param_1[0x15] = 0x10100;
  param_1[0x28] = (undefined4)(&sub_017807a5);
  param_1[0x24] = 0xfffffffe;
  param_1[0x25] = 0x104;
  return param_1;
}

struct C_017a9308 {
    undefined4 * sub_017a9308(byte);
};

int sub_00402660(...);
extern undefined4 g_023dd674;
// @baa 0x017a9308
undefined4 * C_017a9308::sub_017a9308(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023dd674));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}
