// UnContentStreaming.cpp (part 2 of 2): 1 function
// Placed here by: callers 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

extern undefined4 g_026b2254;
extern undefined4 g_026b2258;
// @baa 0x00717c90
undefined4 * sub_00717c90(void)
{
  if (g_026b2258 == 0) {
    g_026b2258 = g_026b2254;
  }
  return &g_026b2258;
}
