// fmod_dsp_pitchshift.cpp (part 2 of 2): 1 function
// Placed here by: neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    void sub_017866e0();
};

// @baa 0x017866e0
void C::sub_017866e0(void)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 0x14038) = 1;
  return;
}
