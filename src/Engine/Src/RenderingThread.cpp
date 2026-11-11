// RenderingThread.cpp: 2 functions
// Placed here by: neighbours 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

extern char g_01edead4[];
// @baa 0x00715760
int sub_00715760(void) { return (int)g_01edead4; }

struct C {
    undefined4 sub_0071f7e0();
};

int sub_0071f770(void);
// @baa 0x0071f7e0
undefined4 C::sub_0071f7e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0071f770();
  return *param_1;
}
