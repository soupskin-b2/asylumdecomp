// UnPhysCollision.cpp: 3 functions
// Placed here by: callers 3.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C_00a026a0 { int a, b, c; C_00a026a0(); };

// @baa 0x00a026a0
C_00a026a0::C_00a026a0() : a(0), b(0), c(0) {}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C { void* Data; int Num; int Max; void sub_00a15700(); };

// @baa 0x00a15700
void C::sub_00a15700() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

// @baa 0x00d6b8d0
void sub_00d6b8d0(int param_1, float * param_2)
{
  *(float *)(param_1 + 0x24) = *param_2 * *(float *)(param_1 + 0x24);
  *(float *)(param_1 + 0x28) = param_2[1] * *(float *)(param_1 + 0x28);
  *(float *)(param_1 + 0x2c) = param_2[2] * *(float *)(param_1 + 0x2c);
  return;
}
