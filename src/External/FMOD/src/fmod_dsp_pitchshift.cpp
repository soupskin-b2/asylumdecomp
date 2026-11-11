// fmod_dsp_pitchshift.cpp (part 1 of 2): 1 function
// Placed here by: callers 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    void sub_01786134();
};

void * sub_01a37612(void *, int, size_t);
extern undefined4 g_02740258;
extern undefined4 g_02744258;
extern undefined4 g_02748258;
extern undefined4 g_0274c258;
extern undefined4 g_02750258;
// @baa 0x01786134
void C::sub_01786134(void)
{
    void * param_1 = (void *)this;

  sub_01a37612(param_1,0,0x4000);
  sub_01a37612((void *)((int)param_1 + 0x4000),0,0x4000);
  sub_01a37612((void *)((int)param_1 + 0x8000),0,0x2010);
  sub_01a37612((void *)((int)param_1 + 0xa010),0,0x2010);
  sub_01a37612((void *)((int)param_1 + 0xc020),0,0x8000);
  sub_01a37612(&g_02750258,0,0x8000);
  sub_01a37612(&g_02744258,0,0x4000);
  sub_01a37612(&g_02748258,0,0x4000);
  sub_01a37612(&g_02740258,0,0x4000);
  sub_01a37612(&g_0274c258,0,0x4000);
  *(undefined4 *)((int)param_1 + 0x14024) = 0;
  return;
}
