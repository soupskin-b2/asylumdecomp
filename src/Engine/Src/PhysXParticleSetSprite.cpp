// PhysXParticleSetSprite.cpp: 1 function
// Placed here by: neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    void sub_00e00550();
};

int sub_00e001b0(void);
extern undefined * g_020e337c;
// @baa 0x00e00550
void C::sub_00e00550(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_020e337c);
  sub_00e001b0();
  return;
}
