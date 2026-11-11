// fmod_systemi.cpp (part 7 of 7): 1 function
// Placed here by: callers 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    void sub_017af962(float);
};

// @baa 0x017af962
void C::sub_017af962(float param_2)
{
    int param_1 = (int)this;

  *(float *)(param_1 + 0x20) = param_2 + param_2;
  return;
}
