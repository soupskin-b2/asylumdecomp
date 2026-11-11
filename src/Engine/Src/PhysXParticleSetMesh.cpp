// PhysXParticleSetMesh.cpp: 3 functions
// Placed here by: callers 2, neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C { void* Data; int Num; int Max; void sub_00dff280(); };

// @baa 0x00dff280
void C::sub_00dff280() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00e003f0 {
    void sub_00e003f0();
};

int sub_00e001b0(void);
extern undefined * g_020e336c;
// @baa 0x00e003f0
void C_00e003f0::sub_00e003f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_020e336c);
  sub_00e001b0();
  return;
}

struct C_00e0cb00 {
    undefined4 sub_00e0cb00(undefined4);
    int sub_00e09ae0(int);
};

int sub_0053df40(...);
// @baa 0x00e0cb00
undefined4 C_00e0cb00::sub_00e0cb00(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  ((C_00e0cb00 *)(this))->sub_00e09ae0(param_2);
  if (*(int *)(param_1 + 0x18) == 0) {
    return 0;
  }
  uVar1 = sub_0053df40(*(int *)(param_1 + 0x14) * 0x30,8);
  *(undefined4 *)(*(int *)(param_1 + 0x18) + 0xd8) = uVar1;
  return *(undefined4 *)(*(int *)(param_1 + 0x18) + 0xd8);
}
