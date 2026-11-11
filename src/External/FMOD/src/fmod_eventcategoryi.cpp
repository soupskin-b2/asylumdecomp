// fmod_eventcategoryi.cpp: 2 functions
// Placed here by: neighbours 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

extern char g_023dfd54[];
struct C { void sub_017e49a0(void); };

// @baa 0x017e49a0
void C::sub_017e49a0(void) { *(int*)((char*)this + 0) = (int)g_023dfd54; }

struct C_017e49b0 {
    undefined4 * sub_017e49b0(byte);
};

int sub_00402660(...);
// @baa 0x017e49b0
undefined4 * C_017e49b0::sub_017e49b0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023dfd54));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}
