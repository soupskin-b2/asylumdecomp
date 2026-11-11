// PhysXParticleQueue.cpp: 1 function
// Placed here by: neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    void sub_00df1260(ushort, undefined2);
};

// @baa 0x00df1260
void C::sub_00df1260(ushort param_2, undefined2 param_3)
{
    int * param_1 = (int *)this;

  *(undefined2 *)(*param_1 + 2 + (uint)param_2 * 8) = param_3;
  return;
}
